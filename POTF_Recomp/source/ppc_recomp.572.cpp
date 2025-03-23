#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8326FFA0"))) PPC_WEAK_FUNC(sub_8326FFA0);
PPC_FUNC_IMPL(__imp__sub_8326FFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x8326FFA8;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r26,r28,0,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// rlwinm r21,r10,25,25,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// b 0x8327011c
	goto loc_8327011C;
loc_8326FFE4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8326FFE8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8327002c
	if (ctx.cr6.eq) goto loc_8327002C;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83270014
	if (ctx.cr6.eq) goto loc_83270014;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x83270014
	if (!ctx.cr6.eq) goto loc_83270014;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327001c
	if (!ctx.cr0.eq) goto loc_8327001C;
loc_83270014:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8326ffe8
	goto loc_8326FFE8;
loc_8327001C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x83270114
	goto loc_83270114;
loc_8327002C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x83270114
	if (!ctx.cr6.eq) goto loc_83270114;
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83270054
	if (ctx.cr0.eq) goto loc_83270054;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,648(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 648);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8327c900
	ctx.lr = 0x83270054;
	sub_8327C900(ctx, base);
loc_83270054:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83259cc0
	ctx.lr = 0x83270060;
	sub_83259CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83270114
	if (!ctx.cr0.eq) goto loc_83270114;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8325e280
	ctx.lr = 0x8327007C;
	sub_8325E280(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// bgt cr6,0x83270114
	if (ctx.cr6.gt) goto loc_83270114;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83258a08
	ctx.lr = 0x83270098;
	sub_83258A08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x83270114
	if (ctx.cr6.lt) goto loc_83270114;
	// bne cr6,0x832700b0
	if (!ctx.cr6.eq) goto loc_832700B0;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x83270114
	if (!ctx.cr6.gt) goto loc_83270114;
loc_832700B0:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8326f858
	ctx.lr = 0x832700C8;
	sub_8326F858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83270114
	if (!ctx.cr0.eq) goto loc_83270114;
	// lwz r11,652(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 652);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x83270108
	if (ctx.cr6.gt) goto loc_83270108;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// b 0x83270114
	goto loc_83270114;
loc_83270108:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8325fe40
	ctx.lr = 0x83270114;
	sub_8325FE40(ctx, base);
loc_83270114:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_8327011C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83270130
	if (!ctx.cr0.eq) goto loc_83270130;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8326ffe4
	if (!ctx.cr0.eq) goto loc_8326FFE4;
loc_83270130:
	// lwz r31,40(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// b 0x83270268
	goto loc_83270268;
loc_83270138:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8327013C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83270178
	if (ctx.cr6.eq) goto loc_83270178;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x83270160
	if (!ctx.cr6.eq) goto loc_83270160;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83270168
	if (!ctx.cr0.eq) goto loc_83270168;
loc_83270160:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8327013c
	goto loc_8327013C;
loc_83270168:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x83270260
	goto loc_83270260;
loc_83270178:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x83270260
	if (!ctx.cr6.eq) goto loc_83270260;
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832701a0
	if (ctx.cr0.eq) goto loc_832701A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,648(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 648);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8327c900
	ctx.lr = 0x832701A0;
	sub_8327C900(ctx, base);
loc_832701A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83259cc0
	ctx.lr = 0x832701AC;
	sub_83259CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83270260
	if (!ctx.cr0.eq) goto loc_83270260;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8325e280
	ctx.lr = 0x832701C8;
	sub_8325E280(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// bgt cr6,0x83270260
	if (ctx.cr6.gt) goto loc_83270260;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83258a08
	ctx.lr = 0x832701E4;
	sub_83258A08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x83270260
	if (ctx.cr6.lt) goto loc_83270260;
	// bne cr6,0x832701fc
	if (!ctx.cr6.eq) goto loc_832701FC;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x83270260
	if (!ctx.cr6.gt) goto loc_83270260;
loc_832701FC:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8326f858
	ctx.lr = 0x83270214;
	sub_8326F858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83270260
	if (!ctx.cr0.eq) goto loc_83270260;
	// lwz r11,652(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 652);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x83270254
	if (ctx.cr6.gt) goto loc_83270254;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// b 0x83270260
	goto loc_83270260;
loc_83270254:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8325fe40
	ctx.lr = 0x83270260;
	sub_8325FE40(ctx, base);
loc_83270260:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_83270268:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83270278
	if (!ctx.cr0.eq) goto loc_83270278;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83270138
	if (!ctx.cr6.eq) goto loc_83270138;
loc_83270278:
	// lwz r11,28(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832702b0
	if (!ctx.cr0.eq) goto loc_832702B0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832702b0
	if (ctx.cr0.eq) goto loc_832702B0;
loc_8327028C:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832702b0
	if (!ctx.cr0.eq) goto loc_832702B0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327028c
	if (!ctx.cr6.eq) goto loc_8327028C;
loc_832702B0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x832702cc
	if (ctx.cr6.eq) goto loc_832702CC;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83266038
	ctx.lr = 0x832702CC;
	sub_83266038(ctx, base);
loc_832702CC:
	// addi r11,r23,0
	ctx.r11.s64 = ctx.r23.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832702E4"))) PPC_WEAK_FUNC(sub_832702E4);
PPC_FUNC_IMPL(__imp__sub_832702E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832702E8"))) PPC_WEAK_FUNC(sub_832702E8);
PPC_FUNC_IMPL(__imp__sub_832702E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832702F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83270368
	if (!ctx.cr0.eq) goto loc_83270368;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8326f568
	ctx.lr = 0x83270318;
	sub_8326F568(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83270368
	if (ctx.cr0.eq) goto loc_83270368;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83270368
	if (!ctx.cr0.eq) goto loc_83270368;
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// or r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 | ctx.r31.u64;
	// bl 0x83258a70
	ctx.lr = 0x8327034C;
	sub_83258A70(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x8325cb60
	ctx.lr = 0x8327035C;
	sub_8325CB60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83270368:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83270370"))) PPC_WEAK_FUNC(sub_83270370);
PPC_FUNC_IMPL(__imp__sub_83270370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x83270378;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r20,r22,4
	ctx.r20.s64 = ctx.r22.s64 + 4;
loc_83270390:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_83270394:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83270528
	if (ctx.cr6.eq) goto loc_83270528;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832703e8
	if (!ctx.cr6.eq) goto loc_832703E8;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// b 0x832703c0
	goto loc_832703C0;
loc_832703B8:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_832703C0:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x832703b8
	if (!ctx.cr6.eq) goto loc_832703B8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8321da98
	ctx.lr = 0x832703E4;
	sub_8321DA98(ctx, base);
	// b 0x83270504
	goto loc_83270504;
loc_832703E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// beq cr6,0x83270504
	if (ctx.cr6.eq) goto loc_83270504;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x83270504
	if (!ctx.cr6.eq) goto loc_83270504;
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327041c
	if (ctx.cr0.eq) goto loc_8327041C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,648(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 648);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8327c900
	ctx.lr = 0x8327041C;
	sub_8327C900(ctx, base);
loc_8327041C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83229f50
	ctx.lr = 0x83270424;
	sub_83229F50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327046c
	if (!ctx.cr0.eq) goto loc_8327046C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83259318
	ctx.lr = 0x83270438;
	sub_83259318(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327045c
	if (!ctx.cr0.eq) goto loc_8327045C;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83267598
	ctx.lr = 0x83270454;
	sub_83267598(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83270518
	if (!ctx.cr0.eq) goto loc_83270518;
loc_8327045C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259068
	ctx.lr = 0x83270464;
	sub_83259068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83270504
	if (ctx.cr0.eq) goto loc_83270504;
loc_8327046C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83259cc0
	ctx.lr = 0x83270478;
	sub_83259CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83270504
	if (!ctx.cr0.eq) goto loc_83270504;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x832704b0
	if (!ctx.cr6.eq) goto loc_832704B0;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x83270498;
	sub_8321D6D0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// ori r10,r23,1
	ctx.r10.u64 = ctx.r23.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_832704B0:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832704e0
	if (!ctx.cr0.eq) goto loc_832704E0;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832704e0
	if (ctx.cr0.eq) goto loc_832704E0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832704ec
	if (!ctx.cr6.gt) goto loc_832704EC;
loc_832704E0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8322be98
	ctx.lr = 0x832704EC;
	sub_8322BE98(ctx, base);
loc_832704EC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_83270504:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83270394
	if (!ctx.cr6.eq) goto loc_83270394;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// b 0x83270394
	goto loc_83270394;
loc_83270518:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832ef7b8
	ctx.lr = 0x83270524;
	sub_832EF7B8(ctx, base);
	// b 0x83270390
	goto loc_83270390;
loc_83270528:
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x832706ac
	if (!ctx.cr6.eq) goto loc_832706AC;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r22,44
	ctx.r27.s64 = ctx.r22.s64 + 44;
loc_83270540:
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832706ac
	if (!ctx.cr6.lt) goto loc_832706AC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_83270560:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832706a0
	if (ctx.cr6.eq) goto loc_832706A0;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832705b4
	if (!ctx.cr6.eq) goto loc_832705B4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x8327058c
	goto loc_8327058C;
loc_83270584:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8327058C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83270584
	if (!ctx.cr6.eq) goto loc_83270584;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8321da98
	ctx.lr = 0x832705B0;
	sub_8321DA98(ctx, base);
	// b 0x8327068c
	goto loc_8327068C;
loc_832705B4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x8327068c
	if (!ctx.cr6.eq) goto loc_8327068C;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8327068c
	if (ctx.cr6.eq) goto loc_8327068C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832705e4
	if (ctx.cr0.eq) goto loc_832705E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,648(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 648);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8327c900
	ctx.lr = 0x832705E4;
	sub_8327C900(ctx, base);
loc_832705E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259068
	ctx.lr = 0x832705EC;
	sub_83259068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327068c
	if (ctx.cr0.eq) goto loc_8327068C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83259cc0
	ctx.lr = 0x83270600;
	sub_83259CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327068c
	if (!ctx.cr0.eq) goto loc_8327068C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x83270638
	if (!ctx.cr6.eq) goto loc_83270638;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x83270620;
	sub_8321D6D0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// ori r10,r23,1
	ctx.r10.u64 = ctx.r23.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_83270638:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83270668
	if (!ctx.cr0.eq) goto loc_83270668;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83270668
	if (ctx.cr0.eq) goto loc_83270668;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83270674
	if (!ctx.cr6.gt) goto loc_83270674;
loc_83270668:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8322be98
	ctx.lr = 0x83270674;
	sub_8322BE98(ctx, base);
loc_83270674:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_8327068C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83270560
	if (!ctx.cr6.eq) goto loc_83270560;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// b 0x83270560
	goto loc_83270560;
loc_832706A0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x83270540
	goto loc_83270540;
loc_832706AC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x832709dc
	if (ctx.cr6.eq) goto loc_832709DC;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832706ec
	if (!ctx.cr0.eq) goto loc_832706EC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832706ec
	if (ctx.cr0.eq) goto loc_832706EC;
loc_832706CC:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832706ec
	if (!ctx.cr0.eq) goto loc_832706EC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832706cc
	if (!ctx.cr6.eq) goto loc_832706CC;
loc_832706EC:
	// mulli r25,r29,28
	ctx.r25.s64 = ctx.r29.s64 * 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8321e0d0
	ctx.lr = 0x83270700;
	sub_8321E0D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_83270708:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83270788
	if (!ctx.cr0.eq) goto loc_83270788;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83270788
	if (ctx.cr0.eq) goto loc_83270788;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8327077c
	if (!ctx.cr0.eq) goto loc_8327077C;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x8327077C;
	sub_83204D00(ctx, base);
loc_8327077C:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// b 0x83270708
	goto loc_83270708;
loc_83270788:
	// lwz r10,952(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 952);
	// addi r11,r24,948
	ctx.r11.s64 = ctx.r24.s64 + 948;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// stw r23,952(r24)
	PPC_STORE_U32(ctx.r24.u32 + 952, ctx.r23.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// beq cr6,0x832708e4
	if (ctx.cr6.eq) goto loc_832708E4;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_832707AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83229f50
	ctx.lr = 0x832707B4;
	sub_83229F50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832708d8
	if (ctx.cr0.eq) goto loc_832708D8;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_832707C4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x83270874
	if (ctx.cr6.eq) goto loc_83270874;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83270874
	if (!ctx.cr0.eq) goto loc_83270874;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8325ddb8
	ctx.lr = 0x832707F4;
	sub_8325DDB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83270874
	if (ctx.cr0.eq) goto loc_83270874;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi. r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// beq 0x83270874
	if (ctx.cr0.eq) goto loc_83270874;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83270818:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// rlwinm r8,r11,29,3,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r9,r9,58
	ctx.r9.u64 = ctx.r9.u64 & 0x3F;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// sld r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r6.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrldi r7,r11,58
	ctx.r7.u64 = ctx.r11.u64 & 0x3F;
	// li r6,-1
	ctx.r6.s64 = -1;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// sld r8,r6,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r7.u8 & 0x7F));
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srd r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// bne 0x83270818
	if (!ctx.cr0.eq) goto loc_83270818;
loc_83270874:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x832707c4
	if (!ctx.cr0.eq) goto loc_832707C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
loc_83270894:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832708d8
	if (ctx.cr6.eq) goto loc_832708D8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x832708c8
	if (!ctx.cr6.lt) goto loc_832708C8;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_832708C8:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x83270894
	goto loc_83270894;
loc_832708D8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne 0x832707ac
	if (!ctx.cr0.eq) goto loc_832707AC;
loc_832708E4:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r6,r11,-24528
	ctx.r6.s64 = ctx.r11.s64 + -24528;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb3100
	ctx.lr = 0x832708FC;
	sub_82CB3100(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83270964
	if (ctx.cr6.eq) goto loc_83270964;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_83270918:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8326f948
	ctx.lr = 0x8327093C;
	sub_8326F948(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327095c
	if (!ctx.cr0.eq) goto loc_8327095C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83270918
	if (ctx.cr6.lt) goto loc_83270918;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x83270964
	goto loc_83270964;
loc_8327095C:
	// li r28,1
	ctx.r28.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83270964:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832709c0
	if (ctx.cr0.eq) goto loc_832709C0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832709c0
	if (ctx.cr6.eq) goto loc_832709C0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8327097C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8326f948
	ctx.lr = 0x832709A0;
	sub_8326F948(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832709bc
	if (!ctx.cr0.eq) goto loc_832709BC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8327097c
	if (ctx.cr6.lt) goto loc_8327097C;
	// b 0x832709c0
	goto loc_832709C0;
loc_832709BC:
	// li r28,1
	ctx.r28.s64 = 1;
loc_832709C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83227d20
	ctx.lr = 0x832709D4;
	sub_83227D20(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83270518
	if (!ctx.cr0.eq) goto loc_83270518;
loc_832709DC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832709E4"))) PPC_WEAK_FUNC(sub_832709E4);
PPC_FUNC_IMPL(__imp__sub_832709E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832709E8"))) PPC_WEAK_FUNC(sub_832709E8);
PPC_FUNC_IMPL(__imp__sub_832709E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832709F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_83270A00:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
loc_83270A08:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83270aa0
	if (!ctx.cr6.lt) goto loc_83270AA0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83270a4c
	if (ctx.cr6.eq) goto loc_83270A4C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8326f8b0
	ctx.lr = 0x83270A34;
	sub_8326F8B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83270aac
	if (!ctx.cr0.eq) goto loc_83270AAC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x83270a58
	if (ctx.cr6.eq) goto loc_83270A58;
loc_83270A4C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x83270a08
	goto loc_83270A08;
loc_83270A58:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_83270A5C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83270a94
	if (ctx.cr6.eq) goto loc_83270A94;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83270a8c
	if (ctx.cr6.eq) goto loc_83270A8C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x83270a8c
	if (!ctx.cr6.eq) goto loc_83270A8C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83270a98
	if (!ctx.cr0.eq) goto loc_83270A98;
loc_83270A8C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83270a5c
	goto loc_83270A5C;
loc_83270A94:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83270A98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83270a00
	if (!ctx.cr6.eq) goto loc_83270A00;
loc_83270AA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83270AA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_83270AAC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x832ef7b8
	ctx.lr = 0x83270AB8;
	sub_832EF7B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83270aa4
	goto loc_83270AA4;
}

__attribute__((alias("__imp__sub_83270AC0"))) PPC_WEAK_FUNC(sub_83270AC0);
PPC_FUNC_IMPL(__imp__sub_83270AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x83270AC8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_83270AD4:
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,44
	ctx.r25.s64 = 44;
loc_83270ADC:
	// lwz r27,8(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r27,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 13) & 0x7;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83270bec
	if (!ctx.cr6.lt) goto loc_83270BEC;
	// lwzx r26,r25,r30
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r30.u32);
	// lwz r31,12(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83229f50
	ctx.lr = 0x83270AFC;
	sub_83229F50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83270bcc
	if (ctx.cr0.eq) goto loc_83270BCC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83270bcc
	if (!ctx.cr6.lt) goto loc_83270BCC;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r30,44
	ctx.r29.s64 = ctx.r30.s64 + 44;
loc_83270B20:
	// rlwinm r11,r27,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 13) & 0x7;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83270bc4
	if (!ctx.cr6.lt) goto loc_83270BC4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83270bc4
	if (ctx.cr6.eq) goto loc_83270BC4;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83270b68
	if (ctx.cr6.eq) goto loc_83270B68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8326f8b0
	ctx.lr = 0x83270B50;
	sub_8326F8B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83270bd8
	if (!ctx.cr0.eq) goto loc_83270BD8;
	// lwz r27,8(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r27,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x83270b74
	if (ctx.cr6.eq) goto loc_83270B74;
loc_83270B68:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83270b20
	goto loc_83270B20;
loc_83270B74:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83270B78:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83270bb8
	if (ctx.cr6.eq) goto loc_83270BB8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83270ba8
	if (ctx.cr6.eq) goto loc_83270BA8;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x83270ba8
	if (!ctx.cr6.eq) goto loc_83270BA8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83270bb0
	if (!ctx.cr0.eq) goto loc_83270BB0;
loc_83270BA8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83270b78
	goto loc_83270B78;
loc_83270BB0:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// b 0x83270bbc
	goto loc_83270BBC;
loc_83270BB8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83270BBC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83270ad4
	if (!ctx.cr6.eq) goto loc_83270AD4;
loc_83270BC4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83270bec
	if (ctx.cr6.eq) goto loc_83270BEC;
loc_83270BCC:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// b 0x83270adc
	goto loc_83270ADC;
loc_83270BD8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x832ef7b8
	ctx.lr = 0x83270BE4;
	sub_832EF7B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83270bf0
	goto loc_83270BF0;
loc_83270BEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83270BF0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83270BF8"))) PPC_WEAK_FUNC(sub_83270BF8);
PPC_FUNC_IMPL(__imp__sub_83270BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83270C00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lis r28,1
	ctx.r28.s64 = 65536;
	// lwz r11,652(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x83270c54
	if (ctx.cr6.gt) goto loc_83270C54;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83270c3c
	if (ctx.cr6.lt) goto loc_83270C3C;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83270c40
	if (!ctx.cr6.gt) goto loc_83270C40;
loc_83270C3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83270C40:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83270c54
	if (ctx.cr0.eq) goto loc_83270C54;
	// rlwinm r11,r10,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x83270c64
	if (!ctx.cr6.eq) goto loc_83270C64;
loc_83270C54:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83270370
	ctx.lr = 0x83270C64;
	sub_83270370(ctx, base);
loc_83270C64:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83270C68:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83270c94
	if (ctx.cr6.eq) goto loc_83270C94;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83270c8c
	if (ctx.cr6.eq) goto loc_83270C8C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x83270c94
	if (ctx.cr6.eq) goto loc_83270C94;
loc_83270C8C:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x83270c68
	goto loc_83270C68;
loc_83270C94:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83259cc0
	ctx.lr = 0x83270CA0;
	sub_83259CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83270d00
	if (!ctx.cr0.eq) goto loc_83270D00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83270d00
	if (ctx.cr6.eq) goto loc_83270D00;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8325fd40
	ctx.lr = 0x83270CC0;
	sub_8325FD40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83229f50
	ctx.lr = 0x83270CC8;
	sub_83229F50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83270d84
	if (ctx.cr0.eq) goto loc_83270D84;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x83270d84
	if (!ctx.cr6.lt) goto loc_83270D84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832709e8
	ctx.lr = 0x83270CF0;
	sub_832709E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83270d84
	if (ctx.cr0.eq) goto loc_83270D84;
loc_83270CF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83270d88
	goto loc_83270D88;
loc_83270D00:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x83270d84
	if (!ctx.cr6.eq) goto loc_83270D84;
	// lwz r31,28(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83270d6c
	if (!ctx.cr0.eq) goto loc_83270D6C;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x83270d6c
	if (ctx.cr0.eq) goto loc_83270D6C;
loc_83270D24:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83270d54
	if (ctx.cr6.eq) goto loc_83270D54;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x83270d54
	if (!ctx.cr6.eq) goto loc_83270D54;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83267820
	ctx.lr = 0x83270D4C;
	sub_83267820(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83270d90
	if (!ctx.cr0.eq) goto loc_83270D90;
loc_83270D54:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83270d6c
	if (!ctx.cr0.eq) goto loc_83270D6C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83270d24
	if (!ctx.cr6.eq) goto loc_83270D24;
loc_83270D6C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83270ac0
	ctx.lr = 0x83270D78;
	sub_83270AC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x83270d88
	if (!ctx.cr0.eq) goto loc_83270D88;
loc_83270D84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83270D88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_83270D90:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832ef7b8
	ctx.lr = 0x83270D9C;
	sub_832EF7B8(ctx, base);
	// b 0x83270cf8
	goto loc_83270CF8;
}

__attribute__((alias("__imp__sub_83270DA0"))) PPC_WEAK_FUNC(sub_83270DA0);
PPC_FUNC_IMPL(__imp__sub_83270DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x83270DA8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ae8
	ctx.lr = 0x83270DB0;
	__savefpr_28(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f28,-18352(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// lfs f31,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// stw r31,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r31.u32);
	// lfs f29,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f29.f64 = double(temp.f32);
	// lfd f30,-18344(r8)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18344);
loc_83270DDC:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83270e00
	if (ctx.cr6.eq) goto loc_83270E00;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83242638
	ctx.lr = 0x83270E00;
	sub_83242638(ctx, base);
loc_83270E00:
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x83270E10;
	sub_8321D6D0(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r5,38
	ctx.r5.s64 = 38;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x83270E34;
	sub_8321D6D0(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stw r3,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r3.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r5,45
	ctx.r5.s64 = 45;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x83270E5C;
	sub_8321D6D0(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stw r3,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r3.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r5,38
	ctx.r5.s64 = 38;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x83270E84;
	sub_8321D6D0(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stw r3,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r3.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// ori r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 4096;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bne 0x83275750
	if (!ctx.cr0.eq) goto loc_83275750;
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq 0x83275750
	if (ctx.cr0.eq) goto loc_83275750;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_83270F00:
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83270f34
	if (ctx.cr0.eq) goto loc_83270F34;
	// lwz r11,28(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83270f28
	if (ctx.cr0.eq) goto loc_83270F28;
	// lwz r11,36(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// addi r9,r7,32
	ctx.r9.s64 = ctx.r7.s64 + 32;
	// b 0x83270f3c
	goto loc_83270F3C;
loc_83270F28:
	// lwz r11,28(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// addi r9,r7,24
	ctx.r9.s64 = ctx.r7.s64 + 24;
	// b 0x83270f3c
	goto loc_83270F3C;
loc_83270F34:
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// addi r9,r7,16
	ctx.r9.s64 = ctx.r7.s64 + 16;
loc_83270F3C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83270fbc
	if (ctx.cr0.eq) goto loc_83270FBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83270fbc
	goto loc_83270FBC;
loc_83270F4C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// rlwinm r6,r6,0,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83270f7c
	if (!ctx.cr0.eq) goto loc_83270F7C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83270f4c
	if (!ctx.cr6.eq) goto loc_83270F4C;
loc_83270F7C:
	// addi r8,r7,32
	ctx.r8.s64 = ctx.r7.s64 + 32;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83270fc4
	if (ctx.cr6.eq) goto loc_83270FC4;
	// addi r10,r7,24
	ctx.r10.s64 = ctx.r7.s64 + 24;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83270fac
	if (ctx.cr6.eq) goto loc_83270FAC;
	// lwz r11,28(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83270fac
	if (!ctx.cr0.eq) goto loc_83270FAC;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x83270fb4
	goto loc_83270FB4;
loc_83270FAC:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_83270FB4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83270fc4
	if (!ctx.cr0.eq) goto loc_83270FC4;
loc_83270FBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83270f4c
	if (!ctx.cr6.eq) goto loc_83270F4C;
loc_83270FC4:
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r7,556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 556, ctx.r7.u32);
loc_83270FD4:
	// lwz r21,96(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r11,r21,16
	ctx.r11.s64 = ctx.r21.s64 + 16;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// lwz r31,20(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// clrlwi. r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327109c
	if (!ctx.cr0.eq) goto loc_8327109C;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8327109c
	if (ctx.cr0.eq) goto loc_8327109C;
	// lwz r22,468(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
loc_83270FFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d798
	ctx.lr = 0x83271004;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83271020
	if (ctx.cr0.eq) goto loc_83271020;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x83271020;
	sub_832F6CC8(ctx, base);
loc_83271020:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83271068
	if (ctx.cr6.eq) goto loc_83271068;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne 0x83271040
	if (!ctx.cr0.eq) goto loc_83271040;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83271040:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83271058
	if (!ctx.cr6.eq) goto loc_83271058;
loc_83271048:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x83271088
	goto loc_83271088;
loc_83271058:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832710a0
	if (!ctx.cr0.eq) goto loc_832710A0;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x83271090
	goto loc_83271090;
loc_83271068:
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// addi r10,r21,16
	ctx.r10.s64 = ctx.r21.s64 + 16;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327107c
	if (ctx.cr0.eq) goto loc_8327107C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8327107C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83271048
	if (ctx.cr6.eq) goto loc_83271048;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_83271088:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832710a0
	if (!ctx.cr0.eq) goto loc_832710A0;
loc_83271090:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83270ffc
	if (!ctx.cr6.eq) goto loc_83270FFC;
	// b 0x832710a0
	goto loc_832710A0;
loc_8327109C:
	// lwz r22,468(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
loc_832710A0:
	// lwz r31,28(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// addi r11,r21,24
	ctx.r11.s64 = ctx.r21.s64 + 24;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// clrlwi. r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83271884
	if (!ctx.cr0.eq) goto loc_83271884;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x83271884
	if (ctx.cr0.eq) goto loc_83271884;
loc_832710BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259068
	ctx.lr = 0x832710C4;
	sub_83259068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327180c
	if (ctx.cr0.eq) goto loc_8327180C;
	// stw r20,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r20.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83259cc0
	ctx.lr = 0x832710DC;
	sub_83259CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327180c
	if (!ctx.cr0.eq) goto loc_8327180C;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r30,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x832714a4
	if (ctx.cr6.eq) goto loc_832714A4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x83271424
	if (ctx.cr6.eq) goto loc_83271424;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x83271334
	if (ctx.cr6.eq) goto loc_83271334;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x832711e4
	if (ctx.cr6.eq) goto loc_832711E4;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8327180c
	if (!ctx.cr6.eq) goto loc_8327180C;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83238210
	ctx.lr = 0x83271120;
	sub_83238210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327180c
	if (ctx.cr0.eq) goto loc_8327180C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x832f6460
	ctx.lr = 0x83271148;
	sub_832F6460(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r28,r11,7,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x83232e10
	ctx.lr = 0x83271160;
	sub_83232E10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwimi r11,r28,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x83232570
	ctx.lr = 0x83271178;
	sub_83232570(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_8327118C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8325bfe0
	ctx.lr = 0x832711A0;
	sub_8325BFE0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832711bc
	if (ctx.cr0.eq) goto loc_832711BC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_832711BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83253180
	ctx.lr = 0x832711C4;
	sub_83253180(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x8325ad98
	ctx.lr = 0x832711DC;
	sub_8325AD98(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x832717f8
	goto loc_832717F8;
loc_832711E4:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83238210
	ctx.lr = 0x832711F0;
	sub_83238210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327180c
	if (ctx.cr0.eq) goto loc_8327180C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x832f6460
	ctx.lr = 0x83271218;
	sub_832F6460(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832712a0
	if (ctx.cr0.eq) goto loc_832712A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8322a4b8
	ctx.lr = 0x83271238;
	sub_8322A4B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r30,r11,7,29,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x83232e10
	ctx.lr = 0x8327125C;
	sub_83232E10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwimi r11,r30,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x83232570
	ctx.lr = 0x83271274;
	sub_83232570(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_8327128C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8325c1e0
	ctx.lr = 0x8327129C;
	sub_8325C1E0(ctx, base);
	// b 0x832712f0
	goto loc_832712F0;
loc_832712A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r27,r11,7,29,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x83232e10
	ctx.lr = 0x832712B0;
	sub_83232E10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwimi r11,r27,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x83232570
	ctx.lr = 0x832712C8;
	sub_83232570(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
loc_832712E0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8325c0e0
	ctx.lr = 0x832712F0;
	sub_8325C0E0(ctx, base);
loc_832712F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327130c
	if (ctx.cr0.eq) goto loc_8327130C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8327130C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83253180
	ctx.lr = 0x83271314;
	sub_83253180(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x8325ad98
	ctx.lr = 0x8327132C;
	sub_8325AD98(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x832717f8
	goto loc_832717F8;
loc_83271334:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83238210
	ctx.lr = 0x83271340;
	sub_83238210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327180c
	if (ctx.cr0.eq) goto loc_8327180C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x832f6460
	ctx.lr = 0x83271368;
	sub_832F6460(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832713e0
	if (ctx.cr0.eq) goto loc_832713E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8322a4b8
	ctx.lr = 0x83271388;
	sub_8322A4B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r30,r11,7,29,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x83232e10
	ctx.lr = 0x832713AC;
	sub_83232E10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwimi r11,r30,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x83232570
	ctx.lr = 0x832713C4;
	sub_83232570(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x832712e0
	goto loc_832712E0;
loc_832713E0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r27,r11,7,29,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x83232e10
	ctx.lr = 0x832713F0;
	sub_83232E10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwimi r11,r27,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x83232570
	ctx.lr = 0x83271408;
	sub_83232570(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// b 0x8327128c
	goto loc_8327128C;
loc_83271424:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83238210
	ctx.lr = 0x83271430;
	sub_83238210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327180c
	if (ctx.cr0.eq) goto loc_8327180C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x832f6460
	ctx.lr = 0x83271458;
	sub_832F6460(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r27,r11,7,29,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x83232e10
	ctx.lr = 0x83271474;
	sub_83232E10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwimi r11,r27,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x83232570
	ctx.lr = 0x8327148C;
	sub_83232570(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x8327118c
	goto loc_8327118C;
loc_832714A4:
	// lwz r24,44(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327180c
	if (!ctx.cr0.eq) goto loc_8327180C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8321cb38
	ctx.lr = 0x832714C0;
	sub_8321CB38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327180c
	if (ctx.cr0.eq) goto loc_8327180C;
	// lwz r29,12(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83259068
	ctx.lr = 0x832714D4;
	sub_83259068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327180c
	if (ctx.cr0.eq) goto loc_8327180C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r30,9,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 9) & 0x1FF;
	// rlwinm r11,r11,9,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327180c
	if (!ctx.cr0.eq) goto loc_8327180C;
	// li r4,809
	ctx.r4.s64 = 809;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83258000
	ctx.lr = 0x83271500;
	sub_83258000(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327180c
	if (ctx.cr0.eq) goto loc_8327180C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832f04e8
	ctx.lr = 0x83271514;
	sub_832F04E8(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// rlwinm r10,r27,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// addi r30,r10,36
	ctx.r30.s64 = ctx.r10.s64 + 36;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r30,-36
	ctx.r7.s64 = ctx.r30.s64 + -36;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r28,r27,44
	ctx.r28.s64 = ctx.r27.s64 + 44;
	// subf r25,r27,r29
	ctx.r25.s64 = ctx.r29.s64 - ctx.r27.s64;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8327155C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8327160c
	if (!ctx.cr6.lt) goto loc_8327160C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r25,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r28.u32);
	// bl 0x83232fe0
	ctx.lr = 0x83271578;
	sub_83232FE0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83271600
	if (ctx.cr0.eq) goto loc_83271600;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// beq cr6,0x83271600
	if (ctx.cr6.eq) goto loc_83271600;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// rlwinm r8,r11,27,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x6;
	// rlwinm r7,r11,29,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// srw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r8,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r8,r11,31,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// srw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwimi r8,r7,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r9,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r11,r8,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwimi r10,r11,0,4,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83271600:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x8327155c
	goto loc_8327155C;
loc_8327160C:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_83271610:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83271638
	if (ctx.cr6.eq) goto loc_83271638;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83271630
	if (!ctx.cr0.eq) goto loc_83271630;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83232fe0
	ctx.lr = 0x83271630;
	sub_83232FE0(ctx, base);
loc_83271630:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x83271610
	goto loc_83271610;
loc_83271638:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rlwimi r10,r11,0,15,17
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// rlwinm r11,r9,0,16,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r10,r9,0,27,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1E) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE1);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r9,r10,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// rlwinm r11,r9,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832717f4
	if (ctx.cr0.eq) goto loc_832717F4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x832717e0
	goto loc_832717E0;
loc_83271688:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832716a4
	if (ctx.cr6.lt) goto loc_832716A4;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x832716a8
	if (!ctx.cr6.gt) goto loc_832716A8;
loc_832716A4:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_832716A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832717d8
	if (ctx.cr0.eq) goto loc_832717D8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_832716B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832716d8
	if (ctx.cr6.eq) goto loc_832716D8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x832716d0
	if (ctx.cr6.eq) goto loc_832716D0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x832716b4
	goto loc_832716B4;
loc_832716D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832716dc
	goto loc_832716DC;
loc_832716D8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_832716DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832717d8
	if (!ctx.cr0.eq) goto loc_832717D8;
	// lwz r26,0(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_832716E8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832717d8
	if (ctx.cr6.eq) goto loc_832717D8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83271764
	if (ctx.cr0.eq) goto loc_83271764;
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83271764
	if (ctx.cr0.eq) goto loc_83271764;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8323f010
	ctx.lr = 0x83271714;
	sub_8323F010(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8323f010
	ctx.lr = 0x83271724;
	sub_8323F010(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x83271758
	if (ctx.cr6.eq) goto loc_83271758;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8323f9b0
	ctx.lr = 0x83271740;
	sub_8323F9B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8323f9b0
	ctx.lr = 0x83271750;
	sub_8323F9B0(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8327175c
	if (!ctx.cr6.eq) goto loc_8327175C;
loc_83271758:
	// li r28,1
	ctx.r28.s64 = 1;
loc_8327175C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327176c
	if (!ctx.cr0.eq) goto loc_8327176C;
loc_83271764:
	// lwz r26,4(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// b 0x832716e8
	goto loc_832716E8;
loc_8327176C:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832717c8
	if (ctx.cr0.eq) goto loc_832717C8;
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_8327177C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832717d8
	if (ctx.cr6.eq) goto loc_832717D8;
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832717c0
	if (ctx.cr6.eq) goto loc_832717C0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832717c0
	if (ctx.cr0.eq) goto loc_832717C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832f15c8
	ctx.lr = 0x832717A8;
	sub_832F15C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832717c0
	if (ctx.cr0.eq) goto loc_832717C0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832330a8
	ctx.lr = 0x832717C0;
	sub_832330A8(ctx, base);
loc_832717C0:
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x8327177c
	goto loc_8327177C;
loc_832717C8:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832330a8
	ctx.lr = 0x832717D8;
	sub_832330A8(ctx, base);
loc_832717D8:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_832717E0:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832717f4
	if (!ctx.cr0.eq) goto loc_832717F4;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r25,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r25.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x83271688
	if (!ctx.cr0.eq) goto loc_83271688;
loc_832717F4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_832717F8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,228
	ctx.r6.s64 = 228;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83263c48
	ctx.lr = 0x8327180C;
	sub_83263C48(ctx, base);
loc_8327180C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x83271854
	if (ctx.cr6.eq) goto loc_83271854;
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne 0x8327182c
	if (!ctx.cr0.eq) goto loc_8327182C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8327182C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83271844
	if (!ctx.cr6.eq) goto loc_83271844;
loc_83271834:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x83271874
	goto loc_83271874;
loc_83271844:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83271884
	if (!ctx.cr0.eq) goto loc_83271884;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x8327187c
	goto loc_8327187C;
loc_83271854:
	// lwz r11,28(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// addi r10,r21,24
	ctx.r10.s64 = ctx.r21.s64 + 24;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83271868
	if (ctx.cr0.eq) goto loc_83271868;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83271868:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83271834
	if (ctx.cr6.eq) goto loc_83271834;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_83271874:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83271884
	if (!ctx.cr0.eq) goto loc_83271884;
loc_8327187C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832710bc
	if (!ctx.cr6.eq) goto loc_832710BC;
loc_83271884:
	// lwz r31,36(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// addi r11,r21,32
	ctx.r11.s64 = ctx.r21.s64 + 32;
	// clrlwi. r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832718c8
	if (!ctx.cr0.eq) goto loc_832718C8;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x832718c8
	if (ctx.cr0.eq) goto loc_832718C8;
loc_8327189C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259068
	ctx.lr = 0x832718A4;
	sub_83259068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832718b0
	if (ctx.cr0.eq) goto loc_832718B0;
	// stw r20,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r20.u32);
loc_832718B0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832718c8
	if (!ctx.cr0.eq) goto loc_832718C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8327189c
	if (!ctx.cr6.eq) goto loc_8327189C;
loc_832718C8:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832ef7b8
	ctx.lr = 0x832718D4;
	sub_832EF7B8(ctx, base);
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x832718E8;
	sub_8321D6D0(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// addi r10,r21,24
	ctx.r10.s64 = ctx.r21.s64 + 24;
	// addi r11,r14,4
	ctx.r11.s64 = ctx.r14.s64 + 4;
	// ori r10,r14,1
	ctx.r10.u64 = ctx.r14.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r14)
	PPC_STORE_U32(ctx.r14.u32 + 4, ctx.r10.u32);
	// stw r11,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272214
	if (!ctx.cr0.eq) goto loc_83272214;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83272214
	if (ctx.cr0.eq) goto loc_83272214;
loc_8327191C:
	// lwz r31,8(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r11,r31,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x832719e4
	if (!ctx.cr6.eq) goto loc_832719E4;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// rlwinm r6,r31,13,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 13) & 0x7;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r10,r23,44
	ctx.r10.s64 = ctx.r23.s64 + 44;
loc_8327193C:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8327195c
	if (!ctx.cr6.lt) goto loc_8327195C;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// b 0x8327193c
	goto loc_8327193C;
loc_8327195C:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// li r8,100
	ctx.r8.s64 = 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8326ef20
	ctx.lr = 0x8327197C;
	sub_8326EF20(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832721f8
	if (!ctx.cr0.eq) goto loc_832721F8;
	// lwz r10,336(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 336);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x832721f8
	if (!ctx.cr6.gt) goto loc_832721F8;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_83271998:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832719cc
	if (ctx.cr6.eq) goto loc_832719CC;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832719c4
	if (ctx.cr6.eq) goto loc_832719C4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r8,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x832719c4
	if (ctx.cr0.eq) goto loc_832719C4;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832721f8
	if (ctx.cr0.eq) goto loc_832721F8;
loc_832719C4:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x83271998
	goto loc_83271998;
loc_832719CC:
	// li r10,111
	ctx.r10.s64 = 111;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
	// b 0x832721f8
	goto loc_832721F8;
loc_832719E4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83271c8c
	if (!ctx.cr6.eq) goto loc_83271C8C;
	// rlwinm r25,r31,31,28,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0xF;
loc_832719F0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83271f28
	if (ctx.cr6.eq) goto loc_83271F28;
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// lwz r8,28(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,44(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// andc r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 & ~ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// subfic r31,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r31.s64 = 31 - ctx.r11.s64;
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x832eefb8
	ctx.lr = 0x83271A2C;
	sub_832EEFB8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,28(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// addi r7,r1,172
	ctx.r7.s64 = ctx.r1.s64 + 172;
	// lwz r3,48(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// addi r6,r1,188
	ctx.r6.s64 = ctx.r1.s64 + 188;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832eefb8
	ctx.lr = 0x83271A50;
	sub_832EEFB8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x83271a78
	if (ctx.cr6.eq) goto loc_83271A78;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x83271c7c
	if (!ctx.cr6.eq) goto loc_83271C7C;
loc_83271A78:
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x83271A88;
	sub_8321D6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// ori r11,r29,1
	ctx.r11.u64 = ctx.r29.u64 | 1;
	// ori r10,r30,1
	ctx.r10.u64 = ctx.r30.u64 | 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83263438
	ctx.lr = 0x83271AB4;
	sub_83263438(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83271aec
	if (!ctx.cr0.eq) goto loc_83271AEC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83271aec
	if (ctx.cr0.eq) goto loc_83271AEC;
loc_83271ACC:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83271aec
	if (!ctx.cr0.eq) goto loc_83271AEC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83271acc
	if (!ctx.cr6.eq) goto loc_83271ACC;
loc_83271AEC:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// ble cr6,0x83271c6c
	if (!ctx.cr6.gt) goto loc_83271C6C;
	// rlwinm r26,r31,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8321e0d0
	ctx.lr = 0x83271B08;
	sub_8321E0D0(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_83271B18:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83271bd4
	if (!ctx.cr0.eq) goto loc_83271BD4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83271bd4
	if (ctx.cr0.eq) goto loc_83271BD4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 65536;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83271b78
	if (ctx.cr0.eq) goto loc_83271B78;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x83271b84
	goto loc_83271B84;
loc_83271B78:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_83271B84:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x83271bcc
	if (!ctx.cr0.eq) goto loc_83271BCC;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83204d00
	ctx.lr = 0x83271BCC;
	sub_83204D00(ctx, base);
loc_83271BCC:
	// addi r28,r28,-8
	ctx.r28.s64 = ctx.r28.s64 + -8;
	// b 0x83271b18
	goto loc_83271B18;
loc_83271BD4:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8326ef20
	ctx.lr = 0x83271BF8;
	sub_8326EF20(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83271c58
	if (ctx.cr6.eq) goto loc_83271C58;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_83271C04:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83271c4c
	if (!ctx.cr6.eq) goto loc_83271C4C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x83271c2c
	goto loc_83271C2C;
loc_83271C24:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83271C2C:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x83271c24
	if (!ctx.cr6.eq) goto loc_83271C24;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8321da98
	ctx.lr = 0x83271C4C;
	sub_8321DA98(ctx, base);
loc_83271C4C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x83271c04
	if (!ctx.cr0.eq) goto loc_83271C04;
loc_83271C58:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83227d20
	ctx.lr = 0x83271C6C;
	sub_83227D20(ctx, base);
loc_83271C6C:
	// lwz r10,952(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 952);
	// addi r11,r22,948
	ctx.r11.s64 = ctx.r22.s64 + 948;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r29,952(r22)
	PPC_STORE_U32(ctx.r22.u32 + 952, ctx.r29.u32);
loc_83271C7C:
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// andc r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 & ~ctx.r11.u64;
	// subf r25,r11,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r11.s64;
	// b 0x832719f0
	goto loc_832719F0;
loc_83271C8C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x83271f28
	if (!ctx.cr6.eq) goto loc_83271F28;
	// lwz r4,48(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// lwz r3,44(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// bl 0x8321cb38
	ctx.lr = 0x83271CA0;
	sub_8321CB38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83271f28
	if (!ctx.cr0.eq) goto loc_83271F28;
	// rlwinm r25,r31,31,28,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0xF;
loc_83271CAC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83271f28
	if (ctx.cr6.eq) goto loc_83271F28;
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// li r5,27
	ctx.r5.s64 = 27;
	// andc r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 & ~ctx.r11.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// subfic r31,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r31.s64 = 31 - ctx.r11.s64;
	// bl 0x8321d6d0
	ctx.lr = 0x83271CD4;
	sub_8321D6D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
	// ori r11,r27,1
	ctx.r11.u64 = ctx.r27.u64 | 1;
	// ori r10,r30,1
	ctx.r10.u64 = ctx.r30.u64 | 1;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832636d0
	ctx.lr = 0x83271D00;
	sub_832636D0(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83271d38
	if (!ctx.cr0.eq) goto loc_83271D38;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83271d38
	if (ctx.cr0.eq) goto loc_83271D38;
loc_83271D18:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83271d38
	if (!ctx.cr0.eq) goto loc_83271D38;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83271d18
	if (!ctx.cr6.eq) goto loc_83271D18;
loc_83271D38:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x83271f08
	if (ctx.cr6.lt) goto loc_83271F08;
	// rlwinm r24,r31,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8321e0d0
	ctx.lr = 0x83271D54;
	sub_8321E0D0(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_83271D64:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83271de4
	if (!ctx.cr0.eq) goto loc_83271DE4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83271de4
	if (ctx.cr0.eq) goto loc_83271DE4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r4
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x83271dd8
	if (!ctx.cr0.eq) goto loc_83271DD8;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x83271DD8;
	sub_83204D00(ctx, base);
loc_83271DD8:
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r28,r28,-8
	ctx.r28.s64 = ctx.r28.s64 + -8;
	// b 0x83271d64
	goto loc_83271D64;
loc_83271DE4:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8326ef20
	ctx.lr = 0x83271E08;
	sub_8326EF20(ctx, base);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83271e88
	if (ctx.cr6.eq) goto loc_83271E88;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_83271E1C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83271e68
	if (!ctx.cr6.eq) goto loc_83271E68;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x83271e44
	goto loc_83271E44;
loc_83271E3C:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83271E44:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x83271e3c
	if (!ctx.cr6.eq) goto loc_83271E3C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8321da98
	ctx.lr = 0x83271E64;
	sub_8321DA98(ctx, base);
	// b 0x83271e7c
	goto loc_83271E7C;
loc_83271E68:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83271e7c
	if (!ctx.cr0.eq) goto loc_83271E7C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_83271E7C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x83271e1c
	if (!ctx.cr0.eq) goto loc_83271E1C;
loc_83271E88:
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83271ef4
	if (!ctx.cr6.eq) goto loc_83271EF4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83271ef4
	if (ctx.cr6.eq) goto loc_83271EF4;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_83271E9C:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,3968
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3968, ctx.xer);
	// beq cr6,0x83271ee8
	if (ctx.cr6.eq) goto loc_83271EE8;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832f5568
	ctx.lr = 0x83271ECC;
	sub_832F5568(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,31
	ctx.r11.s64 = 31;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r9,r11,7,18,24
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 7) & 0x3F80) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_83271EE8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x83271e9c
	if (!ctx.cr0.eq) goto loc_83271E9C;
loc_83271EF4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83227d20
	ctx.lr = 0x83271F08;
	sub_83227D20(ctx, base);
loc_83271F08:
	// lwz r10,952(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 952);
	// addi r9,r25,-1
	ctx.r9.s64 = ctx.r25.s64 + -1;
	// addi r11,r22,948
	ctx.r11.s64 = ctx.r22.s64 + 948;
	// andc r11,r25,r9
	ctx.r11.u64 = ctx.r25.u64 & ~ctx.r9.u64;
	// subf r25,r11,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r11.s64;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r27,952(r22)
	PPC_STORE_U32(ctx.r22.u32 + 952, ctx.r27.u32);
	// b 0x83271cac
	goto loc_83271CAC;
loc_83271F28:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832721f8
	if (ctx.cr0.eq) goto loc_832721F8;
	// rlwinm. r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832721f8
	if (ctx.cr0.eq) goto loc_832721F8;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x83271F4C;
	sub_8321D6D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r25,r27,4
	ctx.r25.s64 = ctx.r27.s64 + 4;
	// ori r10,r27,1
	ctx.r10.u64 = ctx.r27.u64 | 1;
	// ori r11,r25,1
	ctx.r11.u64 = ctx.r25.u64 | 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bne 0x83271f8c
	if (!ctx.cr0.eq) goto loc_83271F8C;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83271f8c
	if (ctx.cr0.eq) goto loc_83271F8C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x83271f9c
	if (!ctx.cr6.gt) goto loc_83271F9C;
loc_83271F8C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322be98
	ctx.lr = 0x83271F98;
	sub_8322BE98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83271F9C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r23,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r23.u32);
	// bl 0x8323f9b0
	ctx.lr = 0x83271FC0;
	sub_8323F9B0(ctx, base);
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8327204c
	goto loc_8327204C;
loc_83271FCC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83272048
	if (ctx.cr0.eq) goto loc_83272048;
	// rlwinm. r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83272048
	if (ctx.cr0.eq) goto loc_83272048;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8323f9b0
	ctx.lr = 0x83271FEC;
	sub_8323F9B0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83272048
	if (!ctx.cr6.eq) goto loc_83272048;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83272024
	if (!ctx.cr0.eq) goto loc_83272024;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83272024
	if (ctx.cr0.eq) goto loc_83272024;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83272030
	if (!ctx.cr6.gt) goto loc_83272030;
loc_83272024:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322be98
	ctx.lr = 0x83272030;
	sub_8322BE98(ctx, base);
loc_83272030:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_83272048:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
loc_8327204C:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272064
	if (!ctx.cr0.eq) goto loc_83272064;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x83271fcc
	if (!ctx.cr6.eq) goto loc_83271FCC;
loc_83272064:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327209c
	if (!ctx.cr0.eq) goto loc_8327209C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327209c
	if (ctx.cr0.eq) goto loc_8327209C;
loc_8327207C:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327209c
	if (!ctx.cr0.eq) goto loc_8327209C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327207c
	if (!ctx.cr6.eq) goto loc_8327207C;
loc_8327209C:
	// rlwinm r26,r31,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8321e0d0
	ctx.lr = 0x832720B0;
	sub_8321E0D0(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_832720C0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327214c
	if (!ctx.cr0.eq) goto loc_8327214C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327214c
	if (ctx.cr0.eq) goto loc_8327214C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r4
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x83272134
	if (!ctx.cr0.eq) goto loc_83272134;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x83272134;
	sub_83204D00(ctx, base);
loc_83272134:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83232e10
	ctx.lr = 0x83272140;
	sub_83232E10(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// b 0x832720c0
	goto loc_832720C0;
loc_8327214C:
	// li r6,36
	ctx.r6.s64 = 36;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83227d20
	ctx.lr = 0x83272160;
	sub_83227D20(ctx, base);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8326ef20
	ctx.lr = 0x83272184;
	sub_8326EF20(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832721e4
	if (ctx.cr6.eq) goto loc_832721E4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83272190:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832721d8
	if (!ctx.cr6.eq) goto loc_832721D8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x832721b8
	goto loc_832721B8;
loc_832721B0:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_832721B8:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x832721b0
	if (!ctx.cr6.eq) goto loc_832721B0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8321da98
	ctx.lr = 0x832721D8;
	sub_8321DA98(ctx, base);
loc_832721D8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x83272190
	if (!ctx.cr0.eq) goto loc_83272190;
loc_832721E4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83227d20
	ctx.lr = 0x832721F8;
	sub_83227D20(ctx, base);
loc_832721F8:
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272214
	if (!ctx.cr0.eq) goto loc_83272214;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327191c
	if (!ctx.cr6.eq) goto loc_8327191C;
loc_83272214:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8326f0e8
	ctx.lr = 0x83272224;
	sub_8326F0E8(ctx, base);
	// lwz r10,28(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// addi r11,r21,24
	ctx.r11.s64 = ctx.r21.s64 + 24;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272498
	if (!ctx.cr0.eq) goto loc_83272498;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8327248c
	goto loc_8327248C;
loc_8327223C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83229f50
	ctx.lr = 0x83272244;
	sub_83229F50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327247c
	if (ctx.cr0.eq) goto loc_8327247C;
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327247c
	if (!ctx.cr6.eq) goto loc_8327247C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83259cc0
	ctx.lr = 0x83272264;
	sub_83259CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327247c
	if (!ctx.cr0.eq) goto loc_8327247C;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327247c
	if (!ctx.cr0.eq) goto loc_8327247C;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8327247c
	if (ctx.cr0.eq) goto loc_8327247C;
	// lis r12,-512
	ctx.r12.s64 = -33554432;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// ori r12,r12,127
	ctx.r12.u64 = ctx.r12.u64 | 127;
	// rotldi r29,r11,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 25);
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,511
	ctx.r12.u64 = ctx.r12.u64 | 33488896;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
loc_832722AC:
	// lis r12,-512
	ctx.r12.s64 = -33554432;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ori r12,r12,127
	ctx.r12.u64 = ctx.r12.u64 | 127;
	// rotldi r11,r11,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 25);
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | ctx.r29.u64;
	// oris r12,r12,511
	ctx.r12.u64 = ctx.r12.u64 | 33488896;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x832722f4
	if (!ctx.cr6.eq) goto loc_832722F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83259cc0
	ctx.lr = 0x832722E8;
	sub_83259CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832722f4
	if (!ctx.cr0.eq) goto loc_832722F4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_832722F4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272310
	if (!ctx.cr0.eq) goto loc_83272310;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832722ac
	if (!ctx.cr0.eq) goto loc_832722AC;
loc_83272310:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// ble cr6,0x8327247c
	if (!ctx.cr6.gt) goto loc_8327247C;
	// rlwinm r27,r30,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8321e0d0
	ctx.lr = 0x8327232C;
	sub_8321E0D0(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_83272340:
	// lis r12,-512
	ctx.r12.s64 = -33554432;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ori r12,r12,127
	ctx.r12.u64 = ctx.r12.u64 | 127;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rotldi r11,r11,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 25);
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,511
	ctx.r12.u64 = ctx.r12.u64 | 33488896;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,-512
	ctx.r12.s64 = -33554432;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// ori r12,r12,127
	ctx.r12.u64 = ctx.r12.u64 | 127;
	// rotldi r10,r9,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 25);
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,511
	ctx.r12.u64 = ctx.r12.u64 | 33488896;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x832723b8
	if (!ctx.cr6.eq) goto loc_832723B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83259cc0
	ctx.lr = 0x8327239C;
	sub_83259CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832723b8
	if (!ctx.cr0.eq) goto loc_832723B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83232e10
	ctx.lr = 0x832723B0;
	sub_83232E10(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
loc_832723B8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832723d4
	if (!ctx.cr0.eq) goto loc_832723D4;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83272340
	if (!ctx.cr0.eq) goto loc_83272340;
loc_832723D4:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8326ef20
	ctx.lr = 0x832723F8;
	sub_8326EF20(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83272458
	if (ctx.cr6.eq) goto loc_83272458;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_83272404:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327244c
	if (!ctx.cr6.eq) goto loc_8327244C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8327242c
	goto loc_8327242C;
loc_83272424:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8327242C:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x83272424
	if (!ctx.cr6.eq) goto loc_83272424;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8321da98
	ctx.lr = 0x8327244C;
	sub_8321DA98(ctx, base);
loc_8327244C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x83272404
	if (!ctx.cr0.eq) goto loc_83272404;
loc_83272458:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83227d20
	ctx.lr = 0x8327246C;
	sub_83227D20(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8326f0e8
	ctx.lr = 0x8327247C;
	sub_8326F0E8(ctx, base);
loc_8327247C:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272498
	if (!ctx.cr0.eq) goto loc_83272498;
loc_8327248C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r26,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r26.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x8327223c
	if (!ctx.cr0.eq) goto loc_8327223C;
loc_83272498:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// beq cr6,0x83272640
	if (ctx.cr6.eq) goto loc_83272640;
loc_832724B4:
	// addi r30,r1,84
	ctx.r30.s64 = ctx.r1.s64 + 84;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8327263c
	if (ctx.cr6.eq) goto loc_8327263C;
loc_832724C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,3,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83272530
	if (!ctx.cr0.eq) goto loc_83272530;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r14,4
	ctx.r11.s64 = ctx.r14.s64 + 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272508
	if (!ctx.cr0.eq) goto loc_83272508;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83272508
	if (ctx.cr0.eq) goto loc_83272508;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83272514
	if (!ctx.cr6.gt) goto loc_83272514;
loc_83272508:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8325d480
	ctx.lr = 0x83272514;
	sub_8325D480(ctx, base);
loc_83272514:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
	// b 0x83272624
	goto loc_83272624;
loc_83272530:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// b 0x8327257c
	goto loc_8327257C;
loc_8327253C:
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_83272544:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r9,r9,0,3,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFFE000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq 0x8327253c
	if (ctx.cr0.eq) goto loc_8327253C;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// oris r8,r8,16384
	ctx.r8.u64 = ctx.r8.u64 | 1073741824;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r9,r9,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83272578
	if (!ctx.cr0.eq) goto loc_83272578;
	// li r10,1
	ctx.r10.s64 = 1;
loc_83272578:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8327257C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83272544
	if (!ctx.cr6.eq) goto loc_83272544;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83272620
	if (!ctx.cr0.eq) goto loc_83272620;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// clrlwi. r10,r11,19
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x83272604
	if (ctx.cr0.eq) goto loc_83272604;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
loc_832725DC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83272604
	if (ctx.cr0.eq) goto loc_83272604;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// clrlwi r8,r8,19
	ctx.r8.u64 = ctx.r8.u32 & 0x1FFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x832725dc
	if (ctx.cr6.lt) goto loc_832725DC;
loc_83272604:
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83272624
	if (!ctx.cr6.eq) goto loc_83272624;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x83272624
	goto loc_83272624;
loc_83272620:
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
loc_83272624:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832724c0
	if (!ctx.cr6.eq) goto loc_832724C0;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832724b4
	if (!ctx.cr6.eq) goto loc_832724B4;
loc_8327263C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_83272640:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272a64
	if (!ctx.cr0.eq) goto loc_83272A64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r25,r10,-16
	ctx.xer.ca = ctx.r10.u32 > 15;
	ctx.r25.s64 = ctx.r10.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x83272a64
	if (ctx.cr0.eq) goto loc_83272A64;
loc_83272658:
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// addi r15,r25,24
	ctx.r15.s64 = ctx.r25.s64 + 24;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83272754
	if (!ctx.cr6.eq) goto loc_83272754;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// clrlwi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832726b0
	if (ctx.cr0.eq) goto loc_832726B0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
loc_8327268C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r9,r9,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// bne 0x8327268c
	if (!ctx.cr0.eq) goto loc_8327268C;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bgt cr6,0x83272a44
	if (ctx.cr6.gt) goto loc_83272A44;
loc_832726B0:
	// lwz r5,20(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x8327272c
	goto loc_8327272C;
loc_832726BC:
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r8,24
	ctx.r10.s64 = ctx.r8.s64 + 24;
	// lwz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x83272728
	if (!ctx.cr6.eq) goto loc_83272728;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// clrlwi. r11,r9,19
	ctx.r11.u64 = ctx.r9.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327270c
	if (ctx.cr0.eq) goto loc_8327270C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
loc_832726F0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r6,r6,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x7;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bne 0x832726f0
	if (!ctx.cr0.eq) goto loc_832726F0;
loc_8327270C:
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x83272728
	if (!ctx.cr6.eq) goto loc_83272728;
	// rlwinm r11,r9,19,13,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7FFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwimi r9,r11,14,3,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0x1FFFC000) | (ctx.r9.u64 & 0xFFFFFFFFE0003FFF);
	// rlwinm r11,r9,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_83272728:
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
loc_8327272C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x832726bc
	if (!ctx.cr6.eq) goto loc_832726BC;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832729e8
	if (ctx.cr0.eq) goto loc_832729E8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r11,19,13,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7FFFF;
	// rlwimi r11,r10,14,3,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0x1FFFC000) | (ctx.r11.u64 & 0xFFFFFFFFE0003FFF);
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// b 0x832729e8
	goto loc_832729E8;
loc_83272754:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x832729e8
	if (!ctx.cr6.eq) goto loc_832729E8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r16,r20
	ctx.r16.u64 = ctx.r20.u64;
	// clrlwi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83272a44
	if (ctx.cr0.eq) goto loc_83272A44;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
loc_83272778:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r9,r9,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// add r16,r9,r16
	ctx.r16.u64 = ctx.r9.u64 + ctx.r16.u64;
	// bne 0x83272778
	if (!ctx.cr0.eq) goto loc_83272778;
	// cmplwi cr6,r16,3
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 3, ctx.xer);
	// blt cr6,0x83272a44
	if (ctx.cr6.lt) goto loc_83272A44;
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
loc_832727A0:
	// addi r11,r17,6
	ctx.r11.s64 = ctx.r17.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwz r19,4(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_832727B0:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x832729d4
	if (ctx.cr6.eq) goto loc_832729D4;
	// lwz r18,16(r19)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x832729c8
	if (ctx.cr6.eq) goto loc_832729C8;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832729c8
	if (ctx.cr0.eq) goto loc_832729C8;
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x832729c8
	if (!ctx.cr6.eq) goto loc_832729C8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r22,r17,1
	ctx.r22.s64 = ctx.r17.s64 + 1;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832729c8
	if (!ctx.cr6.lt) goto loc_832729C8;
	// addi r11,r22,6
	ctx.r11.s64 = ctx.r22.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r20,r11,r25
	ctx.r20.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_83272800:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r21,4(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83272808:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x832729b0
	if (ctx.cr6.eq) goto loc_832729B0;
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832729a8
	if (ctx.cr6.eq) goto loc_832729A8;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832729a8
	if (ctx.cr0.eq) goto loc_832729A8;
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x832729a8
	if (ctx.cr6.eq) goto loc_832729A8;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832729a8
	if (!ctx.cr6.eq) goto loc_832729A8;
	// lwz r23,4(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
loc_8327283C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x832729a8
	if (ctx.cr6.eq) goto loc_832729A8;
	// lwz r26,16(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832728ec
	if (ctx.cr6.eq) goto loc_832728EC;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832728ec
	if (ctx.cr0.eq) goto loc_832728EC;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x832728ec
	if (!ctx.cr6.eq) goto loc_832728EC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// clrlwi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832728ec
	if (ctx.cr0.eq) goto loc_832728EC;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
loc_83272880:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_83272888:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832728ac
	if (ctx.cr6.eq) goto loc_832728AC;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832728a4
	if (ctx.cr6.eq) goto loc_832728A4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x83272888
	goto loc_83272888;
loc_832728A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832728b0
	goto loc_832728B0;
loc_832728AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832728B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832728d4
	if (ctx.cr0.eq) goto loc_832728D4;
	// cmplwi cr6,r16,3
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 3, ctx.xer);
	// bne cr6,0x832728f4
	if (!ctx.cr6.eq) goto loc_832728F4;
	// li r6,41
	ctx.r6.s64 = 41;
	// lwz r3,468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83259f98
	ctx.lr = 0x832728D4;
	sub_83259F98(ctx, base);
loc_832728D4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83272880
	if (ctx.cr6.lt) goto loc_83272880;
loc_832728EC:
	// lwz r23,8(r23)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// b 0x8327283c
	goto loc_8327283C;
loc_832728F4:
	// lwz r28,4(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_832728F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x832728d4
	if (ctx.cr6.eq) goto loc_832728D4;
	// lwz r29,16(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832729a0
	if (ctx.cr6.eq) goto loc_832729A0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832729a0
	if (ctx.cr0.eq) goto loc_832729A0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x832729a0
	if (!ctx.cr6.eq) goto loc_832729A0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832729a0
	if (ctx.cr0.eq) goto loc_832729A0;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
loc_8327293C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_83272944:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83272968
	if (ctx.cr6.eq) goto loc_83272968;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83272960
	if (ctx.cr6.eq) goto loc_83272960;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x83272944
	goto loc_83272944;
loc_83272960:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8327296c
	goto loc_8327296C;
loc_83272968:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327296C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83272988
	if (ctx.cr0.eq) goto loc_83272988;
	// li r6,61
	ctx.r6.s64 = 61;
	// lwz r3,468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83259f98
	ctx.lr = 0x83272988;
	sub_83259F98(ctx, base);
loc_83272988:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8327293c
	if (ctx.cr6.lt) goto loc_8327293C;
loc_832729A0:
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// b 0x832728f8
	goto loc_832728F8;
loc_832729A8:
	// lwz r21,8(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// b 0x83272808
	goto loc_83272808;
loc_832729B0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83272800
	if (ctx.cr6.lt) goto loc_83272800;
loc_832729C8:
	// lwz r19,8(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// li r20,0
	ctx.r20.s64 = 0;
	// b 0x832727b0
	goto loc_832727B0;
loc_832729D4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832727a0
	if (ctx.cr6.lt) goto loc_832727A0;
loc_832729E8:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
loc_832729FC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83272a44
	if (!ctx.cr6.lt) goto loc_83272A44;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r8,r8,0,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x83272a20
	if (!ctx.cr0.eq) goto loc_83272A20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x832729fc
	goto loc_832729FC;
loc_83272A20:
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// clrlwi r8,r9,19
	ctx.r8.u64 = ctx.r9.u32 & 0x1FFF;
	// rlwinm r11,r9,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFE000;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwimi r11,r9,0,19,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFE0001FFF) | (ctx.r11.u64 & 0x1FFFE000);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_83272A44:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272a60
	if (!ctx.cr0.eq) goto loc_83272A60;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r25,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r25.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x83272658
	if (!ctx.cr0.eq) goto loc_83272658;
loc_83272A60:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_83272A64:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272ae4
	if (!ctx.cr0.eq) goto loc_83272AE4;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83272ae4
	if (ctx.cr6.eq) goto loc_83272AE4;
loc_83272A78:
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// addi r9,r7,20
	ctx.r9.s64 = ctx.r7.s64 + 20;
	// b 0x83272ac0
	goto loc_83272AC0;
loc_83272A84:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r8,r8,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83272aa0
	if (ctx.cr0.eq) goto loc_83272AA0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x83272abc
	goto loc_83272ABC;
loc_83272AA0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r8,r6,0,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFE000;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwimi r11,r6,0,19,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFE0001FFF) | (ctx.r11.u64 & 0x1FFFE000);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83272ABC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_83272AC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83272a84
	if (!ctx.cr6.eq) goto loc_83272A84;
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83272ae0
	if (!ctx.cr0.eq) goto loc_83272AE0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83272a78
	if (!ctx.cr6.eq) goto loc_83272A78;
loc_83272AE0:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_83272AE4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272cc4
	if (!ctx.cr0.eq) goto loc_83272CC4;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83272cc4
	if (ctx.cr6.eq) goto loc_83272CC4;
	// li r19,1
	ctx.r19.s64 = 1;
loc_83272AFC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r21,0
	ctx.r21.s64 = 0;
	// clrlwi. r20,r11,19
	ctx.r20.u64 = ctx.r11.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq 0x83272ca4
	if (ctx.cr0.eq) goto loc_83272CA4;
	// addi r22,r28,24
	ctx.r22.s64 = ctx.r28.s64 + 24;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
loc_83272B14:
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r29,44
	ctx.r29.s64 = 44;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r23,r11,13,29,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
loc_83272B2C:
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x83272c7c
	if (!ctx.cr6.lt) goto loc_83272C7C;
	// lwzx r31,r29,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83259068
	ctx.lr = 0x83272B44;
	sub_83259068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83272c70
	if (ctx.cr0.eq) goto loc_83272C70;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83272c70
	if (ctx.cr6.eq) goto loc_83272C70;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm. r11,r10,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83272b8c
	if (ctx.cr0.eq) goto loc_83272B8C;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83272B70:
	// srw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r8,r19,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r8.u8 & 0x3F));
	// or r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 | ctx.r5.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x83272b70
	if (!ctx.cr0.eq) goto loc_83272B70;
loc_83272B8C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_83272B94:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83272bfc
	if (!ctx.cr6.eq) goto loc_83272BFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm. r11,r10,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83272bdc
	if (ctx.cr0.eq) goto loc_83272BDC;
	// rlwinm r8,r10,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83272BC0:
	// srw r3,r8,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r3,r3,30
	ctx.r3.u64 = ctx.r3.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r3,r19,r3
	ctx.r3.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r3.u8 & 0x3F));
	// or r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x83272bc0
	if (!ctx.cr0.eq) goto loc_83272BC0;
loc_83272BDC:
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83272bfc
	if (!ctx.cr6.eq) goto loc_83272BFC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83272b94
	if (ctx.cr6.lt) goto loc_83272B94;
loc_83272BFC:
	// cmplw cr6,r6,r20
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x83272c70
	if (ctx.cr6.eq) goto loc_83272C70;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
loc_83272C08:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x83272c38
	if (ctx.cr0.eq) goto loc_83272C38;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83272C18:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83272c30
	if (ctx.cr6.eq) goto loc_83272C30;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83272c18
	if (!ctx.cr6.eq) goto loc_83272C18;
loc_83272C30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83272c68
	if (!ctx.cr6.eq) goto loc_83272C68;
loc_83272C38:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272c5c
	if (!ctx.cr0.eq) goto loc_83272C5C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,19,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFFF;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x83272c5c
	if (!ctx.cr6.gt) goto loc_83272C5C;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_83272C5C:
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83272c08
	if (!ctx.cr6.eq) goto loc_83272C08;
loc_83272C68:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83272c8c
	if (!ctx.cr6.eq) goto loc_83272C8C;
loc_83272C70:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83272b2c
	goto loc_83272B2C;
loc_83272C7C:
	// lhz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83272c8c
	if (!ctx.cr6.gt) goto loc_83272C8C;
	// sth r26,6(r28)
	PPC_STORE_U16(ctx.r28.u32 + 6, ctx.r26.u16);
loc_83272C8C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83272b14
	if (ctx.cr6.lt) goto loc_83272B14;
loc_83272CA4:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272cc0
	if (!ctx.cr0.eq) goto loc_83272CC0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83272afc
	if (!ctx.cr6.eq) goto loc_83272AFC;
loc_83272CC0:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_83272CC4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272d38
	if (!ctx.cr0.eq) goto loc_83272D38;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83272d38
	if (ctx.cr6.eq) goto loc_83272D38;
loc_83272CD4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83272d1c
	if (ctx.cr0.eq) goto loc_83272D1C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r9,r9,100
	ctx.r9.s64 = ctx.r9.s64 + 100;
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// b 0x83272d14
	goto loc_83272D14;
loc_83272CF4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm. r8,r8,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x83272d10
	if (!ctx.cr0.eq) goto loc_83272D10;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r8,r8,100
	ctx.r8.s64 = ctx.r8.s64 + 100;
	// sth r8,6(r9)
	PPC_STORE_U16(ctx.r9.u32 + 6, ctx.r8.u16);
loc_83272D10:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_83272D14:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83272cf4
	if (!ctx.cr6.eq) goto loc_83272CF4;
loc_83272D1C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272d34
	if (!ctx.cr0.eq) goto loc_83272D34;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83272cd4
	if (!ctx.cr6.eq) goto loc_83272CD4;
loc_83272D34:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_83272D38:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272dbc
	if (!ctx.cr0.eq) goto loc_83272DBC;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r10,r10,-16
	ctx.xer.ca = ctx.r10.u32 > 15;
	ctx.r10.s64 = ctx.r10.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83272dbc
	if (ctx.cr0.eq) goto loc_83272DBC;
loc_83272D50:
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// b 0x83272d7c
	goto loc_83272D7C;
loc_83272D58:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r9,r9,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83272d78
	if (!ctx.cr0.eq) goto loc_83272D78;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r11,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
loc_83272D78:
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_83272D7C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83272d58
	if (!ctx.cr6.eq) goto loc_83272D58;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83272d9c
	if (ctx.cr0.eq) goto loc_83272D9C;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83272D9C:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272db8
	if (!ctx.cr0.eq) goto loc_83272DB8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r10,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r10.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272d50
	if (!ctx.cr0.eq) goto loc_83272D50;
loc_83272DB8:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_83272DBC:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// bne 0x83272e28
	if (!ctx.cr0.eq) goto loc_83272E28;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83272e28
	if (ctx.cr6.eq) goto loc_83272E28;
loc_83272DD4:
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x83272e00
	goto loc_83272E00;
loc_83272DDC:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x83272dfc
	if (!ctx.cr6.lt) goto loc_83272DFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
loc_83272DFC:
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_83272E00:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83272ddc
	if (!ctx.cr6.eq) goto loc_83272DDC;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272e24
	if (!ctx.cr0.eq) goto loc_83272E24;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83272dd4
	if (!ctx.cr6.eq) goto loc_83272DD4;
loc_83272E24:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_83272E28:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272e74
	if (!ctx.cr0.eq) goto loc_83272E74;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83272e74
	if (ctx.cr6.eq) goto loc_83272E74;
loc_83272E38:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x83272e58
	if (!ctx.cr6.gt) goto loc_83272E58;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
loc_83272E58:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272e70
	if (!ctx.cr0.eq) goto loc_83272E70;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83272e38
	if (!ctx.cr6.eq) goto loc_83272E38;
loc_83272E70:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_83272E74:
	// clrlwi. r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83272dbc
	if (!ctx.cr0.eq) goto loc_83272DBC;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x83272e88
	goto loc_83272E88;
loc_83272E84:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_83272E88:
	// lwz r17,468(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// li r15,3
	ctx.r15.s64 = 3;
loc_83272E90:
	// li r22,0
	ctx.r22.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// bne 0x8327324c
	if (!ctx.cr0.eq) goto loc_8327324C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r31.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8327324c
	if (ctx.cr0.eq) goto loc_8327324C;
loc_83272EB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,3,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFE000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83273044
	if (ctx.cr0.eq) goto loc_83273044;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83273044
	if (!ctx.cr0.eq) goto loc_83273044;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x83273044
	if (ctx.cr6.eq) goto loc_83273044;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x83273044
	if (ctx.cr6.gt) goto loc_83273044;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// b 0x83272f24
	goto loc_83272F24;
loc_83272EF0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,3,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83272f1c
	if (!ctx.cr0.eq) goto loc_83272F1C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r6,49
	ctx.r6.s64 = 49;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83227d20
	ctx.lr = 0x83272F18;
	sub_83227D20(ctx, base);
	// b 0x83272f20
	goto loc_83272F20;
loc_83272F1C:
	// addi r30,r4,4
	ctx.r30.s64 = ctx.r4.s64 + 4;
loc_83272F20:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_83272F24:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83272ef0
	if (!ctx.cr6.eq) goto loc_83272EF0;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// clrlwi. r11,r7,19
	ctx.r11.u64 = ctx.r7.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83272f8c
	if (ctx.cr0.eq) goto loc_83272F8C;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// clrlwi r9,r11,19
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFF;
loc_83272F48:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83272f60
	if (ctx.cr6.eq) goto loc_83272F60;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_83272F60:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x83272f48
	if (!ctx.cr0.eq) goto loc_83272F48;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// ble cr6,0x83272f8c
	if (!ctx.cr6.gt) goto loc_83272F8C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83272f8c
	if (!ctx.cr0.eq) goto loc_83272F8C;
	// oris r11,r7,32768
	ctx.r11.u64 = ctx.r7.u64 | 2147483648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83273044
	goto loc_83273044;
loc_83272F8C:
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83273044
	if (ctx.cr6.eq) goto loc_83273044;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x83273044
	if (ctx.cr6.eq) goto loc_83273044;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83259cc0
	ctx.lr = 0x83272FB4;
	sub_83259CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83273044
	if (!ctx.cr0.eq) goto loc_83273044;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8326f568
	ctx.lr = 0x83272FD0;
	sub_8326F568(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83273044
	if (ctx.cr0.eq) goto loc_83273044;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327302c
	if (ctx.cr6.eq) goto loc_8327302C;
loc_83272FE8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x83273018
	if (!ctx.cr0.eq) goto loc_83273018;
	// lhz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// bgt cr6,0x83273018
	if (ctx.cr6.gt) goto loc_83273018;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,0,3,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFFE000;
	// rlwinm r10,r10,0,3,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFFE000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83273024
	if (ctx.cr6.lt) goto loc_83273024;
loc_83273018:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83272fe8
	if (!ctx.cr6.eq) goto loc_83272FE8;
loc_83273024:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83273044
	if (!ctx.cr6.eq) goto loc_83273044;
loc_8327302C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,19,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFFF;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x83273044
	if (!ctx.cr6.gt) goto loc_83273044;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_83273044:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83273060
	if (!ctx.cr0.eq) goto loc_83273060;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r31.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83272eb4
	if (!ctx.cr0.eq) goto loc_83272EB4;
loc_83273060:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8327324c
	if (ctx.cr6.eq) goto loc_8327324C;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// rlwimi r11,r23,0,19,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r23.u32, 0) & 0x1FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE000);
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// lwz r4,28(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// bl 0x8326f568
	ctx.lr = 0x83273088;
	sub_8326F568(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x83272e84
	if (ctx.cr0.eq) goto loc_83272E84;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r25,2
	ctx.r25.s64 = 2;
	// stw r30,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r30.u32);
	// clrlwi r10,r11,19
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFF;
	// rlwinm r11,r11,19,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFFF;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832730ec
	if (!ctx.cr6.gt) goto loc_832730EC;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832730e8
	if (ctx.cr6.eq) goto loc_832730E8;
loc_832730BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r10,0,3,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFFE000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832730d4
	if (ctx.cr0.eq) goto loc_832730D4;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832730e0
	if (ctx.cr0.eq) goto loc_832730E0;
loc_832730D4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832730bc
	if (!ctx.cr6.eq) goto loc_832730BC;
loc_832730E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832730ec
	if (!ctx.cr6.eq) goto loc_832730EC;
loc_832730E8:
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
loc_832730EC:
	// li r26,1
	ctx.r26.s64 = 1;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r28,r24,28
	ctx.r28.s64 = ctx.r24.s64 + 28;
loc_832730F8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83273224
	if (!ctx.cr6.lt) goto loc_83273224;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83273218
	if (ctx.cr6.eq) goto loc_83273218;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,28(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// bl 0x8326f568
	ctx.lr = 0x83273128;
	sub_8326F568(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x832731f8
	if (ctx.cr0.eq) goto loc_832731F8;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x832731f8
	if (ctx.cr6.eq) goto loc_832731F8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x832731f8
	if (ctx.cr6.eq) goto loc_832731F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83259cc0
	ctx.lr = 0x83273158;
	sub_83259CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832731f8
	if (!ctx.cr0.eq) goto loc_832731F8;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8325e280
	ctx.lr = 0x83273174;
	sub_8325E280(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bgt cr6,0x832731f4
	if (ctx.cr6.gt) goto loc_832731F4;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8326f858
	ctx.lr = 0x83273194;
	sub_8326F858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832731c8
	if (!ctx.cr0.eq) goto loc_832731C8;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x832731f8
	if (ctx.cr6.gt) goto loc_832731F8;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83266038
	ctx.lr = 0x832731BC;
	sub_83266038(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x832731f8
	goto loc_832731F8;
loc_832731C8:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x832731f8
	if (ctx.cr6.eq) goto loc_832731F8;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// cmplwi cr6,r23,8192
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 8192, ctx.xer);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// blt cr6,0x83272e90
	if (ctx.cr6.lt) goto loc_83272E90;
	// li r23,0
	ctx.r23.s64 = 0;
	// b 0x83272e90
	goto loc_83272E90;
loc_832731F4:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_832731F8:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83273208
	if (!ctx.cr0.eq) goto loc_83273208;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// b 0x83273218
	goto loc_83273218;
loc_83273208:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,8192
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 8192, ctx.xer);
	// blt cr6,0x83273218
	if (ctx.cr6.lt) goto loc_83273218;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_83273218:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x832730f8
	goto loc_832730F8;
loc_83273224:
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// bne cr6,0x83272e84
	if (!ctx.cr6.eq) goto loc_83272E84;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// rlwinm r11,r11,0,19,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE0001FFF;
	// cmplwi cr6,r23,8192
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 8192, ctx.xer);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// blt cr6,0x83272e84
	if (ctx.cr6.lt) goto loc_83272E84;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// b 0x83272e84
	goto loc_83272E84;
loc_8327324C:
	// addi r11,r14,4
	ctx.r11.s64 = ctx.r14.s64 + 4;
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832732e8
	if (!ctx.cr0.eq) goto loc_832732E8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832732e8
	if (ctx.cr0.eq) goto loc_832732E8;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x832732c4
	if (!ctx.cr0.eq) goto loc_832732C4;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x832732C4;
	sub_83204D00(ctx, base);
loc_832732C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83227d20
	ctx.lr = 0x832732E4;
	sub_83227D20(ctx, base);
	// b 0x8327324c
	goto loc_8327324C;
loc_832732E8:
	// li r6,50
	ctx.r6.s64 = 50;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83227d20
	ctx.lr = 0x832732FC;
	sub_83227D20(ctx, base);
	// lwz r16,96(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x832ef7b8
	ctx.lr = 0x8327330C;
	sub_832EF7B8(ctx, base);
	// lwz r11,40(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 40);
	// stw r22,652(r17)
	PPC_STORE_U32(ctx.r17.u32 + 652, ctx.r22.u32);
	// oris r11,r11,2560
	ctx.r11.u64 = ctx.r11.u64 | 167772160;
	// stw r11,40(r17)
	PPC_STORE_U32(ctx.r17.u32 + 40, ctx.r11.u32);
loc_8327331C:
	// lwz r3,640(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 640);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832733ec
	if (!ctx.cr0.eq) goto loc_832733EC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832733ec
	if (ctx.cr0.eq) goto loc_832733EC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83273348
	if (ctx.cr0.eq) goto loc_83273348;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x83273354
	goto loc_83273354;
loc_83273348:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_83273354:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x832733a4
	if (!ctx.cr0.eq) goto loc_832733A4;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x832733A4;
	sub_83204D00(ctx, base);
loc_832733A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,115
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 115, ctx.xer);
	// beq cr6,0x8327331c
	if (ctx.cr6.eq) goto loc_8327331C;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8327331c
	if (ctx.cr6.eq) goto loc_8327331C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d798
	ctx.lr = 0x832733CC;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327331c
	if (ctx.cr0.eq) goto loc_8327331C;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,640(r17)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r17.u32 + 640);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x832733E8;
	sub_832F6CC8(ctx, base);
	// b 0x8327331c
	goto loc_8327331C;
loc_832733EC:
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
	// li r31,7
	ctx.r31.s64 = 7;
loc_832733F4:
	// li r5,37
	ctx.r5.s64 = 37;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x83273404;
	sub_8321D6D0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bl 0x8325cae0
	ctx.lr = 0x8327340C;
	sub_8325CAE0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x832733f4
	if (!ctx.cr0.eq) goto loc_832733F4;
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83273428
	if (ctx.cr0.eq) goto loc_83273428;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_83273428:
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83273480
	if (!ctx.cr0.eq) goto loc_83273480;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x83273480
	if (ctx.cr0.eq) goto loc_83273480;
loc_8327343C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// beq cr6,0x83273454
	if (ctx.cr6.eq) goto loc_83273454;
	// cmplwi cr6,r11,113
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 113, ctx.xer);
	// bne cr6,0x83273468
	if (!ctx.cr6.eq) goto loc_83273468;
loc_83273454:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8325d508
	ctx.lr = 0x83273468;
	sub_8325D508(ctx, base);
loc_83273468:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83273480
	if (!ctx.cr0.eq) goto loc_83273480;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8327343c
	if (!ctx.cr6.eq) goto loc_8327343C;
loc_83273480:
	// lwz r31,28(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// addi r11,r16,24
	ctx.r11.s64 = ctx.r16.s64 + 24;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// clrlwi. r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327352c
	if (!ctx.cr0.eq) goto loc_8327352C;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8327352c
	if (ctx.cr0.eq) goto loc_8327352C;
loc_8327349C:
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832702e8
	ctx.lr = 0x832734B4;
	sub_832702E8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832734fc
	if (ctx.cr6.eq) goto loc_832734FC;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne 0x832734d4
	if (!ctx.cr0.eq) goto loc_832734D4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832734D4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832734ec
	if (!ctx.cr6.eq) goto loc_832734EC;
loc_832734DC:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8327351c
	goto loc_8327351C;
loc_832734EC:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327352c
	if (!ctx.cr0.eq) goto loc_8327352C;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x83273524
	goto loc_83273524;
loc_832734FC:
	// lwz r11,28(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// addi r10,r16,24
	ctx.r10.s64 = ctx.r16.s64 + 24;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83273510
	if (ctx.cr0.eq) goto loc_83273510;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_83273510:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832734dc
	if (ctx.cr6.eq) goto loc_832734DC;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8327351C:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327352c
	if (!ctx.cr0.eq) goto loc_8327352C;
loc_83273524:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8327349c
	if (!ctx.cr6.eq) goto loc_8327349C;
loc_8327352C:
	// lwz r3,640(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 640);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832735dc
	if (!ctx.cr0.eq) goto loc_832735DC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832735dc
	if (ctx.cr0.eq) goto loc_832735DC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83273558
	if (ctx.cr0.eq) goto loc_83273558;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x83273564
	goto loc_83273564;
loc_83273558:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_83273564:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x832735b4
	if (!ctx.cr0.eq) goto loc_832735B4;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x832735B4;
	sub_83204D00(ctx, base);
loc_832735B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832702e8
	ctx.lr = 0x832735D8;
	sub_832702E8(ctx, base);
	// b 0x8327352c
	goto loc_8327352C;
loc_832735DC:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
loc_832735E4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8325b5a8
	ctx.lr = 0x832735EC;
	sub_8325B5A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83273608
	if (ctx.cr0.eq) goto loc_83273608;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 7, ctx.xer);
	// blt cr6,0x832735e4
	if (ctx.cr6.lt) goto loc_832735E4;
	// b 0x832737e4
	goto loc_832737E4;
loc_83273608:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_83273614:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8325b5f0
	ctx.lr = 0x8327361C;
	sub_8325B5F0(ctx, base);
	// rlwinm r5,r3,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14720
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14720, ctx.xer);
	// beq cr6,0x832737b4
	if (ctx.cr6.eq) goto loc_832737B4;
	// clrlwi r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r10,652(r17)
	PPC_STORE_U32(ctx.r17.u32 + 652, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8326f568
	ctx.lr = 0x83273654;
	sub_8326F568(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x832737b4
	if (ctx.cr0.eq) goto loc_832737B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,652(r17)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r17.u32 + 652);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83258a70
	ctx.lr = 0x8327366C;
	sub_83258A70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x83273688
	if (ctx.cr6.eq) goto loc_83273688;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8325fd40
	ctx.lr = 0x83273684;
	sub_8325FD40(ctx, base);
	// b 0x832737b4
	goto loc_832737B4;
loc_83273688:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832736c4
	if (!ctx.cr0.eq) goto loc_832736C4;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832736c4
	if (!ctx.cr0.eq) goto loc_832736C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83268e28
	ctx.lr = 0x832736AC;
	sub_83268E28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832736c4
	if (ctx.cr0.eq) goto loc_832736C4;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832ef7b8
	ctx.lr = 0x832736C0;
	sub_832EF7B8(ctx, base);
	// b 0x832737b4
	goto loc_832737B4;
loc_832736C4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x83273764
	if (!ctx.cr6.eq) goto loc_83273764;
	// addi r11,r16,24
	ctx.r11.s64 = ctx.r16.s64 + 24;
loc_832736D8:
	// lwz r30,28(r16)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// addi r11,r16,24
	ctx.r11.s64 = ctx.r16.s64 + 24;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_832736E4:
	// beq 0x832736ec
	if (ctx.cr0.eq) goto loc_832736EC;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_832736EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83273754
	if (ctx.cr6.eq) goto loc_83273754;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83273724
	if (ctx.cr6.eq) goto loc_83273724;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x83273724
	if (!ctx.cr6.eq) goto loc_83273724;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83267820
	ctx.lr = 0x8327371C;
	sub_83267820(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83273734
	if (!ctx.cr0.eq) goto loc_83273734;
loc_83273724:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,40(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x832736e4
	goto loc_832736E4;
loc_83273734:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832ef7b8
	ctx.lr = 0x83273740;
	sub_832EF7B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// bne cr6,0x832736d8
	if (!ctx.cr6.eq) goto loc_832736D8;
	// b 0x832737b4
	goto loc_832737B4;
loc_83273754:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83270ac0
	ctx.lr = 0x83273760;
	sub_83270AC0(ctx, base);
	// b 0x83273780
	goto loc_83273780;
loc_83273764:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x83273780
	if (!ctx.cr6.eq) goto loc_83273780;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83273780
	if (!ctx.cr6.eq) goto loc_83273780;
	// rlwinm r11,r10,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// beq cr6,0x83273790
	if (ctx.cr6.eq) goto loc_83273790;
loc_83273780:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83270370
	ctx.lr = 0x83273790;
	sub_83270370(ctx, base);
loc_83273790:
	// lwz r11,652(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832737b4
	if (!ctx.cr6.eq) goto loc_832737B4;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832702e8
	ctx.lr = 0x832737B4;
	sub_832702E8(ctx, base);
loc_832737B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8325b5a8
	ctx.lr = 0x832737BC;
	sub_8325B5A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832737e4
	if (!ctx.cr0.eq) goto loc_832737E4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83273614
	if (ctx.cr6.eq) goto loc_83273614;
	// lwz r11,640(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 640);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83273614
	if (!ctx.cr0.eq) goto loc_83273614;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83273614
	if (ctx.cr0.eq) goto loc_83273614;
loc_832737E4:
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 7, ctx.xer);
	// bne cr6,0x8327352c
	if (!ctx.cr6.eq) goto loc_8327352C;
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
	// li r31,7
	ctx.r31.s64 = 7;
loc_832737F4:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8325b6a0
	ctx.lr = 0x83273800;
	sub_8325B6A0(ctx, base);
	// li r6,37
	ctx.r6.s64 = 37;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83227d20
	ctx.lr = 0x83273814;
	sub_83227D20(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x832737f4
	if (!ctx.cr0.eq) goto loc_832737F4;
	// lwz r11,40(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 40);
	// stw r15,652(r17)
	PPC_STORE_U32(ctx.r17.u32 + 652, ctx.r15.u32);
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r11,40(r17)
	PPC_STORE_U32(ctx.r17.u32 + 40, ctx.r11.u32);
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83273860
	if (ctx.cr0.eq) goto loc_83273860;
	// lwz r11,28(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83273854
	if (ctx.cr0.eq) goto loc_83273854;
	// lwz r31,36(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 36);
	// addi r30,r16,32
	ctx.r30.s64 = ctx.r16.s64 + 32;
	// b 0x83273868
	goto loc_83273868;
loc_83273854:
	// lwz r31,28(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// addi r30,r16,24
	ctx.r30.s64 = ctx.r16.s64 + 24;
	// b 0x83273868
	goto loc_83273868;
loc_83273860:
	// lwz r31,20(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// addi r30,r16,16
	ctx.r30.s64 = ctx.r16.s64 + 16;
loc_83273868:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83273960
	if (ctx.cr0.eq) goto loc_83273960;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x83273960
	goto loc_83273960;
loc_83273878:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832738a8
	if (ctx.cr6.eq) goto loc_832738A8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8327389c
	if (ctx.cr6.lt) goto loc_8327389C;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x832738a0
	if (!ctx.cr6.gt) goto loc_832738A0;
loc_8327389C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_832738A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83273900
	if (ctx.cr0.eq) goto loc_83273900;
loc_832738A8:
	// lwz r3,640(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 640);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832738dc
	if (!ctx.cr0.eq) goto loc_832738DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832738dc
	if (ctx.cr0.eq) goto loc_832738DC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x832738e8
	if (!ctx.cr6.gt) goto loc_832738E8;
loc_832738DC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8322be98
	ctx.lr = 0x832738E4;
	sub_8322BE98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_832738E8:
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
loc_83273900:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327391c
	if (!ctx.cr0.eq) goto loc_8327391C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83273878
	if (!ctx.cr6.eq) goto loc_83273878;
loc_8327391C:
	// addi r9,r16,32
	ctx.r9.s64 = ctx.r16.s64 + 32;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83273968
	if (ctx.cr6.eq) goto loc_83273968;
	// addi r10,r16,24
	ctx.r10.s64 = ctx.r16.s64 + 24;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8327394c
	if (ctx.cr6.eq) goto loc_8327394C;
	// lwz r11,28(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327394c
	if (!ctx.cr0.eq) goto loc_8327394C;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// b 0x83273954
	goto loc_83273954;
loc_8327394C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_83273954:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83273968
	if (!ctx.cr0.eq) goto loc_83273968;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83273960:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83273878
	if (!ctx.cr6.eq) goto loc_83273878;
loc_83273968:
	// lwz r3,640(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 640);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83273a28
	if (!ctx.cr0.eq) goto loc_83273A28;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83273a28
	if (ctx.cr0.eq) goto loc_83273A28;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83273994
	if (ctx.cr0.eq) goto loc_83273994;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x832739a0
	goto loc_832739A0;
loc_83273994:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_832739A0:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x832739f0
	if (!ctx.cr0.eq) goto loc_832739F0;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x832739F0;
	sub_83204D00(ctx, base);
loc_832739F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8326f2d0
	ctx.lr = 0x83273A10;
	sub_8326F2D0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x83273968
	if (ctx.cr0.eq) goto loc_83273968;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83270bf8
	ctx.lr = 0x83273A24;
	sub_83270BF8(ctx, base);
	// b 0x83273968
	goto loc_83273968;
loc_83273A28:
	// addi r11,r16,24
	ctx.r11.s64 = ctx.r16.s64 + 24;
	// lwz r11,28(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83273ff0
	if (!ctx.cr0.eq) goto loc_83273FF0;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83273ff0
	if (ctx.cr0.eq) goto loc_83273FF0;
	// lwz r18,100(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_83273A48:
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83273fd0
	if (ctx.cr0.eq) goto loc_83273FD0;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// bne cr6,0x83273fd0
	if (!ctx.cr6.eq) goto loc_83273FD0;
	// lwz r3,44(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83273fd0
	if (!ctx.cr0.eq) goto loc_83273FD0;
	// lwz r20,12(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// beq cr6,0x83273a8c
	if (ctx.cr6.eq) goto loc_83273A8C;
	// cmplwi cr6,r11,111
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 111, ctx.xer);
	// bne cr6,0x83273fd0
	if (!ctx.cr6.eq) goto loc_83273FD0;
loc_83273A8C:
	// lwz r4,48(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// bl 0x8321cb38
	ctx.lr = 0x83273A94;
	sub_8321CB38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83273fd0
	if (ctx.cr0.eq) goto loc_83273FD0;
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
loc_83273AA0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83273acc
	if (ctx.cr6.eq) goto loc_83273ACC;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83273abc
	if (ctx.cr6.eq) goto loc_83273ABC;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x83273ac4
	if (!ctx.cr6.eq) goto loc_83273AC4;
loc_83273ABC:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x83273aa0
	goto loc_83273AA0;
loc_83273AC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83273ad0
	goto loc_83273AD0;
loc_83273ACC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_83273AD0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83273fd0
	if (!ctx.cr0.eq) goto loc_83273FD0;
	// addi r23,r20,44
	ctx.r23.s64 = ctx.r20.s64 + 44;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
loc_83273AE0:
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83273fcc
	if (!ctx.cr6.lt) goto loc_83273FCC;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83229f50
	ctx.lr = 0x83273B00;
	sub_83229F50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83273fc0
	if (ctx.cr0.eq) goto loc_83273FC0;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r11,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x83273fc0
	if (!ctx.cr6.eq) goto loc_83273FC0;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83273fc0
	if (!ctx.cr6.eq) goto loc_83273FC0;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_83273B2C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83273b58
	if (ctx.cr6.eq) goto loc_83273B58;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83273b48
	if (ctx.cr6.eq) goto loc_83273B48;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x83273b50
	if (!ctx.cr6.eq) goto loc_83273B50;
loc_83273B48:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x83273b2c
	goto loc_83273B2C;
loc_83273B50:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83273b5c
	goto loc_83273B5C;
loc_83273B58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83273B5C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83273fc0
	if (!ctx.cr0.eq) goto loc_83273FC0;
	// lwz r30,44(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r29,48(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83273fc0
	if (ctx.cr6.eq) goto loc_83273FC0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// bne cr6,0x83273ba4
	if (!ctx.cr6.eq) goto loc_83273BA4;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16000, ctx.xer);
	// beq cr6,0x83273fc0
	if (ctx.cr6.eq) goto loc_83273FC0;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x83273bb0
	if (ctx.cr6.eq) goto loc_83273BB0;
loc_83273BA4:
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83273bb4
	if (!ctx.cr6.eq) goto loc_83273BB4;
loc_83273BB0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83273BB4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83273fc0
	if (!ctx.cr0.eq) goto loc_83273FC0;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x83273bd8
	if (ctx.cr6.eq) goto loc_83273BD8;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83273bdc
	if (!ctx.cr6.eq) goto loc_83273BDC;
loc_83273BD8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83273BDC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83273fc0
	if (!ctx.cr0.eq) goto loc_83273FC0;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8325f518
	ctx.lr = 0x83273C04;
	sub_8325F518(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83273fc0
	if (ctx.cr0.eq) goto loc_83273FC0;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// rlwinm r10,r11,0,21,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F0;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bgt cr6,0x83273fc0
	if (ctx.cr6.gt) goto loc_83273FC0;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83273fc0
	if (!ctx.cr0.eq) goto loc_83273FC0;
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83273fc0
	if (!ctx.cr0.eq) goto loc_83273FC0;
	// li r4,816
	ctx.r4.s64 = 816;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83258000
	ctx.lr = 0x83273C38;
	sub_83258000(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83273fc0
	if (ctx.cr0.eq) goto loc_83273FC0;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_83273C48:
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83273fc0
	if (!ctx.cr6.lt) goto loc_83273FC0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83273d84
	if (ctx.cr6.eq) goto loc_83273D84;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83273c84
	if (ctx.cr6.lt) goto loc_83273C84;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83273c88
	if (!ctx.cr6.gt) goto loc_83273C88;
loc_83273C84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83273C88:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83273d84
	if (ctx.cr0.eq) goto loc_83273D84;
	// rlwinm r11,r10,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380000;
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83273d84
	if (!ctx.cr6.lt) goto loc_83273D84;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_83273CA4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83273cd0
	if (ctx.cr6.eq) goto loc_83273CD0;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83273cc0
	if (ctx.cr6.eq) goto loc_83273CC0;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x83273cc8
	if (!ctx.cr6.eq) goto loc_83273CC8;
loc_83273CC0:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x83273ca4
	goto loc_83273CA4;
loc_83273CC8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83273cd4
	goto loc_83273CD4;
loc_83273CD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83273CD4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83273d84
	if (!ctx.cr0.eq) goto loc_83273D84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832f1340
	ctx.lr = 0x83273CE8;
	sub_832F1340(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83273d84
	if (ctx.cr0.eq) goto loc_83273D84;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83261d60
	ctx.lr = 0x83273D14;
	sub_83261D60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r26,12(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83232fe0
	ctx.lr = 0x83273D28;
	sub_83232FE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832f9370
	ctx.lr = 0x83273D40;
	sub_832F9370(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83273d90
	if (!ctx.cr0.eq) goto loc_83273D90;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83233970
	ctx.lr = 0x83273D58;
	sub_83233970(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8321d798
	ctx.lr = 0x83273D60;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// beq 0x83273d80
	if (ctx.cr0.eq) goto loc_83273D80;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x832f6cc8
	ctx.lr = 0x83273D7C;
	sub_832F6CC8(ctx, base);
	// b 0x83273d84
	goto loc_83273D84;
loc_83273D80:
	// bl 0x8325fd40
	ctx.lr = 0x83273D84;
	sub_8325FD40(ctx, base);
loc_83273D84:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// b 0x83273c48
	goto loc_83273C48;
loc_83273D90:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832f9488
	ctx.lr = 0x83273DA8;
	sub_832F9488(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r9,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3;
	// rlwinm r9,r9,25,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x3;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x83273dd0
	goto loc_83273DD0;
loc_83273DC8:
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
loc_83273DD0:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83273dc8
	if (!ctx.cr6.eq) goto loc_83273DC8;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r10,26
	ctx.r5.u64 = ctx.r10.u32 & 0x3F;
	// or r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 | ctx.r10.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// or r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// or r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r8,r8,0,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFE000;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x83273e4c
	goto loc_83273E4C;
loc_83273E44:
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
loc_83273E4C:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x83273e44
	if (!ctx.cr6.eq) goto loc_83273E44;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r6,r9,26
	ctx.r6.u64 = ctx.r9.u32 & 0x3F;
	// or r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// or r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 | ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r10,0,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFE000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r10,r9,27
	ctx.r10.u64 = ctx.r9.u32 & 0x1F;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x83233970
	ctx.lr = 0x83273EBC;
	sub_83233970(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83226260
	ctx.lr = 0x83273ED8;
	sub_83226260(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x83232e10
	ctx.lr = 0x83273EF4;
	sub_83232E10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83232fe0
	ctx.lr = 0x83273F00;
	sub_83232FE0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832330a8
	ctx.lr = 0x83273F1C;
	sub_832330A8(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832330a8
	ctx.lr = 0x83273F2C;
	sub_832330A8(ctx, base);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x83273f5c
	if (!ctx.cr6.eq) goto loc_83273F5C;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x83273F44;
	sub_8321D6D0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// addi r11,r18,4
	ctx.r11.s64 = ctx.r18.s64 + 4;
	// ori r10,r18,1
	ctx.r10.u64 = ctx.r18.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r10.u32);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
loc_83273F5C:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83273f8c
	if (!ctx.cr0.eq) goto loc_83273F8C;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83273f8c
	if (ctx.cr0.eq) goto loc_83273F8C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x83273f9c
	if (!ctx.cr6.gt) goto loc_83273F9C;
loc_83273F8C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8322be98
	ctx.lr = 0x83273F98;
	sub_8322BE98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83273F9C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
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
	// bl 0x832ef7b8
	ctx.lr = 0x83273FC0;
	sub_832EF7B8(ctx, base);
loc_83273FC0:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// b 0x83273ae0
	goto loc_83273AE0;
loc_83273FCC:
	// li r22,0
	ctx.r22.s64 = 0;
loc_83273FD0:
	// rlwinm r11,r19,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83273fec
	if (!ctx.cr0.eq) goto loc_83273FEC;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83273a48
	if (!ctx.cr6.eq) goto loc_83273A48;
loc_83273FEC:
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
loc_83273FF0:
	// stw r15,652(r17)
	PPC_STORE_U32(ctx.r17.u32 + 652, ctx.r15.u32);
	// addi r11,r16,24
	ctx.r11.s64 = ctx.r16.s64 + 24;
	// lwz r31,28(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83274068
	if (!ctx.cr0.eq) goto loc_83274068;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x83274068
	if (ctx.cr0.eq) goto loc_83274068;
loc_8327400C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83229f50
	ctx.lr = 0x83274014;
	sub_83229F50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274050
	if (ctx.cr0.eq) goto loc_83274050;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83259cc0
	ctx.lr = 0x83274028;
	sub_83259CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83274050
	if (!ctx.cr0.eq) goto loc_83274050;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83274050
	if (!ctx.cr6.lt) goto loc_83274050;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8325fd40
	ctx.lr = 0x83274050;
	sub_8325FD40(ctx, base);
loc_83274050:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83274068
	if (!ctx.cr0.eq) goto loc_83274068;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8327400c
	if (!ctx.cr6.eq) goto loc_8327400C;
loc_83274068:
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x83274078;
	sub_8321D6D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r25,r26,4
	ctx.r25.s64 = ctx.r26.s64 + 4;
	// ori r11,r26,1
	ctx.r11.u64 = ctx.r26.u64 | 1;
	// ori r10,r25,1
	ctx.r10.u64 = ctx.r25.u64 | 1;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_83274090:
	// lwz r11,640(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 640);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83274354
	if (!ctx.cr0.eq) goto loc_83274354;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83274354
	if (ctx.cr0.eq) goto loc_83274354;
loc_832740A8:
	// lwz r3,640(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 640);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832741d4
	if (!ctx.cr0.eq) goto loc_832741D4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832741d4
	if (ctx.cr0.eq) goto loc_832741D4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832740d4
	if (ctx.cr0.eq) goto loc_832740D4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x832740e0
	goto loc_832740E0;
loc_832740D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_832740E0:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x83274130
	if (!ctx.cr0.eq) goto loc_83274130;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x83274130;
	sub_83204D00(ctx, base);
loc_83274130:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8326f2d0
	ctx.lr = 0x83274150;
	sub_8326F2D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x832740a8
	if (ctx.cr0.eq) goto loc_832740A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83259cc0
	ctx.lr = 0x83274164;
	sub_83259CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832740a8
	if (!ctx.cr0.eq) goto loc_832740A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83229f50
	ctx.lr = 0x83274174;
	sub_83229F50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832740a8
	if (ctx.cr0.eq) goto loc_832740A8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832741ac
	if (!ctx.cr0.eq) goto loc_832741AC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832741ac
	if (ctx.cr0.eq) goto loc_832741AC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832741b8
	if (!ctx.cr6.gt) goto loc_832741B8;
loc_832741AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8322be98
	ctx.lr = 0x832741B8;
	sub_8322BE98(ctx, base);
loc_832741B8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
	// b 0x832740a8
	goto loc_832740A8;
loc_832741D4:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8327420c
	if (!ctx.cr0.eq) goto loc_8327420C;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8327420c
	if (ctx.cr0.eq) goto loc_8327420C;
loc_832741EC:
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8327420c
	if (!ctx.cr0.eq) goto loc_8327420C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832741ec
	if (!ctx.cr6.eq) goto loc_832741EC;
loc_8327420C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83274354
	if (ctx.cr6.eq) goto loc_83274354;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8321e0d0
	ctx.lr = 0x83274228;
	sub_8321E0D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_83274234:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832742d0
	if (!ctx.cr0.eq) goto loc_832742D0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832742d0
	if (ctx.cr0.eq) goto loc_832742D0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x832742a8
	if (!ctx.cr0.eq) goto loc_832742A8;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x832742A8;
	sub_83204D00(ctx, base);
loc_832742A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83274234
	if (!ctx.cr0.eq) goto loc_83274234;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x83274234
	if (ctx.cr6.eq) goto loc_83274234;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83274234
	goto loc_83274234;
loc_832742D0:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-30600
	ctx.r6.s64 = ctx.r11.s64 + -30600;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb3100
	ctx.lr = 0x832742E8;
	sub_82CB3100(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8327433c
	if (ctx.cr6.eq) goto loc_8327433C;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_832742F4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83274330
	if (!ctx.cr0.eq) goto loc_83274330;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x83274330
	if (ctx.cr6.eq) goto loc_83274330;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8326ffa0
	ctx.lr = 0x8327431C;
	sub_8326FFA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274330
	if (ctx.cr0.eq) goto loc_83274330;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832ef7b8
	ctx.lr = 0x83274330;
	sub_832EF7B8(ctx, base);
loc_83274330:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x832742f4
	if (!ctx.cr0.eq) goto loc_832742F4;
loc_8327433C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83227d20
	ctx.lr = 0x83274350;
	sub_83227D20(ctx, base);
	// b 0x83274090
	goto loc_83274090;
loc_83274354:
	// li r6,38
	ctx.r6.s64 = 38;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83227d20
	ctx.lr = 0x83274368;
	sub_83227D20(ctx, base);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83274384
	if (ctx.cr0.eq) goto loc_83274384;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83264c30
	ctx.lr = 0x83274380;
	sub_83264C30(ctx, base);
	// stb r22,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r22.u8);
loc_83274384:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832743a0
	if (ctx.cr0.eq) goto loc_832743A0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8325b1d0
	ctx.lr = 0x8327439C;
	sub_8325B1D0(ctx, base);
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
loc_832743A0:
	// lwz r11,644(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 644);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83274624
	if (!ctx.cr0.eq) goto loc_83274624;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83274624
	if (ctx.cr0.eq) goto loc_83274624;
	// lwz r11,40(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 40);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r30,10
	ctx.r30.s64 = 10;
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,652(r17)
	PPC_STORE_U32(ctx.r17.u32 + 652, ctx.r10.u32);
	// stw r11,40(r17)
	PPC_STORE_U32(ctx.r17.u32 + 40, ctx.r11.u32);
loc_832743D0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,644(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 644);
	// bl 0x8325ec48
	ctx.lr = 0x832743DC;
	sub_8325EC48(ctx, base);
loc_832743DC:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327440c
	if (!ctx.cr6.eq) goto loc_8327440C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832743fc
	if (ctx.cr0.eq) goto loc_832743FC;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_832743FC:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83274410
	if (ctx.cr6.eq) goto loc_83274410;
loc_8327440C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_83274410:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832744a0
	if (!ctx.cr0.eq) goto loc_832744A0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8325d1d0
	ctx.lr = 0x83274420;
	sub_8325D1D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x832743dc
	if (!ctx.cr6.eq) goto loc_832743DC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,6,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r3,640(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 640);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83274478
	if (!ctx.cr0.eq) goto loc_83274478;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274478
	if (ctx.cr0.eq) goto loc_83274478;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x83274484
	if (!ctx.cr6.gt) goto loc_83274484;
loc_83274478:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8322be98
	ctx.lr = 0x83274480;
	sub_8322BE98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83274484:
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
	// b 0x832743dc
	goto loc_832743DC;
loc_832744A0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832743d0
	if (!ctx.cr0.lt) goto loc_832743D0;
	// lwz r3,644(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 644);
	// bl 0x8325cd10
	ctx.lr = 0x832744B0;
	sub_8325CD10(ctx, base);
loc_832744B0:
	// lwz r3,640(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 640);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83274624
	if (!ctx.cr0.eq) goto loc_83274624;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83274624
	if (ctx.cr0.eq) goto loc_83274624;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832744dc
	if (ctx.cr0.eq) goto loc_832744DC;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x832744e8
	goto loc_832744E8;
loc_832744DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_832744E8:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x83274538
	if (!ctx.cr0.eq) goto loc_83274538;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x83274538;
	sub_83204D00(ctx, base);
loc_83274538:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8326f2d0
	ctx.lr = 0x83274558;
	sub_8326F2D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x832744b0
	if (ctx.cr0.eq) goto loc_832744B0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83270bf8
	ctx.lr = 0x83274570;
	sub_83270BF8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832744b0
	if (!ctx.cr0.eq) goto loc_832744B0;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r29,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x832744b0
	if (ctx.cr6.eq) goto loc_832744B0;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
loc_83274590:
	// rlwinm r11,r29,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 13) & 0x7;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832745dc
	if (!ctx.cr6.lt) goto loc_832745DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83270370
	ctx.lr = 0x832745B0;
	sub_83270370(ctx, base);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r29,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x832744b0
	if (ctx.cr6.eq) goto loc_832744B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d798
	ctx.lr = 0x832745C8;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832744b0
	if (!ctx.cr0.eq) goto loc_832744B0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x83274590
	goto loc_83274590;
loc_832745DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83259cc0
	ctx.lr = 0x832745E4;
	sub_83259CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832744b0
	if (!ctx.cr0.eq) goto loc_832744B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83229f50
	ctx.lr = 0x832745F4;
	sub_83229F50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832744b0
	if (ctx.cr0.eq) goto loc_832744B0;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8326ffa0
	ctx.lr = 0x8327460C;
	sub_8326FFA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832744b0
	if (ctx.cr0.eq) goto loc_832744B0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832ef7b8
	ctx.lr = 0x83274620;
	sub_832EF7B8(ctx, base);
	// b 0x832744b0
	goto loc_832744B0;
loc_83274624:
	// lwz r31,640(r17)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r17.u32 + 640);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r22,640(r17)
	PPC_STORE_U32(ctx.r17.u32 + 640, ctx.r22.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8323d0d8
	ctx.lr = 0x83274638;
	sub_8323D0D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,640(r17)
	PPC_STORE_U32(ctx.r17.u32 + 640, ctx.r31.u32);
	// bne 0x83270fd4
	if (!ctx.cr0.eq) goto loc_83270FD4;
	// lwz r14,96(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,20(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274884
	if (ctx.cr0.eq) goto loc_83274884;
	// lwz r11,28(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274884
	if (ctx.cr0.eq) goto loc_83274884;
	// lwz r11,36(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274884
	if (ctx.cr0.eq) goto loc_83274884;
	// lwz r11,8(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// addi r10,r14,8
	ctx.r10.s64 = ctx.r14.s64 + 8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83274884
	if (ctx.cr6.eq) goto loc_83274884;
	// lwz r11,48(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 48);
	// rlwinm. r9,r11,13,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83274884
	if (!ctx.cr0.eq) goto loc_83274884;
	// rlwinm. r9,r11,12,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83274884
	if (!ctx.cr0.eq) goto loc_83274884;
	// rlwinm. r11,r11,11,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83274884
	if (!ctx.cr0.eq) goto loc_83274884;
	// lwz r11,12(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832746ac
	if (ctx.cr6.eq) goto loc_832746AC;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_832746AC:
	// rlwinm r27,r14,0,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832746c0
	if (ctx.cr0.eq) goto loc_832746C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832746C0:
	// lwz r18,468(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83274888
	if (!ctx.cr6.eq) goto loc_83274888;
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_832746D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83274848
	if (ctx.cr6.eq) goto loc_83274848;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832746f4
	if (ctx.cr0.eq) goto loc_832746F4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83274768
	goto loc_83274768;
loc_832746F4:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83274768
	if (ctx.cr0.eq) goto loc_83274768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225988
	ctx.lr = 0x8327470C;
	sub_83225988(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274768
	if (ctx.cr0.eq) goto loc_83274768;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d4e8
	ctx.lr = 0x83274720;
	sub_8321D4E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x83274788
	if (!ctx.cr6.eq) goto loc_83274788;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
loc_83274730:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10880
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10880, ctx.xer);
	// bne cr6,0x83274768
	if (!ctx.cr6.eq) goto loc_83274768;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832590b8
	ctx.lr = 0x8327474C;
	sub_832590B8(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8321d578
	ctx.lr = 0x83274758;
	sub_8321D578(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x83274768
	if (!ctx.cr6.eq) goto loc_83274768;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
loc_83274768:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_8327476C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832747b8
	if (ctx.cr6.eq) goto loc_832747B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832747b0
	if (ctx.cr6.eq) goto loc_832747B0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8327476c
	goto loc_8327476C;
loc_83274788:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x83274730
	if (!ctx.cr6.eq) goto loc_83274730;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x832f6f50
	ctx.lr = 0x8327479C;
	sub_832F6F50(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832fb290
	ctx.lr = 0x832747AC;
	sub_832FB290(ctx, base);
	// b 0x83274830
	goto loc_83274830;
loc_832747B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832747bc
	goto loc_832747BC;
loc_832747B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832747BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq 0x83274824
	if (ctx.cr0.eq) goto loc_83274824;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x832fb290
	ctx.lr = 0x832747D4;
	sub_832FB290(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83274830
	if (ctx.cr6.eq) goto loc_83274830;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11520, ctx.xer);
	// bne cr6,0x83274830
	if (!ctx.cr6.eq) goto loc_83274830;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83274808
	if (ctx.cr6.eq) goto loc_83274808;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8327480c
	if (!ctx.cr6.eq) goto loc_8327480C;
loc_83274808:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327480C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83274830
	if (!ctx.cr0.eq) goto loc_83274830;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x832f6f50
	ctx.lr = 0x83274820;
	sub_832F6F50(ctx, base);
	// b 0x83274830
	goto loc_83274830;
loc_83274824:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832fb250
	ctx.lr = 0x83274830;
	sub_832FB250(ctx, base);
loc_83274830:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x83274840
	if (!ctx.cr6.eq) goto loc_83274840;
	// addi r26,r29,12
	ctx.r26.s64 = ctx.r29.s64 + 12;
loc_83274840:
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x832746d4
	goto loc_832746D4;
loc_83274848:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x832fb290
	ctx.lr = 0x83274858;
	sub_832FB290(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x832a8260
	ctx.lr = 0x83274880;
	sub_832A8260(ctx, base);
	// b 0x83274888
	goto loc_83274888;
loc_83274884:
	// lwz r18,468(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
loc_83274888:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83274ecc
	if (!ctx.cr6.eq) goto loc_83274ECC;
	// lwz r10,28(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// addi r11,r14,24
	ctx.r11.s64 = ctx.r14.s64 + 24;
	// li r27,0
	ctx.r27.s64 = 0;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// bne 0x83274dd8
	if (!ctx.cr0.eq) goto loc_83274DD8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r26,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r26.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x83274dd8
	if (ctx.cr0.eq) goto loc_83274DD8;
loc_832748BC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8321d798
	ctx.lr = 0x832748C4;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832748e4
	if (ctx.cr0.eq) goto loc_832748E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x832748E0;
	sub_832F6CC8(ctx, base);
	// b 0x83274b34
	goto loc_83274B34;
loc_832748E4:
	// lwz r31,8(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r31,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x83274908
	if (!ctx.cr6.eq) goto loc_83274908;
	// rlwinm. r11,r31,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274b34
	if (ctx.cr0.eq) goto loc_83274B34;
	// rlwinm r11,r31,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// b 0x83274b34
	goto loc_83274B34;
loc_83274908:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83229f50
	ctx.lr = 0x83274910;
	sub_83229F50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274b34
	if (ctx.cr0.eq) goto loc_83274B34;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83259cc0
	ctx.lr = 0x83274924;
	sub_83259CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83274b34
	if (!ctx.cr0.eq) goto loc_83274B34;
	// rlwinm r28,r31,6,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x1;
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
loc_83274938:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83274a24
	if (ctx.cr6.eq) goto loc_83274A24;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83274a18
	if (ctx.cr6.eq) goto loc_83274A18;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r9,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274a18
	if (ctx.cr0.eq) goto loc_83274A18;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r7,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,14080
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 14080, ctx.xer);
	// bne cr6,0x832749cc
	if (!ctx.cr6.eq) goto loc_832749CC;
	// rlwinm. r11,r7,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bne 0x83274a18
	if (!ctx.cr0.eq) goto loc_83274A18;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r6,r7,13,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0x7;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
loc_83274984:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x832749a4
	if (!ctx.cr6.lt) goto loc_832749A4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// b 0x83274984
	goto loc_83274984;
loc_832749A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8326ef20
	ctx.lr = 0x832749C4;
	sub_8326EF20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// b 0x83274a14
	goto loc_83274A14;
loc_832749CC:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83274a00
	if (ctx.cr6.eq) goto loc_83274A00;
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_832749E0:
	// srw r6,r9,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x832749e0
	if (!ctx.cr0.eq) goto loc_832749E0;
loc_83274A00:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83274a18
	if (ctx.cr6.eq) goto loc_83274A18;
	// rlwinm. r11,r7,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_83274A14:
	// bne 0x83274a20
	if (!ctx.cr0.eq) goto loc_83274A20;
loc_83274A18:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x83274938
	goto loc_83274938;
loc_83274A20:
	// li r28,1
	ctx.r28.s64 = 1;
loc_83274A24:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274aac
	if (ctx.cr0.eq) goto loc_83274AAC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83274a44
	if (!ctx.cr6.eq) goto loc_83274A44;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83230e90
	ctx.lr = 0x83274A3C;
	sub_83230E90(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x83274aac
	if (ctx.cr0.eq) goto loc_83274AAC;
loc_83274A44:
	// lwz r30,4(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_83274A48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83274aac
	if (ctx.cr6.eq) goto loc_83274AAC;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83274aa0
	if (ctx.cr6.eq) goto loc_83274AA0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274aa0
	if (ctx.cr0.eq) goto loc_83274AA0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274aa0
	if (ctx.cr0.eq) goto loc_83274AA0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832f15c8
	ctx.lr = 0x83274A7C;
	sub_832F15C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274aa0
	if (ctx.cr0.eq) goto loc_83274AA0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x832f7d60
	ctx.lr = 0x83274A98;
	sub_832F7D60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274aa8
	if (ctx.cr0.eq) goto loc_83274AA8;
loc_83274AA0:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x83274a48
	goto loc_83274A48;
loc_83274AA8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83274AAC:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274b34
	if (ctx.cr0.eq) goto loc_83274B34;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83274b18
	if (ctx.cr6.eq) goto loc_83274B18;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83274b18
	if (!ctx.cr0.eq) goto loc_83274B18;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8325fd40
	ctx.lr = 0x83274AD4;
	sub_8325FD40(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,44
	ctx.r30.s64 = ctx.r29.s64 + 44;
loc_83274ADC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83274b08
	if (!ctx.cr6.lt) goto loc_83274B08;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8325fd40
	ctx.lr = 0x83274AFC;
	sub_8325FD40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x83274adc
	goto loc_83274ADC;
loc_83274B08:
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x83274b18
	if (ctx.cr6.eq) goto loc_83274B18;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// b 0x83274b34
	goto loc_83274B34;
loc_83274B18:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r10,r11,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bgt cr6,0x83274d30
	if (ctx.cr6.gt) goto loc_83274D30;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8325fd40
	ctx.lr = 0x83274B34;
	sub_8325FD40(ctx, base);
loc_83274B34:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x83274d8c
	if (ctx.cr6.eq) goto loc_83274D8C;
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274d54
	if (ctx.cr0.eq) goto loc_83274D54;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83274d5c
	goto loc_83274D5C;
loc_83274B54:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8321d798
	ctx.lr = 0x83274B5C;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bne 0x83274d40
	if (!ctx.cr0.eq) goto loc_83274D40;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r28,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r28.s64 = 31 - ctx.r11.s64;
	// bl 0x832f04e8
	ctx.lr = 0x83274B88;
	sub_832F04E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r12,-17537
	ctx.r12.s64 = -1149304832;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x8327d000
	ctx.lr = 0x83274BC4;
	sub_8327D000(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327d0a0
	ctx.lr = 0x83274BD4;
	sub_8327D0A0(ctx, base);
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r24,r26,44
	ctx.r24.s64 = ctx.r26.s64 + 44;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_83274C14:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83274d1c
	if (!ctx.cr6.lt) goto loc_83274D1C;
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x83274c88
	if (!ctx.cr6.eq) goto loc_83274C88;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x8322a4b8
	ctx.lr = 0x83274C68;
	sub_8322A4B8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x83232570
	ctx.lr = 0x83274C78;
	sub_83232570(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8325fd40
	ctx.lr = 0x83274C84;
	sub_8325FD40(ctx, base);
	// b 0x83274cd0
	goto loc_83274CD0;
loc_83274C88:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8322a4b8
	ctx.lr = 0x83274C94;
	sub_8322A4B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,7296
	ctx.r9.s64 = 7296;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r8,r11,25,4,6
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 25) & 0xE000000) | (ctx.r8.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// rlwinm r11,r8,0,27,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// rlwinm r11,r11,0,24,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r8,r8,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r9,r10,5,25,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x60) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF9F);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83274CD0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832291f0
	ctx.lr = 0x83274CE0;
	sub_832291F0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274d10
	if (ctx.cr0.eq) goto loc_83274D10;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83232640
	ctx.lr = 0x83274CF4;
	sub_83232640(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83229400
	ctx.lr = 0x83274D04;
	sub_83229400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83232fe0
	ctx.lr = 0x83274D10;
	sub_83232FE0(ctx, base);
loc_83274D10:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// b 0x83274c14
	goto loc_83274C14;
loc_83274D1C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83264190
	ctx.lr = 0x83274D2C;
	sub_83264190(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
loc_83274D30:
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// bne cr6,0x83274b54
	if (!ctx.cr6.eq) goto loc_83274B54;
	// b 0x83274d4c
	goto loc_83274D4C;
loc_83274D40:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x832f6cc8
	ctx.lr = 0x83274D4C;
	sub_832F6CC8(ctx, base);
loc_83274D4C:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x83274b34
	goto loc_83274B34;
loc_83274D54:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_83274D5C:
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83274d7c
	if (!ctx.cr6.eq) goto loc_83274D7C;
loc_83274D64:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83274dd8
	if (!ctx.cr0.eq) goto loc_83274DD8;
	// b 0x83274dc8
	goto loc_83274DC8;
loc_83274D7C:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83274dd8
	if (!ctx.cr0.eq) goto loc_83274DD8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x83274dcc
	goto loc_83274DCC;
loc_83274D8C:
	// lwz r11,28(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// addi r10,r14,24
	ctx.r10.s64 = ctx.r14.s64 + 24;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274da4
	if (ctx.cr0.eq) goto loc_83274DA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83274db0
	goto loc_83274DB0;
loc_83274DA4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_83274DB0:
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83274d64
	if (ctx.cr6.eq) goto loc_83274D64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83274dd8
	if (!ctx.cr0.eq) goto loc_83274DD8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_83274DC8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_83274DCC:
	// addi r26,r11,-40
	ctx.r26.s64 = ctx.r11.s64 + -40;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832748bc
	if (!ctx.cr6.eq) goto loc_832748BC;
loc_83274DD8:
	// lwz r3,640(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 640);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83274eb8
	if (!ctx.cr0.eq) goto loc_83274EB8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83274eb8
	if (ctx.cr0.eq) goto loc_83274EB8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274e04
	if (ctx.cr0.eq) goto loc_83274E04;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83274e10
	goto loc_83274E10;
loc_83274E04:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_83274E10:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x83274e60
	if (!ctx.cr0.eq) goto loc_83274E60;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x83274E60;
	sub_83204D00(ctx, base);
loc_83274E60:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// rlwinm r30,r11,25,25,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r30,115
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 115, ctx.xer);
	// beq cr6,0x83274dd8
	if (ctx.cr6.eq) goto loc_83274DD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d798
	ctx.lr = 0x83274E80;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274ea0
	if (ctx.cr0.eq) goto loc_83274EA0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x83274E9C;
	sub_832F6CC8(ctx, base);
	// b 0x83274dd8
	goto loc_83274DD8;
loc_83274EA0:
	// cmplwi cr6,r30,110
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 110, ctx.xer);
	// bne cr6,0x83274dd8
	if (!ctx.cr6.eq) goto loc_83274DD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83260cd0
	ctx.lr = 0x83274EB4;
	sub_83260CD0(ctx, base);
	// b 0x83274dd8
	goto loc_83274DD8;
loc_83274EB8:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274ecc
	if (ctx.cr0.eq) goto loc_83274ECC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x83270fd4
	goto loc_83270FD4;
loc_83274ECC:
	// addi r11,r14,24
	ctx.r11.s64 = ctx.r14.s64 + 24;
	// lwz r11,28(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// li r15,0
	ctx.r15.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83275600
	if (!ctx.cr0.eq) goto loc_83275600;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83275600
	if (ctx.cr0.eq) goto loc_83275600;
loc_83274EEC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83259cc0
	ctx.lr = 0x83274EF8;
	sub_83259CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83275584
	if (!ctx.cr0.eq) goto loc_83275584;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x83275040
	if (ctx.cr6.eq) goto loc_83275040;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x83274fb8
	if (ctx.cr6.eq) goto loc_83274FB8;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x83275584
	if (!ctx.cr6.eq) goto loc_83275584;
	// lwz r3,48(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x83238210
	ctx.lr = 0x83274F2C;
	sub_83238210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274f64
	if (ctx.cr0.eq) goto loc_83274F64;
	// lwz r3,52(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83238210
	ctx.lr = 0x83274F40;
	sub_83238210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274f64
	if (ctx.cr0.eq) goto loc_83274F64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r7,52(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,44(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83253a88
	ctx.lr = 0x83274F60;
	sub_83253A88(ctx, base);
	// b 0x832750c8
	goto loc_832750C8;
loc_83274F64:
	// lwz r3,48(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83238210
	ctx.lr = 0x83274F70;
	sub_83238210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83275584
	if (ctx.cr0.eq) goto loc_83275584;
	// lwz r3,52(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x83238210
	ctx.lr = 0x83274F84;
	sub_83238210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83275584
	if (ctx.cr0.eq) goto loc_83275584;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r7,48(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,44(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83253b58
	ctx.lr = 0x83274FA4;
	sub_83253B58(ctx, base);
loc_83274FA4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x83232570
	ctx.lr = 0x83274FB4;
	sub_83232570(ctx, base);
	// b 0x832750cc
	goto loc_832750CC;
loc_83274FB8:
	// lwz r3,48(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x83238210
	ctx.lr = 0x83274FC4;
	sub_83238210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274ffc
	if (ctx.cr0.eq) goto loc_83274FFC;
	// lwz r3,52(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83238210
	ctx.lr = 0x83274FD8;
	sub_83238210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83274ffc
	if (ctx.cr0.eq) goto loc_83274FFC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r7,52(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,44(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83253b58
	ctx.lr = 0x83274FF8;
	sub_83253B58(ctx, base);
	// b 0x832750c8
	goto loc_832750C8;
loc_83274FFC:
	// lwz r3,48(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83238210
	ctx.lr = 0x83275008;
	sub_83238210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83275584
	if (ctx.cr0.eq) goto loc_83275584;
	// lwz r3,52(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x83238210
	ctx.lr = 0x8327501C;
	sub_83238210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83275584
	if (ctx.cr0.eq) goto loc_83275584;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r7,48(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,44(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83253a88
	ctx.lr = 0x8327503C;
	sub_83253A88(ctx, base);
	// b 0x83274fa4
	goto loc_83274FA4;
loc_83275040:
	// lwz r3,48(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// addi r30,r25,48
	ctx.r30.s64 = ctx.r25.s64 + 48;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x83238210
	ctx.lr = 0x83275050;
	sub_83238210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83275088
	if (ctx.cr0.eq) goto loc_83275088;
	// lwz r3,52(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83238210
	ctx.lr = 0x83275064;
	sub_83238210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83275088
	if (ctx.cr0.eq) goto loc_83275088;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r7,52(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,44(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8325be40
	ctx.lr = 0x83275084;
	sub_8325BE40(ctx, base);
	// b 0x832750c8
	goto loc_832750C8;
loc_83275088:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83238210
	ctx.lr = 0x83275094;
	sub_83238210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327510c
	if (ctx.cr0.eq) goto loc_8327510C;
	// lwz r3,52(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x83238210
	ctx.lr = 0x832750A8;
	sub_83238210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327510c
	if (ctx.cr0.eq) goto loc_8327510C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,44(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8325bf10
	ctx.lr = 0x832750C8;
	sub_8325BF10(ctx, base);
loc_832750C8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832750CC:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832750e4
	if (ctx.cr0.eq) goto loc_832750E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832750E4:
	// li r6,228
	ctx.r6.s64 = 228;
	// lwz r7,640(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 640);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83263c48
	ctx.lr = 0x832750FC;
	sub_83263C48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8325fd40
	ctx.lr = 0x83275108;
	sub_8325FD40(ctx, base);
	// b 0x83275584
	goto loc_83275584;
loc_8327510C:
	// lwz r31,8(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm. r11,r31,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83275584
	if (!ctx.cr0.eq) goto loc_83275584;
	// rlwinm. r11,r31,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83275584
	if (!ctx.cr0.eq) goto loc_83275584;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83275584
	if (!ctx.cr0.eq) goto loc_83275584;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83230e90
	ctx.lr = 0x83275130;
	sub_83230E90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83275584
	if (!ctx.cr0.eq) goto loc_83275584;
	// rlwinm. r11,r31,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83275584
	if (!ctx.cr0.eq) goto loc_83275584;
	// lwz r17,44(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// lwz r16,12(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x83275584
	if (!ctx.cr6.eq) goto loc_83275584;
	// li r20,1
	ctx.r20.s64 = 1;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// addi r21,r25,52
	ctx.r21.s64 = ctx.r25.s64 + 52;
loc_83275164:
	// lwz r19,0(r21)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r23,0(r22)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm. r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83275340
	if (!ctx.cr0.eq) goto loc_83275340;
	// lwz r26,12(r19)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x83275340
	if (!ctx.cr6.eq) goto loc_83275340;
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r10,r9,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x832751a4
	if (ctx.cr6.eq) goto loc_832751A4;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x832751a8
	if (!ctx.cr6.eq) goto loc_832751A8;
loc_832751A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832751A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83275340
	if (!ctx.cr0.eq) goto loc_83275340;
	// cmplwi cr6,r10,110
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 110, ctx.xer);
	// beq cr6,0x83275340
	if (ctx.cr6.eq) goto loc_83275340;
	// lwz r24,12(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832751f8
	if (ctx.cr0.eq) goto loc_832751F8;
	// rlwinm. r11,r9,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83275340
	if (!ctx.cr0.eq) goto loc_83275340;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8323f9b0
	ctx.lr = 0x832751DC;
	sub_8323F9B0(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x83275340
	if (ctx.cr6.gt) goto loc_83275340;
loc_832751F8:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r29,r11,31,28,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r14,3
	ctx.r14.s64 = 3;
loc_83275214:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832752f4
	if (ctx.cr6.eq) goto loc_832752F4;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// andc r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ~ctx.r11.u64;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r9,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x832ecf28
	ctx.lr = 0x8327524C;
	sub_832ECF28(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8327525c
	if (ctx.cr6.eq) goto loc_8327525C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327525C:
	// addi r10,r20,-1
	ctx.r10.s64 = ctx.r20.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x832752c4
	if (!ctx.cr6.eq) goto loc_832752C4;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// slw r10,r14,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// andc r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 & ~ctx.r10.u64;
	// srw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r11,r9,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// slw r9,r8,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// or r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x832752a8
	if (ctx.cr6.lt) goto loc_832752A8;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_832752A8:
	// slw r10,r14,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r31.u8 & 0x3F));
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// andc r10,r18,r10
	ctx.r10.u64 = ctx.r18.u64 & ~ctx.r10.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// or r18,r10,r11
	ctx.r18.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x832752e4
	goto loc_832752E4;
loc_832752C4:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// slw r10,r14,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r31.u8 & 0x3F));
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// andc r10,r18,r10
	ctx.r10.u64 = ctx.r18.u64 & ~ctx.r10.u64;
	// srw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r18,r11,r10
	ctx.r18.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_832752E4:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// andc r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ~ctx.r11.u64;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// b 0x83275214
	goto loc_83275214;
loc_832752F4:
	// lwz r30,8(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r30,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0x7;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bgt cr6,0x83275340
	if (ctx.cr6.gt) goto loc_83275340;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83230e90
	ctx.lr = 0x83275310;
	sub_83230E90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83275340
	if (!ctx.cr0.eq) goto loc_83275340;
	// rlwinm. r11,r30,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83275360
	if (ctx.cr0.eq) goto loc_83275360;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// bl 0x8323f9b0
	ctx.lr = 0x8327532C;
	sub_8323F9B0(ctx, base);
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x83275360
	if (!ctx.cr6.gt) goto loc_83275360;
loc_83275340:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// lwz r14,96(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r18,468(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// addi r21,r21,-4
	ctx.r21.s64 = ctx.r21.s64 + -4;
	// cmplwi cr6,r20,2
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 2, ctx.xer);
	// ble cr6,0x83275164
	if (!ctx.cr6.gt) goto loc_83275164;
	// b 0x83275584
	goto loc_83275584;
loc_83275360:
	// lwz r22,468(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8325bb88
	ctx.lr = 0x83275378;
	sub_8325BB88(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83232ed8
	ctx.lr = 0x83275398;
	sub_83232ED8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8325bca0
	ctx.lr = 0x832753B0;
	sub_8325BCA0(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r31,r11,31,28,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
loc_832753C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83275410
	if (ctx.cr6.eq) goto loc_83275410;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// andc r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// subfic r5,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r5.s64 = 31 - ctx.r11.s64;
	// bl 0x83232f80
	ctx.lr = 0x832753EC;
	sub_83232F80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832291f0
	ctx.lr = 0x832753FC;
	sub_832291F0(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// andc r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x832753c0
	goto loc_832753C0;
loc_83275410:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8327544c
	if (ctx.cr6.eq) goto loc_8327544C;
loc_8327541C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83232f28
	ctx.lr = 0x8327542C;
	sub_83232F28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832291f0
	ctx.lr = 0x8327543C;
	sub_832291F0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8327541c
	if (ctx.cr6.lt) goto loc_8327541C;
loc_8327544C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83233190
	ctx.lr = 0x83275454;
	sub_83233190(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327554c
	if (ctx.cr0.eq) goto loc_8327554C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x8323efd8
	ctx.lr = 0x83275480;
	sub_8323EFD8(ctx, base);
	// sth r3,18(r29)
	PPC_STORE_U16(ctx.r29.u32 + 18, ctx.r3.u16);
	// lwz r3,648(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 648);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832754b8
	if (!ctx.cr0.eq) goto loc_832754B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832754b8
	if (ctx.cr0.eq) goto loc_832754B8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x832754c4
	if (!ctx.cr6.gt) goto loc_832754C4;
loc_832754B8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8322be98
	ctx.lr = 0x832754C0;
	sub_8322BE98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_832754C4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
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
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// bl 0x8323efd8
	ctx.lr = 0x832754F0;
	sub_8323EFD8(ctx, base);
	// sth r3,18(r28)
	PPC_STORE_U16(ctx.r28.u32 + 18, ctx.r3.u16);
	// lwz r3,648(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 648);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83275528
	if (!ctx.cr0.eq) goto loc_83275528;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83275528
	if (ctx.cr0.eq) goto loc_83275528;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x83275534
	if (!ctx.cr6.gt) goto loc_83275534;
loc_83275528:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8322be98
	ctx.lr = 0x83275530;
	sub_8322BE98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83275534:
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
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
loc_8327554C:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// lwz r7,640(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 640);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83263c48
	ctx.lr = 0x83275564;
	sub_83263C48(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8325fd40
	ctx.lr = 0x83275570;
	sub_8325FD40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8325fd40
	ctx.lr = 0x8327557C;
	sub_8325FD40(ctx, base);
	// lwz r14,96(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r18,468(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
loc_83275584:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x832755cc
	if (ctx.cr6.eq) goto loc_832755CC;
	// rlwinm r11,r15,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x832755a4
	if (!ctx.cr0.eq) goto loc_832755A4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832755A4:
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832755bc
	if (!ctx.cr6.eq) goto loc_832755BC;
loc_832755AC:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r15,r25
	ctx.r15.u64 = ctx.r25.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x832755ec
	goto loc_832755EC;
loc_832755BC:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83275600
	if (!ctx.cr0.eq) goto loc_83275600;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// b 0x832755f8
	goto loc_832755F8;
loc_832755CC:
	// lwz r11,28(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// addi r10,r14,24
	ctx.r10.s64 = ctx.r14.s64 + 24;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832755e0
	if (ctx.cr0.eq) goto loc_832755E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832755E0:
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832755ac
	if (ctx.cr6.eq) goto loc_832755AC;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_832755EC:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83275600
	if (!ctx.cr0.eq) goto loc_83275600;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_832755F8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x83274eec
	if (!ctx.cr6.eq) goto loc_83274EEC;
loc_83275600:
	// lwz r3,640(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 640);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83275730
	if (!ctx.cr0.eq) goto loc_83275730;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83275730
	if (ctx.cr0.eq) goto loc_83275730;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327562c
	if (ctx.cr0.eq) goto loc_8327562C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83275638
	goto loc_83275638;
loc_8327562C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_83275638:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x83275688
	if (!ctx.cr0.eq) goto loc_83275688;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x83275688;
	sub_83204D00(ctx, base);
loc_83275688:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r30,r11,0,6,4
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// rlwinm r11,r30,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x3F80;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x83275600
	if (ctx.cr6.eq) goto loc_83275600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d798
	ctx.lr = 0x832756A8;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832756c8
	if (ctx.cr0.eq) goto loc_832756C8;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,640(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 640);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x832756C4;
	sub_832F6CC8(ctx, base);
	// b 0x83275600
	goto loc_83275600;
loc_832756C8:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r31,44
	ctx.r28.s64 = ctx.r31.s64 + 44;
loc_832756D0:
	// rlwinm r11,r30,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83275600
	if (!ctx.cr6.lt) goto loc_83275600;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// beq cr6,0x83275724
	if (ctx.cr6.eq) goto loc_83275724;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83270370
	ctx.lr = 0x83275700;
	sub_83270370(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,14720
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14720, ctx.xer);
	// beq cr6,0x83275600
	if (ctx.cr6.eq) goto loc_83275600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d798
	ctx.lr = 0x8327571C;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83275600
	if (!ctx.cr0.eq) goto loc_83275600;
loc_83275724:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x832756d0
	goto loc_832756D0;
loc_83275730:
	// rlwinm r11,r14,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83275750
	if (!ctx.cr0.eq) goto loc_83275750;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne 0x83270f00
	if (!ctx.cr0.eq) goto loc_83270F00;
loc_83275750:
	// lwz r29,468(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83275770
	if (!ctx.cr0.eq) goto loc_83275770;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// bl 0x8323a718
	ctx.lr = 0x83275770;
	sub_8323A718(ctx, base);
loc_83275770:
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83275800
	if (ctx.cr6.eq) goto loc_83275800;
loc_8327577C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83275800
	if (!ctx.cr0.eq) goto loc_83275800;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83275800
	if (ctx.cr0.eq) goto loc_83275800;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x832757f0
	if (!ctx.cr0.eq) goto loc_832757F0;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x832757F0;
	sub_83204D00(ctx, base);
loc_832757F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832f6f50
	ctx.lr = 0x832757FC;
	sub_832F6F50(ctx, base);
	// b 0x8327577c
	goto loc_8327577C;
loc_83275800:
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addis r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -524288;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r10,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r10.u32);
	// beq 0x83275824
	if (ctx.cr0.eq) goto loc_83275824;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83275824:
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327591c
	if (!ctx.cr0.eq) goto loc_8327591C;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8327591c
	if (ctx.cr0.eq) goto loc_8327591C;
loc_83275838:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832539a0
	ctx.lr = 0x83275844;
	sub_832539A0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x83275878
	if (!ctx.cr6.eq) goto loc_83275878;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83275878
	if (!ctx.cr6.eq) goto loc_83275878;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x83275874;
	sub_832F6CC8(ctx, base);
	// b 0x83275888
	goto loc_83275888;
loc_83275878:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,648(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 648);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8327c448
	ctx.lr = 0x83275888;
	sub_8327C448(ctx, base);
loc_83275888:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832758d0
	if (ctx.cr6.eq) goto loc_832758D0;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x832758a8
	if (!ctx.cr0.eq) goto loc_832758A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832758A8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832758c0
	if (!ctx.cr6.eq) goto loc_832758C0;
loc_832758B0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8327590c
	goto loc_8327590C;
loc_832758C0:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327591c
	if (!ctx.cr0.eq) goto loc_8327591C;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x83275914
	goto loc_83275914;
loc_832758D0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x832758e4
	if (!ctx.cr0.eq) goto loc_832758E4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_832758E4:
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x832758f4
	if (ctx.cr0.eq) goto loc_832758F4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_832758F4:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832758b0
	if (ctx.cr6.eq) goto loc_832758B0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83275908
	if (ctx.cr6.eq) goto loc_83275908;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83275908:
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_8327590C:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327591c
	if (!ctx.cr0.eq) goto loc_8327591C;
loc_83275914:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83275838
	if (!ctx.cr6.eq) goto loc_83275838;
loc_8327591C:
	// lwz r3,648(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 648);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83275a0c
	if (!ctx.cr0.eq) goto loc_83275A0C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83275a0c
	if (ctx.cr0.eq) goto loc_83275A0C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83275948
	if (ctx.cr0.eq) goto loc_83275948;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x83275954
	goto loc_83275954;
loc_83275948:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_83275954:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x832759a4
	if (!ctx.cr0.eq) goto loc_832759A4;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x832759A4;
	sub_83204D00(ctx, base);
loc_832759A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,115
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 115, ctx.xer);
	// beq cr6,0x8327591c
	if (ctx.cr6.eq) goto loc_8327591C;
	// cmplwi cr6,r10,112
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 112, ctx.xer);
	// bne cr6,0x832759f0
	if (!ctx.cr6.eq) goto loc_832759F0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r11.u32);
	// b 0x8327591c
	goto loc_8327591C;
loc_832759F0:
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// sth r28,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r28.u16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832762e0
	ctx.lr = 0x83275A08;
	sub_832762E0(ctx, base);
	// b 0x8327591c
	goto loc_8327591C;
loc_83275A0C:
	// stw r28,648(r29)
	PPC_STORE_U32(ctx.r29.u32 + 648, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,696(r29)
	PPC_STORE_U32(ctx.r29.u32 + 696, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8321daf0
	ctx.lr = 0x83275A20;
	sub_8321DAF0(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83275a3c
	if (ctx.cr0.eq) goto loc_83275A3C;
	// addis r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -1048576;
	// lwz r31,468(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// b 0x83270ddc
	goto loc_83270DDC;
loc_83275A3C:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b34
	ctx.lr = 0x83275A48;
	__restfpr_28(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83275A4C"))) PPC_WEAK_FUNC(sub_83275A4C);
PPC_FUNC_IMPL(__imp__sub_83275A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275A50"))) PPC_WEAK_FUNC(sub_83275A50);
PPC_FUNC_IMPL(__imp__sub_83275A50) {
	PPC_FUNC_PROLOGUE();
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// cmplwi cr6,r3,8191
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8191, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,8191
	ctx.r3.s64 = 8191;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275A64"))) PPC_WEAK_FUNC(sub_83275A64);
PPC_FUNC_IMPL(__imp__sub_83275A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275A68"))) PPC_WEAK_FUNC(sub_83275A68);
PPC_FUNC_IMPL(__imp__sub_83275A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275A74"))) PPC_WEAK_FUNC(sub_83275A74);
PPC_FUNC_IMPL(__imp__sub_83275A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275A78"))) PPC_WEAK_FUNC(sub_83275A78);
PPC_FUNC_IMPL(__imp__sub_83275A78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83275a90
	if (ctx.cr0.eq) goto loc_83275A90;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// b 0x83275a94
	goto loc_83275A94;
loc_83275A90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83275A94:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r10,r11,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275AA4"))) PPC_WEAK_FUNC(sub_83275AA4);
PPC_FUNC_IMPL(__imp__sub_83275AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275AA8"))) PPC_WEAK_FUNC(sub_83275AA8);
PPC_FUNC_IMPL(__imp__sub_83275AA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-14848
	ctx.r11.s64 = ctx.r11.s64 + -14848;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275AC0"))) PPC_WEAK_FUNC(sub_83275AC0);
PPC_FUNC_IMPL(__imp__sub_83275AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-15104
	ctx.r11.s64 = ctx.r11.s64 + -15104;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275AD8"))) PPC_WEAK_FUNC(sub_83275AD8);
PPC_FUNC_IMPL(__imp__sub_83275AD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275AE8"))) PPC_WEAK_FUNC(sub_83275AE8);
PPC_FUNC_IMPL(__imp__sub_83275AE8) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x832fa818
	sub_832FA818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83275AF0"))) PPC_WEAK_FUNC(sub_83275AF0);
PPC_FUNC_IMPL(__imp__sub_83275AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275AFC"))) PPC_WEAK_FUNC(sub_83275AFC);
PPC_FUNC_IMPL(__imp__sub_83275AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275B00"))) PPC_WEAK_FUNC(sub_83275B00);
PPC_FUNC_IMPL(__imp__sub_83275B00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275B10"))) PPC_WEAK_FUNC(sub_83275B10);
PPC_FUNC_IMPL(__imp__sub_83275B10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275B20"))) PPC_WEAK_FUNC(sub_83275B20);
PPC_FUNC_IMPL(__imp__sub_83275B20) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,91
	ctx.r6.s64 = 91;
	// b 0x832f02e0
	sub_832F02E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83275B30"))) PPC_WEAK_FUNC(sub_83275B30);
PPC_FUNC_IMPL(__imp__sub_83275B30) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,92
	ctx.r6.s64 = 92;
	// b 0x832f02e0
	sub_832F02E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83275B40"))) PPC_WEAK_FUNC(sub_83275B40);
PPC_FUNC_IMPL(__imp__sub_83275B40) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,93
	ctx.r6.s64 = 93;
	// b 0x832f02e0
	sub_832F02E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83275B50"))) PPC_WEAK_FUNC(sub_83275B50);
PPC_FUNC_IMPL(__imp__sub_83275B50) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,95
	ctx.r6.s64 = 95;
	// b 0x832f02e0
	sub_832F02E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83275B60"))) PPC_WEAK_FUNC(sub_83275B60);
PPC_FUNC_IMPL(__imp__sub_83275B60) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8327fd38
	sub_8327FD38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83275B68"))) PPC_WEAK_FUNC(sub_83275B68);
PPC_FUNC_IMPL(__imp__sub_83275B68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275B80"))) PPC_WEAK_FUNC(sub_83275B80);
PPC_FUNC_IMPL(__imp__sub_83275B80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275B8C"))) PPC_WEAK_FUNC(sub_83275B8C);
PPC_FUNC_IMPL(__imp__sub_83275B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275B90"))) PPC_WEAK_FUNC(sub_83275B90);
PPC_FUNC_IMPL(__imp__sub_83275B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275B9C"))) PPC_WEAK_FUNC(sub_83275B9C);
PPC_FUNC_IMPL(__imp__sub_83275B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275BA0"))) PPC_WEAK_FUNC(sub_83275BA0);
PPC_FUNC_IMPL(__imp__sub_83275BA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83275bb0
	goto loc_83275BB0;
loc_83275BA4:
	// lwz r4,52(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83275bc4
	if (ctx.cr6.eq) goto loc_83275BC4;
loc_83275BB0:
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83275ba4
	if (ctx.cr0.eq) goto loc_83275BA4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_83275BC4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83275BCC"))) PPC_WEAK_FUNC(sub_83275BCC);
PPC_FUNC_IMPL(__imp__sub_83275BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275BD0"))) PPC_WEAK_FUNC(sub_83275BD0);
PPC_FUNC_IMPL(__imp__sub_83275BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83275BD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r10,r8,0,10,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83275c6c
	if (ctx.cr0.eq) goto loc_83275C6C;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r31,r4,44
	ctx.r31.s64 = ctx.r4.s64 + 44;
	// rlwinm r30,r10,13,29,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_83275C00:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// beq cr6,0x83275c38
	if (ctx.cr6.eq) goto loc_83275C38;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_83275C18:
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r29,12(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x83275c38
	if (ctx.cr6.eq) goto loc_83275C38;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83275c18
	if (ctx.cr6.lt) goto loc_83275C18;
loc_83275C38:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83275c4c
	if (!ctx.cr6.eq) goto loc_83275C4C;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r10,r10,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
loc_83275C4C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x83275c00
	if (ctx.cr6.lt) goto loc_83275C00;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// ble cr6,0x83275c6c
	if (!ctx.cr6.gt) goto loc_83275C6C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x83204d78
	ctx.lr = 0x83275C6C;
	sub_83204D78(ctx, base);
loc_83275C6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r11,r5,13,16,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 13) & 0xE000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// rlwimi r8,r11,1,27,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x1E) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r8,r11,1,15,17
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x1C000) | (ctx.r8.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83275C90"))) PPC_WEAK_FUNC(sub_83275C90);
PPC_FUNC_IMPL(__imp__sub_83275C90) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// bgt cr6,0x83275d30
	if (ctx.cr6.gt) goto loc_83275D30;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// bge cr6,0x83275d0c
	if (!ctx.cr6.lt) goto loc_83275D0C;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// blt cr6,0x83275d48
	if (ctx.cr6.lt) goto loc_83275D48;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// ble cr6,0x83275d0c
	if (!ctx.cr6.gt) goto loc_83275D0C;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// ble cr6,0x83275d48
	if (!ctx.cr6.gt) goto loc_83275D48;
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// ble cr6,0x83275d0c
	if (!ctx.cr6.gt) goto loc_83275D0C;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// ble cr6,0x83275d48
	if (!ctx.cr6.gt) goto loc_83275D48;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// bgt cr6,0x83275d48
	if (ctx.cr6.gt) goto loc_83275D48;
loc_83275CD8:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,18,13,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
loc_83275CE4:
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
loc_83275CE8:
	// lhz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// ble cr6,0x83275d98
	if (!ctx.cr6.gt) goto loc_83275D98;
	// li r4,3528
	ctx.r4.s64 = 3528;
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
loc_83275D0C:
	// rlwinm r11,r10,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x83275d20
	if (!ctx.cr6.gt) goto loc_83275D20;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
loc_83275D20:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x83275ce4
	goto loc_83275CE4;
loc_83275D30:
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x83275cd8
	if (ctx.cr6.eq) goto loc_83275CD8;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x83275d90
	if (ctx.cr6.eq) goto loc_83275D90;
	// cmpwi cr6,r11,124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 124, ctx.xer);
	// beq cr6,0x83275d90
	if (ctx.cr6.eq) goto loc_83275D90;
loc_83275D48:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x83275d5c
	if (ctx.cr6.lt) goto loc_83275D5C;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83275d60
	if (!ctx.cr6.gt) goto loc_83275D60;
loc_83275D5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83275D60:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83275cd8
	if (!ctx.cr0.eq) goto loc_83275CD8;
	// rlwinm. r11,r10,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83275d7c
	if (ctx.cr0.eq) goto loc_83275D7C;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// b 0x83275d80
	goto loc_83275D80;
loc_83275D7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83275D80:
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r10,r11,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// b 0x83275ce8
	goto loc_83275CE8;
loc_83275D90:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
loc_83275D98:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// sth r11,18(r4)
	PPC_STORE_U16(ctx.r4.u32 + 18, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275DB4"))) PPC_WEAK_FUNC(sub_83275DB4);
PPC_FUNC_IMPL(__imp__sub_83275DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275DB8"))) PPC_WEAK_FUNC(sub_83275DB8);
PPC_FUNC_IMPL(__imp__sub_83275DB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275DCC"))) PPC_WEAK_FUNC(sub_83275DCC);
PPC_FUNC_IMPL(__imp__sub_83275DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275DD0"))) PPC_WEAK_FUNC(sub_83275DD0);
PPC_FUNC_IMPL(__imp__sub_83275DD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275DEC"))) PPC_WEAK_FUNC(sub_83275DEC);
PPC_FUNC_IMPL(__imp__sub_83275DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275DF0"))) PPC_WEAK_FUNC(sub_83275DF0);
PPC_FUNC_IMPL(__imp__sub_83275DF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r11.u32);
	// lwzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275E0C"))) PPC_WEAK_FUNC(sub_83275E0C);
PPC_FUNC_IMPL(__imp__sub_83275E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275E10"))) PPC_WEAK_FUNC(sub_83275E10);
PPC_FUNC_IMPL(__imp__sub_83275E10) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// subfic r8,r4,32
	ctx.xer.ca = ctx.r4.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r4.s64;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// srw r7,r9,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275E44"))) PPC_WEAK_FUNC(sub_83275E44);
PPC_FUNC_IMPL(__imp__sub_83275E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275E48"))) PPC_WEAK_FUNC(sub_83275E48);
PPC_FUNC_IMPL(__imp__sub_83275E48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275E54"))) PPC_WEAK_FUNC(sub_83275E54);
PPC_FUNC_IMPL(__imp__sub_83275E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275E58"))) PPC_WEAK_FUNC(sub_83275E58);
PPC_FUNC_IMPL(__imp__sub_83275E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83275E60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83275ee4
	if (ctx.cr6.eq) goto loc_83275EE4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
loc_83275E90:
	// and. r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83275ed4
	if (ctx.cr0.eq) goto loc_83275ED4;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83275eb0
	if (!ctx.cr6.eq) goto loc_83275EB0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r28,r7,27
	ctx.r28.u64 = ctx.r7.u32 & 0x1F;
loc_83275EB0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// andc r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 & ~ctx.r7.u64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r29,r7,r11
	ctx.r29.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_83275ED4:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x83275e90
	if (!ctx.cr0.eq) goto loc_83275E90;
loc_83275EE4:
	// bl 0x83232e10
	ctx.lr = 0x83275EE8;
	sub_83232E10(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83275f14
	if (ctx.cr6.eq) goto loc_83275F14;
loc_83275F00:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwimi r11,r29,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne 0x83275f00
	if (!ctx.cr0.eq) goto loc_83275F00;
loc_83275F14:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r29,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwimi r11,r28,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83275F2C"))) PPC_WEAK_FUNC(sub_83275F2C);
PPC_FUNC_IMPL(__imp__sub_83275F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275F30"))) PPC_WEAK_FUNC(sub_83275F30);
PPC_FUNC_IMPL(__imp__sub_83275F30) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83275F38;
	__savegprlr_27(ctx, base);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// addi r28,r4,4
	ctx.r28.s64 = ctx.r4.s64 + 4;
	// rlwinm r29,r11,13,29,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
loc_83275F44:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83276048
	if (ctx.cr6.eq) goto loc_83276048;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83276034
	if (ctx.cr6.eq) goto loc_83276034;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r31,r10,27,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// beq 0x83275ff0
	if (ctx.cr0.eq) goto loc_83275FF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_83275F74:
	// srw r9,r31,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r9,11
	ctx.r9.s64 = ctx.r9.s64 + 11;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// beq cr6,0x83275fd0
	if (ctx.cr6.eq) goto loc_83275FD0;
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// addi r9,r5,44
	ctx.r9.s64 = ctx.r5.s64 + 44;
loc_83275F9C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r27,12(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x83275fc0
	if (!ctx.cr6.eq) goto loc_83275FC0;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// xor r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r27.u64;
	// rlwinm. r7,r7,0,25,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x60;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83275fd0
	if (ctx.cr0.eq) goto loc_83275FD0;
loc_83275FC0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83275f9c
	if (ctx.cr6.lt) goto loc_83275F9C;
loc_83275FD0:
	// li r9,3
	ctx.r9.s64 = 3;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// andc r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 & ~ctx.r9.u64;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// or r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x83275f74
	if (!ctx.cr0.eq) goto loc_83275F74;
loc_83275FF0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x83276008
	goto loc_83276008;
loc_83276000:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_83276008:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83276000
	if (!ctx.cr6.eq) goto loc_83276000;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r31,5,19,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 5) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83276034:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83275f44
	if (!ctx.cr6.eq) goto loc_83275F44;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// b 0x83275f44
	goto loc_83275F44;
loc_83276048:
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327604C"))) PPC_WEAK_FUNC(sub_8327604C);
PPC_FUNC_IMPL(__imp__sub_8327604C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276050"))) PPC_WEAK_FUNC(sub_83276050);
PPC_FUNC_IMPL(__imp__sub_83276050) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
loc_8327605C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83276114
	if (ctx.cr6.eq) goto loc_83276114;
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327610c
	if (ctx.cr6.eq) goto loc_8327610C;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327610c
	if (ctx.cr0.eq) goto loc_8327610C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8327610c
	if (!ctx.cr6.eq) goto loc_8327610C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8327610c
	if (!ctx.cr6.eq) goto loc_8327610C;
	// lwz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r31,40(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// clrlwi r30,r11,13
	ctx.r30.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r30,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r30,r30,27
	ctx.r30.u64 = ctx.r30.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r8,r8,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832760f4
	if (ctx.cr0.eq) goto loc_832760F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832760e8
	if (ctx.cr6.eq) goto loc_832760E8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x832760ec
	if (!ctx.cr6.eq) goto loc_832760EC;
loc_832760E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832760EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327610c
	if (!ctx.cr0.eq) goto loc_8327610C;
loc_832760F4:
	// rlwinm r11,r10,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8327610c
	if (!ctx.cr6.eq) goto loc_8327610C;
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x83276118
	if (ctx.cr6.eq) goto loc_83276118;
loc_8327610C:
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8327605c
	goto loc_8327605C;
loc_83276114:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83276118:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83276124"))) PPC_WEAK_FUNC(sub_83276124);
PPC_FUNC_IMPL(__imp__sub_83276124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276128"))) PPC_WEAK_FUNC(sub_83276128);
PPC_FUNC_IMPL(__imp__sub_83276128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83276130;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// clrlwi. r26,r8,24
	ctx.r26.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x8327623c
	if (ctx.cr0.eq) goto loc_8327623C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x8327623c
	if (!ctx.cr6.eq) goto loc_8327623C;
	// addi r11,r28,11
	ctx.r11.s64 = ctx.r28.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm. r10,r7,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	// beq 0x83276188
	if (ctx.cr0.eq) goto loc_83276188;
	// rlwinm. r10,r30,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83276188
	if (ctx.cr0.eq) goto loc_83276188;
loc_83276180:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x832761b0
	goto loc_832761B0;
loc_83276188:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83276198
	if (ctx.cr0.eq) goto loc_83276198;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83276180
	if (!ctx.cr0.eq) goto loc_83276180;
loc_83276198:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832761ac
	if (ctx.cr0.eq) goto loc_832761AC;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x832761b0
	if (!ctx.cr0.eq) goto loc_832761B0;
loc_832761AC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_832761B0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327623c
	if (ctx.cr0.eq) goto loc_8327623C;
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// beq 0x832761d0
	if (ctx.cr0.eq) goto loc_832761D0;
	// rlwinm. r9,r30,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832761d0
	if (ctx.cr0.eq) goto loc_832761D0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_832761D0:
	// and r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 & ctx.r30.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832761e4
	if (ctx.cr0.eq) goto loc_832761E4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
loc_832761E4:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832761f8
	if (ctx.cr0.eq) goto loc_832761F8;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832761f8
	if (ctx.cr0.eq) goto loc_832761F8;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_832761F8:
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm. r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327623c
	if (!ctx.cr0.eq) goto loc_8327623C;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x83276224
	if (ctx.cr6.eq) goto loc_83276224;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x83276228
	if (!ctx.cr6.eq) goto loc_83276228;
loc_83276224:
	// li r10,1
	ctx.r10.s64 = 1;
loc_83276228:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327623c
	if (!ctx.cr0.eq) goto loc_8327623C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// rlwinm r28,r7,27,30,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x3;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_8327623C:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83276050
	ctx.lr = 0x83276250;
	sub_83276050(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832762d0
	if (!ctx.cr0.eq) goto loc_832762D0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832f0388
	ctx.lr = 0x83276260;
	sub_832F0388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83276280
	if (ctx.cr6.eq) goto loc_83276280;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,513
	ctx.r10.s64 = 513;
	// rlwimi r11,r10,24,27,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r11,r10,24,7,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x1000000) | (ctx.r11.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83276280:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83232e10
	ctx.lr = 0x8327628C;
	sub_83232E10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83232fe0
	ctx.lr = 0x83276298;
	sub_83232FE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r28,5,22,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0x3E0;
	// lis r12,-3073
	ctx.r12.s64 = -201392128;
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// ori r12,r12,64640
	ctx.r12.u64 = ctx.r12.u64 | 64640;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// ori r10,r10,7296
	ctx.r10.u64 = ctx.r10.u64 | 7296;
	// and r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 & ctx.r12.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_832762D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832762D8"))) PPC_WEAK_FUNC(sub_832762D8);
PPC_FUNC_IMPL(__imp__sub_832762D8) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x83276128
	sub_83276128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832762E0"))) PPC_WEAK_FUNC(sub_832762E0);
PPC_FUNC_IMPL(__imp__sub_832762E0) {
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
	// b 0x83276350
	goto loc_83276350;
loc_83276300:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83276304:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832763ac
	if (ctx.cr6.eq) goto loc_832763AC;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83276334
	if (ctx.cr6.eq) goto loc_83276334;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83276334
	if (ctx.cr0.eq) goto loc_83276334;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// beq cr6,0x8327633c
	if (ctx.cr6.eq) goto loc_8327633C;
loc_83276334:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83276304
	goto loc_83276304;
loc_8327633C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832763ac
	if (!ctx.cr0.eq) goto loc_832763AC;
	// rlwinm. r11,r11,8,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832763ac
	if (ctx.cr0.eq) goto loc_832763AC;
loc_83276350:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83275c90
	ctx.lr = 0x8327635C;
	sub_83275C90(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x83276300
	if (!ctx.cr6.eq) goto loc_83276300;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83276370:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832763ac
	if (ctx.cr6.eq) goto loc_832763AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832763a4
	if (ctx.cr0.eq) goto loc_832763A4;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832763a4
	if (!ctx.cr0.eq) goto loc_832763A4;
	// rlwinm. r11,r11,8,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832763a4
	if (ctx.cr0.eq) goto loc_832763A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83275c90
	ctx.lr = 0x832763A4;
	sub_83275C90(ctx, base);
loc_832763A4:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x83276370
	goto loc_83276370;
loc_832763AC:
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

__attribute__((alias("__imp__sub_832763C4"))) PPC_WEAK_FUNC(sub_832763C4);
PPC_FUNC_IMPL(__imp__sub_832763C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832763C8"))) PPC_WEAK_FUNC(sub_832763C8);
PPC_FUNC_IMPL(__imp__sub_832763C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832763D4"))) PPC_WEAK_FUNC(sub_832763D4);
PPC_FUNC_IMPL(__imp__sub_832763D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832763D8"))) PPC_WEAK_FUNC(sub_832763D8);
PPC_FUNC_IMPL(__imp__sub_832763D8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfic r7,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r9.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// slw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// and r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83276410"))) PPC_WEAK_FUNC(sub_83276410);
PPC_FUNC_IMPL(__imp__sub_83276410) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327641C"))) PPC_WEAK_FUNC(sub_8327641C);
PPC_FUNC_IMPL(__imp__sub_8327641C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276420"))) PPC_WEAK_FUNC(sub_83276420);
PPC_FUNC_IMPL(__imp__sub_83276420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x83276428;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// bl 0x832f0448
	ctx.lr = 0x83276448;
	sub_832F0448(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// rlwinm r10,r27,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r22,r31,44
	ctx.r22.s64 = ctx.r31.s64 + 44;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_83276494:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r11,13,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r20,r8
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8327659c
	if (!ctx.cr6.lt) goto loc_8327659C;
	// lwz r25,0(r21)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lwz r26,12(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
loc_832764B4:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x832764e0
	if (!ctx.cr6.lt) goto loc_832764E0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832764ec
	if (ctx.cr6.eq) goto loc_832764EC;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r26,r7
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x832764e4
	if (ctx.cr6.eq) goto loc_832764E4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x832764b4
	goto loc_832764B4;
loc_832764E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832764E4:
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83276590
	if (!ctx.cr6.eq) goto loc_83276590;
loc_832764EC:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm. r10,r11,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r30,r11,31,28,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// beq 0x83276590
	if (ctx.cr0.eq) goto loc_83276590;
	// addi r11,r24,11
	ctx.r11.s64 = ctx.r24.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_8327650C:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// andc r19,r30,r11
	ctx.r19.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// subf r30,r19,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r19.s64;
	// bl 0x83232e10
	ctx.lr = 0x83276524;
	sub_83232E10(ctx, base);
	// cntlzw r10,r19
	ctx.r10.u64 = ctx.r19.u32 == 0 ? 32 : __builtin_clz(ctx.r19.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subfic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r10.s64;
	// lis r12,-3073
	ctx.r12.s64 = -201392128;
	// rlwinm r10,r10,5,22,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x3E0;
	// ori r12,r12,64671
	ctx.r12.u64 = ctx.r12.u64 | 64671;
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// ori r10,r10,7296
	ctx.r10.u64 = ctx.r10.u64 | 7296;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwimi r9,r10,0,0,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFE0) | (ctx.r9.u64 & 0xFFFFFFFF0000001F);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x83232fe0
	ctx.lr = 0x83276570;
	sub_83232FE0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8327650c
	if (ctx.cr6.lt) goto loc_8327650C;
loc_83276590:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// b 0x83276494
	goto loc_83276494;
loc_8327659C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83275f30
	ctx.lr = 0x832765AC;
	sub_83275F30(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832765B8"))) PPC_WEAK_FUNC(sub_832765B8);
PPC_FUNC_IMPL(__imp__sub_832765B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x832765C0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r24,r21,44
	ctx.r24.s64 = ctx.r21.s64 + 44;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
loc_832765E0:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm r8,r11,13,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r20,r8
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x832766fc
	if (!ctx.cr6.lt) goto loc_832766FC;
	// lwz r27,0(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r28,12(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
loc_83276600:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8327662c
	if (!ctx.cr6.lt) goto loc_8327662C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83276638
	if (ctx.cr6.eq) goto loc_83276638;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83276630
	if (ctx.cr6.eq) goto loc_83276630;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x83276600
	goto loc_83276600;
loc_8327662C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83276630:
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832766f0
	if (!ctx.cr6.eq) goto loc_832766F0;
loc_83276638:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_8327663C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83276658
	if (ctx.cr6.eq) goto loc_83276658;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x832766f0
	if (ctx.cr6.eq) goto loc_832766F0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8327663c
	goto loc_8327663C;
loc_83276658:
	// addi r11,r26,11
	ctx.r11.s64 = ctx.r26.s64 + 11;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r10,31,28,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_8327666C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832766f0
	if (ctx.cr6.eq) goto loc_832766F0;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// andc r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r29,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r29.s64 = 31 - ctx.r11.s64;
	// bl 0x83232e10
	ctx.lr = 0x83276690;
	sub_83232E10(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r29,5,22,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0x3E0;
	// lis r12,-3073
	ctx.r12.s64 = -201392128;
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// ori r12,r12,64671
	ctx.r12.u64 = ctx.r12.u64 | 64671;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// ori r10,r10,7296
	ctx.r10.u64 = ctx.r10.u64 | 7296;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwimi r9,r10,0,0,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFE0) | (ctx.r9.u64 & 0xFFFFFFFF0000001F);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x83232fe0
	ctx.lr = 0x832766D4;
	sub_83232FE0(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// andc r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x8327666c
	goto loc_8327666C;
loc_832766F0:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// b 0x832765e0
	goto loc_832765E0;
loc_832766FC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83276708"))) PPC_WEAK_FUNC(sub_83276708);
PPC_FUNC_IMPL(__imp__sub_83276708) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83276724"))) PPC_WEAK_FUNC(sub_83276724);
PPC_FUNC_IMPL(__imp__sub_83276724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276728"))) PPC_WEAK_FUNC(sub_83276728);
PPC_FUNC_IMPL(__imp__sub_83276728) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83276744"))) PPC_WEAK_FUNC(sub_83276744);
PPC_FUNC_IMPL(__imp__sub_83276744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276748"))) PPC_WEAK_FUNC(sub_83276748);
PPC_FUNC_IMPL(__imp__sub_83276748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83276750;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x832f02e0
	ctx.lr = 0x83276778;
	sub_832F02E0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327679c
	if (ctx.cr6.eq) goto loc_8327679C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8322a4b8
	ctx.lr = 0x83276798;
	sub_8322A4B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8327679C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83232fe0
	ctx.lr = 0x832767A4;
	sub_83232FE0(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// beq cr6,0x832767c8
	if (ctx.cr6.eq) goto loc_832767C8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x8322a4b8
	ctx.lr = 0x832767C4;
	sub_8322A4B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_832767C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83232fe0
	ctx.lr = 0x832767D0;
	sub_83232FE0(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	// rlwimi r8,r9,14,15,17
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 14) & 0x1C000) | (ctx.r8.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83276830"))) PPC_WEAK_FUNC(sub_83276830);
PPC_FUNC_IMPL(__imp__sub_83276830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83276838;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x832f02e0
	ctx.lr = 0x83276860;
	sub_832F02E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83232e10
	ctx.lr = 0x83276870;
	sub_83232E10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83232fe0
	ctx.lr = 0x8327687C;
	sub_83232FE0(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83232e10
	ctx.lr = 0x8327688C;
	sub_83232E10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83232fe0
	ctx.lr = 0x83276898;
	sub_83232FE0(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// beq cr6,0x832768f0
	if (ctx.cr6.eq) goto loc_832768F0;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,-36
	ctx.r10.s64 = ctx.r31.s64 + -36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_832768F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832768FC"))) PPC_WEAK_FUNC(sub_832768FC);
PPC_FUNC_IMPL(__imp__sub_832768FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276900"))) PPC_WEAK_FUNC(sub_83276900);
PPC_FUNC_IMPL(__imp__sub_83276900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83276908;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83276938
	if (!ctx.cr6.eq) goto loc_83276938;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83276944
	if (ctx.cr6.eq) goto loc_83276944;
	// li r4,4541
	ctx.r4.s64 = 4541;
	// bl 0x83204d78
	ctx.lr = 0x83276938;
	sub_83204D78(ctx, base);
loc_83276938:
	// li r4,3640
	ctx.r4.s64 = 3640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83204b08
	ctx.lr = 0x83276944;
	sub_83204B08(ctx, base);
loc_83276944:
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// subfic r28,r28,15
	ctx.xer.ca = ctx.r28.u32 <= 15;
	ctx.r28.s64 = 15 - ctx.r28.s64;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// clrldi r10,r28,32
	ctx.r10.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// clrlwi r27,r11,29
	ctx.r27.u64 = ctx.r11.u32 & 0x7;
	// bne cr6,0x832769dc
	if (!ctx.cr6.eq) goto loc_832769DC;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832f02e0
	ctx.lr = 0x83276994;
	sub_832F02E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// rlwinm r9,r31,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r9,36
	ctx.r11.s64 = ctx.r9.s64 + 36;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// oris r8,r8,512
	ctx.r8.u64 = ctx.r8.u64 | 33554432;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r8,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
	// stw r7,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r7.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_832769DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f4,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x832f6460
	ctx.lr = 0x832769FC;
	sub_832F6460(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83232e10
	ctx.lr = 0x83276A08;
	sub_83232E10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwimi r11,r27,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x83232570
	ctx.lr = 0x83276A20;
	sub_83232570(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x83276748
	ctx.lr = 0x83276A40;
	sub_83276748(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83232e10
	ctx.lr = 0x83276A50;
	sub_83232E10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// lis r9,16508
	ctx.r9.s64 = 1081868288;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r9,r28,13,15,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r28.u32, 13) & 0x1E000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE1FFF);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,19,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFC1FFF;
	// rlwinm r11,r11,0,9,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE7FFFFF;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x83232fe0
	ctx.lr = 0x83276A88;
	sub_83232FE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83276A90"))) PPC_WEAK_FUNC(sub_83276A90);
PPC_FUNC_IMPL(__imp__sub_83276A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x83276A98;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// lwz r11,48(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// b 0x83276ac8
	goto loc_83276AC8;
loc_83276AB8:
	// lwz r28,52(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83276b4c
	if (ctx.cr6.eq) goto loc_83276B4C;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
loc_83276AC8:
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83276ab8
	if (ctx.cr0.eq) goto loc_83276AB8;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// addi r27,r28,32
	ctx.r27.s64 = ctx.r28.s64 + 32;
	// li r22,1
	ctx.r22.s64 = 1;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// bne 0x83276b80
	if (!ctx.cr0.eq) goto loc_83276B80;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83276b80
	if (ctx.cr0.eq) goto loc_83276B80;
loc_83276AF4:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x83276b64
	if (!ctx.cr6.eq) goto loc_83276B64;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_83276B08:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83276b5c
	if (ctx.cr6.eq) goto loc_83276B5C;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,91
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 91, ctx.xer);
	// blt cr6,0x83276b30
	if (ctx.cr6.lt) goto loc_83276B30;
	// cmplwi cr6,r10,94
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 94, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// ble cr6,0x83276b34
	if (!ctx.cr6.gt) goto loc_83276B34;
loc_83276B30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83276B34:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83276b44
	if (ctx.cr0.eq) goto loc_83276B44;
	// cmplwi cr6,r10,94
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 94, ctx.xer);
	// bne cr6,0x83276b58
	if (!ctx.cr6.eq) goto loc_83276B58;
loc_83276B44:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x83276b08
	goto loc_83276B08;
loc_83276B4C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83204d78
	ctx.lr = 0x83276B58;
	sub_83204D78(ctx, base);
loc_83276B58:
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
loc_83276B5C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x83276b80
	if (!ctx.cr6.eq) goto loc_83276B80;
loc_83276B64:
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83276b80
	if (!ctx.cr0.eq) goto loc_83276B80;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83276af4
	if (!ctx.cr6.eq) goto loc_83276AF4;
loc_83276B80:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lis r26,-1
	ctx.r26.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// bne cr6,0x83276e14
	if (!ctx.cr6.eq) goto loc_83276E14;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,93
	ctx.r6.s64 = 93;
	// beq cr6,0x83276bbc
	if (ctx.cr6.eq) goto loc_83276BBC;
	// li r6,91
	ctx.r6.s64 = 91;
loc_83276BBC:
	// bl 0x832f02e0
	ctx.lr = 0x83276BC0;
	sub_832F02E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r9,28(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// addi r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 + 24;
	// rlwinm r10,r25,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r10,36
	ctx.r31.s64 = ctx.r10.s64 + 36;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r8,r31,-36
	ctx.r8.s64 = ctx.r31.s64 + -36;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r9,28(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r8,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r8.u32);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83276c70
	if (ctx.cr6.eq) goto loc_83276C70;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,92
	ctx.r6.s64 = 92;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832f02e0
	ctx.lr = 0x83276C2C;
	sub_832F02E0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// bl 0x832330a8
	ctx.lr = 0x83276C6C;
	sub_832330A8(ctx, base);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_83276C70:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832f02e0
	ctx.lr = 0x83276C8C;
	sub_832F02E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 1;
	// addi r11,r10,36
	ctx.r11.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x83276e04
	if (ctx.cr6.eq) goto loc_83276E04;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83229400
	ctx.lr = 0x83276CE8;
	sub_83229400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83232fe0
	ctx.lr = 0x83276CF4;
	sub_83232FE0(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83276d20
	if (ctx.cr6.eq) goto loc_83276D20;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83229400
	ctx.lr = 0x83276D14;
	sub_83229400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83232fe0
	ctx.lr = 0x83276D20;
	sub_83232FE0(ctx, base);
loc_83276D20:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83276df0
	if (ctx.cr6.eq) goto loc_83276DF0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83276df0
	if (!ctx.cr0.eq) goto loc_83276DF0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83276df0
	if (ctx.cr0.eq) goto loc_83276DF0;
loc_83276D44:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83276d7c
	if (ctx.cr6.eq) goto loc_83276D7C;
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r8,r22,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// bne 0x83276d80
	if (!ctx.cr0.eq) goto loc_83276D80;
loc_83276D7C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83276D80:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83276dd8
	if (ctx.cr0.eq) goto loc_83276DD8;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83276dc0
	if (ctx.cr6.eq) goto loc_83276DC0;
	// lwz r10,48(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r8,r22,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// bne 0x83276dc4
	if (!ctx.cr0.eq) goto loc_83276DC4;
loc_83276DC0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83276DC4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83276dd8
	if (!ctx.cr0.eq) goto loc_83276DD8;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_83276DD8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83276df0
	if (!ctx.cr0.eq) goto loc_83276DF0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83276d44
	if (!ctx.cr6.eq) goto loc_83276D44;
loc_83276DF0:
	// stw r25,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r25.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r24,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_83276E04:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832330a8
	ctx.lr = 0x83276E10;
	sub_832330A8(ctx, base);
	// b 0x83276d20
	goto loc_83276D20;
loc_83276E14:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83276d20
	if (ctx.cr6.eq) goto loc_83276D20;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_83276E24:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83276e88
	if (ctx.cr6.eq) goto loc_83276E88;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83276e44
	if (!ctx.cr0.eq) goto loc_83276E44;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq 0x83276e48
	if (ctx.cr0.eq) goto loc_83276E48;
loc_83276E44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83276E48:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83276e6c
	if (ctx.cr0.eq) goto loc_83276E6C;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,91
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 91, ctx.xer);
	// beq cr6,0x83276e74
	if (ctx.cr6.eq) goto loc_83276E74;
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// beq cr6,0x83276e7c
	if (ctx.cr6.eq) goto loc_83276E7C;
loc_83276E6C:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x83276e24
	goto loc_83276E24;
loc_83276E74:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// b 0x83276e80
	goto loc_83276E80;
loc_83276E7C:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_83276E80:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x83276d20
	if (!ctx.cr6.eq) goto loc_83276D20;
loc_83276E88:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83204d78
	ctx.lr = 0x83276E94;
	sub_83204D78(ctx, base);
}

__attribute__((alias("__imp__sub_83276E94"))) PPC_WEAK_FUNC(sub_83276E94);
PPC_FUNC_IMPL(__imp__sub_83276E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276E98"))) PPC_WEAK_FUNC(sub_83276E98);
PPC_FUNC_IMPL(__imp__sub_83276E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x83276EA0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83276f40
	if (ctx.cr6.eq) goto loc_83276F40;
	// addi r31,r30,44
	ctx.r31.s64 = ctx.r30.s64 + 44;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
loc_83276ECC:
	// and. r11,r26,r24
	ctx.r11.u64 = ctx.r26.u64 & ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83276f30
	if (ctx.cr0.eq) goto loc_83276F30;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83232e10
	ctx.lr = 0x83276EE0;
	sub_83232E10(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// rlwinm r11,r29,5,22,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0x3E0;
	// lis r12,-3073
	ctx.r12.s64 = -201392128;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// ori r12,r12,64671
	ctx.r12.u64 = ctx.r12.u64 | 64671;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ori r11,r11,7296
	ctx.r11.u64 = ctx.r11.u64 | 7296;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83233970
	ctx.lr = 0x83276F1C;
	sub_83233970(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83232fe0
	ctx.lr = 0x83276F28;
	sub_83232FE0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_83276F30:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r26,r26,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x83276ecc
	if (!ctx.cr0.eq) goto loc_83276ECC;
loc_83276F40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83276F48"))) PPC_WEAK_FUNC(sub_83276F48);
PPC_FUNC_IMPL(__imp__sub_83276F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x83276F50;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r28,r11,7,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// lwz r22,12(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r21,r11,25
	ctx.r21.u64 = ctx.r11.u64 & 25;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lwz r30,28(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x83276fd0
	if (ctx.cr0.eq) goto loc_83276FD0;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r7,r11,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r10,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
loc_83276F94:
	// srw r6,r7,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x83276f94
	if (!ctx.cr0.eq) goto loc_83276F94;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83276fd0
	if (ctx.cr6.eq) goto loc_83276FD0;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// subf. r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x83276fd4
	if (ctx.cr0.eq) goto loc_83276FD4;
loc_83276FD0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83276FD4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// beq 0x83277174
	if (ctx.cr0.eq) goto loc_83277174;
	// rlwinm r6,r11,27,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x83276128
	ctx.lr = 0x83276FF8;
	sub_83276128(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83277014
	goto loc_83277014;
loc_8327700C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_83277014:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8327700c
	if (!ctx.cr6.eq) goto loc_8327700C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83277268
	if (ctx.cr0.eq) goto loc_83277268;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_83277050:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83277088
	if (ctx.cr6.eq) goto loc_83277088;
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83277080
	if (ctx.cr6.eq) goto loc_83277080;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x83277080
	if (!ctx.cr6.eq) goto loc_83277080;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327708c
	if (!ctx.cr0.eq) goto loc_8327708C;
loc_83277080:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83277050
	goto loc_83277050;
loc_83277088:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8327708C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83277268
	if (ctx.cr6.eq) goto loc_83277268;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832f15c8
	ctx.lr = 0x832770A0;
	sub_832F15C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83277268
	if (ctx.cr0.eq) goto loc_83277268;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83277138
	if (ctx.cr0.eq) goto loc_83277138;
	// addi r8,r30,44
	ctx.r8.s64 = ctx.r30.s64 + 44;
loc_832770BC:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r9,r9,13,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
loc_832770CC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83277124
	if (!ctx.cr6.lt) goto loc_83277124;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x832770f0
	if (ctx.cr6.eq) goto loc_832770F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x832770cc
	goto loc_832770CC;
loc_832770F0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r6,r11,26
	ctx.r6.u64 = ctx.r11.u32 & 0x3F;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r9,r9,0,27,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83277124:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832770bc
	if (ctx.cr6.lt) goto loc_832770BC;
loc_83277138:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83277150
	goto loc_83277150;
loc_83277148:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_83277150:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83277148
	if (!ctx.cr6.eq) goto loc_83277148;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// b 0x83277268
	goto loc_83277268;
loc_83277174:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x832f0448
	ctx.lr = 0x83277180;
	sub_832F0448(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// rlwinm r9,r29,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r9,36
	ctx.r11.s64 = ctx.r9.s64 + 36;
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r8,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
	// stw r7,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r7.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x832771d4
	goto loc_832771D4;
loc_832771CC:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_832771D4:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x832771cc
	if (!ctx.cr6.eq) goto loc_832771CC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r24,r11,27,24,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// beq cr6,0x83277258
	if (ctx.cr6.eq) goto loc_83277258;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r29,44
	ctx.r27.s64 = ctx.r29.s64 + 44;
loc_8327720C:
	// srw r11,r24,r26
	ctx.r11.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r24.u32 >> (ctx.r26.u8 & 0x3F));
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// clrlwi r6,r11,30
	ctx.r6.u64 = ctx.r11.u32 & 0x3;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83276128
	ctx.lr = 0x8327722C;
	sub_83276128(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83232e10
	ctx.lr = 0x83277238;
	sub_83232E10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83232fe0
	ctx.lr = 0x83277244;
	sub_83232FE0(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// bne 0x8327720c
	if (!ctx.cr0.eq) goto loc_8327720C;
loc_83277258:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,57
	ctx.r10.s64 = 57;
	// rlwimi r11,r10,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83277268:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x83277284
	if (ctx.cr6.eq) goto loc_83277284;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r21,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r21.s64;
	// rlwimi r10,r11,0,0,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_83277284:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327728C"))) PPC_WEAK_FUNC(sub_8327728C);
PPC_FUNC_IMPL(__imp__sub_8327728C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83277290"))) PPC_WEAK_FUNC(sub_83277290);
PPC_FUNC_IMPL(__imp__sub_83277290) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x83276f48
	sub_83276F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83277298"))) PPC_WEAK_FUNC(sub_83277298);
PPC_FUNC_IMPL(__imp__sub_83277298) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,5
	ctx.r11.s64 = ctx.r4.s64 * 5;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// li r9,2
	ctx.r9.s64 = 2;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// slw r9,r8,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// srw r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832772D4"))) PPC_WEAK_FUNC(sub_832772D4);
PPC_FUNC_IMPL(__imp__sub_832772D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832772D8"))) PPC_WEAK_FUNC(sub_832772D8);
PPC_FUNC_IMPL(__imp__sub_832772D8) {
	PPC_FUNC_PROLOGUE();
	// mulli r10,r4,5
	ctx.r10.s64 = ctx.r4.s64 * 5;
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832772F8"))) PPC_WEAK_FUNC(sub_832772F8);
PPC_FUNC_IMPL(__imp__sub_832772F8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// li r9,2
	ctx.r9.s64 = 2;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// slw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw r3,r11,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83277338"))) PPC_WEAK_FUNC(sub_83277338);
PPC_FUNC_IMPL(__imp__sub_83277338) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83277360"))) PPC_WEAK_FUNC(sub_83277360);
PPC_FUNC_IMPL(__imp__sub_83277360) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83277384"))) PPC_WEAK_FUNC(sub_83277384);
PPC_FUNC_IMPL(__imp__sub_83277384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83277388"))) PPC_WEAK_FUNC(sub_83277388);
PPC_FUNC_IMPL(__imp__sub_83277388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83277390;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832773e8
	if (ctx.cr0.eq) goto loc_832773E8;
	// rlwinm r5,r28,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x832f58a0
	ctx.lr = 0x832773BC;
	sub_832F58A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832774b0
	if (!ctx.cr0.eq) goto loc_832774B0;
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83233190
	ctx.lr = 0x832773D0;
	sub_83233190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324c880
	ctx.lr = 0x832773D8;
	sub_8324C880(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x832774b0
	goto loc_832774B0;
loc_832773E8:
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832773f8
	if (ctx.cr0.eq) goto loc_832773F8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832773F8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x83277418
	if (ctx.cr6.eq) goto loc_83277418;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8327741c
	if (!ctx.cr6.eq) goto loc_8327741C;
loc_83277418:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8327741C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83277428
	if (!ctx.cr0.eq) goto loc_83277428;
	// lwz r30,28(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
loc_83277428:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8327743c
	if (!ctx.cr6.eq) goto loc_8327743C;
	// rlwinm r5,r28,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x83277448
	goto loc_83277448;
loc_8327743C:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r5,r11,2
	ctx.r5.u64 = ctx.r11.u64 | 2;
loc_83277448:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832f58a0
	ctx.lr = 0x83277458;
	sub_832F58A0(ctx, base);
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83277480
	if (!ctx.cr0.eq) goto loc_83277480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83233190
	ctx.lr = 0x8327746C;
	sub_83233190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324c880
	ctx.lr = 0x83277474;
	sub_8324C880(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83277480:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x832774b0
	if (ctx.cr6.eq) goto loc_832774B0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83276f48
	ctx.lr = 0x8327749C;
	sub_83276F48(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-14080
	ctx.r11.s64 = ctx.r11.s64 + -14080;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_832774B0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832774BC"))) PPC_WEAK_FUNC(sub_832774BC);
PPC_FUNC_IMPL(__imp__sub_832774BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832774C0"))) PPC_WEAK_FUNC(sub_832774C0);
PPC_FUNC_IMPL(__imp__sub_832774C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x832774C8;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// stw r4,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r4.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r20,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r20.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// li r15,-1
	ctx.r15.s64 = -1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// rlwinm. r14,r10,13,29,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r16,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r16.u32);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// stw r14,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r22,r15
	ctx.r22.u64 = ctx.r15.u64;
	// li r23,228
	ctx.r23.s64 = 228;
	// beq 0x832778d4
	if (ctx.cr0.eq) goto loc_832778D4;
	// addi r27,r20,44
	ctx.r27.s64 = ctx.r20.s64 + 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_83277544:
	// rlwinm r9,r31,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// clrlwi r30,r31,27
	ctx.r30.u64 = ctx.r31.u32 & 0x1F;
	// addi r26,r1,112
	ctx.r26.s64 = ctx.r1.s64 + 112;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r29,r5,0,27,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1E;
	// rlwinm r5,r5,27,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x3;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// slw r8,r29,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r30.u8 & 0x3F));
	// stwx r3,r4,r26
	PPC_STORE_U32(ctx.r4.u32 + ctx.r26.u32, ctx.r3.u32);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// or r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 | ctx.r30.u64;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// beq cr6,0x832775b0
	if (ctx.cr6.eq) goto loc_832775B0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_83277594:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x832775b0
	if (ctx.cr6.eq) goto loc_832775B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83277594
	if (ctx.cr6.lt) goto loc_83277594;
loc_832775B0:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x832775e8
	if (!ctx.cr6.eq) goto loc_832775E8;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// slw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// b 0x832776cc
	goto loc_832776CC;
loc_832775E8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,31,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1FFFFFFC;
	// rlwinm r11,r11,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// li r26,2
	ctx.r26.s64 = 2;
	// slw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// slw r30,r15,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r11.u8 & 0x3F));
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// slw r11,r8,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// and. r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832776b0
	if (ctx.cr0.eq) goto loc_832776B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x832776cc
	if (ctx.cr6.eq) goto loc_832776CC;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_8327764C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83277678
	if (!ctx.cr6.eq) goto loc_83277678;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r30,r8,27,30,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3;
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x83277678
	if (!ctx.cr6.eq) goto loc_83277678;
	// rlwinm r8,r8,0,27,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1E;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8327768c
	if (ctx.cr6.eq) goto loc_8327768C;
loc_83277678:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8327764c
	if (ctx.cr6.lt) goto loc_8327764C;
loc_8327768C:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x832776cc
	if (!ctx.cr6.lt) goto loc_832776CC;
	// li r10,3
	ctx.r10.s64 = 3;
	// slw r11,r11,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r24.u8 & 0x3F));
	// slw r10,r10,r24
	ctx.r10.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r24.u8 & 0x3F));
	// andc r10,r23,r10
	ctx.r10.u64 = ctx.r23.u64 & ~ctx.r10.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// or r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x832776cc
	goto loc_832776CC;
loc_832776B0:
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
loc_832776CC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// bne cr6,0x832776e4
	if (!ctx.cr6.eq) goto loc_832776E4;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x83277708
	goto loc_83277708;
loc_832776E4:
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// bne cr6,0x832776f4
	if (!ctx.cr6.eq) goto loc_832776F4;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// b 0x83277700
	goto loc_83277700;
loc_832776F4:
	// cmplwi cr6,r11,113
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 113, ctx.xer);
	// bne cr6,0x83277700
	if (!ctx.cr6.eq) goto loc_83277700;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_83277700:
	// or r21,r29,r21
	ctx.r21.u64 = ctx.r29.u64 | ctx.r21.u64;
	// and r22,r29,r22
	ctx.r22.u64 = ctx.r29.u64 & ctx.r22.u64;
loc_83277708:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r7,r14
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x83277544
	if (ctx.cr6.lt) goto loc_83277544;
	// cmplwi cr6,r23,228
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 228, ctx.xer);
	// beq cr6,0x832778d4
	if (ctx.cr6.eq) goto loc_832778D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,460(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x832f0448
	ctx.lr = 0x8327773C;
	sub_832F0448(ctx, base);
	// rlwinm r11,r20,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r28,r31,44
	ctx.r28.s64 = ctx.r31.s64 + 44;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
loc_8327778C:
	// srw r11,r23,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r30.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x832777c8
	if (!ctx.cr6.eq) goto loc_832777C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x83232fe0
	ctx.lr = 0x832777A8;
	sub_83232FE0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r10,r29,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r30.u8 & 0x3F));
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// andc r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 & ~ctx.r11.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// or r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_832777C8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r25,r14
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x8327778c
	if (ctx.cr6.lt) goto loc_8327778C;
	// addi r8,r20,4
	ctx.r8.s64 = ctx.r20.s64 + 4;
loc_832777E0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832778b8
	if (ctx.cr6.eq) goto loc_832778B8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832778a4
	if (ctx.cr6.eq) goto loc_832778A4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x83277810
	goto loc_83277810;
loc_83277808:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_83277810:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83277808
	if (!ctx.cr6.eq) goto loc_83277808;
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
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r23,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r23,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r7,27,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x6;
	// rlwinm r6,r7,29,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x6;
	// srw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r6,r26,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r6,r9,2,28,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r7,31,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x6;
	// rlwinm r7,r7,1,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x6;
	// srw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r6,r6,28
	ctx.r6.u64 = ctx.r6.u32 & 0xF;
	// srw r7,r26,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r9,r6,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_832778A4:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832777e0
	if (!ctx.cr6.eq) goto loc_832777E0;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x832777e0
	goto loc_832777E0;
loc_832778B8:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_832778C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x832f6cc8
	ctx.lr = 0x832778CC;
	sub_832F6CC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83279398
	goto loc_83279398;
loc_832778D4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm. r10,r21,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r26,4369
	ctx.r26.s64 = 4369;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// beq 0x832779fc
	if (ctx.cr0.eq) goto loc_832779FC;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x832779f4
	if (ctx.cr6.eq) goto loc_832779F4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_83277908:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r10,r26,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r7.u8 & 0x3F));
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832779e0
	if (!ctx.cr0.eq) goto loc_832779E0;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,2
	ctx.r8.s64 = 2;
	// clrlwi r6,r4,27
	ctx.r6.u64 = ctx.r4.u32 & 0x1F;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r9,r15,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r6.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832779e0
	if (ctx.cr0.eq) goto loc_832779E0;
	// rlwinm r11,r5,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r31,1
	ctx.r31.s64 = 1;
	// clrlwi r8,r5,27
	ctx.r8.u64 = ctx.r5.u32 & 0x1F;
	// slw r10,r31,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// slw r30,r10,r8
	ctx.r30.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// bge cr6,0x832779d8
	if (!ctx.cr6.lt) goto loc_832779D8;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_8327798C:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r30,r26,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// and. r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x832779c8
	if (!ctx.cr0.eq) goto loc_832779C8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x832779c8
	if (!ctx.cr6.eq) goto loc_832779C8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// slw r30,r31,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r29,r11,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// slw r30,r30,r8
	ctx.r30.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r8.u8 & 0x3F));
	// or r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 | ctx.r29.u64;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// stwx r30,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u32);
loc_832779C8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x8327798c
	if (ctx.cr6.lt) goto loc_8327798C;
loc_832779D8:
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_832779E0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r4,r4,5
	ctx.r4.s64 = ctx.r4.s64 + 5;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r7,r14
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x83277908
	if (ctx.cr6.lt) goto loc_83277908;
loc_832779F4:
	// rlwinm r21,r21,0,29,26
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// rlwinm r22,r22,0,29,26
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
loc_832779FC:
	// lwz r30,468(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x83277cc8
	if (ctx.cr6.eq) goto loc_83277CC8;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x83277aac
	if (!ctx.cr6.eq) goto loc_83277AAC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x83277aac
	if (!ctx.cr6.eq) goto loc_83277AAC;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83277A20:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83277ab0
	if (ctx.cr6.eq) goto loc_83277AB0;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83277aa4
	if (ctx.cr6.eq) goto loc_83277AA4;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83277a4c
	if (!ctx.cr0.eq) goto loc_83277A4C;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x83277a50
	if (ctx.cr0.eq) goto loc_83277A50;
loc_83277A4C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83277A50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83277aa4
	if (ctx.cr0.eq) goto loc_83277AA4;
	// rlwinm. r7,r21,0,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// beq 0x83277a74
	if (ctx.cr0.eq) goto loc_83277A74;
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83277a74
	if (ctx.cr0.eq) goto loc_83277A74;
loc_83277A6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83277a9c
	goto loc_83277A9C;
loc_83277A74:
	// rlwinm. r10,r21,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83277a84
	if (ctx.cr0.eq) goto loc_83277A84;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83277a6c
	if (!ctx.cr0.eq) goto loc_83277A6C;
loc_83277A84:
	// rlwinm. r10,r21,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83277a98
	if (ctx.cr0.eq) goto loc_83277A98;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x83277a9c
	if (!ctx.cr0.eq) goto loc_83277A9C;
loc_83277A98:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83277A9C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83277aac
	if (ctx.cr0.eq) goto loc_83277AAC;
loc_83277AA4:
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x83277a20
	goto loc_83277A20;
loc_83277AAC:
	// li r8,0
	ctx.r8.s64 = 0;
loc_83277AB0:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83277b84
	if (ctx.cr0.eq) goto loc_83277B84;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83277ABC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83277b4c
	if (ctx.cr6.eq) goto loc_83277B4C;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83277b44
	if (ctx.cr6.eq) goto loc_83277B44;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r9,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83277ae8
	if (!ctx.cr0.eq) goto loc_83277AE8;
	// rlwinm. r11,r9,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x83277aec
	if (ctx.cr0.eq) goto loc_83277AEC;
loc_83277AE8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83277AEC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83277b44
	if (ctx.cr0.eq) goto loc_83277B44;
	// rlwinm. r7,r21,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// beq 0x83277b10
	if (ctx.cr0.eq) goto loc_83277B10;
	// rlwinm. r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83277b10
	if (ctx.cr0.eq) goto loc_83277B10;
	// addi r10,r21,-4
	ctx.r10.s64 = ctx.r21.s64 + -4;
loc_83277B10:
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm. r7,r7,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83277b24
	if (ctx.cr0.eq) goto loc_83277B24;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_83277B24:
	// clrlwi. r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83277b38
	if (ctx.cr0.eq) goto loc_83277B38;
	// rlwinm. r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83277b38
	if (ctx.cr0.eq) goto loc_83277B38;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_83277B38:
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwimi r11,r9,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_83277B44:
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x83277abc
	goto loc_83277ABC;
loc_83277B4C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 44;
loc_83277B54:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r9,13,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83277cc8
	if (!ctx.cr6.lt) goto loc_83277CC8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r21,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r21.s64;
	// rlwimi r7,r8,0,0,26
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFE0) | (ctx.r7.u64 & 0xFFFFFFFF0000001F);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// b 0x83277b54
	goto loc_83277B54;
loc_83277B84:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x83277cc8
	if (ctx.cr6.eq) goto loc_83277CC8;
	// rlwinm r3,r16,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r27,2
	ctx.r27.s64 = 2;
loc_83277BA4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r10,r26,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r6.u8 & 0x3F));
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83277cb4
	if (!ctx.cr0.eq) goto loc_83277CB4;
	// addi r8,r4,5
	ctx.r8.s64 = ctx.r4.s64 + 5;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// slw r11,r27,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r9,r15,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r7.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw. r31,r11,r7
	ctx.r31.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83277cb4
	if (ctx.cr0.eq) goto loc_83277CB4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r3,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r7,r3,27
	ctx.r7.u64 = ctx.r3.u32 & 0x1F;
	// slw r11,r28,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// slw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// or r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 | ctx.r5.u64;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stwx r5,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bge cr6,0x83277cac
	if (!ctx.cr6.lt) goto loc_83277CAC;
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
loc_83277C24:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r24,r26,r10
	ctx.r24.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83277c98
	if (!ctx.cr0.eq) goto loc_83277C98;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r24,0(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x83277c98
	if (!ctx.cr6.eq) goto loc_83277C98;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// addi r23,r1,84
	ctx.r23.s64 = ctx.r1.s64 + 84;
	// rlwinm r24,r8,29,3,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r11,r27,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r24,r24,r23
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r23.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r23,r8,27
	ctx.r23.u64 = ctx.r8.u32 & 0x1F;
	// and r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & ctx.r24.u64;
	// slw r22,r15,r23
	ctx.r22.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r23.u8 & 0x3F));
	// and r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 & ctx.r22.u64;
	// srw r11,r11,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r23.u8 & 0x3F));
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83277c98
	if (!ctx.cr6.eq) goto loc_83277C98;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// slw r24,r28,r10
	ctx.r24.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r23,r9,r11
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// slw r24,r24,r7
	ctx.r24.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r7.u8 & 0x3F));
	// or r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 | ctx.r23.u64;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// stwx r24,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r24.u32);
loc_83277C98:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x83277c24
	if (ctx.cr6.lt) goto loc_83277C24;
loc_83277CAC:
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_83277CB4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r4,r4,5
	ctx.r4.s64 = ctx.r4.s64 + 5;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r6,r14
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x83277ba4
	if (ctx.cr6.lt) goto loc_83277BA4;
loc_83277CC8:
	// lwz r23,112(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x83277d44
	if (ctx.cr6.eq) goto loc_83277D44;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x83277d2c
	if (ctx.cr6.eq) goto loc_83277D2C;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x83277d44
	if (ctx.cr6.eq) goto loc_83277D44;
	// addi r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 44;
loc_83277CF0:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r8,r26,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// and. r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83277d1c
	if (!ctx.cr0.eq) goto loc_83277D1C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,15872
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15872, ctx.xer);
	// bne cr6,0x83277d1c
	if (!ctx.cr6.eq) goto loc_83277D1C;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
loc_83277D1C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x83277cf0
	if (ctx.cr6.lt) goto loc_83277CF0;
loc_83277D2C:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x83277d44
	if (ctx.cr6.eq) goto loc_83277D44;
	// cmplwi cr6,r18,1
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 1, ctx.xer);
	// bgt cr6,0x83277f44
	if (ctx.cr6.gt) goto loc_83277F44;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x83277f44
	if (!ctx.cr6.eq) goto loc_83277F44;
loc_83277D44:
	// li r22,1
	ctx.r22.s64 = 1;
loc_83277D48:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x83277edc
	if (!ctx.cr6.eq) goto loc_83277EDC;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x83277edc
	if (!ctx.cr6.eq) goto loc_83277EDC;
	// cmplwi cr6,r18,1
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 1, ctx.xer);
	// bne cr6,0x83277edc
	if (!ctx.cr6.eq) goto loc_83277EDC;
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 44;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r11,13,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r27,r7,31
	ctx.r27.u64 = ctx.r7.u32 & 0x1;
loc_83277D84:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x83277dbc
	if (!ctx.cr6.lt) goto loc_83277DBC;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r6,r6,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// andc r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 & ~ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r7,27,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x3;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// or r29,r7,r6
	ctx.r29.u64 = ctx.r7.u64 | ctx.r6.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x83277d84
	goto loc_83277D84;
loc_83277DBC:
	// addi r24,r30,4
	ctx.r24.s64 = ctx.r30.s64 + 4;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_83277DC4:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83277ec8
	if (ctx.cr6.eq) goto loc_83277EC8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83277eb4
	if (ctx.cr6.eq) goto loc_83277EB4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83277eb4
	if (ctx.cr0.eq) goto loc_83277EB4;
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15872
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15872, ctx.xer);
	// bne cr6,0x83277e20
	if (!ctx.cr6.eq) goto loc_83277E20;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83277e14
	if (ctx.cr6.lt) goto loc_83277E14;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// ble cr6,0x83277e18
	if (!ctx.cr6.gt) goto loc_83277E18;
loc_83277E14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83277E18:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83277eb4
	if (ctx.cr0.eq) goto loc_83277EB4;
loc_83277E20:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83277e38
	goto loc_83277E38;
loc_83277E30:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_83277E38:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83277e30
	if (!ctx.cr6.eq) goto loc_83277E30;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r10,27,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x6;
	// rlwinm r8,r10,29,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x6;
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r29,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,31,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x6;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r21,r10,r11
	ctx.r21.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r4,r21,27
	ctx.r4.u64 = ctx.r21.u32 & 0x1F;
	// bl 0x83232218
	ctx.lr = 0x83277EAC;
	sub_83232218(ctx, base);
	// rlwimi r3,r21,0,0,26
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r21.u32, 0) & 0xFFFFFFE0) | (ctx.r3.u64 & 0xFFFFFFFF0000001F);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83277EB4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83277dc4
	if (!ctx.cr6.eq) goto loc_83277DC4;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// b 0x83277dc4
	goto loc_83277DC4;
loc_83277EC8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832780b8
	if (ctx.cr6.eq) goto loc_832780B8;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x83277f48
	if (!ctx.cr6.eq) goto loc_83277F48;
loc_83277EDC:
	// cmplwi cr6,r17,1
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 1, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// ble cr6,0x83278160
	if (!ctx.cr6.gt) goto loc_83278160;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// beq cr6,0x83278160
	if (ctx.cr6.eq) goto loc_83278160;
	// rlwinm r5,r16,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
loc_83277F04:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r10,r26,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r7.u8 & 0x3F));
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327814c
	if (!ctx.cr0.eq) goto loc_8327814C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14464
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14464, ctx.xer);
	// bne cr6,0x8327814c
	if (!ctx.cr6.eq) goto loc_8327814C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8327814c
	if (ctx.cr6.eq) goto loc_8327814C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832780c4
	if (!ctx.cr6.eq) goto loc_832780C4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8327814c
	goto loc_8327814C;
loc_83277F44:
	// li r22,1
	ctx.r22.s64 = 1;
loc_83277F48:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x832780b0
	if (ctx.cr6.eq) goto loc_832780B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r29,r16,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// addi r27,r30,44
	ctx.r27.s64 = ctx.r30.s64 + 44;
loc_83277F64:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r10,r26,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r4.u8 & 0x3F));
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83278098
	if (!ctx.cr0.eq) goto loc_83278098;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x83278098
	if (!ctx.cr6.eq) goto loc_83278098;
	// rlwinm r9,r29,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// slw r11,r22,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r4.u8 & 0x3F));
	// clrlwi r6,r29,27
	ctx.r6.u64 = ctx.r29.u32 & 0x1F;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// slw r7,r11,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r6.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bge cr6,0x83278090
	if (!ctx.cr6.lt) goto loc_83278090;
	// addi r3,r5,4
	ctx.r3.s64 = ctx.r5.s64 + 4;
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
loc_83277FCC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r7,r26,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r8.u8 & 0x3F));
	// and. r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83278078
	if (!ctx.cr0.eq) goto loc_83278078;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83278078
	if (!ctx.cr6.eq) goto loc_83278078;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r14,92(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r7,2
	ctx.r7.s64 = 2;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r24,r1,84
	ctx.r24.s64 = ctx.r1.s64 + 84;
	// rlwinm r30,r11,29,3,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r22,r3,27
	ctx.r22.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r21,r5,29,3,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r19,r1,84
	ctx.r19.s64 = ctx.r1.s64 + 84;
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// slw r7,r7,r22
	ctx.r7.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r22.u8 & 0x3F));
	// lwzx r30,r30,r24
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// lwzx r24,r21,r19
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r19.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// clrlwi r22,r5,27
	ctx.r22.u64 = ctx.r5.u32 & 0x1F;
	// clrlwi r21,r11,27
	ctx.r21.u64 = ctx.r11.u32 & 0x1F;
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// and r7,r7,r24
	ctx.r7.u64 = ctx.r7.u64 & ctx.r24.u64;
	// slw r24,r15,r22
	ctx.r24.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r22.u8 & 0x3F));
	// slw r30,r15,r21
	ctx.r30.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r21.u8 & 0x3F));
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// and r7,r7,r24
	ctx.r7.u64 = ctx.r7.u64 & ctx.r24.u64;
	// srw r10,r10,r21
	ctx.r10.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r21.u8 & 0x3F));
	// srw r7,r7,r22
	ctx.r7.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r22.u8 & 0x3F));
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// li r22,1
	ctx.r22.s64 = 1;
	// bne cr6,0x83278078
	if (!ctx.cr6.eq) goto loc_83278078;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// slw r7,r22,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// slw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// or r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 | ctx.r30.u64;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// stwx r7,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
loc_83278078:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmplw cr6,r8,r14
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x83277fcc
	if (ctx.cr6.lt) goto loc_83277FCC;
	// lwz r30,468(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
loc_83278090:
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_83278098:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r5,r5,5
	ctx.r5.s64 = ctx.r5.s64 + 5;
	// cmplw cr6,r4,r14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x83277f64
	if (ctx.cr6.lt) goto loc_83277F64;
loc_832780B0:
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x83277d48
	goto loc_83277D48;
loc_832780B8:
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x832778c0
	goto loc_832778C0;
loc_832780C4:
	// rlwinm r11,r5,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// slw r10,r22,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r7.u8 & 0x3F));
	// clrlwi r8,r5,27
	ctx.r8.u64 = ctx.r5.u32 & 0x1F;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// slw r28,r10,r8
	ctx.r28.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// or r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 | ctx.r6.u64;
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// bge cr6,0x83278144
	if (!ctx.cr6.lt) goto loc_83278144;
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
loc_832780F8:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r28,r26,r10
	ctx.r28.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// and. r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83278134
	if (!ctx.cr0.eq) goto loc_83278134;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r28,0(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x83278134
	if (!ctx.cr6.eq) goto loc_83278134;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// slw r28,r22,r10
	ctx.r28.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r27,r11,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// slw r28,r28,r8
	ctx.r28.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r8.u8 & 0x3F));
	// or r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 | ctx.r27.u64;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// stwx r28,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u32);
loc_83278134:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x832780f8
	if (ctx.cr6.lt) goto loc_832780F8;
loc_83278144:
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_8327814C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r7,r14
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x83277f04
	if (ctx.cr6.lt) goto loc_83277F04;
loc_83278160:
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r27,r11,5192
	ctx.r27.u64 = ctx.r11.u64 | 5192;
	// ori r11,r10,36262
	ctx.r11.u64 = ctx.r10.u64 | 36262;
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// rldimi r27,r11,32,0
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r27.u64 & 0xFFFFFFFF);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x83278350
	if (ctx.cr6.eq) goto loc_83278350;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r3,r16,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
loc_832781A8:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r11,r26,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r5.u8 & 0x3F));
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83278340
	if (!ctx.cr0.eq) goto loc_83278340;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwzx r6,r4,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x832781e0
	if (ctx.cr6.eq) goto loc_832781E0;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x832781e4
	if (!ctx.cr6.eq) goto loc_832781E4;
loc_832781E0:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_832781E4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832781f4
	if (ctx.cr0.eq) goto loc_832781F4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x83278340
	goto loc_83278340;
loc_832781F4:
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r9,r11,31,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// srd r11,r27,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r27.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8327829c
	if (!ctx.cr6.eq) goto loc_8327829C;
	// rlwinm r11,r3,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// slw r10,r22,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r5.u8 & 0x3F));
	// clrlwi r8,r3,27
	ctx.r8.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r28,r11,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// slw r23,r10,r8
	ctx.r23.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// or r28,r23,r28
	ctx.r28.u64 = ctx.r23.u64 | ctx.r28.u64;
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// stwx r28,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u32);
	// bge cr6,0x83278290
	if (!ctx.cr6.lt) goto loc_83278290;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
loc_83278248:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r28,r26,r10
	ctx.r28.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// and. r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83278280
	if (!ctx.cr0.eq) goto loc_83278280;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83278280
	if (!ctx.cr6.eq) goto loc_83278280;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// slw r28,r22,r10
	ctx.r28.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r23,r11,r9
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// slw r28,r28,r8
	ctx.r28.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r8.u8 & 0x3F));
	// or r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 | ctx.r23.u64;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// stwx r28,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u32);
loc_83278280:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x83278248
	if (ctx.cr6.lt) goto loc_83278248;
loc_83278290:
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83278340
	goto loc_83278340;
loc_8327829C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832782d4
	if (ctx.cr6.eq) goto loc_832782D4;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_832782AC:
	// slw r7,r26,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// and. r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x832782c4
	if (!ctx.cr0.eq) goto loc_832782C4;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x832782d4
	if (ctx.cr6.eq) goto loc_832782D4;
loc_832782C4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x832782ac
	if (ctx.cr6.lt) goto loc_832782AC;
loc_832782D4:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x83278304
	if (!ctx.cr6.eq) goto loc_83278304;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// slw r7,r22,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r24,r7,r24
	ctx.r24.u64 = ctx.r7.u64 | ctx.r24.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// b 0x83278340
	goto loc_83278340;
loc_83278304:
	// rlwinm r9,r11,31,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1FFFFFFC;
	// rlwinm r7,r11,31,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1FFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// rlwinm r6,r11,2,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// slw r23,r22,r5
	ctx.r23.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r28,r11,2,27,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// lwzx r21,r9,r10
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// slw r23,r23,r6
	ctx.r23.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// slw r6,r22,r28
	ctx.r6.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r28.u8 & 0x3F));
	// or r28,r23,r21
	ctx.r28.u64 = ctx.r23.u64 | ctx.r21.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stwx r28,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r28.u32);
	// stwx r11,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u32);
loc_83278340:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r5,r14
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x832781a8
	if (ctx.cr6.lt) goto loc_832781A8;
loc_83278350:
	// add r10,r31,r20
	ctx.r10.u64 = ctx.r31.u64 + ctx.r20.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83278358:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// li r6,2
	ctx.r6.s64 = 2;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// slw r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// slw r7,r15,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r5.u8 & 0x3F));
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r8,r27,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r27.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x83278358
	if (ctx.cr6.lt) goto loc_83278358;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// ble cr6,0x832785ac
	if (!ctx.cr6.gt) goto loc_832785AC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r28,8191
	ctx.r28.s64 = 8191;
	// stw r5,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r5.u32);
	// li r31,15
	ctx.r31.s64 = 15;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_832783DC:
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// andc r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm r9,r9,19,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1FFF;
	// add r6,r9,r3
	ctx.r6.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmplwi cr6,r6,8191
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8191, ctx.xer);
	// ble cr6,0x83278414
	if (!ctx.cr6.gt) goto loc_83278414;
	// li r6,8191
	ctx.r6.s64 = 8191;
loc_83278414:
	// cmplw cr6,r6,r28
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x83278554
	if (ctx.cr6.gt) goto loc_83278554;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// rlwinm r23,r11,29,3,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r22,r1,92
	ctx.r22.s64 = ctx.r1.s64 + 92;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r20,r11,3
	ctx.r20.s64 = ctx.r11.s64 + 3;
	// slw r9,r30,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r23,r23,r22
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r22,r11,27
	ctx.r22.u64 = ctx.r11.u32 & 0x1F;
	// and r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 & ctx.r23.u64;
	// slw r21,r15,r22
	ctx.r21.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r22.u8 & 0x3F));
	// and r9,r9,r21
	ctx.r9.u64 = ctx.r9.u64 & ctx.r21.u64;
	// addi r23,r11,3
	ctx.r23.s64 = ctx.r11.s64 + 3;
	// srw r9,r9,r22
	ctx.r9.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r22.u8 & 0x3F));
	// rlwinm r21,r11,29,3,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r22,r1,128
	ctx.r22.s64 = ctx.r1.s64 + 128;
	// clrlwi r23,r23,27
	ctx.r23.u64 = ctx.r23.u32 & 0x1F;
	// clrldi r19,r9,32
	ctx.r19.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// slw r9,r30,r23
	ctx.r9.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r23.u8 & 0x3F));
	// lwzx r30,r21,r22
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r22.u32);
	// clrlwi r21,r20,27
	ctx.r21.u64 = ctx.r20.u32 & 0x1F;
	// rlwinm r22,r11,29,3,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r20,r1,96
	ctx.r20.s64 = ctx.r1.s64 + 96;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// li r17,2
	ctx.r17.s64 = 2;
	// clrlwi r23,r11,27
	ctx.r23.u64 = ctx.r11.u32 & 0x1F;
	// srd r18,r27,r19
	ctx.r18.u64 = ctx.r19.u8 & 0x40 ? 0 : (ctx.r27.u64 >> (ctx.r19.u8 & 0x7F));
	// and r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 & ctx.r30.u64;
	// lwzx r22,r22,r20
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r20.u32);
	// slw r9,r17,r21
	ctx.r9.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r21.u8 & 0x3F));
	// slw r21,r15,r23
	ctx.r21.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r23.u8 & 0x3F));
	// srd r20,r18,r19
	ctx.r20.u64 = ctx.r19.u8 & 0x40 ? 0 : (ctx.r18.u64 >> (ctx.r19.u8 & 0x7F));
	// clrlwi r18,r11,27
	ctx.r18.u64 = ctx.r11.u32 & 0x1F;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// and r9,r30,r21
	ctx.r9.u64 = ctx.r30.u64 & ctx.r21.u64;
	// srd r30,r20,r19
	ctx.r30.u64 = ctx.r19.u8 & 0x40 ? 0 : (ctx.r20.u64 >> (ctx.r19.u8 & 0x7F));
	// and r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 & ctx.r22.u64;
	// slw r22,r15,r18
	ctx.r22.u64 = ctx.r18.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r18.u8 & 0x3F));
	// srw r9,r9,r23
	ctx.r9.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r23.u8 & 0x3F));
	// clrlwi r30,r30,29
	ctx.r30.u64 = ctx.r30.u32 & 0x7;
	// and r23,r11,r22
	ctx.r23.u64 = ctx.r11.u64 & ctx.r22.u64;
	// subf r11,r30,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r30.s64;
	// srw r9,r23,r18
	ctx.r9.u64 = ctx.r18.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r18.u8 & 0x3F));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x83278524
	if (ctx.cr6.gt) goto loc_83278524;
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r9,r31,32
	ctx.r9.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// srd r30,r27,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r27.u64 >> (ctx.r11.u8 & 0x7F));
	// srd r23,r27,r9
	ctx.r23.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r27.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r30.u64 >> (ctx.r11.u8 & 0x7F));
	// srd r23,r23,r9
	ctx.r23.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r23.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r30.u64 >> (ctx.r11.u8 & 0x7F));
	// lwz r30,468(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// srd r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r23.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x83278554
	if (ctx.cr6.gt) goto loc_83278554;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x83278554
	goto loc_83278554;
loc_83278524:
	// clrlwi r9,r29,21
	ctx.r9.u64 = ctx.r29.u32 & 0x7FF;
	// lwz r30,468(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// rlwinm r10,r10,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF0000000;
	// rlwimi r11,r6,4,15,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x1FFF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFE000F);
	// or r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r29,r11,11,4,20
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 11) & 0xFFFF800) | (ctx.r29.u64 & 0xFFFFFFFFF00007FF);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r5.u32);
loc_83278554:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832783dc
	if (!ctx.cr6.eq) goto loc_832783DC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8327858c
	if (ctx.cr6.eq) goto loc_8327858C;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r5,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r5.u32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r7,r11,4,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// rlwinm r3,r11,17,19,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFF;
	// rlwinm r4,r11,21,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xF;
	// andc r8,r24,r7
	ctx.r8.u64 = ctx.r24.u64 & ~ctx.r7.u64;
	// b 0x832783dc
	goto loc_832783DC;
loc_8327858C:
	// rlwinm r10,r16,31,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 31) & 0x1FFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r16,2,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x1C;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// slw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_832785AC:
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832788a4
	if (ctx.cr6.eq) goto loc_832788A4;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x832788a4
	if (ctx.cr6.eq) goto loc_832788A4;
	// rlwinm r29,r16,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r23,r1,144
	ctx.r23.s64 = ctx.r1.s64 + 144;
	// addi r24,r1,112
	ctx.r24.s64 = ctx.r1.s64 + 112;
	// addi r27,r30,44
	ctx.r27.s64 = ctx.r30.s64 + 44;
	// li r25,1
	ctx.r25.s64 = 1;
loc_832785EC:
	// slw r11,r26,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r31.u8 & 0x3F));
	// and. r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 & ctx.r17.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832786e8
	if (!ctx.cr0.eq) goto loc_832786E8;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x832786e8
	if (!ctx.cr6.eq) goto loc_832786E8;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r28,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,2
	ctx.r8.s64 = 2;
	// clrlwi r7,r28,27
	ctx.r7.u64 = ctx.r28.u32 & 0x1F;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r9,r15,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r7.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83278678
	if (ctx.cr0.eq) goto loc_83278678;
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// slw r8,r25,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r31.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x832786e8
	goto loc_832786E8;
loc_83278678:
	// slw r11,r25,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r31.u8 & 0x3F));
	// or r19,r11,r19
	ctx.r19.u64 = ctx.r11.u64 | ctx.r19.u64;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832786bc
	if (ctx.cr6.eq) goto loc_832786BC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_83278694:
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// and. r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 & ctx.r17.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x832786ac
	if (!ctx.cr0.eq) goto loc_832786AC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x832786bc
	if (ctx.cr6.eq) goto loc_832786BC;
loc_832786AC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x83278694
	if (ctx.cr6.lt) goto loc_83278694;
loc_832786BC:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x832786c8
	if (!ctx.cr6.eq) goto loc_832786C8;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_832786C8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r11,27,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x832ecf28
	ctx.lr = 0x832786DC;
	sub_832ECF28(ctx, base);
	// stfs f1,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
loc_832786E8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,5
	ctx.r28.s64 = ctx.r28.s64 + 5;
	// cmplw cr6,r31,r14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x832785ec
	if (ctx.cr6.lt) goto loc_832785EC;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x832788a4
	if (ctx.cr6.eq) goto loc_832788A4;
	// lwz r25,452(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1, ctx.xer);
	// ble cr6,0x832787b4
	if (!ctx.cr6.gt) goto loc_832787B4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x832f27e8
	ctx.lr = 0x83278734;
	sub_832F27E8(ctx, base);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
loc_83278740:
	// slw r11,r26,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r31.u8 & 0x3F));
	// and. r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 & ctx.r17.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83278790
	if (!ctx.cr0.eq) goto loc_83278790;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x83278790
	if (!ctx.cr6.eq) goto loc_83278790;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r29,228
	ctx.r6.u64 = ctx.r29.u64 | 228;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83232ed8
	ctx.lr = 0x83278778;
	sub_83232ED8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x83234f38
	ctx.lr = 0x83278790;
	sub_83234F38(ctx, base);
loc_83278790:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r31,r14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x83278740
	if (ctx.cr6.lt) goto loc_83278740;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83253180
	ctx.lr = 0x832787A8;
	sub_83253180(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_832787B4:
	// cmplw cr6,r20,r14
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r14.u32, ctx.xer);
	// bge cr6,0x832787e4
	if (!ctx.cr6.lt) goto loc_832787E4;
	// rlwinm r10,r16,31,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 31) & 0x1FFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r16,2,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x1C;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// slw r9,r19,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x832788a8
	goto loc_832788A8;
loc_832787E4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832fab10
	ctx.lr = 0x832787F8;
	sub_832FAB10(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327885c
	if (ctx.cr6.eq) goto loc_8327885C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,228
	ctx.r6.s64 = 228;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83232ed8
	ctx.lr = 0x8327881C;
	sub_83232ED8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8325bca0
	ctx.lr = 0x83278834;
	sub_8325BCA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,228
	ctx.r6.s64 = 228;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832f8c00
	ctx.lr = 0x8327885C;
	sub_832F8C00(ctx, base);
loc_8327885C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83278874
	if (ctx.cr6.eq) goto loc_83278874;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x83204d78
	ctx.lr = 0x83278874;
	sub_83204D78(ctx, base);
loc_83278874:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x83278884;
	sub_832F6CC8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83253180
	ctx.lr = 0x8327888C;
	sub_83253180(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x83279398
	goto loc_83279398;
loc_832788A4:
	// lwz r25,452(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
loc_832788A8:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x832789e4
	if (ctx.cr6.eq) goto loc_832789E4;
	// rlwinm r29,r16,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_832788BC:
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// li r9,2
	ctx.r9.s64 = 2;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r31,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r6,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r5,r31,27
	ctx.r5.u64 = ctx.r31.u32 & 0x1F;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// slw r9,r15,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r5.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw. r11,r11,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r5.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83278908
	if (ctx.cr0.eq) goto loc_83278908;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x8327890c
	if (ctx.cr0.eq) goto loc_8327890C;
loc_83278908:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8327890C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832789d0
	if (!ctx.cr0.eq) goto loc_832789D0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_83278924:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832789c0
	if (ctx.cr6.eq) goto loc_832789C0;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r10,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r11.s64;
	// addi r11,r10,11
	ctx.r11.s64 = ctx.r10.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// bne cr6,0x83278968
	if (!ctx.cr6.eq) goto loc_83278968;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x832789b0
	goto loc_832789B0;
loc_83278968:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83278978
	if (!ctx.cr6.eq) goto loc_83278978;
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x832789b0
	if (ctx.cr6.eq) goto loc_832789B0;
loc_83278978:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// slw r27,r4,r10
	ctx.r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// slw r26,r27,r5
	ctx.r26.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r5.u8 & 0x3F));
	// subf r26,r26,r10
	ctx.r26.s64 = ctx.r10.s64 - ctx.r26.s64;
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// stwx r26,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r26.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 | ctx.r27.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_832789B0:
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// b 0x83278924
	goto loc_83278924;
loc_832789C0:
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832789d0
	if (ctx.cr0.eq) goto loc_832789D0;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_832789D0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x832788bc
	if (ctx.cr6.lt) goto loc_832788BC;
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832789E4:
	// li r20,0
	ctx.r20.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmplwi cr6,r16,2
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 2, ctx.xer);
	// blt cr6,0x83278d44
	if (ctx.cr6.lt) goto loc_83278D44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
loc_83278A04:
	// clrlwi r27,r17,28
	ctx.r27.u64 = ctx.r17.u32 & 0xF;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83275e58
	ctx.lr = 0x83278A20;
	sub_83275E58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r24,r17,28,28,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xF;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r28,r11,7,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x83275e58
	ctx.lr = 0x83278A48;
	sub_83275E58(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r23,r10,7,29,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x83278a9c
	if (!ctx.cr6.lt) goto loc_83278A9C;
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r28,r23
	ctx.r9.s64 = ctx.r23.s64 - ctx.r28.s64;
loc_83278A74:
	// srw r7,r11,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// li r6,3
	ctx.r6.s64 = 3;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// slw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// andc r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x83278a74
	if (!ctx.cr0.eq) goto loc_83278A74;
loc_83278A9C:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r23,20,9,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 20) & 0x700000;
	// lwz r21,12(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r9,r9,0,27,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r9,r9,0,7,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15104, ctx.xer);
	// bne cr6,0x83278adc
	if (!ctx.cr6.eq) goto loc_83278ADC;
	// lwz r11,44(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 44);
	// lwz r21,12(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_83278ADC:
	// lwz r19,12(r22)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15104, ctx.xer);
	// bne cr6,0x83278af8
	if (!ctx.cr6.eq) goto loc_83278AF8;
	// lwz r11,44(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// lwz r19,12(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_83278AF8:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x83278b14
	if (ctx.cr6.eq) goto loc_83278B14;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83278b18
	if (!ctx.cr6.eq) goto loc_83278B18;
loc_83278B14:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83278B18:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83278b6c
	if (ctx.cr0.eq) goto loc_83278B6C;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x83278b3c
	if (ctx.cr6.eq) goto loc_83278B3C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83278b40
	if (!ctx.cr6.eq) goto loc_83278B40;
loc_83278B3C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83278B40:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83278b6c
	if (ctx.cr0.eq) goto loc_83278B6C;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r9,r9,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83278d20
	if (!ctx.cr0.eq) goto loc_83278D20;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83278d20
	if (!ctx.cr0.eq) goto loc_83278D20;
loc_83278B6C:
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// ble cr6,0x83278b7c
	if (!ctx.cr6.gt) goto loc_83278B7C;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// b 0x83278b80
	goto loc_83278B80;
loc_83278B7C:
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
loc_83278B80:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// ble cr6,0x83278b90
	if (!ctx.cr6.gt) goto loc_83278B90;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// b 0x83278b94
	goto loc_83278B94;
loc_83278B90:
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
loc_83278B94:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x83278ba4
	if (!ctx.cr6.gt) goto loc_83278BA4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// b 0x83278ba8
	goto loc_83278BA8;
loc_83278BA4:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
loc_83278BA8:
	// li r4,4
	ctx.r4.s64 = 4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832f6460
	ctx.lr = 0x83278BB8;
	sub_832F6460(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83278bf4
	if (ctx.cr0.eq) goto loc_83278BF4;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x83278be8
	if (ctx.cr6.eq) goto loc_83278BE8;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83278bec
	if (!ctx.cr6.eq) goto loc_83278BEC;
loc_83278BE8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83278BEC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83278c28
	if (!ctx.cr0.eq) goto loc_83278C28;
loc_83278BF4:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83278c2c
	if (ctx.cr0.eq) goto loc_83278C2C;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x83278c1c
	if (ctx.cr6.eq) goto loc_83278C1C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83278c20
	if (!ctx.cr6.eq) goto loc_83278C20;
loc_83278C1C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83278C20:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83278c2c
	if (ctx.cr0.eq) goto loc_83278C2C;
loc_83278C28:
	// li r7,2
	ctx.r7.s64 = 2;
loc_83278C2C:
	// li r6,228
	ctx.r6.s64 = 228;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83232ed8
	ctx.lr = 0x83278C40;
	sub_83232ED8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r4,460(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83235088
	ctx.lr = 0x83278C5C;
	sub_83235088(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83253180
	ctx.lr = 0x83278C68;
	sub_83253180(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83276e98
	ctx.lr = 0x83278C90;
	sub_83276E98(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83276e98
	ctx.lr = 0x83278CAC;
	sub_83276E98(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r29,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x83233190
	ctx.lr = 0x83278CEC;
	sub_83233190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8324c880
	ctx.lr = 0x83278CF4;
	sub_8324C880(ctx, base);
	// or r11,r20,r24
	ctx.r11.u64 = ctx.r20.u64 | ctx.r24.u64;
	// addi r16,r16,-2
	ctx.r16.s64 = ctx.r16.s64 + -2;
	// or r20,r11,r27
	ctx.r20.u64 = ctx.r11.u64 | ctx.r27.u64;
	// rlwinm r17,r17,24,8,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 24) & 0xFFFFFF;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmplwi cr6,r16,2
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 2, ctx.xer);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bge cr6,0x83278a04
	if (!ctx.cr6.lt) goto loc_83278A04;
	// b 0x83278d44
	goto loc_83278D44;
loc_83278D20:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83278d38
	if (ctx.cr6.eq) goto loc_83278D38;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x832539a0
	ctx.lr = 0x83278D38;
	sub_832539A0(ctx, base);
loc_83278D38:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,12(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// bl 0x832539a0
	ctx.lr = 0x83278D44;
	sub_832539A0(ctx, base);
loc_83278D44:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x83278e08
	if (ctx.cr6.eq) goto loc_83278E08;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// add r18,r18,r16
	ctx.r18.u64 = ctx.r18.u64 + ctx.r16.u64;
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// addi r29,r31,-36
	ctx.r29.s64 = ctx.r31.s64 + -36;
loc_83278D5C:
	// clrlwi r28,r17,28
	ctx.r28.u64 = ctx.r17.u32 & 0xF;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83275e58
	ctx.lr = 0x83278D78;
	sub_83275E58(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,460(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83234f98
	ctx.lr = 0x83278D90;
	sub_83234F98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83276e98
	ctx.lr = 0x83278DB0;
	sub_83276E98(ctx, base);
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83233190
	ctx.lr = 0x83278DE4;
	sub_83233190(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8324c880
	ctx.lr = 0x83278DEC;
	sub_8324C880(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addic. r16,r16,-1
	ctx.xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// or r20,r20,r28
	ctx.r20.u64 = ctx.r20.u64 | ctx.r28.u64;
	// rlwinm r17,r17,28,4,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// bne 0x83278d5c
	if (!ctx.cr0.eq) goto loc_83278D5C;
loc_83278E08:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrldi r10,r18,32
	ctx.r10.u64 = ctx.r18.u64 & 0xFFFFFFFF;
	// slw r11,r11,r14
	ctx.r11.u64 = ctx.r14.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r14.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rldimi r10,r20,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r20.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// rldicr r11,r11,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x83278f00
	if (!ctx.cr6.eq) goto loc_83278F00;
	// lwz r27,468(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x83278e80
	if (ctx.cr6.eq) goto loc_83278E80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// addi r9,r27,44
	ctx.r9.s64 = ctx.r27.s64 + 44;
loc_83278E4C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// andc r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 & ~ctx.r7.u64;
	// lwz r30,12(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r8,r6,27,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x3;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x83278e4c
	if (!ctx.cr0.eq) goto loc_83278E4C;
loc_83278E80:
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
loc_83278E84:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83278ef4
	if (ctx.cr6.eq) goto loc_83278EF4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83278ee0
	if (ctx.cr6.eq) goto loc_83278EE0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83278eb4
	goto loc_83278EB4;
loc_83278EAC:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_83278EB4:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83278eac
	if (!ctx.cr6.eq) goto loc_83278EAC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x83229e40
	ctx.lr = 0x83278EE0;
	sub_83229E40(ctx, base);
loc_83278EE0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83278e84
	if (!ctx.cr6.eq) goto loc_83278E84;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// b 0x83278e84
	goto loc_83278E84;
loc_83278EF4:
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x832778c0
	goto loc_832778C0;
loc_83278F00:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83275bd0
	ctx.lr = 0x83278F0C;
	sub_83275BD0(ctx, base);
	// addi r21,r30,44
	ctx.r21.s64 = ctx.r30.s64 + 44;
	// lwz r26,460(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r18,r21
	ctx.r18.u64 = ctx.r21.u64;
	// li r16,3
	ctx.r16.s64 = 3;
loc_83278F20:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83279338
	if (!ctx.cr6.lt) goto loc_83279338;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r22,12(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r19,r22,4
	ctx.r19.s64 = ctx.r22.s64 + 4;
loc_83278F3C:
	// lwz r20,0(r19)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8327927c
	if (ctx.cr6.eq) goto loc_8327927C;
	// lwz r29,16(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83279268
	if (ctx.cr6.eq) goto loc_83279268;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83278f6c
	if (!ctx.cr0.eq) goto loc_83278F6C;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x83278f70
	if (ctx.cr0.eq) goto loc_83278F70;
loc_83278F6C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83278F70:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83279268
	if (ctx.cr0.eq) goto loc_83279268;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83279268
	if (ctx.cr6.eq) goto loc_83279268;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x83279268
	if (!ctx.cr6.eq) goto loc_83279268;
	// rlwinm. r11,r11,8,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83279268
	if (ctx.cr0.eq) goto loc_83279268;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f15c8
	ctx.lr = 0x83278FA4;
	sub_832F15C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83279268
	if (ctx.cr0.eq) goto loc_83279268;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r28,r11,13,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_83278FC8:
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x83279088
	if (!ctx.cr6.lt) goto loc_83279088;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// rlwinm r11,r11,19,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1FFF;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x83278fec
	if (!ctx.cr6.gt) goto loc_83278FEC;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_83278FEC:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_83278FF4:
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x83279020
	if (!ctx.cr6.lt) goto loc_83279020;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8327902c
	if (ctx.cr6.eq) goto loc_8327902C;
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r27,r7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x83279024
	if (ctx.cr6.eq) goto loc_83279024;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x83278ff4
	goto loc_83278FF4;
loc_83279020:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83279024:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8327907c
	if (!ctx.cr6.eq) goto loc_8327907C;
loc_8327902C:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r29,44
	ctx.r10.s64 = ctx.r29.s64 + 44;
	// rlwinm r9,r9,13,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
loc_8327903C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83279070
	if (!ctx.cr6.lt) goto loc_83279070;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83279060
	if (ctx.cr6.eq) goto loc_83279060;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x8327903c
	goto loc_8327903C;
loc_83279060:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x8327907c
	goto loc_8327907C;
loc_83279070:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8327907C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// b 0x83278fc8
	goto loc_83278FC8;
loc_83279088:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832790a0
	if (!ctx.cr6.eq) goto loc_832790A0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// subf. r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83279288
	if (ctx.cr0.eq) goto loc_83279288;
loc_832790A0:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// rlwinm r11,r11,19,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1FFF;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832790b8
	if (!ctx.cr6.gt) goto loc_832790B8;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_832790B8:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r28,44
	ctx.r29.s64 = ctx.r28.s64 + 44;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r7,r10,13,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832790DC:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83279134
	if (!ctx.cr6.lt) goto loc_83279134;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r4,r22
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x83279128
	if (!ctx.cr6.eq) goto loc_83279128;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r4,r16,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r10,r10,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// andc r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// slw r3,r16,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r4.u8 & 0x3F));
	// slw r4,r5,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// andc r3,r23,r3
	ctx.r3.u64 = ctx.r23.u64 & ~ctx.r3.u64;
	// or r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r23,r3,r4
	ctx.r23.u64 = ctx.r3.u64 | ctx.r4.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_83279128:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x832790dc
	goto loc_832790DC;
loc_83279134:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83232ed8
	ctx.lr = 0x83279144;
	sub_83232ED8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83234f98
	ctx.lr = 0x8327915C;
	sub_83234F98(ctx, base);
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_832791A0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83279218
	if (!ctx.cr6.lt) goto loc_83279218;
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x8327920c
	if (!ctx.cr6.eq) goto loc_8327920C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x832791d4
	goto loc_832791D4;
loc_832791CC:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_832791D4:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x832791cc
	if (!ctx.cr6.eq) goto loc_832791CC;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x83229e40
	ctx.lr = 0x83279200;
	sub_83229E40(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8327920C:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x832791a0
	goto loc_832791A0;
loc_83279218:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83233190
	ctx.lr = 0x83279220;
	sub_83233190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324c880
	ctx.lr = 0x83279228;
	sub_8324C880(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x83275bd0
	ctx.lr = 0x83279240;
	sub_83275BD0(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83279260
	if (ctx.cr0.eq) goto loc_83279260;
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832762e0
	ctx.lr = 0x83279260;
	sub_832762E0(ctx, base);
loc_83279260:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8327927c
	if (ctx.cr6.eq) goto loc_8327927C;
loc_83279268:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x83278f3c
	if (!ctx.cr6.eq) goto loc_83278F3C;
	// addi r19,r20,8
	ctx.r19.s64 = ctx.r20.s64 + 8;
	// b 0x83278f3c
	goto loc_83278F3C;
loc_8327927C:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// b 0x83278f20
	goto loc_83278F20;
loc_83279288:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83279320
	if (!ctx.cr6.gt) goto loc_83279320;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832f0448
	ctx.lr = 0x832792AC;
	sub_832F0448(ctx, base);
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r28,r10,-36
	ctx.r28.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r28,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r28.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x832765b8
	ctx.lr = 0x832792FC;
	sub_832765B8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83275f30
	ctx.lr = 0x8327930C;
	sub_83275F30(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x8327931C;
	sub_832F6CC8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_83279320:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83275f30
	ctx.lr = 0x8327932C;
	sub_83275F30(ctx, base);
loc_8327932C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x832778c0
	goto loc_832778C0;
loc_83279338:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// ble cr6,0x83279358
	if (!ctx.cr6.gt) goto loc_83279358;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83276420
	ctx.lr = 0x83279354;
	sub_83276420(ctx, base);
	// b 0x8327932c
	goto loc_8327932C;
loc_83279358:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x83279394
	if (ctx.cr6.eq) goto loc_83279394;
	// addi r11,r14,10
	ctx.r11.s64 = ctx.r14.s64 + 10;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_83279378:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// bne 0x83279378
	if (!ctx.cr0.eq) goto loc_83279378;
loc_83279394:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83279398:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832793A8"))) PPC_WEAK_FUNC(sub_832793A8);
PPC_FUNC_IMPL(__imp__sub_832793A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x832793B0;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addi r11,r11,-972
	ctx.r11.s64 = ctx.r11.s64 + -972;
	// addi r10,r10,-472
	ctx.r10.s64 = ctx.r10.s64 + -472;
	// lfs f31,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// stw r23,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r23.u32);
	// li r21,1
	ctx.r21.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r20,57
	ctx.r20.s64 = 57;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_832793EC:
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327941c
	if (ctx.cr0.eq) goto loc_8327941C;
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83279410
	if (ctx.cr0.eq) goto loc_83279410;
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// addi r10,r23,32
	ctx.r10.s64 = ctx.r23.s64 + 32;
	// b 0x83279424
	goto loc_83279424;
loc_83279410:
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// addi r10,r23,24
	ctx.r10.s64 = ctx.r23.s64 + 24;
	// b 0x83279424
	goto loc_83279424;
loc_8327941C:
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// addi r10,r23,16
	ctx.r10.s64 = ctx.r23.s64 + 16;
loc_83279424:
	// li r16,0
	ctx.r16.s64 = 0;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83279434
	if (!ctx.cr0.eq) goto loc_83279434;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
loc_83279434:
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
loc_8327943C:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8327b240
	if (ctx.cr6.eq) goto loc_8327B240;
	// lwz r11,16(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// rlwinm r11,r11,0,13,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFE7FFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r11,16(r16)
	PPC_STORE_U32(ctx.r16.u32 + 16, ctx.r11.u32);
	// bl 0x832539a0
	ctx.lr = 0x83279468;
	sub_832539A0(ctx, base);
	// addi r11,r23,32
	ctx.r11.s64 = ctx.r23.s64 + 32;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83279484
	if (!ctx.cr6.eq) goto loc_83279484;
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14848
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14848, ctx.xer);
	// bne cr6,0x83279494
	if (!ctx.cr6.eq) goto loc_83279494;
loc_83279484:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321d798
	ctx.lr = 0x8327948C;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327b198
	if (!ctx.cr0.eq) goto loc_8327B198;
loc_83279494:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// bne cr6,0x832794b0
	if (!ctx.cr6.eq) goto loc_832794B0;
	// lwz r10,52(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 52);
	// rlwinm. r10,r10,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b088
	if (!ctx.cr0.eq) goto loc_8327B088;
loc_832794B0:
	// cmplwi cr6,r11,104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 104, ctx.xer);
	// bne cr6,0x83279530
	if (!ctx.cr6.eq) goto loc_83279530;
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83279530
	if (!ctx.cr6.eq) goto loc_83279530;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,44(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x832fa818
	ctx.lr = 0x832794DC;
	sub_832FA818(ctx, base);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x83279530
	if (!ctx.cr6.eq) goto loc_83279530;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x83279508;
	sub_8321CE60(ctx, base);
	// addi r10,r31,-8
	ctx.r10.s64 = ctx.r31.s64 + -8;
	// lwz r11,12(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 * 40;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x8327b18c
	if (ctx.cr6.eq) goto loc_8327B18C;
loc_83279530:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x83279680
	if (ctx.cr6.eq) goto loc_83279680;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_83279548:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832795d4
	if (ctx.cr6.eq) goto loc_832795D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832795c0
	if (ctx.cr0.eq) goto loc_832795C0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x83279580
	if (ctx.cr6.eq) goto loc_83279580;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83279584
	if (!ctx.cr6.eq) goto loc_83279584;
loc_83279580:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83279584:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832795c0
	if (!ctx.cr0.eq) goto loc_832795C0;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x832795c0
	if (ctx.cr6.eq) goto loc_832795C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83276f48
	ctx.lr = 0x832795A8;
	sub_83276F48(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-14080
	ctx.r11.s64 = ctx.r11.s64 + -14080;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_832795C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83279548
	if (!ctx.cr6.eq) goto loc_83279548;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// b 0x83279548
	goto loc_83279548;
loc_832795D4:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x832795f0
	if (ctx.cr6.eq) goto loc_832795F0;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x832795f4
	if (!ctx.cr6.eq) goto loc_832795F4;
loc_832795F0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_832795F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83279678
	if (!ctx.cr0.eq) goto loc_83279678;
	// addi r30,r16,4
	ctx.r30.s64 = ctx.r16.s64 + 4;
loc_83279600:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83279678
	if (ctx.cr6.eq) goto loc_83279678;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83279664
	if (ctx.cr6.eq) goto loc_83279664;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83279664
	if (ctx.cr0.eq) goto loc_83279664;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x83279664
	if (ctx.cr6.eq) goto loc_83279664;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x83279664
	if (ctx.cr6.eq) goto loc_83279664;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83276f48
	ctx.lr = 0x83279650;
	sub_83276F48(ctx, base);
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x83279664
	if (!ctx.cr6.eq) goto loc_83279664;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_83279664:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83279600
	if (!ctx.cr6.eq) goto loc_83279600;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// b 0x83279600
	goto loc_83279600;
loc_83279678:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832793ec
	if (!ctx.cr0.eq) goto loc_832793EC;
loc_83279680:
	// lwz r26,4(r16)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// addi r14,r16,4
	ctx.r14.s64 = ctx.r16.s64 + 4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8327968C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832796c0
	if (ctx.cr6.eq) goto loc_832796C0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832796b8
	if (ctx.cr6.eq) goto loc_832796B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832796b8
	if (ctx.cr0.eq) goto loc_832796B8;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// or r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 | ctx.r28.u64;
	// and r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 & ctx.r27.u64;
loc_832796B8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8327968c
	goto loc_8327968C;
loc_832796C0:
	// rlwinm. r11,r28,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832796f0
	if (ctx.cr0.eq) goto loc_832796F0;
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x832796e4
	if (ctx.cr6.eq) goto loc_832796E4;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x832796e8
	if (!ctx.cr6.eq) goto loc_832796E8;
loc_832796E4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_832796E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327b220
	if (ctx.cr0.eq) goto loc_8327B220;
loc_832796F0:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83279e7c
	if (ctx.cr0.eq) goto loc_83279E7C;
	// clrlwi r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x832797d0
	if (!ctx.cr6.eq) goto loc_832797D0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83252e88
	ctx.lr = 0x83279710;
	sub_83252E88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832797d4
	if (!ctx.cr0.eq) goto loc_832797D4;
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// beq cr6,0x83279730
	if (ctx.cr6.eq) goto loc_83279730;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x832797d0
	if (!ctx.cr6.eq) goto loc_832797D0;
loc_83279730:
	// lwz r29,0(r16)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
loc_83279734:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832797d4
	if (ctx.cr6.eq) goto loc_832797D4;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r31,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832797c8
	if (ctx.cr0.eq) goto loc_832797C8;
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83252e88
	ctx.lr = 0x83279754;
	sub_83252E88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832797d0
	if (ctx.cr0.eq) goto loc_832797D0;
	// rlwinm. r10,r31,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r31,27
	ctx.r11.u64 = ctx.r31.u32 & 0x1F;
	// beq 0x83279770
	if (ctx.cr0.eq) goto loc_83279770;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83279778
	goto loc_83279778;
loc_83279770:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_83279778:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832797d0
	if (ctx.cr0.eq) goto loc_832797D0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r10,r11,8,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83279794
	if (ctx.cr0.eq) goto loc_83279794;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832797d0
	if (ctx.cr0.eq) goto loc_832797D0;
loc_83279794:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83279798:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832797c8
	if (ctx.cr6.eq) goto loc_832797C8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832797c0
	if (ctx.cr6.eq) goto loc_832797C0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832797c0
	if (ctx.cr0.eq) goto loc_832797C0;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832797d0
	if (ctx.cr0.eq) goto loc_832797D0;
loc_832797C0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83279798
	goto loc_83279798;
loc_832797C8:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x83279734
	goto loc_83279734;
loc_832797D0:
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_832797D4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83279e60
	if (ctx.cr0.eq) goto loc_83279E60;
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// stw r11,8(r16)
	PPC_STORE_U32(ctx.r16.u32 + 8, ctx.r11.u32);
	// addi r11,r10,-15104
	ctx.r11.s64 = ctx.r10.s64 + -15104;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8327989c
	if (!ctx.cr0.eq) goto loc_8327989C;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_83279804:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83279888
	if (ctx.cr6.eq) goto loc_83279888;
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83279880
	if (ctx.cr6.eq) goto loc_83279880;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r6,r11,0,4,6
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x83279880
	if (ctx.cr0.eq) goto loc_83279880;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83279880
	if (ctx.cr0.eq) goto loc_83279880;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x83279868
	if (!ctx.cr6.eq) goto loc_83279868;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83279858
	if (ctx.cr6.eq) goto loc_83279858;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// bne cr6,0x8327985c
	if (!ctx.cr6.eq) goto loc_8327985C;
loc_83279858:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327985C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83279868
	if (ctx.cr0.eq) goto loc_83279868;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_83279868:
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x83279880
	if (!ctx.cr6.gt) goto loc_83279880;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_83279880:
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x83279804
	goto loc_83279804;
loc_83279888:
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8327989c
	if (ctx.cr6.lt) goto loc_8327989C;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_8327989C:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83279c00
	if (!ctx.cr0.eq) goto loc_83279C00;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
loc_832798AC:
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83279e7c
	if (ctx.cr6.eq) goto loc_83279E7C;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83279bec
	if (ctx.cr6.eq) goto loc_83279BEC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r10,r11,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83279bec
	if (ctx.cr0.eq) goto loc_83279BEC;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83279bec
	if (ctx.cr0.eq) goto loc_83279BEC;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83279910
	if (ctx.cr6.eq) goto loc_83279910;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r9,r11,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r8,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
loc_832798F4:
	// srw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r8,r21,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r8.u8 & 0x3F));
	// or r27,r8,r27
	ctx.r27.u64 = ctx.r8.u64 | ctx.r27.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x832798f4
	if (!ctx.cr0.eq) goto loc_832798F4;
loc_83279910:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lbz r30,-1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// bl 0x83232e10
	ctx.lr = 0x83279928;
	sub_83232E10(ctx, base);
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r27,32
	ctx.r9.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83232570
	ctx.lr = 0x83279968;
	sub_83232570(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r30,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r26,16(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r30,28(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x83279994
	if (!ctx.cr6.eq) goto loc_83279994;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83279994
	if (ctx.cr6.eq) goto loc_83279994;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x83279a94
	goto loc_83279A94;
loc_83279994:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83234f98
	ctx.lr = 0x832799AC;
	sub_83234F98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x83279a4c
	if (ctx.cr6.eq) goto loc_83279A4C;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r7.u32);
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x83279a0c
	if (ctx.cr6.eq) goto loc_83279A0C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83279a10
	if (!ctx.cr6.eq) goto loc_83279A10;
loc_83279A0C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83279A10:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83279a88
	if (!ctx.cr0.eq) goto loc_83279A88;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_83279A1C:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83279a88
	if (ctx.cr6.eq) goto loc_83279A88;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83276f48
	ctx.lr = 0x83279A38;
	sub_83276F48(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83279a1c
	if (!ctx.cr6.eq) goto loc_83279A1C;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// b 0x83279a1c
	goto loc_83279A1C;
loc_83279A4C:
	// rlwinm r11,r16,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_83279A88:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83279A94:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x83279b40
	if (!ctx.cr6.eq) goto loc_83279B40;
	// addi r7,r26,4
	ctx.r7.s64 = ctx.r26.s64 + 4;
loc_83279AA8:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83279bc8
	if (ctx.cr6.eq) goto loc_83279BC8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83279b2c
	if (ctx.cr6.eq) goto loc_83279B2C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x83279ad8
	goto loc_83279AD8;
loc_83279AD0:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_83279AD8:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83279ad0
	if (!ctx.cr6.eq) goto loc_83279AD0;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// clrlwi. r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq 0x83279b20
	if (ctx.cr0.eq) goto loc_83279B20;
	// rlwinm. r6,r8,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x83279b20
	if (ctx.cr0.eq) goto loc_83279B20;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_83279B20:
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwimi r9,r10,0,0,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFE0) | (ctx.r9.u64 & 0xFFFFFFFF0000001F);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_83279B2C:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83279aa8
	if (!ctx.cr6.eq) goto loc_83279AA8;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// b 0x83279aa8
	goto loc_83279AA8;
loc_83279B40:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83279b58
	goto loc_83279B58;
loc_83279B50:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_83279B58:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x83279b50
	if (!ctx.cr6.eq) goto loc_83279B50;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r9,r27,r9
	ctx.r9.u64 = ctx.r27.u64 + ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r8,r10,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// lbz r11,-1(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// srw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r7,r10,26,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r9,r10,28,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r7,r8,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r11,r7,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_83279BC8:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x83279bec
	if (!ctx.cr6.eq) goto loc_83279BEC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x83279BEC;
	sub_832F6CC8(ctx, base);
loc_83279BEC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x832798ac
	if (!ctx.cr6.eq) goto loc_832798AC;
	// addi r24,r28,8
	ctx.r24.s64 = ctx.r28.s64 + 8;
	// b 0x832798ac
	goto loc_832798AC;
loc_83279C00:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
loc_83279C08:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83279c6c
	if (ctx.cr6.eq) goto loc_83279C6C;
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83279c64
	if (ctx.cr6.eq) goto loc_83279C64;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r10,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83279c64
	if (ctx.cr0.eq) goto loc_83279C64;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83279c64
	if (ctx.cr0.eq) goto loc_83279C64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83279c60
	if (ctx.cr6.eq) goto loc_83279C60;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83279C44:
	// srw r6,r9,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r6,r21,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r6.u8 & 0x3F));
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x83279c44
	if (!ctx.cr0.eq) goto loc_83279C44;
loc_83279C60:
	// or r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 | ctx.r8.u64;
loc_83279C64:
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// b 0x83279c08
	goto loc_83279C08;
loc_83279C6C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r29,-1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// bl 0x83232e10
	ctx.lr = 0x83279C84;
	sub_83232E10(ctx, base);
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83232570
	ctx.lr = 0x83279CC4;
	sub_83232570(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r29,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15104
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15104, ctx.xer);
	// bne cr6,0x83279ce8
	if (!ctx.cr6.eq) goto loc_83279CE8;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83279CE8:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83234f98
	ctx.lr = 0x83279D00;
	sub_83234F98(ctx, base);
	// addi r11,r23,16
	ctx.r11.s64 = ctx.r23.s64 + 16;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83279d48
	if (!ctx.cr6.eq) goto loc_83279D48;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,28(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// addi r10,r23,24
	ctx.r10.s64 = ctx.r23.s64 + 24;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,28(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,28(r23)
	PPC_STORE_U32(ctx.r23.u32 + 28, ctx.r7.u32);
	// b 0x83279d80
	goto loc_83279D80;
loc_83279D48:
	// rlwinm r11,r16,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_83279D80:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_83279D90:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83279e7c
	if (ctx.cr6.eq) goto loc_83279E7C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83279e4c
	if (ctx.cr6.eq) goto loc_83279E4C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83279e4c
	if (ctx.cr0.eq) goto loc_83279E4C;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83279e4c
	if (ctx.cr0.eq) goto loc_83279E4C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x83279dd4
	goto loc_83279DD4;
loc_83279DCC:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_83279DD4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83279dcc
	if (!ctx.cr6.eq) goto loc_83279DCC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lbz r7,-1(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + -1);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// rlwinm r9,r10,27,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x6;
	// rlwinm r6,r10,29,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x6;
	// srw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r6,r7,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r6,r9,2,28,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,31,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x6;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// srw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r6,r6,28
	ctx.r6.u64 = ctx.r6.u32 & 0xF;
	// srw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r9,r6,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r9,r5,0,29,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFE007;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83279E4C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83279d90
	if (!ctx.cr6.eq) goto loc_83279D90;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x83279d90
	goto loc_83279D90;
loc_83279E60:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83252e88
	ctx.lr = 0x83279E68;
	sub_83252E88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83279ee8
	if (ctx.cr0.eq) goto loc_83279EE8;
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r16)
	PPC_STORE_U32(ctx.r16.u32 + 8, ctx.r11.u32);
loc_83279E7C:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// beq cr6,0x83279e9c
	if (ctx.cr6.eq) goto loc_83279E9C;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// beq cr6,0x83279e9c
	if (ctx.cr6.eq) goto loc_83279E9C;
	// cmplwi cr6,r11,104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 104, ctx.xer);
	// bne cr6,0x8327a36c
	if (!ctx.cr6.eq) goto loc_8327A36C;
loc_83279E9C:
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
loc_83279EA0:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8327a36c
	if (ctx.cr6.eq) goto loc_8327A36C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327a358
	if (ctx.cr0.eq) goto loc_8327A358;
	// rlwinm r4,r11,0,27,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// lwz r27,12(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83253050
	ctx.lr = 0x83279EC8;
	sub_83253050(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327a128
	if (ctx.cr0.eq) goto loc_8327A128;
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8327a358
	if (!ctx.cr6.eq) goto loc_8327A358;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// b 0x8327a0e8
	goto loc_8327A0E8;
loc_83279EE8:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
loc_83279EEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83279f28
	if (ctx.cr6.eq) goto loc_83279F28;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83279f20
	if (ctx.cr0.eq) goto loc_83279F20;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm. r8,r10,8,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83279f20
	if (ctx.cr0.eq) goto loc_83279F20;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
loc_83279F20:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x83279eec
	goto loc_83279EEC;
loc_83279F28:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
loc_83279F2C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83279e7c
	if (ctx.cr6.eq) goto loc_83279E7C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83279f54
	if (ctx.cr6.eq) goto loc_83279F54;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83279f54
	if (ctx.cr0.eq) goto loc_83279F54;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83279F54:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83279f2c
	goto loc_83279F2C;
loc_83279F5C:
	// rlwinm r10,r11,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lwz r9,28(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwz r31,12(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8327a128
	if (!ctx.cr6.eq) goto loc_8327A128;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r8,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327a128
	if (!ctx.cr0.eq) goto loc_8327A128;
	// rlwinm. r9,r8,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// beq 0x83279fac
	if (ctx.cr0.eq) goto loc_83279FAC;
	// rlwinm. r9,r11,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83279fac
	if (ctx.cr0.eq) goto loc_83279FAC;
loc_83279FA4:
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83279fd4
	goto loc_83279FD4;
loc_83279FAC:
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83279fbc
	if (ctx.cr0.eq) goto loc_83279FBC;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83279fa4
	if (!ctx.cr0.eq) goto loc_83279FA4;
loc_83279FBC:
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83279fd0
	if (ctx.cr0.eq) goto loc_83279FD0;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne 0x83279fd4
	if (!ctx.cr0.eq) goto loc_83279FD4;
loc_83279FD0:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
loc_83279FD4:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327a128
	if (ctx.cr0.eq) goto loc_8327A128;
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83279ff0
	if (ctx.cr0.eq) goto loc_83279FF0;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83279ff0
	if (ctx.cr0.eq) goto loc_83279FF0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_83279FF0:
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327a004
	if (ctx.cr0.eq) goto loc_8327A004;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8327A004:
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327a018
	if (ctx.cr0.eq) goto loc_8327A018;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327a018
	if (ctx.cr0.eq) goto loc_8327A018;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_8327A018:
	// lwz r9,0(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// or r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r6,r8,27,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8327a03c
	if (ctx.cr6.eq) goto loc_8327A03C;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// bne cr6,0x8327a040
	if (!ctx.cr6.eq) goto loc_8327A040;
loc_8327A03C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327A040:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327a064
	if (!ctx.cr0.eq) goto loc_8327A064;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83276050
	ctx.lr = 0x8327A05C;
	sub_83276050(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8327b1a8
	if (!ctx.cr0.eq) goto loc_8327B1A8;
loc_8327A064:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8327a07c
	goto loc_8327A07C;
loc_8327A074:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_8327A07C:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8327a074
	if (!ctx.cr6.eq) goto loc_8327A074;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r6,5,22,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0x3E0;
	// clrlwi r8,r7,27
	ctx.r8.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r9,r9,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r9,r9,7296
	ctx.r9.u64 = ctx.r9.u64 | 7296;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r11,r11,0,24,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8321d798
	ctx.lr = 0x8327A0CC;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327a0e0
	if (ctx.cr0.eq) goto loc_8327A0E0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x832f6f50
	ctx.lr = 0x8327A0E0;
	sub_832F6F50(ctx, base);
loc_8327A0E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8327A0E8:
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x83279f5c
	if (ctx.cr6.eq) goto loc_83279F5C;
	// rlwinm. r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327a128
	if (!ctx.cr0.eq) goto loc_8327A128;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8327a11c
	if (ctx.cr6.eq) goto loc_8327A11C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8327a120
	if (!ctx.cr6.eq) goto loc_8327A120;
loc_8327A11C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8327A120:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327a358
	if (ctx.cr0.eq) goto loc_8327A358;
loc_8327A128:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r28,28(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8327a174
	if (!ctx.cr6.eq) goto loc_8327A174;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327a15c
	if (ctx.cr6.eq) goto loc_8327A15C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// bne cr6,0x8327a160
	if (!ctx.cr6.eq) goto loc_8327A160;
loc_8327A15C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327A160:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327a178
	if (!ctx.cr0.eq) goto loc_8327A178;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327a178
	if (!ctx.cr0.eq) goto loc_8327A178;
loc_8327A174:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_8327A178:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// rlwinm r8,r11,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x832f02e0
	ctx.lr = 0x8327A198;
	sub_832F02E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8327a1f0
	if (!ctx.cr6.eq) goto loc_8327A1F0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83229bf0
	ctx.lr = 0x8327A1AC;
	sub_83229BF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327a1f0
	if (ctx.cr0.eq) goto loc_8327A1F0;
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// b 0x8327a228
	goto loc_8327A228;
loc_8327A1F0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,28(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r10,r29,24
	ctx.r10.s64 = ctx.r29.s64 + 24;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,28(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r7.u32);
loc_8327A228:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83232fe0
	ctx.lr = 0x8327A234;
	sub_83232FE0(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83232fe0
	ctx.lr = 0x8327A244;
	sub_83232FE0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8327a260
	goto loc_8327A260;
loc_8327A258:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_8327A260:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8327a258
	if (!ctx.cr6.eq) goto loc_8327A258;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r11,r20,7,19,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r20.u32, 7) & 0x1FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE000);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8327a328
	if (ctx.cr6.eq) goto loc_8327A328;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8327a330
	if (!ctx.cr6.eq) goto loc_8327A330;
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8327a328
	if (!ctx.cr6.eq) goto loc_8327A328;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
loc_8327A2B0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327a314
	if (ctx.cr6.eq) goto loc_8327A314;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8327a300
	if (ctx.cr6.eq) goto loc_8327A300;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8327a2e0
	goto loc_8327A2E0;
loc_8327A2D8:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_8327A2E0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8327a2d8
	if (!ctx.cr6.eq) goto loc_8327A2D8;
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
loc_8327A300:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8327a2b0
	if (!ctx.cr6.eq) goto loc_8327A2B0;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8327a2b0
	goto loc_8327A2B0;
loc_8327A314:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x8327A328;
	sub_832F6CC8(ctx, base);
loc_8327A328:
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x832793ec
	if (ctx.cr6.eq) goto loc_832793EC;
loc_8327A330:
	// lbz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327a358
	if (ctx.cr0.eq) goto loc_8327A358;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83233190
	ctx.lr = 0x8327A344;
	sub_83233190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324c880
	ctx.lr = 0x8327A34C;
	sub_8324C880(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8327A358:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83279ea0
	if (!ctx.cr6.eq) goto loc_83279EA0;
	// addi r26,r30,4
	ctx.r26.s64 = ctx.r30.s64 + 4;
	// b 0x83279ea0
	goto loc_83279EA0;
loc_8327A36C:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x8327a5b4
	if (!ctx.cr6.eq) goto loc_8327A5B4;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r16,44
	ctx.r27.s64 = ctx.r16.s64 + 44;
loc_8327A384:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8327a5b4
	if (!ctx.cr6.lt) goto loc_8327A5B4;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x8327a4b4
	goto loc_8327A4B4;
loc_8327A39C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327a4cc
	if (!ctx.cr0.eq) goto loc_8327A4CC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r8,r11,0,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// beq 0x8327a3e0
	if (ctx.cr0.eq) goto loc_8327A3E0;
	// rlwinm. r9,r11,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327a3e0
	if (ctx.cr0.eq) goto loc_8327A3E0;
loc_8327A3D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8327a408
	goto loc_8327A408;
loc_8327A3E0:
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327a3f0
	if (ctx.cr0.eq) goto loc_8327A3F0;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8327a3d8
	if (!ctx.cr0.eq) goto loc_8327A3D8;
loc_8327A3F0:
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327a404
	if (ctx.cr0.eq) goto loc_8327A404;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x8327a408
	if (!ctx.cr0.eq) goto loc_8327A408;
loc_8327A404:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8327A408:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327a4cc
	if (ctx.cr0.eq) goto loc_8327A4CC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8327a42c
	goto loc_8327A42C;
loc_8327A424:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_8327A42C:
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8327a424
	if (!ctx.cr6.eq) goto loc_8327A424;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwimi r10,r11,0,27,18
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFFFFFE01F) | (ctx.r10.u64 & 0x1FE0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327a47c
	if (ctx.cr0.eq) goto loc_8327A47C;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327a47c
	if (ctx.cr0.eq) goto loc_8327A47C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8327A47C:
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327a490
	if (ctx.cr0.eq) goto loc_8327A490;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8327A490:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327a4a4
	if (ctx.cr0.eq) goto loc_8327A4A4;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327a4a4
	if (ctx.cr0.eq) goto loc_8327A4A4;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8327A4A4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r9,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8327A4B4:
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x8327a39c
	if (ctx.cr6.eq) goto loc_8327A39C;
	// b 0x8327a5a8
	goto loc_8327A5A8;
loc_8327A4CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83234f98
	ctx.lr = 0x8327A4E0;
	sub_83234F98(ctx, base);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8327A4E8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8327a510
	if (ctx.cr6.eq) goto loc_8327A510;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327a508
	if (!ctx.cr0.eq) goto loc_8327A508;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83232fe0
	ctx.lr = 0x8327A508;
	sub_83232FE0(ctx, base);
loc_8327A508:
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8327a4e8
	goto loc_8327A4E8;
loc_8327A510:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r30,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8327a560
	goto loc_8327A560;
loc_8327A558:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_8327A560:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8327a558
	if (!ctx.cr6.eq) goto loc_8327A558;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r20,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r20.u32, 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83233190
	ctx.lr = 0x8327A594;
	sub_83233190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8324c880
	ctx.lr = 0x8327A59C;
	sub_8324C880(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8327A5A8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x8327a384
	goto loc_8327A384;
loc_8327A5B4:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r9,r11,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8327a5d0
	if (ctx.cr6.lt) goto loc_8327A5D0;
	// cmplwi cr6,r9,102
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 102, ctx.xer);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// ble cr6,0x8327a5d4
	if (!ctx.cr6.gt) goto loc_8327A5D4;
loc_8327A5D0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8327A5D4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327a5ec
	if (!ctx.cr0.eq) goto loc_8327A5EC;
	// cmplwi cr6,r9,105
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 105, ctx.xer);
	// beq cr6,0x8327a5ec
	if (ctx.cr6.eq) goto loc_8327A5EC;
	// cmplwi cr6,r9,104
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 104, ctx.xer);
	// bne cr6,0x8327ab4c
	if (!ctx.cr6.eq) goto loc_8327AB4C;
loc_8327A5EC:
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r18,0
	ctx.r18.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// beq 0x8327a890
	if (ctx.cr0.eq) goto loc_8327A890;
	// addi r21,r16,44
	ctx.r21.s64 = ctx.r16.s64 + 44;
loc_8327A614:
	// lwz r30,0(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r27,r28,7,29,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8327a878
	if (ctx.cr0.eq) goto loc_8327A878;
	// clrlwi r25,r28,27
	ctx.r25.u64 = ctx.r28.u32 & 0x1F;
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83253050
	ctx.lr = 0x8327A638;
	sub_83253050(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bne 0x8327a6d4
	if (!ctx.cr0.eq) goto loc_8327A6D4;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8327a65c
	if (ctx.cr6.eq) goto loc_8327A65C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8327a660
	if (!ctx.cr6.eq) goto loc_8327A660;
loc_8327A65C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8327A660:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327a770
	if (!ctx.cr0.eq) goto loc_8327A770;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83229bf0
	ctx.lr = 0x8327A670;
	sub_83229BF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327a688
	if (ctx.cr0.eq) goto loc_8327A688;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r29,r11,0,30,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFFFC);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x8327a698
	goto loc_8327A698;
loc_8327A688:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r5,r11,2
	ctx.r5.u64 = ctx.r11.u64 | 2;
loc_8327A698:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x832f58a0
	ctx.lr = 0x8327A6A8;
	sub_832F58A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327a878
	if (!ctx.cr0.eq) goto loc_8327A878;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83233190
	ctx.lr = 0x8327A6BC;
	sub_83233190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324c880
	ctx.lr = 0x8327A6C4;
	sub_8324C880(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8327a878
	goto loc_8327A878;
loc_8327A6D4:
	// rlwinm r26,r11,25,25,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r26,125
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 125, ctx.xer);
	// beq cr6,0x8327a6ec
	if (ctx.cr6.eq) goto loc_8327A6EC;
	// cmplwi cr6,r26,124
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8327a6f0
	if (!ctx.cr6.eq) goto loc_8327A6F0;
loc_8327A6EC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8327A6F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327a79c
	if (ctx.cr0.eq) goto loc_8327A79C;
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r31,r11,25,25,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r31,96
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 96, ctx.xer);
	// blt cr6,0x8327a714
	if (ctx.cr6.lt) goto loc_8327A714;
	// cmplwi cr6,r31,102
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8327a718
	if (!ctx.cr6.gt) goto loc_8327A718;
loc_8327A714:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327A718:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327a768
	if (ctx.cr0.eq) goto loc_8327A768;
	// cmplwi cr6,r26,124
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 124, ctx.xer);
	// bne cr6,0x8327a770
	if (!ctx.cr6.eq) goto loc_8327A770;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x8327A740;
	sub_8321CE60(ctx, base);
	// addi r10,r29,-8
	ctx.r10.s64 = ctx.r29.s64 + -8;
	// lwz r11,12(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 * 40;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x8327a770
	if (!ctx.cr6.eq) goto loc_8327A770;
loc_8327A768:
	// cmplwi cr6,r31,104
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 104, ctx.xer);
	// bne cr6,0x8327a794
	if (!ctx.cr6.eq) goto loc_8327A794;
loc_8327A770:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83277388
	ctx.lr = 0x8327A784;
	sub_83277388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r17,24
	ctx.r10.u64 = ctx.r17.u32 & 0xFF;
	// or r17,r11,r10
	ctx.r17.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x8327a878
	goto loc_8327A878;
loc_8327A794:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x8327a7d4
	goto loc_8327A7D4;
loc_8327A79C:
	// cmplwi cr6,r26,118
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 118, ctx.xer);
	// bne cr6,0x8327a85c
	if (!ctx.cr6.eq) goto loc_8327A85C;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8327a7c8
	if (ctx.cr6.eq) goto loc_8327A7C8;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8327a7cc
	if (!ctx.cr6.eq) goto loc_8327A7CC;
loc_8327A7C8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8327A7CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327b234
	if (ctx.cr0.eq) goto loc_8327B234;
loc_8327A7D4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8327a85c
	if (ctx.cr6.eq) goto loc_8327A85C;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm. r9,r28,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r7,r11,r24
	ctx.r7.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r24.u8 & 0x3F));
	// or r18,r18,r7
	ctx.r18.u64 = ctx.r18.u64 | ctx.r7.u64;
	// beq 0x8327a7f4
	if (ctx.cr0.eq) goto loc_8327A7F4;
	// or r23,r23,r7
	ctx.r23.u64 = ctx.r23.u64 | ctx.r7.u64;
loc_8327A7F4:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x8327a80c
	if (!ctx.cr6.eq) goto loc_8327A80C;
	// or r22,r22,r7
	ctx.r22.u64 = ctx.r22.u64 | ctx.r7.u64;
	// b 0x8327a85c
	goto loc_8327A85C;
loc_8327A80C:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8327a85c
	if (!ctx.cr6.eq) goto loc_8327A85C;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8327a85c
	if (ctx.cr6.eq) goto loc_8327A85C;
	// rlwinm r9,r28,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327A828:
	// srw r10,r9,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8327a858
	if (ctx.cr6.lt) goto loc_8327A858;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8327a828
	if (ctx.cr6.lt) goto loc_8327A828;
	// b 0x8327a85c
	goto loc_8327A85C;
loc_8327A858:
	// or r20,r20,r7
	ctx.r20.u64 = ctx.r20.u64 | ctx.r7.u64;
loc_8327A85C:
	// rlwinm. r11,r25,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327a86c
	if (!ctx.cr0.eq) goto loc_8327A86C;
	// cmplwi cr6,r26,118
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 118, ctx.xer);
	// bne cr6,0x8327a878
	if (!ctx.cr6.eq) goto loc_8327A878;
loc_8327A86C:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r24.u8 & 0x3F));
	// or r19,r11,r19
	ctx.r19.u64 = ctx.r11.u64 | ctx.r19.u64;
loc_8327A878:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8327a614
	if (ctx.cr6.lt) goto loc_8327A614;
loc_8327A890:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8327a9f8
	if (ctx.cr6.eq) goto loc_8327A9F8;
	// cmplw cr6,r23,r18
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x8327a9f8
	if (ctx.cr6.eq) goto loc_8327A9F8;
	// and r11,r22,r23
	ctx.r11.u64 = ctx.r22.u64 & ctx.r23.u64;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x8327a8b8
	if (!ctx.cr6.eq) goto loc_8327A8B8;
	// andc. r10,r20,r23
	ctx.r10.u64 = ctx.r20.u64 & ~ctx.r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327a8c0
	if (ctx.cr0.eq) goto loc_8327A8C0;
loc_8327A8B8:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// subf r23,r11,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r11.s64;
loc_8327A8C0:
	// and. r25,r22,r23
	ctx.r25.u64 = ctx.r22.u64 & ctx.r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// nor r11,r22,r23
	ctx.r11.u64 = ~(ctx.r22.u64 | ctx.r23.u64);
	// bne 0x8327a8d0
	if (!ctx.cr0.eq) goto loc_8327A8D0;
	// andc r11,r23,r22
	ctx.r11.u64 = ctx.r23.u64 & ~ctx.r22.u64;
loc_8327A8D0:
	// and r26,r11,r18
	ctx.r26.u64 = ctx.r11.u64 & ctx.r18.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8327a9f8
	if (ctx.cr6.eq) goto loc_8327A9F8;
	// li r20,57
	ctx.r20.s64 = 57;
loc_8327A8E0:
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// andc r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 & ~ctx.r11.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r26,r11,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r11.s64;
	// subfic r11,r10,42
	ctx.xer.ca = ctx.r10.u32 <= 42;
	ctx.r11.s64 = 42 - ctx.r10.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r16
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327a954
	if (ctx.cr0.eq) goto loc_8327A954;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
loc_8327A918:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// srw r11,r11,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r29.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x832ecf28
	ctx.lr = 0x8327A934;
	sub_832ECF28(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8327a918
	if (ctx.cr6.lt) goto loc_8327A918;
loc_8327A954:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r4,r10,7,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x832f27e8
	ctx.lr = 0x8327A978;
	sub_832F27E8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8327a994
	goto loc_8327A994;
loc_8327A98C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_8327A994:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8327a98c
	if (!ctx.cr6.eq) goto loc_8327A98C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r20,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r20.u32, 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8327a9d0
	if (ctx.cr6.eq) goto loc_8327A9D0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x8327a9d4
	goto loc_8327A9D4;
loc_8327A9D0:
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_8327A9D4:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83253180
	ctx.lr = 0x8327A9E0;
	sub_83253180(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8327a8e0
	if (!ctx.cr6.eq) goto loc_8327A8E0;
	// b 0x8327a9fc
	goto loc_8327A9FC;
loc_8327A9F8:
	// li r20,57
	ctx.r20.s64 = 57;
loc_8327A9FC:
	// andc. r4,r19,r24
	ctx.r4.u64 = ctx.r19.u64 & ~ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8327aa20
	if (ctx.cr0.eq) goto loc_8327AA20;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// andc r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ~ctx.r11.u64;
	// subf. r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327aa20
	if (!ctx.cr0.eq) goto loc_8327AA20;
	// li r21,1
	ctx.r21.s64 = 1;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x8327aa28
	goto loc_8327AA28;
loc_8327AA20:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r21,1
	ctx.r21.s64 = 1;
loc_8327AA28:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327aad0
	if (!ctx.cr0.eq) goto loc_8327AAD0;
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// addi r7,r16,44
	ctx.r7.s64 = ctx.r16.s64 + 44;
loc_8327AA48:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8327aad0
	if (!ctx.cr6.lt) goto loc_8327AAD0;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r3,r11,0,4,6
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327aac4
	if (ctx.cr0.eq) goto loc_8327AAC4;
	// rlwinm. r3,r11,0,27,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327aac4
	if (ctx.cr0.eq) goto loc_8327AAC4;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327aa80
	if (ctx.cr0.eq) goto loc_8327AA80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8327aabc
	if (!ctx.cr6.eq) goto loc_8327AABC;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// b 0x8327aac4
	goto loc_8327AAC4;
loc_8327AA80:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327aabc
	if (!ctx.cr0.eq) goto loc_8327AABC;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15104
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15104, ctx.xer);
	// bne cr6,0x8327aac4
	if (!ctx.cr6.eq) goto loc_8327AAC4;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8327aab4
	if (!ctx.cr6.eq) goto loc_8327AAB4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x8327aac4
	goto loc_8327AAC4;
loc_8327AAB4:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8327aac4
	if (ctx.cr6.eq) goto loc_8327AAC4;
loc_8327AABC:
	// slw r11,r21,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r9.u8 & 0x3F));
	// or r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 | ctx.r24.u64;
loc_8327AAC4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x8327aa48
	goto loc_8327AA48;
loc_8327AAD0:
	// not r11,r24
	ctx.r11.u64 = ~ctx.r24.u64;
	// and. r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327ab34
	if (ctx.cr0.eq) goto loc_8327AB34;
	// and r11,r18,r11
	ctx.r11.u64 = ctx.r18.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x8327ab34
	if (!ctx.cr6.eq) goto loc_8327AB34;
	// rlwinm r11,r10,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8327ab34
	if (ctx.cr6.eq) goto loc_8327AB34;
	// ori r24,r24,4
	ctx.r24.u64 = ctx.r24.u64 | 4;
	// b 0x8327ab34
	goto loc_8327AB34;
loc_8327AAFC:
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// andc r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 & ~ctx.r11.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r24,r11,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r11.s64;
	// subfic r5,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r5.s64 = 31 - ctx.r10.s64;
	// addi r11,r5,11
	ctx.r11.s64 = ctx.r5.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r16
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// bl 0x83277388
	ctx.lr = 0x8327AB28;
	sub_83277388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r17,24
	ctx.r10.u64 = ctx.r17.u32 & 0xFF;
	// or r17,r11,r10
	ctx.r17.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_8327AB34:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8327aafc
	if (!ctx.cr6.eq) goto loc_8327AAFC;
	// lwz r23,316(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// clrlwi. r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832793ec
	if (!ctx.cr0.eq) goto loc_832793EC;
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8327AB4C:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x8327ab6c
	if (ctx.cr6.eq) goto loc_8327AB6C;
	// cmpwi cr6,r11,54
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// beq cr6,0x8327ab6c
	if (ctx.cr6.eq) goto loc_8327AB6C;
	// cmpwi cr6,r11,72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 72, ctx.xer);
	// bne cr6,0x8327ab78
	if (!ctx.cr6.eq) goto loc_8327AB78;
loc_8327AB6C:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,44(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// bl 0x83232570
	ctx.lr = 0x8327AB78;
	sub_83232570(ctx, base);
loc_8327AB78:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r10,110
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 110, ctx.xer);
	// bgt cr6,0x8327ac70
	if (ctx.cr6.gt) goto loc_8327AC70;
	// beq cr6,0x8327ac54
	if (ctx.cr6.eq) goto loc_8327AC54;
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// blt cr6,0x8327ab9c
	if (ctx.cr6.lt) goto loc_8327AB9C;
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// ble cr6,0x8327aba8
	if (!ctx.cr6.gt) goto loc_8327ABA8;
loc_8327AB9C:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83233190
	ctx.lr = 0x8327ABA4;
	sub_83233190(ctx, base);
	// b 0x8327ace4
	goto loc_8327ACE4;
loc_8327ABA8:
	// lwz r3,44(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r4,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0x7;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bge cr6,0x8327ab9c
	if (!ctx.cr6.lt) goto loc_8327AB9C;
	// lwz r7,48(r16)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r8,r9,4
	ctx.xer.ca = ctx.r9.u32 <= 4;
	ctx.r8.s64 = 4 - ctx.r9.s64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r4,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0xFF;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// srw r6,r10,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// srw r5,r9,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
loc_8327ABEC:
	// li r31,3
	ctx.r31.s64 = 3;
	// slw r30,r6,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// slw r31,r31,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// not r31,r31
	ctx.r31.u64 = ~ctx.r31.u64;
	// slw r29,r5,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// and r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 & ctx.r10.u64;
	// and r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 & ctx.r9.u64;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// or r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 | ctx.r10.u64;
	// or r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 | ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x8327abec
	if (!ctx.cr0.eq) goto loc_8327ABEC;
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// rlwinm r8,r4,0,27,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r11,r10,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r8,r8,0,7,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFF9FFFFFF;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwimi r10,r9,5,19,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r11,r11,0,7,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF9FFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x8327ab9c
	goto loc_8327AB9C;
loc_8327AC54:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x832774c0
	ctx.lr = 0x8327AC64;
	sub_832774C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832793ec
	if (!ctx.cr0.eq) goto loc_832793EC;
	// b 0x8327ace4
	goto loc_8327ACE4;
loc_8327AC70:
	// cmpwi cr6,r10,113
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 113, ctx.xer);
	// beq cr6,0x8327ac94
	if (ctx.cr6.eq) goto loc_8327AC94;
	// cmpwi cr6,r10,124
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 124, ctx.xer);
	// beq cr6,0x8327ac94
	if (ctx.cr6.eq) goto loc_8327AC94;
	// cmpwi cr6,r10,125
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 125, ctx.xer);
	// bne cr6,0x8327ab9c
	if (!ctx.cr6.eq) goto loc_8327AB9C;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83253180
	ctx.lr = 0x8327AC90;
	sub_83253180(ctx, base);
	// b 0x8327ace4
	goto loc_8327ACE4;
loc_8327AC94:
	// rlwinm r10,r11,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// lwz r9,16(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lis r8,-28311
	ctx.r8.s64 = -1855389696;
	// lis r7,0
	ctx.r7.s64 = 0;
	// slw r10,r21,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r10.u8 & 0x3F));
	// ori r8,r8,5192
	ctx.r8.u64 = ctx.r8.u64 | 5192;
	// ori r7,r7,36262
	ctx.r7.u64 = ctx.r7.u64 | 36262;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r7.u8 & 0x7F));
	// srd r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r7.u8 & 0x7F));
	// srd r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwimi r10,r8,13,16,18
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 13) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// rlwimi r11,r10,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r11,r10,1,15,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// rlwimi r9,r11,2,13,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r11,8(r16)
	PPC_STORE_U32(ctx.r16.u32 + 8, ctx.r11.u32);
	// stw r9,16(r16)
	PPC_STORE_U32(ctx.r16.u32 + 16, ctx.r9.u32);
loc_8327ACE4:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x8327acfc
	if (ctx.cr6.eq) goto loc_8327ACFC;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8324c880
	ctx.lr = 0x8327ACFC;
	sub_8324C880(ctx, base);
loc_8327ACFC:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// oris r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 16777216;
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// stw r10,8(r16)
	PPC_STORE_U32(ctx.r16.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// bgt cr6,0x8327adb0
	if (ctx.cr6.gt) goto loc_8327ADB0;
	// beq cr6,0x8327ada0
	if (ctx.cr6.eq) goto loc_8327ADA0;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x8327ad40
	if (ctx.cr6.eq) goto loc_8327AD40;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x8327ad40
	if (ctx.cr6.eq) goto loc_8327AD40;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x8327ada0
	if (ctx.cr6.eq) goto loc_8327ADA0;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x8327ad90
	if (ctx.cr6.eq) goto loc_8327AD90;
	// cmpwi cr6,r11,104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 104, ctx.xer);
	// bne cr6,0x8327ad60
	if (!ctx.cr6.eq) goto loc_8327AD60;
loc_8327AD40:
	// lwz r11,16(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,16(r16)
	PPC_STORE_U32(ctx.r16.u32 + 16, ctx.r11.u32);
	// bne 0x8327ad60
	if (!ctx.cr0.eq) goto loc_8327AD60;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83275c90
	ctx.lr = 0x8327AD60;
	sub_83275C90(ctx, base);
loc_8327AD60:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// blt cr6,0x8327ad78
	if (ctx.cr6.lt) goto loc_8327AD78;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// ble cr6,0x8327ad88
	if (!ctx.cr6.gt) goto loc_8327AD88;
loc_8327AD78:
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// blt cr6,0x8327aeb4
	if (ctx.cr6.lt) goto loc_8327AEB4;
	// cmplwi cr6,r11,71
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 71, ctx.xer);
	// bgt cr6,0x8327aeb4
	if (ctx.cr6.gt) goto loc_8327AEB4;
loc_8327AD88:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x8327aeb8
	goto loc_8327AEB8;
loc_8327AD90:
	// lwz r11,44(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 44);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,44(r15)
	PPC_STORE_U32(ctx.r15.u32 + 44, ctx.r11.u32);
	// b 0x8327ad60
	goto loc_8327AD60;
loc_8327ADA0:
	// lwz r11,48(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r11.u32);
	// b 0x8327ad60
	goto loc_8327AD60;
loc_8327ADB0:
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// blt cr6,0x8327ad60
	if (ctx.cr6.lt) goto loc_8327AD60;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// ble cr6,0x8327ad40
	if (!ctx.cr6.gt) goto loc_8327AD40;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x8327ae44
	if (ctx.cr6.eq) goto loc_8327AE44;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x8327ae20
	if (ctx.cr6.eq) goto loc_8327AE20;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// beq cr6,0x8327ad40
	if (ctx.cr6.eq) goto loc_8327AD40;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// bne cr6,0x8327ad60
	if (!ctx.cr6.eq) goto loc_8327AD60;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
loc_8327ADE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327ae10
	if (ctx.cr6.eq) goto loc_8327AE10;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8327ae00
	if (!ctx.cr0.eq) goto loc_8327AE00;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8327ade4
	goto loc_8327ADE4;
loc_8327AE00:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// bne 0x8327ae14
	if (!ctx.cr0.eq) goto loc_8327AE14;
loc_8327AE10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327AE14:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327ad60
	if (!ctx.cr0.eq) goto loc_8327AD60;
	// b 0x8327ad40
	goto loc_8327AD40;
loc_8327AE20:
	// lwz r11,116(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 116);
	// lhz r10,16(r16)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r16.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// sth r11,18(r16)
	PPC_STORE_U16(ctx.r16.u32 + 18, ctx.r11.u16);
	// lwz r11,116(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 116);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,116(r15)
	PPC_STORE_U32(ctx.r15.u32 + 116, ctx.r11.u32);
	// b 0x8327ad60
	goto loc_8327AD60;
loc_8327AE44:
	// rlwinm. r11,r10,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327ae7c
	if (!ctx.cr0.eq) goto loc_8327AE7C;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
loc_8327AE50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327ae7c
	if (ctx.cr6.eq) goto loc_8327AE7C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327ae70
	if (!ctx.cr0.eq) goto loc_8327AE70;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8327ae50
	goto loc_8327AE50;
loc_8327AE70:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83275c90
	ctx.lr = 0x8327AE7C;
	sub_83275C90(ctx, base);
loc_8327AE7C:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327ad60
	if (ctx.cr0.eq) goto loc_8327AD60;
	// lwz r31,0(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
loc_8327AE8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8327ad60
	if (ctx.cr6.eq) goto loc_8327AD60;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327aeac
	if (!ctx.cr0.eq) goto loc_8327AEAC;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83275c90
	ctx.lr = 0x8327AEAC;
	sub_83275C90(ctx, base);
loc_8327AEAC:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8327ae8c
	goto loc_8327AE8C;
loc_8327AEB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327AEB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327aecc
	if (ctx.cr0.eq) goto loc_8327AECC;
	// lwz r11,40(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 40);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,40(r15)
	PPC_STORE_U32(ctx.r15.u32 + 40, ctx.r11.u32);
loc_8327AECC:
	// lwz r11,40(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 40);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327b000
	if (ctx.cr0.eq) goto loc_8327B000;
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r4,86
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 86, ctx.xer);
	// beq cr6,0x8327af14
	if (ctx.cr6.eq) goto loc_8327AF14;
	// cmplwi cr6,r4,87
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 87, ctx.xer);
	// beq cr6,0x8327af14
	if (ctx.cr6.eq) goto loc_8327AF14;
	// cmplwi cr6,r4,89
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 89, ctx.xer);
	// beq cr6,0x8327af14
	if (ctx.cr6.eq) goto loc_8327AF14;
	// cmplwi cr6,r4,90
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 90, ctx.xer);
	// beq cr6,0x8327af14
	if (ctx.cr6.eq) goto loc_8327AF14;
	// cmplwi cr6,r4,84
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 84, ctx.xer);
	// beq cr6,0x8327af14
	if (ctx.cr6.eq) goto loc_8327AF14;
	// cmplwi cr6,r4,85
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 85, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x8327af18
	if (!ctx.cr6.eq) goto loc_8327AF18;
loc_8327AF14:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_8327AF18:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327b000
	if (ctx.cr0.eq) goto loc_8327B000;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8321ce60
	ctx.lr = 0x8327AF30;
	sub_8321CE60(ctx, base);
	// addi r11,r16,-12
	ctx.r11.s64 = ctx.r16.s64 + -12;
	// add r31,r3,r11
	ctx.r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327af64
	if (ctx.cr0.eq) goto loc_8327AF64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83233970
	ctx.lr = 0x8327AF54;
	sub_83233970(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r10,r11,6,23,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0x1FF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFE00);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8327AF64:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b000
	if (!ctx.cr0.eq) goto loc_8327B000;
	// rlwinm r11,r11,30,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8327b000
	if (!ctx.cr6.eq) goto loc_8327B000;
	// lwz r11,48(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327b000
	if (ctx.cr0.eq) goto loc_8327B000;
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b000
	if (!ctx.cr0.eq) goto loc_8327B000;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327b000
	if (ctx.cr0.eq) goto loc_8327B000;
loc_8327AF9C:
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,48(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r6,r9,27
	ctx.r6.u64 = ctx.r9.u32 & 0x1F;
	// clrlwi r9,r7,13
	ctx.r9.u64 = ctx.r7.u32 & 0x7FFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r7,r21,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r6.u8 & 0x3F));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// and. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327afe8
	if (ctx.cr0.eq) goto loc_8327AFE8;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_8327AFE8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b000
	if (!ctx.cr0.eq) goto loc_8327B000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327af9c
	if (!ctx.cr6.eq) goto loc_8327AF9C;
loc_8327B000:
	// rlwinm r11,r16,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327b018
	if (ctx.cr0.eq) goto loc_8327B018;
	// li r16,0
	ctx.r16.s64 = 0;
	// b 0x8327b024
	goto loc_8327B024;
loc_8327B018:
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327943c
	if (!ctx.cr6.eq) goto loc_8327943C;
loc_8327B024:
	// addi r10,r23,32
	ctx.r10.s64 = ctx.r23.s64 + 32;
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8327943c
	if (ctx.cr6.eq) goto loc_8327943C;
	// addi r11,r23,24
	ctx.r11.s64 = ctx.r23.s64 + 24;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8327b064
	if (ctx.cr6.eq) goto loc_8327B064;
	// lwz r9,28(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8327b064
	if (!ctx.cr0.eq) goto loc_8327B064;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// bne 0x8327b078
	if (!ctx.cr0.eq) goto loc_8327B078;
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// b 0x8327943c
	goto loc_8327943C;
loc_8327B064:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// beq 0x8327b080
	if (ctx.cr0.eq) goto loc_8327B080;
loc_8327B078:
	// li r16,0
	ctx.r16.s64 = 0;
	// b 0x8327943c
	goto loc_8327943C;
loc_8327B080:
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// b 0x8327943c
	goto loc_8327943C;
loc_8327B088:
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832f6460
	ctx.lr = 0x8327B0A4;
	sub_832F6460(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83276830
	ctx.lr = 0x8327B0C0;
	sub_83276830(ctx, base);
	// lwz r8,28(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// rlwinm r9,r3,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r23,24
	ctx.r11.s64 = ctx.r23.s64 + 24;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r9,36
	ctx.r11.s64 = ctx.r9.s64 + 36;
	// stw r8,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// lwz r6,28(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// stw r10,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r10.u32);
	// addi r8,r16,4
	ctx.r8.s64 = ctx.r16.s64 + 4;
	// stw r7,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r7.u32);
	// stw r11,28(r23)
	PPC_STORE_U32(ctx.r23.u32 + 28, ctx.r11.u32);
loc_8327B0FC:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327b160
	if (ctx.cr6.eq) goto loc_8327B160;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8327b14c
	if (ctx.cr6.eq) goto loc_8327B14C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8327b12c
	goto loc_8327B12C;
loc_8327B124:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_8327B12C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8327b124
	if (!ctx.cr6.eq) goto loc_8327B124;
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
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8327B14C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8327b0fc
	if (!ctx.cr6.eq) goto loc_8327B0FC;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8327b0fc
	goto loc_8327B0FC;
loc_8327B160:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83253180
	ctx.lr = 0x8327B168;
	sub_83253180(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x8327B188;
	sub_832F6CC8(ctx, base);
	// b 0x832793ec
	goto loc_832793EC;
loc_8327B18C:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,8(r16)
	PPC_STORE_U32(ctx.r16.u32 + 8, ctx.r11.u32);
loc_8327B198:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x832f6f50
	ctx.lr = 0x8327B1A4;
	sub_832F6F50(ctx, base);
	// b 0x832793ec
	goto loc_832793EC;
loc_8327B1A8:
	// addi r8,r16,4
	ctx.r8.s64 = ctx.r16.s64 + 4;
loc_8327B1AC:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327b198
	if (ctx.cr6.eq) goto loc_8327B198;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8327b20c
	if (ctx.cr6.eq) goto loc_8327B20C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8327b1dc
	goto loc_8327B1DC;
loc_8327B1D4:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_8327B1DC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8327b1d4
	if (!ctx.cr6.eq) goto loc_8327B1D4;
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
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r7,0,27,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x1F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE0);
	// rlwimi r10,r20,7,19,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r20.u32, 7) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8327B20C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8327b1ac
	if (!ctx.cr6.eq) goto loc_8327B1AC;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8327b1ac
	goto loc_8327B1AC;
loc_8327B220:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,-356
	ctx.r5.s64 = ctx.r11.s64 + -356;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83204d78
	ctx.lr = 0x8327B234;
	sub_83204D78(ctx, base);
loc_8327B234:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83204d78
	ctx.lr = 0x8327B240;
	sub_83204D78(ctx, base);
loc_8327B240:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327B24C"))) PPC_WEAK_FUNC(sub_8327B24C);
PPC_FUNC_IMPL(__imp__sub_8327B24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327B250"))) PPC_WEAK_FUNC(sub_8327B250);
PPC_FUNC_IMPL(__imp__sub_8327B250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x8327B258;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lis r22,-1
	ctx.r22.s64 = -65536;
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8327b594
	if (ctx.cr6.eq) goto loc_8327B594;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b594
	if (!ctx.cr0.eq) goto loc_8327B594;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327b594
	if (ctx.cr0.eq) goto loc_8327B594;
	// lis r26,124
	ctx.r26.s64 = 8126464;
loc_8327B290:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b578
	if (!ctx.cr0.eq) goto loc_8327B578;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327b578
	if (ctx.cr0.eq) goto loc_8327B578;
loc_8327B2A8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// bne cr6,0x8327b55c
	if (!ctx.cr6.eq) goto loc_8327B55C;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8327B2C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327b33c
	if (ctx.cr6.eq) goto loc_8327B33C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327b2e4
	if (ctx.cr0.eq) goto loc_8327B2E4;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8327b2ec
	if (!ctx.cr0.eq) goto loc_8327B2EC;
loc_8327B2E4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8327b2c0
	goto loc_8327B2C0;
loc_8327B2EC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8327B2F0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8327b330
	if (ctx.cr6.eq) goto loc_8327B330;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327b328
	if (ctx.cr0.eq) goto loc_8327B328;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327b328
	if (ctx.cr0.eq) goto loc_8327B328;
	// rlwinm r9,r11,0,7,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FE0000;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8327b328
	if (!ctx.cr6.eq) goto loc_8327B328;
	// rlwinm r11,r11,19,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xF;
	// or r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 | ctx.r6.u64;
loc_8327B328:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8327b2f0
	goto loc_8327B2F0;
loc_8327B330:
	// cmplwi cr6,r6,15
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 15, ctx.xer);
	// beq cr6,0x8327b55c
	if (ctx.cr6.eq) goto loc_8327B55C;
	// b 0x8327b54c
	goto loc_8327B54C;
loc_8327B33C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327b548
	if (ctx.cr6.eq) goto loc_8327B548;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327b548
	if (ctx.cr6.eq) goto loc_8327B548;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b540
	if (!ctx.cr0.eq) goto loc_8327B540;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327b540
	if (ctx.cr0.eq) goto loc_8327B540;
loc_8327B370:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327b524
	if (ctx.cr6.eq) goto loc_8327B524;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327b524
	if (ctx.cr6.eq) goto loc_8327B524;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b524
	if (!ctx.cr0.eq) goto loc_8327B524;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327b524
	if (ctx.cr0.eq) goto loc_8327B524;
loc_8327B3A4:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327b3f4
	if (ctx.cr0.eq) goto loc_8327B3F4;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8327B3B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327b61c
	if (ctx.cr6.eq) goto loc_8327B61C;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8327b3d4
	if (ctx.cr6.eq) goto loc_8327B3D4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8327b3dc
	if (!ctx.cr0.eq) goto loc_8327B3DC;
loc_8327B3D4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8327b3b4
	goto loc_8327B3B4;
loc_8327B3DC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,7,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FE0000;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8327b3f4
	if (!ctx.cr6.eq) goto loc_8327B3F4;
	// rlwinm r11,r11,19,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xF;
	// or r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 | ctx.r31.u64;
loc_8327B3F4:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b410
	if (!ctx.cr0.eq) goto loc_8327B410;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327b3a4
	if (!ctx.cr6.eq) goto loc_8327B3A4;
loc_8327B410:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8327b524
	if (ctx.cr6.eq) goto loc_8327B524;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// bl 0x8327fd38
	ctx.lr = 0x8327B430;
	sub_8327FD38(ctx, base);
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327b4e4
	if (ctx.cr0.eq) goto loc_8327B4E4;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 15, ctx.xer);
	// beq cr6,0x8327b4e4
	if (ctx.cr6.eq) goto loc_8327B4E4;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b628
	if (!ctx.cr0.eq) goto loc_8327B628;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327b628
	if (ctx.cr0.eq) goto loc_8327B628;
loc_8327B464:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x8327b4b0
	if (!ctx.cr6.eq) goto loc_8327B4B0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8327B478:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327b4a8
	if (ctx.cr6.eq) goto loc_8327B4A8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327b49c
	if (ctx.cr0.eq) goto loc_8327B49C;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8327b4a4
	if (!ctx.cr0.eq) goto loc_8327B4A4;
loc_8327B49C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8327b478
	goto loc_8327B478;
loc_8327B4A4:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_8327B4A8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8327b4d4
	if (!ctx.cr6.eq) goto loc_8327B4D4;
loc_8327B4B0:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b4cc
	if (!ctx.cr0.eq) goto loc_8327B4CC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327b464
	if (!ctx.cr6.eq) goto loc_8327B464;
loc_8327B4CC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8327b628
	if (ctx.cr6.eq) goto loc_8327B628;
loc_8327B4D4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83276900
	ctx.lr = 0x8327B4E4;
	sub_83276900(ctx, base);
loc_8327B4E4:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b524
	if (!ctx.cr0.eq) goto loc_8327B524;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327b524
	if (ctx.cr0.eq) goto loc_8327B524;
loc_8327B4F8:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327b50c
	if (ctx.cr0.eq) goto loc_8327B50C;
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_8327B50C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b524
	if (!ctx.cr0.eq) goto loc_8327B524;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327b4f8
	if (!ctx.cr6.eq) goto loc_8327B4F8;
loc_8327B524:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b540
	if (!ctx.cr0.eq) goto loc_8327B540;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327b370
	if (!ctx.cr6.eq) goto loc_8327B370;
loc_8327B540:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327b55c
	if (!ctx.cr0.eq) goto loc_8327B55C;
loc_8327B548:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8327B54C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83276900
	ctx.lr = 0x8327B55C;
	sub_83276900(ctx, base);
loc_8327B55C:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b578
	if (!ctx.cr0.eq) goto loc_8327B578;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327b2a8
	if (!ctx.cr6.eq) goto loc_8327B2A8;
loc_8327B578:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b594
	if (!ctx.cr0.eq) goto loc_8327B594;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327b290
	if (!ctx.cr6.eq) goto loc_8327B290;
loc_8327B594:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b6a8
	if (!ctx.cr0.eq) goto loc_8327B6A8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327b6a8
	if (ctx.cr0.eq) goto loc_8327B6A8;
loc_8327B5AC:
	// lwz r11,36(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b68c
	if (!ctx.cr0.eq) goto loc_8327B68C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327b68c
	if (ctx.cr0.eq) goto loc_8327B68C;
loc_8327B5C4:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// beq cr6,0x8327b5dc
	if (ctx.cr6.eq) goto loc_8327B5DC;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// bne cr6,0x8327b634
	if (!ctx.cr6.eq) goto loc_8327B634;
loc_8327B5DC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8327B5E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327b634
	if (ctx.cr6.eq) goto loc_8327B634;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r10,0,4,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8327b614
	if (ctx.cr0.eq) goto loc_8327B614;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm. r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8327b614
	if (ctx.cr0.eq) goto loc_8327B614;
	// rlwinm r10,r10,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x8327b654
	if (ctx.cr6.gt) goto loc_8327B654;
loc_8327B614:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8327b5e0
	goto loc_8327B5E0;
loc_8327B61C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83204d78
	ctx.lr = 0x8327B628;
	sub_83204D78(ctx, base);
loc_8327B628:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83204d78
	ctx.lr = 0x8327B634;
	sub_83204D78(ctx, base);
loc_8327B634:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b68c
	if (!ctx.cr0.eq) goto loc_8327B68C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327b5c4
	if (!ctx.cr6.eq) goto loc_8327B5C4;
	// b 0x8327b68c
	goto loc_8327B68C;
loc_8327B654:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8327b68c
	if (ctx.cr6.eq) goto loc_8327B68C;
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8327b678
	goto loc_8327B678;
loc_8327B668:
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327ba68
	if (ctx.cr6.eq) goto loc_8327BA68;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
loc_8327B678:
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b668
	if (!ctx.cr0.eq) goto loc_8327B668;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_8327B68C:
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b6a8
	if (!ctx.cr0.eq) goto loc_8327B6A8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327b5ac
	if (!ctx.cr6.eq) goto loc_8327B5AC;
loc_8327B6A8:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b738
	if (!ctx.cr0.eq) goto loc_8327B738;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327b738
	if (ctx.cr0.eq) goto loc_8327B738;
loc_8327B6C0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8327b71c
	if (ctx.cr6.eq) goto loc_8327B71C;
loc_8327B6CC:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b6e4
	if (!ctx.cr0.eq) goto loc_8327B6E4;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327b6cc
	if (!ctx.cr6.eq) goto loc_8327B6CC;
loc_8327B6E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327b71c
	if (ctx.cr6.eq) goto loc_8327B71C;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// b 0x8327b714
	goto loc_8327B714;
loc_8327B6F4:
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r8,r8,2,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8327b710
	if (ctx.cr0.eq) goto loc_8327B710;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r8,r8,0,2,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8327B710:
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
loc_8327B714:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8327b6f4
	if (!ctx.cr6.eq) goto loc_8327B6F4;
loc_8327B71C:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b738
	if (!ctx.cr0.eq) goto loc_8327B738;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327b6c0
	if (!ctx.cr6.eq) goto loc_8327B6C0;
loc_8327B738:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327b9fc
	if (!ctx.cr0.eq) goto loc_8327B9FC;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
loc_8327B748:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
loc_8327B750:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8327ba8c
	if (ctx.cr6.eq) goto loc_8327BA8C;
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b820
	if (!ctx.cr0.eq) goto loc_8327B820;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327b820
	if (ctx.cr0.eq) goto loc_8327B820;
loc_8327B778:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x8327b804
	if (!ctx.cr6.eq) goto loc_8327B804;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_8327B78C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8327b804
	if (ctx.cr6.eq) goto loc_8327B804;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327b7fc
	if (ctx.cr0.eq) goto loc_8327B7FC;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327b7fc
	if (ctx.cr0.eq) goto loc_8327B7FC;
	// rlwinm r9,r11,15,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// blt cr6,0x8327b7c4
	if (ctx.cr6.lt) goto loc_8327B7C4;
	// cmplwi cr6,r9,37
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 37, ctx.xer);
	// ble cr6,0x8327b7fc
	if (!ctx.cr6.gt) goto loc_8327B7FC;
loc_8327B7C4:
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8327b7dc
	if (ctx.cr6.lt) goto loc_8327B7DC;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8327b7e0
	if (!ctx.cr6.gt) goto loc_8327B7E0;
loc_8327B7DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327B7E0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327b7fc
	if (ctx.cr0.eq) goto loc_8327B7FC;
	// cmplwi cr6,r9,61
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 61, ctx.xer);
	// blt cr6,0x8327b7f8
	if (ctx.cr6.lt) goto loc_8327B7F8;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8327b7fc
	goto loc_8327B7FC;
loc_8327B7F8:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8327B7FC:
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x8327b78c
	goto loc_8327B78C;
loc_8327B804:
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b820
	if (!ctx.cr0.eq) goto loc_8327B820;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327b778
	if (!ctx.cr6.eq) goto loc_8327B778;
loc_8327B820:
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b830
	if (!ctx.cr0.eq) goto loc_8327B830;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327b9ec
	if (ctx.cr0.eq) goto loc_8327B9EC;
loc_8327B830:
	// lwz r9,48(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwinm. r9,r9,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8327b9ec
	if (!ctx.cr0.eq) goto loc_8327B9EC;
loc_8327B840:
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327ba74
	if (ctx.cr6.eq) goto loc_8327BA74;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r9,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327b840
	if (ctx.cr0.eq) goto loc_8327B840;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8327b9ec
	if (ctx.cr6.eq) goto loc_8327B9EC;
	// lwz r9,48(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r28,r9,0,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r28,r22
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8327b888
	if (ctx.cr6.eq) goto loc_8327B888;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8327b888
	if (ctx.cr6.eq) goto loc_8327B888;
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327b888
	if (ctx.cr0.eq) goto loc_8327B888;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8327B888:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8327b9cc
	goto loc_8327B9CC;
loc_8327B890:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b924
	if (!ctx.cr0.eq) goto loc_8327B924;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327b924
	if (ctx.cr0.eq) goto loc_8327B924;
loc_8327B8A8:
	// cmplw cr6,r28,r22
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8327b8d8
	if (ctx.cr6.eq) goto loc_8327B8D8;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// blt cr6,0x8327b8cc
	if (ctx.cr6.lt) goto loc_8327B8CC;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8327b8d0
	if (!ctx.cr6.gt) goto loc_8327B8D0;
loc_8327B8CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327B8D0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327b920
	if (!ctx.cr0.eq) goto loc_8327B920;
loc_8327B8D8:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// blt cr6,0x8327b8f4
	if (ctx.cr6.lt) goto loc_8327B8F4;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8327b8f8
	if (!ctx.cr6.gt) goto loc_8327B8F8;
loc_8327B8F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327B8F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327b920
	if (!ctx.cr0.eq) goto loc_8327B920;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b924
	if (!ctx.cr0.eq) goto loc_8327B924;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327b8a8
	if (!ctx.cr6.eq) goto loc_8327B8A8;
	// b 0x8327b924
	goto loc_8327B924;
loc_8327B920:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8327B924:
	// cmplw cr6,r28,r22
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8327b9c0
	if (ctx.cr6.eq) goto loc_8327B9C0;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b9c0
	if (!ctx.cr0.eq) goto loc_8327B9C0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327b9c0
	if (ctx.cr0.eq) goto loc_8327B9C0;
loc_8327B944:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r9,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// blt cr6,0x8327b960
	if (ctx.cr6.lt) goto loc_8327B960;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8327b964
	if (!ctx.cr6.gt) goto loc_8327B964;
loc_8327B960:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327B964:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327b99c
	if (ctx.cr0.eq) goto loc_8327B99C;
	// rlwinm. r11,r9,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327b99c
	if (ctx.cr0.eq) goto loc_8327B99C;
	// cmplwi cr6,r10,90
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 90, ctx.xer);
	// bne cr6,0x8327b9bc
	if (!ctx.cr6.eq) goto loc_8327B9BC;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327b9bc
	if (ctx.cr0.eq) goto loc_8327B9BC;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c78
	ctx.lr = 0x8327B994;
	sub_83225C78(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8327b9bc
	if (ctx.cr6.eq) goto loc_8327B9BC;
loc_8327B99C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b9c0
	if (!ctx.cr0.eq) goto loc_8327B9C0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327b944
	if (!ctx.cr6.eq) goto loc_8327B944;
	// b 0x8327b9c0
	goto loc_8327B9C0;
loc_8327B9BC:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8327B9C0:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8327b9e4
	if (ctx.cr6.eq) goto loc_8327B9E4;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
loc_8327B9CC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b9e4
	if (!ctx.cr0.eq) goto loc_8327B9E4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne cr6,0x8327b890
	if (!ctx.cr6.eq) goto loc_8327B890;
loc_8327B9E4:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327ba04
	if (!ctx.cr0.eq) goto loc_8327BA04;
loc_8327B9EC:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327b748
	if (ctx.cr0.eq) goto loc_8327B748;
loc_8327B9FC:
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8327b750
	goto loc_8327B750;
loc_8327BA04:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327ba80
	if (ctx.cr6.eq) goto loc_8327BA80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8327ba80
	if (ctx.cr6.eq) goto loc_8327BA80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83239e80
	ctx.lr = 0x8327BA24;
	sub_83239E80(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b594
	if (!ctx.cr0.eq) goto loc_8327B594;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327b594
	if (ctx.cr0.eq) goto loc_8327B594;
loc_8327BA38:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327ba4c
	if (ctx.cr0.eq) goto loc_8327BA4C;
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_8327BA4C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327b594
	if (!ctx.cr0.eq) goto loc_8327B594;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327ba38
	if (!ctx.cr6.eq) goto loc_8327BA38;
	// b 0x8327b594
	goto loc_8327B594;
loc_8327BA68:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83204d78
	ctx.lr = 0x8327BA74;
	sub_83204D78(ctx, base);
loc_8327BA74:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83204d78
	ctx.lr = 0x8327BA80;
	sub_83204D78(ctx, base);
loc_8327BA80:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83204d78
	ctx.lr = 0x8327BA8C;
	sub_83204D78(ctx, base);
loc_8327BA8C:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327bde0
	if (!ctx.cr0.eq) goto loc_8327BDE0;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327bde0
	if (ctx.cr0.eq) goto loc_8327BDE0;
loc_8327BAA4:
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327bdc4
	if (!ctx.cr0.eq) goto loc_8327BDC4;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327bdc4
	if (ctx.cr0.eq) goto loc_8327BDC4;
loc_8327BABC:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// beq cr6,0x8327bad4
	if (ctx.cr6.eq) goto loc_8327BAD4;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// bne cr6,0x8327bda8
	if (!ctx.cr6.eq) goto loc_8327BDA8;
loc_8327BAD4:
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r25,0
	ctx.r25.s64 = 0;
loc_8327BAF0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8327bc54
	if (ctx.cr6.eq) goto loc_8327BC54;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327bc4c
	if (ctx.cr0.eq) goto loc_8327BC4C;
	// lwz r31,12(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327bc4c
	if (ctx.cr0.eq) goto loc_8327BC4C;
	// rlwinm r29,r10,15,24,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// blt cr6,0x8327bb28
	if (ctx.cr6.lt) goto loc_8327BB28;
	// cmplwi cr6,r29,37
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 37, ctx.xer);
	// ble cr6,0x8327bc4c
	if (!ctx.cr6.gt) goto loc_8327BC4C;
loc_8327BB28:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8327bb40
	if (ctx.cr6.lt) goto loc_8327BB40;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8327bb44
	if (!ctx.cr6.gt) goto loc_8327BB44;
loc_8327BB40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327BB44:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327bc4c
	if (ctx.cr0.eq) goto loc_8327BC4C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8327bb74
	if (!ctx.cr6.eq) goto loc_8327BB74;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83276a90
	ctx.lr = 0x8327BB68;
	sub_83276A90(ctx, base);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8327BB74:
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8327bc4c
	if (!ctx.cr6.eq) goto loc_8327BC4C;
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8327bbec
	if (ctx.cr6.eq) goto loc_8327BBEC;
	// cmplwi cr6,r29,15
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 15, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bgt cr6,0x8327bbd0
	if (ctx.cr6.gt) goto loc_8327BBD0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832f9488
	ctx.lr = 0x8327BBAC;
	sub_832F9488(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83229400
	ctx.lr = 0x8327BBBC;
	sub_83229400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83232fe0
	ctx.lr = 0x8327BBC8;
	sub_83232FE0(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x8327bc4c
	goto loc_8327BC4C;
loc_8327BBD0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832f9488
	ctx.lr = 0x8327BBDC;
	sub_832F9488(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832330a8
	ctx.lr = 0x8327BBEC;
	sub_832330A8(ctx, base);
loc_8327BBEC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x832f9488
	ctx.lr = 0x8327BC04;
	sub_832F9488(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83229400
	ctx.lr = 0x8327BC14;
	sub_83229400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83232fe0
	ctx.lr = 0x8327BC20;
	sub_83232FE0(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11648
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11648, ctx.xer);
	// bne cr6,0x8327bc4c
	if (!ctx.cr6.eq) goto loc_8327BC4C;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83229400
	ctx.lr = 0x8327BC40;
	sub_83229400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83232fe0
	ctx.lr = 0x8327BC4C;
	sub_83232FE0(ctx, base);
loc_8327BC4C:
	// lwz r27,4(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x8327baf0
	goto loc_8327BAF0;
loc_8327BC54:
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8327bda8
	if (ctx.cr6.eq) goto loc_8327BDA8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8327bda8
	if (ctx.cr6.eq) goto loc_8327BDA8;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8327bda8
	if (ctx.cr6.eq) goto loc_8327BDA8;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327bda8
	if (!ctx.cr0.eq) goto loc_8327BDA8;
	// addi r28,r26,4
	ctx.r28.s64 = ctx.r26.s64 + 4;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8327BC84:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8327bcc8
	if (ctx.cr6.eq) goto loc_8327BCC8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327bcb4
	if (ctx.cr6.eq) goto loc_8327BCB4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8327bcb4
	if (!ctx.cr6.eq) goto loc_8327BCB4;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83233970
	ctx.lr = 0x8327BCB4;
	sub_83233970(ctx, base);
loc_8327BCB4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8327bc84
	if (!ctx.cr6.eq) goto loc_8327BC84;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// b 0x8327bc84
	goto loc_8327BC84;
loc_8327BCC8:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r30,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r31.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r31,r31,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// bl 0x832330a8
	ctx.lr = 0x8327BD30;
	sub_832330A8(ctx, base);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
loc_8327BD34:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327bda8
	if (ctx.cr6.eq) goto loc_8327BDA8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8327bd94
	if (ctx.cr6.eq) goto loc_8327BD94;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14976
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14976, ctx.xer);
	// bne cr6,0x8327bd94
	if (!ctx.cr6.eq) goto loc_8327BD94;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8327bd74
	goto loc_8327BD74;
loc_8327BD6C:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_8327BD74:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8327bd6c
	if (!ctx.cr6.eq) goto loc_8327BD6C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
loc_8327BD94:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8327bd34
	if (!ctx.cr6.eq) goto loc_8327BD34;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8327bd34
	goto loc_8327BD34;
loc_8327BDA8:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327bdc4
	if (!ctx.cr0.eq) goto loc_8327BDC4;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327babc
	if (!ctx.cr6.eq) goto loc_8327BABC;
loc_8327BDC4:
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327bde0
	if (!ctx.cr0.eq) goto loc_8327BDE0;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327baa4
	if (!ctx.cr6.eq) goto loc_8327BAA4;
loc_8327BDE0:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327be20
	if (!ctx.cr0.eq) goto loc_8327BE20;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327be20
	if (ctx.cr0.eq) goto loc_8327BE20;
loc_8327BDF4:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8327be08
	if (ctx.cr0.eq) goto loc_8327BE08;
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_8327BE08:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327be20
	if (!ctx.cr0.eq) goto loc_8327BE20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327bdf4
	if (!ctx.cr6.eq) goto loc_8327BDF4;
loc_8327BE20:
	// lwz r11,44(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 44);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327c010
	if (ctx.cr0.eq) goto loc_8327C010;
loc_8327BE2C:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327beec
	if (!ctx.cr0.eq) goto loc_8327BEEC;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// b 0x8327bee0
	goto loc_8327BEE0;
loc_8327BE44:
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r10,r9,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327bed0
	if (!ctx.cr0.eq) goto loc_8327BED0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_8327BE54:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8327be80
	if (ctx.cr6.eq) goto loc_8327BE80;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,76(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// rlwinm. r7,r7,0,4,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8327be74
	if (!ctx.cr0.eq) goto loc_8327BE74;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8327be54
	goto loc_8327BE54;
loc_8327BE74:
	// oris r10,r9,2048
	ctx.r10.u64 = ctx.r9.u64 | 134217728;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
loc_8327BE80:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8327bed0
	if (!ctx.cr0.eq) goto loc_8327BED0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8327bed0
	if (ctx.cr0.eq) goto loc_8327BED0;
loc_8327BE94:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,12288
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12288, ctx.xer);
	// beq cr6,0x8327bec0
	if (ctx.cr6.eq) goto loc_8327BEC0;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8327bed0
	if (!ctx.cr0.eq) goto loc_8327BED0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8327be94
	if (!ctx.cr6.eq) goto loc_8327BE94;
	// b 0x8327bed0
	goto loc_8327BED0;
loc_8327BEC0:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// li r8,1
	ctx.r8.s64 = 1;
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
loc_8327BED0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327beec
	if (!ctx.cr0.eq) goto loc_8327BEEC;
loc_8327BEE0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327be44
	if (!ctx.cr0.eq) goto loc_8327BE44;
loc_8327BEEC:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327be2c
	if (!ctx.cr0.eq) goto loc_8327BE2C;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8327bf08
	if (!ctx.cr0.eq) goto loc_8327BF08;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8327BF08:
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327c010
	if (ctx.cr0.eq) goto loc_8327C010;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8327c010
	if (!ctx.cr6.eq) goto loc_8327C010;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327c010
	if (ctx.cr0.eq) goto loc_8327C010;
loc_8327BF28:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327bff4
	if (!ctx.cr0.eq) goto loc_8327BFF4;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327bff4
	if (ctx.cr0.eq) goto loc_8327BFF4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// bne cr6,0x8327bff4
	if (!ctx.cr6.eq) goto loc_8327BFF4;
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327bfac
	if (!ctx.cr0.eq) goto loc_8327BFAC;
loc_8327BF64:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327bfac
	if (ctx.cr6.eq) goto loc_8327BFAC;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327bf84
	if (!ctx.cr0.eq) goto loc_8327BF84;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x8327bf64
	goto loc_8327BF64;
loc_8327BF84:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_8327BF88:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8327bfa8
	if (ctx.cr6.eq) goto loc_8327BFA8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,76(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// rlwinm. r9,r9,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8327bfac
	if (!ctx.cr0.eq) goto loc_8327BFAC;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8327bf88
	goto loc_8327BF88;
loc_8327BFA8:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8327BFAC:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,95
	ctx.r6.s64 = 95;
	// addi r5,r30,24
	ctx.r5.s64 = ctx.r30.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x832f02e0
	ctx.lr = 0x8327BFC8;
	sub_832F02E0(ctx, base);
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8327bfe4
	if (ctx.cr6.eq) goto loc_8327BFE4;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x832339d8
	ctx.lr = 0x8327BFE4;
	sub_832339D8(ctx, base);
loc_8327BFE4:
	// stw r31,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r31.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8327BFF4:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327c010
	if (!ctx.cr0.eq) goto loc_8327C010;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327bf28
	if (!ctx.cr6.eq) goto loc_8327BF28;
loc_8327C010:
	// lwz r11,40(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// lwz r31,4(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// clrlwi. r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,40(r21)
	PPC_STORE_U32(ctx.r21.u32 + 40, ctx.r11.u32);
	// bne 0x8327c054
	if (!ctx.cr0.eq) goto loc_8327C054;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8327c054
	if (ctx.cr0.eq) goto loc_8327C054;
loc_8327C030:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x832793a8
	ctx.lr = 0x8327C03C;
	sub_832793A8(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327c054
	if (!ctx.cr0.eq) goto loc_8327C054;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8327c030
	if (!ctx.cr6.eq) goto loc_8327C030;
loc_8327C054:
	// lwz r11,40(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327c360
	if (ctx.cr0.eq) goto loc_8327C360;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327c360
	if (!ctx.cr0.eq) goto loc_8327C360;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327c360
	if (ctx.cr0.eq) goto loc_8327C360;
loc_8327C078:
	// lwz r11,28(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// addi r23,r22,24
	ctx.r23.s64 = ctx.r22.s64 + 24;
	// li r24,0
	ctx.r24.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327c344
	if (!ctx.cr0.eq) goto loc_8327C344;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327c344
	if (ctx.cr0.eq) goto loc_8327C344;
loc_8327C098:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15104, ctx.xer);
	// bne cr6,0x8327c2cc
	if (!ctx.cr6.eq) goto loc_8327C2CC;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r25,r30,4
	ctx.r25.s64 = ctx.r30.s64 + 4;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r26,12(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r28,12(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_8327C0BC:
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8327c2b8
	if (ctx.cr6.eq) goto loc_8327C2B8;
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8327c2a4
	if (ctx.cr6.eq) goto loc_8327C2A4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8327c0ec
	goto loc_8327C0EC;
loc_8327C0E4:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_8327C0EC:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8327c0e4
	if (!ctx.cr6.eq) goto loc_8327C0E4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r8,r10,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// srw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r7,r10,26,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r9,r10,28,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r7,r8,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r11,r7,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83229400
	ctx.lr = 0x8327C16C;
	sub_83229400(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8327C178:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327c1d4
	if (ctx.cr6.eq) goto loc_8327C1D4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r9,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327c194
	if (ctx.cr0.eq) goto loc_8327C194;
	// rlwinm. r7,r9,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8327c1d0
	if (!ctx.cr0.eq) goto loc_8327C1D0;
loc_8327C194:
	// rlwinm. r7,r9,0,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8327c1a8
	if (ctx.cr0.eq) goto loc_8327C1A8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x8327c1ac
	if (ctx.cr6.eq) goto loc_8327C1AC;
loc_8327C1A8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8327C1AC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327c1c8
	if (ctx.cr0.eq) goto loc_8327C1C8;
	// rlwinm. r10,r9,0,7,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327c1c8
	if (!ctx.cr0.eq) goto loc_8327C1C8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8327c1d0
	if (!ctx.cr6.eq) goto loc_8327C1D0;
loc_8327C1C8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8327c178
	goto loc_8327C178;
loc_8327C1D0:
	// li r8,1
	ctx.r8.s64 = 1;
loc_8327C1D4:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327c274
	if (!ctx.cr0.eq) goto loc_8327C274;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8327c274
	if (!ctx.cr6.gt) goto loc_8327C274;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8327c274
	if (!ctx.cr6.eq) goto loc_8327C274;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8327c220
	if (ctx.cr6.eq) goto loc_8327C220;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8327c224
	if (!ctx.cr6.eq) goto loc_8327C224;
loc_8327C220:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8327C224:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327c274
	if (ctx.cr0.eq) goto loc_8327C274;
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8327c250
	if (ctx.cr6.eq) goto loc_8327C250;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8327c254
	if (!ctx.cr6.eq) goto loc_8327C254;
loc_8327C250:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8327C254:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327c274
	if (ctx.cr0.eq) goto loc_8327C274;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327c274
	if (ctx.cr0.eq) goto loc_8327C274;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8327C274:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327c298
	if (ctx.cr0.eq) goto loc_8327C298;
	// rlwinm r5,r30,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x832f5568
	ctx.lr = 0x8327C290;
	sub_832F5568(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x8327c29c
	goto loc_8327C29C;
loc_8327C298:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8327C29C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83232fe0
	ctx.lr = 0x8327C2A4;
	sub_83232FE0(ctx, base);
loc_8327C2A4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8327c0bc
	if (!ctx.cr6.eq) goto loc_8327C0BC;
	// addi r25,r31,8
	ctx.r25.s64 = ctx.r31.s64 + 8;
	// b 0x8327c0bc
	goto loc_8327C0BC;
loc_8327C2B8:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x8327C2CC;
	sub_832F6CC8(ctx, base);
loc_8327C2CC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8327c314
	if (ctx.cr6.eq) goto loc_8327C314;
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x8327c2ec
	if (!ctx.cr0.eq) goto loc_8327C2EC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8327C2EC:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8327c304
	if (!ctx.cr6.eq) goto loc_8327C304;
loc_8327C2F4:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8327c330
	goto loc_8327C330;
loc_8327C304:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327c344
	if (!ctx.cr0.eq) goto loc_8327C344;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// b 0x8327c33c
	goto loc_8327C33C;
loc_8327C314:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327c324
	if (ctx.cr0.eq) goto loc_8327C324;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327C324:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8327c2f4
	if (ctx.cr6.eq) goto loc_8327C2F4;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_8327C330:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327c344
	if (!ctx.cr0.eq) goto loc_8327C344;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8327C33C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8327c098
	if (!ctx.cr6.eq) goto loc_8327C098;
loc_8327C344:
	// rlwinm r11,r22,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327c360
	if (!ctx.cr0.eq) goto loc_8327C360;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327c078
	if (!ctx.cr6.eq) goto loc_8327C078;
loc_8327C360:
	// lwz r31,100(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 100);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8327c440
	if (ctx.cr6.eq) goto loc_8327C440;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8321ce60
	ctx.lr = 0x8327C380;
	sub_8321CE60(ctx, base);
	// addi r28,r3,-8
	ctx.r28.s64 = ctx.r3.s64 + -8;
loc_8327C384:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r29,r28,r31
	ctx.r29.u64 = ctx.r28.u64 + ctx.r31.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x8327c434
	if (ctx.cr6.eq) goto loc_8327C434;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,116(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// lwz r11,116(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 116);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,116(r21)
	PPC_STORE_U32(ctx.r21.u32 + 116, ctx.r11.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8327C3CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8327c3f4
	if (ctx.cr6.eq) goto loc_8327C3F4;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327c3ec
	if (!ctx.cr0.eq) goto loc_8327C3EC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x832762e0
	ctx.lr = 0x8327C3EC;
	sub_832762E0(ctx, base);
loc_8327C3EC:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8327c3cc
	goto loc_8327C3CC;
loc_8327C3F4:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8327C3F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8327c434
	if (ctx.cr6.eq) goto loc_8327C434;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8327c42c
	if (ctx.cr6.eq) goto loc_8327C42C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x8327c42c
	if (!ctx.cr6.eq) goto loc_8327C42C;
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327c42c
	if (!ctx.cr0.eq) goto loc_8327C42C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x832762e0
	ctx.lr = 0x8327C42C;
	sub_832762E0(ctx, base);
loc_8327C42C:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x8327c3f8
	goto loc_8327C3F8;
loc_8327C434:
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8327c384
	if (!ctx.cr6.eq) goto loc_8327C384;
loc_8327C440:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327C448"))) PPC_WEAK_FUNC(sub_8327C448);
PPC_FUNC_IMPL(__imp__sub_8327C448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8327C450;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x8327c52c
	if (ctx.cr6.eq) goto loc_8327C52C;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x8327c518
	if (ctx.cr6.eq) goto loc_8327C518;
	// cmpwi cr6,r11,124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 124, ctx.xer);
	// beq cr6,0x8327c518
	if (ctx.cr6.eq) goto loc_8327C518;
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x8327c524
	if (ctx.cr6.eq) goto loc_8327C524;
	// rlwinm r31,r10,31,28,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	// bl 0x83233190
	ctx.lr = 0x8327C494;
	sub_83233190(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r11,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8327c518
	if (ctx.cr6.eq) goto loc_8327C518;
	// lwz r10,640(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 640);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8327c518
	if (ctx.cr6.eq) goto loc_8327C518;
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327c518
	if (!ctx.cr0.eq) goto loc_8327C518;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r3,640(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 640);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327c4f4
	if (!ctx.cr0.eq) goto loc_8327C4F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327c4f4
	if (ctx.cr0.eq) goto loc_8327C4F4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8327c500
	if (!ctx.cr6.gt) goto loc_8327C500;
loc_8327C4F4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8322be98
	ctx.lr = 0x8327C4FC;
	sub_8322BE98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8327C500:
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
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
loc_8327C518:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_8327C524:
	// bl 0x83253180
	ctx.lr = 0x8327C528;
	sub_83253180(ctx, base);
	// b 0x8327c518
	goto loc_8327C518;
loc_8327C52C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83275bd0
	ctx.lr = 0x8327C538;
	sub_83275BD0(ctx, base);
loc_8327C538:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r11,27,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1C000;
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8327c6d8
	if (!ctx.cr6.gt) goto loc_8327C6D8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83276420
	ctx.lr = 0x8327C558;
	sub_83276420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8327C55C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83275bd0
	ctx.lr = 0x8327C568;
	sub_83275BD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327c64c
	if (ctx.cr0.eq) goto loc_8327C64C;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lhz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 16);
	// rlwimi r10,r11,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x8323efd8
	ctx.lr = 0x8327C5A0;
	sub_8323EFD8(ctx, base);
	// sth r3,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r3.u16);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327c5d4
	if (!ctx.cr0.eq) goto loc_8327C5D4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327c5d4
	if (ctx.cr0.eq) goto loc_8327C5D4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8327c5e0
	if (!ctx.cr6.gt) goto loc_8327C5E0;
loc_8327C5D4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8322be98
	ctx.lr = 0x8327C5E0;
	sub_8322BE98(ctx, base);
loc_8327C5E0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
	// lwz r11,696(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327c64c
	if (ctx.cr6.eq) goto loc_8327C64C;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm. r11,r10,0,13,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x70000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327c64c
	if (ctx.cr0.eq) goto loc_8327C64C;
	// lwz r9,696(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 696);
	// rlwinm r11,r10,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// stwx r31,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u32);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,696(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 696);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,696(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 696);
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r10,696(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 696);
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
loc_8327C64C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x8327C660;
	sub_832F6CC8(ctx, base);
	// lwz r11,640(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 640);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327c6d0
	if (ctx.cr6.eq) goto loc_8327C6D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r3,640(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 640);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327c6ac
	if (!ctx.cr0.eq) goto loc_8327C6AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327c6ac
	if (ctx.cr0.eq) goto loc_8327C6AC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8327c6b8
	if (!ctx.cr6.gt) goto loc_8327C6B8;
loc_8327C6AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8322be98
	ctx.lr = 0x8327C6B4;
	sub_8322BE98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8327C6B8:
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
loc_8327C6D0:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// b 0x8327c538
	goto loc_8327C538;
loc_8327C6D8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,44
	ctx.r4.s64 = ctx.r28.s64 + 44;
	// rlwinm r3,r11,13,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327C6EC:
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8327c518
	if (!ctx.cr6.lt) goto loc_8327C518;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r8,r7,27
	ctx.r8.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r7,r7,27,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x3;
	// stwx r8,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r8.u32);
	// stwx r7,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// beq cr6,0x8327c778
	if (ctx.cr6.eq) goto loc_8327C778;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8327C730:
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// lwzx r31,r10,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8327c760
	if (!ctx.cr6.eq) goto loc_8327C760;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// lwzx r31,r10,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8327c760
	if (!ctx.cr6.eq) goto loc_8327C760;
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// lwzx r31,r10,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8327c770
	if (ctx.cr6.eq) goto loc_8327C770;
loc_8327C760:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8327c730
	if (ctx.cr6.lt) goto loc_8327C730;
loc_8327C770:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8327c788
	if (ctx.cr6.lt) goto loc_8327C788;
loc_8327C778:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8327c6ec
	goto loc_8327C6EC;
loc_8327C788:
	// addi r11,r6,11
	ctx.r11.s64 = ctx.r6.s64 + 11;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8327c7b8
	if (ctx.cr6.eq) goto loc_8327C7B8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8327C7B8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83284fc8
	ctx.lr = 0x8327C7C8;
	sub_83284FC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r28,4
	ctx.r27.s64 = ctx.r28.s64 + 4;
loc_8327C7D0:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8327c55c
	if (ctx.cr6.eq) goto loc_8327C55C;
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8327c8e8
	if (ctx.cr6.eq) goto loc_8327C8E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327c8b0
	if (ctx.cr0.eq) goto loc_8327C8B0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r11,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,640(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 640);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327c8b0
	if (ctx.cr6.eq) goto loc_8327C8B0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327c8b0
	if (!ctx.cr0.eq) goto loc_8327C8B0;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r3,640(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 640);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327c88c
	if (!ctx.cr0.eq) goto loc_8327C88C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327c88c
	if (ctx.cr0.eq) goto loc_8327C88C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8327c898
	if (!ctx.cr6.gt) goto loc_8327C898;
loc_8327C88C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8322be98
	ctx.lr = 0x8327C894;
	sub_8322BE98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8327C898:
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
loc_8327C8B0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8327c8c8
	goto loc_8327C8C8;
loc_8327C8C0:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_8327C8C8:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8327c8c0
	if (!ctx.cr6.eq) goto loc_8327C8C0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
loc_8327C8E8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8327c7d0
	if (!ctx.cr6.eq) goto loc_8327C7D0;
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// b 0x8327c7d0
	goto loc_8327C7D0;
}

__attribute__((alias("__imp__sub_8327C8FC"))) PPC_WEAK_FUNC(sub_8327C8FC);
PPC_FUNC_IMPL(__imp__sub_8327C8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327C900"))) PPC_WEAK_FUNC(sub_8327C900);
PPC_FUNC_IMPL(__imp__sub_8327C900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8327C908;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832539a0
	ctx.lr = 0x8327C924;
	sub_832539A0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327c448
	ctx.lr = 0x8327C934;
	sub_8327C448(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327C93C"))) PPC_WEAK_FUNC(sub_8327C93C);
PPC_FUNC_IMPL(__imp__sub_8327C93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327C940"))) PPC_WEAK_FUNC(sub_8327C940);
PPC_FUNC_IMPL(__imp__sub_8327C940) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r10,r11,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r3.u8 & 0x3F));
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327C954"))) PPC_WEAK_FUNC(sub_8327C954);
PPC_FUNC_IMPL(__imp__sub_8327C954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327C958"))) PPC_WEAK_FUNC(sub_8327C958);
PPC_FUNC_IMPL(__imp__sub_8327C958) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327C96C"))) PPC_WEAK_FUNC(sub_8327C96C);
PPC_FUNC_IMPL(__imp__sub_8327C96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327C970"))) PPC_WEAK_FUNC(sub_8327C970);
PPC_FUNC_IMPL(__imp__sub_8327C970) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x832f7330
	sub_832F7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327C980"))) PPC_WEAK_FUNC(sub_8327C980);
PPC_FUNC_IMPL(__imp__sub_8327C980) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x832f7330
	sub_832F7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327C98C"))) PPC_WEAK_FUNC(sub_8327C98C);
PPC_FUNC_IMPL(__imp__sub_8327C98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327C990"))) PPC_WEAK_FUNC(sub_8327C990);
PPC_FUNC_IMPL(__imp__sub_8327C990) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8327c9ac
	if (ctx.cr6.lt) goto loc_8327C9AC;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8327c9b0
	if (!ctx.cr6.gt) goto loc_8327C9B0;
loc_8327C9AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327C9B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327c9cc
	if (!ctx.cr0.eq) goto loc_8327C9CC;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8327c9cc
	if (ctx.cr6.eq) goto loc_8327C9CC;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8327c9d0
	if (!ctx.cr6.eq) goto loc_8327C9D0;
loc_8327C9CC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8327C9D0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327C9D8"))) PPC_WEAK_FUNC(sub_8327C9D8);
PPC_FUNC_IMPL(__imp__sub_8327C9D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8327c9f4
	if (ctx.cr6.eq) goto loc_8327C9F4;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8327C9F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327C9FC"))) PPC_WEAK_FUNC(sub_8327C9FC);
PPC_FUNC_IMPL(__imp__sub_8327C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CA00"))) PPC_WEAK_FUNC(sub_8327CA00);
PPC_FUNC_IMPL(__imp__sub_8327CA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CA1C"))) PPC_WEAK_FUNC(sub_8327CA1C);
PPC_FUNC_IMPL(__imp__sub_8327CA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CA20"))) PPC_WEAK_FUNC(sub_8327CA20);
PPC_FUNC_IMPL(__imp__sub_8327CA20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x8327ca3c
	if (ctx.cr6.eq) goto loc_8327CA3C;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8327ca40
	if (!ctx.cr6.eq) goto loc_8327CA40;
loc_8327CA3C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8327CA40:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CA48"))) PPC_WEAK_FUNC(sub_8327CA48);
PPC_FUNC_IMPL(__imp__sub_8327CA48) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CA58"))) PPC_WEAK_FUNC(sub_8327CA58);
PPC_FUNC_IMPL(__imp__sub_8327CA58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// oris r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 393216;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CA68"))) PPC_WEAK_FUNC(sub_8327CA68);
PPC_FUNC_IMPL(__imp__sub_8327CA68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CA78"))) PPC_WEAK_FUNC(sub_8327CA78);
PPC_FUNC_IMPL(__imp__sub_8327CA78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CA88"))) PPC_WEAK_FUNC(sub_8327CA88);
PPC_FUNC_IMPL(__imp__sub_8327CA88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CA98"))) PPC_WEAK_FUNC(sub_8327CA98);
PPC_FUNC_IMPL(__imp__sub_8327CA98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r11,r11,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CAA8"))) PPC_WEAK_FUNC(sub_8327CAA8);
PPC_FUNC_IMPL(__imp__sub_8327CAA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CAB8"))) PPC_WEAK_FUNC(sub_8327CAB8);
PPC_FUNC_IMPL(__imp__sub_8327CAB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x832fb290
	sub_832FB290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327CAC8"))) PPC_WEAK_FUNC(sub_8327CAC8);
PPC_FUNC_IMPL(__imp__sub_8327CAC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CADC"))) PPC_WEAK_FUNC(sub_8327CADC);
PPC_FUNC_IMPL(__imp__sub_8327CADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CAE0"))) PPC_WEAK_FUNC(sub_8327CAE0);
PPC_FUNC_IMPL(__imp__sub_8327CAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CAF0"))) PPC_WEAK_FUNC(sub_8327CAF0);
PPC_FUNC_IMPL(__imp__sub_8327CAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-128
	ctx.r11.s64 = -8388608;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CB00"))) PPC_WEAK_FUNC(sub_8327CB00);
PPC_FUNC_IMPL(__imp__sub_8327CB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CB10"))) PPC_WEAK_FUNC(sub_8327CB10);
PPC_FUNC_IMPL(__imp__sub_8327CB10) {
	PPC_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// ld r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 16);
	// clrldi r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 & 0x7FFFFFFFFFFFFFFF;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// beq cr6,0x8327cb3c
	if (ctx.cr6.eq) goto loc_8327CB3C;
	// li r12,2047
	ctx.r12.s64 = 2047;
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8327cb40
	if (ctx.cr6.eq) goto loc_8327CB40;
loc_8327CB3C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8327CB40:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CB48"))) PPC_WEAK_FUNC(sub_8327CB48);
PPC_FUNC_IMPL(__imp__sub_8327CB48) {
	PPC_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// clrldi r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 & 0x7FFFFFFFFFFFFFFF;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// beq cr6,0x8327cb78
	if (ctx.cr6.eq) goto loc_8327CB78;
	// li r12,2047
	ctx.r12.s64 = 2047;
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8327cb7c
	if (ctx.cr6.eq) goto loc_8327CB7C;
loc_8327CB78:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8327CB7C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// ld r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 16);
	// rldicr r11,r11,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0x8000000000000000;
	// std r11,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r11.u64);
	// lfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CB98"))) PPC_WEAK_FUNC(sub_8327CB98);
PPC_FUNC_IMPL(__imp__sub_8327CB98) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cb3de8
	sub_82CB3DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327CB9C"))) PPC_WEAK_FUNC(sub_8327CB9C);
PPC_FUNC_IMPL(__imp__sub_8327CB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CBA0"))) PPC_WEAK_FUNC(sub_8327CBA0);
PPC_FUNC_IMPL(__imp__sub_8327CBA0) {
	PPC_FUNC_PROLOGUE();
	// fadd f1,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + ctx.f2.f64;
	// b 0x8327cb48
	sub_8327CB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327CBA8"))) PPC_WEAK_FUNC(sub_8327CBA8);
PPC_FUNC_IMPL(__imp__sub_8327CBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f0,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8327cbc8
	if (ctx.cr6.eq) goto loc_8327CBC8;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// beq cr6,0x8327cbc8
	if (ctx.cr6.eq) goto loc_8327CBC8;
	// fmul f1,f1,f2
	ctx.f1.f64 = ctx.f1.f64 * ctx.f2.f64;
	// b 0x8327cb48
	sub_8327CB48(ctx, base);
	return;
loc_8327CBC8:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CBD0"))) PPC_WEAK_FUNC(sub_8327CBD0);
PPC_FUNC_IMPL(__imp__sub_8327CBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82cb3de8
	ctx.lr = 0x8327CBEC;
	sub_82CB3DE8(ctx, base);
	// fadd f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + ctx.f31.f64;
	// bl 0x8327cb48
	ctx.lr = 0x8327CBF4;
	sub_8327CB48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
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

__attribute__((alias("__imp__sub_8327CC08"))) PPC_WEAK_FUNC(sub_8327CC08);
PPC_FUNC_IMPL(__imp__sub_8327CC08) {
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
	// bl 0x8335df58
	ctx.lr = 0x8327CC1C;
	sub_8335DF58(ctx, base);
	// lfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CC30"))) PPC_WEAK_FUNC(sub_8327CC30);
PPC_FUNC_IMPL(__imp__sub_8327CC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8335df58
	ctx.lr = 0x8327CC50;
	sub_8335DF58(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f0,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// lfd f30,80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bge cr6,0x8327cc84
	if (!ctx.cr6.lt) goto loc_8327CC84;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x8327cc84
	if (ctx.cr6.eq) goto loc_8327CC84;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f1,-18352(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// bl 0x82cb3de8
	ctx.lr = 0x8327CC7C;
	sub_82CB3DE8(ctx, base);
	// fadd f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + ctx.f30.f64;
	// bl 0x8327cb48
	ctx.lr = 0x8327CC84;
	sub_8327CB48(ctx, base);
loc_8327CC84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CC9C"))) PPC_WEAK_FUNC(sub_8327CC9C);
PPC_FUNC_IMPL(__imp__sub_8327CC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CCA0"))) PPC_WEAK_FUNC(sub_8327CCA0);
PPC_FUNC_IMPL(__imp__sub_8327CCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8327cc30
	ctx.lr = 0x8327CCB8;
	sub_8327CC30(ctx, base);
	// bl 0x82cb3de8
	ctx.lr = 0x8327CCBC;
	sub_82CB3DE8(ctx, base);
	// fadd f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + ctx.f31.f64;
	// bl 0x8327cb48
	ctx.lr = 0x8327CCC4;
	sub_8327CB48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
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

__attribute__((alias("__imp__sub_8327CCD8"))) PPC_WEAK_FUNC(sub_8327CCD8);
PPC_FUNC_IMPL(__imp__sub_8327CCD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x8327cd18
	if (!ctx.cr6.eq) goto loc_8327CD18;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8327cd1c
	if (ctx.cr0.eq) goto loc_8327CD1C;
loc_8327CD18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327CD1C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CD24"))) PPC_WEAK_FUNC(sub_8327CD24);
PPC_FUNC_IMPL(__imp__sub_8327CD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CD28"))) PPC_WEAK_FUNC(sub_8327CD28);
PPC_FUNC_IMPL(__imp__sub_8327CD28) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r4,2
	ctx.r3.u64 = ctx.r4.u64 | 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CD30"))) PPC_WEAK_FUNC(sub_8327CD30);
PPC_FUNC_IMPL(__imp__sub_8327CD30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CD34"))) PPC_WEAK_FUNC(sub_8327CD34);
PPC_FUNC_IMPL(__imp__sub_8327CD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CD38"))) PPC_WEAK_FUNC(sub_8327CD38);
PPC_FUNC_IMPL(__imp__sub_8327CD38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CD3C"))) PPC_WEAK_FUNC(sub_8327CD3C);
PPC_FUNC_IMPL(__imp__sub_8327CD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CD40"))) PPC_WEAK_FUNC(sub_8327CD40);
PPC_FUNC_IMPL(__imp__sub_8327CD40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327cd54
	if (!ctx.cr6.eq) goto loc_8327CD54;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_8327CD54:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CD68"))) PPC_WEAK_FUNC(sub_8327CD68);
PPC_FUNC_IMPL(__imp__sub_8327CD68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r7,228
	ctx.r7.s64 = 228;
	// li r6,4
	ctx.r6.s64 = 4;
	// rlwinm r5,r11,18,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// b 0x832edae0
	sub_832EDAE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327CD7C"))) PPC_WEAK_FUNC(sub_8327CD7C);
PPC_FUNC_IMPL(__imp__sub_8327CD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CD80"))) PPC_WEAK_FUNC(sub_8327CD80);
PPC_FUNC_IMPL(__imp__sub_8327CD80) {
	PPC_FUNC_PROLOGUE();
	// ori r11,r5,3
	ctx.r11.u64 = ctx.r5.u64 | 3;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CD8C"))) PPC_WEAK_FUNC(sub_8327CD8C);
PPC_FUNC_IMPL(__imp__sub_8327CD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CD90"))) PPC_WEAK_FUNC(sub_8327CD90);
PPC_FUNC_IMPL(__imp__sub_8327CD90) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x832f24d0
	sub_832F24D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327CD98"))) PPC_WEAK_FUNC(sub_8327CD98);
PPC_FUNC_IMPL(__imp__sub_8327CD98) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,84
	ctx.r6.s64 = 84;
	// b 0x832f02e0
	sub_832F02E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327CDA8"))) PPC_WEAK_FUNC(sub_8327CDA8);
PPC_FUNC_IMPL(__imp__sub_8327CDA8) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,85
	ctx.r6.s64 = 85;
	// b 0x832f02e0
	sub_832F02E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327CDB8"))) PPC_WEAK_FUNC(sub_8327CDB8);
PPC_FUNC_IMPL(__imp__sub_8327CDB8) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x832f9668
	sub_832F9668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327CDC0"))) PPC_WEAK_FUNC(sub_8327CDC0);
PPC_FUNC_IMPL(__imp__sub_8327CDC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8327cdd4
	if (!ctx.cr6.eq) goto loc_8327CDD4;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_8327CDD4:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CDE8"))) PPC_WEAK_FUNC(sub_8327CDE8);
PPC_FUNC_IMPL(__imp__sub_8327CDE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwz r5,12(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// b 0x832f8c00
	sub_832F8C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327CE04"))) PPC_WEAK_FUNC(sub_8327CE04);
PPC_FUNC_IMPL(__imp__sub_8327CE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CE08"))) PPC_WEAK_FUNC(sub_8327CE08);
PPC_FUNC_IMPL(__imp__sub_8327CE08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,18,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CE18"))) PPC_WEAK_FUNC(sub_8327CE18);
PPC_FUNC_IMPL(__imp__sub_8327CE18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// rlwinm r3,r11,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CE30"))) PPC_WEAK_FUNC(sub_8327CE30);
PPC_FUNC_IMPL(__imp__sub_8327CE30) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r4,r11,0,30,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CE40"))) PPC_WEAK_FUNC(sub_8327CE40);
PPC_FUNC_IMPL(__imp__sub_8327CE40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327ce5c
	if (ctx.cr6.eq) goto loc_8327CE5C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8327ce60
	if (!ctx.cr6.eq) goto loc_8327CE60;
loc_8327CE5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327CE60:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CE68"))) PPC_WEAK_FUNC(sub_8327CE68);
PPC_FUNC_IMPL(__imp__sub_8327CE68) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CE78"))) PPC_WEAK_FUNC(sub_8327CE78);
PPC_FUNC_IMPL(__imp__sub_8327CE78) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327ce9c
	if (!ctx.cr0.eq) goto loc_8327CE9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8327CE9C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CEB4"))) PPC_WEAK_FUNC(sub_8327CEB4);
PPC_FUNC_IMPL(__imp__sub_8327CEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CEB8"))) PPC_WEAK_FUNC(sub_8327CEB8);
PPC_FUNC_IMPL(__imp__sub_8327CEB8) {
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
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,148(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm. r10,r10,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327ceec
	if (!ctx.cr0.eq) goto loc_8327CEEC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8327cf00
	goto loc_8327CF00;
loc_8327CEEC:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xFF;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
loc_8327CF00:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8327cf50
	if (ctx.cr6.lt) goto loc_8327CF50;
	// beq cr6,0x8327cf34
	if (ctx.cr6.eq) goto loc_8327CF34;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8327cf1c
	if (ctx.cr6.lt) goto loc_8327CF1C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x83204d78
	ctx.lr = 0x8327CF1C;
	sub_83204D78(ctx, base);
loc_8327CF1C:
	// addi r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x8327cf48
	goto loc_8327CF48;
loc_8327CF34:
	// addi r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwax r11,r10,r11
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8327CF48:
	// fcfid f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(ctx.f0.s64);
	// b 0x8327cf5c
	goto loc_8327CF5C;
loc_8327CF50:
	// addi r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
loc_8327CF5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CF6C"))) PPC_WEAK_FUNC(sub_8327CF6C);
PPC_FUNC_IMPL(__imp__sub_8327CF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CF70"))) PPC_WEAK_FUNC(sub_8327CF70);
PPC_FUNC_IMPL(__imp__sub_8327CF70) {
	PPC_FUNC_PROLOGUE();
	// b 0x8327ceb8
	sub_8327CEB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327CF74"))) PPC_WEAK_FUNC(sub_8327CF74);
PPC_FUNC_IMPL(__imp__sub_8327CF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CF78"))) PPC_WEAK_FUNC(sub_8327CF78);
PPC_FUNC_IMPL(__imp__sub_8327CF78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x8327cf90
	goto loc_8327CF90;
loc_8327CF80:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8327CF90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8327cf80
	if (!ctx.cr6.eq) goto loc_8327CF80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327CF9C"))) PPC_WEAK_FUNC(sub_8327CF9C);
PPC_FUNC_IMPL(__imp__sub_8327CF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CFA0"))) PPC_WEAK_FUNC(sub_8327CFA0);
PPC_FUNC_IMPL(__imp__sub_8327CFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8327CFAC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8327cfc4
	if (ctx.cr6.eq) goto loc_8327CFC4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327cfac
	if (!ctx.cr6.eq) goto loc_8327CFAC;
loc_8327CFC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lis r8,32640
	ctx.r8.s64 = 2139095040;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// addi r10,r4,5
	ctx.r10.s64 = ctx.r4.s64 + 5;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stfdx f0,r9,r11
	PPC_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.f0.u64);
	// stfdx f13,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.f13.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D000"))) PPC_WEAK_FUNC(sub_8327D000);
PPC_FUNC_IMPL(__imp__sub_8327D000) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// rlwinm r10,r4,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFC;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D014"))) PPC_WEAK_FUNC(sub_8327D014);
PPC_FUNC_IMPL(__imp__sub_8327D014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D018"))) PPC_WEAK_FUNC(sub_8327D018);
PPC_FUNC_IMPL(__imp__sub_8327D018) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r5,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// slw r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// and r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ctx.r9.u64;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8327d044
	if (!ctx.cr6.eq) goto loc_8327D044;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8327D044:
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D058"))) PPC_WEAK_FUNC(sub_8327D058);
PPC_FUNC_IMPL(__imp__sub_8327D058) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,15
	ctx.r7.s64 = 15;
	// slw r9,r5,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// and r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ctx.r8.u64;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8327d088
	if (!ctx.cr6.eq) goto loc_8327D088;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8327D088:
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D09C"))) PPC_WEAK_FUNC(sub_8327D09C);
PPC_FUNC_IMPL(__imp__sub_8327D09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D0A0"))) PPC_WEAK_FUNC(sub_8327D0A0);
PPC_FUNC_IMPL(__imp__sub_8327D0A0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8327d0c8
	if (!ctx.cr6.eq) goto loc_8327D0C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8327D0C8:
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,14(r10)
	PPC_STORE_U16(ctx.r10.u32 + 14, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D0D8"))) PPC_WEAK_FUNC(sub_8327D0D8);
PPC_FUNC_IMPL(__imp__sub_8327D0D8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8327d114
	if (!ctx.cr6.eq) goto loc_8327D114;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8327D114:
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D120"))) PPC_WEAK_FUNC(sub_8327D120);
PPC_FUNC_IMPL(__imp__sub_8327D120) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// rlwinm r10,r4,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFC;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D134"))) PPC_WEAK_FUNC(sub_8327D134);
PPC_FUNC_IMPL(__imp__sub_8327D134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D138"))) PPC_WEAK_FUNC(sub_8327D138);
PPC_FUNC_IMPL(__imp__sub_8327D138) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r7,2
	ctx.r7.s64 = 2;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// and r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ctx.r9.u64;
	// clrlwi r7,r6,16
	ctx.r7.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8327d16c
	if (!ctx.cr6.eq) goto loc_8327D16C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8327D16C:
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D180"))) PPC_WEAK_FUNC(sub_8327D180);
PPC_FUNC_IMPL(__imp__sub_8327D180) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r4,13,15,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 13) & 0x1E000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE1FFF);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D190"))) PPC_WEAK_FUNC(sub_8327D190);
PPC_FUNC_IMPL(__imp__sub_8327D190) {
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
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r3,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r8,r11,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// clrlwi r30,r11,27
	ctx.r30.u64 = ctx.r11.u32 & 0x1F;
	// srw r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327d1e8
	if (!ctx.cr0.eq) goto loc_8327D1E8;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8327d1fc
	goto loc_8327D1FC;
loc_8327D1E8:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r31,r11,30
	ctx.r31.u64 = ctx.r11.u32 & 0x3;
loc_8327D1FC:
	// bl 0x8327ceb8
	ctx.lr = 0x8327D200;
	sub_8327CEB8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832ecd18
	ctx.lr = 0x8327D20C;
	sub_832ECD18(ctx, base);
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

__attribute__((alias("__imp__sub_8327D224"))) PPC_WEAK_FUNC(sub_8327D224);
PPC_FUNC_IMPL(__imp__sub_8327D224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D228"))) PPC_WEAK_FUNC(sub_8327D228);
PPC_FUNC_IMPL(__imp__sub_8327D228) {
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
	// lhz r10,14(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 14);
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// bl 0x83257f28
	ctx.lr = 0x8327D260;
	sub_83257F28(ctx, base);
	// rlwinm r3,r3,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D274"))) PPC_WEAK_FUNC(sub_8327D274);
PPC_FUNC_IMPL(__imp__sub_8327D274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D278"))) PPC_WEAK_FUNC(sub_8327D278);
PPC_FUNC_IMPL(__imp__sub_8327D278) {
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
	// lhz r10,14(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 14);
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// bl 0x83257f28
	ctx.lr = 0x8327D2B0;
	sub_83257F28(ctx, base);
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D2C4"))) PPC_WEAK_FUNC(sub_8327D2C4);
PPC_FUNC_IMPL(__imp__sub_8327D2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D2C8"))) PPC_WEAK_FUNC(sub_8327D2C8);
PPC_FUNC_IMPL(__imp__sub_8327D2C8) {
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
	// lhz r10,14(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 14);
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// bl 0x83257f28
	ctx.lr = 0x8327D300;
	sub_83257F28(ctx, base);
	// rlwinm r3,r3,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D314"))) PPC_WEAK_FUNC(sub_8327D314);
PPC_FUNC_IMPL(__imp__sub_8327D314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D318"))) PPC_WEAK_FUNC(sub_8327D318);
PPC_FUNC_IMPL(__imp__sub_8327D318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D32C"))) PPC_WEAK_FUNC(sub_8327D32C);
PPC_FUNC_IMPL(__imp__sub_8327D32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D330"))) PPC_WEAK_FUNC(sub_8327D330);
PPC_FUNC_IMPL(__imp__sub_8327D330) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_8327D334:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327d358
	if (ctx.cr6.eq) goto loc_8327D358;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8327d350
	if (ctx.cr6.eq) goto loc_8327D350;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8327d334
	goto loc_8327D334;
loc_8327D350:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8327D358:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D360"))) PPC_WEAK_FUNC(sub_8327D360);
PPC_FUNC_IMPL(__imp__sub_8327D360) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D368"))) PPC_WEAK_FUNC(sub_8327D368);
PPC_FUNC_IMPL(__imp__sub_8327D368) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
loc_8327D37C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8327d39c
	if (ctx.cr6.eq) goto loc_8327D39C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8327d37c
	if (ctx.cr6.lt) goto loc_8327D37C;
	// blr 
	return;
loc_8327D39C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D3AC"))) PPC_WEAK_FUNC(sub_8327D3AC);
PPC_FUNC_IMPL(__imp__sub_8327D3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D3B0"))) PPC_WEAK_FUNC(sub_8327D3B0);
PPC_FUNC_IMPL(__imp__sub_8327D3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8327D3B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8327d3d4
	if (!ctx.cr6.eq) goto loc_8327D3D4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8327d428
	if (!ctx.cr6.eq) goto loc_8327D428;
loc_8327D3CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8327d42c
	goto loc_8327D42C;
loc_8327D3D4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8327d428
	if (ctx.cr6.eq) goto loc_8327D428;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8327d428
	if (!ctx.cr6.eq) goto loc_8327D428;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8327d3cc
	if (ctx.cr6.eq) goto loc_8327D3CC;
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// subf r28,r4,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_8327D400:
	// lwzx r4,r28,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8321cb38
	ctx.lr = 0x8327D40C;
	sub_8321CB38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327d428
	if (ctx.cr0.eq) goto loc_8327D428;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8327d400
	if (ctx.cr6.lt) goto loc_8327D400;
	// b 0x8327d3cc
	goto loc_8327D3CC;
loc_8327D428:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327D42C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327D434"))) PPC_WEAK_FUNC(sub_8327D434);
PPC_FUNC_IMPL(__imp__sub_8327D434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D438"))) PPC_WEAK_FUNC(sub_8327D438);
PPC_FUNC_IMPL(__imp__sub_8327D438) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r9,r9,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8327d504
	if (!ctx.cr0.eq) goto loc_8327D504;
	// rlwinm r9,r11,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwinm r8,r10,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8327d504
	if (!ctx.cr6.eq) goto loc_8327D504;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r7,r7,0,7,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8327d504
	if (!ctx.cr0.eq) goto loc_8327D504;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8327d4c4
	if (ctx.cr6.eq) goto loc_8327D4C4;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r7,r10,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r6,r11,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8327d504
	if (!ctx.cr0.eq) goto loc_8327D504;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327d504
	if (!ctx.cr0.eq) goto loc_8327D504;
loc_8327D4C4:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1;
	// rlwinm r8,r8,3,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8327d504
	if (!ctx.cr6.eq) goto loc_8327D504;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8327d518
	if (!ctx.cr6.eq) goto loc_8327D518;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8327d524
	if (ctx.cr6.eq) goto loc_8327D524;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x832ed910
	ctx.lr = 0x8327D4FC;
	sub_832ED910(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327d524
	if (!ctx.cr0.eq) goto loc_8327D524;
loc_8327D504:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327D508:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8327D518:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8327d504
	if (!ctx.cr6.eq) goto loc_8327D504;
loc_8327D524:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8327d508
	goto loc_8327D508;
}

__attribute__((alias("__imp__sub_8327D52C"))) PPC_WEAK_FUNC(sub_8327D52C);
PPC_FUNC_IMPL(__imp__sub_8327D52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D530"))) PPC_WEAK_FUNC(sub_8327D530);
PPC_FUNC_IMPL(__imp__sub_8327D530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// rlwinm r8,r8,25,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x7F;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8327d580
	if (ctx.cr6.lt) goto loc_8327D580;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8327d560
	if (!ctx.cr6.eq) goto loc_8327D560;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8327d580
	if (ctx.cr6.lt) goto loc_8327D580;
loc_8327D560:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8327d578
	if (!ctx.cr6.eq) goto loc_8327D578;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8327d580
	if (ctx.cr6.lt) goto loc_8327D580;
loc_8327D578:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8327d584
	goto loc_8327D584;
loc_8327D580:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8327D584:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D58C"))) PPC_WEAK_FUNC(sub_8327D58C);
PPC_FUNC_IMPL(__imp__sub_8327D58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D590"))) PPC_WEAK_FUNC(sub_8327D590);
PPC_FUNC_IMPL(__imp__sub_8327D590) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8327d5d4
	if (!ctx.cr6.gt) goto loc_8327D5D4;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// bne cr6,0x8327d5b8
	if (!ctx.cr6.eq) goto loc_8327D5B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8327D5B8:
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x8327d5d4
	if (ctx.cr6.eq) goto loc_8327D5D4;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// beq cr6,0x8327d5d4
	if (ctx.cr6.eq) goto loc_8327D5D4;
	// cmplwi cr6,r10,110
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 110, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8327D5D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D5DC"))) PPC_WEAK_FUNC(sub_8327D5DC);
PPC_FUNC_IMPL(__imp__sub_8327D5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D5E0"))) PPC_WEAK_FUNC(sub_8327D5E0);
PPC_FUNC_IMPL(__imp__sub_8327D5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8327D5E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r4,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x8327d624
	if (ctx.cr6.eq) goto loc_8327D624;
loc_8327D614:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327D618:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8327D620:
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_8327D624:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16000, ctx.xer);
	// beq cr6,0x8327d6ac
	if (ctx.cr6.eq) goto loc_8327D6AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x832eefb8
	ctx.lr = 0x8327D65C;
	sub_832EEFB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327d614
	if (!ctx.cr6.eq) goto loc_8327D614;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_8327D670:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8327d694
	if (ctx.cr6.eq) goto loc_8327D694;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327d68c
	if (ctx.cr6.eq) goto loc_8327D68C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8327d614
	if (!ctx.cr6.eq) goto loc_8327D614;
loc_8327D68C:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8327d670
	goto loc_8327D670;
loc_8327D694:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x8327d620
	if (ctx.cr6.eq) goto loc_8327D620;
	// b 0x8327d614
	goto loc_8327D614;
loc_8327D6AC:
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x8327d618
	goto loc_8327D618;
}

__attribute__((alias("__imp__sub_8327D6DC"))) PPC_WEAK_FUNC(sub_8327D6DC);
PPC_FUNC_IMPL(__imp__sub_8327D6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D6E0"))) PPC_WEAK_FUNC(sub_8327D6E0);
PPC_FUNC_IMPL(__imp__sub_8327D6E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16000, ctx.xer);
	// bne cr6,0x8327d730
	if (!ctx.cr6.eq) goto loc_8327D730;
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm. r10,r10,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8327d718
	if (!ctx.cr0.eq) goto loc_8327D718;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8327D718:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
loc_8327D730:
	// rlwinm. r10,r10,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lhz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// rlwinm r10,r4,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFC;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D76C"))) PPC_WEAK_FUNC(sub_8327D76C);
PPC_FUNC_IMPL(__imp__sub_8327D76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D770"))) PPC_WEAK_FUNC(sub_8327D770);
PPC_FUNC_IMPL(__imp__sub_8327D770) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8327d780
	if (ctx.cr6.eq) goto loc_8327D780;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8327D780:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D788"))) PPC_WEAK_FUNC(sub_8327D788);
PPC_FUNC_IMPL(__imp__sub_8327D788) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,68(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// lwz r8,68(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// clrlwi r9,r9,4
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFFFF;
	// clrlwi r8,r8,4
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFFFFF;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D7C0"))) PPC_WEAK_FUNC(sub_8327D7C0);
PPC_FUNC_IMPL(__imp__sub_8327D7C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327d7d4
	if (ctx.cr0.eq) goto loc_8327D7D4;
loc_8327D7CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8327D7D4:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327d810
	if (ctx.cr0.eq) goto loc_8327D810;
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327d7cc
	if (ctx.cr0.eq) goto loc_8327D7CC;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f0,-18344(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18344);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8327d7fc
	if (!ctx.cr6.gt) goto loc_8327D7FC;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327d7cc
	if (ctx.cr0.eq) goto loc_8327D7CC;
loc_8327D7FC:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8327d820
	if (!ctx.cr6.lt) goto loc_8327D820;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327d820
	if (!ctx.cr0.eq) goto loc_8327D820;
	// b 0x8327d7cc
	goto loc_8327D7CC;
loc_8327D810:
	// lfd f0,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lfd f13,16(r3)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8327d7cc
	if (!ctx.cr6.eq) goto loc_8327D7CC;
loc_8327D820:
	// stfd f0,0(r6)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.f0.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D82C"))) PPC_WEAK_FUNC(sub_8327D82C);
PPC_FUNC_IMPL(__imp__sub_8327D82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D830"))) PPC_WEAK_FUNC(sub_8327D830);
PPC_FUNC_IMPL(__imp__sub_8327D830) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// b 0x8327d868
	goto loc_8327D868;
loc_8327D838:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327d864
	if (ctx.cr0.eq) goto loc_8327D864;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8327d85c
	goto loc_8327D85C;
loc_8327D84C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8327d878
	if (ctx.cr6.eq) goto loc_8327D878;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8327D85C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327d84c
	if (!ctx.cr6.eq) goto loc_8327D84C;
loc_8327D864:
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
loc_8327D868:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8327d838
	if (!ctx.cr6.eq) goto loc_8327D838;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8327D878:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D880"))) PPC_WEAK_FUNC(sub_8327D880);
PPC_FUNC_IMPL(__imp__sub_8327D880) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327D888:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8327d8ac
	if (!ctx.cr6.eq) goto loc_8327D8AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8327d888
	if (ctx.cr6.lt) goto loc_8327D888;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8327D8AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D8B4"))) PPC_WEAK_FUNC(sub_8327D8B4);
PPC_FUNC_IMPL(__imp__sub_8327D8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D8B8"))) PPC_WEAK_FUNC(sub_8327D8B8);
PPC_FUNC_IMPL(__imp__sub_8327D8B8) {
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
loc_8327D8DC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8327d900
	if (!ctx.cr0.eq) goto loc_8327D900;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8327d8dc
	if (ctx.cr6.lt) goto loc_8327D8DC;
	// blr 
	return;
loc_8327D900:
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

__attribute__((alias("__imp__sub_8327D91C"))) PPC_WEAK_FUNC(sub_8327D91C);
PPC_FUNC_IMPL(__imp__sub_8327D91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D920"))) PPC_WEAK_FUNC(sub_8327D920);
PPC_FUNC_IMPL(__imp__sub_8327D920) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_8327D92C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8327d954
	if (!ctx.cr6.eq) goto loc_8327D954;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x8327d92c
	if (ctx.cr6.lt) goto loc_8327D92C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8327D954:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D95C"))) PPC_WEAK_FUNC(sub_8327D95C);
PPC_FUNC_IMPL(__imp__sub_8327D95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D960"))) PPC_WEAK_FUNC(sub_8327D960);
PPC_FUNC_IMPL(__imp__sub_8327D960) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327d980
	if (ctx.cr6.eq) goto loc_8327D980;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8327d984
	if (!ctx.cr6.eq) goto loc_8327D984;
loc_8327D980:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8327D984:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D98C"))) PPC_WEAK_FUNC(sub_8327D98C);
PPC_FUNC_IMPL(__imp__sub_8327D98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D990"))) PPC_WEAK_FUNC(sub_8327D990);
PPC_FUNC_IMPL(__imp__sub_8327D990) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327d9b0
	if (ctx.cr6.eq) goto loc_8327D9B0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8327d9b4
	if (!ctx.cr6.eq) goto loc_8327D9B4;
loc_8327D9B0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8327D9B4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D9BC"))) PPC_WEAK_FUNC(sub_8327D9BC);
PPC_FUNC_IMPL(__imp__sub_8327D9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D9C0"))) PPC_WEAK_FUNC(sub_8327D9C0);
PPC_FUNC_IMPL(__imp__sub_8327D9C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327d9e0
	if (ctx.cr6.eq) goto loc_8327D9E0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8327d9e4
	if (!ctx.cr6.eq) goto loc_8327D9E4;
loc_8327D9E0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8327D9E4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D9EC"))) PPC_WEAK_FUNC(sub_8327D9EC);
PPC_FUNC_IMPL(__imp__sub_8327D9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D9F0"))) PPC_WEAK_FUNC(sub_8327D9F0);
PPC_FUNC_IMPL(__imp__sub_8327D9F0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D9FC"))) PPC_WEAK_FUNC(sub_8327D9FC);
PPC_FUNC_IMPL(__imp__sub_8327D9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DA00"))) PPC_WEAK_FUNC(sub_8327DA00);
PPC_FUNC_IMPL(__imp__sub_8327DA00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA04"))) PPC_WEAK_FUNC(sub_8327DA04);
PPC_FUNC_IMPL(__imp__sub_8327DA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DA08"))) PPC_WEAK_FUNC(sub_8327DA08);
PPC_FUNC_IMPL(__imp__sub_8327DA08) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA14"))) PPC_WEAK_FUNC(sub_8327DA14);
PPC_FUNC_IMPL(__imp__sub_8327DA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DA18"))) PPC_WEAK_FUNC(sub_8327DA18);
PPC_FUNC_IMPL(__imp__sub_8327DA18) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA20"))) PPC_WEAK_FUNC(sub_8327DA20);
PPC_FUNC_IMPL(__imp__sub_8327DA20) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA2C"))) PPC_WEAK_FUNC(sub_8327DA2C);
PPC_FUNC_IMPL(__imp__sub_8327DA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DA30"))) PPC_WEAK_FUNC(sub_8327DA30);
PPC_FUNC_IMPL(__imp__sub_8327DA30) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA38"))) PPC_WEAK_FUNC(sub_8327DA38);
PPC_FUNC_IMPL(__imp__sub_8327DA38) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA40"))) PPC_WEAK_FUNC(sub_8327DA40);
PPC_FUNC_IMPL(__imp__sub_8327DA40) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA4C"))) PPC_WEAK_FUNC(sub_8327DA4C);
PPC_FUNC_IMPL(__imp__sub_8327DA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DA50"))) PPC_WEAK_FUNC(sub_8327DA50);
PPC_FUNC_IMPL(__imp__sub_8327DA50) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA58"))) PPC_WEAK_FUNC(sub_8327DA58);
PPC_FUNC_IMPL(__imp__sub_8327DA58) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA60"))) PPC_WEAK_FUNC(sub_8327DA60);
PPC_FUNC_IMPL(__imp__sub_8327DA60) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA6C"))) PPC_WEAK_FUNC(sub_8327DA6C);
PPC_FUNC_IMPL(__imp__sub_8327DA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DA70"))) PPC_WEAK_FUNC(sub_8327DA70);
PPC_FUNC_IMPL(__imp__sub_8327DA70) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA78"))) PPC_WEAK_FUNC(sub_8327DA78);
PPC_FUNC_IMPL(__imp__sub_8327DA78) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA80"))) PPC_WEAK_FUNC(sub_8327DA80);
PPC_FUNC_IMPL(__imp__sub_8327DA80) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA88"))) PPC_WEAK_FUNC(sub_8327DA88);
PPC_FUNC_IMPL(__imp__sub_8327DA88) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA90"))) PPC_WEAK_FUNC(sub_8327DA90);
PPC_FUNC_IMPL(__imp__sub_8327DA90) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA98"))) PPC_WEAK_FUNC(sub_8327DA98);
PPC_FUNC_IMPL(__imp__sub_8327DA98) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DAA0"))) PPC_WEAK_FUNC(sub_8327DAA0);
PPC_FUNC_IMPL(__imp__sub_8327DAA0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DAA8"))) PPC_WEAK_FUNC(sub_8327DAA8);
PPC_FUNC_IMPL(__imp__sub_8327DAA8) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DAB0"))) PPC_WEAK_FUNC(sub_8327DAB0);
PPC_FUNC_IMPL(__imp__sub_8327DAB0) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DAB8"))) PPC_WEAK_FUNC(sub_8327DAB8);
PPC_FUNC_IMPL(__imp__sub_8327DAB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DABC"))) PPC_WEAK_FUNC(sub_8327DABC);
PPC_FUNC_IMPL(__imp__sub_8327DABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DAC0"))) PPC_WEAK_FUNC(sub_8327DAC0);
PPC_FUNC_IMPL(__imp__sub_8327DAC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DAC4"))) PPC_WEAK_FUNC(sub_8327DAC4);
PPC_FUNC_IMPL(__imp__sub_8327DAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DAC8"))) PPC_WEAK_FUNC(sub_8327DAC8);
PPC_FUNC_IMPL(__imp__sub_8327DAC8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DAD4"))) PPC_WEAK_FUNC(sub_8327DAD4);
PPC_FUNC_IMPL(__imp__sub_8327DAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DAD8"))) PPC_WEAK_FUNC(sub_8327DAD8);
PPC_FUNC_IMPL(__imp__sub_8327DAD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DADC"))) PPC_WEAK_FUNC(sub_8327DADC);
PPC_FUNC_IMPL(__imp__sub_8327DADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DAE0"))) PPC_WEAK_FUNC(sub_8327DAE0);
PPC_FUNC_IMPL(__imp__sub_8327DAE0) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

