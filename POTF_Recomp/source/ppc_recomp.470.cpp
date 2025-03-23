#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82E9F478"))) PPC_WEAK_FUNC(sub_82E9F478);
PPC_FUNC_IMPL(__imp__sub_82E9F478) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82E9F480;
	__savegprlr_23(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r9,16640
	ctx.r9.s64 = 1090519040;
	// ori r7,r11,18618
	ctx.r7.u64 = ctx.r11.u64 | 18618;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// clrlwi r4,r4,26
	ctx.r4.u64 = ctx.r4.u32 & 0x3F;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r31,r6,0,0,19
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFF000;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// rlwinm r5,r5,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r24,-16384
	ctx.r24.s64 = -1073741824;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// ori r4,r24,13824
	ctx.r4.u64 = ctx.r24.u64 | 13824;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r7,r6,3
	ctx.r7.u64 = ctx.r6.u64 | 3;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// li r8,33
	ctx.r8.s64 = 33;
	// li r10,2609
	ctx.r10.s64 = 2609;
	// rlwimi r6,r8,28,30,5
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 28) & 0xFFFFFFFFFC000003) | (ctx.r6.u64 & 0x3FFFFFC);
	// lis r30,1
	ctx.r30.s64 = 65536;
	// lis r8,1280
	ctx.r8.s64 = 83886080;
	// ori r30,r30,2607
	ctx.r30.u64 = ctx.r30.u64 | 2607;
	// lis r29,-16380
	ctx.r29.s64 = -1073479680;
	// li r28,3
	ctx.r28.s64 = 3;
	// ori r29,r29,15360
	ctx.r29.u64 = ctx.r29.u64 | 15360;
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// lis r26,2
	ctx.r26.s64 = 131072;
	// lwz r23,16(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r25,8
	ctx.r25.s64 = 8;
	// ori r26,r26,20480
	ctx.r26.u64 = ctx.r26.u64 | 20480;
	// ori r5,r5,128
	ctx.r5.u64 = ctx.r5.u64 | 128;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// lwz r24,16(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// lwz r24,16(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r11.u32);
	// lwz r24,16(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r11.u32);
	// lwz r24,16(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r7.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r6,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r6.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r10.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r8.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r30,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r30.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r9,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r9.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r31,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r31.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r29,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r29.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r28,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, ctx.r28.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r10.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r27,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r27.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r25,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r25.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r26,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r26.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r4,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r4.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r5,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r5.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9F5CC"))) PPC_WEAK_FUNC(sub_82E9F5CC);
PPC_FUNC_IMPL(__imp__sub_82E9F5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9F5D0"))) PPC_WEAK_FUNC(sub_82E9F5D0);
PPC_FUNC_IMPL(__imp__sub_82E9F5D0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82E9F5D8;
	__savegprlr_19(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r9,16640
	ctx.r9.s64 = 1090519040;
	// ori r30,r11,18618
	ctx.r30.u64 = ctx.r11.u64 | 18618;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r29,r8,0,0,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFF000;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// li r31,33
	ctx.r31.s64 = 33;
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r30,r8,3
	ctx.r30.u64 = ctx.r8.u64 | 3;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// li r10,2609
	ctx.r10.s64 = 2609;
	// rlwimi r27,r31,28,30,5
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r31.u32, 28) & 0xFFFFFFFFFC000003) | (ctx.r27.u64 & 0x3FFFFFC);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r31,1280
	ctx.r31.s64 = 83886080;
	// ori r26,r8,2607
	ctx.r26.u64 = ctx.r8.u64 | 2607;
	// lis r8,-16380
	ctx.r8.s64 = -1073479680;
	// li r25,3
	ctx.r25.s64 = 3;
	// ori r24,r8,15360
	ctx.r24.u64 = ctx.r8.u64 | 15360;
	// lis r23,-32768
	ctx.r23.s64 = -2147483648;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r22,8
	ctx.r22.s64 = 8;
	// ori r21,r8,20480
	ctx.r21.u64 = ctx.r8.u64 | 20480;
	// clrlwi r8,r4,26
	ctx.r8.u64 = ctx.r4.u32 & 0x3F;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// lwz r19,16(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r20,r5,8
	ctx.r20.u64 = ctx.r5.u32 & 0xFFFFFF;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// oris r4,r20,16384
	ctx.r4.u64 = ctx.r20.u64 | 1073741824;
	// stw r11,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r11.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r30,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r30.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r27,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r27.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r10.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r31,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r31.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r26,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r26.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r28,40(r7)
	PPC_STORE_U32(ctx.r7.u32 + 40, ctx.r28.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r29,44(r7)
	PPC_STORE_U32(ctx.r7.u32 + 44, ctx.r29.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r24,48(r7)
	PPC_STORE_U32(ctx.r7.u32 + 48, ctx.r24.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r25,52(r7)
	PPC_STORE_U32(ctx.r7.u32 + 52, ctx.r25.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,56(r7)
	PPC_STORE_U32(ctx.r7.u32 + 56, ctx.r10.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r23,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r23.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r22,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r22.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r21,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r21.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// bne cr6,0x82e9f714
	if (!ctx.cr6.eq) goto loc_82E9F714;
	// rlwinm r10,r5,1,8,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFE;
	// ori r8,r8,2048
	ctx.r8.u64 = ctx.r8.u64 | 2048;
	// oris r4,r10,32768
	ctx.r4.u64 = ctx.r10.u64 | 2147483648;
loc_82E9F714:
	// lis r10,2031
	ctx.r10.s64 = 133103616;
	// addis r7,r6,-32528
	ctx.r7.s64 = ctx.r6.s64 + -2131755008;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82e9f730
	if (ctx.cr6.gt) goto loc_82E9F730;
	// add r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	// b 0x82e9f744
	goto loc_82E9F744;
loc_82E9F730:
	// rlwinm r10,r6,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r6,3
	ctx.r9.u64 = ctx.r6.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82E9F744:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r7,-16381
	ctx.r7.s64 = -1073545216;
	// ori r7,r7,8704
	ctx.r7.u64 = ctx.r7.u64 | 8704;
	// stw r7,88(r9)
	PPC_STORE_U32(ctx.r9.u32 + 88, ctx.r7.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,92(r9)
	PPC_STORE_U32(ctx.r9.u32 + 92, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r8.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r4,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r4.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9F784"))) PPC_WEAK_FUNC(sub_82E9F784);
PPC_FUNC_IMPL(__imp__sub_82E9F784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9F788"))) PPC_WEAK_FUNC(sub_82E9F788);
PPC_FUNC_IMPL(__imp__sub_82E9F788) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-16382
	ctx.r9.s64 = -1073610752;
	// li r6,27
	ctx.r6.s64 = 27;
	// ori r9,r9,22528
	ctx.r9.u64 = ctx.r9.u64 | 22528;
	// lwz r11,2340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2340);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r7,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82E9F7FC:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82E9F800:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82e9f824
	if (!ctx.cr6.eq) goto loc_82E9F824;
	// stwcx. r8,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82e9f800
	if (!ctx.cr0.eq) goto loc_82E9F800;
	// b 0x82e9f82c
	goto loc_82E9F82C;
loc_82E9F824:
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82E9F82C:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e9f7fc
	if (!ctx.cr6.eq) goto loc_82E9F7FC;
	// lwsync 
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// addis r9,r11,16640
	ctx.r9.s64 = ctx.r11.s64 + 1090519040;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82e88998
	ctx.lr = 0x82E9F864;
	sub_82E88998(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwsync 
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82E9F888"))) PPC_WEAK_FUNC(sub_82E9F888);
PPC_FUNC_IMPL(__imp__sub_82E9F888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E9F890;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-16382
	ctx.r9.s64 = -1073610752;
	// li r6,27
	ctx.r6.s64 = 27;
	// ori r9,r9,22528
	ctx.r9.u64 = ctx.r9.u64 | 22528;
	// lwz r11,2340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2340);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r7,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82E9F8F8:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82E9F8FC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82e9f920
	if (!ctx.cr6.eq) goto loc_82E9F920;
	// stwcx. r8,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82e9f8fc
	if (!ctx.cr0.eq) goto loc_82E9F8FC;
	// b 0x82e9f928
	goto loc_82E9F928;
loc_82E9F920:
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82E9F928:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e9f8f8
	if (!ctx.cr6.eq) goto loc_82E9F8F8;
	// lwsync 
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// addis r9,r11,16640
	ctx.r9.s64 = ctx.r11.s64 + 1090519040;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82e88998
	ctx.lr = 0x82E9F960;
	sub_82E88998(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e9f97c
	if (ctx.cr6.eq) goto loc_82E9F97C;
loc_82E9F974:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82e9f9a8
	goto loc_82E9F9A8;
loc_82E9F97C:
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e9f974
	if (!ctx.cr6.lt) goto loc_82E9F974;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwsync 
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82E9F9A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9F9B0"))) PPC_WEAK_FUNC(sub_82E9F9B0);
PPC_FUNC_IMPL(__imp__sub_82E9F9B0) {
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
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// lwz r10,10896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// andi. r11,r11,253
	ctx.r11.u64 = ctx.r11.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,10940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10940, ctx.r11.u8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82e898a8
	ctx.lr = 0x82E9F9DC;
	sub_82E898A8(ctx, base);
	// addi r3,r31,13288
	ctx.r3.s64 = ctx.r31.s64 + 13288;
	// bl 0x82e88580
	ctx.lr = 0x82E9F9E4;
	sub_82E88580(ctx, base);
	// addi r3,r31,13308
	ctx.r3.s64 = ctx.r31.s64 + 13308;
	// bl 0x82e88580
	ctx.lr = 0x82E9F9EC;
	sub_82E88580(ctx, base);
	// addi r3,r31,13328
	ctx.r3.s64 = ctx.r31.s64 + 13328;
	// bl 0x82e88580
	ctx.lr = 0x82E9F9F4;
	sub_82E88580(ctx, base);
	// lwz r11,13376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13376);
	// lwz r9,13380(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13380);
	// addi r3,r31,13368
	ctx.r3.s64 = ctx.r31.s64 + 13368;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82e9fa14
	if (!ctx.cr6.gt) goto loc_82E9FA14;
	// bl 0x82e89308
	ctx.lr = 0x82E9FA10;
	sub_82E89308(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E9FA14:
	// lis r10,-29952
	ctx.r10.s64 = -1962934272;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,13376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13376, ctx.r9.u32);
	// bne 0x82e9fa5c
	if (!ctx.cr0.eq) goto loc_82E9FA5C;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e9fa5c
	if (!ctx.cr0.eq) goto loc_82E9FA5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,11808(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11808);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9ea10
	ctx.lr = 0x82E9FA48;
	sub_82E9EA10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e9fa5c
	if (ctx.cr0.eq) goto loc_82E9FA5C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82e9fa60
	goto loc_82E9FA60;
loc_82E9FA5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E9FA60:
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

__attribute__((alias("__imp__sub_82E9FA74"))) PPC_WEAK_FUNC(sub_82E9FA74);
PPC_FUNC_IMPL(__imp__sub_82E9FA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9FA78"))) PPC_WEAK_FUNC(sub_82E9FA78);
PPC_FUNC_IMPL(__imp__sub_82E9FA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E9FA80;
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
	// addi r3,r31,13368
	ctx.r3.s64 = ctx.r31.s64 + 13368;
	// lwz r11,13376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13376);
	// lwz r10,13380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13380);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e9fab0
	if (!ctx.cr6.gt) goto loc_82E9FAB0;
	// bl 0x82e89308
	ctx.lr = 0x82E9FAAC;
	sub_82E89308(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E9FAB0:
	// lis r10,-29696
	ctx.r10.s64 = -1946157056;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,13376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13376, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9FAD0"))) PPC_WEAK_FUNC(sub_82E9FAD0);
PPC_FUNC_IMPL(__imp__sub_82E9FAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E9FAD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r29,r30,29,3,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e9fb00
	if (!ctx.cr6.gt) goto loc_82E9FB00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E9FB00;
	sub_82E898A8(ctx, base);
loc_82E9FB00:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x82e9fca0
	if (ctx.cr0.eq) goto loc_82E9FCA0;
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// lwz r10,10932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10932);
	// andi. r11,r11,251
	ctx.r11.u64 = ctx.r11.u64 & 251;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,10936(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10936);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,10940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10940, ctx.r11.u8);
	// bne cr6,0x82e9fc24
	if (!ctx.cr6.eq) goto loc_82E9FC24;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82e9fc24
	if (!ctx.cr6.eq) goto loc_82E9FC24;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,12716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12716, ctx.r8.u32);
	// bne 0x82e9fc08
	if (!ctx.cr0.eq) goto loc_82E9FC08;
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e9fc08
	if (!ctx.cr0.eq) goto loc_82E9FC08;
	// lbz r11,12187(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12187);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e9fc08
	if (!ctx.cr0.eq) goto loc_82E9FC08;
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e9fb68
	if (ctx.cr0.eq) goto loc_82E9FB68;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e9fbfc
	goto loc_82E9FBFC;
loc_82E9FB68:
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e9fbf4
	if (ctx.cr0.eq) goto loc_82E9FBF4;
	// lwz r11,12440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// lwz r10,12728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12728);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e9fb8c
	if (ctx.cr6.eq) goto loc_82E9FB8C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e9fbf4
	if (!ctx.cr6.eq) goto loc_82E9FBF4;
loc_82E9FB8C:
	// lwz r11,12444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12444);
	// lwz r10,12732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12732);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e9fba4
	if (ctx.cr6.eq) goto loc_82E9FBA4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e9fbf4
	if (!ctx.cr6.eq) goto loc_82E9FBF4;
loc_82E9FBA4:
	// lwz r11,12448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12448);
	// lwz r10,12736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12736);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e9fbbc
	if (ctx.cr6.eq) goto loc_82E9FBBC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e9fbf4
	if (!ctx.cr6.eq) goto loc_82E9FBF4;
loc_82E9FBBC:
	// lwz r11,12452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// lwz r10,12740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12740);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e9fbd4
	if (ctx.cr6.eq) goto loc_82E9FBD4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e9fbf4
	if (!ctx.cr6.eq) goto loc_82E9FBF4;
loc_82E9FBD4:
	// lwz r11,12456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// lwz r10,12744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12744);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e9fbec
	if (ctx.cr6.eq) goto loc_82E9FBEC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e9fbf4
	if (!ctx.cr6.eq) goto loc_82E9FBF4;
loc_82E9FBEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e9fbf8
	goto loc_82E9FBF8;
loc_82E9FBF4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82E9FBF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82E9FBFC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82e9fc0c
	if (!ctx.cr0.eq) goto loc_82E9FC0C;
loc_82E9FC08:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82E9FC0C:
	// lbz r10,10940(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r8,12712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12712, ctx.r8.u32);
	// rlwimi r11,r10,0,24,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF01);
	// stw r9,12708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12708, ctx.r9.u32);
	// b 0x82e9fc38
	goto loc_82E9FC38;
loc_82E9FC24:
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,12708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12708, ctx.r10.u32);
	// rlwinm r11,r11,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE;
	// stw r9,12712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12712, ctx.r9.u32);
	// stw r7,12716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12716, ctx.r7.u32);
loc_82E9FC38:
	// stb r11,10940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10940, ctx.r11.u8);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 24576;
	// ori r10,r10,24832
	ctx.r10.u64 = ctx.r10.u64 | 24832;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r12,1
	ctx.r12.s64 = 1;
	// lwz r9,12708(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12708);
	// lis r11,-16383
	ctx.r11.s64 = -1073676288;
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// ori r11,r11,23040
	ctx.r11.u64 = ctx.r11.u64 | 23040;
	// li r7,26
	ctx.r7.s64 = 26;
	// ori r6,r29,1
	ctx.r6.u64 = ctx.r29.u64 | 1;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r10,12712(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12712);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r8,10672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10672, ctx.r8.u32);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r10.u64);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// b 0x82e9fd18
	goto loc_82E9FD18;
loc_82E9FCA0:
	// li r11,8712
	ctx.r11.s64 = 8712;
	// li r10,6
	ctx.r10.s64 = 6;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// li r7,8997
	ctx.r7.s64 = 8997;
	// lis r6,-16384
	ctx.r6.s64 = -1073741824;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r10,21
	ctx.r10.s64 = 21;
	// ori r6,r6,23296
	ctx.r6.u64 = ctx.r6.u64 | 23296;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
loc_82E9FD18:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9FD24"))) PPC_WEAK_FUNC(sub_82E9FD24);
PPC_FUNC_IMPL(__imp__sub_82E9FD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9FD28"))) PPC_WEAK_FUNC(sub_82E9FD28);
PPC_FUNC_IMPL(__imp__sub_82E9FD28) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r5,-1
	ctx.r31.s64 = ctx.r5.s64 + -1;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// not r30,r31
	ctx.r30.u64 = ~ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82e9fd74
	if (!ctx.cr6.gt) goto loc_82E9FD74;
	// bl 0x82e89308
	ctx.lr = 0x82E9FD6C;
	sub_82E89308(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
loc_82E9FD74:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

__attribute__((alias("__imp__sub_82E9FD90"))) PPC_WEAK_FUNC(sub_82E9FD90);
PPC_FUNC_IMPL(__imp__sub_82E9FD90) {
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
	// addi r3,r31,13268
	ctx.r3.s64 = ctx.r31.s64 + 13268;
	// lwz r11,13276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13276);
	// lwz r10,13280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13280);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e9fdd4
	if (!ctx.cr6.gt) goto loc_82E9FDD4;
	// bl 0x82e89308
	ctx.lr = 0x82E9FDCC;
	sub_82E89308(ctx, base);
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
loc_82E9FDD4:
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,25
	ctx.r9.s64 = 25;
	// ori r10,r10,17920
	ctx.r10.u64 = ctx.r10.u64 | 17920;
	// addi r3,r31,13368
	ctx.r3.s64 = ctx.r31.s64 + 13368;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,13276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13276, ctx.r11.u32);
	// lwz r10,13380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13380);
	// lwz r11,13376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13376);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e9fe14
	if (!ctx.cr6.gt) goto loc_82E9FE14;
	// bl 0x82e89308
	ctx.lr = 0x82E9FE10;
	sub_82E89308(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E9FE14:
	// rlwinm r10,r30,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// lis r8,-29184
	ctx.r8.s64 = -1912602624;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// clrlwi r9,r30,3
	ctx.r9.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r10,11812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11812, ctx.r10.u32);
	// stw r8,13376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13376, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82E9FE6C"))) PPC_WEAK_FUNC(sub_82E9FE6C);
PPC_FUNC_IMPL(__imp__sub_82E9FE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9FE70"))) PPC_WEAK_FUNC(sub_82E9FE70);
PPC_FUNC_IMPL(__imp__sub_82E9FE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E9FE78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r27,r4,0,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r29,r27,0,2,7
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x3F000000;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82e9fe98
	if (!ctx.cr0.eq) goto loc_82E9FE98;
	// lwz r11,23932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23932);
	// rlwinm r29,r11,0,2,7
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F000000;
	// or r27,r29,r27
	ctx.r27.u64 = ctx.r29.u64 | ctx.r27.u64;
loc_82E9FE98:
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// lis r28,16384
	ctx.r28.s64 = 1073741824;
	// stw r29,11808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11808, ctx.r29.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,10940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10940, ctx.r11.u8);
	// bne 0x82e9fecc
	if (!ctx.cr0.eq) goto loc_82E9FECC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e9fecc
	if (!ctx.cr0.eq) goto loc_82E9FECC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9e8a0
	ctx.lr = 0x82E9FEC8;
	sub_82E9E8A0(ctx, base);
	// b 0x82e9ff58
	goto loc_82E9FF58;
loc_82E9FECC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8fe98
	ctx.lr = 0x82E9FED8;
	sub_82E8FE98(ctx, base);
	// lwz r11,13368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13368);
	// addi r30,r31,13368
	ctx.r30.s64 = ctx.r31.s64 + 13368;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e9fef0
	if (!ctx.cr6.eq) goto loc_82E9FEF0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82e9ff08
	goto loc_82E9FF08;
loc_82E9FEF0:
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r10,512
	ctx.r11.s64 = ctx.r10.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r6,r28,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r28.s64;
loc_82E9FF08:
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-6200
	ctx.r5.s64 = ctx.r11.s64 + -6200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e89cd8
	ctx.lr = 0x82E9FF1C;
	sub_82E89CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E9FF24;
	sub_82E898A8(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e9ff40
	if (!ctx.cr6.gt) goto loc_82E9FF40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e89308
	ctx.lr = 0x82E9FF40;
	sub_82E89308(ctx, base);
loc_82E9FF40:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,13376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13376, ctx.r9.u32);
loc_82E9FF58:
	// lwz r3,13376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13376);
	// addi r11,r31,13368
	ctx.r11.s64 = ctx.r31.s64 + 13368;
	// lwz r10,13380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13380);
	// addi r9,r3,20
	ctx.r9.s64 = ctx.r3.s64 + 20;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e9ff78
	if (!ctx.cr6.gt) goto loc_82E9FF78;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82e89308
	ctx.lr = 0x82E9FF78;
	sub_82E89308(ctx, base);
loc_82E9FF78:
	// lis r11,-30208
	ctx.r11.s64 = -1979711488;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,13288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e9ffa4
	if (ctx.cr6.eq) goto loc_82E9FFA4;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
loc_82E9FFA4:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,13308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e9ffcc
	if (ctx.cr6.eq) goto loc_82E9FFCC;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
loc_82E9FFCC:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,13328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e9fff4
	if (ctx.cr6.eq) goto loc_82E9FFF4;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
loc_82E9FFF4:
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// lbz r10,10940(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,13376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13376, ctx.r11.u32);
	// beq 0x82ea0018
	if (ctx.cr0.eq) goto loc_82EA0018;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9fd90
	ctx.lr = 0x82EA0018;
	sub_82E9FD90(ctx, base);
loc_82EA0018:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA0020"))) PPC_WEAK_FUNC(sub_82EA0020);
PPC_FUNC_IMPL(__imp__sub_82EA0020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82EA0028;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,10452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea0064
	if (ctx.cr6.eq) goto loc_82EA0064;
	// li r12,1
	ctx.r12.s64 = 1;
	// stw r26,10452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10452, ctx.r26.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82EA0064:
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// ld r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// beq cr6,0x82ea0094
	if (ctx.cr6.eq) goto loc_82EA0094;
	// addi r6,r31,1920
	ctx.r6.s64 = ctx.r31.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74b28
	ctx.lr = 0x82EA0090;
	sub_82E74B28(ctx, base);
	// std r26,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r26.u64);
loc_82EA0094:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// beq cr6,0x82ea00b4
	if (ctx.cr6.eq) goto loc_82EA00B4;
	// addi r6,r31,6016
	ctx.r6.s64 = ctx.r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74b28
	ctx.lr = 0x82EA00B0;
	sub_82E74B28(ctx, base);
	// std r26,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r26.u64);
loc_82EA00B4:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x82ea0194
	if (ctx.cr6.eq) goto loc_82EA0194;
	// rlwinm r11,r30,0,11,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82ea00d8
	if (ctx.cr6.eq) goto loc_82EA00D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e758b8
	ctx.lr = 0x82EA00D4;
	sub_82E758B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EA00D8:
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82ea00fc
	if (ctx.cr6.eq) goto loc_82EA00FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e743f8
	ctx.lr = 0x82EA00F8;
	sub_82E743F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EA00FC:
	// clrldi r11,r30,52
	ctx.r11.u64 = ctx.r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82ea011c
	if (ctx.cr6.eq) goto loc_82EA011C;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74790
	ctx.lr = 0x82EA011C;
	sub_82E74790(ctx, base);
loc_82EA011C:
	// rlwinm r11,r30,0,15,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82ea013c
	if (ctx.cr6.eq) goto loc_82EA013C;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74790
	ctx.lr = 0x82EA013C;
	sub_82E74790(ctx, base);
loc_82EA013C:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82ea0168
	if (ctx.cr6.eq) goto loc_82EA0168;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74790
	ctx.lr = 0x82EA0168;
	sub_82E74790(ctx, base);
loc_82EA0168:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82ea0190
	if (ctx.cr6.eq) goto loc_82EA0190;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74790
	ctx.lr = 0x82EA0190;
	sub_82E74790(ctx, base);
loc_82EA0190:
	// std r26,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r26.u64);
loc_82EA0194:
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, 0, ctx.xer);
	// beq cr6,0x82ea01e4
	if (ctx.cr6.eq) goto loc_82EA01E4;
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82ea01b4
	if (ctx.cr6.eq) goto loc_82EA01B4;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e749d0
	ctx.lr = 0x82EA01B4;
	sub_82E749D0(ctx, base);
loc_82EA01B4:
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	ctx.r11.u64 = ctx.r28.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82ea01e0
	if (ctx.cr6.eq) goto loc_82EA01E0;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74790
	ctx.lr = 0x82EA01E0;
	sub_82E74790(ctx, base);
loc_82EA01E0:
	// std r26,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r26.u64);
loc_82EA01E4:
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, 0, ctx.xer);
	// beq cr6,0x82ea0280
	if (ctx.cr6.eq) goto loc_82EA0280;
	// clrldi r11,r27,26
	ctx.r11.u64 = ctx.r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82ea020c
	if (ctx.cr6.eq) goto loc_82EA020C;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74790
	ctx.lr = 0x82EA020C;
	sub_82E74790(ctx, base);
loc_82EA020C:
	// li r12,255
	ctx.r12.s64 = 255;
	// rldicr r12,r12,38,25
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82ea0234
	if (ctx.cr6.eq) goto loc_82EA0234;
	// addi r6,r31,10832
	ctx.r6.s64 = ctx.r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74790
	ctx.lr = 0x82EA0234;
	sub_82E74790(ctx, base);
loc_82EA0234:
	// li r12,63
	ctx.r12.s64 = 63;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82ea0254
	if (ctx.cr6.eq) goto loc_82EA0254;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74850
	ctx.lr = 0x82EA0254;
	sub_82E74850(ctx, base);
loc_82EA0254:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82ea027c
	if (ctx.cr6.eq) goto loc_82EA027C;
	// addi r6,r31,10112
	ctx.r6.s64 = ctx.r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74790
	ctx.lr = 0x82EA027C;
	sub_82E74790(ctx, base);
loc_82EA027C:
	// std r26,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r26.u64);
loc_82EA0280:
	// lwz r11,14928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14928);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ea029c
	if (ctx.cr6.eq) goto loc_82EA029C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82EA029C;
	sub_82E898A8(ctx, base);
loc_82EA029C:
	// lwz r3,13376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13376);
	// rlwinm r28,r24,0,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r10,13380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13380);
	// addi r27,r31,13368
	ctx.r27.s64 = ctx.r31.s64 + 13368;
	// add r11,r28,r3
	ctx.r11.u64 = ctx.r28.u64 + ctx.r3.u64;
	// rlwinm r29,r24,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ea02c8
	if (!ctx.cr6.gt) goto loc_82EA02C8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e89308
	ctx.lr = 0x82EA02C8;
	sub_82E89308(ctx, base);
loc_82EA02C8:
	// rlwimi r25,r29,16,1,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0x7FFF0000) | (ctx.r25.u64 & 0xFFFFFFFF8000FFFF);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// clrlwi r11,r25,1
	ctx.r11.u64 = ctx.r25.u32 & 0x7FFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EA02E8;
	sub_82CB1160(ctx, base);
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stw r11,13376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13376, ctx.r11.u32);
	// lwz r30,11812(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11812);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ea040c
	if (ctx.cr6.eq) goto loc_82EA040C;
	// lwz r29,13336(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13336);
	// addi r3,r31,13328
	ctx.r3.s64 = ctx.r31.s64 + 13328;
	// lwz r11,13340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13340);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ea031c
	if (!ctx.cr6.gt) goto loc_82EA031C;
	// bl 0x82e89308
	ctx.lr = 0x82EA0318;
	sub_82E89308(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82EA031C:
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r3,r31,13268
	ctx.r3.s64 = ctx.r31.s64 + 13268;
	// stw r11,13336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13336, ctx.r11.u32);
	// lwz r10,13280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13280);
	// lwz r11,13276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13276);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ea0354
	if (!ctx.cr6.gt) goto loc_82EA0354;
	// bl 0x82e89308
	ctx.lr = 0x82EA034C;
	sub_82E89308(ctx, base);
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
loc_82EA0354:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ea0370
	if (!ctx.cr6.gt) goto loc_82EA0370;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e89308
	ctx.lr = 0x82EA0370;
	sub_82E89308(ctx, base);
loc_82EA0370:
	// rlwinm r10,r30,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// lis r8,-29184
	ctx.r8.s64 = -1912602624;
	// addi r11,r10,512
	ctx.r11.s64 = ctx.r10.s64 + 512;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// clrlwi r9,r30,3
	ctx.r9.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r7,-16383
	ctx.r7.s64 = -1073676288;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// stw r10,11812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11812, ctx.r10.u32);
	// ori r9,r7,23040
	ctx.r9.u64 = ctx.r7.u64 | 23040;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r8,13376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13376, ctx.r8.u32);
	// li r8,26
	ctx.r8.s64 = 26;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r10,0,3,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFFFFFE;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// ori r10,r9,17920
	ctx.r10.u64 = ctx.r9.u64 | 17920;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,25
	ctx.r9.s64 = 25;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,13276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13276, ctx.r11.u32);
loc_82EA040C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA0414"))) PPC_WEAK_FUNC(sub_82EA0414);
PPC_FUNC_IMPL(__imp__sub_82EA0414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0418"))) PPC_WEAK_FUNC(sub_82EA0418);
PPC_FUNC_IMPL(__imp__sub_82EA0418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EA0420;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ea0444
	if (!ctx.cr6.gt) goto loc_82EA0444;
	// bl 0x82e898a8
	ctx.lr = 0x82EA0440;
	sub_82E898A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82EA0444:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,13276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13276);
	// lwz r10,13280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13280);
	// addi r3,r31,13268
	ctx.r3.s64 = ctx.r31.s64 + 13268;
	// beq 0x82ea0618
	if (ctx.cr0.eq) goto loc_82EA0618;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ea046c
	if (!ctx.cr6.gt) goto loc_82EA046C;
	// bl 0x82e89308
	ctx.lr = 0x82EA0468;
	sub_82E89308(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EA046C:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// lbz r5,10940(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// lwz r10,10932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10932);
	// addi r4,r9,512
	ctx.r4.s64 = ctx.r9.s64 + 512;
	// lwz r7,10936(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10936);
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stw r8,13276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13276, ctx.r8.u32);
	// rlwinm r8,r4,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	// ori r11,r5,4
	ctx.r11.u64 = ctx.r5.u64 | 4;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stb r11,10940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10940, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ea05a4
	if (!ctx.cr6.eq) goto loc_82EA05A4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82ea05a4
	if (!ctx.cr6.eq) goto loc_82EA05A4;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,12716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12716, ctx.r10.u32);
	// bne 0x82ea0588
	if (!ctx.cr0.eq) goto loc_82EA0588;
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ea0588
	if (!ctx.cr0.eq) goto loc_82EA0588;
	// lbz r11,12187(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12187);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ea0588
	if (!ctx.cr0.eq) goto loc_82EA0588;
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea04e8
	if (ctx.cr0.eq) goto loc_82EA04E8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82ea057c
	goto loc_82EA057C;
loc_82EA04E8:
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea0574
	if (ctx.cr0.eq) goto loc_82EA0574;
	// lwz r11,12440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// lwz r10,12728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12728);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ea050c
	if (ctx.cr6.eq) goto loc_82EA050C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ea0574
	if (!ctx.cr6.eq) goto loc_82EA0574;
loc_82EA050C:
	// lwz r11,12444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12444);
	// lwz r10,12732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12732);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ea0524
	if (ctx.cr6.eq) goto loc_82EA0524;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ea0574
	if (!ctx.cr6.eq) goto loc_82EA0574;
loc_82EA0524:
	// lwz r11,12448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12448);
	// lwz r10,12736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12736);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ea053c
	if (ctx.cr6.eq) goto loc_82EA053C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ea0574
	if (!ctx.cr6.eq) goto loc_82EA0574;
loc_82EA053C:
	// lwz r11,12452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// lwz r10,12740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12740);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ea0554
	if (ctx.cr6.eq) goto loc_82EA0554;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ea0574
	if (!ctx.cr6.eq) goto loc_82EA0574;
loc_82EA0554:
	// lwz r11,12456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// lwz r10,12744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12744);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ea056c
	if (ctx.cr6.eq) goto loc_82EA056C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ea0574
	if (!ctx.cr6.eq) goto loc_82EA0574;
loc_82EA056C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82ea0578
	goto loc_82EA0578;
loc_82EA0574:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EA0578:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82EA057C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// bne 0x82ea058c
	if (!ctx.cr0.eq) goto loc_82EA058C;
loc_82EA0588:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EA058C:
	// lbz r10,10940(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r11,r10,0,24,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF01);
	// stw r8,12708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12708, ctx.r8.u32);
	// b 0x82ea05b0
	goto loc_82EA05B0;
loc_82EA05A4:
	// rlwinm r11,r11,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE;
	// stw r6,12716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12716, ctx.r6.u32);
	// stw r10,12708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12708, ctx.r10.u32);
loc_82EA05B0:
	// stb r11,10940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10940, ctx.r11.u8);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// stw r7,12712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12712, ctx.r7.u32);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 24576;
	// ori r10,r10,24832
	ctx.r10.u64 = ctx.r10.u64 | 24832;
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// li r12,1
	ctx.r12.s64 = 1;
	// lwz r8,12708(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12708);
	// li r11,128
	ctx.r11.s64 = 128;
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// li r5,25
	ctx.r5.s64 = 25;
	// ori r7,r7,17920
	ctx.r7.u64 = ctx.r7.u64 | 17920;
	// stwu r8,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r29.u32 = ea;
	// stwu r10,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r29.u32 = ea;
	// lwz r10,12712(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12712);
	// stwu r10,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r29.u32 = ea;
	// stw r11,10672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10672, ctx.r11.u32);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// stwu r7,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r29.u32 = ea;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// b 0x82ea06d8
	goto loc_82EA06D8;
loc_82EA0618:
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ea0638
	if (!ctx.cr6.gt) goto loc_82EA0638;
	// bl 0x82e89308
	ctx.lr = 0x82EA0630;
	sub_82E89308(ctx, base);
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
loc_82EA0638:
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// li r9,8712
	ctx.r9.s64 = 8712;
	// stw r10,13276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13276, ctx.r10.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stwu r9,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r29.u32 = ea;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r10,8192
	ctx.r6.u64 = ctx.r10.u64 | 8192;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwu r8,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r29.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r4,8997
	ctx.r4.s64 = 8997;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r6,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r29.u32 = ea;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// addi r10,r9,32
	ctx.r10.s64 = ctx.r9.s64 + 32;
	// ori r11,r8,23296
	ctx.r11.u64 = ctx.r8.u64 | 23296;
	// li r8,21
	ctx.r8.s64 = 21;
	// li r12,1
	ctx.r12.s64 = 1;
	// stwu r7,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r29.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// stwu r5,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r29.u32 = ea;
	// stwu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r29.u32 = ea;
	// stwu r10,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r29.u32 = ea;
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
loc_82EA06D8:
	// lwz r10,10908(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// rlwinm r11,r10,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 | ctx.r6.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA06F8"))) PPC_WEAK_FUNC(sub_82EA06F8);
PPC_FUNC_IMPL(__imp__sub_82EA06F8) {
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ea0724
	if (!ctx.cr6.eq) goto loc_82EA0724;
	// bl 0x82e9fd90
	ctx.lr = 0x82EA0720;
	sub_82E9FD90(ctx, base);
	// b 0x82ea0760
	goto loc_82EA0760;
loc_82EA0724:
	// lwz r11,13376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13376);
	// addi r3,r31,13368
	ctx.r3.s64 = ctx.r31.s64 + 13368;
	// lwz r10,13380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13380);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ea0744
	if (!ctx.cr6.gt) goto loc_82EA0744;
	// bl 0x82e89308
	ctx.lr = 0x82EA0740;
	sub_82E89308(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EA0744:
	// lis r10,-29440
	ctx.r10.s64 = -1929379840;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r9,13376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13376, ctx.r9.u32);
	// stw r8,11812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11812, ctx.r8.u32);
loc_82EA0760:
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

__attribute__((alias("__imp__sub_82EA0778"))) PPC_WEAK_FUNC(sub_82EA0778);
PPC_FUNC_IMPL(__imp__sub_82EA0778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EA0780;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ea079c
	if (!ctx.cr6.eq) goto loc_82EA079C;
	// bl 0x82e9fd90
	ctx.lr = 0x82EA0798;
	sub_82E9FD90(ctx, base);
	// b 0x82ea0810
	goto loc_82EA0810;
loc_82EA079C:
	// lwz r11,13376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13376);
	// addi r3,r31,13368
	ctx.r3.s64 = ctx.r31.s64 + 13368;
	// lwz r10,13380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13380);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ea07bc
	if (!ctx.cr6.gt) goto loc_82EA07BC;
	// bl 0x82e89308
	ctx.lr = 0x82EA07B8;
	sub_82E89308(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EA07BC:
	// lis r10,-29440
	ctx.r10.s64 = -1929379840;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// stw r8,13376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13376, ctx.r8.u32);
	// addi r3,r31,13288
	ctx.r3.s64 = ctx.r31.s64 + 13288;
	// lwz r10,13300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13300);
	// lwz r11,13296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13296);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ea07f8
	if (!ctx.cr6.gt) goto loc_82EA07F8;
	// bl 0x82e89308
	ctx.lr = 0x82EA07F4;
	sub_82E89308(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EA07F8:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,13296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13296, ctx.r10.u32);
	// stw r9,11812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11812, ctx.r9.u32);
loc_82EA0810:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA0818"))) PPC_WEAK_FUNC(sub_82EA0818);
PPC_FUNC_IMPL(__imp__sub_82EA0818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82EA0820;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ea083c
	if (!ctx.cr6.eq) goto loc_82EA083C;
	// bl 0x82e9fd90
	ctx.lr = 0x82EA0838;
	sub_82E9FD90(ctx, base);
	// b 0x82ea08dc
	goto loc_82EA08DC;
loc_82EA083C:
	// lwz r11,13376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13376);
	// addi r3,r31,13368
	ctx.r3.s64 = ctx.r31.s64 + 13368;
	// lwz r10,13380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13380);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ea085c
	if (!ctx.cr6.gt) goto loc_82EA085C;
	// bl 0x82e89308
	ctx.lr = 0x82EA0858;
	sub_82E89308(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EA085C:
	// lis r10,-29440
	ctx.r10.s64 = -1929379840;
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// rlwinm r10,r9,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stw r6,13376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13376, ctx.r6.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r8,13320(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13320);
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// lwz r11,13316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13316);
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r3,r31,13308
	ctx.r3.s64 = ctx.r31.s64 + 13308;
	// clrlwi r28,r7,31
	ctx.r28.u64 = ctx.r7.u32 & 0x1;
	// add r27,r10,r9
	ctx.r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82ea08b8
	if (!ctx.cr6.gt) goto loc_82EA08B8;
	// bl 0x82e89308
	ctx.lr = 0x82EA08B4;
	sub_82E89308(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EA08B8:
	// or r10,r28,r27
	ctx.r10.u64 = ctx.r28.u64 | ctx.r27.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,10908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// stw r9,13316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13316, ctx.r9.u32);
	// stw r10,11812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11812, ctx.r10.u32);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_82EA08DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA08E4"))) PPC_WEAK_FUNC(sub_82EA08E4);
PPC_FUNC_IMPL(__imp__sub_82EA08E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA08E8"))) PPC_WEAK_FUNC(sub_82EA08E8);
PPC_FUNC_IMPL(__imp__sub_82EA08E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA08FC"))) PPC_WEAK_FUNC(sub_82EA08FC);
PPC_FUNC_IMPL(__imp__sub_82EA08FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0900"))) PPC_WEAK_FUNC(sub_82EA0900);
PPC_FUNC_IMPL(__imp__sub_82EA0900) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0914"))) PPC_WEAK_FUNC(sub_82EA0914);
PPC_FUNC_IMPL(__imp__sub_82EA0914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0918"))) PPC_WEAK_FUNC(sub_82EA0918);
PPC_FUNC_IMPL(__imp__sub_82EA0918) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,8178
	ctx.r11.s64 = ctx.r3.s64 + 535953408;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0928"))) PPC_WEAK_FUNC(sub_82EA0928);
PPC_FUNC_IMPL(__imp__sub_82EA0928) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,8178
	ctx.r11.s64 = ctx.r3.s64 + 535953408;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,0(r11)
	PPC_MM_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// eieio 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA093C"))) PPC_WEAK_FUNC(sub_82EA093C);
PPC_FUNC_IMPL(__imp__sub_82EA093C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0940"))) PPC_WEAK_FUNC(sub_82EA0940);
PPC_FUNC_IMPL(__imp__sub_82EA0940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0954"))) PPC_WEAK_FUNC(sub_82EA0954);
PPC_FUNC_IMPL(__imp__sub_82EA0954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0958"))) PPC_WEAK_FUNC(sub_82EA0958);
PPC_FUNC_IMPL(__imp__sub_82EA0958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EA0960;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r31,1152
	ctx.r11.s64 = ctx.r31.s64 + 1152;
	// clrldi r30,r10,32
	ctx.r30.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// li r10,26
	ctx.r10.s64 = 26;
	// std r30,11824(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11824, ctx.r30.u64);
loc_82EA097C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bne 0x82ea097c
	if (!ctx.cr0.eq) goto loc_82EA097C;
	// addi r11,r31,1776
	ctx.r11.s64 = ctx.r31.s64 + 1776;
	// li r10,18
	ctx.r10.s64 = 18;
loc_82EA099C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r9,r8,0,30,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82ea099c
	if (!ctx.cr0.eq) goto loc_82EA099C;
	// lis r8,8192
	ctx.r8.s64 = 536870912;
	// lwz r11,10564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10564);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// lwz r7,10568(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10568);
	// ori r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 8192;
	// ori r6,r6,61440
	ctx.r6.u64 = ctx.r6.u64 | 61440;
	// stw r8,10428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10428, ctx.r8.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r6,10708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10708, ctx.r6.u32);
	// lis r5,15
	ctx.r5.s64 = 983040;
	// stw r8,10772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10772, ctx.r8.u32);
	// lis r4,255
	ctx.r4.s64 = 16711680;
	// stw r11,10564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10564, ctx.r11.u32);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r10,10628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10628, ctx.r10.u32);
	// ori r5,r5,61696
	ctx.r5.u64 = ctx.r5.u64 | 61696;
	// stw r10,10768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10768, ctx.r10.u32);
	// oris r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 65536;
	// stw r3,10604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10604, ctx.r3.u32);
	// ori r8,r4,65535
	ctx.r8.u64 = ctx.r4.u64 | 65535;
	// stw r5,10712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10712, ctx.r5.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r9,10580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10580, ctx.r9.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r7,10568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10568, ctx.r7.u32);
	// stw r8,10444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10444, ctx.r8.u32);
	// stw r9,10688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10688, ctx.r9.u32);
	// stw r6,10824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10824, ctx.r6.u32);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// stw r10,10916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10916, ctx.r10.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ea0a64
	if (!ctx.cr6.gt) goto loc_82EA0A64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82EA0A64;
	sub_82E898A8(ctx, base);
loc_82EA0A64:
	// li r11,3329
	ctx.r11.s64 = 3329;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,-16382
	ctx.r11.s64 = -1073610752;
	// li r9,129
	ctx.r9.s64 = 129;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// lis r7,-31890
	ctx.r7.s64 = -2089943040;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r6,-16382
	ctx.r6.s64 = -1073610752;
	// li r10,130
	ctx.r10.s64 = 130;
	// ori r6,r6,8448
	ctx.r6.u64 = ctx.r6.u64 | 8448;
	// lis r5,-31890
	ctx.r5.s64 = -2089943040;
	// li r4,3650
	ctx.r4.s64 = 3650;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r29,8032
	ctx.r29.s64 = 8032;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// li r9,15
	ctx.r9.s64 = 15;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lwz r11,18084(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18084);
	// oris r11,r11,32769
	ctx.r11.u64 = ctx.r11.u64 | 2147549184;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// lwz r11,18088(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18088);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// lwz r10,23932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23932);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,3205
	ctx.r10.s64 = 3205;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bne 0x82ea0af4
	if (!ctx.cr0.eq) goto loc_82EA0AF4;
	// li r9,3
	ctx.r9.s64 = 3;
loc_82EA0AF4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r10,1404
	ctx.r10.s64 = 1404;
	// lis r9,2989
	ctx.r9.s64 = 195887104;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,61453
	ctx.r9.u64 = ctx.r9.u64 | 61453;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,1403
	ctx.r10.s64 = 1403;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA0B28"))) PPC_WEAK_FUNC(sub_82EA0B28);
PPC_FUNC_IMPL(__imp__sub_82EA0B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0B2C"))) PPC_WEAK_FUNC(sub_82EA0B2C);
PPC_FUNC_IMPL(__imp__sub_82EA0B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0B30"))) PPC_WEAK_FUNC(sub_82EA0B30);
PPC_FUNC_IMPL(__imp__sub_82EA0B30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82e898a8
	sub_82E898A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA0B4C"))) PPC_WEAK_FUNC(sub_82EA0B4C);
PPC_FUNC_IMPL(__imp__sub_82EA0B4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0B50"))) PPC_WEAK_FUNC(sub_82EA0B50);
PPC_FUNC_IMPL(__imp__sub_82EA0B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0B6C"))) PPC_WEAK_FUNC(sub_82EA0B6C);
PPC_FUNC_IMPL(__imp__sub_82EA0B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0B70"))) PPC_WEAK_FUNC(sub_82EA0B70);
PPC_FUNC_IMPL(__imp__sub_82EA0B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0B90"))) PPC_WEAK_FUNC(sub_82EA0B90);
PPC_FUNC_IMPL(__imp__sub_82EA0B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0BA4"))) PPC_WEAK_FUNC(sub_82EA0BA4);
PPC_FUNC_IMPL(__imp__sub_82EA0BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0BA8"))) PPC_WEAK_FUNC(sub_82EA0BA8);
PPC_FUNC_IMPL(__imp__sub_82EA0BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-64
	ctx.r10.s64 = -4194304;
	// rlwimi r10,r11,8,10,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0x3FFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFC000FF);
	// or r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0BCC"))) PPC_WEAK_FUNC(sub_82EA0BCC);
PPC_FUNC_IMPL(__imp__sub_82EA0BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0BD0"))) PPC_WEAK_FUNC(sub_82EA0BD0);
PPC_FUNC_IMPL(__imp__sub_82EA0BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwimi r10,r11,8,2,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0x3FFFFF00) | (ctx.r10.u64 & 0xFFFFFFFFC00000FF);
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0BF8"))) PPC_WEAK_FUNC(sub_82EA0BF8);
PPC_FUNC_IMPL(__imp__sub_82EA0BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0C08"))) PPC_WEAK_FUNC(sub_82EA0C08);
PPC_FUNC_IMPL(__imp__sub_82EA0C08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stfsu f1,4(r11)
	*(ctx.r4.ptr) = ctx.f1.f64;
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.s64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0C18"))) PPC_WEAK_FUNC(sub_82EA0C18);
PPC_FUNC_IMPL(__imp__sub_82EA0C18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0C1C"))) PPC_WEAK_FUNC(sub_82EA0C1C);
PPC_FUNC_IMPL(__imp__sub_82EA0C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0C20"))) PPC_WEAK_FUNC(sub_82EA0C20);
PPC_FUNC_IMPL(__imp__sub_82EA0C20) {
	PPC_FUNC_PROLOGUE();
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0C28"))) PPC_WEAK_FUNC(sub_82EA0C28);
PPC_FUNC_IMPL(__imp__sub_82EA0C28) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82e928e8
	sub_82E928E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA0C30"))) PPC_WEAK_FUNC(sub_82EA0C30);
PPC_FUNC_IMPL(__imp__sub_82EA0C30) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ea0c78
	if (ctx.cr6.eq) goto loc_82EA0C78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA0C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82EA0C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EA0C78:
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

__attribute__((alias("__imp__sub_82EA0C90"))) PPC_WEAK_FUNC(sub_82EA0C90);
PPC_FUNC_IMPL(__imp__sub_82EA0C90) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,6212
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6212, ctx.xer);
	// bgt cr6,0x82ea0ca8
	if (ctx.cr6.gt) goto loc_82EA0CA8;
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,6212
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6212, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_82EA0CA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0CB0"))) PPC_WEAK_FUNC(sub_82EA0CB0);
PPC_FUNC_IMPL(__imp__sub_82EA0CB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0CB4"))) PPC_WEAK_FUNC(sub_82EA0CB4);
PPC_FUNC_IMPL(__imp__sub_82EA0CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0CB8"))) PPC_WEAK_FUNC(sub_82EA0CB8);
PPC_FUNC_IMPL(__imp__sub_82EA0CB8) {
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

__attribute__((alias("__imp__sub_82EA0CCC"))) PPC_WEAK_FUNC(sub_82EA0CCC);
PPC_FUNC_IMPL(__imp__sub_82EA0CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0CD0"))) PPC_WEAK_FUNC(sub_82EA0CD0);
PPC_FUNC_IMPL(__imp__sub_82EA0CD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0CDC"))) PPC_WEAK_FUNC(sub_82EA0CDC);
PPC_FUNC_IMPL(__imp__sub_82EA0CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0CE0"))) PPC_WEAK_FUNC(sub_82EA0CE0);
PPC_FUNC_IMPL(__imp__sub_82EA0CE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0CE8"))) PPC_WEAK_FUNC(sub_82EA0CE8);
PPC_FUNC_IMPL(__imp__sub_82EA0CE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0CFC"))) PPC_WEAK_FUNC(sub_82EA0CFC);
PPC_FUNC_IMPL(__imp__sub_82EA0CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0D00"))) PPC_WEAK_FUNC(sub_82EA0D00);
PPC_FUNC_IMPL(__imp__sub_82EA0D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0D08"))) PPC_WEAK_FUNC(sub_82EA0D08);
PPC_FUNC_IMPL(__imp__sub_82EA0D08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0D10"))) PPC_WEAK_FUNC(sub_82EA0D10);
PPC_FUNC_IMPL(__imp__sub_82EA0D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2600);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea0d30
	if (ctx.cr6.eq) goto loc_82EA0D30;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82EA0D30:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0D38"))) PPC_WEAK_FUNC(sub_82EA0D38);
PPC_FUNC_IMPL(__imp__sub_82EA0D38) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,-16384
	ctx.r3.s64 = ctx.r3.s64 + -1073741824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0D40"))) PPC_WEAK_FUNC(sub_82EA0D40);
PPC_FUNC_IMPL(__imp__sub_82EA0D40) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,-16640
	ctx.r3.s64 = ctx.r3.s64 + -1090519040;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0D48"))) PPC_WEAK_FUNC(sub_82EA0D48);
PPC_FUNC_IMPL(__imp__sub_82EA0D48) {
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
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82ea0da8
	if (!ctx.cr6.eq) goto loc_82EA0DA8;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,2600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2600);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea0db4
	if (ctx.cr6.eq) goto loc_82EA0DB4;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,85
	ctx.r3.s64 = 85;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA0DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ea0db4
	goto loc_82EA0DB4;
loc_82EA0DA8:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83358b38
	ctx.lr = 0x82EA0DB4;
	sub_83358B38(ctx, base);
loc_82EA0DB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0DC4"))) PPC_WEAK_FUNC(sub_82EA0DC4);
PPC_FUNC_IMPL(__imp__sub_82EA0DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0DC8"))) PPC_WEAK_FUNC(sub_82EA0DC8);
PPC_FUNC_IMPL(__imp__sub_82EA0DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,2031
	ctx.r11.s64 = 133103616;
	// addis r10,r3,16368
	ctx.r10.s64 = ctx.r3.s64 + 1072693248;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0DE4"))) PPC_WEAK_FUNC(sub_82EA0DE4);
PPC_FUNC_IMPL(__imp__sub_82EA0DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0DE8"))) PPC_WEAK_FUNC(sub_82EA0DE8);
PPC_FUNC_IMPL(__imp__sub_82EA0DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA0DF0"))) PPC_WEAK_FUNC(sub_82EA0DF0);
PPC_FUNC_IMPL(__imp__sub_82EA0DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA0DF8"))) PPC_WEAK_FUNC(sub_82EA0DF8);
PPC_FUNC_IMPL(__imp__sub_82EA0DF8) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// li r11,64
	ctx.r11.s64 = 64;
loc_82EA0E00:
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x82ea0e00
	if (!ctx.cr0.eq) goto loc_82EA0E00;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0E18"))) PPC_WEAK_FUNC(sub_82EA0E18);
PPC_FUNC_IMPL(__imp__sub_82EA0E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// li r11,64
	ctx.r11.s64 = 64;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82EA0E28:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bne 0x82ea0e28
	if (!ctx.cr0.eq) goto loc_82EA0E28;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-15896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15896);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0E5C"))) PPC_WEAK_FUNC(sub_82EA0E5C);
PPC_FUNC_IMPL(__imp__sub_82EA0E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0E60"))) PPC_WEAK_FUNC(sub_82EA0E60);
PPC_FUNC_IMPL(__imp__sub_82EA0E60) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// li r9,64
	ctx.r9.s64 = 64;
loc_82EA0E6C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82ea0e7c
	if (ctx.cr6.gt) goto loc_82EA0E7C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82EA0E7C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x82ea0e6c
	if (!ctx.cr0.eq) goto loc_82EA0E6C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA0E90"))) PPC_WEAK_FUNC(sub_82EA0E90);
PPC_FUNC_IMPL(__imp__sub_82EA0E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EA0E98;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r11,788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ea0f44
	if (!ctx.cr0.eq) goto loc_82EA0F44;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA0EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ea0f44
	if (ctx.cr6.eq) goto loc_82EA0F44;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// beq cr6,0x82ea0f08
	if (ctx.cr6.eq) goto loc_82EA0F08;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA0F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ea0f44
	goto loc_82EA0F44;
loc_82EA0F08:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82299698
	ctx.lr = 0x82EA0F14;
	sub_82299698(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EA0F24;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA0F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA0F44;
	sub_822996C0(ctx, base);
loc_82EA0F44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA0F4C"))) PPC_WEAK_FUNC(sub_82EA0F4C);
PPC_FUNC_IMPL(__imp__sub_82EA0F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA0F50"))) PPC_WEAK_FUNC(sub_82EA0F50);
PPC_FUNC_IMPL(__imp__sub_82EA0F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EA0F58;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r24,63
	ctx.r24.s64 = 63;
	// addi r25,r26,16
	ctx.r25.s64 = ctx.r26.s64 + 16;
loc_82EA0F68:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82ea100c
	goto loc_82EA100C;
loc_82EA0F7C:
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r27,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea0fa4
	if (ctx.cr0.eq) goto loc_82EA0FA4;
	// andis. r11,r27,65424
	ctx.r11.u64 = ctx.r27.u64 & 4287627264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r10,792(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 792);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_82EA0FA4:
	// rlwinm. r11,r27,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea1008
	if (ctx.cr0.eq) goto loc_82EA1008;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// addis r31,r28,-16384
	ctx.r31.s64 = ctx.r28.s64 + -1073741824;
	// blt cr6,0x82ea0fc4
	if (ctx.cr6.lt) goto loc_82EA0FC4;
	// addis r31,r28,-16640
	ctx.r31.s64 = ctx.r28.s64 + -1090519040;
loc_82EA0FC4:
	// addi r30,r31,4096
	ctx.r30.s64 = ctx.r31.s64 + 4096;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e928e8
	ctx.lr = 0x82EA0FD8;
	sub_82E928E8(ctx, base);
	// clrlwi r8,r27,12
	ctx.r8.u64 = ctx.r27.u32 & 0xFFFFF;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r9,796(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 796);
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ea0e90
	ctx.lr = 0x82EA0FF8;
	sub_82EA0E90(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e928e8
	ctx.lr = 0x82EA1008;
	sub_82E928E8(ctx, base);
loc_82EA1008:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_82EA100C:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82ea0f7c
	if (ctx.cr6.gt) goto loc_82EA0F7C;
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,12
	ctx.r25.s64 = ctx.r25.s64 + 12;
	// bge 0x82ea0f68
	if (!ctx.cr0.lt) goto loc_82EA0F68;
	// lwz r11,792(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 792);
	// stw r11,796(r26)
	PPC_STORE_U32(ctx.r26.u32 + 796, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA1030"))) PPC_WEAK_FUNC(sub_82EA1030);
PPC_FUNC_IMPL(__imp__sub_82EA1030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EA1038;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82ea1074
	if (ctx.cr6.eq) goto loc_82EA1074;
	// lwz r11,840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ea1074
	if (!ctx.cr0.eq) goto loc_82EA1074;
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lwz r10,836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ea1074
	if (!ctx.cr0.eq) goto loc_82EA1074;
loc_82EA106C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ea1304
	goto loc_82EA1304;
loc_82EA1074:
	// cmplwi cr6,r4,84
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 84, ctx.xer);
	// bgt cr6,0x82ea1294
	if (ctx.cr6.gt) goto loc_82EA1294;
	// beq cr6,0x82ea124c
	if (ctx.cr6.eq) goto loc_82EA124C;
	// cmplwi cr6,r4,37
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 37, ctx.xer);
	// beq cr6,0x82ea114c
	if (ctx.cr6.eq) goto loc_82EA114C;
	// cmplwi cr6,r4,39
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 39, ctx.xer);
	// beq cr6,0x82ea10c0
	if (ctx.cr6.eq) goto loc_82EA10C0;
	// cmplwi cr6,r4,70
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 70, ctx.xer);
	// beq cr6,0x82ea12dc
	if (ctx.cr6.eq) goto loc_82EA12DC;
	// cmplwi cr6,r4,80
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 80, ctx.xer);
	// beq cr6,0x82ea10b4
	if (ctx.cr6.eq) goto loc_82EA10B4;
	// cmplwi cr6,r4,81
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 81, ctx.xer);
	// bne cr6,0x82ea1300
	if (!ctx.cr6.eq) goto loc_82EA1300;
loc_82EA10A8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// b 0x82ea106c
	goto loc_82EA106C;
loc_82EA10B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r11.u32);
	// b 0x82ea106c
	goto loc_82EA106C;
loc_82EA10C0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r29,r11,2,16,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// rlwinm r30,r10,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r27,r11,16,20,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFF;
	// clrlwi r26,r11,18
	ctx.r26.u64 = ctx.r11.u32 & 0x3FFF;
	// clrlwi r28,r10,30
	ctx.r28.u64 = ctx.r10.u32 & 0x3;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA10FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ea1110
	if (!ctx.cr6.lt) goto loc_82EA1110;
	// addis r30,r30,-16384
	ctx.r30.s64 = ctx.r30.s64 + -1073741824;
	// b 0x82ea1114
	goto loc_82EA1114;
loc_82EA1110:
	// addis r30,r30,-16640
	ctx.r30.s64 = ctx.r30.s64 + -1090519040;
loc_82EA1114:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA1138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e928e8
	ctx.lr = 0x82EA1148;
	sub_82E928E8(ctx, base);
	// b 0x82ea106c
	goto loc_82EA106C;
loc_82EA114C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,29944
	ctx.r11.s64 = ctx.r11.s64 + 29944;
	// addi r10,r10,29912
	ctx.r10.s64 = ctx.r10.s64 + 29912;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// subf r26,r28,r11
	ctx.r26.s64 = ctx.r11.s64 - ctx.r28.s64;
	// subf r25,r28,r10
	ctx.r25.s64 = ctx.r10.s64 - ctx.r28.s64;
	// li r24,8
	ctx.r24.s64 = 8;
loc_82EA116C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ea11dc
	if (!ctx.cr0.eq) goto loc_82EA11DC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r30,r10,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r27,r11,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addis r5,r30,-16384
	ctx.r5.s64 = ctx.r30.s64 + -1073741824;
	// blt cr6,0x82ea11a0
	if (ctx.cr6.lt) goto loc_82EA11A0;
	// addis r5,r30,-16640
	ctx.r5.s64 = ctx.r30.s64 + -1090519040;
loc_82EA11A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r26,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// lwzx r4,r25,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r29.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA11BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA11DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EA11DC:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82ea116c
	if (!ctx.cr0.eq) goto loc_82EA116C;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ea1218
	if (!ctx.cr0.eq) goto loc_82EA1218;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r4,r11,0,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// lwz r9,36(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA1218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EA1218:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ea106c
	if (!ctx.cr0.eq) goto loc_82EA106C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r4,r11,0,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// lwz r9,44(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA1248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ea106c
	goto loc_82EA106C;
loc_82EA124C:
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea106c
	if (ctx.cr6.eq) goto loc_82EA106C;
	// lbz r11,10941(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10941);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea106c
	if (ctx.cr0.eq) goto loc_82EA106C;
	// lis r10,-32022
	ctx.r10.s64 = -2098593792;
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r10,r10,-6200
	ctx.r10.s64 = ctx.r10.s64 + -6200;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ea1284
	if (!ctx.cr6.eq) goto loc_82EA1284;
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// b 0x82ea106c
	goto loc_82EA106C;
loc_82EA1284:
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA1290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ea106c
	goto loc_82EA106C;
loc_82EA1294:
	// cmplwi cr6,r4,88
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 88, ctx.xer);
	// blt cr6,0x82ea1300
	if (ctx.cr6.lt) goto loc_82EA1300;
	// cmplwi cr6,r4,90
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 90, ctx.xer);
	// ble cr6,0x82ea12dc
	if (!ctx.cr6.gt) goto loc_82EA12DC;
	// cmplwi cr6,r4,96
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 96, ctx.xer);
	// beq cr6,0x82ea10b4
	if (ctx.cr6.eq) goto loc_82EA10B4;
	// cmplwi cr6,r4,97
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 97, ctx.xer);
	// beq cr6,0x82ea12d0
	if (ctx.cr6.eq) goto loc_82EA12D0;
	// cmplwi cr6,r4,98
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 98, ctx.xer);
	// beq cr6,0x82ea10a8
	if (ctx.cr6.eq) goto loc_82EA10A8;
	// cmplwi cr6,r4,99
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 99, ctx.xer);
	// bne cr6,0x82ea1300
	if (!ctx.cr6.eq) goto loc_82EA1300;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r11.u32);
	// b 0x82ea106c
	goto loc_82EA106C;
loc_82EA12D0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r11.u32);
	// b 0x82ea106c
	goto loc_82EA106C;
loc_82EA12DC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ea106c
	if (!ctx.cr6.eq) goto loc_82EA106C;
	// lwz r11,792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// b 0x82ea106c
	goto loc_82EA106C;
loc_82EA1300:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EA1304:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA130C"))) PPC_WEAK_FUNC(sub_82EA130C);
PPC_FUNC_IMPL(__imp__sub_82EA130C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA1310"))) PPC_WEAK_FUNC(sub_82EA1310);
PPC_FUNC_IMPL(__imp__sub_82EA1310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82EA1318;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// sync 
	// lwz r11,788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ea134c
	if (!ctx.cr0.eq) goto loc_82EA134C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA134C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EA134C:
	// li r22,1406
	ctx.r22.s64 = 1406;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ea1388
	if (ctx.cr6.eq) goto loc_82EA1388;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 | 12;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ea0e90
	ctx.lr = 0x82EA1388;
	sub_82EA0E90(ctx, base);
loc_82EA1388:
	// lwz r10,816(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// add r25,r11,r26
	ctx.r25.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ea1434
	if (!ctx.cr6.eq) goto loc_82EA1434;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x82ea1434
	if (ctx.cr6.lt) goto loc_82EA1434;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// lis r10,-16382
	ctx.r10.s64 = -1073610752;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r10,22528
	ctx.r11.u64 = ctx.r10.u64 | 22528;
	// lwzx r10,r9,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ea1434
	if (!ctx.cr6.eq) goto loc_82EA1434;
	// addi r10,r29,-8
	ctx.r10.s64 = ctx.r29.s64 + -8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ea1434
	if (!ctx.cr6.eq) goto loc_82EA1434;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// lwz r10,788(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// lis r9,2746
	ctx.r9.s64 = 179961856;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r9,53434
	ctx.r11.u64 = ctx.r9.u64 | 53434;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwzx r9,r8,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 816, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bne 0x82ea1434
	if (!ctx.cr0.eq) goto loc_82EA1434;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA1434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EA1434:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82ea1580
	if (!ctx.cr6.lt) goto loc_82EA1580;
loc_82EA143C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm. r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ea1460
	if (!ctx.cr0.eq) goto loc_82EA1460;
	// rlwinm r11,r11,16,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EA1458:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82ea1578
	goto loc_82EA1578;
loc_82EA1460:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82ea1578
	if (ctx.cr6.eq) goto loc_82EA1578;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82ea1578
	if (!ctx.cr6.eq) goto loc_82EA1578;
	// rlwinm r4,r11,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r10,r11,16,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3FFF;
	// clrlwi r29,r11,31
	ctx.r29.u64 = ctx.r11.u32 & 0x1;
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r4,63
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 63, ctx.xer);
	// beq cr6,0x82ea14b8
	if (ctx.cr6.eq) goto loc_82EA14B8;
	// cmplwi cr6,r4,55
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 55, ctx.xer);
	// beq cr6,0x82ea14b8
	if (ctx.cr6.eq) goto loc_82EA14B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA14B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82ea1458
	goto loc_82EA1458;
loc_82EA14B8:
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm. r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82ea14e8
	if (ctx.cr0.eq) goto loc_82EA14E8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ea0e90
	ctx.lr = 0x82EA14E8;
	sub_82EA0E90(ctx, base);
loc_82EA14E8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82ea1510
	if (ctx.cr6.eq) goto loc_82EA1510;
	// lwz r11,840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 840);
	// lwz r10,832(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ea1510
	if (!ctx.cr0.eq) goto loc_82EA1510;
	// lwz r11,844(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 844);
	// lwz r10,836(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea156c
	if (ctx.cr0.eq) goto loc_82EA156C;
loc_82EA1510:
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 2, ctx.xer);
	// bge cr6,0x82ea156c
	if (!ctx.cr6.lt) goto loc_82EA156C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// clrlwi r28,r9,12
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFFF;
	// addis r29,r11,-16384
	ctx.r29.s64 = ctx.r11.s64 + -1073741824;
	// blt cr6,0x82ea1538
	if (ctx.cr6.lt) goto loc_82EA1538;
	// addis r29,r11,-16640
	ctx.r29.s64 = ctx.r11.s64 + -1090519040;
loc_82EA1538:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r24,1
	ctx.r6.s64 = ctx.r24.s64 + 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA1558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e928e8
	ctx.lr = 0x82EA156C;
	sub_82E928E8(ctx, base);
loc_82EA156C:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA1578:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82ea143c
	if (ctx.cr6.lt) goto loc_82EA143C;
loc_82EA1580:
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm. r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82ea15ac
	if (ctx.cr0.eq) goto loc_82EA15AC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ea0e90
	ctx.lr = 0x82EA15AC;
	sub_82EA0E90(ctx, base);
loc_82EA15AC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ea15e4
	if (ctx.cr6.eq) goto loc_82EA15E4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,13
	ctx.r11.u64 = ctx.r11.u64 | 13;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ea0e90
	ctx.lr = 0x82EA15E4;
	sub_82EA0E90(ctx, base);
loc_82EA15E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA15F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e928e8
	ctx.lr = 0x82EA1608;
	sub_82E928E8(ctx, base);
	// lwz r3,828(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 828);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea161c
	if (ctx.cr6.eq) goto loc_82EA161C;
	// bl 0x82e9e850
	ctx.lr = 0x82EA1618;
	sub_82E9E850(ctx, base);
	// stw r23,828(r30)
	PPC_STORE_U32(ctx.r30.u32 + 828, ctx.r23.u32);
loc_82EA161C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA1628"))) PPC_WEAK_FUNC(sub_82EA1628);
PPC_FUNC_IMPL(__imp__sub_82EA1628) {
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
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ea165c
	if (ctx.cr0.eq) goto loc_82EA165C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// stw r11,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r11.u32);
	// b 0x82ea16b0
	goto loc_82EA16B0;
loc_82EA165C:
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// lwz r9,816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// li r10,6995
	ctx.r10.s64 = 6995;
	// stw r11,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r11.u32);
	// lis r11,2746
	ctx.r11.s64 = 179961856;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r7,r11,53434
	ctx.r7.u64 = ctx.r11.u64 | 53434;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea0e90
	ctx.lr = 0x82EA1690;
	sub_82EA0E90(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2048
	ctx.r9.s64 = 2048;
	// stw r11,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// stw r10,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r9.u32);
	// stw r11,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r11.u32);
loc_82EA16B0:
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

__attribute__((alias("__imp__sub_82EA16C4"))) PPC_WEAK_FUNC(sub_82EA16C4);
PPC_FUNC_IMPL(__imp__sub_82EA16C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA16C8"))) PPC_WEAK_FUNC(sub_82EA16C8);
PPC_FUNC_IMPL(__imp__sub_82EA16C8) {
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
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,32
	ctx.r8.s64 = 32;
	// rlwinm r7,r4,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,2600(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2600);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea1720
	if (ctx.cr6.eq) goto loc_82EA1720;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,85
	ctx.r3.s64 = 85;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA1720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EA1720:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA1730"))) PPC_WEAK_FUNC(sub_82EA1730);
PPC_FUNC_IMPL(__imp__sub_82EA1730) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA1738"))) PPC_WEAK_FUNC(sub_82EA1738);
PPC_FUNC_IMPL(__imp__sub_82EA1738) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA1740"))) PPC_WEAK_FUNC(sub_82EA1740);
PPC_FUNC_IMPL(__imp__sub_82EA1740) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,788(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, ctx.r4.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// stw r11,784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 784, ctx.r11.u32);
	// stw r11,792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 792, ctx.r11.u32);
	// stw r10,788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 788, ctx.r10.u32);
	// stw r11,796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 796, ctx.r11.u32);
	// stw r11,800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 800, ctx.r11.u32);
	// stw r11,804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 804, ctx.r11.u32);
	// stw r11,808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 808, ctx.r11.u32);
	// stw r11,812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 812, ctx.r11.u32);
	// stw r11,832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 832, ctx.r11.u32);
	// stw r11,836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 836, ctx.r11.u32);
	// stw r11,840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 840, ctx.r11.u32);
	// stw r11,844(r3)
	PPC_STORE_U32(ctx.r3.u32 + 844, ctx.r11.u32);
	// stw r11,848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 848, ctx.r11.u32);
	// stw r11,852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 852, ctx.r11.u32);
	// stw r11,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, ctx.r11.u32);
	// stw r11,828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 828, ctx.r11.u32);
	// stw r5,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r5.u32);
	// bne cr6,0x82ea17a4
	if (!ctx.cr6.eq) goto loc_82EA17A4;
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// addi r6,r11,5832
	ctx.r6.s64 = ctx.r11.s64 + 5832;
loc_82EA17A4:
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ea17b8
	if (ctx.cr6.eq) goto loc_82EA17B8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82ea17c0
	goto loc_82EA17C0;
loc_82EA17B8:
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// addi r11,r11,5936
	ctx.r11.s64 = ctx.r11.s64 + 5936;
loc_82EA17C0:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ea17d4
	if (ctx.cr6.eq) goto loc_82EA17D4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82ea17dc
	goto loc_82EA17DC;
loc_82EA17D4:
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// addi r11,r11,5944
	ctx.r11.s64 = ctx.r11.s64 + 5944;
loc_82EA17DC:
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA17E4"))) PPC_WEAK_FUNC(sub_82EA17E4);
PPC_FUNC_IMPL(__imp__sub_82EA17E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA17E8"))) PPC_WEAK_FUNC(sub_82EA17E8);
PPC_FUNC_IMPL(__imp__sub_82EA17E8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ea1818
	if (!ctx.cr0.eq) goto loc_82EA1818;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82ea188c
	goto loc_82EA188C;
loc_82EA1818:
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r10,r11,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r10,788(r30)
	PPC_STORE_U32(ctx.r30.u32 + 788, ctx.r10.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bne 0x82ea1854
	if (!ctx.cr0.eq) goto loc_82EA1854;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA1854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EA1854:
	// addi r10,r30,20
	ctx.r10.s64 = ctx.r30.s64 + 20;
	// li r11,64
	ctx.r11.s64 = 64;
loc_82EA185C:
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x82ea185c
	if (!ctx.cr0.eq) goto loc_82EA185C;
	// lwz r11,788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ea1880
	if (!ctx.cr0.eq) goto loc_82EA1880;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea1888
	if (ctx.cr0.eq) goto loc_82EA1888;
loc_82EA1880:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_82EA1888:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EA188C:
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

__attribute__((alias("__imp__sub_82EA18A4"))) PPC_WEAK_FUNC(sub_82EA18A4);
PPC_FUNC_IMPL(__imp__sub_82EA18A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA18A8"))) PPC_WEAK_FUNC(sub_82EA18A8);
PPC_FUNC_IMPL(__imp__sub_82EA18A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82EA18B0;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r26,r10,26
	ctx.r26.u64 = ctx.r10.u32 & 0x3F;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,25560
	ctx.r11.s64 = ctx.r11.s64 + 25560;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r4,r26,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r31,r9,10,23,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1FF;
	// rlwinm r11,r10,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xF;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lbzx r7,r4,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// rlwinm r10,r8,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0xFFFFE000;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// rlwinm r25,r30,23,30,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 23) & 0x3;
	// rlwinm r23,r30,21,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0x1;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// rlwinm r24,r9,1,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r22,r8,1,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// srawi r30,r10,26
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFFFF) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 26;
	// rlwinm r21,r7,2,3,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1FFFFFFC;
	// bl 0x82e83dc8
	ctx.lr = 0x82EA1928;
	sub_82E83DC8(ctx, base);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// bl 0x82e84170
	ctx.lr = 0x82EA1964;
	sub_82E84170(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA196C"))) PPC_WEAK_FUNC(sub_82EA196C);
PPC_FUNC_IMPL(__imp__sub_82EA196C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA1970"))) PPC_WEAK_FUNC(sub_82EA1970);
PPC_FUNC_IMPL(__imp__sub_82EA1970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EA1978;
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
	// ble cr6,0x82ea19f4
	if (!ctx.cr6.gt) goto loc_82EA19F4;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82ea19a0
	if (!ctx.cr6.lt) goto loc_82EA19A0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82EA19A0:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82299698
	ctx.lr = 0x82EA19AC;
	sub_82299698(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82ea19c4
	if (!ctx.cr0.eq) goto loc_82EA19C4;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82ea19f4
	goto loc_82EA19F4;
loc_82EA19C4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ea19f0
	if (ctx.cr6.eq) goto loc_82EA19F0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82cb1160
	ctx.lr = 0x82EA19E4;
	sub_82CB1160(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822996c0
	ctx.lr = 0x82EA19F0;
	sub_822996C0(ctx, base);
loc_82EA19F0:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82EA19F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA19FC"))) PPC_WEAK_FUNC(sub_82EA19FC);
PPC_FUNC_IMPL(__imp__sub_82EA19FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA1A00"))) PPC_WEAK_FUNC(sub_82EA1A00);
PPC_FUNC_IMPL(__imp__sub_82EA1A00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA1A14"))) PPC_WEAK_FUNC(sub_82EA1A14);
PPC_FUNC_IMPL(__imp__sub_82EA1A14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA1A18"))) PPC_WEAK_FUNC(sub_82EA1A18);
PPC_FUNC_IMPL(__imp__sub_82EA1A18) {
	PPC_FUNC_PROLOGUE();
	// li r10,63
	ctx.r10.s64 = 63;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EA1A24:
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
	// bge 0x82ea1a24
	if (!ctx.cr0.lt) goto loc_82EA1A24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA1A40"))) PPC_WEAK_FUNC(sub_82EA1A40);
PPC_FUNC_IMPL(__imp__sub_82EA1A40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x82ea1970
	sub_82EA1970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA1A50"))) PPC_WEAK_FUNC(sub_82EA1A50);
PPC_FUNC_IMPL(__imp__sub_82EA1A50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA1A54"))) PPC_WEAK_FUNC(sub_82EA1A54);
PPC_FUNC_IMPL(__imp__sub_82EA1A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA1A58"))) PPC_WEAK_FUNC(sub_82EA1A58);
PPC_FUNC_IMPL(__imp__sub_82EA1A58) {
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
	// addi r31,r3,768
	ctx.r31.s64 = ctx.r3.s64 + 768;
	// li r30,63
	ctx.r30.s64 = 63;
loc_82EA1A74:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea1a8c
	if (ctx.cr6.eq) goto loc_82EA1A8C;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x822996c0
	ctx.lr = 0x82EA1A8C;
	sub_822996C0(ctx, base);
loc_82EA1A8C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82ea1a74
	if (!ctx.cr0.lt) goto loc_82EA1A74;
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

__attribute__((alias("__imp__sub_82EA1AAC"))) PPC_WEAK_FUNC(sub_82EA1AAC);
PPC_FUNC_IMPL(__imp__sub_82EA1AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA1AB0"))) PPC_WEAK_FUNC(sub_82EA1AB0);
PPC_FUNC_IMPL(__imp__sub_82EA1AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r9,r10,-18936
	ctx.r9.s64 = ctx.r10.s64 + -18936;
	// li r10,63
	ctx.r10.s64 = 63;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EA1AC8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x82ea1ac8
	if (!ctx.cr0.lt) goto loc_82EA1AC8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA1AE4"))) PPC_WEAK_FUNC(sub_82EA1AE4);
PPC_FUNC_IMPL(__imp__sub_82EA1AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA1AE8"))) PPC_WEAK_FUNC(sub_82EA1AE8);
PPC_FUNC_IMPL(__imp__sub_82EA1AE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA1AEC"))) PPC_WEAK_FUNC(sub_82EA1AEC);
PPC_FUNC_IMPL(__imp__sub_82EA1AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA1AF0"))) PPC_WEAK_FUNC(sub_82EA1AF0);
PPC_FUNC_IMPL(__imp__sub_82EA1AF0) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ea1b28
	if (!ctx.cr6.gt) goto loc_82EA1B28;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ea1970
	ctx.lr = 0x82EA1B28;
	sub_82EA1970(ctx, base);
loc_82EA1B28:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82ea1b40
	if (ctx.cr6.lt) goto loc_82EA1B40;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82EA1B40:
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

__attribute__((alias("__imp__sub_82EA1B58"))) PPC_WEAK_FUNC(sub_82EA1B58);
PPC_FUNC_IMPL(__imp__sub_82EA1B58) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,-18936
	ctx.r10.s64 = ctx.r10.s64 + -18936;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82ea1a58
	sub_82EA1A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA1B70"))) PPC_WEAK_FUNC(sub_82EA1B70);
PPC_FUNC_IMPL(__imp__sub_82EA1B70) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-18936
	ctx.r11.s64 = ctx.r11.s64 + -18936;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ea1a58
	ctx.lr = 0x82EA1BA0;
	sub_82EA1A58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea1bb0
	if (ctx.cr0.eq) goto loc_82EA1BB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x82EA1BB0;
	sub_822990F0(ctx, base);
loc_82EA1BB0:
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

__attribute__((alias("__imp__sub_82EA1BCC"))) PPC_WEAK_FUNC(sub_82EA1BCC);
PPC_FUNC_IMPL(__imp__sub_82EA1BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA1BD0"))) PPC_WEAK_FUNC(sub_82EA1BD0);
PPC_FUNC_IMPL(__imp__sub_82EA1BD0) {
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
	// li r3,856
	ctx.r3.s64 = 856;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA1BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea1c28
	if (ctx.cr0.eq) goto loc_82EA1C28;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r9,r10,-18936
	ctx.r9.s64 = ctx.r10.s64 + -18936;
	// li r10,63
	ctx.r10.s64 = 63;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EA1C0C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x82ea1c0c
	if (!ctx.cr0.lt) goto loc_82EA1C0C;
	// b 0x82ea1c2c
	goto loc_82EA1C2C;
loc_82EA1C28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EA1C2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA1C3C"))) PPC_WEAK_FUNC(sub_82EA1C3C);
PPC_FUNC_IMPL(__imp__sub_82EA1C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA1C40"))) PPC_WEAK_FUNC(sub_82EA1C40);
PPC_FUNC_IMPL(__imp__sub_82EA1C40) {
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
	// rlwinm r11,r30,20,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0x3F;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ea1ca0
	if (!ctx.cr6.eq) goto loc_82EA1CA0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82ea1c8c
	if (!ctx.cr6.lt) goto loc_82EA1C8C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea1970
	ctx.lr = 0x82EA1C8C;
	sub_82EA1970(ctx, base);
loc_82EA1C8C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ea1cd0
	if (!ctx.cr6.lt) goto loc_82EA1CD0;
loc_82EA1C98:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ea1d0c
	goto loc_82EA1D0C;
loc_82EA1CA0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82ea1cc8
	goto loc_82EA1CC8;
loc_82EA1CB8:
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82ea1d24
	if (ctx.cr6.eq) goto loc_82EA1D24;
loc_82EA1CC8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ea1cb8
	if (ctx.cr6.gt) goto loc_82EA1CB8;
loc_82EA1CD0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea1af0
	ctx.lr = 0x82EA1CDC;
	sub_82EA1AF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82ea1c98
	if (ctx.cr6.lt) goto loc_82EA1C98;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r30,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r30.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
loc_82EA1D0C:
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
loc_82EA1D24:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x82ea1d0c
	goto loc_82EA1D0C;
}

__attribute__((alias("__imp__sub_82EA1D2C"))) PPC_WEAK_FUNC(sub_82EA1D2C);
PPC_FUNC_IMPL(__imp__sub_82EA1D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA1D30"))) PPC_WEAK_FUNC(sub_82EA1D30);
PPC_FUNC_IMPL(__imp__sub_82EA1D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82EA1D38;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2031
	ctx.r11.s64 = 133103616;
	// addis r10,r4,16368
	ctx.r10.s64 = ctx.r4.s64 + 1072693248;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ea1ee4
	if (!ctx.cr6.gt) goto loc_82EA1EE4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ea1ee4
	if (ctx.cr6.eq) goto loc_82EA1EE4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ea1ee4
	if (ctx.cr6.eq) goto loc_82EA1EE4;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ea1ee4
	if (!ctx.cr6.lt) goto loc_82EA1EE4;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ea1d84
	if (!ctx.cr6.gt) goto loc_82EA1D84;
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
loc_82EA1D84:
	// rlwinm r30,r4,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFF000;
	// add r26,r4,r5
	ctx.r26.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82ea1ee4
	if (!ctx.cr6.lt) goto loc_82EA1EE4;
	// addi r27,r28,16
	ctx.r27.s64 = ctx.r28.s64 + 16;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82EA1D9C:
	// rlwinm r11,r30,20,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0x3F;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ea1e7c
	if (!ctx.cr6.eq) goto loc_82EA1E7C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82ea1dd0
	if (!ctx.cr6.lt) goto loc_82EA1DD0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea1970
	ctx.lr = 0x82EA1DD0;
	sub_82EA1970(ctx, base);
loc_82EA1DD0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82ea1ed8
	if (ctx.cr6.lt) goto loc_82EA1ED8;
loc_82EA1DDC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea1af0
	ctx.lr = 0x82EA1DE8;
	sub_82EA1AF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82ea1ed8
	if (ctx.cr6.lt) goto loc_82EA1ED8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r30,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r30.u32);
	// stw r29,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r29.u32);
loc_82EA1E14:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ea1ed8
	if (ctx.cr6.eq) goto loc_82EA1ED8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ea1ec4
	if (!ctx.cr0.eq) goto loc_82EA1EC4;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ea1eb8
	if (!ctx.cr6.eq) goto loc_82EA1EB8;
	// lwz r11,788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 788);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ea1ec8
	if (!ctx.cr0.eq) goto loc_82EA1EC8;
	// lwz r10,784(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 784);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,788(r28)
	PPC_STORE_U32(ctx.r28.u32 + 788, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ea0e90
	ctx.lr = 0x82EA1E78;
	sub_82EA0E90(ctx, base);
	// b 0x82ea1ec8
	goto loc_82EA1EC8;
loc_82EA1E7C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82ea1ea4
	goto loc_82EA1EA4;
loc_82EA1E94:
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82ea1eb0
	if (ctx.cr6.eq) goto loc_82EA1EB0;
loc_82EA1EA4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ea1e94
	if (ctx.cr6.gt) goto loc_82EA1E94;
	// b 0x82ea1ddc
	goto loc_82EA1DDC;
loc_82EA1EB0:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// b 0x82ea1e14
	goto loc_82EA1E14;
loc_82EA1EB8:
	// rlwinm. r9,r11,0,10,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ea1ec4
	if (!ctx.cr0.eq) goto loc_82EA1EC4;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
loc_82EA1EC4:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82EA1EC8:
	// addi r30,r30,4096
	ctx.r30.s64 = ctx.r30.s64 + 4096;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82ea1d9c
	if (ctx.cr6.lt) goto loc_82EA1D9C;
	// b 0x82ea1ee4
	goto loc_82EA1EE4;
loc_82EA1ED8:
	// lwz r11,788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 788);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,788(r28)
	PPC_STORE_U32(ctx.r28.u32 + 788, ctx.r11.u32);
loc_82EA1EE4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA1EEC"))) PPC_WEAK_FUNC(sub_82EA1EEC);
PPC_FUNC_IMPL(__imp__sub_82EA1EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA1EF0"))) PPC_WEAK_FUNC(sub_82EA1EF0);
PPC_FUNC_IMPL(__imp__sub_82EA1EF0) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lis r10,-31908
	ctx.r10.s64 = -2091122688;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,18336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA1F04"))) PPC_WEAK_FUNC(sub_82EA1F04);
PPC_FUNC_IMPL(__imp__sub_82EA1F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA1F08"))) PPC_WEAK_FUNC(sub_82EA1F08);
PPC_FUNC_IMPL(__imp__sub_82EA1F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// lwz r11,18336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18336);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA1F1C"))) PPC_WEAK_FUNC(sub_82EA1F1C);
PPC_FUNC_IMPL(__imp__sub_82EA1F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA1F20"))) PPC_WEAK_FUNC(sub_82EA1F20);
PPC_FUNC_IMPL(__imp__sub_82EA1F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31908
	ctx.r9.s64 = -2091122688;
	// addi r10,r11,-8520
	ctx.r10.s64 = ctx.r11.s64 + -8520;
	// addi r8,r10,40
	ctx.r8.s64 = ctx.r10.s64 + 40;
	// addi r11,r10,40
	ctx.r11.s64 = ctx.r10.s64 + 40;
	// lwz r9,18340(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18340);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82ea1f58
	if (!ctx.cr6.lt) goto loc_82EA1F58;
loc_82EA1F40:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82ea1f60
	if (ctx.cr6.eq) goto loc_82EA1F60;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ea1f40
	if (ctx.cr6.lt) goto loc_82EA1F40;
loc_82EA1F58:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_82EA1F60:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA1F68"))) PPC_WEAK_FUNC(sub_82EA1F68);
PPC_FUNC_IMPL(__imp__sub_82EA1F68) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 * 5;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r8,-5240
	ctx.r9.s64 = ctx.r8.s64 + -5240;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ea2014
	if (ctx.cr6.eq) goto loc_82EA2014;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// subf r7,r11,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r11.s64;
	// li r8,5
	ctx.r8.s64 = 5;
loc_82EA1FA8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ea1fb8
	if (ctx.cr6.eq) goto loc_82EA1FB8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82EA1FB8:
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ea1fdc
	if (!ctx.cr6.lt) goto loc_82EA1FDC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ea1fd4
	if (!ctx.cr6.eq) goto loc_82EA1FD4;
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// b 0x82ea1ffc
	goto loc_82EA1FFC;
loc_82EA1FD4:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82ea1ff8
	goto loc_82EA1FF8;
loc_82EA1FDC:
	// ble cr6,0x82ea1ffc
	if (!ctx.cr6.gt) goto loc_82EA1FFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ea1ff0
	if (!ctx.cr6.eq) goto loc_82EA1FF0;
	// addis r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 16777216;
	// b 0x82ea1ffc
	goto loc_82EA1FFC;
loc_82EA1FF0:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
loc_82EA1FF8:
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82EA1FFC:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82ea1fa8
	if (!ctx.cr0.eq) goto loc_82EA1FA8;
	// rlwinm r11,r3,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82EA2014:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA201C"))) PPC_WEAK_FUNC(sub_82EA201C);
PPC_FUNC_IMPL(__imp__sub_82EA201C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA2020"))) PPC_WEAK_FUNC(sub_82EA2020);
PPC_FUNC_IMPL(__imp__sub_82EA2020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EA2028;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// addi r30,r10,-8520
	ctx.r30.s64 = ctx.r10.s64 + -8520;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82ea20c4
	goto loc_82EA20C4;
loc_82EA2048:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ea1f20
	ctx.lr = 0x82EA2050;
	sub_82EA1F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// beq cr6,0x82ea20bc
	if (ctx.cr6.eq) goto loc_82EA20BC;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82ea2078
	if (!ctx.cr6.eq) goto loc_82EA2078;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ea20bc
	if (ctx.cr6.eq) goto loc_82EA20BC;
loc_82EA2078:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r10,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82ea20d8
	if (ctx.cr6.eq) goto loc_82EA20D8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82ea1f68
	ctx.lr = 0x82EA2090;
	sub_82EA1F68(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ea20bc
	if (ctx.cr6.eq) goto loc_82EA20BC;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82ea20bc
	if (ctx.cr6.gt) goto loc_82EA20BC;
	// bne cr6,0x82ea20b4
	if (!ctx.cr6.eq) goto loc_82EA20B4;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ea20bc
	if (!ctx.cr6.lt) goto loc_82EA20BC;
loc_82EA20B4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82EA20BC:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82EA20C4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82ea2048
	if (!ctx.cr6.eq) goto loc_82EA2048;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82EA20D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82EA20D8:
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x82ea20d0
	goto loc_82EA20D0;
}

__attribute__((alias("__imp__sub_82EA20E0"))) PPC_WEAK_FUNC(sub_82EA20E0);
PPC_FUNC_IMPL(__imp__sub_82EA20E0) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,-13873
	ctx.r11.s64 = ctx.r3.s64 + -909180928;
	// addic. r11,r11,-19521
	ctx.xer.ca = ctx.r11.u32 > 19520;
	ctx.r11.s64 = ctx.r11.s64 + -19521;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea2100
	if (ctx.cr0.eq) goto loc_82EA2100;
	// cmplwi cr6,r11,1503
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1503, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r3,10280
	ctx.r3.s64 = 673710080;
	// ori r3,r3,134
	ctx.r3.u64 = ctx.r3.u64 | 134;
	// blr 
	return;
loc_82EA2100:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,74
	ctx.r3.u64 = ctx.r3.u64 | 74;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA210C"))) PPC_WEAK_FUNC(sub_82EA210C);
PPC_FUNC_IMPL(__imp__sub_82EA210C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA2110"))) PPC_WEAK_FUNC(sub_82EA2110);
PPC_FUNC_IMPL(__imp__sub_82EA2110) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2118"))) PPC_WEAK_FUNC(sub_82EA2118);
PPC_FUNC_IMPL(__imp__sub_82EA2118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EA2120;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// bl 0x82ead558
	ctx.lr = 0x82EA2138;
	sub_82EAD558(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb2de0
	ctx.lr = 0x82EA2150;
	sub_82EB2DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea2170
	if (!ctx.cr0.lt) goto loc_82EA2170;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EA215C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eae008
	ctx.lr = 0x82EA2164;
	sub_82EAE008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82EA2170:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82ea215c
	goto loc_82EA215C;
}

__attribute__((alias("__imp__sub_82EA2178"))) PPC_WEAK_FUNC(sub_82EA2178);
PPC_FUNC_IMPL(__imp__sub_82EA2178) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r3,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r3.s64 = 32 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2188"))) PPC_WEAK_FUNC(sub_82EA2188);
PPC_FUNC_IMPL(__imp__sub_82EA2188) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,26
	ctx.r3.u64 = ctx.r3.u32 & 0x3F;
	// b 0x82e5fe30
	sub_82E5FE30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA2190"))) PPC_WEAK_FUNC(sub_82EA2190);
PPC_FUNC_IMPL(__imp__sub_82EA2190) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2198"))) PPC_WEAK_FUNC(sub_82EA2198);
PPC_FUNC_IMPL(__imp__sub_82EA2198) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA21A0"))) PPC_WEAK_FUNC(sub_82EA21A0);
PPC_FUNC_IMPL(__imp__sub_82EA21A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e8a870
	sub_82E8A870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA21A4"))) PPC_WEAK_FUNC(sub_82EA21A4);
PPC_FUNC_IMPL(__imp__sub_82EA21A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA21A8"))) PPC_WEAK_FUNC(sub_82EA21A8);
PPC_FUNC_IMPL(__imp__sub_82EA21A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e68d68
	sub_82E68D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA21AC"))) PPC_WEAK_FUNC(sub_82EA21AC);
PPC_FUNC_IMPL(__imp__sub_82EA21AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA21B0"))) PPC_WEAK_FUNC(sub_82EA21B0);
PPC_FUNC_IMPL(__imp__sub_82EA21B0) {
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
	// bl 0x82e8a598
	ctx.lr = 0x82EA21C0;
	sub_82E8A598(ctx, base);
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

__attribute__((alias("__imp__sub_82EA21D4"))) PPC_WEAK_FUNC(sub_82EA21D4);
PPC_FUNC_IMPL(__imp__sub_82EA21D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA21D8"))) PPC_WEAK_FUNC(sub_82EA21D8);
PPC_FUNC_IMPL(__imp__sub_82EA21D8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r10,17
	ctx.r10.s64 = 17;
	// bl 0x82e86250
	ctx.lr = 0x82EA2208;
	sub_82E86250(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// beq 0x82ea2220
	if (ctx.cr0.eq) goto loc_82EA2220;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ea2228
	goto loc_82EA2228;
loc_82EA2220:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82EA2228:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2238"))) PPC_WEAK_FUNC(sub_82EA2238);
PPC_FUNC_IMPL(__imp__sub_82EA2238) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r10,19
	ctx.r10.s64 = 19;
	// bl 0x82e86250
	ctx.lr = 0x82EA2268;
	sub_82E86250(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// beq 0x82ea2280
	if (ctx.cr0.eq) goto loc_82EA2280;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ea2288
	goto loc_82EA2288;
loc_82EA2280:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82EA2288:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2298"))) PPC_WEAK_FUNC(sub_82EA2298);
PPC_FUNC_IMPL(__imp__sub_82EA2298) {
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
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e86250
	ctx.lr = 0x82EA22D0;
	sub_82E86250(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea22e4
	if (ctx.cr0.eq) goto loc_82EA22E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ea22ec
	goto loc_82EA22EC;
loc_82EA22E4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82EA22EC:
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

__attribute__((alias("__imp__sub_82EA2300"))) PPC_WEAK_FUNC(sub_82EA2300);
PPC_FUNC_IMPL(__imp__sub_82EA2300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EA2308;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r28,7
	ctx.r28.s64 = 7;
	// stfd f0,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f0.u64);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfd f13,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f13.u64);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfd f12,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f12.u64);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stfd f11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f11.u64);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82eb44e0
	ctx.lr = 0x82EA2380;
	sub_82EB44E0(ctx, base);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfd f11,152(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA23B8"))) PPC_WEAK_FUNC(sub_82EA23B8);
PPC_FUNC_IMPL(__imp__sub_82EA23B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EA23C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f11,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r28,7
	ctx.r28.s64 = 7;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfd f0,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f0.u64);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stfd f13,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f13.u64);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stfd f12,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.f12.u64);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stfd f11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f11.u64);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stfd f10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f10.u64);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stfd f9,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.f9.u64);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82eb44e0
	ctx.lr = 0x82EA2448;
	sub_82EB44E0(ctx, base);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfd f11,152(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA2480"))) PPC_WEAK_FUNC(sub_82EA2480);
PPC_FUNC_IMPL(__imp__sub_82EA2480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x82ea2500
	if (ctx.cr6.eq) goto loc_82EA2500;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// beq cr6,0x82ea24f8
	if (ctx.cr6.eq) goto loc_82EA24F8;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// beq cr6,0x82ea24f0
	if (ctx.cr6.eq) goto loc_82EA24F0;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// beq cr6,0x82ea24e8
	if (ctx.cr6.eq) goto loc_82EA24E8;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// beq cr6,0x82ea24b4
	if (ctx.cr6.eq) goto loc_82EA24B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82EA24B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-5132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5132);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-5136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-5140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5140);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f1,f11,f13,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// blr 
	return;
loc_82EA24E8:
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82EA24F0:
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82EA24F8:
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82EA2500:
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2508"))) PPC_WEAK_FUNC(sub_82EA2508);
PPC_FUNC_IMPL(__imp__sub_82EA2508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2520"))) PPC_WEAK_FUNC(sub_82EA2520);
PPC_FUNC_IMPL(__imp__sub_82EA2520) {
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
	// bl 0x82e76df8
	ctx.lr = 0x82EA2530;
	sub_82E76DF8(ctx, base);
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

__attribute__((alias("__imp__sub_82EA2544"))) PPC_WEAK_FUNC(sub_82EA2544);
PPC_FUNC_IMPL(__imp__sub_82EA2544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA2548"))) PPC_WEAK_FUNC(sub_82EA2548);
PPC_FUNC_IMPL(__imp__sub_82EA2548) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82e85a10
	sub_82E85A10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA2558"))) PPC_WEAK_FUNC(sub_82EA2558);
PPC_FUNC_IMPL(__imp__sub_82EA2558) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82e83e68
	sub_82E83E68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA2560"))) PPC_WEAK_FUNC(sub_82EA2560);
PPC_FUNC_IMPL(__imp__sub_82EA2560) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82e85a10
	sub_82E85A10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA2570"))) PPC_WEAK_FUNC(sub_82EA2570);
PPC_FUNC_IMPL(__imp__sub_82EA2570) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82e83e68
	sub_82E83E68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA2578"))) PPC_WEAK_FUNC(sub_82EA2578);
PPC_FUNC_IMPL(__imp__sub_82EA2578) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82e860a0
	ctx.lr = 0x82EA2590;
	sub_82E860A0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea25a4
	if (ctx.cr0.eq) goto loc_82EA25A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ea25ac
	goto loc_82EA25AC;
loc_82EA25A4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82EA25AC:
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

__attribute__((alias("__imp__sub_82EA25C0"))) PPC_WEAK_FUNC(sub_82EA25C0);
PPC_FUNC_IMPL(__imp__sub_82EA25C0) {
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
	// bl 0x82e86150
	ctx.lr = 0x82EA25D0;
	sub_82E86150(ctx, base);
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

__attribute__((alias("__imp__sub_82EA25E4"))) PPC_WEAK_FUNC(sub_82EA25E4);
PPC_FUNC_IMPL(__imp__sub_82EA25E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA25E8"))) PPC_WEAK_FUNC(sub_82EA25E8);
PPC_FUNC_IMPL(__imp__sub_82EA25E8) {
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
	// bl 0x82e83ef0
	ctx.lr = 0x82EA25F8;
	sub_82E83EF0(ctx, base);
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

__attribute__((alias("__imp__sub_82EA260C"))) PPC_WEAK_FUNC(sub_82EA260C);
PPC_FUNC_IMPL(__imp__sub_82EA260C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA2610"))) PPC_WEAK_FUNC(sub_82EA2610);
PPC_FUNC_IMPL(__imp__sub_82EA2610) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e85a10
	ctx.lr = 0x82EA262C;
	sub_82E85A10(ctx, base);
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

__attribute__((alias("__imp__sub_82EA2640"))) PPC_WEAK_FUNC(sub_82EA2640);
PPC_FUNC_IMPL(__imp__sub_82EA2640) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e83e68
	ctx.lr = 0x82EA2654;
	sub_82E83E68(ctx, base);
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

__attribute__((alias("__imp__sub_82EA2668"))) PPC_WEAK_FUNC(sub_82EA2668);
PPC_FUNC_IMPL(__imp__sub_82EA2668) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e85a10
	sub_82E85A10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA266C"))) PPC_WEAK_FUNC(sub_82EA266C);
PPC_FUNC_IMPL(__imp__sub_82EA266C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA2670"))) PPC_WEAK_FUNC(sub_82EA2670);
PPC_FUNC_IMPL(__imp__sub_82EA2670) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e83e68
	sub_82E83E68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA2674"))) PPC_WEAK_FUNC(sub_82EA2674);
PPC_FUNC_IMPL(__imp__sub_82EA2674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA2678"))) PPC_WEAK_FUNC(sub_82EA2678);
PPC_FUNC_IMPL(__imp__sub_82EA2678) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82e85ed0
	ctx.lr = 0x82EA2690;
	sub_82E85ED0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea26a4
	if (ctx.cr0.eq) goto loc_82EA26A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ea26ac
	goto loc_82EA26AC;
loc_82EA26A4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82EA26AC:
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

__attribute__((alias("__imp__sub_82EA26C0"))) PPC_WEAK_FUNC(sub_82EA26C0);
PPC_FUNC_IMPL(__imp__sub_82EA26C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e83ec8
	sub_82E83EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA26C4"))) PPC_WEAK_FUNC(sub_82EA26C4);
PPC_FUNC_IMPL(__imp__sub_82EA26C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA26C8"))) PPC_WEAK_FUNC(sub_82EA26C8);
PPC_FUNC_IMPL(__imp__sub_82EA26C8) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82e85fb8
	ctx.lr = 0x82EA26E0;
	sub_82E85FB8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea26f4
	if (ctx.cr0.eq) goto loc_82EA26F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ea26fc
	goto loc_82EA26FC;
loc_82EA26F4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82EA26FC:
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

__attribute__((alias("__imp__sub_82EA2710"))) PPC_WEAK_FUNC(sub_82EA2710);
PPC_FUNC_IMPL(__imp__sub_82EA2710) {
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
	// bl 0x82e86070
	ctx.lr = 0x82EA2720;
	sub_82E86070(ctx, base);
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

__attribute__((alias("__imp__sub_82EA2734"))) PPC_WEAK_FUNC(sub_82EA2734);
PPC_FUNC_IMPL(__imp__sub_82EA2734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA2738"))) PPC_WEAK_FUNC(sub_82EA2738);
PPC_FUNC_IMPL(__imp__sub_82EA2738) {
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
	// bl 0x82e83ed8
	ctx.lr = 0x82EA2748;
	sub_82E83ED8(ctx, base);
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

__attribute__((alias("__imp__sub_82EA275C"))) PPC_WEAK_FUNC(sub_82EA275C);
PPC_FUNC_IMPL(__imp__sub_82EA275C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA2760"))) PPC_WEAK_FUNC(sub_82EA2760);
PPC_FUNC_IMPL(__imp__sub_82EA2760) {
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
	// bl 0x82e86218
	ctx.lr = 0x82EA2770;
	sub_82E86218(ctx, base);
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

__attribute__((alias("__imp__sub_82EA2784"))) PPC_WEAK_FUNC(sub_82EA2784);
PPC_FUNC_IMPL(__imp__sub_82EA2784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA2788"))) PPC_WEAK_FUNC(sub_82EA2788);
PPC_FUNC_IMPL(__imp__sub_82EA2788) {
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
	// bl 0x82e83f08
	ctx.lr = 0x82EA2798;
	sub_82E83F08(ctx, base);
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

__attribute__((alias("__imp__sub_82EA27AC"))) PPC_WEAK_FUNC(sub_82EA27AC);
PPC_FUNC_IMPL(__imp__sub_82EA27AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA27B0"))) PPC_WEAK_FUNC(sub_82EA27B0);
PPC_FUNC_IMPL(__imp__sub_82EA27B0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82e83f50
	ctx.lr = 0x82EA27C8;
	sub_82E83F50(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea27dc
	if (ctx.cr0.eq) goto loc_82EA27DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ea27e4
	goto loc_82EA27E4;
loc_82EA27DC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EA27E4:
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

__attribute__((alias("__imp__sub_82EA27F8"))) PPC_WEAK_FUNC(sub_82EA27F8);
PPC_FUNC_IMPL(__imp__sub_82EA27F8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82e83fa8
	ctx.lr = 0x82EA2810;
	sub_82E83FA8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea2824
	if (ctx.cr0.eq) goto loc_82EA2824;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ea282c
	goto loc_82EA282C;
loc_82EA2824:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EA282C:
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

__attribute__((alias("__imp__sub_82EA2840"))) PPC_WEAK_FUNC(sub_82EA2840);
PPC_FUNC_IMPL(__imp__sub_82EA2840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// vspltw128 v63,v1,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xFF));
	// li r11,4
	ctx.r11.s64 = 4;
	// vspltw128 v62,v1,1
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xAA));
	// li r10,8
	ctx.r10.s64 = 8;
	// vspltw128 v61,v1,2
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0x55));
	// stvewx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2864"))) PPC_WEAK_FUNC(sub_82EA2864);
PPC_FUNC_IMPL(__imp__sub_82EA2864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA2868"))) PPC_WEAK_FUNC(sub_82EA2868);
PPC_FUNC_IMPL(__imp__sub_82EA2868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// vspltw128 v63,v1,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xFF));
	// li r11,4
	ctx.r11.s64 = 4;
	// vspltw128 v62,v1,1
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xAA));
	// li r10,8
	ctx.r10.s64 = 8;
	// vspltw128 v61,v1,2
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0x55));
	// stvewx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA288C"))) PPC_WEAK_FUNC(sub_82EA288C);
PPC_FUNC_IMPL(__imp__sub_82EA288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA2890"))) PPC_WEAK_FUNC(sub_82EA2890);
PPC_FUNC_IMPL(__imp__sub_82EA2890) {
	PPC_FUNC_PROLOGUE();
	// vpermwi128 v62,v1,99
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0x9C));
	// vpermwi128 v63,v2,135
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x78));
	// vpermwi128 v0,v2,99
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x9C));
	// vpermwi128 v13,v1,135
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0x78));
	// vmulfp128 v12,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// vnmsubfp v1,v13,v0,v12
	_mm_store_ps(ctx.v1.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA28AC"))) PPC_WEAK_FUNC(sub_82EA28AC);
PPC_FUNC_IMPL(__imp__sub_82EA28AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA28B0"))) PPC_WEAK_FUNC(sub_82EA28B0);
PPC_FUNC_IMPL(__imp__sub_82EA28B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA28B4"))) PPC_WEAK_FUNC(sub_82EA28B4);
PPC_FUNC_IMPL(__imp__sub_82EA28B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA28B8"))) PPC_WEAK_FUNC(sub_82EA28B8);
PPC_FUNC_IMPL(__imp__sub_82EA28B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA28BC"))) PPC_WEAK_FUNC(sub_82EA28BC);
PPC_FUNC_IMPL(__imp__sub_82EA28BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA28C0"))) PPC_WEAK_FUNC(sub_82EA28C0);
PPC_FUNC_IMPL(__imp__sub_82EA28C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA28C4"))) PPC_WEAK_FUNC(sub_82EA28C4);
PPC_FUNC_IMPL(__imp__sub_82EA28C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA28C8"))) PPC_WEAK_FUNC(sub_82EA28C8);
PPC_FUNC_IMPL(__imp__sub_82EA28C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,11
	ctx.r11.s64 = 11;
	// lvx128 v63,r0,r3
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvsl v0,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r3,r11
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v1,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA28E0"))) PPC_WEAK_FUNC(sub_82EA28E0);
PPC_FUNC_IMPL(__imp__sub_82EA28E0) {
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

__attribute__((alias("__imp__sub_82EA28F0"))) PPC_WEAK_FUNC(sub_82EA28F0);
PPC_FUNC_IMPL(__imp__sub_82EA28F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA290C"))) PPC_WEAK_FUNC(sub_82EA290C);
PPC_FUNC_IMPL(__imp__sub_82EA290C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA2910"))) PPC_WEAK_FUNC(sub_82EA2910);
PPC_FUNC_IMPL(__imp__sub_82EA2910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,11
	ctx.r11.s64 = 11;
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,4
	ctx.r10.s64 = 4;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r9,8
	ctx.r9.s64 = 8;
	// lvsl v7,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v61,r4,r11
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r5,r11
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v61,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v62,v62,v60,v7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vpermwi128 v61,v63,99
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x9C));
	// vpermwi128 v60,v62,135
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x78));
	// vpermwi128 v0,v62,99
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x9C));
	// vpermwi128 v13,v63,135
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x78));
	// vmulfp128 v12,v61,v60
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// vnmsubfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v63,v0,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v62,v0,1
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw128 v61,v0,2
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// stvewx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2970"))) PPC_WEAK_FUNC(sub_82EA2970);
PPC_FUNC_IMPL(__imp__sub_82EA2970) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82e5f660
	sub_82E5F660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA297C"))) PPC_WEAK_FUNC(sub_82EA297C);
PPC_FUNC_IMPL(__imp__sub_82EA297C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA2980"))) PPC_WEAK_FUNC(sub_82EA2980);
PPC_FUNC_IMPL(__imp__sub_82EA2980) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82e5f660
	sub_82E5F660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA298C"))) PPC_WEAK_FUNC(sub_82EA298C);
PPC_FUNC_IMPL(__imp__sub_82EA298C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA2990"))) PPC_WEAK_FUNC(sub_82EA2990);
PPC_FUNC_IMPL(__imp__sub_82EA2990) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA2998"))) PPC_WEAK_FUNC(sub_82EA2998);
PPC_FUNC_IMPL(__imp__sub_82EA2998) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA29A0"))) PPC_WEAK_FUNC(sub_82EA29A0);
PPC_FUNC_IMPL(__imp__sub_82EA29A0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA29A8"))) PPC_WEAK_FUNC(sub_82EA29A8);
PPC_FUNC_IMPL(__imp__sub_82EA29A8) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA29B0"))) PPC_WEAK_FUNC(sub_82EA29B0);
PPC_FUNC_IMPL(__imp__sub_82EA29B0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA29B8"))) PPC_WEAK_FUNC(sub_82EA29B8);
PPC_FUNC_IMPL(__imp__sub_82EA29B8) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA29C0"))) PPC_WEAK_FUNC(sub_82EA29C0);
PPC_FUNC_IMPL(__imp__sub_82EA29C0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA29C8"))) PPC_WEAK_FUNC(sub_82EA29C8);
PPC_FUNC_IMPL(__imp__sub_82EA29C8) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA29D0"))) PPC_WEAK_FUNC(sub_82EA29D0);
PPC_FUNC_IMPL(__imp__sub_82EA29D0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA29D8"))) PPC_WEAK_FUNC(sub_82EA29D8);
PPC_FUNC_IMPL(__imp__sub_82EA29D8) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82eb5108
	ctx.lr = 0x82EA29F4;
	sub_82EB5108(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ea2a04
	if (!ctx.cr6.eq) goto loc_82EA2A04;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ea2a20
	goto loc_82EA2A20;
loc_82EA2A04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r10,-449
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -449, ctx.xer);
	// bne cr6,0x82ea2a1c
	if (!ctx.cr6.eq) goto loc_82EA2A1C;
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
loc_82EA2A1C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82EA2A20:
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

__attribute__((alias("__imp__sub_82EA2A34"))) PPC_WEAK_FUNC(sub_82EA2A34);
PPC_FUNC_IMPL(__imp__sub_82EA2A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA2A38"))) PPC_WEAK_FUNC(sub_82EA2A38);
PPC_FUNC_IMPL(__imp__sub_82EA2A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EA2A40;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// bl 0x82e76df8
	ctx.lr = 0x82EA2A68;
	sub_82E76DF8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e5f660
	ctx.lr = 0x82EA2A78;
	sub_82E5F660(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e85a00
	ctx.lr = 0x82EA2A80;
	sub_82E85A00(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ea2b0c
	if (ctx.cr6.eq) goto loc_82EA2B0C;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82ea2afc
	if (ctx.cr6.eq) goto loc_82EA2AFC;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x82ea2ae4
	if (ctx.cr6.eq) goto loc_82EA2AE4;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x82ea2ac8
	if (ctx.cr6.eq) goto loc_82EA2AC8;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x82ea2abc
	if (ctx.cr6.eq) goto loc_82EA2ABC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82ea31d0
	goto loc_82EA31D0;
loc_82EA2ABC:
	// li r10,20
	ctx.r10.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ea2b14
	goto loc_82EA2B14;
loc_82EA2AC8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e83ec8
	ctx.lr = 0x82EA2AD0;
	sub_82E83EC8(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// li r10,19
	ctx.r10.s64 = 19;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// b 0x82ea2b1c
	goto loc_82EA2B1C;
loc_82EA2AE4:
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r21,6
	ctx.r21.s64 = 6;
	// b 0x82ea2b20
	goto loc_82EA2B20;
loc_82EA2AFC:
	// lwz r5,204(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r10,17
	ctx.r10.s64 = 17;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// b 0x82ea2b18
	goto loc_82EA2B18;
loc_82EA2B0C:
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// li r10,3
	ctx.r10.s64 = 3;
loc_82EA2B14:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82EA2B18:
	// li r21,1
	ctx.r21.s64 = 1;
loc_82EA2B1C:
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
loc_82EA2B20:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// bl 0x82e86250
	ctx.lr = 0x82EA2B34;
	sub_82E86250(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82ea2b48
	if (!ctx.cr0.eq) goto loc_82EA2B48;
loc_82EA2B3C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ea31d0
	goto loc_82EA31D0;
loc_82EA2B48:
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e5f660
	ctx.lr = 0x82EA2B58;
	sub_82E5F660(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea2b8c
	if (ctx.cr0.eq) goto loc_82EA2B8C;
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82299698
	ctx.lr = 0x82EA2B78;
	sub_82299698(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne 0x82ea2b8c
	if (!ctx.cr0.eq) goto loc_82EA2B8C;
loc_82EA2B80:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA2B88;
	sub_82E76D78(ctx, base);
	// b 0x82ea2b3c
	goto loc_82EA2B3C;
loc_82EA2B8C:
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea2bcc
	if (ctx.cr0.eq) goto loc_82EA2BCC;
	// lwz r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mullw r3,r10,r11
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x82299698
	ctx.lr = 0x82EA2BAC;
	sub_82299698(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne 0x82ea2bcc
	if (!ctx.cr0.eq) goto loc_82EA2BCC;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82ea2b80
	if (ctx.cr6.eq) goto loc_82EA2B80;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA2BC8;
	sub_822996C0(ctx, base);
	// b 0x82ea2b80
	goto loc_82EA2B80;
loc_82EA2BCC:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82ea3198
	if (ctx.cr6.eq) goto loc_82EA3198;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// lis r9,6688
	ctx.r9.s64 = 438304768;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// lis r7,6688
	ctx.r7.s64 = 438304768;
	// lfs f31,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f31.f64 = double(temp.f32);
	// ori r18,r10,76
	ctx.r18.u64 = ctx.r10.u64 | 76;
	// ori r15,r9,75
	ctx.r15.u64 = ctx.r9.u64 | 75;
	// ori r16,r8,83
	ctx.r16.u64 = ctx.r8.u64 | 83;
	// ori r17,r7,84
	ctx.r17.u64 = ctx.r7.u64 | 84;
loc_82EA2C00:
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e5f660
	ctx.lr = 0x82EA2C10;
	sub_82E5F660(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e5f660
	ctx.lr = 0x82EA2C20;
	sub_82E5F660(ctx, base);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82ea318c
	if (ctx.cr6.eq) goto loc_82EA318C;
loc_82EA2C2C:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ea2d38
	if (ctx.cr6.eq) goto loc_82EA2D38;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82ea2d04
	if (ctx.cr6.eq) goto loc_82EA2D04;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x82ea2cc8
	if (ctx.cr6.eq) goto loc_82EA2CC8;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x82ea2c8c
	if (ctx.cr6.eq) goto loc_82EA2C8C;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x82ea2d68
	if (!ctx.cr6.eq) goto loc_82EA2D68;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e86218
	ctx.lr = 0x82EA2C70;
	sub_82E86218(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e86218
	ctx.lr = 0x82EA2C88;
	sub_82E86218(ctx, base);
	// b 0x82ea2d68
	goto loc_82EA2D68;
loc_82EA2C8C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e86070
	ctx.lr = 0x82EA2CA8;
	sub_82E86070(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e86070
	ctx.lr = 0x82EA2CC4;
	sub_82E86070(ctx, base);
	// b 0x82ea2d68
	goto loc_82EA2D68;
loc_82EA2CC8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e85f88
	ctx.lr = 0x82EA2CE4;
	sub_82E85F88(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e85f88
	ctx.lr = 0x82EA2D00;
	sub_82E85F88(ctx, base);
	// b 0x82ea2d68
	goto loc_82EA2D68;
loc_82EA2D04:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e86150
	ctx.lr = 0x82EA2D1C;
	sub_82E86150(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e86150
	ctx.lr = 0x82EA2D34;
	sub_82E86150(ctx, base);
	// b 0x82ea2d68
	goto loc_82EA2D68;
loc_82EA2D38:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e85e90
	ctx.lr = 0x82EA2D50;
	sub_82E85E90(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e85e90
	ctx.lr = 0x82EA2D68;
	sub_82E85E90(ctx, base);
loc_82EA2D68:
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ea2e10
	if (ctx.cr0.eq) goto loc_82EA2E10;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// bne 0x82ea2d84
	if (!ctx.cr0.eq) goto loc_82EA2D84;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82EA2D84:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea2d90
	if (ctx.cr0.eq) goto loc_82EA2D90;
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
loc_82EA2D90:
	// lwz r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82ea2dd0
	if (ctx.cr6.eq) goto loc_82EA2DD0;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// clrlwi r6,r6,26
	ctx.r6.u64 = ctx.r6.u32 & 0x3F;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82e62be8
	ctx.lr = 0x82EA2DCC;
	sub_82E62BE8(ctx, base);
	// b 0x82ea2e08
	goto loc_82EA2E08;
loc_82EA2DD0:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// lwz r7,208(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// clrlwi r7,r7,26
	ctx.r7.u64 = ctx.r7.u32 & 0x3F;
	// lwz r5,204(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// bl 0x82e63db0
	ctx.lr = 0x82EA2E08;
	sub_82E63DB0(ctx, base);
loc_82EA2E08:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// b 0x82ea2e24
	goto loc_82EA2E24;
loc_82EA2E10:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r29,156(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x82ea2e24
	if (!ctx.cr6.eq) goto loc_82EA2E24;
	// lwz r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_82EA2E24:
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea2e38
	if (ctx.cr0.eq) goto loc_82EA2E38;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// b 0x82ea2e4c
	goto loc_82EA2E4C;
loc_82EA2E38:
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r27,148(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x82ea2e4c
	if (!ctx.cr6.eq) goto loc_82EA2E4C;
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
loc_82EA2E4C:
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// beq cr6,0x82ea2e68
	if (ctx.cr6.eq) goto loc_82EA2E68;
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r15.s32, ctx.xer);
	// bne cr6,0x82ea2e6c
	if (!ctx.cr6.eq) goto loc_82EA2E6C;
loc_82EA2E68:
	// li r30,8
	ctx.r30.s64 = 8;
loc_82EA2E6C:
	// lwz r10,336(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmpw cr6,r10,r18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r18.s32, ctx.xer);
	// beq cr6,0x82ea2e84
	if (ctx.cr6.eq) goto loc_82EA2E84;
	// cmpw cr6,r10,r15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r15.s32, ctx.xer);
	// bne cr6,0x82ea2e88
	if (!ctx.cr6.eq) goto loc_82EA2E88;
loc_82EA2E84:
	// ori r30,r30,4
	ctx.r30.u64 = ctx.r30.u64 | 4;
loc_82EA2E88:
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x82ea2e98
	if (ctx.cr6.eq) goto loc_82EA2E98;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x82ea2e9c
	if (!ctx.cr6.eq) goto loc_82EA2E9C;
loc_82EA2E98:
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
loc_82EA2E9C:
	// cmpw cr6,r10,r16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x82ea2eac
	if (ctx.cr6.eq) goto loc_82EA2EAC;
	// cmpw cr6,r10,r17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x82ea2eb0
	if (!ctx.cr6.eq) goto loc_82EA2EB0;
loc_82EA2EAC:
	// ori r30,r30,2
	ctx.r30.u64 = ctx.r30.u64 | 2;
loc_82EA2EB0:
	// lwz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// rlwinm r7,r10,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82ea2f9c
	if (!ctx.cr6.eq) goto loc_82EA2F9C;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82ea2f18
	if (ctx.cr6.eq) goto loc_82EA2F18;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea301c
	if (ctx.cr6.eq) goto loc_82EA301C;
loc_82EA2EDC:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,300(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// mullw r11,r30,r11
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// lwz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// mullw r5,r9,r8
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + ctx.r27.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EA2F04;
	sub_82CB1160(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ea2edc
	if (ctx.cr6.lt) goto loc_82EA2EDC;
	// b 0x82ea301c
	goto loc_82EA301C;
loc_82EA2F18:
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea301c
	if (ctx.cr6.eq) goto loc_82EA301C;
loc_82EA2F28:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea2f88
	if (ctx.cr6.eq) goto loc_82EA2F88;
loc_82EA2F38:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mullw r10,r30,r11
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r6,300(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// mullw r8,r28,r9
	ctx.r8.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r11,r28
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// mullw r11,r7,r30
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r5,r6,r5
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EA2F78;
	sub_82CB1160(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ea2f38
	if (ctx.cr6.lt) goto loc_82EA2F38;
loc_82EA2F88:
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ea2f28
	if (ctx.cr6.lt) goto loc_82EA2F28;
	// b 0x82ea301c
	goto loc_82EA301C;
loc_82EA2F9C:
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// beq cr6,0x82ea2fdc
	if (ctx.cr6.eq) goto loc_82EA2FDC;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,264(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r5,260(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x831f5b30
	ctx.lr = 0x82EA2FD8;
	sub_831F5B30(ctx, base);
	// b 0x82ea301c
	goto loc_82EA301C;
loc_82EA2FDC:
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r7,264(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r6,260(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lwz r8,268(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// bl 0x831f6700
	ctx.lr = 0x82EA301C;
	sub_831F6700(ctx, base);
loc_82EA301C:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ea30bc
	if (ctx.cr0.eq) goto loc_82EA30BC;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// bne 0x82ea3038
	if (!ctx.cr0.eq) goto loc_82EA3038;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82EA3038:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea3044
	if (ctx.cr0.eq) goto loc_82EA3044;
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
loc_82EA3044:
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r4,328(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r3,324(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82ea3084
	if (ctx.cr6.eq) goto loc_82EA3084;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lwz r8,336(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// clrlwi r6,r8,26
	ctx.r6.u64 = ctx.r8.u32 & 0x3F;
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82e62988
	ctx.lr = 0x82EA3080;
	sub_82E62988(ctx, base);
	// b 0x82ea30bc
	goto loc_82EA30BC;
loc_82EA3084:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// lwz r7,336(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// clrlwi r7,r7,26
	ctx.r7.u64 = ctx.r7.u32 & 0x3F;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82e63a88
	ctx.lr = 0x82EA30BC;
	sub_82E63A88(ctx, base);
loc_82EA30BC:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ea3168
	if (ctx.cr6.eq) goto loc_82EA3168;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82ea314c
	if (ctx.cr6.eq) goto loc_82EA314C;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x82ea3128
	if (ctx.cr6.eq) goto loc_82EA3128;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x82ea3104
	if (ctx.cr6.eq) goto loc_82EA3104;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x82ea3180
	if (!ctx.cr6.eq) goto loc_82EA3180;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e83f08
	ctx.lr = 0x82EA30F4;
	sub_82E83F08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e83f08
	ctx.lr = 0x82EA3100;
	sub_82E83F08(ctx, base);
	// b 0x82ea3180
	goto loc_82EA3180;
loc_82EA3104:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e83ed8
	ctx.lr = 0x82EA3114;
	sub_82E83ED8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e83ed8
	ctx.lr = 0x82EA3124;
	sub_82E83ED8(ctx, base);
	// b 0x82ea3180
	goto loc_82EA3180;
loc_82EA3128:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e83eb0
	ctx.lr = 0x82EA3138;
	sub_82E83EB0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e83eb0
	ctx.lr = 0x82EA3148;
	sub_82E83EB0(ctx, base);
	// b 0x82ea3180
	goto loc_82EA3180;
loc_82EA314C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e83ef0
	ctx.lr = 0x82EA3158;
	sub_82E83EF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e83ef0
	ctx.lr = 0x82EA3164;
	sub_82E83EF0(ctx, base);
	// b 0x82ea3180
	goto loc_82EA3180;
loc_82EA3168:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e83e80
	ctx.lr = 0x82EA3174;
	sub_82E83E80(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e83e80
	ctx.lr = 0x82EA3180;
	sub_82E83E80(ctx, base);
loc_82EA3180:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82ea2c2c
	if (ctx.cr6.lt) goto loc_82EA2C2C;
loc_82EA318C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82ea2c00
	if (ctx.cr6.lt) goto loc_82EA2C00;
loc_82EA3198:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82ea31ac
	if (ctx.cr6.eq) goto loc_82EA31AC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA31AC;
	sub_822996C0(ctx, base);
loc_82EA31AC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82ea31c0
	if (ctx.cr6.eq) goto loc_82EA31C0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA31C0;
	sub_822996C0(ctx, base);
loc_82EA31C0:
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x82e68d68
	ctx.lr = 0x82EA31C8;
	sub_82E68D68(ctx, base);
	// stw r26,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EA31D0:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA31DC"))) PPC_WEAK_FUNC(sub_82EA31DC);
PPC_FUNC_IMPL(__imp__sub_82EA31DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA31E0"))) PPC_WEAK_FUNC(sub_82EA31E0);
PPC_FUNC_IMPL(__imp__sub_82EA31E0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82eb51f0
	ctx.lr = 0x82EA3204;
	sub_82EB51F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb5298
	ctx.lr = 0x82EA3214;
	sub_82EB5298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea3244
	if (!ctx.cr0.lt) goto loc_82EA3244;
loc_82EA321C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb53f8
	ctx.lr = 0x82EA3228;
	sub_82EB53F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_82EA3244:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82ea2118
	ctx.lr = 0x82EA3254;
	sub_82EA2118(ctx, base);
	// b 0x82ea321c
	goto loc_82EA321C;
}

__attribute__((alias("__imp__sub_82EA3258"))) PPC_WEAK_FUNC(sub_82EA3258);
PPC_FUNC_IMPL(__imp__sub_82EA3258) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82eb51f0
	ctx.lr = 0x82EA327C;
	sub_82EB51F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb5298
	ctx.lr = 0x82EA328C;
	sub_82EB5298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea32bc
	if (!ctx.cr0.lt) goto loc_82EA32BC;
loc_82EA3294:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb53f8
	ctx.lr = 0x82EA32A0;
	sub_82EB53F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_82EA32BC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82ea2118
	ctx.lr = 0x82EA32CC;
	sub_82EA2118(ctx, base);
	// b 0x82ea3294
	goto loc_82EA3294;
}

__attribute__((alias("__imp__sub_82EA32D0"))) PPC_WEAK_FUNC(sub_82EA32D0);
PPC_FUNC_IMPL(__imp__sub_82EA32D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EA32D8;
	__savegprlr_14(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r9,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r9.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r22,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r22.u32);
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x82eb5410
	ctx.lr = 0x82EA3308;
	sub_82EB5410(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb9208
	ctx.lr = 0x82EA3310;
	sub_82EB9208(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r16,r28
	ctx.r16.u64 = ctx.r28.u64;
	// mr r15,r28
	ctx.r15.u64 = ctx.r28.u64;
	// bne cr6,0x82ea3374
	if (!ctx.cr6.eq) goto loc_82EA3374;
loc_82EA3354:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb9548
	ctx.lr = 0x82EA335C;
	sub_82EB9548(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82eb6330
	ctx.lr = 0x82EA3364;
	sub_82EB6330(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EA336C:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82EA3374:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82ea3354
	if (ctx.cr6.eq) goto loc_82EA3354;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82ea33a4
	if (!ctx.cr6.eq) goto loc_82EA33A4;
loc_82EA3384:
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_82EA338C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb9548
	ctx.lr = 0x82EA3394;
	sub_82EB9548(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82eb6330
	ctx.lr = 0x82EA339C;
	sub_82EB6330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ea336c
	goto loc_82EA336C;
loc_82EA33A4:
	// lwz r11,860(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82ea33bc
	if (!ctx.cr6.eq) goto loc_82EA33BC;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r11.u32);
loc_82EA33BC:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb9550
	ctx.lr = 0x82EA33DC;
	sub_82EB9550(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea33ec
	if (!ctx.cr0.lt) goto loc_82EA33EC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ea338c
	goto loc_82EA338C;
loc_82EA33EC:
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e5f660
	ctx.lr = 0x82EA33FC;
	sub_82E5F660(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r10,836(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// li r14,1
	ctx.r14.s64 = 1;
	// clrlwi r31,r11,31
	ctx.r31.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// rlwinm r22,r19,24,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 24) & 0x1;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x82ea3444
	if (ctx.cr6.eq) goto loc_82EA3444;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82ea343c
	if (!ctx.cr6.gt) goto loc_82EA343C;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x82ea3444
	if (ctx.cr6.gt) goto loc_82EA3444;
loc_82EA343C:
	// mr r18,r14
	ctx.r18.u64 = ctx.r14.u64;
	// b 0x82ea3448
	goto loc_82EA3448;
loc_82EA3444:
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
loc_82EA3448:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82ea3594
	if (ctx.cr6.eq) goto loc_82EA3594;
	// clrlwi r27,r19,26
	ctx.r27.u64 = ctx.r19.u32 & 0x3F;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e5fe30
	ctx.lr = 0x82EA3464;
	sub_82E5FE30(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x82ea347c
	if (!ctx.cr6.eq) goto loc_82EA347C;
	// lwz r27,8(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r30,12(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// b 0x82ea3574
	goto loc_82EA3574;
loc_82EA347C:
	// lwz r29,844(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 844);
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r11,8191
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8191, ctx.xer);
	// bgt cr6,0x82ea3384
	if (ctx.cr6.gt) goto loc_82EA3384;
	// lwz r30,852(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,8191
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8191, ctx.xer);
	// bgt cr6,0x82ea3384
	if (ctx.cr6.gt) goto loc_82EA3384;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82ea34b0
	if (!ctx.cr6.gt) goto loc_82EA34B0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EA34B0:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bgt cr6,0x82ea34c0
	if (ctx.cr6.gt) goto loc_82EA34C0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EA34C0:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x82ea34d0
	goto loc_82EA34D0;
loc_82EA34C8:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82EA34D0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ea34c8
	if (ctx.cr6.gt) goto loc_82EA34C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e5f960
	ctx.lr = 0x82EA34E8;
	sub_82E5F960(ctx, base);
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// subfic r10,r3,32
	ctx.xer.ca = ctx.r3.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82ea3500
	if (!ctx.cr0.lt) goto loc_82EA3500;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82EA3500:
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// slw r7,r14,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r11.u8 & 0x3F));
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subf. r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x82ea3518
	if (!ctx.cr0.lt) goto loc_82EA3518;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_82EA3518:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// slw r8,r14,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r30,r7,-1
	ctx.r30.s64 = ctx.r7.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r25,r8,-1
	ctx.r25.s64 = ctx.r8.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// andc r27,r30,r11
	ctx.r27.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// andc r30,r25,r10
	ctx.r30.u64 = ctx.r25.u64 & ~ctx.r10.u64;
	// bl 0x82e5fe08
	ctx.lr = 0x82EA356C;
	sub_82E5FE08(ctx, base);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82EA3574:
	// addi r11,r30,31
	ctx.r11.s64 = ctx.r30.s64 + 31;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// twllei r10,0
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r25,r11,0,0,19
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_82EA3594:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82ea366c
	if (ctx.cr6.eq) goto loc_82EA366C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea35b8
	if (!ctx.cr6.eq) goto loc_82EA35B8;
	// lwz r16,292(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// lwz r15,296(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// b 0x82ea360c
	goto loc_82EA360C;
loc_82EA35B8:
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e5f660
	ctx.lr = 0x82EA35C8;
	sub_82E5F660(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// bl 0x82e5f668
	ctx.lr = 0x82EA35D4;
	sub_82E5F668(ctx, base);
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r10,28(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r5,476(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// clrlwi r7,r11,26
	ctx.r7.u64 = ctx.r11.u32 & 0x3F;
	// lwz r4,472(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// rlwinm r6,r10,4,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// lwz r3,468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r16,532(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r15,536(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// bl 0x82e5fe08
	ctx.lr = 0x82EA3604;
	sub_82E5FE08(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// rotlwi r26,r3,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
loc_82EA360C:
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82e5fe30
	ctx.lr = 0x82EA3620;
	sub_82E5FE30(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r16,r9
	ctx.r11.u64 = ctx.r16.u64 + ctx.r9.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// add r11,r15,r10
	ctx.r11.u64 = ctx.r15.u64 + ctx.r10.u64;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// lwz r8,316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stw r10,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r10.u32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r24,r11,0,0,19
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x82ea3670
	goto loc_82EA3670;
loc_82EA366C:
	// lwz r26,112(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82EA3670:
	// add. r3,r24,r25
	ctx.r3.u64 = ctx.r24.u64 + ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ea3694
	if (ctx.cr0.eq) goto loc_82EA3694;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EA3680;
	sub_82299698(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne 0x82ea3694
	if (!ctx.cr0.eq) goto loc_82EA3694;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82ea338c
	goto loc_82EA338C;
loc_82EA3694:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82ea3764
	if (ctx.cr6.eq) goto loc_82EA3764;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82ea36b8
	if (ctx.cr6.eq) goto loc_82EA36B8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x82ea36d0
	goto loc_82EA36D0;
loc_82EA36B8:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// twllei r11,0
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// twllei r8,0
	// divwu r4,r10,r11
	ctx.r4.u32 = ctx.r10.u32 / ctx.r11.u32;
	// divwu r5,r9,r8
	ctx.r5.u32 = ctx.r9.u32 / ctx.r8.u32;
loc_82EA36D0:
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// add r9,r30,r8
	ctx.r9.u64 = ctx.r30.u64 + ctx.r8.u64;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r7,r9,r8
	ctx.r7.u32 = ctx.r9.u32 / ctx.r8.u32;
	// divwu r6,r10,r11
	ctx.r6.u32 = ctx.r10.u32 / ctx.r11.u32;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// twllei r8,0
	// twllei r11,0
	// bl 0x82e66c00
	ctx.lr = 0x82EA3700;
	sub_82E66C00(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r7,r19,26
	ctx.r7.u64 = ctx.r19.u32 & 0x3F;
	// addi r27,r10,16080
	ctx.r27.s64 = ctx.r10.s64 + 16080;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// twllei r11,0
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// divwu r8,r10,r11
	ctx.r8.u32 = ctx.r10.u32 / ctx.r11.u32;
	// subf r6,r29,r17
	ctx.r6.s64 = ctx.r17.s64 - ctx.r29.s64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lbzx r10,r7,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// divwu r7,r21,r11
	ctx.r7.u32 = ctx.r21.u32 / ctx.r11.u32;
	// twllei r11,0
	// bl 0x82e62be0
	ctx.lr = 0x82EA3758;
	sub_82E62BE0(ctx, base);
	// add r11,r29,r20
	ctx.r11.u64 = ctx.r29.u64 + ctx.r20.u64;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// b 0x82ea3768
	goto loc_82EA3768;
loc_82EA3764:
	// stw r17,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r17.u32);
loc_82EA3768:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82ea37e0
	if (ctx.cr6.eq) goto loc_82EA37E0;
	// add r11,r26,r25
	ctx.r11.u64 = ctx.r26.u64 + ctx.r25.u64;
	// lwz r10,368(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r30,r26,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r26.s64;
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// beq cr6,0x82ea37e4
	if (ctx.cr6.eq) goto loc_82EA37E4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// divwu r8,r15,r10
	ctx.r8.u32 = ctx.r15.u32 / ctx.r10.u32;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// divwu r7,r16,r11
	ctx.r7.u32 = ctx.r16.u32 / ctx.r11.u32;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// add r3,r25,r20
	ctx.r3.u64 = ctx.r25.u64 + ctx.r20.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// twllei r10,0
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// twllei r11,0
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r4,376(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// bl 0x82e62be0
	ctx.lr = 0x82EA37DC;
	sub_82E62BE0(ctx, base);
	// b 0x82ea37e4
	goto loc_82EA37E4;
loc_82EA37E0:
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82EA37E4:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r8,r19,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r7,8(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// lwz r6,12(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r21,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r21.u32);
	// stw r28,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r28.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stw r28,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r28.u32);
	// stw r14,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r14.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82EA3830;
	sub_82CB1160(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r10,440(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r9,868(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r8,820(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// stw r11,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r11.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r6,860(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// stw r10,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
	// stw r9,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r9.u32);
	// stw r8,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r8.u32);
	// bl 0x82eb9060
	ctx.lr = 0x82EA3868;
	sub_82EB9060(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea3960
	if (ctx.cr6.eq) goto loc_82EA3960;
	// lwz r9,788(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ea38dc
	if (ctx.cr6.eq) goto loc_82EA38DC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea38dc
	if (!ctx.cr6.eq) goto loc_82EA38DC;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// divwu r4,r8,r11
	ctx.r4.u32 = ctx.r8.u32 / ctx.r11.u32;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// twllei r11,0
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divwu r5,r7,r10
	ctx.r5.u32 = ctx.r7.u32 / ctx.r10.u32;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// twllei r10,0
	// divwu r7,r8,r10
	ctx.r7.u32 = ctx.r8.u32 / ctx.r10.u32;
	// divwu r6,r9,r11
	ctx.r6.u32 = ctx.r9.u32 / ctx.r11.u32;
	// b 0x82ea390c
	goto loc_82EA390C;
loc_82EA38DC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r8,r15,r11
	ctx.r8.u64 = ctx.r15.u64 + ctx.r11.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// add r9,r16,r10
	ctx.r9.u64 = ctx.r16.u64 + ctx.r10.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divwu r7,r8,r11
	ctx.r7.u32 = ctx.r8.u32 / ctx.r11.u32;
	// divwu r6,r9,r10
	ctx.r6.u32 = ctx.r9.u32 / ctx.r10.u32;
loc_82EA390C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// twllei r11,0
	// twllei r10,0
	// bl 0x82e66c00
	ctx.lr = 0x82EA391C;
	sub_82E66C00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// add r7,r15,r11
	ctx.r7.u64 = ctx.r15.u64 + ctx.r11.u64;
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// add r9,r16,r4
	ctx.r9.u64 = ctx.r16.u64 + ctx.r4.u64;
	// lwz r8,376(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// addi r30,r9,-1
	ctx.r30.s64 = ctx.r9.s64 + -1;
	// twllei r4,0
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// add r7,r25,r20
	ctx.r7.u64 = ctx.r25.u64 + ctx.r20.u64;
	// divwu r5,r5,r11
	ctx.r5.u32 = ctx.r5.u32 / ctx.r11.u32;
	// divwu r4,r30,r4
	ctx.r4.u32 = ctx.r30.u32 / ctx.r4.u32;
	// twllei r11,0
	// bl 0x82e62980
	ctx.lr = 0x82EA3960;
	sub_82E62980(ctx, base);
loc_82EA3960:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82ea338c
	if (ctx.cr6.eq) goto loc_82EA338C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA3974;
	sub_822996C0(ctx, base);
	// b 0x82ea338c
	goto loc_82EA338C;
}

__attribute__((alias("__imp__sub_82EA3978"))) PPC_WEAK_FUNC(sub_82EA3978);
PPC_FUNC_IMPL(__imp__sub_82EA3978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82EA3980;
	__savegprlr_23(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// bl 0x82ead558
	ctx.lr = 0x82EA39A4;
	sub_82EAD558(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb9208
	ctx.lr = 0x82EA39AC;
	sub_82EB9208(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82ea39d4
	if (!ctx.cr6.eq) goto loc_82EA39D4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb9548
	ctx.lr = 0x82EA39BC;
	sub_82EB9548(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eae008
	ctx.lr = 0x82EA39C4;
	sub_82EAE008(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EA39CC:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82EA39D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ea39fc
	if (!ctx.cr6.eq) goto loc_82EA39FC;
loc_82EA39DC:
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_82EA39E4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb9548
	ctx.lr = 0x82EA39EC;
	sub_82EB9548(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eae008
	ctx.lr = 0x82EA39F4;
	sub_82EAE008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ea39cc
	goto loc_82EA39CC;
loc_82EA39FC:
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e5f660
	ctx.lr = 0x82EA3A0C;
	sub_82E5F660(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea3b24
	if (ctx.cr0.eq) goto loc_82EA3B24;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-2960
	ctx.r4.s64 = ctx.r11.s64 + -2960;
	// bl 0x82e83f50
	ctx.lr = 0x82EA3A28;
	sub_82E83F50(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82ea3a3c
	if (!ctx.cr0.eq) goto loc_82EA3A3C;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x82ea39e4
	goto loc_82EA39E4;
loc_82EA3A3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e762e8
	ctx.lr = 0x82EA3A44;
	sub_82E762E8(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r11,0,24,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ea2a38
	ctx.lr = 0x82EA3A5C;
	sub_82EA2A38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA3A68;
	sub_82E76D78(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82ea39e4
	if (ctx.cr6.lt) goto loc_82EA39E4;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x82ea3ac8
	if (ctx.cr6.eq) goto loc_82EA3AC8;
	// cmpwi cr6,r28,19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 19, ctx.xer);
	// bne cr6,0x82ea3a9c
	if (!ctx.cr6.eq) goto loc_82EA3A9C;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,4,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,10,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3F;
	// bl 0x82e85fb8
	ctx.lr = 0x82EA3A98;
	sub_82E85FB8(ctx, base);
	// b 0x82ea3adc
	goto loc_82EA3ADC;
loc_82EA3A9C:
	// cmpwi cr6,r28,18
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 18, ctx.xer);
	// bne cr6,0x82ea3ac0
	if (!ctx.cr6.eq) goto loc_82EA3AC0;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,4,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,10,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3F;
	// bl 0x82e85ed0
	ctx.lr = 0x82EA3ABC;
	sub_82E85ED0(ctx, base);
	// b 0x82ea3adc
	goto loc_82EA3ADC;
loc_82EA3AC0:
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 20, ctx.xer);
	// bne cr6,0x82ea3b18
	if (!ctx.cr6.eq) goto loc_82EA3B18;
loc_82EA3AC8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e85dd8
	ctx.lr = 0x82EA3ADC;
	sub_82E85DD8(ctx, base);
loc_82EA3ADC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea3978
	ctx.lr = 0x82EA3AFC;
	sub_82EA3978(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA3B08;
	sub_82E76D78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA3B10;
	sub_82E76D78(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x82ea39e4
	goto loc_82EA39E4;
loc_82EA3B18:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e76d78
	ctx.lr = 0x82EA3B20;
	sub_82E76D78(ctx, base);
	// b 0x82ea39dc
	goto loc_82EA39DC;
loc_82EA3B24:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb9550
	ctx.lr = 0x82EA3B44;
	sub_82EB9550(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea3b54
	if (!ctx.cr0.lt) goto loc_82EA3B54;
loc_82EA3B4C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ea39e4
	goto loc_82EA39E4;
loc_82EA3B54:
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eae0e8
	ctx.lr = 0x82EA3B60;
	sub_82EAE0E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ea3b4c
	if (ctx.cr0.lt) goto loc_82EA3B4C;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eb31d8
	ctx.lr = 0x82EA3B7C;
	sub_82EB31D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ea3b4c
	if (ctx.cr0.lt) goto loc_82EA3B4C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82ea39e4
	goto loc_82EA39E4;
}

__attribute__((alias("__imp__sub_82EA3B8C"))) PPC_WEAK_FUNC(sub_82EA3B8C);
PPC_FUNC_IMPL(__imp__sub_82EA3B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA3B90"))) PPC_WEAK_FUNC(sub_82EA3B90);
PPC_FUNC_IMPL(__imp__sub_82EA3B90) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82ea3978
	sub_82EA3978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA3B98"))) PPC_WEAK_FUNC(sub_82EA3B98);
PPC_FUNC_IMPL(__imp__sub_82EA3B98) {
	PPC_FUNC_PROLOGUE();
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x82ea3978
	sub_82EA3978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA3BA0"))) PPC_WEAK_FUNC(sub_82EA3BA0);
PPC_FUNC_IMPL(__imp__sub_82EA3BA0) {
	PPC_FUNC_PROLOGUE();
	// li r8,2
	ctx.r8.s64 = 2;
	// b 0x82ea3978
	sub_82EA3978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA3BA8"))) PPC_WEAK_FUNC(sub_82EA3BA8);
PPC_FUNC_IMPL(__imp__sub_82EA3BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EA3BB0;
	__savegprlr_14(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r10,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r10.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// bl 0x82eb5410
	ctx.lr = 0x82EA3BDC;
	sub_82EB5410(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82eb9228
	ctx.lr = 0x82EA3BE4;
	sub_82EB9228(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// mr r18,r29
	ctx.r18.u64 = ctx.r29.u64;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// bne cr6,0x82ea3c50
	if (!ctx.cr6.eq) goto loc_82EA3C50;
loc_82EA3C30:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82eb9a40
	ctx.lr = 0x82EA3C38;
	sub_82EB9A40(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eb6330
	ctx.lr = 0x82EA3C40;
	sub_82EB6330(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EA3C48:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82EA3C50:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82ea3c30
	if (ctx.cr6.eq) goto loc_82EA3C30;
	// lwz r11,836(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ea3c84
	if (!ctx.cr6.eq) goto loc_82EA3C84;
loc_82EA3C64:
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_82EA3C6C:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82eb9a40
	ctx.lr = 0x82EA3C74;
	sub_82EB9A40(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eb6330
	ctx.lr = 0x82EA3C7C;
	sub_82EB6330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ea3c48
	goto loc_82EA3C48;
loc_82EA3C84:
	// lwz r11,876(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82ea3c9c
	if (!ctx.cr6.eq) goto loc_82EA3C9C;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r11.u32);
loc_82EA3C9C:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82eb9a48
	ctx.lr = 0x82EA3CBC;
	sub_82EB9A48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea3ccc
	if (!ctx.cr0.lt) goto loc_82EA3CCC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ea3c6c
	goto loc_82EA3C6C;
loc_82EA3CCC:
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e5f660
	ctx.lr = 0x82EA3CDC;
	sub_82E5F660(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r10,844(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 844);
	// li r25,1
	ctx.r25.s64 = 1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// lwz r27,836(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// rlwinm r20,r16,24,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 24) & 0x1;
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// beq cr6,0x82ea3d28
	if (ctx.cr6.eq) goto loc_82EA3D28;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// ble cr6,0x82ea3d20
	if (!ctx.cr6.gt) goto loc_82EA3D20;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x82ea3d28
	if (ctx.cr6.gt) goto loc_82EA3D28;
loc_82EA3D20:
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// b 0x82ea3d2c
	goto loc_82EA3D2C;
loc_82EA3D28:
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
loc_82EA3D2C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82ea3ec8
	if (ctx.cr6.eq) goto loc_82EA3EC8;
	// clrlwi r26,r16,26
	ctx.r26.u64 = ctx.r16.u32 & 0x3F;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e5fe30
	ctx.lr = 0x82EA3D48;
	sub_82E5FE30(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea3d74
	if (!ctx.cr6.eq) goto loc_82EA3D74;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r26,8(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwz r28,12(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r11,r31,r19
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r19.s32);
	// b 0x82ea3ec0
	goto loc_82EA3EC0;
loc_82EA3D74:
	// lwz r28,852(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmplwi cr6,r11,8191
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8191, ctx.xer);
	// bgt cr6,0x82ea3c64
	if (ctx.cr6.gt) goto loc_82EA3C64;
	// lwz r30,860(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,8191
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8191, ctx.xer);
	// bgt cr6,0x82ea3c64
	if (ctx.cr6.gt) goto loc_82EA3C64;
	// lwz r27,868(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// cmplwi cr6,r11,1023
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1023, ctx.xer);
	// bgt cr6,0x82ea3c64
	if (ctx.cr6.gt) goto loc_82EA3C64;
	// lwz r10,836(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ea3dbc
	if (!ctx.cr6.gt) goto loc_82EA3DBC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EA3DBC:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bgt cr6,0x82ea3dcc
	if (ctx.cr6.gt) goto loc_82EA3DCC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EA3DCC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x82ea3ddc
	goto loc_82EA3DDC;
loc_82EA3DD4:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82EA3DDC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ea3dd4
	if (ctx.cr6.gt) goto loc_82EA3DD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e5f960
	ctx.lr = 0x82EA3DF4;
	sub_82E5F960(ctx, base);
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// subfic r10,r3,32
	ctx.xer.ca = ctx.r3.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82ea3e0c
	if (!ctx.cr0.lt) goto loc_82EA3E0C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82EA3E0C:
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// slw r8,r25,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82ea3e24
	if (!ctx.cr0.lt) goto loc_82EA3E24;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82EA3E24:
	// addi r9,r27,-1
	ctx.r9.s64 = ctx.r27.s64 + -1;
	// slw r7,r25,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subf. r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge 0x82ea3e3c
	if (!ctx.cr0.lt) goto loc_82EA3E3C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_82EA3E3C:
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// slw r6,r25,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r25,r6,3
	ctx.r25.s64 = ctx.r6.s64 + 3;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// addi r22,r8,-1
	ctx.r22.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// andc r26,r22,r11
	ctx.r26.u64 = ctx.r22.u64 & ~ctx.r11.u64;
	// lwz r22,180(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// andc r28,r22,r10
	ctx.r28.u64 = ctx.r22.u64 & ~ctx.r10.u64;
	// rlwinm r31,r25,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x82e5fe08
	ctx.lr = 0x82EA3EA0;
	sub_82E5FE08(ctx, base);
	// addi r11,r28,31
	ctx.r11.s64 = ctx.r28.s64 + 31;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// twllei r10,0
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
loc_82EA3EC0:
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r22,r11,0,0,19
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_82EA3EC8:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea3fc4
	if (ctx.cr6.eq) goto loc_82EA3FC4;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea3ef4
	if (!ctx.cr6.eq) goto loc_82EA3EF4;
	// lwz r25,212(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lwz r24,216(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r17,220(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// b 0x82ea3f5c
	goto loc_82EA3F5C;
loc_82EA3EF4:
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// lwz r3,24(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e5f660
	ctx.lr = 0x82EA3F04;
	sub_82E5F660(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// lwz r3,24(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// bl 0x82e5f668
	ctx.lr = 0x82EA3F10;
	sub_82E5F668(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r10,536(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,224(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r6,28(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// clrlwi r7,r7,26
	ctx.r7.u64 = ctx.r7.u32 & 0x3F;
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// rlwinm r6,r6,4,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xF;
	// lwz r5,476(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lwz r4,472(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// lwz r3,468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lwz r17,540(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// bl 0x82e5fe08
	ctx.lr = 0x82EA3F4C;
	sub_82E5FE08(ctx, base);
	// lwz r25,160(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rotlwi r27,r3,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r24,156(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
loc_82EA3F5C:
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82e5fe30
	ctx.lr = 0x82EA3F70;
	sub_82E5FE30(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r25,r9
	ctx.r11.u64 = ctx.r25.u64 + ctx.r9.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// add r11,r24,r10
	ctx.r11.u64 = ctx.r24.u64 + ctx.r10.u64;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// lwz r8,236(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stw r10,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// mullw r10,r11,r17
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r17.s32);
	// addi r11,r10,4095
	ctx.r11.s64 = ctx.r10.s64 + 4095;
	// rlwinm r21,r11,0,0,19
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x82ea3fd0
	goto loc_82EA3FD0;
loc_82EA3FC4:
	// lwz r25,160(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r24,156(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
loc_82EA3FD0:
	// add. r3,r21,r22
	ctx.r3.u64 = ctx.r21.u64 + ctx.r22.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ea3ff4
	if (ctx.cr0.eq) goto loc_82EA3FF4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EA3FE0;
	sub_82299698(ctx, base);
	// mr. r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne 0x82ea3ff4
	if (!ctx.cr0.eq) goto loc_82EA3FF4;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82ea3c6c
	goto loc_82EA3C6C;
loc_82EA3FF4:
	// lwz r21,836(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82ea40e4
	if (ctx.cr6.eq) goto loc_82EA40E4;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea401c
	if (ctx.cr6.eq) goto loc_82EA401C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// b 0x82ea4028
	goto loc_82EA4028;
loc_82EA401C:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r8,16(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
loc_82EA4028:
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// clrlwi r4,r16,26
	ctx.r4.u64 = ctx.r16.u32 & 0x3F;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// addi r3,r9,16080
	ctx.r3.s64 = ctx.r9.s64 + 16080;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r8,r11,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r11.s64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// subf r7,r10,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r10.s64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// twllei r9,0
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// twllei r23,0
	// lbzx r4,r4,r3
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// mullw r6,r4,r5
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// divwu r8,r7,r9
	ctx.r8.u32 = ctx.r7.u32 / ctx.r9.u32;
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// divwu r9,r4,r5
	ctx.r9.u32 = ctx.r4.u32 / ctx.r5.u32;
	// rlwinm r28,r6,29,3,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// twllei r5,0
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// divwu r9,r19,r23
	ctx.r9.u32 = ctx.r19.u32 / ctx.r23.u32;
	// subf r7,r30,r14
	ctx.r7.s64 = ctx.r14.s64 - ctx.r30.s64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// divwu r8,r23,r28
	ctx.r8.u32 = ctx.r23.u32 / ctx.r28.u32;
	// twllei r28,0
	// bl 0x82e63d78
	ctx.lr = 0x82EA40D8;
	sub_82E63D78(ctx, base);
	// add r11,r30,r18
	ctx.r11.u64 = ctx.r30.u64 + ctx.r18.u64;
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// b 0x82ea40e8
	goto loc_82EA40E8;
loc_82EA40E4:
	// stw r14,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r14.u32);
loc_82EA40E8:
	// lwz r28,172(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82ea4180
	if (ctx.cr6.eq) goto loc_82EA4180;
	// add r11,r27,r22
	ctx.r11.u64 = ctx.r27.u64 + ctx.r22.u64;
	// lwz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r30,r27,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r27.s64;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// beq cr6,0x82ea4184
	if (ctx.cr6.eq) goto loc_82EA4184;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// lwz r27,252(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// twllei r9,0
	// divwu r8,r25,r11
	ctx.r8.u32 = ctx.r25.u32 / ctx.r11.u32;
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// divwu r9,r24,r9
	ctx.r9.u32 = ctx.r24.u32 / ctx.r9.u32;
	// lwz r4,280(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// add r3,r22,r18
	ctx.r3.u64 = ctx.r22.u64 + ctx.r18.u64;
	// stw r17,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// twllei r11,0
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82e63d78
	ctx.lr = 0x82EA417C;
	sub_82E63D78(ctx, base);
	// b 0x82ea4184
	goto loc_82EA4184;
loc_82EA4180:
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_82EA4184:
	// rlwinm r11,r16,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r23,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r23.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r19,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r19.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r11.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EA41A4;
	sub_82CB1160(ctx, base);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EA41B4;
	sub_82CB1160(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,344(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// lwz r9,884(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r8,828(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 828);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r6,876(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// stw r10,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r10.u32);
	// stw r9,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r9.u32);
	// stw r8,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r8.u32);
	// bl 0x82eb9060
	ctx.lr = 0x82EA41EC;
	sub_82EB9060(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82ea4318
	if (ctx.cr6.eq) goto loc_82EA4318;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82ea4280
	if (ctx.cr6.eq) goto loc_82EA4280;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea4280
	if (!ctx.cr6.eq) goto loc_82EA4280;
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// lwz r8,8(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	// lwz r9,4(r15)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// lwz r6,12(r15)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r8,r9,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r9.s64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r6,16(r15)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r15.u32 + 16);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwz r3,20(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// divwu r7,r7,r11
	ctx.r7.u32 = ctx.r7.u32 / ctx.r11.u32;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// divwu r8,r8,r5
	ctx.r8.u32 = ctx.r8.u32 / ctx.r5.u32;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// b 0x82ea42c4
	goto loc_82EA42C4;
loc_82EA4280:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r9,r25,r11
	ctx.r9.u64 = ctx.r25.u64 + ctx.r11.u64;
	// stw r17,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// add r10,r24,r5
	ctx.r10.u64 = ctx.r24.u64 + ctx.r5.u64;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// divwu r9,r9,r11
	ctx.r9.u32 = ctx.r9.u32 / ctx.r11.u32;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// divwu r10,r10,r5
	ctx.r10.u32 = ctx.r10.u32 / ctx.r5.u32;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
loc_82EA42C4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r7,252(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// add r9,r24,r5
	ctx.r9.u64 = ctx.r24.u64 + ctx.r5.u64;
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// add r8,r25,r11
	ctx.r8.u64 = ctx.r25.u64 + ctx.r11.u64;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// lwz r9,280(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// twllei r5,0
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// twllei r5,0
	// divwu r5,r4,r5
	ctx.r5.u32 = ctx.r4.u32 / ctx.r5.u32;
	// divwu r4,r3,r11
	ctx.r4.u32 = ctx.r3.u32 / ctx.r11.u32;
	// add r8,r22,r18
	ctx.r8.u64 = ctx.r22.u64 + ctx.r18.u64;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// twllei r11,0
	// twllei r11,0
	// bl 0x82e63a50
	ctx.lr = 0x82EA4318;
	sub_82E63A50(ctx, base);
loc_82EA4318:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82ea3c6c
	if (ctx.cr6.eq) goto loc_82EA3C6C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA432C;
	sub_822996C0(ctx, base);
	// b 0x82ea3c6c
	goto loc_82EA3C6C;
}

__attribute__((alias("__imp__sub_82EA4330"))) PPC_WEAK_FUNC(sub_82EA4330);
PPC_FUNC_IMPL(__imp__sub_82EA4330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82EA4338;
	__savegprlr_23(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// bl 0x82ead558
	ctx.lr = 0x82EA435C;
	sub_82EAD558(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb9228
	ctx.lr = 0x82EA4364;
	sub_82EB9228(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82ea438c
	if (!ctx.cr6.eq) goto loc_82EA438C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb9a40
	ctx.lr = 0x82EA4374;
	sub_82EB9A40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eae008
	ctx.lr = 0x82EA437C;
	sub_82EAE008(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EA4384:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82EA438C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ea43b4
	if (!ctx.cr6.eq) goto loc_82EA43B4;
loc_82EA4394:
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_82EA439C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb9a40
	ctx.lr = 0x82EA43A4;
	sub_82EB9A40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eae008
	ctx.lr = 0x82EA43AC;
	sub_82EAE008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ea4384
	goto loc_82EA4384;
loc_82EA43B4:
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e5f660
	ctx.lr = 0x82EA43C4;
	sub_82E5F660(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea4488
	if (ctx.cr0.eq) goto loc_82EA4488;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-2960
	ctx.r4.s64 = ctx.r11.s64 + -2960;
	// bl 0x82e83fa8
	ctx.lr = 0x82EA43E0;
	sub_82E83FA8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82ea43f4
	if (!ctx.cr0.eq) goto loc_82EA43F4;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x82ea439c
	goto loc_82EA439C;
loc_82EA43F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e762e8
	ctx.lr = 0x82EA43FC;
	sub_82E762E8(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// rlwinm r4,r11,0,24,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ea2a38
	ctx.lr = 0x82EA4414;
	sub_82EA2A38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA4420;
	sub_82E76D78(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82ea439c
	if (ctx.cr6.lt) goto loc_82EA439C;
	// cmpwi cr6,r23,17
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 17, ctx.xer);
	// bne cr6,0x82ea447c
	if (!ctx.cr6.eq) goto loc_82EA447C;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e860a0
	ctx.lr = 0x82EA4444;
	sub_82E860A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ea4330
	ctx.lr = 0x82EA4464;
	sub_82EA4330(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA4470;
	sub_82E76D78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA4478;
	sub_82E76D78(ctx, base);
	// b 0x82ea439c
	goto loc_82EA439C;
loc_82EA447C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82e76d78
	ctx.lr = 0x82EA4484;
	sub_82E76D78(ctx, base);
	// b 0x82ea4394
	goto loc_82EA4394;
loc_82EA4488:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb9a48
	ctx.lr = 0x82EA44A8;
	sub_82EB9A48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea44b8
	if (!ctx.cr0.lt) goto loc_82EA44B8;
loc_82EA44B0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ea439c
	goto loc_82EA439C;
loc_82EA44B8:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eae0e8
	ctx.lr = 0x82EA44C4;
	sub_82EAE0E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ea44b0
	if (ctx.cr0.lt) goto loc_82EA44B0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb31d8
	ctx.lr = 0x82EA44E0;
	sub_82EB31D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ea44b0
	if (ctx.cr0.lt) goto loc_82EA44B0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82ea439c
	goto loc_82EA439C;
}

__attribute__((alias("__imp__sub_82EA44F0"))) PPC_WEAK_FUNC(sub_82EA44F0);
PPC_FUNC_IMPL(__imp__sub_82EA44F0) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82ea4330
	sub_82EA4330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA44F8"))) PPC_WEAK_FUNC(sub_82EA44F8);
PPC_FUNC_IMPL(__imp__sub_82EA44F8) {
	PPC_FUNC_PROLOGUE();
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x82ea4330
	sub_82EA4330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA4500"))) PPC_WEAK_FUNC(sub_82EA4500);
PPC_FUNC_IMPL(__imp__sub_82EA4500) {
	PPC_FUNC_PROLOGUE();
	// li r8,2
	ctx.r8.s64 = 2;
	// b 0x82ea4330
	sub_82EA4330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA4508"))) PPC_WEAK_FUNC(sub_82EA4508);
PPC_FUNC_IMPL(__imp__sub_82EA4508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82EA4510;
	__savegprlr_19(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82EA4540;
	sub_82CB16F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ea4554
	if (!ctx.cr6.eq) goto loc_82EA4554;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82ea4928
	goto loc_82EA4928;
loc_82EA4554:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82ea4560
	if (!ctx.cr6.eq) goto loc_82EA4560;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EA4560:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82ea4570
	if (ctx.cr6.eq) goto loc_82EA4570;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// b 0x82ea4574
	goto loc_82EA4574;
loc_82EA4570:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82EA4574:
	// bl 0x82ea1f20
	ctx.lr = 0x82EA4578;
	sub_82EA1F20(ctx, base);
	// lwz r26,580(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ea29d8
	ctx.lr = 0x82EA4590;
	sub_82EA29D8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// rlwinm r28,r23,0,26,22
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r28,-449
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -449, ctx.xer);
	// bne cr6,0x82ea45ac
	if (!ctx.cr6.eq) goto loc_82EA45AC;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2154
	ctx.r3.u64 = ctx.r3.u64 | 2154;
	// b 0x82ea4928
	goto loc_82EA4928;
loc_82EA45AC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ea45c0
	if (ctx.cr6.eq) goto loc_82EA45C0;
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x82ea45c4
	goto loc_82EA45C4;
loc_82EA45C0:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82EA45C4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82ea45d4
	if (ctx.cr6.eq) goto loc_82EA45D4;
	// lwz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// b 0x82ea45d8
	goto loc_82EA45D8;
loc_82EA45D4:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82EA45D8:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82ea45e8
	if (ctx.cr6.eq) goto loc_82EA45E8;
	// lwz r27,0(r21)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// b 0x82ea45ec
	goto loc_82EA45EC;
loc_82EA45E8:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82EA45EC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82ea45fc
	if (ctx.cr6.eq) goto loc_82EA45FC;
	// lwz r25,0(r20)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// b 0x82ea4600
	goto loc_82EA4600;
loc_82EA45FC:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82EA4600:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82ea4624
	if (!ctx.cr6.eq) goto loc_82EA4624;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82ea461c
	if (!ctx.cr6.eq) goto loc_82EA461C;
	// li r29,256
	ctx.r29.s64 = 256;
	// li r31,256
	ctx.r31.s64 = 256;
	// b 0x82ea4648
	goto loc_82EA4648;
loc_82EA461C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x82ea4630
	goto loc_82EA4630;
loc_82EA4624:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82ea4630
	if (!ctx.cr6.eq) goto loc_82EA4630;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82EA4630:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ea463c
	if (!ctx.cr6.eq) goto loc_82EA463C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82EA463C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ea4648
	if (!ctx.cr6.eq) goto loc_82EA4648;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA4648:
	// cmpwi cr6,r26,18
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 18, ctx.xer);
	// bne cr6,0x82ea4660
	if (!ctx.cr6.eq) goto loc_82EA4660;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82ea465c
	if (!ctx.cr6.gt) goto loc_82EA465C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82EA465C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82EA4660:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82ea4670
	if (ctx.cr6.eq) goto loc_82EA4670;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82ea4674
	if (!ctx.cr6.eq) goto loc_82EA4674;
loc_82EA4670:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA4674:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8a598
	ctx.lr = 0x82EA4680;
	sub_82E8A598(ctx, base);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r26,17
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 17, ctx.xer);
	// bne cr6,0x82ea46b4
	if (!ctx.cr6.eq) goto loc_82EA46B4;
	// cmplwi cr6,r27,1024
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1024, ctx.xer);
	// ble cr6,0x82ea4698
	if (!ctx.cr6.gt) goto loc_82EA4698;
	// li r27,1024
	ctx.r27.s64 = 1024;
loc_82EA4698:
	// cmplwi cr6,r31,2048
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2048, ctx.xer);
	// ble cr6,0x82ea46a4
	if (!ctx.cr6.gt) goto loc_82EA46A4;
	// li r31,2048
	ctx.r31.s64 = 2048;
loc_82EA46A4:
	// cmplwi cr6,r29,2048
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2048, ctx.xer);
	// ble cr6,0x82ea4714
	if (!ctx.cr6.gt) goto loc_82EA4714;
	// li r29,2048
	ctx.r29.s64 = 2048;
	// b 0x82ea4714
	goto loc_82EA4714;
loc_82EA46B4:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ea46c4
	if (!ctx.cr6.gt) goto loc_82EA46C4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82EA46C4:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ea46d4
	if (!ctx.cr6.gt) goto loc_82EA46D4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82EA46D4:
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// bne cr6,0x82ea4714
	if (!ctx.cr6.eq) goto loc_82EA4714;
	// rlwinm. r11,r9,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x82ea46ec
	if (!ctx.cr0.eq) goto loc_82EA46EC;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_82EA46EC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ea4714
	if (ctx.cr6.eq) goto loc_82EA4714;
	// mullw r11,r10,r29
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ea4704
	if (!ctx.cr6.gt) goto loc_82EA4704;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82EA4704:
	// mullw r11,r10,r31
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ea4714
	if (!ctx.cr6.gt) goto loc_82EA4714;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82EA4714:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x82ea4740
	if (ctx.cr6.eq) goto loc_82EA4740;
	// cmpwi cr6,r26,17
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 17, ctx.xer);
	// beq cr6,0x82ea4738
	if (ctx.cr6.eq) goto loc_82EA4738;
	// cmpwi cr6,r26,18
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 18, ctx.xer);
	// bne cr6,0x82ea4744
	if (!ctx.cr6.eq) goto loc_82EA4744;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// b 0x82ea4744
	goto loc_82EA4744;
loc_82EA4738:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// b 0x82ea4744
	goto loc_82EA4744;
loc_82EA4740:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82EA4744:
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// ori r10,r10,18
	ctx.r10.u64 = ctx.r10.u64 | 18;
	// bne cr6,0x82ea4778
	if (!ctx.cr6.eq) goto loc_82EA4778;
	// rlwinm. r8,r9,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82ea4778
	if (ctx.cr0.eq) goto loc_82EA4778;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ea4774
	if (ctx.cr6.lt) goto loc_82EA4774;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// ori r8,r8,20
	ctx.r8.u64 = ctx.r8.u64 | 20;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82ea4778
	if (!ctx.cr6.gt) goto loc_82EA4778;
loc_82EA4774:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EA4778:
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea47d4
	if (ctx.cr0.eq) goto loc_82EA47D4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82ea479c
	if (!ctx.cr6.gt) goto loc_82EA479C;
loc_82EA4790:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ea4790
	if (ctx.cr6.lt) goto loc_82EA4790;
loc_82EA479C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82ea47b8
	if (!ctx.cr6.gt) goto loc_82EA47B8;
loc_82EA47AC:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ea47ac
	if (ctx.cr6.lt) goto loc_82EA47AC;
loc_82EA47B8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82ea47d4
	if (!ctx.cr6.gt) goto loc_82EA47D4;
loc_82EA47C8:
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ea47c8
	if (ctx.cr6.lt) goto loc_82EA47C8;
loc_82EA47D4:
	// subf r11,r10,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r10.s64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82ea47f0
	if (ctx.cr6.gt) goto loc_82EA47F0;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// addi r10,r29,3
	ctx.r10.s64 = ctx.r29.s64 + 3;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r29,r10,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
loc_82EA47F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x82ea4820
	if (ctx.cr6.eq) goto loc_82EA4820;
	// cmpwi cr6,r26,17
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 17, ctx.xer);
	// beq cr6,0x82ea4814
	if (ctx.cr6.eq) goto loc_82EA4814;
	// cmpwi cr6,r26,18
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 18, ctx.xer);
	// bne cr6,0x82ea4824
	if (!ctx.cr6.eq) goto loc_82EA4824;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x82ea4824
	goto loc_82EA4824;
loc_82EA4814:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// b 0x82ea4824
	goto loc_82EA4824;
loc_82EA4820:
	// li r11,16384
	ctx.r11.s64 = 16384;
loc_82EA4824:
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea4858
	if (ctx.cr0.eq) goto loc_82EA4858;
	// rlwinm. r11,r9,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea4860
	if (ctx.cr0.eq) goto loc_82EA4860;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// and. r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ea4858
	if (!ctx.cr0.eq) goto loc_82EA4858;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// and. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ea4858
	if (!ctx.cr0.eq) goto loc_82EA4858;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// and. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea4860
	if (ctx.cr0.eq) goto loc_82EA4860;
loc_82EA4858:
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82ea48e8
	goto loc_82EA48E8;
loc_82EA4860:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ea487c
	if (ctx.cr6.eq) goto loc_82EA487C;
loc_82EA4870:
	// rlwinm. r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne 0x82ea4870
	if (!ctx.cr0.eq) goto loc_82EA4870;
loc_82EA487C:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ea4898
	if (ctx.cr6.eq) goto loc_82EA4898;
loc_82EA488C:
	// rlwinm. r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82ea488c
	if (!ctx.cr0.eq) goto loc_82EA488C;
loc_82EA4898:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ea48b4
	if (ctx.cr6.eq) goto loc_82EA48B4;
loc_82EA48A8:
	// rlwinm. r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x82ea48a8
	if (!ctx.cr0.eq) goto loc_82EA48A8;
loc_82EA48B4:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ea48c0
	if (!ctx.cr6.gt) goto loc_82EA48C0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82EA48C0:
	// cmpwi cr6,r26,17
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 17, ctx.xer);
	// bne cr6,0x82ea48d4
	if (!ctx.cr6.eq) goto loc_82EA48D4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ea48d4
	if (!ctx.cr6.gt) goto loc_82EA48D4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82EA48D4:
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82ea48e4
	if (ctx.cr6.gt) goto loc_82EA48E4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82ea48e8
	if (!ctx.cr6.eq) goto loc_82EA48E8;
loc_82EA48E4:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82EA48E8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ea48f4
	if (ctx.cr6.eq) goto loc_82EA48F4;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
loc_82EA48F4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82ea4900
	if (ctx.cr6.eq) goto loc_82EA4900;
	// stw r29,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r29.u32);
loc_82EA4900:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82ea490c
	if (ctx.cr6.eq) goto loc_82EA490C;
	// stw r27,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r27.u32);
loc_82EA490C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82ea4918
	if (ctx.cr6.eq) goto loc_82EA4918;
	// stw r25,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r25.u32);
loc_82EA4918:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82ea4924
	if (ctx.cr6.eq) goto loc_82EA4924;
	// stw r23,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r23.u32);
loc_82EA4924:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EA4928:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA4930"))) PPC_WEAK_FUNC(sub_82EA4930);
PPC_FUNC_IMPL(__imp__sub_82EA4930) {
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
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82ea4508
	ctx.lr = 0x82EA495C;
	sub_82EA4508(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA496C"))) PPC_WEAK_FUNC(sub_82EA496C);
PPC_FUNC_IMPL(__imp__sub_82EA496C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA4970"))) PPC_WEAK_FUNC(sub_82EA4970);
PPC_FUNC_IMPL(__imp__sub_82EA4970) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r31,18
	ctx.r31.s64 = 18;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ea4508
	ctx.lr = 0x82EA49A8;
	sub_82EA4508(ctx, base);
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

__attribute__((alias("__imp__sub_82EA49BC"))) PPC_WEAK_FUNC(sub_82EA49BC);
PPC_FUNC_IMPL(__imp__sub_82EA49BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA49C0"))) PPC_WEAK_FUNC(sub_82EA49C0);
PPC_FUNC_IMPL(__imp__sub_82EA49C0) {
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
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82ea4508
	ctx.lr = 0x82EA49D8;
	sub_82EA4508(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA49E8"))) PPC_WEAK_FUNC(sub_82EA49E8);
PPC_FUNC_IMPL(__imp__sub_82EA49E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EA49F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ea4a24
	if (!ctx.cr6.eq) goto loc_82EA4A24;
loc_82EA4A18:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82ea4aa8
	goto loc_82EA4AA8;
loc_82EA4A24:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ea4a18
	if (ctx.cr6.eq) goto loc_82EA4A18;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82ea4a38
	if (!ctx.cr6.eq) goto loc_82EA4A38;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EA4A38:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r9,r1,188
	ctx.r9.s64 = ctx.r1.s64 + 188;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r1,172
	ctx.r7.s64 = ctx.r1.s64 + 172;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// bl 0x82ea4508
	ctx.lr = 0x82EA4A60;
	sub_82EA4508(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ea4aa8
	if (ctx.cr0.lt) goto loc_82EA4AA8;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r8,188(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r6,172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82e86250
	ctx.lr = 0x82EA4A8C;
	sub_82E86250(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ea4aa4
	if (!ctx.cr0.eq) goto loc_82EA4AA4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ea4aa8
	goto loc_82EA4AA8;
loc_82EA4AA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EA4AA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA4AB0"))) PPC_WEAK_FUNC(sub_82EA4AB0);
PPC_FUNC_IMPL(__imp__sub_82EA4AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EA4AB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ea4ae8
	if (!ctx.cr6.eq) goto loc_82EA4AE8;
loc_82EA4ADC:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82ea4b6c
	goto loc_82EA4B6C;
loc_82EA4AE8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ea4adc
	if (ctx.cr6.eq) goto loc_82EA4ADC;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82ea4afc
	if (!ctx.cr6.eq) goto loc_82EA4AFC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EA4AFC:
	// li r11,18
	ctx.r11.s64 = 18;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r9,r1,180
	ctx.r9.s64 = ctx.r1.s64 + 180;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// bl 0x82ea4508
	ctx.lr = 0x82EA4B24;
	sub_82EA4508(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ea4b6c
	if (ctx.cr0.lt) goto loc_82EA4B6C;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r10,18
	ctx.r10.s64 = 18;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82e86250
	ctx.lr = 0x82EA4B50;
	sub_82E86250(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ea4b68
	if (!ctx.cr0.eq) goto loc_82EA4B68;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ea4b6c
	goto loc_82EA4B6C;
loc_82EA4B68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EA4B6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA4B74"))) PPC_WEAK_FUNC(sub_82EA4B74);
PPC_FUNC_IMPL(__imp__sub_82EA4B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA4B78"))) PPC_WEAK_FUNC(sub_82EA4B78);
PPC_FUNC_IMPL(__imp__sub_82EA4B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EA4B80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// bne cr6,0x82ea4bb4
	if (!ctx.cr6.eq) goto loc_82EA4BB4;
loc_82EA4BA8:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82ea4c3c
	goto loc_82EA4C3C;
loc_82EA4BB4:
	// lwz r29,212(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ea4ba8
	if (ctx.cr6.eq) goto loc_82EA4BA8;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82ea4bcc
	if (!ctx.cr6.eq) goto loc_82EA4BCC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EA4BCC:
	// li r11,17
	ctx.r11.s64 = 17;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r9,r1,196
	ctx.r9.s64 = ctx.r1.s64 + 196;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r1,180
	ctx.r7.s64 = ctx.r1.s64 + 180;
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// bl 0x82ea4508
	ctx.lr = 0x82EA4BF4;
	sub_82EA4508(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ea4c3c
	if (ctx.cr0.lt) goto loc_82EA4C3C;
	// li r10,17
	ctx.r10.s64 = 17;
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82e86250
	ctx.lr = 0x82EA4C20;
	sub_82E86250(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ea4c38
	if (!ctx.cr0.eq) goto loc_82EA4C38;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ea4c3c
	goto loc_82EA4C3C;
loc_82EA4C38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EA4C3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA4C44"))) PPC_WEAK_FUNC(sub_82EA4C44);
PPC_FUNC_IMPL(__imp__sub_82EA4C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA4C48"))) PPC_WEAK_FUNC(sub_82EA4C48);
PPC_FUNC_IMPL(__imp__sub_82EA4C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EA4C50;
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
	// beq 0x82ea4cac
	if (ctx.cr0.eq) goto loc_82EA4CAC;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// mulli r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 * 20;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82ea4c90
	if (ctx.cr0.lt) goto loc_82EA4C90;
loc_82EA4C7C:
	// addi r30,r30,-20
	ctx.r30.s64 = ctx.r30.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eb9548
	ctx.lr = 0x82EA4C88;
	sub_82EB9548(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82ea4c7c
	if (!ctx.cr0.lt) goto loc_82EA4C7C;
loc_82EA4C90:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea4ca4
	if (ctx.cr0.eq) goto loc_82EA4CA4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA4CA4;
	sub_822996C0(ctx, base);
loc_82EA4CA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82ea4ccc
	goto loc_82EA4CCC;
loc_82EA4CAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eb9548
	ctx.lr = 0x82EA4CB4;
	sub_82EB9548(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea4cc8
	if (ctx.cr0.eq) goto loc_82EA4CC8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA4CC8;
	sub_822996C0(ctx, base);
loc_82EA4CC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EA4CCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA4CD4"))) PPC_WEAK_FUNC(sub_82EA4CD4);
PPC_FUNC_IMPL(__imp__sub_82EA4CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA4CD8"))) PPC_WEAK_FUNC(sub_82EA4CD8);
PPC_FUNC_IMPL(__imp__sub_82EA4CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EA4CE0;
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
	// beq 0x82ea4d3c
	if (ctx.cr0.eq) goto loc_82EA4D3C;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82ea4d20
	if (ctx.cr0.lt) goto loc_82EA4D20;
loc_82EA4D0C:
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eb9a40
	ctx.lr = 0x82EA4D18;
	sub_82EB9A40(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82ea4d0c
	if (!ctx.cr0.lt) goto loc_82EA4D0C;
loc_82EA4D20:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea4d34
	if (ctx.cr0.eq) goto loc_82EA4D34;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA4D34;
	sub_822996C0(ctx, base);
loc_82EA4D34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82ea4d5c
	goto loc_82EA4D5C;
loc_82EA4D3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eb9a40
	ctx.lr = 0x82EA4D44;
	sub_82EB9A40(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea4d58
	if (ctx.cr0.eq) goto loc_82EA4D58;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA4D58;
	sub_822996C0(ctx, base);
loc_82EA4D58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EA4D5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA4D64"))) PPC_WEAK_FUNC(sub_82EA4D64);
PPC_FUNC_IMPL(__imp__sub_82EA4D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA4D68"))) PPC_WEAK_FUNC(sub_82EA4D68);
PPC_FUNC_IMPL(__imp__sub_82EA4D68) {
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
	// beq cr6,0x82ea4d94
	if (ctx.cr6.eq) goto loc_82EA4D94;
	// bl 0x82e76d78
	ctx.lr = 0x82EA4D8C;
	sub_82E76D78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EA4D94:
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

__attribute__((alias("__imp__sub_82EA4DA8"))) PPC_WEAK_FUNC(sub_82EA4DA8);
PPC_FUNC_IMPL(__imp__sub_82EA4DA8) {
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
	// beq cr6,0x82ea4dd4
	if (ctx.cr6.eq) goto loc_82EA4DD4;
	// bl 0x82e76d78
	ctx.lr = 0x82EA4DCC;
	sub_82E76D78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EA4DD4:
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

__attribute__((alias("__imp__sub_82EA4DE8"))) PPC_WEAK_FUNC(sub_82EA4DE8);
PPC_FUNC_IMPL(__imp__sub_82EA4DE8) {
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
	// beq cr6,0x82ea4e14
	if (ctx.cr6.eq) goto loc_82EA4E14;
	// bl 0x82e76d78
	ctx.lr = 0x82EA4E0C;
	sub_82E76D78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EA4E14:
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

__attribute__((alias("__imp__sub_82EA4E28"))) PPC_WEAK_FUNC(sub_82EA4E28);
PPC_FUNC_IMPL(__imp__sub_82EA4E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EA4E30;
	__savegprlr_24(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82ead558
	ctx.lr = 0x82EA4E5C;
	sub_82EAD558(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82ea4e7c
	if (!ctx.cr6.eq) goto loc_82EA4E7C;
loc_82EA4E64:
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_82EA4E6C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eae008
	ctx.lr = 0x82EA4E74;
	sub_82EAE008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ea4fb4
	goto loc_82EA4FB4;
loc_82EA4E7C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ea4fa4
	if (ctx.cr6.eq) goto loc_82EA4FA4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ea4fa4
	if (ctx.cr6.eq) goto loc_82EA4FA4;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,388(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eb2de0
	ctx.lr = 0x82EA4EA4;
	sub_82EB2DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea4eb4
	if (!ctx.cr0.lt) goto loc_82EA4EB4;
loc_82EA4EAC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ea4e6c
	goto loc_82EA4E6C;
loc_82EA4EB4:
	// lwz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r29,156(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// beq cr6,0x82ea4f2c
	if (ctx.cr6.eq) goto loc_82EA4F2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82ea4e64
	if (ctx.cr6.lt) goto loc_82EA4E64;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x82ea4e64
	if (ctx.cr6.gt) goto loc_82EA4E64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82ea4e64
	if (ctx.cr6.gt) goto loc_82EA4E64;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82ea4e64
	if (ctx.cr6.lt) goto loc_82EA4E64;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x82ea4e64
	if (ctx.cr6.gt) goto loc_82EA4E64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82ea4f50
	if (!ctx.cr6.gt) goto loc_82EA4F50;
	// b 0x82ea4e64
	goto loc_82EA4E64;
loc_82EA4F2C:
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_82EA4F50:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82ea32d0
	ctx.lr = 0x82EA4F8C;
	sub_82EA32D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ea4eac
	if (ctx.cr0.lt) goto loc_82EA4EAC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eae008
	ctx.lr = 0x82EA4F9C;
	sub_82EAE008(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ea4fb4
	goto loc_82EA4FB4;
loc_82EA4FA4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eae008
	ctx.lr = 0x82EA4FAC;
	sub_82EAE008(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EA4FB4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA4FBC"))) PPC_WEAK_FUNC(sub_82EA4FBC);
PPC_FUNC_IMPL(__imp__sub_82EA4FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA4FC0"))) PPC_WEAK_FUNC(sub_82EA4FC0);
PPC_FUNC_IMPL(__imp__sub_82EA4FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EA4FC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82eb9208
	ctx.lr = 0x82EA4FF4;
	sub_82EB9208(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ea5014
	if (!ctx.cr6.eq) goto loc_82EA5014;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eb9548
	ctx.lr = 0x82EA5004;
	sub_82EB9548(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EA500C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82EA5014:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ea5034
	if (!ctx.cr6.eq) goto loc_82EA5034;
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_82EA5024:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eb9548
	ctx.lr = 0x82EA502C;
	sub_82EB9548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ea500c
	goto loc_82EA500C;
loc_82EA5034:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82ea5048
	if (!ctx.cr6.eq) goto loc_82EA5048;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
loc_82EA5048:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eb9550
	ctx.lr = 0x82EA5064;
	sub_82EB9550(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea5074
	if (!ctx.cr0.lt) goto loc_82EA5074;
loc_82EA506C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ea5024
	goto loc_82EA5024;
loc_82EA5074:
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e5f660
	ctx.lr = 0x82EA5084;
	sub_82E5F660(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// lwz r31,264(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r30,260(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82ea32d0
	ctx.lr = 0x82EA50D0;
	sub_82EA32D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ea506c
	if (ctx.cr0.lt) goto loc_82EA506C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82ea5024
	goto loc_82EA5024;
}

__attribute__((alias("__imp__sub_82EA50E0"))) PPC_WEAK_FUNC(sub_82EA50E0);
PPC_FUNC_IMPL(__imp__sub_82EA50E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82EA50E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x82ead558
	ctx.lr = 0x82EA5114;
	sub_82EAD558(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82ea5134
	if (!ctx.cr6.eq) goto loc_82EA5134;
loc_82EA511C:
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_82EA5124:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82eae008
	ctx.lr = 0x82EA512C;
	sub_82EAE008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ea5254
	goto loc_82EA5254;
loc_82EA5134:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ea5244
	if (ctx.cr6.eq) goto loc_82EA5244;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ea5244
	if (ctx.cr6.eq) goto loc_82EA5244;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,436(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82eb2de0
	ctx.lr = 0x82EA515C;
	sub_82EB2DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea516c
	if (!ctx.cr0.lt) goto loc_82EA516C;
loc_82EA5164:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ea5124
	goto loc_82EA5124;
loc_82EA516C:
	// lwz r30,196(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r27,192(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r31,188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// li r5,24
	ctx.r5.s64 = 24;
	// beq cr6,0x82ea51dc
	if (ctx.cr6.eq) goto loc_82EA51DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EA5190;
	sub_82CB1160(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82ea511c
	if (ctx.cr6.gt) goto loc_82EA511C;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82ea511c
	if (ctx.cr6.gt) goto loc_82EA511C;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82ea511c
	if (ctx.cr6.gt) goto loc_82EA511C;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82ea511c
	if (ctx.cr6.gt) goto loc_82EA511C;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82ea511c
	if (ctx.cr6.gt) goto loc_82EA511C;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ea51e4
	if (!ctx.cr6.gt) goto loc_82EA51E4;
	// b 0x82ea511c
	goto loc_82EA511C;
loc_82EA51DC:
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// bl 0x82cb1160
	ctx.lr = 0x82EA51E4;
	sub_82CB1160(ctx, base);
loc_82EA51E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r8,224(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82ea3ba8
	ctx.lr = 0x82EA522C;
	sub_82EA3BA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ea5164
	if (ctx.cr0.lt) goto loc_82EA5164;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82eae008
	ctx.lr = 0x82EA523C;
	sub_82EAE008(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ea5254
	goto loc_82EA5254;
loc_82EA5244:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82eae008
	ctx.lr = 0x82EA524C;
	sub_82EAE008(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EA5254:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA525C"))) PPC_WEAK_FUNC(sub_82EA525C);
PPC_FUNC_IMPL(__imp__sub_82EA525C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA5260"))) PPC_WEAK_FUNC(sub_82EA5260);
PPC_FUNC_IMPL(__imp__sub_82EA5260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EA5268;
	__savegprlr_24(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82eb9228
	ctx.lr = 0x82EA5294;
	sub_82EB9228(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ea52b4
	if (!ctx.cr6.eq) goto loc_82EA52B4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eb9a40
	ctx.lr = 0x82EA52A4;
	sub_82EB9A40(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EA52AC:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82EA52B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ea52d4
	if (!ctx.cr6.eq) goto loc_82EA52D4;
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_82EA52C4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eb9a40
	ctx.lr = 0x82EA52CC;
	sub_82EB9A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ea52ac
	goto loc_82EA52AC;
loc_82EA52D4:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82ea52e8
	if (!ctx.cr6.eq) goto loc_82EA52E8;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
loc_82EA52E8:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eb9a48
	ctx.lr = 0x82EA5304;
	sub_82EB9A48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea5314
	if (!ctx.cr0.lt) goto loc_82EA5314;
loc_82EA530C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ea52c4
	goto loc_82EA52C4;
loc_82EA5314:
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e5f660
	ctx.lr = 0x82EA5324;
	sub_82E5F660(ctx, base);
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r31,268(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r30,264(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r29,260(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// rlwinm r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82ea3ba8
	ctx.lr = 0x82EA5380;
	sub_82EA3BA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ea530c
	if (ctx.cr0.lt) goto loc_82EA530C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82ea52c4
	goto loc_82EA52C4;
}

__attribute__((alias("__imp__sub_82EA5390"))) PPC_WEAK_FUNC(sub_82EA5390);
PPC_FUNC_IMPL(__imp__sub_82EA5390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EA5398;
	__savegprlr_14(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r29,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r29.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r27,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r27.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r28,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r28.u32);
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// bl 0x82ead558
	ctx.lr = 0x82EA53C4;
	sub_82EAD558(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ea53e4
	if (!ctx.cr6.eq) goto loc_82EA53E4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eae008
	ctx.lr = 0x82EA53D4;
	sub_82EAE008(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EA53DC:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82EA53E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ea5404
	if (!ctx.cr6.eq) goto loc_82EA5404;
loc_82EA53EC:
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_82EA53F4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eae008
	ctx.lr = 0x82EA53FC;
	sub_82EAE008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ea53dc
	goto loc_82EA53DC;
loc_82EA5404:
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5f660
	ctx.lr = 0x82EA5414;
	sub_82E5F660(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea5470
	if (ctx.cr0.eq) goto loc_82EA5470;
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r11,0,24,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82ea2a38
	ctx.lr = 0x82EA5434;
	sub_82EA2A38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea5444
	if (!ctx.cr0.lt) goto loc_82EA5444;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ea53f4
	goto loc_82EA53F4;
loc_82EA5444:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ea5390
	ctx.lr = 0x82EA5460;
	sub_82EA5390(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA546C;
	sub_82E76D78(ctx, base);
	// b 0x82ea53f4
	goto loc_82EA53F4;
loc_82EA5470:
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// bl 0x82e762e8
	ctx.lr = 0x82EA5484;
	sub_82E762E8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmpwi cr6,r18,3
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 3, ctx.xer);
	// beq cr6,0x82ea54d0
	if (ctx.cr6.eq) goto loc_82EA54D0;
	// cmpwi cr6,r18,17
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 17, ctx.xer);
	// beq cr6,0x82ea54b8
	if (ctx.cr6.eq) goto loc_82EA54B8;
	// cmpwi cr6,r18,18
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 18, ctx.xer);
	// bne cr6,0x82ea53ec
	if (!ctx.cr6.eq) goto loc_82EA53EC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e85ec8
	ctx.lr = 0x82EA54B4;
	sub_82E85EC8(ctx, base);
	// b 0x82ea54e4
	goto loc_82EA54E4;
loc_82EA54B8:
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e86098
	ctx.lr = 0x82EA54CC;
	sub_82E86098(ctx, base);
	// b 0x82ea54e4
	goto loc_82EA54E4;
loc_82EA54D0:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e85dd0
	ctx.lr = 0x82EA54E4;
	sub_82E85DD0(ctx, base);
loc_82EA54E4:
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bne cr6,0x82ea550c
	if (!ctx.cr6.eq) goto loc_82EA550C;
	// cmpwi cr6,r18,18
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 18, ctx.xer);
	// li r17,6
	ctx.r17.s64 = 6;
	// beq cr6,0x82ea54fc
	if (ctx.cr6.eq) goto loc_82EA54FC;
	// li r17,1
	ctx.r17.s64 = 1;
loc_82EA54FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e85a00
	ctx.lr = 0x82EA5504;
	sub_82E85A00(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// b 0x82ea5514
	goto loc_82EA5514;
loc_82EA550C:
	// li r17,1
	ctx.r17.s64 = 1;
	// li r19,1
	ctx.r19.s64 = 1;
loc_82EA5514:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// mullw r21,r19,r17
	ctx.r21.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r17.s32);
	// ori r15,r11,14
	ctx.r15.u64 = ctx.r11.u64 | 14;
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
	// mr r16,r25
	ctx.r16.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r18,3
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 3, ctx.xer);
	// beq cr6,0x82ea5548
	if (ctx.cr6.eq) goto loc_82EA5548;
	// cmpwi cr6,r18,17
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 17, ctx.xer);
	// beq cr6,0x82ea55b0
	if (ctx.cr6.eq) goto loc_82EA55B0;
	// cmpwi cr6,r18,18
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 18, ctx.xer);
	// bne cr6,0x82ea5678
	if (!ctx.cr6.eq) goto loc_82EA5678;
loc_82EA5548:
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,52428
	ctx.r11.u64 = ctx.r11.u64 | 52428;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r21,20
	ctx.r11.s64 = ctx.r21.s64 * 20;
	// ble cr6,0x82ea5564
	if (!ctx.cr6.gt) goto loc_82EA5564;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EA5564:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ea5574
	if (ctx.cr6.gt) goto loc_82EA5574;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82EA5574:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EA557C;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea5644
	if (ctx.cr0.eq) goto loc_82EA5644;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r21,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r21.u32);
	// addic. r31,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r31.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x82ea5648
	if (ctx.cr0.lt) goto loc_82EA5648;
loc_82EA5598:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eb9208
	ctx.lr = 0x82EA55A0;
	sub_82EB9208(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bge 0x82ea5598
	if (!ctx.cr0.lt) goto loc_82EA5598;
	// b 0x82ea5648
	goto loc_82EA5648;
loc_82EA55B0:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82ea55cc
	if (!ctx.cr6.gt) goto loc_82EA55CC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EA55CC:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ea55dc
	if (ctx.cr6.gt) goto loc_82EA55DC;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82EA55DC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EA55E4;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea5618
	if (ctx.cr0.eq) goto loc_82EA5618;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// stw r21,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r21.u32);
	// addic. r31,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r31.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// blt 0x82ea561c
	if (ctx.cr0.lt) goto loc_82EA561C;
loc_82EA5600:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eb9228
	ctx.lr = 0x82EA5608;
	sub_82EB9228(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bge 0x82ea5600
	if (!ctx.cr0.lt) goto loc_82EA5600;
	// b 0x82ea561c
	goto loc_82EA561C;
loc_82EA5618:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82EA561C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ea5840
	if (ctx.cr6.eq) goto loc_82EA5840;
	// rlwinm r31,r21,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82299698
	ctx.lr = 0x82EA5634;
	sub_82299698(ctx, base);
	// mr. r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq 0x82ea5840
	if (ctx.cr0.eq) goto loc_82EA5840;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// b 0x82ea566c
	goto loc_82EA566C;
loc_82EA5644:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82EA5648:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ea5840
	if (ctx.cr6.eq) goto loc_82EA5840;
	// rlwinm r31,r21,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82299698
	ctx.lr = 0x82EA5660;
	sub_82299698(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq 0x82ea5840
	if (ctx.cr0.eq) goto loc_82EA5840;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_82EA566C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82EA5678;
	sub_82CB16F0(ctx, base);
loc_82EA5678:
	// addi r22,r1,128
	ctx.r22.s64 = ctx.r1.s64 + 128;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82ea5848
	if (ctx.cr6.eq) goto loc_82EA5848;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
loc_82EA5690:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ea56c8
	if (ctx.cr6.eq) goto loc_82EA56C8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82299698
	ctx.lr = 0x82EA56A4;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea56b4
	if (ctx.cr0.eq) goto loc_82EA56B4;
	// bl 0x82ead558
	ctx.lr = 0x82EA56B0;
	sub_82EAD558(ctx, base);
	// b 0x82ea56b8
	goto loc_82EA56B8;
loc_82EA56B4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82EA56B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea5840
	if (ctx.cr6.eq) goto loc_82EA5840;
	// stw r3,80(r22)
	PPC_STORE_U32(ctx.r22.u32 + 80, ctx.r3.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82EA56C8:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82ea57a0
	if (ctx.cr6.eq) goto loc_82EA57A0;
loc_82EA56D8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ea5710
	if (ctx.cr6.eq) goto loc_82EA5710;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82299698
	ctx.lr = 0x82EA56EC;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea56fc
	if (ctx.cr0.eq) goto loc_82EA56FC;
	// bl 0x82ead558
	ctx.lr = 0x82EA56F8;
	sub_82EAD558(ctx, base);
	// b 0x82ea5700
	goto loc_82EA5700;
loc_82EA56FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EA5700:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea5840
	if (ctx.cr6.eq) goto loc_82EA5840;
	// stw r3,76(r25)
	PPC_STORE_U32(ctx.r25.u32 + 76, ctx.r3.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82EA5710:
	// add r31,r23,r27
	ctx.r31.u64 = ctx.r23.u64 + ctx.r27.u64;
	// cmpwi cr6,r18,3
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 3, ctx.xer);
	// beq cr6,0x82ea57fc
	if (ctx.cr6.eq) goto loc_82EA57FC;
	// cmpwi cr6,r18,17
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 17, ctx.xer);
	// beq cr6,0x82ea57b8
	if (ctx.cr6.eq) goto loc_82EA57B8;
	// cmpwi cr6,r18,18
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 18, ctx.xer);
	// bne cr6,0x82ea581c
	if (!ctx.cr6.eq) goto loc_82EA581C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82e85ed0
	ctx.lr = 0x82EA5740;
	sub_82E85ED0(ctx, base);
	// stwx r3,r30,r20
	PPC_STORE_U32(ctx.r30.u32 + ctx.r20.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea5840
	if (ctx.cr0.eq) goto loc_82EA5840;
loc_82EA574C:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 * 20;
	// lwzx r5,r10,r20
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82eb9550
	ctx.lr = 0x82EA5774;
	sub_82EB9550(ctx, base);
loc_82EA5774:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82EA5778:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82ea5868
	if (ctx.cr6.lt) goto loc_82EA5868;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82eae0e8
	ctx.lr = 0x82EA578C;
	sub_82EAE0E8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82ea5868
	if (ctx.cr0.lt) goto loc_82EA5868;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82ea56d8
	if (ctx.cr6.lt) goto loc_82EA56D8;
loc_82EA57A0:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r23,r23,r19
	ctx.r23.u64 = ctx.r23.u64 + ctx.r19.u64;
	// cmplw cr6,r24,r17
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r17.u32, ctx.xer);
	// bge cr6,0x82ea5848
	if (!ctx.cr6.lt) goto loc_82EA5848;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82ea5690
	goto loc_82EA5690;
loc_82EA57B8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82e860a0
	ctx.lr = 0x82EA57C8;
	sub_82E860A0(ctx, base);
	// stwx r3,r30,r16
	PPC_STORE_U32(ctx.r30.u32 + ctx.r16.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea5840
	if (ctx.cr0.eq) goto loc_82EA5840;
loc_82EA57D4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwzx r5,r11,r16
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82eb9a48
	ctx.lr = 0x82EA57F8;
	sub_82EB9A48(ctx, base);
	// b 0x82ea5774
	goto loc_82EA5774;
loc_82EA57FC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82e85dd8
	ctx.lr = 0x82EA580C;
	sub_82E85DD8(ctx, base);
	// stwx r3,r30,r20
	PPC_STORE_U32(ctx.r30.u32 + ctx.r20.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ea574c
	if (!ctx.cr0.eq) goto loc_82EA574C;
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
loc_82EA581C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82ea5868
	if (ctx.cr6.lt) goto loc_82EA5868;
	// cmpwi cr6,r18,3
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 3, ctx.xer);
	// beq cr6,0x82ea574c
	if (ctx.cr6.eq) goto loc_82EA574C;
	// cmpwi cr6,r18,17
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 17, ctx.xer);
	// beq cr6,0x82ea57d4
	if (ctx.cr6.eq) goto loc_82EA57D4;
	// cmpwi cr6,r18,18
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 18, ctx.xer);
	// beq cr6,0x82ea574c
	if (ctx.cr6.eq) goto loc_82EA574C;
	// b 0x82ea5778
	goto loc_82EA5778;
loc_82EA5840:
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// b 0x82ea5868
	goto loc_82EA5868;
loc_82EA5848:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,612(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r5,588(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,580(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// bl 0x82eb31d8
	ctx.lr = 0x82EA585C;
	sub_82EB31D8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82ea5868
	if (ctx.cr0.lt) goto loc_82EA5868;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82EA5868:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ea587c
	if (ctx.cr6.eq) goto loc_82EA587C;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ea4c48
	ctx.lr = 0x82EA587C;
	sub_82EA4C48(ctx, base);
loc_82EA587C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ea5890
	if (ctx.cr6.eq) goto loc_82EA5890;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ea4cd8
	ctx.lr = 0x82EA5890;
	sub_82EA4CD8(ctx, base);
loc_82EA5890:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82ea58d8
	if (ctx.cr6.eq) goto loc_82EA58D8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82ea58cc
	if (ctx.cr6.eq) goto loc_82EA58CC;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82EA58A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea58c0
	if (ctx.cr6.eq) goto loc_82EA58C0;
	// bl 0x82e76d78
	ctx.lr = 0x82EA58B8;
	sub_82E76D78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EA58C0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82ea58a8
	if (!ctx.cr0.eq) goto loc_82EA58A8;
loc_82EA58CC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA58D8;
	sub_822996C0(ctx, base);
loc_82EA58D8:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82ea5920
	if (ctx.cr6.eq) goto loc_82EA5920;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82ea5914
	if (ctx.cr6.eq) goto loc_82EA5914;
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82EA58F0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea5908
	if (ctx.cr6.eq) goto loc_82EA5908;
	// bl 0x82e76d78
	ctx.lr = 0x82EA5900;
	sub_82E76D78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EA5908:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82ea58f0
	if (!ctx.cr0.eq) goto loc_82EA58F0;
loc_82EA5914:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA5920;
	sub_822996C0(ctx, base);
loc_82EA5920:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x82ea53f4
	goto loc_82EA53F4;
}

__attribute__((alias("__imp__sub_82EA5928"))) PPC_WEAK_FUNC(sub_82EA5928);
PPC_FUNC_IMPL(__imp__sub_82EA5928) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82ea5390
	sub_82EA5390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA5930"))) PPC_WEAK_FUNC(sub_82EA5930);
PPC_FUNC_IMPL(__imp__sub_82EA5930) {
	PPC_FUNC_PROLOGUE();
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x82ea5390
	sub_82EA5390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA5938"))) PPC_WEAK_FUNC(sub_82EA5938);
PPC_FUNC_IMPL(__imp__sub_82EA5938) {
	PPC_FUNC_PROLOGUE();
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x82ea5390
	sub_82EA5390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA5940"))) PPC_WEAK_FUNC(sub_82EA5940);
PPC_FUNC_IMPL(__imp__sub_82EA5940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EA5948;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ea5970
	if (!ctx.cr6.eq) goto loc_82EA5970;
loc_82EA5964:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82ea5d5c
	goto loc_82EA5D5C;
loc_82EA5970:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e762e8
	ctx.lr = 0x82EA5978;
	sub_82E762E8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r19,3
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 3, ctx.xer);
	// beq cr6,0x82ea59b0
	if (ctx.cr6.eq) goto loc_82EA59B0;
	// cmpwi cr6,r19,17
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 17, ctx.xer);
	// beq cr6,0x82ea59a0
	if (ctx.cr6.eq) goto loc_82EA59A0;
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 18, ctx.xer);
	// bne cr6,0x82ea5964
	if (!ctx.cr6.eq) goto loc_82EA5964;
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// b 0x82ea59b8
	goto loc_82EA59B8;
loc_82EA59A0:
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82ea59bc
	goto loc_82EA59BC;
loc_82EA59B0:
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
loc_82EA59B8:
	// lwz r15,80(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EA59BC:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82ea5a14
	if (!ctx.cr6.eq) goto loc_82EA5A14;
	// cmpwi cr6,r19,3
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 3, ctx.xer);
	// beq cr6,0x82ea5b14
	if (ctx.cr6.eq) goto loc_82EA5B14;
	// cmpwi cr6,r19,17
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 17, ctx.xer);
	// beq cr6,0x82ea5adc
	if (ctx.cr6.eq) goto loc_82EA5ADC;
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 18, ctx.xer);
	// bne cr6,0x82ea5b4c
	if (!ctx.cr6.eq) goto loc_82EA5B4C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e85ec8
	ctx.lr = 0x82EA59EC;
	sub_82E85EC8(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ea5a0c
	if (!ctx.cr0.eq) goto loc_82EA5A0C;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_82EA5A00:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea5b58
	if (ctx.cr0.eq) goto loc_82EA5B58;
loc_82EA5A0C:
	// lis r31,8
	ctx.r31.s64 = 524288;
	// ori r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 | 4;
loc_82EA5A14:
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 18, ctx.xer);
	// bne cr6,0x82ea5a20
	if (!ctx.cr6.eq) goto loc_82EA5A20;
	// oris r31,r31,7
	ctx.r31.u64 = ctx.r31.u64 | 458752;
loc_82EA5A20:
	// rlwinm. r11,r31,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// oris r21,r31,96
	ctx.r21.u64 = ctx.r31.u64 | 6291456;
	// bne 0x82ea5a30
	if (!ctx.cr0.eq) goto loc_82EA5A30;
	// rlwinm r21,r31,0,11,8
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFF9FFFFF;
loc_82EA5A30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e85a00
	ctx.lr = 0x82EA5A38;
	sub_82E85A00(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, -1, ctx.xer);
	// bne cr6,0x82ea5a48
	if (!ctx.cr6.eq) goto loc_82EA5A48;
	// li r18,0
	ctx.r18.s64 = 0;
loc_82EA5A48:
	// cmplw cr6,r18,r20
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x82ea5964
	if (!ctx.cr6.lt) goto loc_82EA5964;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 18, ctx.xer);
	// li r22,6
	ctx.r22.s64 = 6;
	// beq cr6,0x82ea5a70
	if (ctx.cr6.eq) goto loc_82EA5A70;
	// li r22,1
	ctx.r22.s64 = 1;
loc_82EA5A70:
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82ea5a88
	if (ctx.cr6.eq) goto loc_82EA5A88;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// bne cr6,0x82ea5a8c
	if (!ctx.cr6.eq) goto loc_82EA5A8C;
loc_82EA5A88:
	// li r23,1
	ctx.r23.s64 = 1;
loc_82EA5A8C:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82ea5d14
	if (ctx.cr6.eq) goto loc_82EA5D14;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r24,r11,14
	ctx.r24.u64 = ctx.r11.u64 | 14;
loc_82EA5AA4:
	// cmpwi cr6,r19,3
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 3, ctx.xer);
	// beq cr6,0x82ea5b74
	if (ctx.cr6.eq) goto loc_82EA5B74;
	// cmpwi cr6,r19,17
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 17, ctx.xer);
	// beq cr6,0x82ea5b60
	if (ctx.cr6.eq) goto loc_82EA5B60;
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 18, ctx.xer);
	// bne cr6,0x82ea5b8c
	if (!ctx.cr6.eq) goto loc_82EA5B8C;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e85ed0
	ctx.lr = 0x82EA5ACC;
	sub_82E85ED0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
loc_82EA5AD0:
	// beq 0x82ea5d64
	if (ctx.cr0.eq) goto loc_82EA5D64;
loc_82EA5AD4:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82ea5b94
	goto loc_82EA5B94;
loc_82EA5ADC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82e86098
	ctx.lr = 0x82EA5AEC;
	sub_82E86098(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ea5a0c
	if (!ctx.cr0.eq) goto loc_82EA5A0C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ea5a0c
	if (!ctx.cr0.eq) goto loc_82EA5A0C;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x82ea5a00
	goto loc_82EA5A00;
loc_82EA5B14:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82e85dd0
	ctx.lr = 0x82EA5B24;
	sub_82E85DD0(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ea5b44
	if (!ctx.cr0.eq) goto loc_82EA5B44;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea5b58
	if (ctx.cr0.eq) goto loc_82EA5B58;
loc_82EA5B44:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ea5b50
	goto loc_82EA5B50;
loc_82EA5B4C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EA5B50:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea5a0c
	if (ctx.cr6.eq) goto loc_82EA5A0C;
loc_82EA5B58:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x82ea5a14
	goto loc_82EA5A14;
loc_82EA5B60:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82e860a0
	ctx.lr = 0x82EA5B6C;
	sub_82E860A0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// b 0x82ea5ad0
	goto loc_82EA5AD0;
loc_82EA5B74:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82e85dd8
	ctx.lr = 0x82EA5B80;
	sub_82E85DD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82ea5ad4
	if (!ctx.cr0.eq) goto loc_82EA5AD4;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82EA5B8C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82ea5d18
	if (ctx.cr6.lt) goto loc_82EA5D18;
loc_82EA5B94:
	// addi r30,r18,1
	ctx.r30.s64 = ctx.r18.s64 + 1;
	// b 0x82ea5cd8
	goto loc_82EA5CD8;
loc_82EA5B9C:
	// cmpwi cr6,r19,3
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 3, ctx.xer);
	// beq cr6,0x82ea5c70
	if (ctx.cr6.eq) goto loc_82EA5C70;
	// cmpwi cr6,r19,17
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 17, ctx.xer);
	// beq cr6,0x82ea5c34
	if (ctx.cr6.eq) goto loc_82EA5C34;
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 18, ctx.xer);
	// bne cr6,0x82ea5c88
	if (!ctx.cr6.eq) goto loc_82EA5C88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e85ed0
	ctx.lr = 0x82EA5BC4;
	sub_82E85ED0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82ea5d64
	if (ctx.cr0.eq) goto loc_82EA5D64;
loc_82EA5BCC:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ea4fc0
	ctx.lr = 0x82EA5BF0;
	sub_82EA4FC0(ctx, base);
loc_82EA5BF0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EA5BF4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82ea5d18
	if (ctx.cr6.lt) goto loc_82EA5D18;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82ea5cac
	if (ctx.cr6.eq) goto loc_82EA5CAC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ea5c14
	if (ctx.cr6.eq) goto loc_82EA5C14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA5C14;
	sub_82E76D78(ctx, base);
loc_82EA5C14:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ea5c24
	if (ctx.cr6.eq) goto loc_82EA5C24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA5C24;
	sub_82E76D78(ctx, base);
loc_82EA5C24:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82ea5cd0
	goto loc_82EA5CD0;
loc_82EA5C34:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82e860a0
	ctx.lr = 0x82EA5C40;
	sub_82E860A0(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82ea5d64
	if (ctx.cr0.eq) goto loc_82EA5D64;
loc_82EA5C48:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ea5260
	ctx.lr = 0x82EA5C6C;
	sub_82EA5260(ctx, base);
	// b 0x82ea5bf0
	goto loc_82EA5BF0;
loc_82EA5C70:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82e85dd8
	ctx.lr = 0x82EA5C7C;
	sub_82E85DD8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82ea5bcc
	if (!ctx.cr0.eq) goto loc_82EA5BCC;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82EA5C88:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82ea5d18
	if (ctx.cr6.lt) goto loc_82EA5D18;
	// cmpwi cr6,r19,3
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 3, ctx.xer);
	// beq cr6,0x82ea5bcc
	if (ctx.cr6.eq) goto loc_82EA5BCC;
	// cmpwi cr6,r19,17
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 17, ctx.xer);
	// beq cr6,0x82ea5c48
	if (ctx.cr6.eq) goto loc_82EA5C48;
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 18, ctx.xer);
	// beq cr6,0x82ea5bcc
	if (ctx.cr6.eq) goto loc_82EA5BCC;
	// b 0x82ea5bf4
	goto loc_82EA5BF4;
loc_82EA5CAC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ea5cc0
	if (ctx.cr6.eq) goto loc_82EA5CC0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA5CBC;
	sub_82E76D78(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_82EA5CC0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82ea5cd4
	if (ctx.cr6.eq) goto loc_82EA5CD4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA5CD0;
	sub_82E76D78(ctx, base);
loc_82EA5CD0:
	// li r25,0
	ctx.r25.s64 = 0;
loc_82EA5CD4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82EA5CD8:
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82ea5b9c
	if (ctx.cr6.lt) goto loc_82EA5B9C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ea5cf4
	if (ctx.cr6.eq) goto loc_82EA5CF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA5CF0;
	sub_82E76D78(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82EA5CF4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ea5d08
	if (ctx.cr6.eq) goto loc_82EA5D08;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA5D04;
	sub_82E76D78(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
loc_82EA5D08:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82ea5aa4
	if (ctx.cr6.lt) goto loc_82EA5AA4;
loc_82EA5D14:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EA5D18:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ea5d28
	if (ctx.cr6.eq) goto loc_82EA5D28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA5D28;
	sub_82E76D78(ctx, base);
loc_82EA5D28:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ea5d38
	if (ctx.cr6.eq) goto loc_82EA5D38;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA5D38;
	sub_82E76D78(ctx, base);
loc_82EA5D38:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ea5d48
	if (ctx.cr6.eq) goto loc_82EA5D48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA5D48;
	sub_82E76D78(ctx, base);
loc_82EA5D48:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82ea5d58
	if (ctx.cr6.eq) goto loc_82EA5D58;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA5D58;
	sub_82E76D78(ctx, base);
loc_82EA5D58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EA5D5C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82EA5D64:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x82ea5d18
	goto loc_82EA5D18;
}

__attribute__((alias("__imp__sub_82EA5D6C"))) PPC_WEAK_FUNC(sub_82EA5D6C);
PPC_FUNC_IMPL(__imp__sub_82EA5D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA5D70"))) PPC_WEAK_FUNC(sub_82EA5D70);
PPC_FUNC_IMPL(__imp__sub_82EA5D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EA5D78;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ae4
	ctx.lr = 0x82EA5D80;
	__savefpr_27(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r5,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r5.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r16,r22
	ctx.r16.u64 = ctx.r22.u64;
	// mr r17,r22
	ctx.r17.u64 = ctx.r22.u64;
	// mr r14,r22
	ctx.r14.u64 = ctx.r22.u64;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// bl 0x82eb9208
	ctx.lr = 0x82EA5DAC;
	sub_82EB9208(ctx, base);
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EA5DBC:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82ea5dbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA5DBC;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EA5DDC:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82ea5ddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA5DDC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82ea5e10
	if (!ctx.cr6.eq) goto loc_82EA5E10;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb9548
	ctx.lr = 0x82EA5DF8;
	sub_82EB9548(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EA5E00:
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b30
	ctx.lr = 0x82EA5E0C;
	__restfpr_27(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82EA5E10:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x82ea5e30
	if (!ctx.cr6.eq) goto loc_82EA5E30;
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_82EA5E20:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb9548
	ctx.lr = 0x82EA5E28;
	sub_82EB9548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ea5e00
	goto loc_82EA5E00;
loc_82EA5E30:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e85a00
	ctx.lr = 0x82EA5E38;
	sub_82E85A00(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e85dd0
	ctx.lr = 0x82EA5E4C;
	sub_82E85DD0(ctx, base);
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// bl 0x82299698
	ctx.lr = 0x82EA5E60;
	sub_82299698(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne 0x82ea5e74
	if (!ctx.cr0.eq) goto loc_82EA5E74;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82ea6214
	goto loc_82EA6214;
loc_82EA5E74:
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// lwz r10,304(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r18,r10,24,31,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// beq 0x82ea5ea4
	if (ctx.cr0.eq) goto loc_82EA5EA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r3,328(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// bl 0x82e5f960
	ctx.lr = 0x82EA5E98;
	sub_82E5F960(ctx, base);
	// subfc r11,r21,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r21.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r21.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r16,r11,31
	ctx.r16.u64 = ctx.r11.u32 & 0x1;
loc_82EA5EA4:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82ea5ed4
	if (ctx.cr6.eq) goto loc_82EA5ED4;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82ea5ed4
	if (ctx.cr6.eq) goto loc_82EA5ED4;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e5f668
	ctx.lr = 0x82EA5EC0;
	sub_82E5F668(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,412(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// bl 0x82299698
	ctx.lr = 0x82EA5ECC;
	sub_82299698(ctx, base);
	// mr. r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq 0x82ea6214
	if (ctx.cr0.eq) goto loc_82EA6214;
loc_82EA5ED4:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82ea61a0
	if (ctx.cr6.eq) goto loc_82EA61A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r23,112(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f28,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f27.f64 = double(temp.f32);
loc_82EA5EF4:
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e85dd0
	ctx.lr = 0x82EA5F04;
	sub_82E85DD0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e85dd8
	ctx.lr = 0x82EA5F10;
	sub_82E85DD8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// beq cr6,0x82ea5f3c
	if (ctx.cr6.eq) goto loc_82EA5F3C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EA5F3C:
	// bl 0x82eb9550
	ctx.lr = 0x82EA5F40;
	sub_82EB9550(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ea61f0
	if (ctx.cr0.lt) goto loc_82EA61F0;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82ea5fac
	if (ctx.cr6.eq) goto loc_82EA5FAC;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// lwz r23,208(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// beq cr6,0x82ea6224
	if (ctx.cr6.eq) goto loc_82EA6224;
	// lwz r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ea6224
	if (ctx.cr6.lt) goto loc_82EA6224;
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// clrlwi r7,r11,26
	ctx.r7.u64 = ctx.r11.u32 & 0x3F;
	// lwz r3,328(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r17,1
	ctx.r17.s64 = 1;
	// bl 0x82e5fe08
	ctx.lr = 0x82EA5F9C;
	sub_82E5FE08(ctx, base);
	// add r10,r3,r14
	ctx.r10.u64 = ctx.r3.u64 + ctx.r14.u64;
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
loc_82EA5FA8:
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
loc_82EA5FAC:
	// lwz r10,456(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r11,460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// lfd f13,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// lfd f0,184(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f29,f27,f0
	ctx.f29.f64 = double(float(ctx.f27.f64 / ctx.f0.f64));
	// stfs f29,124(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fdivs f30,f27,f13
	ctx.f30.f64 = double(float(ctx.f27.f64 / ctx.f13.f64));
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82ec85d0
	ctx.lr = 0x82EA5FFC;
	sub_82EC85D0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82ea62a0
	if (ctx.cr0.eq) goto loc_82EA62A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ebaa40
	ctx.lr = 0x82EA600C;
	sub_82EBAA40(ctx, base);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82ea60bc
	if (!ctx.cr6.gt) goto loc_82EA60BC;
loc_82EA6018:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82ea6090
	if (!ctx.cr6.gt) goto loc_82EA6090;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// lfd f0,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// fmuls f31,f0,f29
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
loc_82EA6044:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lwz r6,884(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// stfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mtctr r15
	ctx.ctr.u64 = ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x82EA6080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82ea6044
	if (ctx.cr6.lt) goto loc_82EA6044;
loc_82EA6090:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA60B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82ea6018
	if (ctx.cr6.lt) goto loc_82EA6018;
loc_82EA60BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA60D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82ea6180
	if (ctx.cr6.eq) goto loc_82EA6180;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x82ea6180
	if (!ctx.cr6.eq) goto loc_82EA6180;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82e5fe30
	ctx.lr = 0x82EA60F8;
	sub_82E5FE30(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r9,236(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// twllei r11,0
	// lwz r8,232(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// twllei r10,0
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divwu r7,r9,r10
	ctx.r7.u32 = ctx.r9.u32 / ctx.r10.u32;
	// divwu r6,r8,r11
	ctx.r6.u32 = ctx.r8.u32 / ctx.r11.u32;
	// twllei r11,0
	// twllei r10,0
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// divwu r4,r9,r11
	ctx.r4.u32 = ctx.r9.u32 / ctx.r11.u32;
	// divwu r5,r8,r10
	ctx.r5.u32 = ctx.r8.u32 / ctx.r10.u32;
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// bl 0x82e66c00
	ctx.lr = 0x82EA6150;
	sub_82E66C00(ctx, base);
	// addi r9,r1,416
	ctx.r9.s64 = ctx.r1.s64 + 416;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r8,216(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r7,208(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r5,500(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r4,496(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x82e62980
	ctx.lr = 0x82EA6174;
	sub_82E62980(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x822996c0
	ctx.lr = 0x82EA6180;
	sub_822996C0(ctx, base);
loc_82EA6180:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82ea6194
	if (ctx.cr6.eq) goto loc_82EA6194;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA6190;
	sub_82E76D78(ctx, base);
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
loc_82EA6194:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r21
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82ea5ef4
	if (ctx.cr6.lt) goto loc_82EA5EF4;
loc_82EA61A0:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82ea61ec
	if (ctx.cr6.eq) goto loc_82EA61EC;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e85a10
	ctx.lr = 0x82EA61BC;
	sub_82E85A10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// lwz r10,396(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r5,388(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r3,344(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// bl 0x82e62980
	ctx.lr = 0x82EA61E0;
	sub_82E62980(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e83e68
	ctx.lr = 0x82EA61EC;
	sub_82E83E68(ctx, base);
loc_82EA61EC:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82EA61F0:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82ea6204
	if (ctx.cr6.eq) goto loc_82EA6204;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA6204;
	sub_822996C0(ctx, base);
loc_82EA6204:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82ea6214
	if (ctx.cr6.eq) goto loc_82EA6214;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA6214;
	sub_82E76D78(ctx, base);
loc_82EA6214:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA6220;
	sub_822996C0(ctx, base);
	// b 0x82ea5e20
	goto loc_82EA5E20;
loc_82EA6224:
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r17,r22
	ctx.r17.u64 = ctx.r22.u64;
	// bl 0x82e5f660
	ctx.lr = 0x82EA6238;
	sub_82E5F660(ctx, base);
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,472(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// lwz r11,480(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// rlwinm r7,r11,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82e61510
	ctx.lr = 0x82EA6274;
	sub_82E61510(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EA627C;
	sub_82299698(ctx, base);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea61f0
	if (ctx.cr0.eq) goto loc_82EA61F0;
	// addi r5,r1,524
	ctx.r5.s64 = ctx.r1.s64 + 524;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82e5f660
	ctx.lr = 0x82EA6298;
	sub_82E5F660(ctx, base);
	// lwz r11,544(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// b 0x82ea5fa8
	goto loc_82EA5FA8;
loc_82EA62A0:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82ea62bc
	if (ctx.cr6.eq) goto loc_82EA62BC;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x82ea62bc
	if (!ctx.cr6.eq) goto loc_82EA62BC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x822996c0
	ctx.lr = 0x82EA62BC;
	sub_822996C0(ctx, base);
loc_82EA62BC:
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
	// b 0x82ea61f0
	goto loc_82EA61F0;
}

__attribute__((alias("__imp__sub_82EA62C8"))) PPC_WEAK_FUNC(sub_82EA62C8);
PPC_FUNC_IMPL(__imp__sub_82EA62C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EA62D0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ad0
	ctx.lr = 0x82EA62D8;
	__savefpr_22(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// bl 0x82eb9208
	ctx.lr = 0x82EA62F8;
	sub_82EB9208(ctx, base);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// mr r14,r21
	ctx.r14.u64 = ctx.r21.u64;
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EA6314:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82ea6314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA6314;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r1,624
	ctx.r11.s64 = ctx.r1.s64 + 624;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EA6334:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82ea6334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA6334;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82ea6368
	if (!ctx.cr6.eq) goto loc_82EA6368;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82eb9548
	ctx.lr = 0x82EA6350;
	sub_82EB9548(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EA6358:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b1c
	ctx.lr = 0x82EA6364;
	__restfpr_22(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82EA6368:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x82ea6388
	if (!ctx.cr6.eq) goto loc_82EA6388;
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_82EA6378:
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82eb9548
	ctx.lr = 0x82EA6380;
	sub_82EB9548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ea6358
	goto loc_82EA6358;
loc_82EA6388:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e85a00
	ctx.lr = 0x82EA6390;
	sub_82E85A00(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e85ec8
	ctx.lr = 0x82EA63A4;
	sub_82E85EC8(ctx, base);
	// lwz r11,504(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// bl 0x82299698
	ctx.lr = 0x82EA63B8;
	sub_82299698(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x82ea63cc
	if (!ctx.cr0.eq) goto loc_82EA63CC;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82ea6b20
	goto loc_82EA6B20;
loc_82EA63CC:
	// lwz r11,480(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r15,r11,24,31,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// bl 0x82e5fe30
	ctx.lr = 0x82EA63E4;
	sub_82E5FE30(ctx, base);
	// lwz r11,48(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea6410
	if (ctx.cr0.eq) goto loc_82EA6410;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,508(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r3,504(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// bl 0x82e5f960
	ctx.lr = 0x82EA6400;
	sub_82E5F960(ctx, base);
	// subfc r11,r16,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r16.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r16.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82EA6410:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x82ea6448
	if (ctx.cr6.eq) goto loc_82EA6448;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea6448
	if (ctx.cr6.eq) goto loc_82EA6448;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e5f668
	ctx.lr = 0x82EA6430;
	sub_82E5F668(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,684(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// bl 0x82299698
	ctx.lr = 0x82EA643C;
	sub_82299698(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea6b20
	if (ctx.cr0.eq) goto loc_82EA6B20;
loc_82EA6448:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r21,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r21.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82ea6af8
	if (ctx.cr6.eq) goto loc_82EA6AF8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r20,132(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f22,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f22.f64 = double(temp.f32);
	// lfs f23,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f23.f64 = double(temp.f32);
	// lfs f30,7676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7676);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
loc_82EA64A4:
	// addi r5,r1,832
	ctx.r5.s64 = ctx.r1.s64 + 832;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e85ec8
	ctx.lr = 0x82EA64B4;
	sub_82E85EC8(ctx, base);
	// lwz r11,856(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 856);
	// stfs f23,320(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stfs f23,336(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f23,352(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// std r10,472(r1)
	PPC_STORE_U64(ctx.r1.u32 + 472, ctx.r10.u64);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f22,172(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f22,180(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f22,184(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f22,192(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f22,196(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f22,200(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f22,208(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f22,228(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f23,240(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f23,252(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// lfd f0,472(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f23,268(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f23,280(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f23,296(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f23,308(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,324(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f0,332(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// stfs f0,340(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f0,344(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f0,348(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stfs f13,248(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f13,256(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f13,284(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f13,292(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f13,300(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f13,304(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
loc_82EA6594:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82e85ed0
	ctx.lr = 0x82EA65AC;
	sub_82E85ED0(ctx, base);
	// mr. r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq 0x82ea6b30
	if (ctx.cr0.eq) goto loc_82EA6B30;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82ea65c8
	if (!ctx.cr6.eq) goto loc_82EA65C8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// beq cr6,0x82ea65cc
	if (ctx.cr6.eq) goto loc_82EA65CC;
loc_82EA65C8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EA65CC:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82eb9550
	ctx.lr = 0x82EA65E8;
	sub_82EB9550(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ea6afc
	if (ctx.cr0.lt) goto loc_82EA6AFC;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x82ea665c
	if (ctx.cr6.eq) goto loc_82EA665C;
	// lwz r11,516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r20,512(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r11.u32);
	// beq cr6,0x82ea6778
	if (ctx.cr6.eq) goto loc_82EA6778;
	// lwz r11,680(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ea6778
	if (ctx.cr6.lt) goto loc_82EA6778;
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,508(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// clrlwi r7,r11,26
	ctx.r7.u64 = ctx.r11.u32 & 0x3F;
	// lwz r3,504(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r14,1
	ctx.r14.s64 = 1;
	// bl 0x82e5fe08
	ctx.lr = 0x82EA6648;
	sub_82E5FE08(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,644(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r10,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r10.u32);
loc_82EA6658:
	// stw r11,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r11.u32);
loc_82EA665C:
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82ec85d0
	ctx.lr = 0x82EA6664;
	sub_82EC85D0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82ea6b3c
	if (ctx.cr0.eq) goto loc_82EA6B3C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ebaa40
	ctx.lr = 0x82EA6674;
	sub_82EBAA40(ctx, base);
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 2, ctx.xer);
	// blt cr6,0x82ea68e0
	if (ctx.cr6.lt) goto loc_82EA68E0;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// blt cr6,0x82ea67f4
	if (ctx.cr6.lt) goto loc_82EA67F4;
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 6, ctx.xer);
	// bge cr6,0x82ea69c8
	if (!ctx.cr6.lt) goto loc_82EA69C8;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82ea69c8
	if (!ctx.cr6.gt) goto loc_82EA69C8;
	// mulli r9,r25,12
	ctx.r9.s64 = ctx.r25.s64 * 12;
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// addi r10,r1,244
	ctx.r10.s64 = ctx.r1.s64 + 244;
	// addi r8,r1,164
	ctx.r8.s64 = ctx.r1.s64 + 164;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// rlwinm r5,r25,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 31) & 0x7FFFFFFF;
	// lfsx f28,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f28.f64 = double(temp.f32);
	// lfsx f25,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f25.f64 = double(temp.f32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// mulli r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 * 12;
	// lfsx f24,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f24.f64 = double(temp.f32);
	// lfsx f27,r9,r7
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f27.f64 = double(temp.f32);
	// lfsx f26,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f26.f64 = double(temp.f32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82EA66D4:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// std r11,456(r1)
	PPC_STORE_U64(ctx.r1.u32 + 456, ctx.r11.u64);
	// lfd f0,456(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fmadds f29,f0,f25,f24
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f25.f64 + ctx.f24.f64));
loc_82EA66F8:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// stfs f28,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f29,124(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// std r11,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r11.u64);
	// lfd f0,440(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmadds f0,f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fmadds f0,f0,f27,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f26.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x82EA6738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82ea66f8
	if (ctx.cr6.lt) goto loc_82EA66F8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA6768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82ea66d4
	if (ctx.cr6.lt) goto loc_82EA66D4;
	// b 0x82ea69c8
	goto loc_82EA69C8;
loc_82EA6778:
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r14,r21
	ctx.r14.u64 = ctx.r21.u64;
	// bl 0x82e5f660
	ctx.lr = 0x82EA678C;
	sub_82E5F660(ctx, base);
	// addi r11,r1,864
	ctx.r11.s64 = ctx.r1.s64 + 864;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,712(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 712);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// lwz r11,720(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// rlwinm r7,r11,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82e61510
	ctx.lr = 0x82EA67C8;
	sub_82E61510(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EA67D0;
	sub_82299698(ctx, base);
	// stw r3,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea6afc
	if (ctx.cr0.eq) goto loc_82EA6AFC;
	// addi r5,r1,764
	ctx.r5.s64 = ctx.r1.s64 + 764;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82e5f660
	ctx.lr = 0x82EA67EC;
	sub_82E5F660(ctx, base);
	// lwz r11,784(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// b 0x82ea6658
	goto loc_82EA6658;
loc_82EA67F4:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82ea69c8
	if (!ctx.cr6.gt) goto loc_82EA69C8;
	// mulli r9,r25,12
	ctx.r9.s64 = ctx.r25.s64 * 12;
	// addi r11,r1,248
	ctx.r11.s64 = ctx.r1.s64 + 248;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r8,r1,164
	ctx.r8.s64 = ctx.r1.s64 + 164;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// rlwinm r5,r25,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 31) & 0x7FFFFFFF;
	// lfsx f25,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f25.f64 = double(temp.f32);
	// lfsx f24,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f24.f64 = double(temp.f32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// mulli r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 * 12;
	// lfsx f28,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f28.f64 = double(temp.f32);
	// lfsx f27,r9,r7
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f27.f64 = double(temp.f32);
	// lfsx f26,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f26.f64 = double(temp.f32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82EA683C:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// std r11,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r11.u64);
	// lfd f0,400(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fmadds f29,f0,f25,f24
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f25.f64 + ctx.f24.f64));
loc_82EA6860:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// stfs f29,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f28,124(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// std r11,448(r1)
	PPC_STORE_U64(ctx.r1.u32 + 448, ctx.r11.u64);
	// lfd f0,448(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 448);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmadds f0,f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fmadds f0,f0,f27,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f26.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x82EA68A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82ea6860
	if (ctx.cr6.lt) goto loc_82EA6860;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA68D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82ea683c
	if (ctx.cr6.lt) goto loc_82EA683C;
	// b 0x82ea69c8
	goto loc_82EA69C8;
loc_82EA68E0:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82ea69c8
	if (!ctx.cr6.gt) goto loc_82EA69C8;
	// mulli r9,r25,12
	ctx.r9.s64 = ctx.r25.s64 * 12;
	// addi r11,r1,248
	ctx.r11.s64 = ctx.r1.s64 + 248;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r8,r1,244
	ctx.r8.s64 = ctx.r1.s64 + 244;
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// rlwinm r5,r25,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 31) & 0x7FFFFFFF;
	// lfsx f28,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f28.f64 = double(temp.f32);
	// lfsx f27,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f27.f64 = double(temp.f32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// mulli r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 * 12;
	// lfsx f25,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f25.f64 = double(temp.f32);
	// lfsx f24,r9,r7
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f24.f64 = double(temp.f32);
	// lfsx f26,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f26.f64 = double(temp.f32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82EA6928:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// std r11,464(r1)
	PPC_STORE_U64(ctx.r1.u32 + 464, ctx.r11.u64);
	// lfd f0,464(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 464);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fmadds f29,f0,f25,f24
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f25.f64 + ctx.f24.f64));
loc_82EA694C:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// stfs f29,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f26,120(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// std r11,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r11.u64);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f0,392(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fmadds f0,f0,f28,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x82EA698C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82ea694c
	if (ctx.cr6.lt) goto loc_82EA694C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA69BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82ea6928
	if (ctx.cr6.lt) goto loc_82EA6928;
loc_82EA69C8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA69E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x82ea6a78
	if (ctx.cr6.eq) goto loc_82EA6A78;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82ea6a78
	if (!ctx.cr6.eq) goto loc_82EA6A78;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,528(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// twllei r11,0
	// lwz r8,532(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// twllei r10,0
	// divwu r4,r9,r11
	ctx.r4.u32 = ctx.r9.u32 / ctx.r11.u32;
	// lwz r9,540(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// divwu r5,r8,r10
	ctx.r5.u32 = ctx.r8.u32 / ctx.r10.u32;
	// lwz r8,536(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divwu r7,r9,r10
	ctx.r7.u32 = ctx.r9.u32 / ctx.r10.u32;
	// divwu r6,r8,r11
	ctx.r6.u32 = ctx.r8.u32 / ctx.r11.u32;
	// twllei r10,0
	// twllei r11,0
	// bl 0x82e66c00
	ctx.lr = 0x82EA6A48;
	sub_82E66C00(ctx, base);
	// addi r9,r1,688
	ctx.r9.s64 = ctx.r1.s64 + 688;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r10,748(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r8,520(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// lwz r7,512(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// lwz r5,740(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// lwz r4,736(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// bl 0x82e62980
	ctx.lr = 0x82EA6A6C;
	sub_82E62980(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x822996c0
	ctx.lr = 0x82EA6A78;
	sub_822996C0(ctx, base);
loc_82EA6A78:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA6A80;
	sub_82E76D78(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 6, ctx.xer);
	// blt cr6,0x82ea6594
	if (ctx.cr6.lt) goto loc_82EA6594;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea6aec
	if (ctx.cr6.eq) goto loc_82EA6AEC;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,600
	ctx.r5.s64 = ctx.r1.s64 + 600;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e85a10
	ctx.lr = 0x82EA6ABC;
	sub_82E85A10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,668(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// lwz r8,644(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// lwz r5,660(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r4,656(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// lwz r3,608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x82e62980
	ctx.lr = 0x82EA6AE0;
	sub_82E62980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e83e68
	ctx.lr = 0x82EA6AEC;
	sub_82E83E68(ctx, base);
loc_82EA6AEC:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplw cr6,r22,r16
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x82ea64a4
	if (ctx.cr6.lt) goto loc_82EA64A4;
loc_82EA6AF8:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82EA6AFC:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea6b10
	if (ctx.cr6.eq) goto loc_82EA6B10;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EA6B10;
	sub_822996C0(ctx, base);
loc_82EA6B10:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82ea6b20
	if (ctx.cr6.eq) goto loc_82EA6B20;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA6B20;
	sub_82E76D78(ctx, base);
loc_82EA6B20:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA6B2C;
	sub_822996C0(ctx, base);
	// b 0x82ea6378
	goto loc_82EA6378;
loc_82EA6B30:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82ea6afc
	goto loc_82EA6AFC;
loc_82EA6B3C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x82ea6b58
	if (ctx.cr6.eq) goto loc_82EA6B58;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82ea6b58
	if (!ctx.cr6.eq) goto loc_82EA6B58;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x822996c0
	ctx.lr = 0x82EA6B58;
	sub_822996C0(ctx, base);
loc_82EA6B58:
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
	// b 0x82ea6afc
	goto loc_82EA6AFC;
}

