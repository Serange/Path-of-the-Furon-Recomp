#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_833BFDE0"))) PPC_WEAK_FUNC(sub_833BFDE0);
PPC_FUNC_IMPL(__imp__sub_833BFDE0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r6,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r9,r10,r8
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// stw r9,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r9.u32);
	// beq cr6,0x833bfe24
	if (ctx.cr6.eq) goto loc_833BFE24;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
loc_833BFE24:
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// bgt cr6,0x833bfe3c
	if (ctx.cr6.gt) goto loc_833BFE3C;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x833bfe48
	goto loc_833BFE48;
loc_833BFE3C:
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bge cr6,0x833bfe48
	if (!ctx.cr6.lt) goto loc_833BFE48;
	// li r11,16
	ctx.r11.s64 = 16;
loc_833BFE48:
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r3,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r3.u32);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r11,r5
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// rlwinm r11,r10,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833BFE74"))) PPC_WEAK_FUNC(sub_833BFE74);
PPC_FUNC_IMPL(__imp__sub_833BFE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833BFE78"))) PPC_WEAK_FUNC(sub_833BFE78);
PPC_FUNC_IMPL(__imp__sub_833BFE78) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
loc_833BFE84:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x833bfea4
	if (ctx.cr6.eq) goto loc_833BFEA4;
	// lbz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x833bfeb0
	goto loc_833BFEB0;
loc_833BFEA4:
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_833BFEB0:
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x833bfeec
	if (ctx.cr6.eq) goto loc_833BFEEC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833bfe84
	if (!ctx.cr6.eq) goto loc_833BFE84;
loc_833BFECC:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne cr6,0x833bfecc
	if (!ctx.cr6.eq) goto loc_833BFECC;
	// blr 
	return;
loc_833BFEEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_833BFEF4:
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne cr6,0x833bfef4
	if (!ctx.cr6.eq) goto loc_833BFEF4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833BFF14"))) PPC_WEAK_FUNC(sub_833BFF14);
PPC_FUNC_IMPL(__imp__sub_833BFF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833BFF18"))) PPC_WEAK_FUNC(sub_833BFF18);
PPC_FUNC_IMPL(__imp__sub_833BFF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x833BFF20;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x833bff64
	if (!ctx.cr6.lt) goto loc_833BFF64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subfic r6,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r6.s64 = 4 - ctx.r11.s64;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// slw r10,r7,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// srw r30,r7,r6
	ctx.r30.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// b 0x833bff70
	goto loc_833BFF70;
loc_833BFF64:
	// clrlwi r10,r9,28
	ctx.r10.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r30,r9,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
loc_833BFF70:
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,23360
	ctx.r11.s64 = ctx.r11.s64 + 23360;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r9,r9,-14880
	ctx.r9.s64 = ctx.r9.s64 + -14880;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lbzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bne cr6,0x833bffc4
	if (!ctx.cr6.eq) goto loc_833BFFC4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_833BFFA0:
	// stbx r11,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x833bffa0
	if (ctx.cr6.lt) goto loc_833BFFA0;
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_833BFFC4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x833bffe0
	if (!ctx.cr6.eq) goto loc_833BFFE0;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833bffec
	goto loc_833BFFEC;
loc_833BFFE0:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// rlwinm r10,r30,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
loc_833BFFEC:
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x833c063c
	if (!ctx.cr6.eq) goto loc_833C063C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x833c0024
	if (!ctx.cr6.lt) goto loc_833C0024;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subfic r7,r11,2
	ctx.xer.ca = ctx.r11.u32 <= 2;
	ctx.r7.s64 = 2 - ctx.r11.s64;
	// addi r31,r11,30
	ctx.r31.s64 = ctx.r11.s64 + 30;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// srw r30,r9,r7
	ctx.r30.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// or r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 | ctx.r10.u64;
	// clrlwi r29,r11,30
	ctx.r29.u64 = ctx.r11.u32 & 0x3;
	// b 0x833c0030
	goto loc_833C0030;
loc_833C0024:
	// clrlwi r29,r10,30
	ctx.r29.u64 = ctx.r10.u32 & 0x3;
	// rlwinm r30,r10,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r31,r11,-2
	ctx.r31.s64 = ctx.r11.s64 + -2;
loc_833C0030:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x833c00b0
	if (!ctx.cr6.eq) goto loc_833C00B0;
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
loc_833C0040:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x833c005c
	if (!ctx.cr6.eq) goto loc_833C005C;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r31,31
	ctx.r31.s64 = 31;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rlwinm r30,r10,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833c0068
	goto loc_833C0068;
loc_833C005C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_833C0068:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// beq cr6,0x833c0084
	if (ctx.cr6.eq) goto loc_833C0084;
	// stbx r11,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r11.u8);
	// stbx r10,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x833c008c
	goto loc_833C008C;
loc_833C0084:
	// stbx r11,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r11.u8);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
loc_833C008C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x833c0040
	if (ctx.cr6.lt) goto loc_833C0040;
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_833C00B0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
loc_833C00BC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x833c00d8
	if (!ctx.cr6.eq) goto loc_833C00D8;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r31,31
	ctx.r31.s64 = 31;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rlwinm r30,r10,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833c00e4
	goto loc_833C00E4;
loc_833C00D8:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_833C00E4:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833c0100
	if (ctx.cr6.eq) goto loc_833C0100;
	// stbx r11,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r11.u8);
	// stbx r9,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// b 0x833c0108
	goto loc_833C0108;
loc_833C0100:
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r11,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r11.u8);
loc_833C0108:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// blt cr6,0x833c00bc
	if (ctx.cr6.lt) goto loc_833C00BC;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x833c02c4
	if (!ctx.cr6.eq) goto loc_833C02C4;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x833c013c
	if (!ctx.cr6.lt) goto loc_833C013C;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// b 0x833c0140
	goto loc_833C0140;
loc_833C013C:
	// clrlwi r3,r30,29
	ctx.r3.u64 = ctx.r30.u32 & 0x7;
loc_833C0140:
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x833bfe78
	ctx.lr = 0x833C0154;
	sub_833BFE78(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x833c0178
	if (!ctx.cr6.lt) goto loc_833C0178;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// b 0x833c0180
	goto loc_833C0180;
loc_833C0178:
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// srw r30,r30,r3
	ctx.r30.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r3.u8 & 0x3F));
loc_833C0180:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x833c019c
	if (!ctx.cr6.lt) goto loc_833C019C;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// b 0x833c01a0
	goto loc_833C01A0;
loc_833C019C:
	// clrlwi r3,r30,29
	ctx.r3.u64 = ctx.r30.u32 & 0x7;
loc_833C01A0:
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,86
	ctx.r6.s64 = ctx.r1.s64 + 86;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// bl 0x833bfe78
	ctx.lr = 0x833C01B4;
	sub_833BFE78(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x833c01d8
	if (!ctx.cr6.lt) goto loc_833C01D8;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// b 0x833c01e0
	goto loc_833C01E0;
loc_833C01D8:
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// srw r30,r30,r3
	ctx.r30.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r3.u8 & 0x3F));
loc_833C01E0:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x833c01fc
	if (!ctx.cr6.lt) goto loc_833C01FC;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// b 0x833c0200
	goto loc_833C0200;
loc_833C01FC:
	// clrlwi r3,r30,29
	ctx.r3.u64 = ctx.r30.u32 & 0x7;
loc_833C0200:
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,90
	ctx.r6.s64 = ctx.r1.s64 + 90;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// bl 0x833bfe78
	ctx.lr = 0x833C0214;
	sub_833BFE78(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x833c0238
	if (!ctx.cr6.lt) goto loc_833C0238;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// b 0x833c0240
	goto loc_833C0240;
loc_833C0238:
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// srw r30,r30,r3
	ctx.r30.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r3.u8 & 0x3F));
loc_833C0240:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x833c025c
	if (!ctx.cr6.lt) goto loc_833C025C;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// b 0x833c0260
	goto loc_833C0260;
loc_833C025C:
	// clrlwi r3,r30,29
	ctx.r3.u64 = ctx.r30.u32 & 0x7;
loc_833C0260:
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,94
	ctx.r6.s64 = ctx.r1.s64 + 94;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r28,12
	ctx.r4.s64 = ctx.r28.s64 + 12;
	// bl 0x833bfe78
	ctx.lr = 0x833C0274;
	sub_833BFE78(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x833c02a8
	if (!ctx.cr6.lt) goto loc_833C02A8;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_833C02A8:
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// srw r30,r30,r3
	ctx.r30.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r3.u8 & 0x3F));
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_833C02C4:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x833c02e0
	if (!ctx.cr6.lt) goto loc_833C02E0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// b 0x833c02e4
	goto loc_833C02E4;
loc_833C02E0:
	// clrlwi r3,r30,29
	ctx.r3.u64 = ctx.r30.u32 & 0x7;
loc_833C02E4:
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x833bfe78
	ctx.lr = 0x833C02F8;
	sub_833BFE78(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x833c031c
	if (!ctx.cr6.lt) goto loc_833C031C;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// b 0x833c0324
	goto loc_833C0324;
loc_833C031C:
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// srw r30,r30,r3
	ctx.r30.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r3.u8 & 0x3F));
loc_833C0324:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x833c0340
	if (!ctx.cr6.lt) goto loc_833C0340;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// b 0x833c0344
	goto loc_833C0344;
loc_833C0340:
	// clrlwi r3,r30,29
	ctx.r3.u64 = ctx.r30.u32 & 0x7;
loc_833C0344:
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,86
	ctx.r6.s64 = ctx.r1.s64 + 86;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x833bfe78
	ctx.lr = 0x833C0358;
	sub_833BFE78(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x833c037c
	if (!ctx.cr6.lt) goto loc_833C037C;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// b 0x833c0384
	goto loc_833C0384;
loc_833C037C:
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// srw r30,r30,r3
	ctx.r30.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r3.u8 & 0x3F));
loc_833C0384:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x833c03a0
	if (!ctx.cr6.lt) goto loc_833C03A0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// b 0x833c03a4
	goto loc_833C03A4;
loc_833C03A0:
	// clrlwi r3,r30,29
	ctx.r3.u64 = ctx.r30.u32 & 0x7;
loc_833C03A4:
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,90
	ctx.r6.s64 = ctx.r1.s64 + 90;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x833bfe78
	ctx.lr = 0x833C03B8;
	sub_833BFE78(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x833c03dc
	if (!ctx.cr6.lt) goto loc_833C03DC;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// b 0x833c03e4
	goto loc_833C03E4;
loc_833C03DC:
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// srw r30,r30,r3
	ctx.r30.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r3.u8 & 0x3F));
loc_833C03E4:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x833c0400
	if (!ctx.cr6.lt) goto loc_833C0400;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// b 0x833c0404
	goto loc_833C0404;
loc_833C0400:
	// clrlwi r3,r30,29
	ctx.r3.u64 = ctx.r30.u32 & 0x7;
loc_833C0404:
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,94
	ctx.r6.s64 = ctx.r1.s64 + 94;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x833bfe78
	ctx.lr = 0x833C0418;
	sub_833BFE78(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x833c043c
	if (!ctx.cr6.lt) goto loc_833C043C;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// b 0x833c0444
	goto loc_833C0444;
loc_833C043C:
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// srw r30,r30,r3
	ctx.r30.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r3.u8 & 0x3F));
loc_833C0444:
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bne cr6,0x833c0514
	if (!ctx.cr6.eq) goto loc_833C0514;
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7, ctx.xer);
	// bge cr6,0x833c0468
	if (!ctx.cr6.lt) goto loc_833C0468;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// clrlwi r3,r11,25
	ctx.r3.u64 = ctx.r11.u32 & 0x7F;
	// b 0x833c046c
	goto loc_833C046C;
loc_833C0468:
	// clrlwi r3,r30,25
	ctx.r3.u64 = ctx.r30.u32 & 0x7F;
loc_833C046C:
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x833bfe78
	ctx.lr = 0x833C0480;
	sub_833BFE78(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x833c04a4
	if (!ctx.cr6.lt) goto loc_833C04A4;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// b 0x833c04ac
	goto loc_833C04AC;
loc_833C04A4:
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// srw r30,r30,r3
	ctx.r30.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r3.u8 & 0x3F));
loc_833C04AC:
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7, ctx.xer);
	// bge cr6,0x833c04c8
	if (!ctx.cr6.lt) goto loc_833C04C8;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// clrlwi r3,r11,25
	ctx.r3.u64 = ctx.r11.u32 & 0x7F;
	// b 0x833c04cc
	goto loc_833C04CC;
loc_833C04C8:
	// clrlwi r3,r30,25
	ctx.r3.u64 = ctx.r30.u32 & 0x7F;
loc_833C04CC:
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// bl 0x833bfe78
	ctx.lr = 0x833C04E0;
	sub_833BFE78(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x833c02a8
	if (!ctx.cr6.lt) goto loc_833C02A8;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_833C0514:
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7, ctx.xer);
	// bge cr6,0x833c0530
	if (!ctx.cr6.lt) goto loc_833C0530;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// clrlwi r3,r11,25
	ctx.r3.u64 = ctx.r11.u32 & 0x7F;
	// b 0x833c0534
	goto loc_833C0534;
loc_833C0530:
	// clrlwi r3,r30,25
	ctx.r3.u64 = ctx.r30.u32 & 0x7F;
loc_833C0534:
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x833bfe78
	ctx.lr = 0x833C0548;
	sub_833BFE78(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x833c056c
	if (!ctx.cr6.lt) goto loc_833C056C;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// b 0x833c0574
	goto loc_833C0574;
loc_833C056C:
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// srw r30,r30,r3
	ctx.r30.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r3.u8 & 0x3F));
loc_833C0574:
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7, ctx.xer);
	// bge cr6,0x833c0590
	if (!ctx.cr6.lt) goto loc_833C0590;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// clrlwi r3,r11,25
	ctx.r3.u64 = ctx.r11.u32 & 0x7F;
	// b 0x833c0594
	goto loc_833C0594;
loc_833C0590:
	// clrlwi r3,r30,25
	ctx.r3.u64 = ctx.r30.u32 & 0x7F;
loc_833C0594:
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x833bfe78
	ctx.lr = 0x833C05A8;
	sub_833BFE78(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x833c05cc
	if (!ctx.cr6.lt) goto loc_833C05CC;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// b 0x833c05d4
	goto loc_833C05D4;
loc_833C05CC:
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// srw r30,r30,r3
	ctx.r30.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r3.u8 & 0x3F));
loc_833C05D4:
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 15, ctx.xer);
	// bge cr6,0x833c05f0
	if (!ctx.cr6.lt) goto loc_833C05F0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// clrlwi r3,r11,17
	ctx.r3.u64 = ctx.r11.u32 & 0x7FFF;
	// b 0x833c05f4
	goto loc_833C05F4;
loc_833C05F0:
	// clrlwi r3,r30,17
	ctx.r3.u64 = ctx.r30.u32 & 0x7FFF;
loc_833C05F4:
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x833bfe78
	ctx.lr = 0x833C0608;
	sub_833BFE78(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x833c02a8
	if (!ctx.cr6.lt) goto loc_833C02A8;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_833C063C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x833c0668
	if (!ctx.cr6.lt) goto loc_833C0668;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subfic r6,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r6.s64 = 3 - ctx.r11.s64;
	// addi r31,r11,29
	ctx.r31.s64 = ctx.r11.s64 + 29;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// srw r30,r9,r6
	ctx.r30.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// or r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 | ctx.r10.u64;
	// clrlwi r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	// b 0x833c0674
	goto loc_833C0674;
loc_833C0668:
	// clrlwi r7,r10,29
	ctx.r7.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r30,r10,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r31,r11,-3
	ctx.r31.s64 = ctx.r11.s64 + -3;
loc_833C0674:
	// lis r6,0
	ctx.r6.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// li r5,1
	ctx.r5.s64 = 1;
loc_833C0684:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bge cr6,0x833c06b0
	if (!ctx.cr6.lt) goto loc_833C06B0;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subfic r4,r31,4
	ctx.xer.ca = ctx.r31.u32 <= 4;
	ctx.r4.s64 = 4 - ctx.r31.s64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// slw r11,r9,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// srw r30,r9,r4
	ctx.r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x833c06bc
	goto loc_833C06BC;
loc_833C06B0:
	// clrlwi r11,r30,28
	ctx.r11.u64 = ctx.r30.u32 & 0xF;
	// rlwinm r30,r30,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
loc_833C06BC:
	// stbx r11,r10,r28
	PPC_STORE_U8(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// andc r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// ble cr6,0x833c0684
	if (!ctx.cr6.gt) goto loc_833C0684;
	// li r11,0
	ctx.r11.s64 = 0;
loc_833C06D8:
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833c06f4
	if (ctx.cr6.eq) goto loc_833C06F4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,15
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15, ctx.xer);
	// stbx r11,r7,r28
	PPC_STORE_U8(ctx.r7.u32 + ctx.r28.u32, ctx.r11.u8);
	// beq cr6,0x833c0704
	if (ctx.cr6.eq) goto loc_833C0704;
loc_833C06F4:
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x833c06d8
	if (!ctx.cr6.eq) goto loc_833C06D8;
loc_833C0704:
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C0718"))) PPC_WEAK_FUNC(sub_833C0718);
PPC_FUNC_IMPL(__imp__sub_833C0718) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// b 0x833bff18
	sub_833BFF18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C0730"))) PPC_WEAK_FUNC(sub_833C0730);
PPC_FUNC_IMPL(__imp__sub_833C0730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x833C0738;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r31,r27,320
	ctx.r31.s64 = ctx.r27.s64 + 320;
	// li r30,16
	ctx.r30.s64 = 16;
loc_833C0754:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r31,-64
	ctx.r5.s64 = ctx.r31.s64 + -64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833bff18
	ctx.lr = 0x833C0768;
	sub_833BFF18(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x833c0754
	if (!ctx.cr6.eq) goto loc_833C0754;
	// addi r6,r26,16
	ctx.r6.s64 = ctx.r26.s64 + 16;
	// addi r5,r26,32
	ctx.r5.s64 = ctx.r26.s64 + 32;
	// addi r4,r26,36
	ctx.r4.s64 = ctx.r26.s64 + 36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833bff18
	ctx.lr = 0x833C0790;
	sub_833BFF18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,384(r27)
	PPC_STORE_U32(ctx.r27.u32 + 384, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C07A0"))) PPC_WEAK_FUNC(sub_833C07A0);
PPC_FUNC_IMPL(__imp__sub_833C07A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x833C07A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x833c0a9c
	if (!ctx.cr6.eq) goto loc_833C0A9C;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x833c0810
	if (!ctx.cr6.lt) goto loc_833C0810;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// srw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r7.u8 & 0x3F));
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// srw r30,r9,r4
	ctx.r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & ctx.r11.u64;
	// b 0x833c0824
	goto loc_833C0824;
loc_833C0810:
	// subfic r9,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r11.s64;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srw r30,r8,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// srw r10,r6,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// and r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 & ctx.r8.u64;
loc_833C0824:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x833c0a80
	if (ctx.cr6.eq) goto loc_833C0A80;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x833c0a80
	if (ctx.cr6.gt) goto loc_833C0A80;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// bne cr6,0x833c0864
	if (!ctx.cr6.eq) goto loc_833C0864;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r31,31
	ctx.r31.s64 = 31;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r30,r10,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833c0870
	goto loc_833C0870;
loc_833C0864:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_833C0870:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x833c0a14
	if (!ctx.cr6.eq) goto loc_833C0A14;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r28,36(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r27,r3,16
	ctx.r27.s64 = ctx.r3.s64 + 16;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r10,-14864
	ctx.r25.s64 = ctx.r10.s64 + -14864;
loc_833C0894:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x833c08c4
	if (ctx.cr6.lt) goto loc_833C08C4;
	// subfic r10,r4,32
	ctx.xer.ca = ctx.r4.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r4.s64;
	// srw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// lbzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// lbzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r27.u32);
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x833c091c
	goto loc_833C091C;
loc_833C08C4:
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x833c0a80
	if (!ctx.cr6.lt) goto loc_833C0A80;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r10,r4,32
	ctx.xer.ca = ctx.r4.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r4.s64;
	// slw r8,r9,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// srw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// or r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 | ctx.r30.u64;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// lbzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// lbzx r8,r8,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r27.u32);
	// blt cr6,0x833c0908
	if (ctx.cr6.lt) goto loc_833C0908;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x833c091c
	goto loc_833C091C;
loc_833C0908:
	// subf r7,r31,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r10,32
	ctx.r31.s64 = ctx.r10.s64 + 32;
	// srw r30,r9,r7
	ctx.r30.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
loc_833C091C:
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// blt cr6,0x833c09e8
	if (ctx.cr6.lt) goto loc_833C09E8;
	// rlwinm r10,r26,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// or r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 | ctx.r26.u64;
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lbz r9,-12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -12);
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x833c0a90
	if (ctx.cr6.gt) goto loc_833C0A90;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x833c09cc
	if (ctx.cr6.eq) goto loc_833C09CC;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
loc_833C0960:
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x833c0960
	if (!ctx.cr6.eq) goto loc_833C0960;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x833c09a4
	if (ctx.cr6.lt) goto loc_833C09A4;
loc_833C0988:
	// addi r10,r10,252
	ctx.r10.s64 = ctx.r10.s64 + 252;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x833c0988
	if (!ctx.cr6.lt) goto loc_833C0988;
loc_833C09A4:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833c09f8
	if (ctx.cr6.eq) goto loc_833C09F8;
loc_833C09B0:
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x833c09b0
	if (!ctx.cr6.eq) goto loc_833C09B0;
	// b 0x833c09f8
	goto loc_833C09F8;
loc_833C09CC:
	// addi r10,r10,252
	ctx.r10.s64 = ctx.r10.s64 + 252;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x833c09cc
	if (!ctx.cr6.eq) goto loc_833C09CC;
	// b 0x833c09f8
	goto loc_833C09F8;
loc_833C09E8:
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_833C09F8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x833c0894
	if (!ctx.cr6.eq) goto loc_833C0894;
	// stw r29,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// stw r31,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_833C0A14:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bge cr6,0x833c0a58
	if (!ctx.cr6.lt) goto loc_833C0A58;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r9,r31,4
	ctx.xer.ca = ctx.r31.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r31.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// slw r8,r10,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// or r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 | ctx.r30.u64;
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r4,r8,28
	ctx.r4.u64 = ctx.r8.u32 & 0xF;
	// bl 0x82cb16f0
	ctx.lr = 0x833C0A44;
	sub_82CB16F0(ctx, base);
	// stw r29,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// stw r31,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_833C0A58:
	// clrlwi r4,r30,28
	ctx.r4.u64 = ctx.r30.u32 & 0xF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r30,r30,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bl 0x82cb16f0
	ctx.lr = 0x833C0A6C;
	sub_82CB16F0(ctx, base);
	// stw r29,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// stw r31,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_833C0A80:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_833C0A90:
	// stw r29,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// stw r31,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r31.u32);
loc_833C0A9C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C0AA4"))) PPC_WEAK_FUNC(sub_833C0AA4);
PPC_FUNC_IMPL(__imp__sub_833C0AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C0AA8"))) PPC_WEAK_FUNC(sub_833C0AA8);
PPC_FUNC_IMPL(__imp__sub_833C0AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x833C0AB0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x833c0d50
	if (!ctx.cr6.eq) goto loc_833C0D50;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r7,0(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r28,4(r21)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x833c0b18
	if (!ctx.cr6.lt) goto loc_833C0B18;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subfic r5,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r11.s64;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// srw r5,r9,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// or r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 | ctx.r7.u64;
	// srw r30,r8,r4
	ctx.r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r4.u8 & 0x3F));
	// and r24,r5,r11
	ctx.r24.u64 = ctx.r5.u64 & ctx.r11.u64;
	// b 0x833c0b2c
	goto loc_833C0B2C;
loc_833C0B18:
	// subfic r8,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r11.s64;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srw r30,r7,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// srw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// and r24,r10,r7
	ctx.r24.u64 = ctx.r10.u64 & ctx.r7.u64;
loc_833C0B2C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x833c0d34
	if (ctx.cr6.eq) goto loc_833C0D34;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x833c0d34
	if (ctx.cr6.gt) goto loc_833C0D34;
	// lwz r23,48(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r25,r3,16
	ctx.r25.s64 = ctx.r3.s64 + 16;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r11,r23,r24
	ctx.r11.u64 = ctx.r23.u64 + ctx.r24.u64;
	// lwz r26,36(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r29,384(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// bne cr6,0x833c0b80
	if (!ctx.cr6.eq) goto loc_833C0B80;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r31,31
	ctx.r31.s64 = 31;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// rlwinm r30,r11,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833c0b8c
	goto loc_833C0B8C;
loc_833C0B80:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_833C0B8C:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c0b9c
	if (ctx.cr6.eq) goto loc_833C0B9C;
	// subfic r24,r24,-20
	ctx.xer.ca = ctx.r24.u32 <= 4294967276;
	ctx.r24.s64 = -20 - ctx.r24.s64;
loc_833C0B9C:
	// addi r11,r29,64
	ctx.r11.s64 = ctx.r29.s64 + 64;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x833c0bf0
	if (ctx.cr6.lt) goto loc_833C0BF0;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// addi r10,r29,80
	ctx.r10.s64 = ctx.r29.s64 + 80;
	// rlwinm r8,r29,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r29,r10,r27
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// srw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x833c0c58
	goto loc_833C0C58;
loc_833C0BF0:
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x833c0d34
	if (!ctx.cr6.lt) goto loc_833C0D34;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// addi r10,r29,80
	ctx.r10.s64 = ctx.r29.s64 + 80;
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// slw r7,r8,r31
	ctx.r7.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r31.u8 & 0x3F));
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// or r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 | ctx.r30.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r7,r11,28
	ctx.r7.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// lbzx r29,r11,r27
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// subf r11,r10,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// blt cr6,0x833c0c48
	if (ctx.cr6.lt) goto loc_833C0C48;
	// srw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x833c0c58
	goto loc_833C0C58;
loc_833C0C48:
	// subf r7,r31,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r31.s64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// srw r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
loc_833C0C58:
	// subfic r8,r4,32
	ctx.xer.ca = ctx.r4.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r4.s64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// blt cr6,0x833c0c88
	if (ctx.cr6.lt) goto loc_833C0C88;
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// lbzx r8,r8,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r26.u32);
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbzx r5,r7,r25
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r25.u32);
	// srw r30,r10,r8
	ctx.r30.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// b 0x833c0cd0
	goto loc_833C0CD0;
loc_833C0C88:
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// or r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 | ctx.r10.u64;
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// lbzx r8,r8,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r26.u32);
	// clrlwi r5,r8,28
	ctx.r5.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lbzx r5,r5,r25
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r25.u32);
	// blt cr6,0x833c0cbc
	if (ctx.cr6.lt) goto loc_833C0CBC;
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srw r30,r10,r8
	ctx.r30.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// b 0x833c0cd0
	goto loc_833C0CD0;
loc_833C0CBC:
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// srw r30,r7,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
loc_833C0CD0:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833c0cf0
	if (ctx.cr6.eq) goto loc_833C0CF0;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_833C0CF0:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stb r11,0(r22)
	PPC_STORE_U8(ctx.r22.u32 + 0, ctx.r11.u8);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// bgt cr6,0x833c0b9c
	if (ctx.cr6.gt) goto loc_833C0B9C;
	// cmpwi cr6,r24,-22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -22, ctx.xer);
	// bge cr6,0x833c0d1c
	if (!ctx.cr6.lt) goto loc_833C0D1C;
	// subfic r5,r24,-21
	ctx.xer.ca = ctx.r24.u32 <= 4294967275;
	ctx.r5.s64 = -21 - ctx.r24.s64;
	// lbz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x833C0D1C;
	sub_82CB16F0(ctx, base);
loc_833C0D1C:
	// stw r29,384(r27)
	PPC_STORE_U32(ctx.r27.u32 + 384, ctx.r29.u32);
	// stw r28,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r28.u32);
	// stw r30,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r30.u32);
	// stw r31,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_833C0D34:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r28,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r28.u32);
	// stw r30,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r30.u32);
	// stw r31,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r31.u32);
loc_833C0D50:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C0D58"))) PPC_WEAK_FUNC(sub_833C0D58);
PPC_FUNC_IMPL(__imp__sub_833C0D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x833C0D60;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x833c0fe8
	if (!ctx.cr6.eq) goto loc_833C0FE8;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,8(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r7,0(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r29,4(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x833c0dc8
	if (!ctx.cr6.lt) goto loc_833C0DC8;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r5,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r11.s64;
	// subf r4,r9,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// srw r5,r10,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// or r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 | ctx.r7.u64;
	// srw r30,r8,r4
	ctx.r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r4.u8 & 0x3F));
	// and r23,r5,r11
	ctx.r23.u64 = ctx.r5.u64 & ctx.r11.u64;
	// b 0x833c0ddc
	goto loc_833C0DDC;
loc_833C0DC8:
	// subfic r8,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r11.s64;
	// subf r31,r11,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srw r30,r7,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// srw r9,r10,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// and r23,r9,r7
	ctx.r23.u64 = ctx.r9.u64 & ctx.r7.u64;
loc_833C0DDC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x833c0fcc
	if (ctx.cr6.eq) goto loc_833C0FCC;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x833c0fcc
	if (ctx.cr6.gt) goto loc_833C0FCC;
	// lwz r22,48(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r24,r3,16
	ctx.r24.s64 = ctx.r3.s64 + 16;
	// lwz r26,32(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r11,r22,r23
	ctx.r11.u64 = ctx.r22.u64 + ctx.r23.u64;
	// lwz r25,36(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r5,384(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// bne cr6,0x833c0e30
	if (!ctx.cr6.eq) goto loc_833C0E30;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r31,31
	ctx.r31.s64 = 31;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r30,r11,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833c0e3c
	goto loc_833C0E3C;
loc_833C0E30:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_833C0E3C:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c0e4c
	if (ctx.cr6.eq) goto loc_833C0E4C;
	// subfic r23,r23,-20
	ctx.xer.ca = ctx.r23.u32 <= 4294967276;
	ctx.r23.s64 = -20 - ctx.r23.s64;
loc_833C0E4C:
	// addi r11,r5,64
	ctx.r11.s64 = ctx.r5.s64 + 64;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x833c0ea0
	if (ctx.cr6.lt) goto loc_833C0EA0;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// addi r9,r5,80
	ctx.r9.s64 = ctx.r5.s64 + 80;
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r27,r9,r28
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// srw r9,r30,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x833c0f08
	goto loc_833C0F08;
loc_833C0EA0:
	// cmplw cr6,r29,r6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x833c0fcc
	if (!ctx.cr6.lt) goto loc_833C0FCC;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// addi r9,r5,80
	ctx.r9.s64 = ctx.r5.s64 + 80;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// slw r7,r8,r31
	ctx.r7.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r31.u8 & 0x3F));
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// or r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 | ctx.r30.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// clrlwi r7,r11,28
	ctx.r7.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// lbzx r27,r11,r28
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// subf r11,r9,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r9.s64;
	// blt cr6,0x833c0ef8
	if (ctx.cr6.lt) goto loc_833C0EF8;
	// srw r9,r30,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r9.u8 & 0x3F));
	// b 0x833c0f08
	goto loc_833C0F08;
loc_833C0EF8:
	// subf r7,r31,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r31.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// srw r9,r8,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
loc_833C0F08:
	// subfic r8,r26,32
	ctx.xer.ca = ctx.r26.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r26.s64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// srw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// blt cr6,0x833c0f3c
	if (ctx.cr6.lt) goto loc_833C0F3C;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// lbzx r8,r8,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r25.u32);
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbzx r4,r7,r24
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r24.u32);
	// srw r30,r9,r8
	ctx.r30.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// b 0x833c0f84
	goto loc_833C0F84;
loc_833C0F3C:
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// slw r4,r7,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// or r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 | ctx.r9.u64;
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// lbzx r8,r8,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r25.u32);
	// clrlwi r4,r8,28
	ctx.r4.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lbzx r4,r4,r24
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r24.u32);
	// blt cr6,0x833c0f70
	if (ctx.cr6.lt) goto loc_833C0F70;
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srw r30,r9,r8
	ctx.r30.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// b 0x833c0f84
	goto loc_833C0F84;
loc_833C0F70:
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// srw r30,r7,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
loc_833C0F84:
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stb r11,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r11.u8);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// bgt cr6,0x833c0e4c
	if (ctx.cr6.gt) goto loc_833C0E4C;
	// cmpwi cr6,r23,-22
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -22, ctx.xer);
	// bge cr6,0x833c0fb4
	if (!ctx.cr6.lt) goto loc_833C0FB4;
	// subfic r5,r23,-21
	ctx.xer.ca = ctx.r23.u32 <= 4294967275;
	ctx.r5.s64 = -21 - ctx.r23.s64;
	// lbz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x833C0FB4;
	sub_82CB16F0(ctx, base);
loc_833C0FB4:
	// stw r27,384(r28)
	PPC_STORE_U32(ctx.r28.u32 + 384, ctx.r27.u32);
	// stw r29,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r29.u32);
	// stw r30,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r30.u32);
	// stw r31,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r31.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_833C0FCC:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r29,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r29.u32);
	// stw r30,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r30.u32);
	// stw r31,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r31.u32);
loc_833C0FE8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C0FF0"))) PPC_WEAK_FUNC(sub_833C0FF0);
PPC_FUNC_IMPL(__imp__sub_833C0FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x833C0FF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x833c1218
	if (!ctx.cr6.eq) goto loc_833C1218;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x833c1060
	if (!ctx.cr6.lt) goto loc_833C1060;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// srw r6,r9,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// or r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 | ctx.r7.u64;
	// srw r30,r8,r4
	ctx.r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r4.u8 & 0x3F));
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// b 0x833c1074
	goto loc_833C1074;
loc_833C1060:
	// subfic r8,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r11.s64;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srw r30,r7,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// srw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// and r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 & ctx.r7.u64;
loc_833C1074:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x833c11fc
	if (ctx.cr6.eq) goto loc_833C11FC;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x833c11fc
	if (ctx.cr6.gt) goto loc_833C11FC;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// bne cr6,0x833c10b4
	if (!ctx.cr6.eq) goto loc_833C10B4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r31,31
	ctx.r31.s64 = 31;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r30,r10,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833c10c0
	goto loc_833C10C0;
loc_833C10B4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_833C10C0:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x833c1190
	if (!ctx.cr6.eq) goto loc_833C1190;
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// lwz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
loc_833C10D8:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x833c1114
	if (ctx.cr6.lt) goto loc_833C1114;
	// subfic r10,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r7.s64;
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// lbzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// lbzx r8,r8,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x833c1174
	goto loc_833C1174;
loc_833C1114:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x833c11fc
	if (!ctx.cr6.lt) goto loc_833C11FC;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r10,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r7.s64;
	// slw r26,r8,r31
	ctx.r26.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r31.u8 & 0x3F));
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// or r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 | ctx.r30.u64;
	// and r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 & ctx.r26.u64;
	// lbzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// clrlwi r26,r10,28
	ctx.r26.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// lbzx r26,r26,r4
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r4.u32);
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x833c1160
	if (ctx.cr6.lt) goto loc_833C1160;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x833c1174
	goto loc_833C1174;
loc_833C1160:
	// subf r30,r31,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r10,32
	ctx.r31.s64 = ctx.r10.s64 + 32;
	// srw r30,r8,r30
	ctx.r30.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r30.u8 & 0x3F));
loc_833C1174:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x833c10d8
	if (!ctx.cr6.eq) goto loc_833C10D8;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833C1190:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bge cr6,0x833c11d4
	if (!ctx.cr6.lt) goto loc_833C11D4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r9,r31,4
	ctx.xer.ca = ctx.r31.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r31.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// slw r8,r10,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// or r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 | ctx.r30.u64;
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r4,r8,28
	ctx.r4.u64 = ctx.r8.u32 & 0xF;
	// bl 0x82cb16f0
	ctx.lr = 0x833C11C0;
	sub_82CB16F0(ctx, base);
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833C11D4:
	// clrlwi r4,r30,28
	ctx.r4.u64 = ctx.r30.u32 & 0xF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r30,r30,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bl 0x82cb16f0
	ctx.lr = 0x833C11E8;
	sub_82CB16F0(ctx, base);
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833C11FC:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
loc_833C1218:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C1220"))) PPC_WEAK_FUNC(sub_833C1220);
PPC_FUNC_IMPL(__imp__sub_833C1220) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x833C1228;
	__savegprlr_25(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x833c140c
	if (!ctx.cr6.eq) goto loc_833C140C;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x833c1284
	if (!ctx.cr6.lt) goto loc_833C1284;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subfic r7,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r10.s64;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// slw r30,r9,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// or r10,r30,r8
	ctx.r10.u64 = ctx.r30.u64 | ctx.r8.u64;
	// srw r7,r29,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r7.u8 & 0x3F));
	// and r26,r7,r10
	ctx.r26.u64 = ctx.r7.u64 & ctx.r10.u64;
	// srw r10,r9,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r31.u8 & 0x3F));
	// b 0x833c1298
	goto loc_833C1298;
loc_833C1284:
	// subfic r9,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r10.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r9.u8 & 0x3F));
	// and r26,r9,r8
	ctx.r26.u64 = ctx.r9.u64 & ctx.r8.u64;
loc_833C1298:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x833c13f0
	if (ctx.cr6.eq) goto loc_833C13F0;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x833c13f0
	if (ctx.cr6.gt) goto loc_833C13F0;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// lwz r28,32(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 + ctx.r26.u64;
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
loc_833C12CC:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x833c1300
	if (ctx.cr6.lt) goto loc_833C1300;
	// subfic r9,r28,32
	ctx.xer.ca = ctx.r28.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r28.s64;
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r9.u8 & 0x3F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// lbzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbzx r27,r7,r31
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// b 0x833c1358
	goto loc_833C1358;
loc_833C1300:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x833c13f0
	if (!ctx.cr6.lt) goto loc_833C13F0;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subfic r9,r28,32
	ctx.xer.ca = ctx.r28.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r28.s64;
	// slw r8,r7,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r9.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// lbzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// clrlwi r27,r8,28
	ctx.r27.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lbzx r27,r27,r31
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// blt cr6,0x833c1344
	if (ctx.cr6.lt) goto loc_833C1344;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// b 0x833c1358
	goto loc_833C1358;
loc_833C1344:
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// srw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
loc_833C1358:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x833c1380
	if (ctx.cr6.lt) goto loc_833C1380;
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// lbzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lbzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// b 0x833c13c8
	goto loc_833C13C8;
loc_833C1380:
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// slw r7,r8,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// lbzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// clrlwi r7,r9,28
	ctx.r7.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lbzx r7,r7,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// blt cr6,0x833c13b4
	if (ctx.cr6.lt) goto loc_833C13B4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// b 0x833c13c8
	goto loc_833C13C8;
loc_833C13B4:
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
loc_833C13C8:
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// or r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 | ctx.r27.u64;
	// stb r9,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r9.u8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// bne cr6,0x833c12cc
	if (!ctx.cr6.eq) goto loc_833C12CC;
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_833C13F0:
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_833C140C:
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C1410"))) PPC_WEAK_FUNC(sub_833C1410);
PPC_FUNC_IMPL(__imp__sub_833C1410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x833C1418;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x833c169c
	if (!ctx.cr6.eq) goto loc_833C169C;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x833c1480
	if (!ctx.cr6.lt) goto loc_833C1480;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// srw r6,r9,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// or r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 | ctx.r7.u64;
	// srw r30,r8,r4
	ctx.r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r4.u8 & 0x3F));
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// b 0x833c1494
	goto loc_833C1494;
loc_833C1480:
	// subfic r8,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r11.s64;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srw r30,r7,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// srw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// and r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 & ctx.r7.u64;
loc_833C1494:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x833c1680
	if (ctx.cr6.eq) goto loc_833C1680;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x833c1680
	if (ctx.cr6.gt) goto loc_833C1680;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne cr6,0x833c14d4
	if (!ctx.cr6.eq) goto loc_833C14D4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r31,31
	ctx.r31.s64 = 31;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r30,r11,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833c14e0
	goto loc_833C14E0;
loc_833C14D4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_833C14E0:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833c15ec
	if (!ctx.cr6.eq) goto loc_833C15EC;
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lwz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
loc_833C14FC:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x833c1530
	if (ctx.cr6.lt) goto loc_833C1530;
	// subfic r11,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r7.s64;
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// lbzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// lbzx r8,r10,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// b 0x833c1588
	goto loc_833C1588;
loc_833C1530:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x833c1680
	if (!ctx.cr6.lt) goto loc_833C1680;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r11,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r7.s64;
	// slw r8,r10,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 | ctx.r30.u64;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// lbzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// lbzx r8,r8,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// blt cr6,0x833c1574
	if (ctx.cr6.lt) goto loc_833C1574;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// b 0x833c1588
	goto loc_833C1588;
loc_833C1574:
	// subf r30,r31,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// srw r30,r10,r30
	ctx.r30.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r30.u8 & 0x3F));
loc_833C1588:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x833c15c8
	if (ctx.cr6.eq) goto loc_833C15C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x833c15ac
	if (!ctx.cr6.eq) goto loc_833C15AC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r31,31
	ctx.r31.s64 = 31;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r30,r11,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833c15b8
	goto loc_833C15B8;
loc_833C15AC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_833C15B8:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c15c8
	if (ctx.cr6.eq) goto loc_833C15C8;
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
loc_833C15C8:
	// stb r8,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r8.u8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bne cr6,0x833c14fc
	if (!ctx.cr6.eq) goto loc_833C14FC;
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833C15EC:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bge cr6,0x833c1618
	if (!ctx.cr6.lt) goto loc_833C1618;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r9,r31,4
	ctx.xer.ca = ctx.r31.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r31.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// slw r8,r11,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// or r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 | ctx.r30.u64;
	// srw r30,r11,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r4,r8,28
	ctx.r4.u64 = ctx.r8.u32 & 0xF;
	// b 0x833c1624
	goto loc_833C1624;
loc_833C1618:
	// clrlwi r4,r30,28
	ctx.r4.u64 = ctx.r30.u32 & 0xF;
	// rlwinm r30,r30,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
loc_833C1624:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x833c1664
	if (ctx.cr6.eq) goto loc_833C1664;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x833c1648
	if (!ctx.cr6.eq) goto loc_833C1648;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r31,31
	ctx.r31.s64 = 31;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r30,r11,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833c1654
	goto loc_833C1654;
loc_833C1648:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_833C1654:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c1664
	if (ctx.cr6.eq) goto loc_833C1664;
	// neg r4,r4
	ctx.r4.s64 = -ctx.r4.s64;
loc_833C1664:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x833C166C;
	sub_82CB16F0(ctx, base);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833C1680:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
loc_833C169C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C16A4"))) PPC_WEAK_FUNC(sub_833C16A4);
PPC_FUNC_IMPL(__imp__sub_833C16A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C16A8"))) PPC_WEAK_FUNC(sub_833C16A8);
PPC_FUNC_IMPL(__imp__sub_833C16A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x833C16B0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x833c19c8
	if (!ctx.cr6.eq) goto loc_833C19C8;
	// lwz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// li r25,-1
	ctx.r25.s64 = -1;
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r8,0(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r29,4(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x833c171c
	if (!ctx.cr6.lt) goto loc_833C171C;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// srw r7,r25,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r7.u8 & 0x3F));
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// srw r30,r9,r6
	ctx.r30.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// and r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 & ctx.r11.u64;
	// b 0x833c1730
	goto loc_833C1730;
loc_833C171C:
	// subfic r9,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r11.s64;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srw r30,r8,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// srw r10,r25,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r9.u8 & 0x3F));
	// and r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ctx.r8.u64;
loc_833C1730:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x833c19ac
	if (ctx.cr6.eq) goto loc_833C19AC;
	// lwz r11,44(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 44);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x833c19ac
	if (ctx.cr6.gt) goto loc_833C19AC;
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r8,48(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// beq cr6,0x833c17f8
	if (ctx.cr6.eq) goto loc_833C17F8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x833c179c
	if (!ctx.cr6.lt) goto loc_833C179C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r6,r11,33
	ctx.xer.ca = ctx.r11.u32 <= 33;
	ctx.r6.s64 = 33 - ctx.r11.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// slw r5,r10,r31
	ctx.r5.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r11,33
	ctx.r31.s64 = ctx.r11.s64 + 33;
	// or r11,r5,r30
	ctx.r11.u64 = ctx.r5.u64 | ctx.r30.u64;
	// srw r6,r25,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r6.u8 & 0x3F));
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// and r26,r6,r11
	ctx.r26.u64 = ctx.r6.u64 & ctx.r11.u64;
	// b 0x833c17b4
	goto loc_833C17B4;
loc_833C179C:
	// subfic r9,r11,33
	ctx.xer.ca = ctx.r11.u32 <= 33;
	ctx.r9.s64 = 33 - ctx.r11.s64;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// srw r11,r25,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r9.u8 & 0x3F));
	// and r26,r11,r30
	ctx.r26.u64 = ctx.r11.u64 & ctx.r30.u64;
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
loc_833C17B4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x833c1844
	if (ctx.cr6.eq) goto loc_833C1844;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x833c17d8
	if (!ctx.cr6.eq) goto loc_833C17D8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r31,31
	ctx.r31.s64 = 31;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r30,r11,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833c17e4
	goto loc_833C17E4;
loc_833C17D8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_833C17E4:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c1844
	if (ctx.cr6.eq) goto loc_833C1844;
	// neg r26,r26
	ctx.r26.s64 = -ctx.r26.s64;
	// b 0x833c1844
	goto loc_833C1844;
loc_833C17F8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x833c1830
	if (!ctx.cr6.lt) goto loc_833C1830;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r9,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r11.s64;
	// subf r6,r31,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// slw r5,r10,r31
	ctx.r5.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// or r11,r5,r30
	ctx.r11.u64 = ctx.r5.u64 | ctx.r30.u64;
	// srw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r30,r10,r6
	ctx.r30.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// and r26,r9,r11
	ctx.r26.u64 = ctx.r9.u64 & ctx.r11.u64;
	// b 0x833c1844
	goto loc_833C1844;
loc_833C1830:
	// subfic r10,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r11.s64;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srw r10,r25,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r10.u8 & 0x3F));
	// and r26,r10,r30
	ctx.r26.u64 = ctx.r10.u64 & ctx.r30.u64;
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
loc_833C1844:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r8.u32);
	// clrlwi r28,r26,16
	ctx.r28.u64 = ctx.r26.u32 & 0xFFFF;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r23,r7,-1
	ctx.r23.s64 = ctx.r7.s64 + -1;
	// addi r27,r8,2
	ctx.r27.s64 = ctx.r8.s64 + 2;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// sth r28,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r28.u16);
	// stw r11,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r11.u32);
	// beq cr6,0x833c19bc
	if (ctx.cr6.eq) goto loc_833C19BC;
loc_833C186C:
	// cmplwi cr6,r23,8
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 8, ctx.xer);
	// li r24,8
	ctx.r24.s64 = 8;
	// bgt cr6,0x833c187c
	if (ctx.cr6.gt) goto loc_833C187C;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_833C187C:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bge cr6,0x833c18b0
	if (!ctx.cr6.lt) goto loc_833C18B0;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x833c19ac
	if (!ctx.cr6.lt) goto loc_833C19AC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r9,r31,4
	ctx.xer.ca = ctx.r31.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r31.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// slw r10,r11,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | ctx.r30.u64;
	// srw r30,r11,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// b 0x833c18bc
	goto loc_833C18BC;
loc_833C18B0:
	// clrlwi r10,r30,28
	ctx.r10.u64 = ctx.r30.u32 & 0xF;
	// rlwinm r30,r30,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
loc_833C18BC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833c1974
	if (ctx.cr6.eq) goto loc_833C1974;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x833c198c
	if (ctx.cr6.eq) goto loc_833C198C;
	// subfic r11,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r10.s64;
	// srw r8,r25,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r11.u8 & 0x3F));
loc_833C18D8:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x833c190c
	if (!ctx.cr6.lt) goto loc_833C190C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r6,r31,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subf r9,r10,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// slw r5,r11,r31
	ctx.r5.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r9,32
	ctx.r31.s64 = ctx.r9.s64 + 32;
	// or r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 | ctx.r30.u64;
	// srw r30,r11,r6
	ctx.r30.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// b 0x833c1918
	goto loc_833C1918;
loc_833C190C:
	// and r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 & ctx.r30.u64;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
loc_833C1918:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x833c1958
	if (ctx.cr6.eq) goto loc_833C1958;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x833c193c
	if (!ctx.cr6.eq) goto loc_833C193C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r31,31
	ctx.r31.s64 = 31;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r30,r11,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833c1948
	goto loc_833C1948;
loc_833C193C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_833C1948:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c1958
	if (ctx.cr6.eq) goto loc_833C1958;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_833C1958:
	// add r26,r9,r26
	ctx.r26.u64 = ctx.r9.u64 + ctx.r26.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// clrlwi r28,r26,16
	ctx.r28.u64 = ctx.r26.u32 & 0xFFFF;
	// sth r28,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r28.u16);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// bne cr6,0x833c18d8
	if (!ctx.cr6.eq) goto loc_833C18D8;
	// b 0x833c198c
	goto loc_833C198C;
loc_833C1974:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833ca570
	ctx.lr = 0x833C1984;
	sub_833CA570(ctx, base);
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_833C198C:
	// subf r23,r24,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r24.s64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x833c186c
	if (!ctx.cr6.eq) goto loc_833C186C;
	// stw r29,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r29.u32);
	// stw r30,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r30.u32);
	// stw r31,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r31.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_833C19AC:
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r11.u32);
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
loc_833C19BC:
	// stw r29,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r29.u32);
	// stw r30,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r30.u32);
	// stw r31,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r31.u32);
loc_833C19C8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C19D0"))) PPC_WEAK_FUNC(sub_833C19D0);
PPC_FUNC_IMPL(__imp__sub_833C19D0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r4,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,515
	ctx.r11.s64 = ctx.r11.s64 + 515;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,1,3,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1027
	ctx.r10.s64 = ctx.r10.s64 + 1027;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r7,r11,3,3,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1FFFFFF8;
	// clrlwi r8,r11,3
	ctx.r8.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r11,r6,1,3,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1FFFFFFE;
	// addi r7,r7,515
	ctx.r7.s64 = ctx.r7.s64 + 515;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// addi r8,r8,515
	ctx.r8.s64 = ctx.r8.s64 + 515;
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// addi r11,r11,515
	ctx.r11.s64 = ctx.r11.s64 + 515;
	// addi r10,r10,515
	ctx.r10.s64 = ctx.r10.s64 + 515;
	// rlwinm r7,r7,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r8,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C1A5C"))) PPC_WEAK_FUNC(sub_833C1A5C);
PPC_FUNC_IMPL(__imp__sub_833C1A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C1A60"))) PPC_WEAK_FUNC(sub_833C1A60);
PPC_FUNC_IMPL(__imp__sub_833C1A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x833C1A68;
	__savegprlr_14(ctx, base);
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// lwz r21,1556(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1556);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r4,1500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1500, ctx.r4.u32);
	// addi r11,r16,-8
	ctx.r11.s64 = ctx.r16.s64 + -8;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// stw r16,1516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1516, ctx.r16.u32);
	// stw r30,1524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1524, ctx.r30.u32);
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// stw r17,1508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1508, ctx.r17.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// mr r14,r9
	ctx.r14.u64 = ctx.r9.u64;
	// lwz r9,1588(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r10,r17,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r17.s64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r14,1540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1540, ctx.r14.u32);
	// rlwinm r9,r9,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// beq cr6,0x833c1b08
	if (ctx.cr6.eq) goto loc_833C1B08;
	// lis r11,-31940
	ctx.r11.s64 = -2093219840;
	// addi r11,r11,2728
	ctx.r11.s64 = ctx.r11.s64 + 2728;
	// b 0x833c1b10
	goto loc_833C1B10;
loc_833C1B08:
	// lis r11,-31940
	ctx.r11.s64 = -2093219840;
	// addi r11,r11,3416
	ctx.r11.s64 = ctx.r11.s64 + 3416;
loc_833C1B10:
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// rlwinm r10,r17,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r11,1580(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1580);
	// rlwinm r6,r17,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xFFFFFFF;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r23,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r23.u32);
	// addi r20,r10,511
	ctx.r20.s64 = ctx.r10.s64 + 511;
	// stw r23,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r23.u32);
	// rlwinm r8,r10,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r23,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r23.u32);
	// clrlwi r20,r20,16
	ctx.r20.u64 = ctx.r20.u32 & 0xFFFF;
	// stw r23,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r23.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,511
	ctx.r8.s64 = ctx.r8.s64 + 511;
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cntlzw r20,r20
	ctx.r20.u64 = ctx.r20.u32 == 0 ? 32 : __builtin_clz(ctx.r20.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r18,r8,16
	ctx.r18.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// subfic r8,r20,32
	ctx.xer.ca = ctx.r20.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r20.s64;
	// stw r9,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r9.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r5,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r5.u32);
	// addi r5,r6,511
	ctx.r5.s64 = ctx.r6.s64 + 511;
	// stw r28,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r28.u32);
	// cntlzw r20,r18
	ctx.r20.u64 = ctx.r18.u32 == 0 ? 32 : __builtin_clz(ctx.r18.u32);
	// clrlwi r28,r5,16
	ctx.r28.u64 = ctx.r5.u32 & 0xFFFF;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r31,4
	ctx.r31.s64 = 4;
	// cntlzw r28,r28
	ctx.r28.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// stw r4,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r9,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r9.u32);
	// subfic r28,r28,32
	ctx.xer.ca = ctx.r28.u32 <= 32;
	ctx.r28.s64 = 32 - ctx.r28.s64;
	// stw r9,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r7.u32);
	// addi r4,r4,515
	ctx.r4.s64 = ctx.r4.s64 + 515;
	// stw r3,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r3.u32);
	// lwz r27,20(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r24,16
	ctx.r24.s64 = 16;
	// li r25,11
	ctx.r25.s64 = 11;
	// lwz r26,24(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r28,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r28.u32);
	// rlwinm r7,r9,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r3,r9,511
	ctx.r3.s64 = ctx.r9.s64 + 511;
	// stw r31,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r31.u32);
	// subfic r28,r20,32
	ctx.xer.ca = ctx.r20.u32 <= 32;
	ctx.r28.s64 = 32 - ctx.r20.s64;
	// stw r23,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r23.u32);
	// rlwinm r4,r4,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r31,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r31.u32);
	// addi r7,r7,515
	ctx.r7.s64 = ctx.r7.s64 + 515;
	// stw r23,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r23.u32);
	// rlwinm r5,r9,3,3,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1FFFFFF8;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// clrlwi r6,r9,3
	ctx.r6.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// stw r23,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r23.u32);
	// rlwinm r7,r7,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r23,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r23.u32);
	// addi r5,r5,515
	ctx.r5.s64 = ctx.r5.s64 + 515;
	// stw r23,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r23.u32);
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r23,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r23.u32);
	// addi r6,r6,515
	ctx.r6.s64 = ctx.r6.s64 + 515;
	// stw r23,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r23.u32);
	// stw r24,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r24.u32);
	// stw r23,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r23.u32);
	// stw r23,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r23.u32);
	// stw r24,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r24.u32);
	// stw r23,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r23.u32);
	// stw r23,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r23.u32);
	// stw r25,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r25.u32);
	// stw r23,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r23.u32);
	// stw r27,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r27.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stw r8,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r8.u32);
	// stw r4,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r4.u32);
	// rlwinm r6,r6,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r7,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r7.u32);
	// stw r7,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r7.u32);
	// rlwinm r5,r5,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r7,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r7.u32);
	// addi r4,r1,580
	ctx.r4.s64 = ctx.r1.s64 + 580;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r28,32(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r6,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r6.u32);
	// rlwinm r6,r10,1,3,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
	// stw r5,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// subfic r5,r3,32
	ctx.xer.ca = ctx.r3.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r3.s64;
	// addi r11,r6,1027
	ctx.r11.s64 = ctx.r6.s64 + 1027;
	// stw r8,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r8.u32);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r8.u32);
	// stw r8,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r8.u32);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r8,776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 776, ctx.r8.u32);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// stw r5,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r5.u32);
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r26,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r26.u32);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r23,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r23.u32);
	// addi r6,r6,511
	ctx.r6.s64 = ctx.r6.s64 + 511;
	// stw r23,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r23.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r25,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r25.u32);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r8,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r8.u32);
	// rlwinm r10,r10,1,3,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// addi r10,r10,515
	ctx.r10.s64 = ctx.r10.s64 + 515;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// stw r23,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r23.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r7,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r7.u32);
	// addi r6,r1,560
	ctx.r6.s64 = ctx.r1.s64 + 560;
	// stw r28,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r28.u32);
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// stw r11,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r11.u32);
	// stw r9,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// stw r10,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// bl 0x833bff18
	ctx.lr = 0x833C1D20;
	sub_833BFF18(ctx, base);
	// addi r6,r1,624
	ctx.r6.s64 = ctx.r1.s64 + 624;
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// addi r4,r1,644
	ctx.r4.s64 = ctx.r1.s64 + 644;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833bff18
	ctx.lr = 0x833C1D34;
	sub_833BFF18(ctx, base);
	// addi r31,r1,1248
	ctx.r31.s64 = ctx.r1.s64 + 1248;
	// addi r28,r1,928
	ctx.r28.s64 = ctx.r1.s64 + 928;
loc_833C1D3C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r31,-64
	ctx.r5.s64 = ctx.r31.s64 + -64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833bff18
	ctx.lr = 0x833C1D50;
	sub_833BFF18(ctx, base);
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x833c1d3c
	if (!ctx.cr6.eq) goto loc_833C1D3C;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833bff18
	ctx.lr = 0x833C1D78;
	sub_833BFF18(ctx, base);
	// addi r6,r1,496
	ctx.r6.s64 = ctx.r1.s64 + 496;
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// stw r23,1312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1312, ctx.r23.u32);
	// addi r4,r1,516
	ctx.r4.s64 = ctx.r1.s64 + 516;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833bff18
	ctx.lr = 0x833C1D90;
	sub_833BFF18(ctx, base);
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// addi r4,r1,388
	ctx.r4.s64 = ctx.r1.s64 + 388;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833bff18
	ctx.lr = 0x833C1DA4;
	sub_833BFF18(ctx, base);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,324
	ctx.r4.s64 = ctx.r1.s64 + 324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833bff18
	ctx.lr = 0x833C1DB8;
	sub_833BFF18(ctx, base);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,260
	ctx.r4.s64 = ctx.r1.s64 + 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833bff18
	ctx.lr = 0x833C1DCC;
	sub_833BFF18(ctx, base);
	// mr r15,r23
	ctx.r15.u64 = ctx.r23.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// beq cr6,0x833c3de4
	if (ctx.cr6.eq) goto loc_833C3DE4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r28,1572(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r27,1564(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1564);
	// li r18,1
	ctx.r18.s64 = 1;
	// addi r31,r11,-14856
	ctx.r31.s64 = ctx.r11.s64 + -14856;
	// lwz r25,204(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r11,r11,-6408
	ctx.r11.s64 = ctx.r11.s64 + -6408;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
loc_833C1E04:
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x833c07a0
	ctx.lr = 0x833C1E14;
	sub_833C07A0(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x833c07a0
	ctx.lr = 0x833C1E24;
	sub_833C07A0(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r1,928
	ctx.r5.s64 = ctx.r1.s64 + 928;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C1E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x833c1220
	ctx.lr = 0x833C1E50;
	sub_833C1220(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x833c1410
	ctx.lr = 0x833C1E5C;
	sub_833C1410(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x833c1410
	ctx.lr = 0x833C1E6C;
	sub_833C1410(ctx, base);
	// lwz r26,288(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r10,400(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// subf r11,r11,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r11.s64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// add r20,r11,r10
	ctx.r20.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r20,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r20.u32);
	// bl 0x833c16a8
	ctx.lr = 0x833C1E94;
	sub_833C16A8(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x833c16a8
	ctx.lr = 0x833C1EA4;
	sub_833C16A8(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x833c0ff0
	ctx.lr = 0x833C1EB4;
	sub_833C0FF0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r17,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x833c3d8c
	if (ctx.cr6.eq) goto loc_833C3D8C;
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r25,480(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// lwz r16,416(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// lwz r17,224(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
loc_833C1EDC:
	// lwz r9,292(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplw cr6,r3,r14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r14.u32, ctx.xer);
	// lwz r6,484(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r4,420(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r28,336(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r5,1500(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1500);
	// lwz r7,1516(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1516);
	// bge cr6,0x833c3d48
	if (!ctx.cr6.lt) goto loc_833C3D48;
	// lwz r10,548(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r8,544(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x833c3d48
	if (!ctx.cr6.lt) goto loc_833C3D48;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// stw r8,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r8.u32);
	// bgt cr6,0x833c3d48
	if (ctx.cr6.gt) goto loc_833C3D48;
	// lis r12,-31940
	ctx.r12.s64 = -2093219840;
	// addi r12,r12,7992
	ctx.r12.s64 = ctx.r12.s64 + 7992;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_833C1F60;
	case 1:
		goto loc_833C1FF0;
	case 2:
		goto loc_833C2DA0;
	case 3:
		goto loc_833C3198;
	case 4:
		goto loc_833C3364;
	case 5:
		goto loc_833C3434;
	case 6:
		goto loc_833C34E8;
	case 7:
		goto loc_833C3580;
	case 8:
		goto loc_833C369C;
	case 9:
		goto loc_833C3968;
	default:
		__builtin_unreachable();
	}
	// lwz r25,8032(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8032);
	// lwz r25,8176(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8176);
	// lwz r25,11680(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11680);
	// lwz r25,12696(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12696);
	// lwz r25,13156(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13156);
	// lwz r25,13364(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13364);
	// lwz r25,13544(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13544);
	// lwz r25,13696(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13696);
	// lwz r25,13980(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13980);
	// lwz r25,14696(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14696);
loc_833C1F60:
	// rlwinm r8,r22,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7FFFFFFF;
	// lfd f0,0(r19)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r19.u32 + 0);
	// add r10,r19,r30
	ctx.r10.u64 = ctx.r19.u64 + ctx.r30.u64;
	// stfd f0,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f0.u64);
	// add r9,r29,r30
	ctx.r9.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lbzx r8,r8,r21
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r21.u32);
	// lfd f0,0(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stfd f0,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f0.u64);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lfd f0,0(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stfd f0,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f0.u64);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lfd f0,0(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stfd f0,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.f0.u64);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfd f0,0(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stfd f0,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f0.u64);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lfd f0,0(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stfd f0,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f0.u64);
	// lfd f0,0(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stfd f0,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.f0.u64);
	// lfdx f0,r9,r30
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r30.u32);
	// stfdx f0,r8,r30
	PPC_STORE_U64(ctx.r8.u32 + ctx.r30.u32, ctx.f0.u64);
	// bne cr6,0x833c3d48
	if (!ctx.cr6.eq) goto loc_833C3D48;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// b 0x833c3d48
	goto loc_833C3D48;
loc_833C1FF0:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x833c3d48
	if (ctx.cr6.lt) goto loc_833C3D48;
	// rlwinm r10,r15,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x833c2d70
	if (!ctx.cr6.eq) goto loc_833C2D70;
	// lwz r10,612(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r9,608(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x833c2d70
	if (!ctx.cr6.lt) goto loc_833C2D70;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// stw r9,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r9.u32);
	// bgt cr6,0x833c2d70
	if (ctx.cr6.gt) goto loc_833C2D70;
	// lis r12,-31940
	ctx.r12.s64 = -2093219840;
	// addi r12,r12,8264
	ctx.r12.s64 = ctx.r12.s64 + 8264;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_833C2064;
	case 1:
		goto loc_833C2D70;
	case 2:
		goto loc_833C2410;
	case 3:
		goto loc_833C24C8;
	case 4:
		goto loc_833C2D70;
	case 5:
		goto loc_833C2648;
	case 6:
		goto loc_833C2A14;
	default:
		__builtin_unreachable();
	}
	// lwz r25,8292(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8292);
	// lwz r25,11632(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11632);
	// lwz r25,9232(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9232);
	// lwz r25,9416(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9416);
	// lwz r25,11632(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11632);
	// lwz r25,9800(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9800);
	// lwz r25,10772(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10772);
loc_833C2064:
	// subf r10,r15,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r15.s64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x833c3d48
	if (ctx.cr6.lt) goto loc_833C3D48;
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 4, ctx.xer);
	// bge cr6,0x833c209c
	if (!ctx.cr6.lt) goto loc_833C209C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r8,r24,4
	ctx.xer.ca = ctx.r24.u32 <= 4;
	ctx.r8.s64 = 4 - ctx.r24.s64;
	// addi r5,r24,28
	ctx.r5.s64 = ctx.r24.s64 + 28;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// slw r9,r10,r24
	ctx.r9.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r24.u8 & 0x3F));
	// srw r4,r10,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// or r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 | ctx.r27.u64;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// b 0x833c20a8
	goto loc_833C20A8;
loc_833C209C:
	// clrlwi r9,r27,28
	ctx.r9.u64 = ctx.r27.u32 & 0xF;
	// rlwinm r4,r27,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// addi r5,r24,-4
	ctx.r5.s64 = ctx.r24.s64 + -4;
loc_833C20A8:
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x833c20cc
	if (ctx.cr6.lt) goto loc_833C20CC;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_833C20CC:
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplw cr6,r17,r10
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x833c20e0
	if (ctx.cr6.lt) goto loc_833C20E0;
	// lwz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// addi r17,r10,4
	ctx.r17.s64 = ctx.r10.s64 + 4;
loc_833C20E0:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// li r6,64
	ctx.r6.s64 = 64;
loc_833C20E8:
	// lbz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + 0);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x833c21a0
	if (ctx.cr6.gt) goto loc_833C21A0;
	// subf r6,r10,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x833c211c
	if (!ctx.cr6.eq) goto loc_833C211C;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// rlwinm r4,r8,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833c2128
	goto loc_833C2128;
loc_833C211C:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// rlwinm r4,r4,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_833C2128:
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x833c2168
	if (ctx.cr6.eq) goto loc_833C2168;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x833c2198
	if (ctx.cr6.eq) goto loc_833C2198;
loc_833C2148:
	// lbzx r28,r9,r7
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// addi r27,r1,672
	ctx.r27.s64 = ctx.r1.s64 + 672;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stbx r8,r28,r27
	PPC_STORE_U8(ctx.r28.u32 + ctx.r27.u32, ctx.r8.u8);
	// bne cr6,0x833c2148
	if (!ctx.cr6.eq) goto loc_833C2148;
	// b 0x833c2198
	goto loc_833C2198;
loc_833C2168:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833c2198
	if (ctx.cr6.eq) goto loc_833C2198;
loc_833C2170:
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r27,r1,672
	ctx.r27.s64 = ctx.r1.s64 + 672;
	// lbzx r8,r9,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stbx r28,r8,r27
	PPC_STORE_U8(ctx.r8.u32 + ctx.r27.u32, ctx.r28.u8);
	// bne cr6,0x833c2170
	if (!ctx.cr6.eq) goto loc_833C2170;
loc_833C2198:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bgt cr6,0x833c20e8
	if (ctx.cr6.gt) goto loc_833C20E8;
loc_833C21A0:
	// stw r17,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r17.u32);
	// cmpwi cr6,r9,63
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 63, ctx.xer);
	// bne cr6,0x833c21c4
	if (!ctx.cr6.eq) goto loc_833C21C4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r8,r1,672
	ctx.r8.s64 = ctx.r1.s64 + 672;
	// lbz r9,63(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 63);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stbx r10,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
loc_833C21C4:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r10,r1,676
	ctx.r10.s64 = ctx.r1.s64 + 676;
	// li r6,2
	ctx.r6.s64 = 2;
loc_833C21D4:
	// lhz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// rlwinm r28,r7,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 | ctx.r7.u64;
	// rlwimi r7,r28,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lhz r7,-2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
	// rlwinm r28,r7,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r27,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r27.u32);
	// or r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 | ctx.r7.u64;
	// rlwimi r7,r28,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// rlwinm r28,r7,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r27,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r27.u32);
	// or r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 | ctx.r7.u64;
	// rlwimi r7,r28,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// stw r28,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r28.u32);
	// rlwinm r28,r7,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r27,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r27.u32);
	// or r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 | ctx.r7.u64;
	// rlwimi r7,r28,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lhz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// stw r28,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r28.u32);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r27,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r27.u32);
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwimi r7,r8,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lhz r7,6(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
	// rlwinm r28,r7,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r27,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r27.u32);
	// or r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 | ctx.r7.u64;
	// rlwimi r7,r28,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lhz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// rlwinm r28,r7,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r27,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r27.u32);
	// or r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 | ctx.r7.u64;
	// rlwimi r7,r28,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lhz r7,10(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// stw r28,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r28.u32);
	// rlwinm r28,r7,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r27,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r27.u32);
	// or r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 | ctx.r7.u64;
	// rlwimi r7,r28,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lhz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// stw r28,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r28.u32);
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r28,r8,r7
	ctx.r28.u64 = ctx.r8.u64 | ctx.r7.u64;
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwimi r7,r28,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lhz r7,14(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
	// rlwinm r28,r7,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r27,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r27.u32);
	// or r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 | ctx.r7.u64;
	// rlwimi r7,r28,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lhz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// rlwinm r28,r7,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r27,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r27.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// or r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 | ctx.r7.u64;
	// rlwimi r7,r28,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lhz r7,18(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// stw r28,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r28.u32);
	// rlwinm r28,r7,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r27,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r27.u32);
	// or r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 | ctx.r7.u64;
	// rlwimi r7,r28,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lhz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// stw r28,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r28.u32);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r27,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r27.u32);
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwimi r7,r8,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lhz r7,22(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 22);
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
	// rlwinm r28,r7,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r27,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r27.u32);
	// or r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 | ctx.r7.u64;
	// rlwimi r7,r28,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lhz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 24);
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// rlwinm r28,r7,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r27,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r27.u32);
	// or r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 | ctx.r7.u64;
	// rlwimi r7,r28,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lhz r7,26(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 26);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r28,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r28.u32);
	// rlwinm r28,r7,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r27,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r27.u32);
	// or r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 | ctx.r7.u64;
	// rlwimi r7,r28,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r7,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// bne cr6,0x833c21d4
	if (!ctx.cr6.eq) goto loc_833C21D4;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// b 0x833c2d70
	goto loc_833C2D70;
loc_833C2410:
	// subf r10,r15,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r15.s64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x833c3d48
	if (ctx.cr6.lt) goto loc_833C3D48;
	// cmplw cr6,r16,r4
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x833c242c
	if (ctx.cr6.lt) goto loc_833C242C;
	// lwz r11,464(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// addi r16,r11,4
	ctx.r16.s64 = ctx.r11.s64 + 4;
loc_833C242C:
	// lhz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r16.u32 + 0);
	// addi r16,r16,2
	ctx.r16.s64 = ctx.r16.s64 + 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// sth r11,800(r1)
	PPC_STORE_U16(ctx.r1.u32 + 800, ctx.r11.u16);
	// stw r16,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r16.u32);
	// bl 0x833cb040
	ctx.lr = 0x833C2448;
	sub_833CB040(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x833c248c
	if (!ctx.cr6.lt) goto loc_833C248C;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r8,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r8.s64 = 4 - ctx.r11.s64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// srw r11,r10,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x833c24a4
	goto loc_833C24A4;
loc_833C248C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_833C24A4:
	// addi r5,r1,800
	ctx.r5.s64 = ctx.r1.s64 + 800;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833caca0
	ctx.lr = 0x833C24B4;
	sub_833CACA0(ctx, base);
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x833c2d70
	goto loc_833C2D70;
loc_833C24C8:
	// subf r10,r15,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r15.s64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x833c3d48
	if (ctx.cr6.lt) goto loc_833C3D48;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x833c24ec
	if (ctx.cr6.lt) goto loc_833C24EC;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_833C24EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r29,r30
	ctx.r9.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// b 0x833c2d70
	goto loc_833C2D70;
loc_833C2648:
	// subf r10,r15,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r15.s64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x833c3d48
	if (ctx.cr6.lt) goto loc_833C3D48;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x833c266c
	if (ctx.cr6.lt) goto loc_833C266C;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_833C266C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r25,r6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r6.u32, ctx.xer);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// blt cr6,0x833c26b4
	if (ctx.cr6.lt) goto loc_833C26B4;
	// lwz r8,528(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// addi r25,r8,4
	ctx.r25.s64 = ctx.r8.s64 + 4;
loc_833C26B4:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// add r7,r29,r30
	ctx.r7.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
loc_833C26C0:
	// lbz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r23,r31,144
	ctx.r23.s64 = ctx.r31.s64 + 144;
	// rlwinm r28,r6,2,28,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// rlwinm r27,r6,0,28,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC;
	// addi r22,r31,128
	ctx.r22.s64 = ctx.r31.s64 + 128;
	// addi r21,r31,144
	ctx.r21.s64 = ctx.r31.s64 + 144;
	// addi r4,r25,1
	ctx.r4.s64 = ctx.r25.s64 + 1;
	// lwzx r3,r28,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// rlwinm r26,r6,30,28,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xC;
	// lwzx r28,r28,r23
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r23.u32);
	// rlwinm r25,r6,28,4,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFC;
	// addi r19,r31,144
	ctx.r19.s64 = ctx.r31.s64 + 144;
	// lwzx r23,r27,r22
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r22.u32);
	// addi r18,r31,128
	ctx.r18.s64 = ctx.r31.s64 + 128;
	// lwzx r27,r27,r21
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r21.u32);
	// and r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 & ctx.r9.u64;
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// and r28,r28,r10
	ctx.r28.u64 = ctx.r28.u64 & ctx.r10.u64;
	// addi r20,r31,128
	ctx.r20.s64 = ctx.r31.s64 + 128;
	// or r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 | ctx.r28.u64;
	// lwzx r3,r26,r19
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r19.u32);
	// and r21,r27,r10
	ctx.r21.u64 = ctx.r27.u64 & ctx.r10.u64;
	// lwzx r27,r25,r18
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r18.u32);
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
	// and r23,r23,r9
	ctx.r23.u64 = ctx.r23.u64 & ctx.r9.u64;
	// lwzx r22,r26,r20
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r20.u32);
	// addi r17,r31,144
	ctx.r17.s64 = ctx.r31.s64 + 144;
	// or r28,r23,r21
	ctx.r28.u64 = ctx.r23.u64 | ctx.r21.u64;
	// and r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 & ctx.r10.u64;
	// stw r19,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r19.u32);
	// and r22,r22,r9
	ctx.r22.u64 = ctx.r22.u64 & ctx.r9.u64;
	// stw r18,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r18.u32);
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
	// lwzx r26,r25,r17
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r17.u32);
	// or r28,r22,r3
	ctx.r28.u64 = ctx.r22.u64 | ctx.r3.u64;
	// and r25,r27,r9
	ctx.r25.u64 = ctx.r27.u64 & ctx.r9.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// and r20,r26,r10
	ctx.r20.u64 = ctx.r26.u64 & ctx.r10.u64;
	// stw r19,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r19.u32);
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// stw r18,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r18.u32);
	// or r28,r25,r20
	ctx.r28.u64 = ctx.r25.u64 | ctx.r20.u64;
	// rlwinm r27,r6,2,28,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// stw r3,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r3.u32);
	// addi r16,r31,128
	ctx.r16.s64 = ctx.r31.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r15,r31,144
	ctx.r15.s64 = ctx.r31.s64 + 144;
	// stw r22,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r22.u32);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// rlwinm r26,r6,0,28,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC;
	// lwzx r23,r27,r16
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r16.u32);
	// addi r14,r31,128
	ctx.r14.s64 = ctx.r31.s64 + 128;
	// stw r3,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r3.u32);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// lwzx r27,r27,r15
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r15.u32);
	// and r23,r23,r9
	ctx.r23.u64 = ctx.r23.u64 & ctx.r9.u64;
	// add r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stw r25,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r25.u32);
	// and r27,r27,r10
	ctx.r27.u64 = ctx.r27.u64 & ctx.r10.u64;
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lwzx r21,r26,r14
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r14.u32);
	// or r28,r23,r27
	ctx.r28.u64 = ctx.r23.u64 | ctx.r27.u64;
	// lwzx r3,r26,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r3.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// and r21,r21,r9
	ctx.r21.u64 = ctx.r21.u64 & ctx.r9.u64;
	// and r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 & ctx.r10.u64;
	// rlwinm r27,r6,28,4,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFC;
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// or r26,r21,r3
	ctx.r26.u64 = ctx.r21.u64 | ctx.r3.u64;
	// stw r28,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r28.u32);
	// rlwinm r28,r6,30,28,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xC;
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r25,r31,128
	ctx.r25.s64 = ctx.r31.s64 + 128;
	// addi r23,r31,144
	ctx.r23.s64 = ctx.r31.s64 + 144;
	// addi r22,r31,128
	ctx.r22.s64 = ctx.r31.s64 + 128;
	// addi r20,r31,144
	ctx.r20.s64 = ctx.r31.s64 + 144;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r21,r31,144
	ctx.r21.s64 = ctx.r31.s64 + 144;
	// lwzx r25,r28,r25
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r25.u32);
	// mr r15,r26
	ctx.r15.u64 = ctx.r26.u64;
	// lwzx r28,r28,r23
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r23.u32);
	// mr r14,r26
	ctx.r14.u64 = ctx.r26.u64;
	// lwzx r22,r27,r22
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r22.u32);
	// and r25,r25,r9
	ctx.r25.u64 = ctx.r25.u64 & ctx.r9.u64;
	// and r23,r28,r10
	ctx.r23.u64 = ctx.r28.u64 & ctx.r10.u64;
	// lwzx r27,r27,r20
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r20.u32);
	// rlwinm r28,r6,2,28,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// and r20,r27,r10
	ctx.r20.u64 = ctx.r27.u64 & ctx.r10.u64;
	// stw r15,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r15.u32);
	// or r27,r25,r23
	ctx.r27.u64 = ctx.r25.u64 | ctx.r23.u64;
	// stw r14,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r14.u32);
	// and r22,r22,r9
	ctx.r22.u64 = ctx.r22.u64 & ctx.r9.u64;
	// rlwinm r26,r6,0,28,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC;
	// lwzx r3,r28,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// addi r19,r31,128
	ctx.r19.s64 = ctx.r31.s64 + 128;
	// lwzx r28,r28,r21
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r21.u32);
	// addi r18,r31,144
	ctx.r18.s64 = ctx.r31.s64 + 144;
	// stw r27,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r27.u32);
	// and r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 & ctx.r9.u64;
	// and r23,r28,r10
	ctx.r23.u64 = ctx.r28.u64 & ctx.r10.u64;
	// stw r27,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r27.u32);
	// or r28,r22,r20
	ctx.r28.u64 = ctx.r22.u64 | ctx.r20.u64;
	// lwzx r21,r26,r19
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r19.u32);
	// rlwinm r25,r6,30,28,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xC;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwzx r26,r26,r18
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r18.u32);
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
	// or r28,r3,r23
	ctx.r28.u64 = ctx.r3.u64 | ctx.r23.u64;
	// and r22,r21,r9
	ctx.r22.u64 = ctx.r21.u64 & ctx.r9.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r27.u32);
	// add r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 + ctx.r30.u64;
	// and r26,r26,r10
	ctx.r26.u64 = ctx.r26.u64 & ctx.r10.u64;
	// stw r20,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r20.u32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// or r28,r22,r26
	ctx.r28.u64 = ctx.r22.u64 | ctx.r26.u64;
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r17,r31,128
	ctx.r17.s64 = ctx.r31.s64 + 128;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// addi r16,r31,144
	ctx.r16.s64 = ctx.r31.s64 + 144;
	// stw r27,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r27.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// rlwinm r27,r6,28,4,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFC;
	// lwzx r21,r25,r17
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r17.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r26,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r26.u32);
	// addi r26,r31,144
	ctx.r26.s64 = ctx.r31.s64 + 144;
	// lwzx r25,r25,r16
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r16.u32);
	// and r21,r21,r9
	ctx.r21.u64 = ctx.r21.u64 & ctx.r9.u64;
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r23,r31,128
	ctx.r23.s64 = ctx.r31.s64 + 128;
	// and r25,r25,r10
	ctx.r25.u64 = ctx.r25.u64 & ctx.r10.u64;
	// lwzx r3,r27,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r3.u32);
	// addi r22,r31,144
	ctx.r22.s64 = ctx.r31.s64 + 144;
	// or r28,r21,r25
	ctx.r28.u64 = ctx.r21.u64 | ctx.r25.u64;
	// lwzx r27,r27,r26
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// addi r25,r4,1
	ctx.r25.s64 = ctx.r4.s64 + 1;
	// rlwinm r4,r6,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// and r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 & ctx.r9.u64;
	// and r26,r27,r10
	ctx.r26.u64 = ctx.r27.u64 & ctx.r10.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stw r28,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r28.u32);
	// stw r28,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r28.u32);
	// or r26,r3,r26
	ctx.r26.u64 = ctx.r3.u64 | ctx.r26.u64;
	// lwzx r3,r4,r23
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r23.u32);
	// rlwinm r28,r6,0,28,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC;
	// rlwinm r27,r6,30,28,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xC;
	// lwzx r4,r4,r22
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r22.u32);
	// addi r21,r31,128
	ctx.r21.s64 = ctx.r31.s64 + 128;
	// addi r20,r31,144
	ctx.r20.s64 = ctx.r31.s64 + 144;
	// addi r19,r31,128
	ctx.r19.s64 = ctx.r31.s64 + 128;
	// addi r18,r31,144
	ctx.r18.s64 = ctx.r31.s64 + 144;
	// addi r17,r31,128
	ctx.r17.s64 = ctx.r31.s64 + 128;
	// addi r16,r31,144
	ctx.r16.s64 = ctx.r31.s64 + 144;
	// rlwinm r6,r6,28,4,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwzx r23,r28,r21
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r21.u32);
	// and r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 & ctx.r9.u64;
	// and r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 & ctx.r10.u64;
	// lwzx r28,r28,r20
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r20.u32);
	// lwzx r21,r6,r17
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r17.u32);
	// and r23,r23,r9
	ctx.r23.u64 = ctx.r23.u64 & ctx.r9.u64;
	// lwzx r22,r27,r19
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r19.u32);
	// or r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 | ctx.r4.u64;
	// lwzx r6,r6,r16
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r16.u32);
	// and r3,r28,r10
	ctx.r3.u64 = ctx.r28.u64 & ctx.r10.u64;
	// and r28,r22,r9
	ctx.r28.u64 = ctx.r22.u64 & ctx.r9.u64;
	// stw r26,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r26.u32);
	// and r22,r6,r10
	ctx.r22.u64 = ctx.r6.u64 & ctx.r10.u64;
	// lwzx r27,r27,r18
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r18.u32);
	// add r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stw r26,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r26.u32);
	// or r6,r23,r3
	ctx.r6.u64 = ctx.r23.u64 | ctx.r3.u64;
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// and r27,r27,r10
	ctx.r27.u64 = ctx.r27.u64 & ctx.r10.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// or r6,r28,r27
	ctx.r6.u64 = ctx.r28.u64 | ctx.r27.u64;
	// and r26,r21,r9
	ctx.r26.u64 = ctx.r21.u64 & ctx.r9.u64;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// or r6,r26,r22
	ctx.r6.u64 = ctx.r26.u64 | ctx.r22.u64;
	// stw r23,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r23.u32);
	// stw r4,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r4.u32);
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// stw r6,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r6.u32);
	// add r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stw r6,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// bne cr6,0x833c26c0
	if (!ctx.cr6.eq) goto loc_833C26C0;
	// lwz r16,416(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r17,224(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r18,1
	ctx.r18.s64 = 1;
	// lwz r20,352(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r26,288(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r15,100(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,120(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r19,108(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r21,124(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r25,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r25.u32);
	// b 0x833c2d70
	goto loc_833C2D70;
loc_833C2A14:
	// subf r10,r15,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r15.s64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x833c3d48
	if (ctx.cr6.lt) goto loc_833C3D48;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x833c2a44
	if (ctx.cr6.lt) goto loc_833C2A44;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_833C2A44:
	// clrlwi r7,r11,30
	ctx.r7.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x833c2b2c
	if (ctx.cr6.eq) goto loc_833C2B2C;
	// subf r4,r29,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r29.s64;
	// li r7,8
	ctx.r7.s64 = 8;
loc_833C2A58:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rotlwi r28,r6,8
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// or r28,r28,r6
	ctx.r28.u64 = ctx.r28.u64 | ctx.r6.u64;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r28,r28,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// or r28,r28,r5
	ctx.r28.u64 = ctx.r28.u64 | ctx.r5.u64;
	// rlwinm r28,r28,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r28,r5
	ctx.r5.u64 = ctx.r28.u64 | ctx.r5.u64;
	// rotlwi r28,r6,8
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// or r28,r28,r6
	ctx.r28.u64 = ctx.r28.u64 | ctx.r6.u64;
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r28,r28,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// stw r15,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r15.u32);
	// or r28,r28,r5
	ctx.r28.u64 = ctx.r28.u64 | ctx.r5.u64;
	// rotlwi r15,r6,8
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// rlwinm r28,r28,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// stw r14,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r14.u32);
	// or r15,r15,r6
	ctx.r15.u64 = ctx.r15.u64 | ctx.r6.u64;
	// lbz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// or r5,r28,r5
	ctx.r5.u64 = ctx.r28.u64 | ctx.r5.u64;
	// rotlwi r28,r6,8
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// rlwinm r15,r15,8,0,23
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 | ctx.r6.u64;
	// rlwinm r28,r6,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// or r5,r15,r6
	ctx.r5.u64 = ctx.r15.u64 | ctx.r6.u64;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// lbz r6,7(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// or r5,r28,r6
	ctx.r5.u64 = ctx.r28.u64 | ctx.r6.u64;
	// stw r15,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r15.u32);
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r6.u32);
	// bne cr6,0x833c2a58
	if (!ctx.cr6.eq) goto loc_833C2A58;
	// lwz r15,100(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x833c2d70
	goto loc_833C2D70;
loc_833C2B2C:
	// li r6,2
	ctx.r6.s64 = 2;
loc_833C2B30:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r4,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r4.u32);
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r4,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r4.u32);
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r4,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r4.u32);
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r4,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r4.u32);
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r4,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r4.u32);
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// stw r4,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r4.u32);
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne cr6,0x833c2b30
	if (!ctx.cr6.eq) goto loc_833C2B30;
loc_833C2D70:
	// lwz r9,1572(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// rlwinm r10,r22,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// add r22,r22,r9
	ctx.r22.u64 = ctx.r22.u64 + ctx.r9.u64;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r19,r19,8
	ctx.r19.s64 = ctx.r19.s64 + 8;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// stbx r18,r10,r21
	PPC_STORE_U8(ctx.r10.u32 + ctx.r21.u32, ctx.r18.u8);
	// rlwinm r10,r22,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stbx r18,r10,r21
	PPC_STORE_U8(ctx.r10.u32 + ctx.r21.u32, ctx.r18.u8);
	// b 0x833c3d48
	goto loc_833C3D48;
loc_833C2DA0:
	// rlwinm r10,r22,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// stbx r18,r10,r21
	PPC_STORE_U8(ctx.r10.u32 + ctx.r21.u32, ctx.r18.u8);
	// blt cr6,0x833c2dbc
	if (ctx.cr6.lt) goto loc_833C2DBC;
	// lwz r10,400(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// addi r26,r28,4
	ctx.r26.s64 = ctx.r28.s64 + 4;
	// addi r20,r10,4
	ctx.r20.s64 = ctx.r10.s64 + 4;
loc_833C2DBC:
	// lbz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lbz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// stw r26,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r26.u32);
	// stw r20,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r20.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r10,r19
	ctx.r8.u64 = ctx.r10.u64 + ctx.r19.u64;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x833c3d48
	if (ctx.cr6.lt) goto loc_833C3D48;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x833c3d48
	if (ctx.cr6.gt) goto loc_833C3D48;
	// or r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 | ctx.r29.u64;
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// clrlwi r6,r7,29
	ctx.r6.u64 = ctx.r7.u32 & 0x7;
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x833c2e80
	if (!ctx.cr6.eq) goto loc_833C2E80;
	// lfd f0,0(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lfd f13,0(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stfd f13,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f13.u64);
	// add r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stfd f0,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f0.u64);
	// lfd f0,0(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stfd f0,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f0.u64);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfd f0,0(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// add r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stfd f0,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.f0.u64);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lfd f0,0(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stfd f0,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f0.u64);
	// add r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lfd f0,0(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stfd f0,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f0.u64);
	// lfd f0,0(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stfd f0,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.f0.u64);
	// lfdx f0,r10,r30
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r30.u32);
	// stfdx f0,r8,r30
	PPC_STORE_U64(ctx.r8.u32 + ctx.r30.u32, ctx.f0.u64);
	// b 0x833c3d48
	goto loc_833C3D48;
loc_833C2E80:
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bne cr6,0x833c2f40
	if (!ctx.cr6.eq) goto loc_833C2F40;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// add r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r9,r7,r30
	ctx.r9.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stw r5,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r5.u32);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// add r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r9,r7,r30
	ctx.r9.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// add r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r9,r7,r30
	ctx.r9.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x833c3d48
	goto loc_833C3D48;
loc_833C2F40:
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r5,1(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r4,2(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// lbz r28,3(r8)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// lbz r26,4(r8)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// lbz r23,5(r8)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// lbz r22,6(r8)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// lbz r21,7(r8)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lbz r20,0(r9)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r19,1(r9)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r18,2(r9)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r17,3(r9)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r16,4(r9)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// lbz r15,5(r9)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r14,6(r9)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// lbz r9,7(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r6,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r6.u8);
	// stb r5,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r5.u8);
	// stb r4,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r4.u8);
	// stb r28,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r28.u8);
	// stb r9,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r9.u8);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stb r26,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r26.u8);
	// stb r23,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r23.u8);
	// stb r22,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r22.u8);
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r5,1(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r4,2(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// lbz r28,3(r8)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// lbz r26,4(r8)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// lbz r23,5(r8)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// lbz r22,6(r8)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// lbz r8,7(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// stb r20,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r20.u8);
	// stb r19,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r19.u8);
	// stb r18,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r18.u8);
	// stb r17,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r17.u8);
	// stb r16,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r16.u8);
	// stb r15,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r15.u8);
	// stb r14,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r14.u8);
	// add r10,r7,r30
	ctx.r10.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stb r6,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r5,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r5.u8);
	// stb r4,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r4.u8);
	// stb r28,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r28.u8);
	// stb r26,4(r7)
	PPC_STORE_U8(ctx.r7.u32 + 4, ctx.r26.u8);
	// stb r23,5(r7)
	PPC_STORE_U8(ctx.r7.u32 + 5, ctx.r23.u8);
	// stb r22,6(r7)
	PPC_STORE_U8(ctx.r7.u32 + 6, ctx.r22.u8);
	// stb r8,7(r7)
	PPC_STORE_U8(ctx.r7.u32 + 7, ctx.r8.u8);
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lbz r5,1(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r4,2(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r28,3(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r26,4(r9)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// lbz r23,5(r9)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r22,6(r9)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// lbz r9,7(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// lbz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// stb r4,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// stb r28,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r28.u8);
	// lbz r5,1(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// lbz r4,2(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// lbz r28,3(r7)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// stb r26,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r26.u8);
	// stb r9,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r9.u8);
	// add r9,r7,r30
	ctx.r9.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stb r23,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r23.u8);
	// stb r22,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r22.u8);
	// add r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stb r6,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// lbz r26,4(r7)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r7.u32 + 4);
	// lbz r6,5(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// stb r21,7(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7, ctx.r21.u8);
	// stb r5,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// stb r4,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r4.u8);
	// stb r28,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r28.u8);
	// lbz r5,6(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 6);
	// li r18,1
	ctx.r18.s64 = 1;
	// lbz r4,7(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + 7);
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stb r26,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r26.u8);
	// stb r6,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r6.u8);
	// lbz r28,0(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r5,6(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6, ctx.r5.u8);
	// stb r4,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r4.u8);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r6,1(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r5,2(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r4,3(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r26,4(r9)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// lbz r23,5(r9)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r22,6(r9)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// lbz r9,7(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
	// stb r26,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r26.u8);
	// stb r6,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
	// stb r5,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// stb r4,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r4.u8);
	// stb r23,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r23.u8);
	// stb r22,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r22.u8);
	// stb r9,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r9.u8);
	// add r10,r7,r30
	ctx.r10.u64 = ctx.r7.u64 + ctx.r30.u64;
	// lbz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lbz r5,1(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// lbz r4,2(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// lbz r28,3(r7)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// lbz r26,4(r7)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r7.u32 + 4);
	// lbz r23,5(r7)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// lbz r22,6(r7)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r7.u32 + 6);
	// lbz r7,7(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 7);
	// stb r6,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// stb r26,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r26.u8);
	// stb r5,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// stb r4,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r4.u8);
	// stb r28,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r28.u8);
	// stb r23,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r23.u8);
	// li r23,0
	ctx.r23.s64 = 0;
	// stb r22,6(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6, ctx.r22.u8);
	// stb r7,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r7.u8);
	// lbz r26,6(r10)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r28,5(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r10,7(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r26,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r26.u8);
	// lwz r21,124(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r19,108(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r22,120(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r15,100(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r26,288(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r20,352(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r17,224(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r16,416(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// stb r7,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// stb r6,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r6.u8);
	// stb r5,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r5.u8);
	// stb r4,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r4.u8);
	// stb r28,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r28.u8);
	// stb r10,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r10.u8);
	// b 0x833c3d48
	goto loc_833C3D48;
loc_833C3198:
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 4, ctx.xer);
	// bge cr6,0x833c31c4
	if (!ctx.cr6.lt) goto loc_833C31C4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r8,r24,4
	ctx.xer.ca = ctx.r24.u32 <= 4;
	ctx.r8.s64 = 4 - ctx.r24.s64;
	// addi r6,r24,28
	ctx.r6.s64 = ctx.r24.s64 + 28;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// slw r9,r10,r24
	ctx.r9.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r24.u8 & 0x3F));
	// srw r5,r10,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// or r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 | ctx.r27.u64;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// b 0x833c31d0
	goto loc_833C31D0;
loc_833C31C4:
	// clrlwi r9,r27,28
	ctx.r9.u64 = ctx.r27.u32 & 0xF;
	// rlwinm r5,r27,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// addi r6,r24,-4
	ctx.r6.s64 = ctx.r24.s64 + -4;
loc_833C31D0:
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x833c31f4
	if (ctx.cr6.lt) goto loc_833C31F4;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_833C31F4:
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplw cr6,r17,r10
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x833c3208
	if (ctx.cr6.lt) goto loc_833C3208;
	// lwz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// addi r17,r10,4
	ctx.r17.s64 = ctx.r10.s64 + 4;
loc_833C3208:
	// rlwinm r10,r22,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// stbx r18,r10,r21
	PPC_STORE_U8(ctx.r10.u32 + ctx.r21.u32, ctx.r18.u8);
loc_833C3218:
	// lbz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + 0);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x833c32d0
	if (ctx.cr6.gt) goto loc_833C32D0;
	// subf r4,r10,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x833c324c
	if (!ctx.cr6.eq) goto loc_833C324C;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,31
	ctx.r6.s64 = 31;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r8,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833c3258
	goto loc_833C3258;
loc_833C324C:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rlwinm r5,r5,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_833C3258:
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x833c3298
	if (ctx.cr6.eq) goto loc_833C3298;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x833c32c8
	if (ctx.cr6.eq) goto loc_833C32C8;
loc_833C3278:
	// lbzx r28,r9,r7
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// addi r27,r1,672
	ctx.r27.s64 = ctx.r1.s64 + 672;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stbx r8,r28,r27
	PPC_STORE_U8(ctx.r28.u32 + ctx.r27.u32, ctx.r8.u8);
	// bne cr6,0x833c3278
	if (!ctx.cr6.eq) goto loc_833C3278;
	// b 0x833c32c8
	goto loc_833C32C8;
loc_833C3298:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833c32c8
	if (ctx.cr6.eq) goto loc_833C32C8;
loc_833C32A0:
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r27,r1,672
	ctx.r27.s64 = ctx.r1.s64 + 672;
	// lbzx r8,r9,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stbx r28,r8,r27
	PPC_STORE_U8(ctx.r8.u32 + ctx.r27.u32, ctx.r28.u8);
	// bne cr6,0x833c32a0
	if (!ctx.cr6.eq) goto loc_833C32A0;
loc_833C32C8:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bgt cr6,0x833c3218
	if (ctx.cr6.gt) goto loc_833C3218;
loc_833C32D0:
	// stw r17,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r17.u32);
	// cmpwi cr6,r9,63
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 63, ctx.xer);
	// bne cr6,0x833c32f4
	if (!ctx.cr6.eq) goto loc_833C32F4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r8,r1,672
	ctx.r8.s64 = ctx.r1.s64 + 672;
	// lbz r9,63(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 63);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stbx r10,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
loc_833C32F4:
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lfd f0,680(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 680);
	// lfd f13,688(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 688);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfd f12,696(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 696);
	// lfd f11,704(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 704);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lfd f9,672(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 672);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stfd f0,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f0.u64);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lfd f10,712(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 712);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stfd f13,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f13.u64);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stfd f9,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f9.u64);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// lfd f9,720(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 720);
	// stfd f12,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f12.u64);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lfd f8,728(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 728);
	// stfd f11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f11.u64);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stfd f10,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f10.u64);
	// stfd f9,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f9.u64);
	// stfdx f8,r9,r30
	PPC_STORE_U64(ctx.r9.u32 + ctx.r30.u32, ctx.f8.u64);
	// b 0x833c3d48
	goto loc_833C3D48;
loc_833C3364:
	// rlwinm r10,r22,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// stbx r18,r10,r21
	PPC_STORE_U8(ctx.r10.u32 + ctx.r21.u32, ctx.r18.u8);
	// blt cr6,0x833c3380
	if (ctx.cr6.lt) goto loc_833C3380;
	// lwz r10,400(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// addi r26,r28,4
	ctx.r26.s64 = ctx.r28.s64 + 4;
	// addi r20,r10,4
	ctx.r20.s64 = ctx.r10.s64 + 4;
loc_833C3380:
	// lbz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lbz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// stw r26,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r26.u32);
	// stw r20,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r20.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r7,r10,r19
	ctx.r7.u64 = ctx.r10.u64 + ctx.r19.u64;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x833c3d48
	if (ctx.cr6.lt) goto loc_833C3D48;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x833c3d48
	if (ctx.cr6.gt) goto loc_833C3D48;
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 7, ctx.xer);
	// bge cr6,0x833c33f8
	if (!ctx.cr6.lt) goto loc_833C33F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r10,r24,7
	ctx.xer.ca = ctx.r24.u32 <= 7;
	ctx.r10.s64 = 7 - ctx.r24.s64;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// addi r8,r24,25
	ctx.r8.s64 = ctx.r24.s64 + 25;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// slw r9,r11,r24
	ctx.r9.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r24.u8 & 0x3F));
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// or r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 | ctx.r27.u64;
	// clrlwi r6,r9,25
	ctx.r6.u64 = ctx.r9.u32 & 0x7F;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x833c340c
	goto loc_833C340C;
loc_833C33F8:
	// rlwinm r11,r27,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi r6,r27,25
	ctx.r6.u64 = ctx.r27.u32 & 0x7F;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r24,-7
	ctx.r11.s64 = ctx.r24.s64 + -7;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_833C340C:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833cc048
	ctx.lr = 0x833C3420;
	sub_833CC048(ctx, base);
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x833c3d48
	goto loc_833C3D48;
loc_833C3434:
	// rlwinm r11,r22,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r16,r4
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r4.u32, ctx.xer);
	// stbx r18,r11,r21
	PPC_STORE_U8(ctx.r11.u32 + ctx.r21.u32, ctx.r18.u8);
	// blt cr6,0x833c344c
	if (ctx.cr6.lt) goto loc_833C344C;
	// lwz r11,464(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// addi r16,r11,4
	ctx.r16.s64 = ctx.r11.s64 + 4;
loc_833C344C:
	// lhz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r16.u32 + 0);
	// addi r16,r16,2
	ctx.r16.s64 = ctx.r16.s64 + 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// sth r11,800(r1)
	PPC_STORE_U16(ctx.r1.u32 + 800, ctx.r11.u16);
	// stw r16,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r16.u32);
	// bl 0x833cb040
	ctx.lr = 0x833C3468;
	sub_833CB040(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x833c34ac
	if (!ctx.cr6.lt) goto loc_833C34AC;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r8,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r8.s64 = 4 - ctx.r11.s64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// srw r11,r10,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x833c34c4
	goto loc_833C34C4;
loc_833C34AC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_833C34C4:
	// addi r5,r1,800
	ctx.r5.s64 = ctx.r1.s64 + 800;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833cac88
	ctx.lr = 0x833C34D4;
	sub_833CAC88(ctx, base);
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x833c3d48
	goto loc_833C3D48;
loc_833C34E8:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x833c3500
	if (ctx.cr6.lt) goto loc_833C3500;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_833C3500:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r22,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7FFFFFFF;
	// add r9,r29,r30
	ctx.r9.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stbx r18,r8,r21
	PPC_STORE_U8(ctx.r8.u32 + ctx.r21.u32, ctx.r18.u8);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x833c3d44
	goto loc_833C3D44;
loc_833C3580:
	// rlwinm r10,r22,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// stbx r18,r10,r21
	PPC_STORE_U8(ctx.r10.u32 + ctx.r21.u32, ctx.r18.u8);
	// blt cr6,0x833c359c
	if (ctx.cr6.lt) goto loc_833C359C;
	// lwz r10,400(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// addi r26,r28,4
	ctx.r26.s64 = ctx.r28.s64 + 4;
	// addi r20,r10,4
	ctx.r20.s64 = ctx.r10.s64 + 4;
loc_833C359C:
	// lbz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lbz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// stw r26,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r26.u32);
	// stw r20,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r20.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r28,r10,r19
	ctx.r28.u64 = ctx.r10.u64 + ctx.r19.u64;
	// lwz r10,1500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1500);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x833c3d48
	if (ctx.cr6.lt) goto loc_833C3D48;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x833c3d48
	if (ctx.cr6.gt) goto loc_833C3D48;
	// lwz r10,740(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// lwz r11,736(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x833c35f8
	if (ctx.cr6.lt) goto loc_833C35F8;
	// lwz r11,784(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_833C35F8:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// sth r10,800(r1)
	PPC_STORE_U16(ctx.r1.u32 + 800, ctx.r10.u16);
	// stw r11,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r11.u32);
	// bl 0x833cb040
	ctx.lr = 0x833C3614;
	sub_833CB040(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x833c3658
	if (!ctx.cr6.lt) goto loc_833C3658;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r8,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r8.s64 = 4 - ctx.r11.s64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// srw r11,r10,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x833c3670
	goto loc_833C3670;
loc_833C3658:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_833C3670:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,800
	ctx.r5.s64 = ctx.r1.s64 + 800;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833cacb8
	ctx.lr = 0x833C3688;
	sub_833CACB8(ctx, base);
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x833c3d48
	goto loc_833C3D48;
loc_833C369C:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x833c36b4
	if (ctx.cr6.lt) goto loc_833C36B4;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_833C36B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r22,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r25,r6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r6.u32, ctx.xer);
	// add r7,r29,r30
	ctx.r7.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r18,r8,r21
	PPC_STORE_U8(ctx.r8.u32 + ctx.r21.u32, ctx.r18.u8);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// rotlwi r6,r9,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// rlwinm r6,r9,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// blt cr6,0x833c3708
	if (ctx.cr6.lt) goto loc_833C3708;
	// lwz r8,528(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// addi r25,r8,4
	ctx.r25.s64 = ctx.r8.s64 + 4;
loc_833C3708:
	// lbz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// addi r28,r31,64
	ctx.r28.s64 = ctx.r31.s64 + 64;
	// addi r26,r31,64
	ctx.r26.s64 = ctx.r31.s64 + 64;
	// lbz r4,1(r25)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1);
	// rlwinm r5,r6,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r6,30,2,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r20,r31,64
	ctx.r20.s64 = ctx.r31.s64 + 64;
	// addi r19,r31,64
	ctx.r19.s64 = ctx.r31.s64 + 64;
	// addi r18,r31,64
	ctx.r18.s64 = ctx.r31.s64 + 64;
	// lwzx r28,r5,r28
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// addi r17,r31,64
	ctx.r17.s64 = ctx.r31.s64 + 64;
	// lwzx r26,r6,r26
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 + ctx.r30.u64;
	// lwzx r15,r5,r31
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// and r28,r28,r10
	ctx.r28.u64 = ctx.r28.u64 & ctx.r10.u64;
	// lwzx r14,r6,r31
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// and r26,r26,r10
	ctx.r26.u64 = ctx.r26.u64 & ctx.r10.u64;
	// and r15,r15,r9
	ctx.r15.u64 = ctx.r15.u64 & ctx.r9.u64;
	// and r14,r14,r9
	ctx.r14.u64 = ctx.r14.u64 & ctx.r9.u64;
	// or r28,r15,r28
	ctx.r28.u64 = ctx.r15.u64 | ctx.r28.u64;
	// or r26,r14,r26
	ctx.r26.u64 = ctx.r14.u64 | ctx.r26.u64;
	// rlwinm r5,r4,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r4,30,2,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// lbz r4,2(r25)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r25.u32 + 2);
	// addi r16,r31,64
	ctx.r16.s64 = ctx.r31.s64 + 64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r26,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
	// lwzx r26,r5,r20
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// lwzx r28,r5,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r5,r4,30,2,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r19,r6,r19
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r19.u32);
	// and r26,r26,r10
	ctx.r26.u64 = ctx.r26.u64 & ctx.r10.u64;
	// lwzx r20,r6,r31
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// and r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 & ctx.r9.u64;
	// and r19,r19,r10
	ctx.r19.u64 = ctx.r19.u64 & ctx.r10.u64;
	// and r20,r20,r9
	ctx.r20.u64 = ctx.r20.u64 & ctx.r9.u64;
	// or r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 | ctx.r26.u64;
	// or r26,r20,r19
	ctx.r26.u64 = ctx.r20.u64 | ctx.r19.u64;
	// lwzx r20,r5,r31
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r6,r4,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r5,r5,r17
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r17.u32);
	// and r20,r20,r9
	ctx.r20.u64 = ctx.r20.u64 & ctx.r9.u64;
	// lbz r4,3(r25)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r25.u32 + 3);
	// and r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 & ctx.r10.u64;
	// stw r28,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r28.u32);
	// addi r19,r31,64
	ctx.r19.s64 = ctx.r31.s64 + 64;
	// stw r26,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r26.u32);
	// or r5,r20,r5
	ctx.r5.u64 = ctx.r20.u64 | ctx.r5.u64;
	// lwzx r26,r6,r18
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r18.u32);
	// addi r20,r31,64
	ctx.r20.s64 = ctx.r31.s64 + 64;
	// lwzx r28,r6,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r6,r4,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// and r26,r26,r10
	ctx.r26.u64 = ctx.r26.u64 & ctx.r10.u64;
	// and r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 & ctx.r9.u64;
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// or r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 | ctx.r26.u64;
	// lwzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r18,r31,64
	ctx.r18.s64 = ctx.r31.s64 + 64;
	// addi r17,r31,64
	ctx.r17.s64 = ctx.r31.s64 + 64;
	// and r26,r5,r9
	ctx.r26.u64 = ctx.r5.u64 & ctx.r9.u64;
	// lbz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// add r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 + ctx.r30.u64;
	// lwzx r28,r6,r16
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r16.u32);
	// rlwinm r6,r4,30,2,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r16,r31,64
	ctx.r16.s64 = ctx.r31.s64 + 64;
	// and r4,r28,r10
	ctx.r4.u64 = ctx.r28.u64 & ctx.r10.u64;
	// addi r28,r31,64
	ctx.r28.s64 = ctx.r31.s64 + 64;
	// or r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 | ctx.r4.u64;
	// lwzx r20,r6,r20
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r20.u32);
	// addi r26,r31,64
	ctx.r26.s64 = ctx.r31.s64 + 64;
	// lwzx r15,r6,r31
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r6,r5,30,2,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFC;
	// and r20,r20,r10
	ctx.r20.u64 = ctx.r20.u64 & ctx.r10.u64;
	// and r15,r15,r9
	ctx.r15.u64 = ctx.r15.u64 & ctx.r9.u64;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// rlwinm r4,r5,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// or r20,r15,r20
	ctx.r20.u64 = ctx.r15.u64 | ctx.r20.u64;
	// lbz r5,5(r25)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// stw r20,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r20.u32);
	// lwzx r19,r4,r19
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r19.u32);
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lwzx r20,r4,r31
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r4,r5,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lwzx r18,r6,r18
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r18.u32);
	// and r19,r19,r10
	ctx.r19.u64 = ctx.r19.u64 & ctx.r10.u64;
	// lwzx r15,r6,r31
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// and r20,r20,r9
	ctx.r20.u64 = ctx.r20.u64 & ctx.r9.u64;
	// and r18,r18,r10
	ctx.r18.u64 = ctx.r18.u64 & ctx.r10.u64;
	// and r15,r15,r9
	ctx.r15.u64 = ctx.r15.u64 & ctx.r9.u64;
	// or r20,r20,r19
	ctx.r20.u64 = ctx.r20.u64 | ctx.r19.u64;
	// lwzx r28,r4,r28
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// or r19,r15,r18
	ctx.r19.u64 = ctx.r15.u64 | ctx.r18.u64;
	// lwz r15,100(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r6,r5,30,2,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFC;
	// lbz r5,6(r25)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r25.u32 + 6);
	// and r28,r28,r10
	ctx.r28.u64 = ctx.r28.u64 & ctx.r10.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r20,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r20.u32);
	// lwzx r20,r4,r31
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r4,r5,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// stw r19,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r19.u32);
	// add r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 + ctx.r30.u64;
	// lwzx r26,r6,r26
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// lwzx r19,r6,r31
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r6,r5,30,2,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFC;
	// and r5,r20,r9
	ctx.r5.u64 = ctx.r20.u64 & ctx.r9.u64;
	// and r26,r26,r10
	ctx.r26.u64 = ctx.r26.u64 & ctx.r10.u64;
	// or r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 | ctx.r28.u64;
	// and r20,r19,r9
	ctx.r20.u64 = ctx.r19.u64 & ctx.r9.u64;
	// lwz r19,108(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// or r28,r20,r26
	ctx.r28.u64 = ctx.r20.u64 | ctx.r26.u64;
	// lwz r20,352(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// addi r26,r31,64
	ctx.r26.s64 = ctx.r31.s64 + 64;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lwzx r5,r4,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// lwzx r4,r4,r17
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r17.u32);
	// stw r28,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r28.u32);
	// and r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 & ctx.r9.u64;
	// lwzx r28,r6,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// and r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 & ctx.r10.u64;
	// lwzx r6,r6,r16
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r16.u32);
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lwz r16,416(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// and r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 & ctx.r10.u64;
	// lwz r17,224(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// and r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 & ctx.r9.u64;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// or r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 | ctx.r6.u64;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// lbz r5,7(r25)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r25.u32 + 7);
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// rlwinm r8,r5,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r5,30,2,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r25,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r25.u32);
	// lwzx r5,r8,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r8,r8,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// lwzx r4,r6,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// and r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 & ctx.r9.u64;
	// lwzx r6,r6,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// and r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 & ctx.r9.u64;
	// lwz r26,288(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// and r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ctx.r10.u64;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// b 0x833c3d48
	goto loc_833C3D48;
loc_833C3968:
	// rlwinm r10,r22,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stbx r18,r10,r21
	PPC_STORE_U8(ctx.r10.u32 + ctx.r21.u32, ctx.r18.u8);
	// blt cr6,0x833c3988
	if (ctx.cr6.lt) goto loc_833C3988;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_833C3988:
	// or r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 | ctx.r29.u64;
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// clrlwi r8,r9,29
	ctx.r8.u64 = ctx.r9.u32 & 0x7;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x833c39f4
	if (!ctx.cr6.eq) goto loc_833C39F4;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// stfd f0,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f0.u64);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lfd f0,16(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lfd f13,24(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// lfd f12,32(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// stfd f0,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f0.u64);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfd f11,40(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// stfd f13,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f13.u64);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lfd f10,0(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f9,48(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// stfd f12,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f12.u64);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfd f8,56(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// stfd f11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f11.u64);
	// stfd f10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f10.u64);
	// stfd f9,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f9.u64);
	// stfdx f8,r9,r30
	PPC_STORE_U64(ctx.r9.u32 + ctx.r30.u32, ctx.f8.u64);
	// b 0x833c3d40
	goto loc_833C3D40;
loc_833C39F4:
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bne cr6,0x833c3a9c
	if (!ctx.cr6.eq) goto loc_833C3A9C;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwz r28,36(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r20,40(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r19,44(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r18,4(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r17,48(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r16,52(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r20,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// stw r19,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r19.u32);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwz r15,56(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r14,60(r11)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r18,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r18.u32);
	// stw r17,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r17.u32);
	// stw r16,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r16.u32);
	// stw r15,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r15.u32);
	// stw r14,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r14.u32);
	// b 0x833c3d28
	goto loc_833C3D28;
loc_833C3A9C:
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r6,11(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r4,13(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r3,14(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r31,15(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// stb r5,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r5.u8);
	// stb r4,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r4.u8);
	// stb r3,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r3.u8);
	// stb r31,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r31.u8);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,22(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r8,23(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// lbz r26,1(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// lbz r25,2(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r24,3(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r23,4(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r22,5(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r10,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// lbz r21,6(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r20,7(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// lbz r6,25(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// stb r10,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// lbz r5,26(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26);
	// lbz r4,27(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27);
	// lbz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// lbz r31,29(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r28,30(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30);
	// lbz r27,31(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31);
	// lbz r19,32(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// lbz r18,33(r11)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lbz r17,34(r11)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r11.u32 + 34);
	// lbz r16,35(r11)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r11.u32 + 35);
	// lbz r15,36(r11)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// lbz r14,37(r11)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// lbz r11,38(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stb r26,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r26.u8);
	// stb r25,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r25.u8);
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r30,1524(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1524);
	// lwz r29,188(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// stb r9,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stb r24,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r24.u8);
	// stb r23,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r23.u8);
	// stb r22,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r22.u8);
	// stb r21,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r21.u8);
	// stb r20,7(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7, ctx.r20.u8);
	// lbz r30,113(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// lbz r30,98(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// lbz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// stb r30,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r30.u8);
	// lbz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r30,1524(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1524);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stb r3,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r3.u8);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// stb r5,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
	// stb r4,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r4.u8);
	// stb r31,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r31.u8);
	// stb r28,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r28.u8);
	// stb r27,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r27.u8);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lbz r7,97(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// stb r19,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r19.u8);
	// stb r18,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r18.u8);
	// stb r17,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r17.u8);
	// lbz r8,39(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 39);
	// stb r7,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r7.u8);
	// lbz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// lbz r6,41(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// lbz r5,42(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 42);
	// stb r8,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r8.u8);
	// lbz r8,43(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 43);
	// lbz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// lbz r3,45(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// lbz r31,46(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lbz r28,47(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// stb r16,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r16.u8);
	// stb r15,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r15.u8);
	// stb r14,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r14.u8);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stb r3,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r3.u8);
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// stb r6,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r6.u8);
	// stb r5,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r5.u8);
	// stb r8,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r8.u8);
	// stb r4,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r4.u8);
	// stb r31,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r31.u8);
	// stb r28,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r28.u8);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r3,53(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// lbz r27,56(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// lbz r26,57(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// lbz r25,58(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 58);
	// lbz r24,59(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 59);
	// lbz r23,60(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 60);
	// lbz r22,61(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 61);
	// lbz r21,62(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 62);
	// lbz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r6,50(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// lbz r5,51(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// lbz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// lbz r31,54(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 54);
	// lbz r28,55(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 55);
	// lbz r20,63(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 63);
	// stb r3,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r3.u8);
	// stb r27,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r27.u8);
	// stb r26,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r26.u8);
	// stb r25,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r25.u8);
	// stb r24,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r24.u8);
	// stb r23,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r23.u8);
	// li r23,0
	ctx.r23.s64 = 0;
	// stb r22,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r22.u8);
	// stb r21,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r21.u8);
	// lwz r21,124(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r22,120(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,288(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r25,480(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// stb r4,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r4.u8);
	// stb r31,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r31.u8);
	// stb r28,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r28.u8);
	// stb r20,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r20.u8);
	// lwz r31,208(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
loc_833C3D28:
	// lwz r16,416(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// li r18,1
	ctx.r18.s64 = 1;
	// lwz r17,224(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r20,352(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r15,100(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r19,108(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_833C3D40:
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
loc_833C3D44:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_833C3D48:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r28,1572(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// addi r19,r19,8
	ctx.r19.s64 = ctx.r19.s64 + 8;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// lwz r14,1540(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1540);
	// add r22,r22,r28
	ctx.r22.u64 = ctx.r22.u64 + ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// bne cr6,0x833c1edc
	if (!ctx.cr6.eq) goto loc_833C1EDC;
	// lwz r27,1564(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1564);
	// lwz r17,1508(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1508);
	// lwz r16,1516(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1516);
	// lwz r25,204(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
loc_833C3D8C:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x833c3da0
	if (!ctx.cr6.eq) goto loc_833C3DA0;
	// rlwinm r11,r15,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c3da8
	if (ctx.cr6.eq) goto loc_833C3DA8;
loc_833C3DA0:
	// add r21,r21,r27
	ctx.r21.u64 = ctx.r21.u64 + ctx.r27.u64;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
loc_833C3DA8:
	// addi r15,r15,8
	ctx.r15.s64 = ctx.r15.s64 + 8;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r19,r19,r25
	ctx.r19.u64 = ctx.r19.u64 + ctx.r25.u64;
	// cmplw cr6,r15,r16
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r16.u32, ctx.xer);
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// blt cr6,0x833c1e04
	if (ctx.cr6.lt) goto loc_833C1E04;
	// lwz r11,1596(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1596);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_833C3DE4:
	// lwz r11,1596(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1596);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C3DFC"))) PPC_WEAK_FUNC(sub_833C3DFC);
PPC_FUNC_IMPL(__imp__sub_833C3DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C3E00"))) PPC_WEAK_FUNC(sub_833C3E00);
PPC_FUNC_IMPL(__imp__sub_833C3E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x833C3E08;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// xori r11,r30,1
	ctx.r11.u64 = ctx.r30.u64 ^ 1;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833c3e54
	if (ctx.cr6.eq) goto loc_833C3E54;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_833C3E54:
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// addi r27,r7,4
	ctx.r27.s64 = ctx.r7.s64 + 4;
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r19,1
	ctx.r19.s64 = 1;
	// rlwinm r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c3ee4
	if (ctx.cr6.eq) goto loc_833C3EE4;
	// rlwinm r11,r28,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c3edc
	if (ctx.cr6.eq) goto loc_833C3EDC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r7,r29,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// add r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 + ctx.r7.u64;
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r20,4
	ctx.r8.s64 = ctx.r20.s64 + 4;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,64(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r7,68(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x833c1a60
	ctx.lr = 0x833C3EDC;
	sub_833C1A60(ctx, base);
loc_833C3EDC:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r22,r11,r20
	ctx.r22.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_833C3EE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r21,r28,0,16,16
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// bne cr6,0x833c3efc
	if (!ctx.cr6.eq) goto loc_833C3EFC;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
loc_833C3EFC:
	// cmplw cr6,r22,r20
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x833c4048
	if (ctx.cr6.lt) goto loc_833C4048;
	// cmplw cr6,r22,r27
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x833c4048
	if (!ctx.cr6.lt) goto loc_833C4048;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r7,r30,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// add r30,r7,r31
	ctx.r30.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x833c1a60
	ctx.lr = 0x833C3F6C;
	sub_833C1A60(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x833c3f84
	if (!ctx.cr6.eq) goto loc_833C3F84;
	// lwz r11,-4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
loc_833C3F84:
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r28,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20000;
	// rlwinm r3,r10,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// bne cr6,0x833c4048
	if (!ctx.cr6.eq) goto loc_833C4048;
	// cmplw cr6,r8,r20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x833c4048
	if (ctx.cr6.lt) goto loc_833C4048;
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x833c4048
	if (!ctx.cr6.lt) goto loc_833C4048;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r22,2
	ctx.r22.s64 = 2;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x833c1a60
	ctx.lr = 0x833C3FEC;
	sub_833C1A60(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplw cr6,r8,r20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x833c4044
	if (ctx.cr6.lt) goto loc_833C4044;
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x833c4044
	if (!ctx.cr6.lt) goto loc_833C4044;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x833c1a60
	ctx.lr = 0x833C4044;
	sub_833C1A60(ctx, base);
loc_833C4044:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_833C4048:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C4050"))) PPC_WEAK_FUNC(sub_833C4050);
PPC_FUNC_IMPL(__imp__sub_833C4050) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_833C4068:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lwbrx r9,0,r11
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r9.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// bne cr6,0x833c4068
	if (!ctx.cr6.eq) goto loc_833C4068;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C4090"))) PPC_WEAK_FUNC(sub_833C4090);
PPC_FUNC_IMPL(__imp__sub_833C4090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x833C4098;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c40c0
	if (ctx.cr6.eq) goto loc_833C40C0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C40C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833C40C0:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x833c40f0
	if (ctx.cr6.eq) goto loc_833C40F0;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x833c40f0
	if (ctx.cr6.eq) goto loc_833C40F0;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82e651a8
	ctx.lr = 0x833C40EC;
	sub_82E651A8(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_833C40F0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82e654a8
	ctx.lr = 0x833C4108;
	sub_82E654A8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x833c411c
	if (ctx.cr6.eq) goto loc_833C411C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_833C411C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// blt cr6,0x833c4150
	if (ctx.cr6.lt) goto loc_833C4150;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
loc_833C4150:
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833c4170
	if (ctx.cr6.eq) goto loc_833C4170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x833C416C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_833C4170:
	// addi r10,r3,3
	ctx.r10.s64 = ctx.r3.s64 + 3;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x833c41ac
	if (ctx.cr6.eq) goto loc_833C41AC;
loc_833C4188:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwbrx r9,0,r11
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne cr6,0x833c4188
	if (!ctx.cr6.eq) goto loc_833C4188;
loc_833C41AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C41B4"))) PPC_WEAK_FUNC(sub_833C41B4);
PPC_FUNC_IMPL(__imp__sub_833C41B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C41B8"))) PPC_WEAK_FUNC(sub_833C41B8);
PPC_FUNC_IMPL(__imp__sub_833C41B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x833C41C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mulli r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 * 1000;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 / ctx.r10.u64;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x833bee70
	ctx.lr = 0x833C41E4;
	sub_833BEE70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x833c423c
	if (!ctx.cr6.gt) goto loc_833C423C;
loc_833C4208:
	// bl 0x833bee70
	ctx.lr = 0x833C420C;
	sub_833BEE70(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x833c4208
	if (ctx.cr6.lt) goto loc_833C4208;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x833c4208
	if (ctx.cr6.gt) goto loc_833C4208;
loc_833C423C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C4244"))) PPC_WEAK_FUNC(sub_833C4244);
PPC_FUNC_IMPL(__imp__sub_833C4244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C4248"))) PPC_WEAK_FUNC(sub_833C4248);
PPC_FUNC_IMPL(__imp__sub_833C4248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x833C4250;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// beq cr6,0x833c4294
	if (ctx.cr6.eq) goto loc_833C4294;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_833C4294:
	// bl 0x833bee70
	ctx.lr = 0x833C4298;
	sub_833BEE70(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// beq cr6,0x833c4380
	if (ctx.cr6.eq) goto loc_833C4380;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x833c4380
	if (ctx.cr6.eq) goto loc_833C4380;
	// li r23,1
	ctx.r23.s64 = 1;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// beq cr6,0x833c42d4
	if (ctx.cr6.eq) goto loc_833C42D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C42D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833C42D4:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x833c4344
	if (!ctx.cr6.gt) goto loc_833C4344;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x833c4344
	if (ctx.cr6.gt) goto loc_833C4344;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x833c4380
	if (!ctx.cr6.gt) goto loc_833C4380;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x833c4380
	goto loc_833C4380;
loc_833C4344:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82e651a8
	ctx.lr = 0x833C435C;
	sub_82E651A8(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r25,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r25.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_833C4380:
	// addi r26,r31,76
	ctx.r26.s64 = ctx.r31.s64 + 76;
loc_833C4384:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// beq cr6,0x833c449c
	if (ctx.cr6.eq) goto loc_833C449C;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x833c43a4
	if (!ctx.cr6.gt) goto loc_833C43A4;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_833C43A4:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// subf r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	// add r25,r30,r25
	ctx.r25.u64 = ctx.r30.u64 + ctx.r25.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r29,r10,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// bgt cr6,0x833c443c
	if (ctx.cr6.gt) goto loc_833C443C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb1160
	ctx.lr = 0x833C43E0;
	sub_82CB1160(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// neg r8,r29
	ctx.r8.s64 = -ctx.r29.s64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_833C43F8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r26
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r26.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r26
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r26.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x833c43f8
	if (!ctx.cr0.eq) goto loc_833C43F8;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
loc_833C4418:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x833c4418
	if (!ctx.cr0.eq) goto loc_833C4418;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x833c449c
	if (ctx.cr6.eq) goto loc_833C449C;
loc_833C443C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb1160
	ctx.lr = 0x833C444C;
	sub_82CB1160(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// neg r8,r30
	ctx.r8.s64 = -ctx.r30.s64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_833C4460:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r26
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r26.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r26
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r26.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x833c4460
	if (!ctx.cr0.eq) goto loc_833C4460;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
loc_833C4480:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x833c4480
	if (!ctx.cr0.eq) goto loc_833C4480;
loc_833C449C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x833c4568
	if (ctx.cr6.eq) goto loc_833C4568;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x833c44cc
	if (!ctx.cr6.eq) goto loc_833C44CC;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c4384
	if (ctx.cr6.eq) goto loc_833C4384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C44C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x833c4384
	goto loc_833C4384;
loc_833C44CC:
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x833bee70
	ctx.lr = 0x833C44D8;
	sub_833BEE70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// bl 0x82e654a8
	ctx.lr = 0x833C44F8;
	sub_82E654A8(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r4,r27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x833c450c
	if (!ctx.cr6.lt) goto loc_833C450C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_833C450C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r25,r4,r25
	ctx.r25.u64 = ctx.r4.u64 + ctx.r25.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c4550
	if (ctx.cr6.eq) goto loc_833C4550;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c41b8
	ctx.lr = 0x833C4550;
	sub_833C41B8(ctx, base);
loc_833C4550:
	// bl 0x833bee70
	ctx.lr = 0x833C4554;
	sub_833BEE70(ctx, base);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// b 0x833c4574
	goto loc_833C4574;
loc_833C4568:
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x833bee70
	ctx.lr = 0x833C4574;
	sub_833BEE70(ctx, base);
loc_833C4574:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r11,r24,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r24.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// blt cr6,0x833c45a4
	if (ctx.cr6.lt) goto loc_833C45A4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
loc_833C45A4:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addis r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x833c45c4
	if (!ctx.cr6.gt) goto loc_833C45C4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_833C45C4:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x833c45e4
	if (ctx.cr6.eq) goto loc_833C45E4;
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c45e4
	if (ctx.cr6.eq) goto loc_833C45E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C45E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833C45E4:
	// addi r10,r25,3
	ctx.r10.s64 = ctx.r25.s64 + 3;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x833c4620
	if (ctx.cr6.eq) goto loc_833C4620;
loc_833C45FC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwbrx r9,0,r11
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne cr6,0x833c45fc
	if (!ctx.cr6.eq) goto loc_833C45FC;
loc_833C4620:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C462C"))) PPC_WEAK_FUNC(sub_833C462C);
PPC_FUNC_IMPL(__imp__sub_833C462C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C4630"))) PPC_WEAK_FUNC(sub_833C4630);
PPC_FUNC_IMPL(__imp__sub_833C4630) {
	PPC_FUNC_PROLOGUE();
	// addis r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 131072;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// rlwinm r10,r10,0,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFE0000;
	// addi r3,r10,4096
	ctx.r3.s64 = ctx.r10.s64 + 4096;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C4658"))) PPC_WEAK_FUNC(sub_833C4658);
PPC_FUNC_IMPL(__imp__sub_833C4658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x833C4660;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c468c
	if (ctx.cr6.eq) goto loc_833C468C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C468C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833C468C:
	// addi r11,r30,4095
	ctx.r11.s64 = ctx.r30.s64 + 4095;
	// lwz r9,252(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// rlwinm r10,r29,0,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFE0000;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// stw r27,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r27.u32);
	// beq cr6,0x833c46dc
	if (ctx.cr6.eq) goto loc_833C46DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x833C46DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833C46DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C46E4"))) PPC_WEAK_FUNC(sub_833C46E4);
PPC_FUNC_IMPL(__imp__sub_833C46E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C46E8"))) PPC_WEAK_FUNC(sub_833C46E8);
PPC_FUNC_IMPL(__imp__sub_833C46E8) {
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
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c4710
	if (ctx.cr6.eq) goto loc_833C4710;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C4710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833C4710:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833c4724
	if (!ctx.cr6.eq) goto loc_833C4724;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82bea4e0
	ctx.lr = 0x833C4724;
	sub_82BEA4E0(ctx, base);
loc_833C4724:
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c473c
	if (ctx.cr6.eq) goto loc_833C473C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C473C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833C473C:
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

__attribute__((alias("__imp__sub_833C4750"))) PPC_WEAK_FUNC(sub_833C4750);
PPC_FUNC_IMPL(__imp__sub_833C4750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x833C4758;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r24,44(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c4784
	if (ctx.cr6.eq) goto loc_833C4784;
loc_833C4778:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_833C4784:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833c4778
	if (!ctx.cr6.eq) goto loc_833C4778;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c4994
	if (ctx.cr6.eq) goto loc_833C4994;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C47A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x833c4994
	if (ctx.cr6.eq) goto loc_833C4994;
	// addi r25,r31,100
	ctx.r25.s64 = ctx.r31.s64 + 100;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lis r28,2
	ctx.r28.s64 = 131072;
	// subf r29,r10,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x833c4964
	if (ctx.cr6.lt) goto loc_833C4964;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x833c4964
	if (ctx.cr6.eq) goto loc_833C4964;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x833c47e8
	if (!ctx.cr6.lt) goto loc_833C47E8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_833C47E8:
	// bl 0x833bee70
	ctx.lr = 0x833C47EC;
	sub_833BEE70(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi r11,r11,15
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFF;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x833c4808
	if (ctx.cr6.gt) goto loc_833C4808;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x833c4810
	if (!ctx.cr6.eq) goto loc_833C4810;
loc_833C4808:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x833c4824
	goto loc_833C4824;
loc_833C4810:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c4824
	if (ctx.cr6.eq) goto loc_833C4824;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_833C4824:
	// li r29,1
	ctx.r29.s64 = 1;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82e654a8
	ctx.lr = 0x833C484C;
	sub_82E654A8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x833c4860
	if (ctx.cr6.eq) goto loc_833C4860;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_833C4860:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x833c4970
	if (ctx.cr6.eq) goto loc_833C4970;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x833c48a4
	if (ctx.cr6.lt) goto loc_833C48A4;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_833C48A4:
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
loc_833C48A8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r25
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r25.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r25
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r25.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x833c48a8
	if (!ctx.cr0.eq) goto loc_833C48A8;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
loc_833C48CC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x833c48cc
	if (!ctx.cr0.eq) goto loc_833C48CC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x833c4900
	if (!ctx.cr6.gt) goto loc_833C4900;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_833C4900:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c491c
	if (ctx.cr6.eq) goto loc_833C491C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c41b8
	ctx.lr = 0x833C491C;
	sub_833C41B8(ctx, base);
loc_833C491C:
	// bl 0x833bee70
	ctx.lr = 0x833C4920;
	sub_833BEE70(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r26,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r26.s64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bne cr6,0x833c4954
	if (!ctx.cr6.eq) goto loc_833C4954;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x833c4954
	if (!ctx.cr6.eq) goto loc_833C4954;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x833c496c
	goto loc_833C496C;
loc_833C4954:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x833c496c
	goto loc_833C496C;
loc_833C4964:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_833C496C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_833C4970:
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c49b0
	if (ctx.cr6.eq) goto loc_833C49B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C4988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_833C4994:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c49ac
	if (ctx.cr6.eq) goto loc_833C49AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C49AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833C49AC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_833C49B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C49B8"))) PPC_WEAK_FUNC(sub_833C49B8);
PPC_FUNC_IMPL(__imp__sub_833C49B8) {
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
	// beq cr6,0x833c4a2c
	if (ctx.cr6.eq) goto loc_833C4A2C;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833c49ec
	if (!ctx.cr6.eq) goto loc_833C49EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_833C49EC:
	// rlwinm r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c4a60
	if (ctx.cr6.eq) goto loc_833C4A60;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c4a10
	if (ctx.cr6.eq) goto loc_833C4A10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C4A10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833C4A10:
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c4a60
	if (ctx.cr6.eq) goto loc_833C4A60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C4A28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x833c4a60
	goto loc_833C4A60;
loc_833C4A2C:
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c4a60
	if (ctx.cr6.eq) goto loc_833C4A60;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x833c4a4c
	if (!ctx.cr6.eq) goto loc_833C4A4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_833C4A4C:
	// rlwinm r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c4a60
	if (ctx.cr6.eq) goto loc_833C4A60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c4750
	ctx.lr = 0x833C4A60;
	sub_833C4750(ctx, base);
loc_833C4A60:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
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

__attribute__((alias("__imp__sub_833C4A78"))) PPC_WEAK_FUNC(sub_833C4A78);
PPC_FUNC_IMPL(__imp__sub_833C4A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x833C4A80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,324
	ctx.r5.s64 = 324;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x833C4A9C;
	sub_82CB16F0(ctx, base);
	// rlwinm r11,r29,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x800000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c4b2c
	if (ctx.cr6.eq) goto loc_833C4B2C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x82e651a8
	ctx.lr = 0x833C4AC8;
	sub_82E651A8(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
loc_833C4ACC:
	// lis r5,-31940
	ctx.r5.s64 = -2093219840;
	// lis r6,-31940
	ctx.r6.s64 = -2093219840;
	// lis r7,-31940
	ctx.r7.s64 = -2093219840;
	// lis r8,-31940
	ctx.r8.s64 = -2093219840;
	// lis r9,-31940
	ctx.r9.s64 = -2093219840;
	// lis r10,-31940
	ctx.r10.s64 = -2093219840;
	// lis r11,-31940
	ctx.r11.s64 = -2093219840;
	// addi r5,r5,16528
	ctx.r5.s64 = ctx.r5.s64 + 16528;
	// addi r6,r6,16968
	ctx.r6.s64 = ctx.r6.s64 + 16968;
	// addi r7,r7,17968
	ctx.r7.s64 = ctx.r7.s64 + 17968;
	// addi r8,r8,18008
	ctx.r8.s64 = ctx.r8.s64 + 18008;
	// addi r9,r9,18256
	ctx.r9.s64 = ctx.r9.s64 + 18256;
	// addi r10,r10,18152
	ctx.r10.s64 = ctx.r10.s64 + 18152;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// addi r11,r11,18872
	ctx.r11.s64 = ctx.r11.s64 + 18872;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_833C4B2C:
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,128
	ctx.r8.u64 = ctx.r8.u64 | 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82bea2a0
	ctx.lr = 0x833C4B4C;
	sub_82BEA2A0(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x833c4acc
	if (!ctx.cr6.eq) goto loc_833C4ACC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C4B68"))) PPC_WEAK_FUNC(sub_833C4B68);
PPC_FUNC_IMPL(__imp__sub_833C4B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x833c4bec
	if (!ctx.cr6.eq) goto loc_833C4BEC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x833c4bec
	if (!ctx.cr6.eq) goto loc_833C4BEC;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x833c4bec
	if (!ctx.cr6.eq) goto loc_833C4BEC;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x833c4bec
	if (!ctx.cr6.eq) goto loc_833C4BEC;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x833c4bec
	if (!ctx.cr6.eq) goto loc_833C4BEC;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x833c4bec
	if (!ctx.cr6.eq) goto loc_833C4BEC;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x833c4bec
	if (!ctx.cr6.eq) goto loc_833C4BEC;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x833c4bec
	if (!ctx.cr6.eq) goto loc_833C4BEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_833C4BEC:
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// ori r30,r3,255
	ctx.r30.u64 = ctx.r3.u64 | 255;
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// subf r10,r7,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r7.s64;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// sraw r10,r30,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r30.s32 < 0) & (((ctx.r30.s32 >> temp.u32) << temp.u32) != ctx.r30.s32);
	ctx.r10.s64 = ctx.r30.s32 >> temp.u32;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// rlwinm r10,r10,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C4C40"))) PPC_WEAK_FUNC(sub_833C4C40);
PPC_FUNC_IMPL(__imp__sub_833C4C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x833C4C48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,6112
	ctx.r27.s64 = ctx.r11.s64 + 6112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C4C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C4C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C4CA0"))) PPC_WEAK_FUNC(sub_833C4CA0);
PPC_FUNC_IMPL(__imp__sub_833C4CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x833C4CA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,6112
	ctx.r27.s64 = ctx.r11.s64 + 6112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C4CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C4CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C4D00"))) PPC_WEAK_FUNC(sub_833C4D00);
PPC_FUNC_IMPL(__imp__sub_833C4D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x833C4D08;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,6112
	ctx.r28.s64 = ctx.r11.s64 + 6112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// lwz r26,20(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r25,24(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r24,4(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r23,16(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r22,8(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r21,12(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C4D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r20,0(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r19,24(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r21.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C4DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r19,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r19.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C4DB8"))) PPC_WEAK_FUNC(sub_833C4DB8);
PPC_FUNC_IMPL(__imp__sub_833C4DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,20480
	ctx.r11.s64 = 1342177280;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x833c4df8
	if (ctx.cr6.eq) goto loc_833C4DF8;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x833c4df8
	if (ctx.cr6.eq) goto loc_833C4DF8;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x833c4df8
	if (ctx.cr6.eq) goto loc_833C4DF8;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// b 0x833c4e1c
	goto loc_833C4E1C;
loc_833C4DF8:
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
loc_833C4E1C:
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x833c4e3c
	if (!ctx.cr6.eq) goto loc_833C4E3C;
	// lis r10,-31940
	ctx.r10.s64 = -2093219840;
	// addi r10,r10,19520
	ctx.r10.s64 = ctx.r10.s64 + 19520;
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
loc_833C4E30:
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// blr 
	return;
loc_833C4E3C:
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x833c4e30
	if (!ctx.cr6.eq) goto loc_833C4E30;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x833c4e60
	if (!ctx.cr6.eq) goto loc_833C4E60;
	// lis r10,-31940
	ctx.r10.s64 = -2093219840;
	// addi r10,r10,19712
	ctx.r10.s64 = ctx.r10.s64 + 19712;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// blr 
	return;
loc_833C4E60:
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lis r9,-31940
	ctx.r9.s64 = -2093219840;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// addi r10,r9,19616
	ctx.r10.s64 = ctx.r9.s64 + 19616;
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C4E7C"))) PPC_WEAK_FUNC(sub_833C4E7C);
PPC_FUNC_IMPL(__imp__sub_833C4E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C4E80"))) PPC_WEAK_FUNC(sub_833C4E80);
PPC_FUNC_IMPL(__imp__sub_833C4E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x833C4E88;
	__savegprlr_18(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r23,428(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r26,20(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r25,32(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// rlwinm r22,r23,0,1,3
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x70000000;
	// lis r30,24576
	ctx.r30.s64 = 1610612736;
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// cmplw cr6,r22,r30
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r30.u32, ctx.xer);
	// stw r25,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bne cr6,0x833c4f20
	if (!ctx.cr6.eq) goto loc_833C4F20;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// lwz r30,420(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// rlwinm r24,r7,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r26,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r25,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// rlwinm r28,r30,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// stw r25,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// b 0x833c4f24
	goto loc_833C4F24;
loc_833C4F20:
	// lwz r28,420(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
loc_833C4F24:
	// lis r30,-31881
	ctx.r30.s64 = -2089353216;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// mullw r29,r6,r7
	ctx.r29.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// addi r20,r30,6112
	ctx.r20.s64 = ctx.r30.s64 + 6112;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r30,104(r20)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r20.u32 + 104);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// mullw r30,r30,r5
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r5.s32);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lis r29,8192
	ctx.r29.s64 = 536870912;
	// add r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 + ctx.r4.u64;
	// cmplw cr6,r22,r29
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r29.u32, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x833c4f68
	if (ctx.cr6.eq) goto loc_833C4F68;
	// lis r30,20480
	ctx.r30.s64 = 1342177280;
	// cmplw cr6,r22,r30
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x833c4f70
	if (!ctx.cr6.eq) goto loc_833C4F70;
loc_833C4F68:
	// rlwinm r24,r24,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
loc_833C4F70:
	// rlwinm r30,r23,0,20,20
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x833c4f9c
	if (ctx.cr6.eq) goto loc_833C4F9C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r28,40(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r27,4(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// b 0x833c4fa4
	goto loc_833C4FA4;
loc_833C4F9C:
	// lwz r28,4(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r27,40(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
loc_833C4FA4:
	// mullw r29,r3,r31
	ctx.r29.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// mullw r30,r3,r11
	ctx.r30.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r21,r23,0,14,14
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// beq cr6,0x833c4fe4
	if (ctx.cr6.eq) goto loc_833C4FE4;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r25,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// b 0x833c5044
	goto loc_833C5044;
loc_833C4FE4:
	// rlwinm r30,r23,0,15,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x833c5010
	if (ctx.cr6.eq) goto loc_833C5010;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r28,28(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// lwz r27,16(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// stw r25,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// b 0x833c5018
	goto loc_833C5018;
loc_833C5010:
	// lwz r28,16(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r27,28(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
loc_833C5018:
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// mullw r29,r3,r26
	ctx.r29.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r26.s32);
	// mullw r30,r3,r25
	ctx.r30.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r25.s32);
	// add r3,r29,r9
	ctx.r3.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
loc_833C5044:
	// lwz r9,412(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// clrlwi r29,r23,28
	ctx.r29.u64 = ctx.r23.u32 & 0xF;
	// lwz r3,116(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 116);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// subf r30,r3,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r3.s64;
	// subf r3,r9,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r9.s64;
	// cmplwi cr6,r29,15
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 15, ctx.xer);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// bne cr6,0x833c50d4
	if (!ctx.cr6.eq) goto loc_833C50D4;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// rlwinm r31,r8,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r24.s32 >> 1;
	// rlwinm r3,r5,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// addze r19,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r19.s64 = temp.s64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r5,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// neg r8,r5
	ctx.r8.s64 = -ctx.r5.s64;
	// mullw r5,r6,r11
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// mullw r6,r31,r11
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x833c50f0
	goto loc_833C50F0;
loc_833C50D4:
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// neg r8,r11
	ctx.r8.s64 = -ctx.r11.s64;
loc_833C50F0:
	// add r10,r8,r26
	ctx.r10.u64 = ctx.r8.u64 + ctx.r26.u64;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// add r10,r8,r25
	ctx.r10.u64 = ctx.r8.u64 + ctx.r25.u64;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// beq cr6,0x833c5120
	if (ctx.cr6.eq) goto loc_833C5120;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x833c5138
	if (!ctx.cr6.eq) goto loc_833C5138;
loc_833C5120:
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_833C5138:
	// lwz r11,112(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x833c5160
	if (ctx.cr6.eq) goto loc_833C5160;
	// lwz r11,108(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 108);
	// li r10,512
	ctx.r10.s64 = 512;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// sraw r11,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bne cr6,0x833c5170
	if (!ctx.cr6.eq) goto loc_833C5170;
	// b 0x833c51a8
	goto loc_833C51A8;
loc_833C5160:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x833c51a0
	if (ctx.cr6.eq) goto loc_833C51A0;
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_833C5170:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x833c5180
	if (!ctx.cr6.gt) goto loc_833C5180;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_833C5180:
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// ble cr6,0x833c518c
	if (!ctx.cr6.gt) goto loc_833C518C;
	// li r11,256
	ctx.r11.s64 = 256;
loc_833C518C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x82cb16f0
	ctx.lr = 0x833C519C;
	sub_82CB16F0(ctx, base);
	// b 0x833c51a8
	goto loc_833C51A8;
loc_833C51A0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_833C51A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82cb1160
	ctx.lr = 0x833C51B8;
	sub_82CB1160(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C51C0"))) PPC_WEAK_FUNC(sub_833C51C0);
PPC_FUNC_IMPL(__imp__sub_833C51C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x833C51C8;
	__savegprlr_22(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// addi r27,r10,6112
	ctx.r27.s64 = ctx.r10.s64 + 6112;
	// lwz r10,84(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833c53b8
	if (ctx.cr6.eq) goto loc_833C53B8;
	// lwz r24,1220(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1220);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x833c53b8
	if (ctx.cr6.eq) goto loc_833C53B8;
	// lwz r10,1228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1228);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833c53b8
	if (ctx.cr6.eq) goto loc_833C53B8;
	// addi r9,r1,255
	ctx.r9.s64 = ctx.r1.s64 + 255;
	// lwz r31,1236(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1236);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r30,r1,527
	ctx.r30.s64 = ctx.r1.s64 + 527;
	// rlwinm r23,r9,0,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r26,r30,0,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x833c4e80
	ctx.lr = 0x833C524C;
	sub_833C4E80(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x833c53b8
	if (!ctx.cr6.lt) goto loc_833C53B8;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r22,r31,0,14,14
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20000;
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,112(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
loc_833C5270:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x833c5294
	if (ctx.cr6.eq) goto loc_833C5294;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
loc_833C5294:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x833c52a4
	if (ctx.cr6.eq) goto loc_833C52A4;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
loc_833C52A4:
	// lwz r31,176(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x833c52b4
	if (ctx.cr6.gt) goto loc_833C52B4;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_833C52B4:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C52CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,112(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x833c530c
	if (ctx.cr6.eq) goto loc_833C530C;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C5300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,112(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
loc_833C530C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x833c5294
	if (!ctx.cr6.eq) goto loc_833C5294;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x833c5320
	if (ctx.cr6.eq) goto loc_833C5320;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
loc_833C5320:
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r11,r9,2,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x4;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// lwz r8,188(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lwzx r8,r11,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// lwzx r8,r11,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// blt cr6,0x833c5270
	if (ctx.cr6.lt) goto loc_833C5270;
loc_833C53B8:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C53C0"))) PPC_WEAK_FUNC(sub_833C53C0);
PPC_FUNC_IMPL(__imp__sub_833C53C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x833C53C8;
	__savegprlr_14(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// addi r22,r11,6112
	ctx.r22.s64 = ctx.r11.s64 + 6112;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r11,84(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c57f8
	if (ctx.cr6.eq) goto loc_833C57F8;
	// lwz r19,1316(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x833c57f8
	if (ctx.cr6.eq) goto loc_833C57F8;
	// lwz r11,1324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c57f8
	if (ctx.cr6.eq) goto loc_833C57F8;
	// addi r10,r1,271
	ctx.r10.s64 = ctx.r1.s64 + 271;
	// lwz r26,1332(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1332);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r30,1308(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1308);
	// rlwinm r28,r10,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r18,1300(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r27,r1,543
	ctx.r27.s64 = ctx.r1.s64 + 543;
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r17,r27,0,0,27
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x833c4e80
	ctx.lr = 0x833C5458;
	sub_833C4E80(ctx, base);
	// rlwinm r10,r30,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r9,r18,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0xFFFFFFF;
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r11,r18,28
	ctx.r11.u64 = ctx.r18.u32 & 0xF;
	// add r27,r10,r29
	ctx.r27.u64 = ctx.r10.u64 + ctx.r29.u64;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// clrlwi r24,r10,28
	ctx.r24.u64 = ctx.r10.u32 & 0xF;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// cmplw cr6,r24,r19
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r19.u32, ctx.xer);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// ble cr6,0x833c54a0
	if (!ctx.cr6.gt) goto loc_833C54A0;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
loc_833C54A0:
	// clrlwi r11,r26,28
	ctx.r11.u64 = ctx.r26.u32 & 0xF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x833c54b8
	if (!ctx.cr6.eq) goto loc_833C54B8;
	// addi r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 1;
	// rlwinm r16,r11,31,1,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833c54d0
	goto loc_833C54D0;
loc_833C54B8:
	// clrlwi r11,r18,31
	ctx.r11.u64 = ctx.r18.u32 & 0x1;
	// add r10,r24,r18
	ctx.r10.u64 = ctx.r24.u64 + ctx.r18.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r16,r11,r10
	ctx.r16.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_833C54D0:
	// subf r10,r24,r19
	ctx.r10.s64 = ctx.r19.s64 - ctx.r24.s64;
	// lwz r11,116(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 116);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// mullw r14,r11,r24
	ctx.r14.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// mullw r15,r11,r16
	ctx.r15.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// rlwinm r20,r11,4,0,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r23,r11,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x833c54f8
	if (!ctx.cr6.eq) goto loc_833C54F8;
	// li r10,16
	ctx.r10.s64 = 16;
loc_833C54F8:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r25,112(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 112);
loc_833C5524:
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x833c57f8
	if (!ctx.cr6.lt) goto loc_833C57F8;
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x833c55a4
	if (ctx.cr6.eq) goto loc_833C55A4;
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// subf r31,r24,r19
	ctx.r31.s64 = ctx.r19.s64 - ctx.r24.s64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x833c5640
	if (!ctx.cr6.eq) goto loc_833C5640;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// add r8,r8,r16
	ctx.r8.u64 = ctx.r8.u64 + ctx.r16.u64;
	// add r7,r7,r16
	ctx.r7.u64 = ctx.r7.u64 + ctx.r16.u64;
	// add r5,r5,r15
	ctx.r5.u64 = ctx.r5.u64 + ctx.r15.u64;
	// add r6,r6,r15
	ctx.r6.u64 = ctx.r6.u64 + ctx.r15.u64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// add r29,r24,r18
	ctx.r29.u64 = ctx.r24.u64 + ctx.r18.u64;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_833C55A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x833c5764
	if (ctx.cr6.eq) goto loc_833C5764;
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x833c5610
	if (!ctx.cr6.eq) goto loc_833C5610;
loc_833C55B8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// ble cr6,0x833c5738
	if (!ctx.cr6.gt) goto loc_833C5738;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// add r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 + ctx.r23.u64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x833c55b8
	if (ctx.cr6.eq) goto loc_833C55B8;
loc_833C5610:
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x833c5654
	if (ctx.cr6.eq) goto loc_833C5654;
loc_833C561C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// ble cr6,0x833c564c
	if (!ctx.cr6.gt) goto loc_833C564C;
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x833c561c
	if (!ctx.cr6.eq) goto loc_833C561C;
	// b 0x833c5654
	goto loc_833C5654;
loc_833C5640:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x833c5610
	if (!ctx.cr6.eq) goto loc_833C5610;
	// b 0x833c5654
	goto loc_833C5654;
loc_833C564C:
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_833C5654:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x833c5668
	if (ctx.cr6.eq) goto loc_833C5668;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_833C5668:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x833c5724
	if (ctx.cr6.eq) goto loc_833C5724;
	// rlwinm r26,r26,0,14,14
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20000;
loc_833C5674:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x833c5688
	if (ctx.cr6.eq) goto loc_833C5688;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
loc_833C5688:
	// lwz r30,176(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x833c5698
	if (ctx.cr6.gt) goto loc_833C5698;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_833C5698:
	// lwz r11,84(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C56B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r25,112(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 112);
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// subf r28,r11,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r11.s64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x833c56f8
	if (ctx.cr6.eq) goto loc_833C56F8;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r11,88(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 88);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C56E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// lwz r25,112(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 112);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x833c56fc
	goto loc_833C56FC;
loc_833C56F8:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_833C56FC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x833c5674
	if (!ctx.cr6.eq) goto loc_833C5674;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r26,1332(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1332);
loc_833C5724:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x833c55a4
	if (ctx.cr6.eq) goto loc_833C55A4;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x833c55a4
	goto loc_833C55A4;
loc_833C5738:
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
loc_833C5764:
	// clrlwi r5,r3,28
	ctx.r5.u64 = ctx.r3.u32 & 0xF;
	// lwz r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rlwinm r6,r3,2,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x4;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwz r29,188(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// srawi r5,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 4;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r1,248
	ctx.r29.s64 = ctx.r1.s64 + 248;
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r30,r1,200
	ctx.r30.s64 = ctx.r1.s64 + 200;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwzx r5,r5,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// add r27,r5,r27
	ctx.r27.u64 = ctx.r5.u64 + ctx.r27.u64;
	// lwzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwz r31,156(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// lwzx r5,r6,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// lwzx r5,r6,r4
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lwzx r6,r6,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// b 0x833c5524
	goto loc_833C5524;
loc_833C57F8:
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C5800"))) PPC_WEAK_FUNC(sub_833C5800);
PPC_FUNC_IMPL(__imp__sub_833C5800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x833C5808;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,23428
	ctx.r30.s64 = ctx.r11.s64 + 23428;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_833C5820:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833c5844
	if (ctx.cr6.eq) goto loc_833C5844;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833C583C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x833c5864
	if (!ctx.cr6.eq) goto loc_833C5864;
loc_833C5844:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x833c5820
	if (ctx.cr6.lt) goto loc_833C5820;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
loc_833C5864:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C586C"))) PPC_WEAK_FUNC(sub_833C586C);
PPC_FUNC_IMPL(__imp__sub_833C586C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C5870"))) PPC_WEAK_FUNC(sub_833C5870);
PPC_FUNC_IMPL(__imp__sub_833C5870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x833C5878;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6ae0
	ctx.lr = 0x833C5880;
	__savefpr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// ble cr6,0x833c5a80
	if (!ctx.cr6.gt) goto loc_833C5A80;
	// srawi r31,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 1;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-15792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15792);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x82cb4940
	ctx.lr = 0x833C58C8;
	sub_82CB4940(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// stfs f26,4(r30)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// lfs f27,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f27,0(r30)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f28,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f28.f64 = double(temp.f32);
	// blt cr6,0x833c5928
	if (ctx.cr6.lt) goto loc_833C5928;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x82cb4940
	ctx.lr = 0x833C58FC;
	sub_82CB4940(ctx, base);
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18132);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 / ctx.f0.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82cb4940
	ctx.lr = 0x833C591C;
	sub_82CB4940(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fdivs f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 / ctx.f0.f64));
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_833C5928:
	// li r28,4
	ctx.r28.s64 = 4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// ble cr6,0x833c59b4
	if (!ctx.cr6.gt) goto loc_833C59B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// lfs f29,7980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7980);
	ctx.f29.f64 = double(temp.f32);
loc_833C5940:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4940
	ctx.lr = 0x833C5960;
	sub_82CB4940(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,-8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + -8, temp.u32);
	// bl 0x82cb4860
	ctx.lr = 0x833C5974;
	sub_82CB4860(ctx, base);
	// fmuls f31,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,-4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + -4, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4940
	ctx.lr = 0x833C5988;
	sub_82CB4940(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// bl 0x82cb4860
	ctx.lr = 0x833C599C;
	sub_82CB4860(ctx, base);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpw cr6,r28,r31
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x833c5940
	if (ctx.cr6.lt) goto loc_833C5940;
loc_833C59B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// ble cr6,0x833c5a80
	if (!ctx.cr6.gt) goto loc_833C5A80;
loc_833C59C0:
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// srawi r31,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stfs f27,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f26,4(r10)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// blt cr6,0x833c5a74
	if (ctx.cr6.lt) goto loc_833C5A74;
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,2
	ctx.r7.s64 = ctx.r8.s64 + 2;
	// addi r6,r8,3
	ctx.r6.s64 = ctx.r8.s64 + 3;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r30
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r30
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 / ctx.f0.f64));
	// fdivs f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 / ctx.f13.f64));
	// stfsx f13,r7,r30
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, temp.u32);
	// stfsx f0,r10,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// ble cr6,0x833c5a74
	if (!ctx.cr6.gt) goto loc_833C5A74;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// addi r9,r31,-5
	ctx.r9.s64 = ctx.r31.s64 + -5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_833C5A40:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f11,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x833c5a40
	if (!ctx.cr6.eq) goto loc_833C5A40;
loc_833C5A74:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bgt cr6,0x833c59c0
	if (ctx.cr6.gt) goto loc_833C59C0;
loc_833C5A80:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b2c
	ctx.lr = 0x833C5A8C;
	__restfpr_26(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C5A90"))) PPC_WEAK_FUNC(sub_833C5A90);
PPC_FUNC_IMPL(__imp__sub_833C5A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x833C5A98;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// ble cr6,0x833c5b78
	if (!ctx.cr6.gt) goto loc_833C5B78;
	// srawi r28,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r30.s32 >> 1;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-15792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15792);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82cb4940
	ctx.lr = 0x833C5AE8;
	sub_82CB4940(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// lfs f31,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f0,r10,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, temp.u32);
	// ble cr6,0x833c5b78
	if (!ctx.cr6.gt) goto loc_833C5B78;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_833C5B20:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f30,f0,f29
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82cb4940
	ctx.lr = 0x833C5B40;
	sub_82CB4940(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bl 0x82cb4860
	ctx.lr = 0x833C5B58;
	sub_82CB4860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// blt cr6,0x833c5b20
	if (ctx.cr6.lt) goto loc_833C5B20;
loc_833C5B78:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C5B8C"))) PPC_WEAK_FUNC(sub_833C5B8C);
PPC_FUNC_IMPL(__imp__sub_833C5B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C5B90"))) PPC_WEAK_FUNC(sub_833C5B90);
PPC_FUNC_IMPL(__imp__sub_833C5B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x833C5B98;
	__savegprlr_20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ble cr6,0x833c5bfc
	if (!ctx.cr6.gt) goto loc_833C5BFC;
loc_833C5BB0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// ble cr6,0x833c5bec
	if (!ctx.cr6.gt) goto loc_833C5BEC;
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_833C5BCC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x833c5bcc
	if (!ctx.cr6.eq) goto loc_833C5BCC;
loc_833C5BEC:
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r20,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x833c5bb0
	if (ctx.cr6.lt) goto loc_833C5BB0;
loc_833C5BFC:
	// rlwinm r10,r20,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r20,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x833c5da4
	if (!ctx.cr6.eq) goto loc_833C5DA4;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x833c60b8
	if (!ctx.cr6.gt) goto loc_833C60B8;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
loc_833C5C20:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x833c5d4c
	if (!ctx.cr6.gt) goto loc_833C5D4C;
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_833C5C38:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// add r8,r22,r9
	ctx.r8.u64 = ctx.r22.u64 + ctx.r9.u64;
	// add r31,r3,r10
	ctx.r31.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// addi r29,r9,4
	ctx.r29.s64 = ctx.r9.s64 + 4;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 + ctx.r8.u64;
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r24,r8,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r27,r5
	ctx.r9.u64 = ctx.r27.u64 + ctx.r5.u64;
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// rlwinm r25,r31,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r27,r28,r8
	ctx.r27.u64 = ctx.r28.u64 + ctx.r8.u64;
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r24,r5
	ctx.r10.u64 = ctx.r24.u64 + ctx.r5.u64;
	// rlwinm r29,r27,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r8,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// add r8,r26,r5
	ctx.r8.u64 = ctx.r26.u64 + ctx.r5.u64;
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r9,r25,r5
	ctx.r9.u64 = ctx.r25.u64 + ctx.r5.u64;
	// addi r30,r8,4
	ctx.r30.s64 = ctx.r8.s64 + 4;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r31,r9,4
	ctx.r31.s64 = ctx.r9.s64 + 4;
	// add r10,r27,r5
	ctx.r10.u64 = ctx.r27.u64 + ctx.r5.u64;
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r9,r29,r5
	ctx.r9.u64 = ctx.r29.u64 + ctx.r5.u64;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// bne cr6,0x833c5c38
	if (!ctx.cr6.eq) goto loc_833C5C38;
loc_833C5D4C:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// add r10,r22,r10
	ctx.r10.u64 = ctx.r22.u64 + ctx.r10.u64;
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// blt cr6,0x833c5c20
	if (ctx.cr6.lt) goto loc_833C5C20;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_833C5DA4:
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// ble cr6,0x833c60b8
	if (!ctx.cr6.gt) goto loc_833C60B8;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
loc_833C5DB8:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// blt cr6,0x833c5ff8
	if (ctx.cr6.lt) goto loc_833C5FF8;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// addi r31,r8,1
	ctx.r31.s64 = ctx.r8.s64 + 1;
	// rlwinm r26,r31,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_833C5DDC:
	// lwz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r30,r7,r3
	ctx.r30.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r29,r8,r9
	ctx.r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r7,4
	ctx.r30.s64 = ctx.r7.s64 + 4;
	// addi r29,r8,4
	ctx.r29.s64 = ctx.r8.s64 + 4;
	// lfs f11,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// add r8,r27,r5
	ctx.r8.u64 = ctx.r27.u64 + ctx.r5.u64;
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r28,r5
	ctx.r7.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r30,r7,2
	ctx.r30.s64 = ctx.r7.s64 + 2;
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r7,4
	ctx.r30.s64 = ctx.r7.s64 + 4;
	// addi r29,r8,4
	ctx.r29.s64 = ctx.r8.s64 + 4;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// add r8,r28,r5
	ctx.r8.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r27,r5
	ctx.r7.u64 = ctx.r27.u64 + ctx.r5.u64;
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r30,r9,6
	ctx.r30.s64 = ctx.r9.s64 + 6;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r29,r7,-2
	ctx.r29.s64 = ctx.r7.s64 + -2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r8,r11
	ctx.r28.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r29,r7,4
	ctx.r29.s64 = ctx.r7.s64 + 4;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// add r8,r27,r5
	ctx.r8.u64 = ctx.r27.u64 + ctx.r5.u64;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r28,r5
	ctx.r7.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r29,r7,r3
	ctx.r29.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 + ctx.r30.u64;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r28,r29,r11
	ctx.r28.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r27,r30,r11
	ctx.r27.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r7,4
	ctx.r30.s64 = ctx.r7.s64 + 4;
	// addi r29,r8,4
	ctx.r29.s64 = ctx.r8.s64 + 4;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// add r8,r27,r5
	ctx.r8.u64 = ctx.r27.u64 + ctx.r5.u64;
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r28,r5
	ctx.r7.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// bne cr6,0x833c5ddc
	if (!ctx.cr6.eq) goto loc_833C5DDC;
loc_833C5FF8:
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x833c60a4
	if (!ctx.cr6.lt) goto loc_833C60A4;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r26,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r8,r26,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r26.s64;
loc_833C6010:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r30,r3,r9
	ctx.r30.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r30,r9,4
	ctx.r30.s64 = ctx.r9.s64 + 4;
	// addi r29,r10,4
	ctx.r29.s64 = ctx.r10.s64 + 4;
	// lfs f11,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r27,r5
	ctx.r10.u64 = ctx.r27.u64 + ctx.r5.u64;
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r9,r28,r5
	ctx.r9.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// bne cr6,0x833c6010
	if (!ctx.cr6.eq) goto loc_833C6010;
loc_833C60A4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// cmpw cr6,r25,r20
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x833c5db8
	if (ctx.cr6.lt) goto loc_833C5DB8;
loc_833C60B8:
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C60BC"))) PPC_WEAK_FUNC(sub_833C60BC);
PPC_FUNC_IMPL(__imp__sub_833C60BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C60C0"))) PPC_WEAK_FUNC(sub_833C60C0);
PPC_FUNC_IMPL(__imp__sub_833C60C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x833C60C8;
	__savegprlr_20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ble cr6,0x833c612c
	if (!ctx.cr6.gt) goto loc_833C612C;
loc_833C60E0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// ble cr6,0x833c611c
	if (!ctx.cr6.gt) goto loc_833C611C;
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_833C60FC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x833c60fc
	if (!ctx.cr6.eq) goto loc_833C60FC;
loc_833C611C:
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r20,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x833c60e0
	if (ctx.cr6.lt) goto loc_833C60E0;
loc_833C612C:
	// rlwinm r10,r20,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r20,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x833c6328
	if (!ctx.cr6.eq) goto loc_833C6328;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x833c66dc
	if (!ctx.cr6.gt) goto loc_833C66DC;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
loc_833C6150:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x833c629c
	if (!ctx.cr6.gt) goto loc_833C629C;
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_833C6168:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// add r8,r9,r22
	ctx.r8.u64 = ctx.r9.u64 + ctx.r22.u64;
	// add r31,r10,r6
	ctx.r31.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// addi r29,r9,4
	ctx.r29.s64 = ctx.r9.s64 + 4;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 + ctx.r8.u64;
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r24,r8,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// add r9,r27,r5
	ctx.r9.u64 = ctx.r27.u64 + ctx.r5.u64;
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// rlwinm r25,r31,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r28,r8
	ctx.r27.u64 = ctx.r28.u64 + ctx.r8.u64;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// fneg f12,f11
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// add r10,r24,r5
	ctx.r10.u64 = ctx.r24.u64 + ctx.r5.u64;
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// rlwinm r29,r27,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// rlwinm r26,r8,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r25,r5
	ctx.r9.u64 = ctx.r25.u64 + ctx.r5.u64;
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// add r8,r26,r5
	ctx.r8.u64 = ctx.r26.u64 + ctx.r5.u64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r30,r8,4
	ctx.r30.s64 = ctx.r8.s64 + 4;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r31,r9,4
	ctx.r31.s64 = ctx.r9.s64 + 4;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r27,r5
	ctx.r10.u64 = ctx.r27.u64 + ctx.r5.u64;
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r9,r29,r5
	ctx.r9.u64 = ctx.r29.u64 + ctx.r5.u64;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// bne cr6,0x833c6168
	if (!ctx.cr6.eq) goto loc_833C6168;
loc_833C629C:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lfsx f0,r7,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r7,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, temp.u32);
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfsx f0,r8,r5
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r8,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// blt cr6,0x833c6150
	if (ctx.cr6.lt) goto loc_833C6150;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_833C6328:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// lfsx f0,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r10,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// ble cr6,0x833c66dc
	if (!ctx.cr6.gt) goto loc_833C66DC;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
loc_833C635C:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// blt cr6,0x833c65d8
	if (ctx.cr6.lt) goto loc_833C65D8;
	// addi r10,r24,-4
	ctx.r10.s64 = ctx.r24.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// addi r31,r8,1
	ctx.r31.s64 = ctx.r8.s64 + 1;
	// rlwinm r25,r31,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_833C6380:
	// lwz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r30,r7,r3
	ctx.r30.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r7,4
	ctx.r30.s64 = ctx.r7.s64 + 4;
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r29,r8,4
	ctx.r29.s64 = ctx.r8.s64 + 4;
	// lfs f12,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// add r8,r27,r5
	ctx.r8.u64 = ctx.r27.u64 + ctx.r5.u64;
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fneg f12,f11
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r28,r5
	ctx.r7.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r30,r7,2
	ctx.r30.s64 = ctx.r7.s64 + 2;
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r7,4
	ctx.r30.s64 = ctx.r7.s64 + 4;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r8,4
	ctx.r29.s64 = ctx.r8.s64 + 4;
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// add r8,r28,r5
	ctx.r8.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fneg f12,f11
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r27,r5
	ctx.r7.u64 = ctx.r27.u64 + ctx.r5.u64;
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r30,r9,6
	ctx.r30.s64 = ctx.r9.s64 + 6;
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r29,r7,-2
	ctx.r29.s64 = ctx.r7.s64 + -2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r8,r11
	ctx.r28.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r29,r7,4
	ctx.r29.s64 = ctx.r7.s64 + 4;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r26,r28,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfs f11,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fneg f12,f11
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// add r8,r26,r5
	ctx.r8.u64 = ctx.r26.u64 + ctx.r5.u64;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r28,r5
	ctx.r7.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r29,r7,r3
	ctx.r29.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r7,4
	ctx.r30.s64 = ctx.r7.s64 + 4;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// add r7,r28,r5
	ctx.r7.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// bne cr6,0x833c6380
	if (!ctx.cr6.eq) goto loc_833C6380;
loc_833C65D8:
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x833c6694
	if (!ctx.cr6.lt) goto loc_833C6694;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r25,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r8,r25,r24
	ctx.r8.s64 = ctx.r24.s64 - ctx.r25.s64;
loc_833C65F0:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r30,r3,r9
	ctx.r30.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r29,r31,r10
	ctx.r29.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r9,4
	ctx.r30.s64 = ctx.r9.s64 + 4;
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r29,r10,4
	ctx.r29.s64 = ctx.r10.s64 + 4;
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r10,r27,r5
	ctx.r10.u64 = ctx.r27.u64 + ctx.r5.u64;
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fneg f12,f11
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r9,r28,r5
	ctx.r9.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// bne cr6,0x833c65f0
	if (!ctx.cr6.eq) goto loc_833C65F0;
loc_833C6694:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r24,r20
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r20.s32, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r9,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
	// lfsx f0,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r10,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// blt cr6,0x833c635c
	if (ctx.cr6.lt) goto loc_833C635C;
loc_833C66DC:
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C66E0"))) PPC_WEAK_FUNC(sub_833C66E0);
PPC_FUNC_IMPL(__imp__sub_833C66E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ad0
	ctx.lr = 0x833C66F0;
	__savefpr_22(ctx, base);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f22.f64 = double(temp.f32);
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f31,16(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f30,20(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f29,24(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f28,28(r3)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f27,40(r3)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f26,44(r3)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f23,56(r3)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f22,60(r3)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f25,88(r3)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f24,92(r3)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f10,96(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f9,100(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f8,80(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f7,84(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f6,104(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f5,108(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f4,112(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f3,116(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b1c
	ctx.lr = 0x833C67B8;
	__restfpr_22(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C67C4"))) PPC_WEAK_FUNC(sub_833C67C4);
PPC_FUNC_IMPL(__imp__sub_833C67C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C67C8"))) PPC_WEAK_FUNC(sub_833C67C8);
PPC_FUNC_IMPL(__imp__sub_833C67C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6abc
	ctx.lr = 0x833C67D8;
	__savefpr_17(ctx, base);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// lfs f27,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f17.f64 = double(temp.f32);
	// lfs f31,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f28.f64 = double(temp.f32);
	// lfs f0,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f24,8(r3)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f23,12(r3)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f27,16(r3)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f26,20(r3)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f22,24(r3)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f21,28(r3)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f20,40(r3)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f19,44(r3)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f25,56(r3)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f18,60(r3)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f17,72(r3)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f10,48(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f9,52(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f4,80(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f3,84(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f31,88(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f30,92(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f8,96(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f7,100(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f29,104(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f28,108(r3)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f6,112(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f2,120(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f1,124(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f5,116(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b08
	ctx.lr = 0x833C68D0;
	__restfpr_17(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C68DC"))) PPC_WEAK_FUNC(sub_833C68DC);
PPC_FUNC_IMPL(__imp__sub_833C68DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C68E0"))) PPC_WEAK_FUNC(sub_833C68E0);
PPC_FUNC_IMPL(__imp__sub_833C68E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,52(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C6924"))) PPC_WEAK_FUNC(sub_833C6924);
PPC_FUNC_IMPL(__imp__sub_833C6924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C6928"))) PPC_WEAK_FUNC(sub_833C6928);
PPC_FUNC_IMPL(__imp__sub_833C6928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f7,12(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f5,20(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f4,24(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f3,28(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f2,40(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f1,44(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,52(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f10,56(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f9,60(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C699C"))) PPC_WEAK_FUNC(sub_833C699C);
PPC_FUNC_IMPL(__imp__sub_833C699C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C69A0"))) PPC_WEAK_FUNC(sub_833C69A0);
PPC_FUNC_IMPL(__imp__sub_833C69A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x833C69A8;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82cb6ab0
	ctx.lr = 0x833C69B0;
	__savefpr_14(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// srawi r28,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r3.s32 >> 3;
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r30,r5,8
	ctx.r30.s64 = ctx.r5.s64 + 8;
	// rlwinm r3,r28,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r21,r28,-2
	ctx.r21.s64 = ctx.r28.s64 + -2;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// lfs f5,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f1,f9,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fadds f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fsubs f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fsubs f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fadds f6,f2,f3
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f6,f3,f2
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fadds f4,f8,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fadds f8,f5,f1
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfs f8,4(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fsubs f8,f1,f5
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f8,f10,f7
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f4,4(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f9,4(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f15,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f15.f64 = double(temp.f32);
	// lfs f17,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f17.f64 = double(temp.f32);
	// lfs f16,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f16.f64 = double(temp.f32);
	// ble cr6,0x833c6e20
	if (!ctx.cr6.gt) goto loc_833C6E20;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r6,r3,-2
	ctx.r6.s64 = ctx.r3.s64 + -2;
	// addi r7,r3,2
	ctx.r7.s64 = ctx.r3.s64 + 2;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r21,-3
	ctx.r31.s64 = ctx.r21.s64 + -3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r31,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r31,r6,r4
	ctx.r31.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,-4
	ctx.r8.s64 = ctx.r3.s64 + -4;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r29,r7,1
	ctx.r29.s64 = ctx.r7.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// addi r11,r7,16
	ctx.r11.s64 = ctx.r7.s64 + 16;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r7,r7,-16
	ctx.r7.s64 = ctx.r7.s64 + -16;
loc_833C6AF0:
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// lfs f9,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r27,r5,12
	ctx.r27.s64 = ctx.r5.s64 + 12;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f1,f7,f9
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f29,f7,f9
	ctx.f29.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fadds f3,f10,f8
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// lfs f4,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f30,f8,f10
	ctx.f30.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfs f6,-8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f21,f6,f4
	ctx.f21.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// lfs f31,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// fsubs f4,f31,f10
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// lfs f2,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f31,f31,f10
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f10.f64));
	// lfs f26,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// fadds f20,f5,f2
	ctx.f20.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// lfs f25,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// lfs f24,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f24.f64 = double(temp.f32);
	// addi r26,r5,4
	ctx.r26.s64 = ctx.r5.s64 + 4;
	// lfs f27,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f27.f64 = double(temp.f32);
	// fadds f10,f1,f3
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// lfs f23,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// addi r25,r7,4
	ctx.r25.s64 = ctx.r7.s64 + 4;
	// lfs f22,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f22.f64 = double(temp.f32);
	// fadds f14,f23,f12
	ctx.f14.f64 = double(float(ctx.f23.f64 + ctx.f12.f64));
	// lfs f28,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// fmr f12,f23
	ctx.f12.f64 = ctx.f23.f64;
	// lfs f8,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f18,f28,f25
	ctx.f18.f64 = double(float(ctx.f28.f64 + ctx.f25.f64));
	// stfs f10,0(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f10,f0,f17
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f17.f64));
	// fadds f2,f8,f27
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f27.f64));
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f0,f11,f22
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f22.f64));
	// stfs f0,-256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// fsubs f27,f8,f27
	ctx.f27.f64 = double(float(ctx.f8.f64 - ctx.f27.f64));
	// addi r24,r31,12
	ctx.r24.s64 = ctx.r31.s64 + 12;
	// fadds f8,f24,f13
	ctx.f8.f64 = double(float(ctx.f24.f64 + ctx.f13.f64));
	// fsubs f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// stfs f13,-252(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -252, temp.u32);
	// fadds f19,f7,f26
	ctx.f19.f64 = double(float(ctx.f7.f64 + ctx.f26.f64));
	// fsubs f1,f28,f25
	ctx.f1.f64 = double(float(ctx.f28.f64 - ctx.f25.f64));
	// fadds f28,f20,f21
	ctx.f28.f64 = double(float(ctx.f20.f64 + ctx.f21.f64));
	// stfs f28,-8(r8)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// fsubs f3,f7,f26
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f26.f64));
	// fadds f25,f31,f2
	ctx.f25.f64 = double(float(ctx.f31.f64 + ctx.f2.f64));
	// stfs f25,-4(r8)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// fsubs f2,f2,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f31.f64));
	// fsubs f26,f21,f20
	ctx.f26.f64 = double(float(ctx.f21.f64 - ctx.f20.f64));
	// fmuls f9,f8,f17
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f17.f64));
	// fsubs f28,f6,f4
	ctx.f28.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// fadds f31,f18,f19
	ctx.f31.f64 = double(float(ctx.f18.f64 + ctx.f19.f64));
	// stfs f31,4(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f2,-4(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fadds f2,f5,f27
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f27.f64));
	// stfs f26,-8(r9)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// fmuls f8,f14,f16
	ctx.f8.f64 = double(float(ctx.f14.f64 * ctx.f16.f64));
	// fsubs f31,f19,f18
	ctx.f31.f64 = double(float(ctx.f19.f64 - ctx.f18.f64));
	// stfs f31,4(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmr f13,f24
	ctx.f13.f64 = ctx.f24.f64;
	// fneg f11,f22
	ctx.f11.u64 = ctx.f22.u64 ^ 0x8000000000000000;
	// fadds f31,f29,f3
	ctx.f31.f64 = double(float(ctx.f29.f64 + ctx.f3.f64));
	// fmuls f24,f9,f28
	ctx.f24.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fmuls f26,f9,f2
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmr f25,f2
	ctx.f25.f64 = ctx.f2.f64;
	// fsubs f2,f30,f1
	ctx.f2.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
	// fmsubs f28,f10,f28,f26
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 - ctx.f26.f64));
	// lfs f14,-256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f7,f14,f16
	ctx.f7.f64 = double(float(ctx.f14.f64 * ctx.f16.f64));
	// lfs f14,-252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,0(r9)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f28,-8(r10)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// fmadds f28,f10,f25,f24
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f25.f64 + ctx.f24.f64));
	// stfs f28,-4(r10)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmuls f28,f13,f31
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f26,f13,f2
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// addi r23,r6,4
	ctx.r23.s64 = ctx.r6.s64 + 4;
	// fadds f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// addi r22,r31,4
	ctx.r22.s64 = ctx.r31.s64 + 4;
	// fsubs f5,f27,f5
	ctx.f5.f64 = double(float(ctx.f27.f64 - ctx.f5.f64));
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// fmsubs f4,f0,f2,f28
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 - ctx.f28.f64));
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmadds f4,f0,f31,f26
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f26.f64));
	// stfs f4,4(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// fmuls f28,f7,f6
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmr f31,f5
	ctx.f31.f64 = ctx.f5.f64;
	// fadds f6,f1,f30
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// fsubs f5,f3,f29
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f29.f64));
	// fmadds f4,f7,f2,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f4.f64));
	// stfs f4,-8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// fmsubs f4,f8,f31,f28
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 - ctx.f28.f64));
	// stfs f4,-4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fmuls f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f6,f11,f6
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmadds f4,f11,f5,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f4.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmsubs f6,f12,f5,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 - ctx.f6.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f5,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fadds f23,f6,f5
	ctx.f23.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// lfs f4,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f1,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f5,f3,f4
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lfs f30,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fadds f3,f1,f2
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lfs f31,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f28,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// fadds f1,f30,f31
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// lfs f29,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f31,f31,f30
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fadds f30,f29,f28
	ctx.f30.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// lfs f26,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f29,f28,f29
	ctx.f29.f64 = double(float(ctx.f28.f64 - ctx.f29.f64));
	// lfs f27,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// lfs f25,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// fadds f28,f26,f27
	ctx.f28.f64 = double(float(ctx.f26.f64 + ctx.f27.f64));
	// lfs f24,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f27,f26,f27
	ctx.f27.f64 = double(float(ctx.f26.f64 - ctx.f27.f64));
	// fadds f26,f25,f24
	ctx.f26.f64 = double(float(ctx.f25.f64 + ctx.f24.f64));
	// fadds f22,f30,f23
	ctx.f22.f64 = double(float(ctx.f30.f64 + ctx.f23.f64));
	// fsubs f23,f23,f30
	ctx.f23.f64 = double(float(ctx.f23.f64 - ctx.f30.f64));
	// fadds f30,f29,f4
	ctx.f30.f64 = double(float(ctx.f29.f64 + ctx.f4.f64));
	// fadds f21,f28,f5
	ctx.f21.f64 = double(float(ctx.f28.f64 + ctx.f5.f64));
	// fsubs f20,f5,f28
	ctx.f20.f64 = double(float(ctx.f5.f64 - ctx.f28.f64));
	// fsubs f28,f24,f25
	ctx.f28.f64 = double(float(ctx.f24.f64 - ctx.f25.f64));
	// fadds f25,f26,f3
	ctx.f25.f64 = double(float(ctx.f26.f64 + ctx.f3.f64));
	// fsubs f24,f3,f26
	ctx.f24.f64 = double(float(ctx.f3.f64 - ctx.f26.f64));
	// lfs f3,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f26,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f5,f6,f27
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f27.f64));
	// stfs f25,0(r5)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f22,8(r5)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// addi r5,r5,-16
	ctx.r5.s64 = ctx.r5.s64 + -16;
	// stfs f21,0(r27)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fmuls f25,f10,f30
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fmuls f22,f10,f5
	ctx.f22.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fadds f10,f28,f31
	ctx.f10.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// fmsubs f25,f9,f5,f25
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 - ctx.f25.f64));
	// fmadds f30,f9,f30,f22
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f22.f64));
	// fsubs f9,f26,f3
	ctx.f9.f64 = double(float(ctx.f26.f64 - ctx.f3.f64));
	// fadds f5,f3,f26
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f26.f64));
	// fmuls f3,f0,f10
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmr f26,f10
	ctx.f26.f64 = ctx.f10.f64;
	// fsubs f10,f4,f29
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f29.f64));
	// fadds f6,f27,f6
	ctx.f6.f64 = double(float(ctx.f27.f64 + ctx.f6.f64));
	// fsubs f4,f2,f9
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// fadds f29,f5,f1
	ctx.f29.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfs f29,0(r26)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fsubs f5,f1,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// stfs f5,0(r22)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r22.u32 + 0, temp.u32);
	// stfs f24,0(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// stfs f23,8(r31)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// stfs f20,0(r24)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// fsubs f10,f31,f28
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// stfs f25,8(r7)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stfs f30,12(r7)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// fmuls f31,f0,f4
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmsubs f4,f13,f4,f3
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 - ctx.f3.f64));
	// stfs f4,0(r7)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r7,r7,-16
	ctx.r7.s64 = ctx.r7.s64 + -16;
	// fmadds f4,f13,f26,f31
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f26.f64 + ctx.f31.f64));
	// stfs f4,0(r25)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// fmuls f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmadds f8,f8,f5,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f4.f64));
	// stfs f8,8(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmsubs f8,f7,f1,f6
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 - ctx.f6.f64));
	// stfs f8,12(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmadds f8,f12,f10,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f8,0(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmsubs f10,f11,f10,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 - ctx.f9.f64));
	// addi r6,r6,-16
	ctx.r6.s64 = ctx.r6.s64 + -16;
	// stfs f10,0(r23)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// bne cr6,0x833c6af0
	if (!ctx.cr6.eq) goto loc_833C6AF0;
loc_833C6E20:
	// add r7,r3,r28
	ctx.r7.u64 = ctx.r3.u64 + ctx.r28.u64;
	// fadds f13,f13,f15
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f15.f64));
	// fadds f10,f0,f15
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f15.f64));
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 + ctx.r3.u64;
	// fsubs f12,f12,f15
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f15.f64));
	// addi r9,r7,-2
	ctx.r9.s64 = ctx.r7.s64 + -2;
	// fsubs f11,f11,f15
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f15.f64));
	// addi r8,r6,-2
	ctx.r8.s64 = ctx.r6.s64 + -2;
	// add r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 + ctx.r3.u64;
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r21,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f0,f13,f17
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f17.f64));
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f13,f10,f17
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f17.f64));
	// addi r3,r5,-2
	ctx.r3.s64 = ctx.r5.s64 + -2;
	// lfsx f8,r30,r4
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	ctx.f8.f64 = double(temp.f32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lfsx f6,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lfsx f10,r29,r4
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// fadds f3,f10,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// fsubs f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f12,f12,f16
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f16.f64));
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f16
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f16.f64));
	// lfs f5,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// addi r26,r5,2
	ctx.r26.s64 = ctx.r5.s64 + 2;
	// lfs f7,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// lfs f6,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// lfsx f4,r3,r4
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f4.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fadds f1,f8,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// addi r25,r7,2
	ctx.r25.s64 = ctx.r7.s64 + 2;
	// fsubs f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// fsubs f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fadds f4,f5,f2
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// stfs f4,-4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fadds f6,f1,f3
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// stfsx f6,r29,r4
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r4.u32, temp.u32);
	// fsubs f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// stfs f5,-4(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fadds f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fsubs f6,f3,f1
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// stfsx f6,r30,r4
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// fsubs f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// addi r30,r28,3
	ctx.r30.s64 = ctx.r28.s64 + 3;
	// fadds f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f3,f0,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmsubs f8,f13,f6,f4
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 - ctx.f4.f64));
	// stfsx f8,r31,r4
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// addi r31,r6,2
	ctx.r31.s64 = ctx.r6.s64 + 2;
	// fneg f6,f15
	ctx.f6.u64 = ctx.f15.u64 ^ 0x8000000000000000;
	// fmadds f8,f13,f5,f3
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f3.f64));
	// stfs f8,-4(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// addi r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 + 3;
	// fmuls f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// rlwinm r30,r6,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f8,f11,f9,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f8.f64));
	// stfsx f8,r3,r4
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, temp.u32);
	// addi r3,r28,2
	ctx.r3.s64 = ctx.r28.s64 + 2;
	// fmsubs f10,f12,f9,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f10.f64));
	// stfs f10,-4(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r27,r3,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f2,f10,f9
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfs f4,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f9,f7,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f3,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f1,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f7,f5,f4
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// rlwinm r31,r26,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// rlwinm r3,r25,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f4,f1,f3
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// addi r6,r5,3
	ctx.r6.s64 = ctx.r5.s64 + 3;
	// fsubs f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// fadds f2,f4,f7
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f9,f10,f3
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fadds f7,f8,f5
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fadds f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// fsubs f4,f9,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fadds f7,f7,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fsubs f9,f5,f8
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// fmuls f8,f4,f15
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f15.f64));
	// stfs f8,0(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f8,f7,f15
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f15.f64));
	// stfs f8,4(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfsx f8,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfsx f3,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f9,f7,f6
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// stfs f9,0(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// stfs f10,4(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfsx f9,r28,r4
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f10,r27,r4
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f6,r30,r4
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfsx f7,r29,r4
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfsx f5,r3,r4
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f5.f64 = double(temp.f32);
	// fadds f9,f7,f6
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fsubs f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fadds f6,f5,f8
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fsubs f8,f5,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// lfsx f5,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f5.f64 = double(temp.f32);
	// fadds f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfsx f2,r27,r4
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r4.u32, temp.u32);
	// fsubs f4,f4,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fadds f6,f5,f3
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// fsubs f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// fadds f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfsx f3,r29,r4
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r4.u32, temp.u32);
	// fsubs f6,f9,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// stfsx f6,r7,r4
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfsx f4,r3,r4
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, temp.u32);
	// fsubs f9,f10,f5
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// fmuls f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fadds f13,f5,f10
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fsubs f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmsubs f9,f0,f9,f4
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f4.f64));
	// stfsx f9,r28,r4
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r4.u32, temp.u32);
	// fmadds f0,f0,f6,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f3.f64));
	// stfsx f0,r30,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f0,f12,f10,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfsx f0,r31,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// fmsubs f0,f11,f10,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 - ctx.f13.f64));
	// stfsx f0,r6,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82cb6afc
	ctx.lr = 0x833C70B4;
	__restfpr_14(ctx, base);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C70B8"))) PPC_WEAK_FUNC(sub_833C70B8);
PPC_FUNC_IMPL(__imp__sub_833C70B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x833C70C0;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6ab0
	ctx.lr = 0x833C70C8;
	__savefpr_14(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// srawi r29,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r3.s32 >> 3;
	// fneg f1,f9
	ctx.f1.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r30,r5,8
	ctx.r30.s64 = ctx.r5.s64 + 8;
	// addi r26,r29,-2
	ctx.r26.s64 = ctx.r29.s64 + -2;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lfs f7,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f3,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// lfs f4,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f9,f4,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fsubs f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// fsubs f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fadds f6,f2,f3
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f6,f3,f2
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fadds f4,f8,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsubs f8,f1,f5
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// stfs f8,4(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fadds f8,f5,f1
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f8,f7,f10
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f8,0(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fsubs f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// stfs f4,4(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f10,0(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f9,4(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f15,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f15.f64 = double(temp.f32);
	// lfs f17,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f17.f64 = double(temp.f32);
	// lfs f16,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f16.f64 = double(temp.f32);
	// ble cr6,0x833c753c
	if (!ctx.cr6.gt) goto loc_833C753C;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// addi r31,r26,-3
	ctx.r31.s64 = ctx.r26.s64 + -3;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r31,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r31,r10,-16
	ctx.r31.s64 = ctx.r10.s64 + -16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r6,1
	ctx.r28.s64 = ctx.r6.s64 + 1;
	// add r6,r10,r4
	ctx.r6.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r6,16
	ctx.r10.s64 = ctx.r6.s64 + 16;
	// addi r7,r4,16
	ctx.r7.s64 = ctx.r4.s64 + 16;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r6,r6,-16
	ctx.r6.s64 = ctx.r6.s64 + -16;
loc_833C720C:
	// lfs f9,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fadds f1,f7,f9
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// lfs f4,-8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f29,f7,f9
	ctx.f29.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f9,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f25,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f30,f8,f10
	ctx.f30.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f22,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f22.f64 = double(temp.f32);
	// lfs f6,-4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fneg f21,f6
	ctx.f21.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f5,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f28,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f28.f64 = double(temp.f32);
	// fneg f20,f5
	ctx.f20.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f27,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// lfs f24,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f24.f64 = double(temp.f32);
	// fadds f19,f1,f3
	ctx.f19.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// lfs f8,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f14,f3,f1
	ctx.f14.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// lfs f23,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// fadds f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f4,f4,f9
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f25
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// lfs f2,-8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f11,f22
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f22.f64));
	// stfs f0,-224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// lfs f31,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f21,f21,f8
	ctx.f21.f64 = double(float(ctx.f21.f64 - ctx.f8.f64));
	// stfs f19,0(r7)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fadds f19,f27,f31
	ctx.f19.f64 = double(float(ctx.f27.f64 + ctx.f31.f64));
	// fsubs f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fsubs f31,f31,f27
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f27.f64));
	// fadds f8,f13,f24
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f24.f64));
	// fadds f27,f23,f12
	ctx.f27.f64 = double(float(ctx.f23.f64 + ctx.f12.f64));
	// fadds f1,f28,f2
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f2.f64));
	// fsubs f2,f2,f28
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f28.f64));
	// fadds f18,f26,f10
	ctx.f18.f64 = double(float(ctx.f26.f64 + ctx.f10.f64));
	// fsubs f20,f20,f7
	ctx.f20.f64 = double(float(ctx.f20.f64 - ctx.f7.f64));
	// fsubs f28,f10,f26
	ctx.f28.f64 = double(float(ctx.f10.f64 - ctx.f26.f64));
	// fmuls f10,f9,f17
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f17.f64));
	// fsubs f5,f7,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// fmr f0,f25
	ctx.f0.f64 = ctx.f25.f64;
	// fmuls f9,f8,f17
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f17.f64));
	// fmuls f8,f27,f16
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f16.f64));
	// fmr f13,f24
	ctx.f13.f64 = ctx.f24.f64;
	// fmr f12,f23
	ctx.f12.f64 = ctx.f23.f64;
	// fneg f11,f22
	ctx.f11.u64 = ctx.f22.u64 ^ 0x8000000000000000;
	// lfs f27,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f7,f27,f16
	ctx.f7.f64 = double(float(ctx.f27.f64 * ctx.f16.f64));
	// fadds f27,f1,f3
	ctx.f27.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// stfs f27,-8(r7)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r7.u32 + -8, temp.u32);
	// fsubs f3,f3,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fsubs f1,f21,f19
	ctx.f1.f64 = double(float(ctx.f21.f64 - ctx.f19.f64));
	// stfs f1,-4(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// fsubs f1,f20,f18
	ctx.f1.f64 = double(float(ctx.f20.f64 - ctx.f18.f64));
	// stfs f1,4(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fadds f1,f19,f21
	ctx.f1.f64 = double(float(ctx.f19.f64 + ctx.f21.f64));
	// stfs f3,-8(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// stfs f1,-4(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// fadds f3,f31,f4
	ctx.f3.f64 = double(float(ctx.f31.f64 + ctx.f4.f64));
	// fadds f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f14,0(r8)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fadds f27,f18,f20
	ctx.f27.f64 = double(float(ctx.f18.f64 + ctx.f20.f64));
	// stfs f27,4(r8)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fmr f27,f3
	ctx.f27.f64 = ctx.f3.f64;
	// fmuls f26,f9,f1
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmr f25,f1
	ctx.f25.f64 = ctx.f1.f64;
	// fmuls f24,f9,f3
	ctx.f24.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fadds f3,f28,f30
	ctx.f3.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// fadds f1,f29,f5
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f5.f64));
	// fmsubs f27,f10,f27,f26
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f27.f64 - ctx.f26.f64));
	// stfs f27,-8(r9)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// fmadds f27,f10,f25,f24
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f25.f64 + ctx.f24.f64));
	// stfs f27,-4(r9)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fmuls f27,f13,f1
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// fsubs f4,f4,f31
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f31.f64));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// fmuls f26,f13,f3
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// fsubs f6,f6,f2
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// fsubs f5,f5,f29
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f29.f64));
	// fmsubs f3,f0,f3,f27
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 - ctx.f27.f64));
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f2,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmadds f3,f0,f1,f26
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f26.f64));
	// stfs f3,4(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmr f1,f6
	ctx.f1.f64 = ctx.f6.f64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fmuls f4,f7,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// fsubs f6,f30,f28
	ctx.f6.f64 = double(float(ctx.f30.f64 - ctx.f28.f64));
	// fmsubs f4,f8,f1,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 - ctx.f4.f64));
	// stfs f4,-4(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmadds f3,f7,f3,f2
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f2.f64));
	// stfs f3,-8(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// fmuls f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f6,f11,f6
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmadds f4,f11,f5,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f4.f64));
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmsubs f6,f12,f5,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 - ctx.f6.f64));
	// stfs f6,4(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fneg f24,f6
	ctx.f24.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f3,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f31,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fadds f25,f3,f4
	ctx.f25.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// lfs f2,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f6,f2,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// lfs f28,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// fadds f3,f31,f1
	ctx.f3.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// lfs f27,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lfs f26,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// lfs f29,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// fadds f31,f28,f29
	ctx.f31.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f2,f24,f2
	ctx.f2.f64 = double(float(ctx.f24.f64 - ctx.f2.f64));
	// lfs f30,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fadds f24,f26,f27
	ctx.f24.f64 = double(float(ctx.f26.f64 + ctx.f27.f64));
	// fsubs f29,f28,f29
	ctx.f29.f64 = double(float(ctx.f28.f64 - ctx.f29.f64));
	// fsubs f28,f26,f27
	ctx.f28.f64 = double(float(ctx.f26.f64 - ctx.f27.f64));
	// lfs f26,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// fneg f23,f5
	ctx.f23.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f27,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f5,f30,f5
	ctx.f5.f64 = double(float(ctx.f30.f64 - ctx.f5.f64));
	// fadds f22,f31,f25
	ctx.f22.f64 = double(float(ctx.f31.f64 + ctx.f25.f64));
	// fsubs f20,f25,f31
	ctx.f20.f64 = double(float(ctx.f25.f64 - ctx.f31.f64));
	// lfs f31,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f21,f2,f24
	ctx.f21.f64 = double(float(ctx.f2.f64 - ctx.f24.f64));
	// fadds f19,f24,f2
	ctx.f19.f64 = double(float(ctx.f24.f64 + ctx.f2.f64));
	// lfs f24,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f24.f64 = double(temp.f32);
	// fadds f2,f29,f6
	ctx.f2.f64 = double(float(ctx.f29.f64 + ctx.f6.f64));
	// stfs f22,8(r3)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f25,f28,f4
	ctx.f25.f64 = double(float(ctx.f28.f64 + ctx.f4.f64));
	// stfs f21,12(r3)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fsubs f30,f23,f30
	ctx.f30.f64 = double(float(ctx.f23.f64 - ctx.f30.f64));
	// fsubs f23,f26,f27
	ctx.f23.f64 = double(float(ctx.f26.f64 - ctx.f27.f64));
	// fadds f27,f27,f26
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f26.f64));
	// fmuls f26,f10,f2
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmr f22,f2
	ctx.f22.f64 = ctx.f2.f64;
	// fmuls f21,f10,f25
	ctx.f21.f64 = double(float(ctx.f10.f64 * ctx.f25.f64));
	// fsubs f2,f24,f31
	ctx.f2.f64 = double(float(ctx.f24.f64 - ctx.f31.f64));
	// fadds f31,f24,f31
	ctx.f31.f64 = double(float(ctx.f24.f64 + ctx.f31.f64));
	// fadds f24,f27,f3
	ctx.f24.f64 = double(float(ctx.f27.f64 + ctx.f3.f64));
	// stfs f24,0(r3)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f3,f3,f27
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f27.f64));
	// fadds f10,f23,f5
	ctx.f10.f64 = double(float(ctx.f23.f64 + ctx.f5.f64));
	// fmsubs f27,f9,f25,f26
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f25.f64 - ctx.f26.f64));
	// fmadds f26,f9,f22,f21
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f22.f64 + ctx.f21.f64));
	// fadds f9,f2,f1
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fmuls f25,f0,f10
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// fmr f24,f10
	ctx.f24.f64 = ctx.f10.f64;
	// fsubs f10,f6,f29
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f29.f64));
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// fsubs f6,f30,f31
	ctx.f6.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f6,f31,f30
	ctx.f6.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// stfs f6,4(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// stfs f3,0(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmuls f3,f0,f9
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f20,8(r5)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fsubs f9,f4,f28
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f28.f64));
	// stfs f19,12(r5)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stfs f27,8(r6)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r5,r5,-16
	ctx.r5.s64 = ctx.r5.s64 + -16;
	// stfs f26,12(r6)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// fmr f31,f10
	ctx.f31.f64 = ctx.f10.f64;
	// fsubs f10,f5,f23
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f23.f64));
	// fmsubs f6,f13,f6,f25
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 - ctx.f25.f64));
	// stfs f6,0(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f6,f13,f24,f3
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f24.f64 + ctx.f3.f64));
	// stfs f6,4(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// addi r6,r6,-16
	ctx.r6.s64 = ctx.r6.s64 + -16;
	// fmuls f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fsubs f9,f1,f2
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fmadds f8,f8,f4,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f6.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmsubs f8,f7,f31,f5
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 - ctx.f5.f64));
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmadds f8,f12,f10,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmsubs f10,f11,f10,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 - ctx.f9.f64));
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// stfs f10,0(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// bne cr6,0x833c720c
	if (!ctx.cr6.eq) goto loc_833C720C;
loc_833C753C:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f13,f13,f15
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f15.f64));
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// fadds f10,f0,f15
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f15.f64));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// fsubs f12,f12,f15
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f15.f64));
	// addi r8,r7,-2
	ctx.r8.s64 = ctx.r7.s64 + -2;
	// fsubs f11,f11,f15
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f15.f64));
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r6,-2
	ctx.r8.s64 = ctx.r6.s64 + -2;
	// lfs f9,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fneg f2,f9
	ctx.f2.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// rlwinm r28,r26,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f0,f13,f17
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f17.f64));
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f13,f10,f17
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f17.f64));
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r30,r4
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r5,-2
	ctx.r3.s64 = ctx.r5.s64 + -2;
	// lfsx f6,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lfsx f10,r28,r4
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f3,f10,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// fsubs f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// fmuls f12,f12,f16
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f16.f64));
	// fmuls f11,f11,f16
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f16.f64));
	// addi r26,r5,2
	ctx.r26.s64 = ctx.r5.s64 + 2;
	// lfs f5,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// addi r25,r7,2
	ctx.r25.s64 = ctx.r7.s64 + 2;
	// lfsx f4,r3,r4
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// lfs f7,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// lfs f6,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f1,f8,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fsubs f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// fsubs f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fadds f6,f1,f3
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// stfsx f6,r28,r4
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r4.u32, temp.u32);
	// fsubs f4,f2,f5
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// stfs f4,-4(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fadds f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// stfs f5,-4(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fadds f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fsubs f6,f3,f1
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// stfsx f6,r30,r4
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// fadds f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fsubs f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmuls f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f3,f0,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmsubs f8,f13,f6,f4
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 - ctx.f4.f64));
	// stfsx f8,r31,r4
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// addi r31,r6,2
	ctx.r31.s64 = ctx.r6.s64 + 2;
	// fneg f6,f15
	ctx.f6.u64 = ctx.f15.u64 ^ 0x8000000000000000;
	// fmadds f8,f13,f5,f3
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f3.f64));
	// stfs f8,-4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// addi r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 + 3;
	// fmuls f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmadds f8,f11,f9,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f8.f64));
	// stfsx f8,r3,r4
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, temp.u32);
	// addi r3,r29,3
	ctx.r3.s64 = ctx.r29.s64 + 3;
	// fmsubs f10,f12,f9,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f10.f64));
	// stfs f10,-4(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// rlwinm r27,r3,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r29,2
	ctx.r3.s64 = ctx.r29.s64 + 2;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f7,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f9,f7,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f3,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fneg f31,f5
	ctx.f31.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f2,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// rlwinm r3,r25,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f7,f4,f5
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// rlwinm r31,r26,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f5,f2,f3
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// rlwinm r30,r6,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// addi r6,r5,3
	ctx.r6.s64 = ctx.r5.s64 + 3;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f2,f9,f1
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f2,0(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsubs f2,f1,f9
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fsubs f9,f31,f4
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f4.f64));
	// fadds f4,f3,f10
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// fsubs f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fsubs f1,f9,f5
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// stfs f1,4(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fadds f5,f5,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// stfs f5,4(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f9,f8,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f2,0(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fsubs f5,f4,f9
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fadds f4,f9,f4
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// fsubs f9,f7,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f8,f5,f15
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f15.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f8,f4,f15
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f15.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfsx f8,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// addi r11,r7,3
	ctx.r11.s64 = ctx.r7.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f9,f7,f6
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// stfs f9,0(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// stfs f10,4(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfsx f7,r29,r4
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f9,r28,r4
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f5,r3,r4
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f9,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfsx f10,r27,r4
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fadds f7,f5,f8
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// lfsx f6,r30,r4
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// fneg f3,f10
	ctx.f3.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsubs f8,f5,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// fsubs f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fadds f5,f7,f4
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fsubs f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// lfsx f3,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f4,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// lfsx f7,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfsx f5,r28,r4
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r4.u32, temp.u32);
	// fadds f5,f7,f3
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fsubs f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fsubs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// stfsx f3,r27,r4
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r4.u32, temp.u32);
	// fadds f5,f5,f6
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfsx f5,r11,r4
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// fadds f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfsx f4,r3,r4
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, temp.u32);
	// fadds f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fsubs f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fmuls f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f3,f13,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fsubs f13,f9,f7
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fmsubs f9,f0,f6,f4
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 - ctx.f4.f64));
	// stfsx f9,r29,r4
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r4.u32, temp.u32);
	// fmadds f0,f0,f5,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 + ctx.f3.f64));
	// stfsx f0,r30,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f0,f12,f10,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfsx f0,r31,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// fmsubs f0,f11,f10,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 - ctx.f13.f64));
	// stfsx f0,r6,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6afc
	ctx.lr = 0x833C77DC;
	__restfpr_14(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C77E0"))) PPC_WEAK_FUNC(sub_833C77E0);
PPC_FUNC_IMPL(__imp__sub_833C77E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x833C77E8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// srawi r26,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r3.s32 >> 3;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f9,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fadds f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fadds f10,f6,f7
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f10,f7,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fadds f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fadds f12,f9,f5
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fsubs f12,f5,f9
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsubs f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f8,4(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f31,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x833c7a90
	if (!ctx.cr6.gt) goto loc_833C7A90;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r8,-8
	ctx.r30.s64 = ctx.r8.s64 + -8;
	// addi r31,r26,-3
	ctx.r31.s64 = ctx.r26.s64 + -3;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r31,r31,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// rlwinm r31,r5,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// addi r5,r9,-8
	ctx.r5.s64 = ctx.r9.s64 + -8;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r6,r4,8
	ctx.r6.s64 = ctx.r4.s64 + 8;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
loc_833C7900:
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f5,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f2,f9,f10
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fadds f9,f7,f5
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// lfs f13,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fadds f5,f4,f8
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f5,0(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fsubs f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// fadds f5,f9,f2
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f5,4(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fsubs f5,f2,f9
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// stfs f8,0(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fsubs f9,f6,f7
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// stfs f5,4(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fadds f8,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// fsubs f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// fmuls f2,f0,f9
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// fadds f9,f7,f6
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fmuls f4,f0,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmadds f8,f13,f8,f2
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f2.f64));
	// stfs f8,4(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmsubs f7,f13,f5,f4
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 - ctx.f4.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// fmadds f8,f12,f10,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f8,0(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmsubs f10,f11,f10,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 - ctx.f9.f64));
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f2,f9,f10
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f9,f8,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f6,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f7,f5,f4
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f1,f6,f3
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// fsubs f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fsubs f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// fadds f4,f9,f2
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f4,0(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f3,f2,f9
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// fadds f4,f7,f1
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f2,f1,f7
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// stfs f3,0(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f2,4(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fsubs f9,f10,f5
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// fadds f7,f8,f6
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// fmuls f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// fmuls f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// fadds f13,f5,f10
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fsubs f10,f6,f8
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fmsubs f9,f0,f9,f4
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f4.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f0,f0,f7,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f0,f11,f10,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmsubs f0,f12,f10,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f13.f64));
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// bne cr6,0x833c7900
	if (!ctx.cr6.eq) goto loc_833C7900;
loc_833C7A90:
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fsubs f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fadds f9,f5,f6
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsubs f9,f6,f5
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fadds f7,f8,f4
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f8,4(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fadds f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fmuls f11,f7,f31
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f11,f9,f31
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C7B68"))) PPC_WEAK_FUNC(sub_833C7B68);
PPC_FUNC_IMPL(__imp__sub_833C7B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x833C7B70;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6adc
	ctx.lr = 0x833C7B78;
	__savefpr_25(ctx, base);
	// srawi r24,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r24.s64 = ctx.r3.s32 >> 3;
	// lfs f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r11,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r23,r4
	ctx.r10.u64 = ctx.r23.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f13,f7
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fsubs f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fsubs f10,f7,f5
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// fadds f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fsubs f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fadds f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f7,0(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fadds f7,f10,f6
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// stfs f7,4(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fsubs f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsubs f11,f6,f10
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f11,f5,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// ble cr6,0x833c7ea0
	if (!ctx.cr6.gt) goto loc_833C7EA0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r24,-3
	ctx.r3.s64 = ctx.r24.s64 + -3;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r31,r3,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// addi r28,r7,-8
	ctx.r28.s64 = ctx.r7.s64 + -8;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r6,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 1;
	// add r31,r11,r7
	ctx.r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r29,r30,r4
	ctx.r29.u64 = ctx.r30.u64 + ctx.r4.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r7,r8,8
	ctx.r7.s64 = ctx.r8.s64 + 8;
	// addi r31,r8,-8
	ctx.r31.s64 = ctx.r8.s64 + -8;
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
loc_833C7CBC:
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f5,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// lfs f2,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f28,f5,f1
	ctx.f28.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f1,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// lfs f30,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f29,f6,f2
	ctx.f29.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// lfs f3,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f6,f2,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fadds f26,f3,f30
	ctx.f26.f64 = double(float(ctx.f3.f64 + ctx.f30.f64));
	// lfs f31,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// lfs f4,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f30,f3
	ctx.f3.f64 = double(float(ctx.f30.f64 - ctx.f3.f64));
	// fsubs f27,f4,f31
	ctx.f27.f64 = double(float(ctx.f4.f64 - ctx.f31.f64));
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f4,f31,f4
	ctx.f4.f64 = double(float(ctx.f31.f64 + ctx.f4.f64));
	// lfs f12,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r26,r29,4
	ctx.r26.s64 = ctx.r29.s64 + 4;
	// fmuls f2,f13,f28
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// lfs f0,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f1,f13,f29
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f11,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f25,f9,f6
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f7,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f31,f12,f26
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// addi r25,r28,4
	ctx.r25.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// fmuls f30,f12,f27
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// fmsubs f2,f0,f29,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 - ctx.f2.f64));
	// fmuls f29,f10,f6
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmadds f6,f0,f28,f1
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f1.f64));
	// fmuls f28,f8,f4
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmsubs f1,f11,f27,f31
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 - ctx.f31.f64));
	// fmadds f31,f11,f26,f30
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f30.f64));
	// fmuls f30,f7,f4
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fadds f4,f1,f2
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f4,0(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f4,f2,f1
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fadds f2,f31,f6
	ctx.f2.f64 = double(float(ctx.f31.f64 + ctx.f6.f64));
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f4,0(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fsubs f2,f6,f31
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f31.f64));
	// fmadds f4,f7,f3,f28
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f28.f64));
	// stfs f2,4(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmadds f6,f10,f5,f25
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f25.f64));
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// fmsubs f5,f9,f5,f29
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 - ctx.f29.f64));
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// fmsubs f3,f8,f3,f30
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 - ctx.f30.f64));
	// fadds f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfs f2,0(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fsubs f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// fadds f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// stfs f2,4(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fsubs f6,f5,f3
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// stfs f6,4(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lfs f6,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f29,f6,f2
	ctx.f29.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// lfs f4,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f6,f2,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// lfs f3,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fadds f28,f5,f1
	ctx.f28.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// lfs f30,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f27,f4,f31
	ctx.f27.f64 = double(float(ctx.f4.f64 - ctx.f31.f64));
	// fadds f26,f3,f30
	ctx.f26.f64 = double(float(ctx.f3.f64 + ctx.f30.f64));
	// fmuls f2,f11,f28
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fsubs f5,f1,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// fmuls f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fadds f4,f31,f4
	ctx.f4.f64 = double(float(ctx.f31.f64 + ctx.f4.f64));
	// fmuls f31,f0,f27
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fsubs f3,f30,f3
	ctx.f3.f64 = double(float(ctx.f30.f64 - ctx.f3.f64));
	// fmuls f30,f7,f6
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmsubs f0,f12,f29,f2
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 - ctx.f2.f64));
	// fmadds f12,f12,f28,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f11.f64));
	// fmsubs f11,f13,f27,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 - ctx.f1.f64));
	// fmuls f2,f10,f4
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmadds f13,f13,f26,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f26.f64 + ctx.f31.f64));
	// fmuls f4,f9,f4
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fadds f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f1,0(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,0(r26)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f0,f8,f5,f30
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f30.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f12,f9,f3,f2
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f2.f64));
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// fmsubs f11,f10,f3,f4
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 - ctx.f4.f64));
	// fmsubs f13,f7,f5,f6
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 - ctx.f6.f64));
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fadds f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// fsubs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// addi r28,r28,-8
	ctx.r28.s64 = ctx.r28.s64 + -8;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// bne cr6,0x833c7cbc
	if (!ctx.cr6.eq) goto loc_833C7CBC;
loc_833C7EA0:
	// add r8,r23,r5
	ctx.r8.u64 = ctx.r23.u64 + ctx.r5.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f5,f9,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f4,f8,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fsubs f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fmuls f6,f13,f3
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f2,f13,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f31,f0,f4
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f30,f0,f12
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f29,f13,f8
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmadds f6,f0,f5,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmuls f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmsubs f9,f0,f3,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 - ctx.f2.f64));
	// fmuls f3,f13,f11
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmsubs f7,f13,f7,f31
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 - ctx.f31.f64));
	// fmsubs f11,f0,f11,f29
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f29.f64));
	// fmsubs f12,f13,f12,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f1.f64));
	// fmadds f5,f13,f4,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fmadds f13,f13,f10,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f30.f64));
	// fmadds f0,f0,f8,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fadds f4,f7,f9
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsubs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f4,4(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fsubs f9,f6,f5
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// stfs f9,4(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6b28
	ctx.lr = 0x833C7FA0;
	__restfpr_25(ctx, base);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C7FA4"))) PPC_WEAK_FUNC(sub_833C7FA4);
PPC_FUNC_IMPL(__imp__sub_833C7FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C7FA8"))) PPC_WEAK_FUNC(sub_833C7FA8);
PPC_FUNC_IMPL(__imp__sub_833C7FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ab0
	ctx.lr = 0x833C7FB8;
	__savefpr_14(ctx, base);
	// lfs f8,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f25,f8,f9
	ctx.f25.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fadds f26,f12,f10
	ctx.f26.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f4,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fadds f8,f6,f7
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// lfs f5,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fadds f6,f4,f5
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f3,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// lfs f1,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fadds f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f28,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f27.f64 = double(temp.f32);
	// lfs f30,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f29.f64 = double(temp.f32);
	// fadds f11,f8,f26
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f26.f64));
	// lfs f22,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f22.f64 = double(temp.f32);
	// fsubs f8,f26,f8
	ctx.f8.f64 = double(float(ctx.f26.f64 - ctx.f8.f64));
	// lfs f21,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f21.f64 = double(temp.f32);
	// fadds f26,f2,f3
	ctx.f26.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// lfs f20,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f20.f64 = double(temp.f32);
	// fadds f4,f6,f25
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f25.f64));
	// lfs f19,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// lfs f18,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f18.f64 = double(temp.f32);
	// fsubs f6,f25,f6
	ctx.f6.f64 = double(float(ctx.f25.f64 - ctx.f6.f64));
	// lfs f17,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f17.f64 = double(temp.f32);
	// fadds f25,f31,f1
	ctx.f25.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// lfs f16,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f16.f64 = double(temp.f32);
	// fsubs f2,f31,f1
	ctx.f2.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lfs f15,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f31,f27,f28
	ctx.f31.f64 = double(float(ctx.f27.f64 - ctx.f28.f64));
	// fsubs f24,f10,f5
	ctx.f24.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// fadds f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fadds f5,f27,f28
	ctx.f5.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// fsubs f1,f29,f30
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// fadds f23,f7,f9
	ctx.f23.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fsubs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fadds f7,f29,f30
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fsubs f27,f3,f31
	ctx.f27.f64 = double(float(ctx.f3.f64 - ctx.f31.f64));
	// fadds f3,f31,f3
	ctx.f3.f64 = double(float(ctx.f31.f64 + ctx.f3.f64));
	// fadds f29,f5,f25
	ctx.f29.f64 = double(float(ctx.f5.f64 + ctx.f25.f64));
	// fsubs f5,f25,f5
	ctx.f5.f64 = double(float(ctx.f25.f64 - ctx.f5.f64));
	// fadds f28,f1,f2
	ctx.f28.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fsubs f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fadds f30,f7,f26
	ctx.f30.f64 = double(float(ctx.f7.f64 + ctx.f26.f64));
	// fsubs f7,f26,f7
	ctx.f7.f64 = double(float(ctx.f26.f64 - ctx.f7.f64));
	// fmuls f25,f27,f13
	ctx.f25.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// fmuls f26,f28,f13
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// fmadds f31,f28,f12,f25
	ctx.f31.f64 = double(float(ctx.f28.f64 * ctx.f12.f64 + ctx.f25.f64));
	// lfs f25,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f28,f2,f12
	ctx.f28.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmsubs f1,f27,f12,f26
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f12.f64 - ctx.f26.f64));
	// lfs f27,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f26.f64 = double(temp.f32);
	// fmsubs f28,f3,f13,f28
	ctx.f28.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 - ctx.f28.f64));
	// fmadds f3,f3,f12,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f2.f64));
	// lfs f2,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// fadds f14,f27,f2
	ctx.f14.f64 = double(float(ctx.f27.f64 + ctx.f2.f64));
	// fsubs f27,f27,f2
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f2.f64));
	// stfs f27,-188(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fadds f2,f25,f26
	ctx.f2.f64 = double(float(ctx.f25.f64 + ctx.f26.f64));
	// fsubs f26,f25,f26
	ctx.f26.f64 = double(float(ctx.f25.f64 - ctx.f26.f64));
	// stfs f26,-192(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fadds f26,f21,f22
	ctx.f26.f64 = double(float(ctx.f21.f64 + ctx.f22.f64));
	// fsubs f22,f21,f22
	ctx.f22.f64 = double(float(ctx.f21.f64 - ctx.f22.f64));
	// fadds f25,f19,f20
	ctx.f25.f64 = double(float(ctx.f19.f64 + ctx.f20.f64));
	// fsubs f21,f19,f20
	ctx.f21.f64 = double(float(ctx.f19.f64 - ctx.f20.f64));
	// fadds f20,f26,f14
	ctx.f20.f64 = double(float(ctx.f26.f64 + ctx.f14.f64));
	// stfs f20,-168(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// fsubs f26,f14,f26
	ctx.f26.f64 = double(float(ctx.f14.f64 - ctx.f26.f64));
	// stfs f26,-172(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// fadds f26,f25,f2
	ctx.f26.f64 = double(float(ctx.f25.f64 + ctx.f2.f64));
	// stfs f26,-164(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// fsubs f2,f2,f25
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f25.f64));
	// stfs f2,-176(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// lfs f2,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f2.f64 = double(temp.f32);
	// fadds f19,f22,f2
	ctx.f19.f64 = double(float(ctx.f22.f64 + ctx.f2.f64));
	// lfs f2,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f25,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f20,f27,f21
	ctx.f20.f64 = double(float(ctx.f27.f64 - ctx.f21.f64));
	// lfs f27,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f27.f64 = double(temp.f32);
	// fadds f26,f27,f2
	ctx.f26.f64 = double(float(ctx.f27.f64 + ctx.f2.f64));
	// stfs f26,-184(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// lfs f26,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f2,f27,f2
	ctx.f2.f64 = double(float(ctx.f27.f64 - ctx.f2.f64));
	// fadds f14,f25,f26
	ctx.f14.f64 = double(float(ctx.f25.f64 + ctx.f26.f64));
	// stfs f14,-180(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// fsubs f26,f25,f26
	ctx.f26.f64 = double(float(ctx.f25.f64 - ctx.f26.f64));
	// fsubs f25,f15,f16
	ctx.f25.f64 = double(float(ctx.f15.f64 - ctx.f16.f64));
	// fsubs f14,f20,f19
	ctx.f14.f64 = double(float(ctx.f20.f64 - ctx.f19.f64));
	// fadds f19,f19,f20
	ctx.f19.f64 = double(float(ctx.f19.f64 + ctx.f20.f64));
	// lfs f20,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f20.f64 = double(temp.f32);
	// fadds f21,f21,f20
	ctx.f21.f64 = double(float(ctx.f21.f64 + ctx.f20.f64));
	// lfs f20,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f22,f20,f22
	ctx.f22.f64 = double(float(ctx.f20.f64 - ctx.f22.f64));
	// fsubs f20,f17,f18
	ctx.f20.f64 = double(float(ctx.f17.f64 - ctx.f18.f64));
	// fmuls f27,f14,f0
	ctx.f27.f64 = double(float(ctx.f14.f64 * ctx.f0.f64));
	// fmuls f19,f19,f0
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f0.f64));
	// fadds f14,f22,f21
	ctx.f14.f64 = double(float(ctx.f22.f64 + ctx.f21.f64));
	// fsubs f22,f22,f21
	ctx.f22.f64 = double(float(ctx.f22.f64 - ctx.f21.f64));
	// stfs f22,-188(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fadds f22,f17,f18
	ctx.f22.f64 = double(float(ctx.f17.f64 + ctx.f18.f64));
	// fadds f21,f15,f16
	ctx.f21.f64 = double(float(ctx.f15.f64 + ctx.f16.f64));
	// fmuls f18,f14,f0
	ctx.f18.f64 = double(float(ctx.f14.f64 * ctx.f0.f64));
	// lfs f15,-184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	ctx.f15.f64 = double(temp.f32);
	// fadds f16,f15,f22
	ctx.f16.f64 = double(float(ctx.f15.f64 + ctx.f22.f64));
	// fsubs f22,f22,f15
	ctx.f22.f64 = double(float(ctx.f22.f64 - ctx.f15.f64));
	// stfs f22,-184(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// lfs f22,-180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	ctx.f22.f64 = double(temp.f32);
	// fadds f15,f22,f21
	ctx.f15.f64 = double(float(ctx.f22.f64 + ctx.f21.f64));
	// fsubs f22,f21,f22
	ctx.f22.f64 = double(float(ctx.f21.f64 - ctx.f22.f64));
	// stfs f22,-180(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// fadds f21,f2,f25
	ctx.f21.f64 = double(float(ctx.f2.f64 + ctx.f25.f64));
	// fsubs f22,f20,f26
	ctx.f22.f64 = double(float(ctx.f20.f64 - ctx.f26.f64));
	// fadds f26,f26,f20
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f20.f64));
	// fsubs f2,f25,f2
	ctx.f2.f64 = double(float(ctx.f25.f64 - ctx.f2.f64));
	// fmr f20,f26
	ctx.f20.f64 = ctx.f26.f64;
	// lfs f14,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f17,f14,f0
	ctx.f17.f64 = double(float(ctx.f14.f64 * ctx.f0.f64));
	// stfs f15,-188(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fmuls f14,f21,f12
	ctx.f14.f64 = double(float(ctx.f21.f64 * ctx.f12.f64));
	// fmuls f21,f21,f13
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f13.f64));
	// fmr f15,f22
	ctx.f15.f64 = ctx.f22.f64;
	// fadds f25,f17,f9
	ctx.f25.f64 = double(float(ctx.f17.f64 + ctx.f9.f64));
	// fmsubs f22,f22,f13,f14
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f13.f64 - ctx.f14.f64));
	// fmadds f21,f15,f12,f21
	ctx.f21.f64 = double(float(ctx.f15.f64 * ctx.f12.f64 + ctx.f21.f64));
	// fmuls f15,f26,f13
	ctx.f15.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fsubs f26,f10,f18
	ctx.f26.f64 = double(float(ctx.f10.f64 - ctx.f18.f64));
	// fadds f10,f18,f10
	ctx.f10.f64 = double(float(ctx.f18.f64 + ctx.f10.f64));
	// fmuls f18,f2,f13
	ctx.f18.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fsubs f13,f9,f17
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f17.f64));
	// fmsubs f9,f20,f12,f18
	ctx.f9.f64 = double(float(ctx.f20.f64 * ctx.f12.f64 - ctx.f18.f64));
	// fmadds f12,f2,f12,f15
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f15.f64));
	// fsubs f2,f28,f9
	ctx.f2.f64 = double(float(ctx.f28.f64 - ctx.f9.f64));
	// fsubs f20,f3,f12
	ctx.f20.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fadds f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// fadds f9,f9,f28
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f28.f64));
	// fadds f3,f2,f26
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f26.f64));
	// stfs f3,96(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// fadds f3,f20,f13
	ctx.f3.f64 = double(float(ctx.f20.f64 + ctx.f13.f64));
	// stfs f3,100(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fsubs f3,f26,f2
	ctx.f3.f64 = double(float(ctx.f26.f64 - ctx.f2.f64));
	// stfs f3,104(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// fsubs f13,f13,f20
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f20.f64));
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// fadds f13,f27,f24
	ctx.f13.f64 = double(float(ctx.f27.f64 + ctx.f24.f64));
	// fadds f3,f19,f23
	ctx.f3.f64 = double(float(ctx.f19.f64 + ctx.f23.f64));
	// fadds f2,f22,f1
	ctx.f2.f64 = double(float(ctx.f22.f64 + ctx.f1.f64));
	// fadds f28,f21,f31
	ctx.f28.f64 = double(float(ctx.f21.f64 + ctx.f31.f64));
	// fsubs f26,f10,f12
	ctx.f26.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f26,112(r3)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f12,120(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// fsubs f12,f25,f9
	ctx.f12.f64 = double(float(ctx.f25.f64 - ctx.f9.f64));
	// stfs f12,124(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// fadds f26,f9,f25
	ctx.f26.f64 = double(float(ctx.f9.f64 + ctx.f25.f64));
	// stfs f26,116(r3)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// fsubs f9,f1,f22
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f22.f64));
	// fsubs f1,f31,f21
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f21.f64));
	// fsubs f10,f23,f19
	ctx.f10.f64 = double(float(ctx.f23.f64 - ctx.f19.f64));
	// fsubs f12,f24,f27
	ctx.f12.f64 = double(float(ctx.f24.f64 - ctx.f27.f64));
	// fadds f31,f2,f13
	ctx.f31.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// stfs f31,64(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// fsubs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// fadds f31,f28,f3
	ctx.f31.f64 = double(float(ctx.f28.f64 + ctx.f3.f64));
	// stfs f31,68(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// fsubs f13,f3,f28
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// lfs f31,-184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,-180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	ctx.f28.f64 = double(temp.f32);
	// fadds f3,f31,f5
	ctx.f3.f64 = double(float(ctx.f31.f64 + ctx.f5.f64));
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// fsubs f13,f7,f28
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f28.f64));
	// fadds f2,f9,f10
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f2,84(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// fsubs f2,f12,f1
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// stfs f2,80(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fadds f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfs f12,88(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f1,-176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f9,f5,f31
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f31.f64));
	// lfs f2,-172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	ctx.f2.f64 = double(temp.f32);
	// stfs f12,92(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fadds f12,f1,f8
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// fsubs f10,f6,f2
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// fsubs f27,f13,f3
	ctx.f27.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fadds f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fadds f13,f28,f7
	ctx.f13.f64 = double(float(ctx.f28.f64 + ctx.f7.f64));
	// fmuls f7,f27,f0
	ctx.f7.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fmuls f5,f3,f0
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fsubs f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fadds f31,f9,f13
	ctx.f31.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fsubs f13,f8,f1
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// fadds f9,f2,f6
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fmuls f8,f3,f0
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fadds f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fsubs f13,f9,f5
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f7,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f5,f9
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fadds f9,f7,f29
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f29.f64));
	// stfs f6,36(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fsubs f7,f29,f7
	ctx.f7.f64 = double(float(ctx.f29.f64 - ctx.f7.f64));
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f12,-168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f10,f8
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fadds f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f10,-164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f13,f10,f4
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// fsubs f11,f4,f10
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fadds f10,f16,f30
	ctx.f10.f64 = double(float(ctx.f16.f64 + ctx.f30.f64));
	// fsubs f8,f30,f16
	ctx.f8.f64 = double(float(ctx.f30.f64 - ctx.f16.f64));
	// fadds f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fsubs f0,f12,f7
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f0,f8,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fadds f0,f7,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fsubs f0,f11,f8
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6afc
	ctx.lr = 0x833C83BC;
	__restfpr_14(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C83C8"))) PPC_WEAK_FUNC(sub_833C83C8);
PPC_FUNC_IMPL(__imp__sub_833C83C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ab0
	ctx.lr = 0x833C83D8;
	__savefpr_14(ctx, base);
	// lfs f5,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f21,f3,f4
	ctx.f21.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fsubs f22,f6,f5
	ctx.f22.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// lfs f28,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f5,f3,f4
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// lfs f27,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fadds f19,f27,f28
	ctx.f19.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f29.f64 = double(temp.f32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f20,f7,f29
	ctx.f20.f64 = double(float(ctx.f7.f64 - ctx.f29.f64));
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f18,f22,f21
	ctx.f18.f64 = double(float(ctx.f22.f64 - ctx.f21.f64));
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f22,f21,f22
	ctx.f22.f64 = double(float(ctx.f21.f64 + ctx.f22.f64));
	// lfs f25,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f25.f64 = double(temp.f32);
	// fadds f17,f5,f6
	ctx.f17.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// lfs f23,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f23.f64 = double(temp.f32);
	// fadds f7,f29,f7
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f7.f64));
	// lfs f26,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f29,f27,f28
	ctx.f29.f64 = double(float(ctx.f27.f64 - ctx.f28.f64));
	// lfs f24,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f24.f64 = double(temp.f32);
	// lfs f11,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f18,f0
	ctx.f4.f64 = double(float(ctx.f18.f64 * ctx.f0.f64));
	// fsubs f18,f6,f5
	ctx.f18.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmuls f3,f22,f0
	ctx.f3.f64 = double(float(ctx.f22.f64 * ctx.f0.f64));
	// fsubs f6,f2,f1
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fadds f5,f30,f31
	ctx.f5.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fmuls f27,f17,f0
	ctx.f27.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// fadds f22,f4,f20
	ctx.f22.f64 = double(float(ctx.f4.f64 + ctx.f20.f64));
	// fmuls f28,f18,f0
	ctx.f28.f64 = double(float(ctx.f18.f64 * ctx.f0.f64));
	// fadds f21,f3,f19
	ctx.f21.f64 = double(float(ctx.f3.f64 + ctx.f19.f64));
	// fsubs f3,f19,f3
	ctx.f3.f64 = double(float(ctx.f19.f64 - ctx.f3.f64));
	// fmr f19,f6
	ctx.f19.f64 = ctx.f6.f64;
	// fmuls f18,f5,f12
	ctx.f18.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmr f17,f6
	ctx.f17.f64 = ctx.f6.f64;
	// fmuls f16,f5,f13
	ctx.f16.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fadds f5,f23,f24
	ctx.f5.f64 = double(float(ctx.f23.f64 + ctx.f24.f64));
	// fsubs f6,f26,f25
	ctx.f6.f64 = double(float(ctx.f26.f64 - ctx.f25.f64));
	// fsubs f4,f20,f4
	ctx.f4.f64 = double(float(ctx.f20.f64 - ctx.f4.f64));
	// fadds f20,f28,f29
	ctx.f20.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// fsubs f29,f29,f28
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// fsubs f28,f7,f27
	ctx.f28.f64 = double(float(ctx.f7.f64 - ctx.f27.f64));
	// fadds f7,f27,f7
	ctx.f7.f64 = double(float(ctx.f27.f64 + ctx.f7.f64));
	// fmsubs f27,f19,f13,f18
	ctx.f27.f64 = double(float(ctx.f19.f64 * ctx.f13.f64 - ctx.f18.f64));
	// fadds f26,f25,f26
	ctx.f26.f64 = double(float(ctx.f25.f64 + ctx.f26.f64));
	// lfs f25,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f19,f17,f12,f16
	ctx.f19.f64 = double(float(ctx.f17.f64 * ctx.f12.f64 + ctx.f16.f64));
	// fmuls f18,f5,f11
	ctx.f18.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmr f17,f5
	ctx.f17.f64 = ctx.f5.f64;
	// fmuls f16,f6,f11
	ctx.f16.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fadds f5,f1,f2
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fsubs f2,f30,f31
	ctx.f2.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f30,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f24,f23,f24
	ctx.f24.f64 = double(float(ctx.f23.f64 - ctx.f24.f64));
	// lfs f23,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f23.f64 = double(temp.f32);
	// fmsubs f6,f6,f10,f18
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 - ctx.f18.f64));
	// fmadds f1,f17,f10,f16
	ctx.f1.f64 = double(float(ctx.f17.f64 * ctx.f10.f64 + ctx.f16.f64));
	// fmr f17,f5
	ctx.f17.f64 = ctx.f5.f64;
	// fmuls f16,f2,f10
	ctx.f16.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmr f15,f5
	ctx.f15.f64 = ctx.f5.f64;
	// lfs f5,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f14,f2,f11
	ctx.f14.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// lfs f2,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fadds f31,f6,f27
	ctx.f31.f64 = double(float(ctx.f6.f64 + ctx.f27.f64));
	// fsubs f6,f27,f6
	ctx.f6.f64 = double(float(ctx.f27.f64 - ctx.f6.f64));
	// lfs f27,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// fadds f18,f1,f19
	ctx.f18.f64 = double(float(ctx.f1.f64 + ctx.f19.f64));
	// stfs f18,-192(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// lfs f18,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f18.f64 = double(temp.f32);
	// fmsubs f17,f17,f11,f16
	ctx.f17.f64 = double(float(ctx.f17.f64 * ctx.f11.f64 - ctx.f16.f64));
	// stfs f17,-204(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fsubs f19,f19,f1
	ctx.f19.f64 = double(float(ctx.f19.f64 - ctx.f1.f64));
	// fmadds f1,f15,f10,f14
	ctx.f1.f64 = double(float(ctx.f15.f64 * ctx.f10.f64 + ctx.f14.f64));
	// stfs f1,-208(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fmuls f16,f26,f13
	ctx.f16.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fmr f15,f24
	ctx.f15.f64 = ctx.f24.f64;
	// fmuls f14,f26,f12
	ctx.f14.f64 = double(float(ctx.f26.f64 * ctx.f12.f64));
	// fsubs f1,f30,f27
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f27.f64));
	// fadds f26,f2,f5
	ctx.f26.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fsubs f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// fadds f30,f27,f30
	ctx.f30.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// fmadds f24,f24,f12,f16
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f12.f64 + ctx.f16.f64));
	// fmsubs f16,f15,f13,f14
	ctx.f16.f64 = double(float(ctx.f15.f64 * ctx.f13.f64 - ctx.f14.f64));
	// stfs f16,-200(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fmr f14,f1
	ctx.f14.f64 = ctx.f1.f64;
	// fmr f16,f1
	ctx.f16.f64 = ctx.f1.f64;
	// fmuls f1,f26,f9
	ctx.f1.f64 = double(float(ctx.f26.f64 * ctx.f9.f64));
	// stfs f1,-196(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// fmuls f15,f26,f8
	ctx.f15.f64 = double(float(ctx.f26.f64 * ctx.f8.f64));
	// lfs f1,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f26,f17,f24
	ctx.f26.f64 = double(float(ctx.f17.f64 - ctx.f24.f64));
	// stfs f26,-180(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// fmr f26,f17
	ctx.f26.f64 = ctx.f17.f64;
	// fmsubs f16,f16,f9,f15
	ctx.f16.f64 = double(float(ctx.f16.f64 * ctx.f9.f64 - ctx.f15.f64));
	// fadds f26,f24,f26
	ctx.f26.f64 = double(float(ctx.f24.f64 + ctx.f26.f64));
	// stfs f26,-188(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// lfs f24,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f24.f64 = double(temp.f32);
	// lfs f26,-200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f24,f24,f26
	ctx.f24.f64 = double(float(ctx.f24.f64 - ctx.f26.f64));
	// stfs f24,-176(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// lfs f24,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f24.f64 = double(temp.f32);
	// lfs f15,-196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	ctx.f15.f64 = double(temp.f32);
	// fadds f17,f26,f24
	ctx.f17.f64 = double(float(ctx.f26.f64 + ctx.f24.f64));
	// fmadds f26,f14,f8,f15
	ctx.f26.f64 = double(float(ctx.f14.f64 * ctx.f8.f64 + ctx.f15.f64));
	// stfs f26,-208(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fsubs f26,f25,f23
	ctx.f26.f64 = double(float(ctx.f25.f64 - ctx.f23.f64));
	// fadds f24,f18,f1
	ctx.f24.f64 = double(float(ctx.f18.f64 + ctx.f1.f64));
	// fsubs f1,f18,f1
	ctx.f1.f64 = double(float(ctx.f18.f64 - ctx.f1.f64));
	// lfs f18,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f14,f26,f9
	ctx.f14.f64 = double(float(ctx.f26.f64 * ctx.f9.f64));
	// fmuls f15,f24,f9
	ctx.f15.f64 = double(float(ctx.f24.f64 * ctx.f9.f64));
	// fmadds f27,f24,f8,f14
	ctx.f27.f64 = double(float(ctx.f24.f64 * ctx.f8.f64 + ctx.f14.f64));
	// fmsubs f2,f26,f8,f15
	ctx.f2.f64 = double(float(ctx.f26.f64 * ctx.f8.f64 - ctx.f15.f64));
	// fmuls f15,f5,f9
	ctx.f15.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmr f14,f5
	ctx.f14.f64 = ctx.f5.f64;
	// fmuls f5,f30,f9
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f9.f64));
	// stfs f5,-196(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// fadds f5,f23,f25
	ctx.f5.f64 = double(float(ctx.f23.f64 + ctx.f25.f64));
	// fmr f24,f30
	ctx.f24.f64 = ctx.f30.f64;
	// fmuls f23,f1,f8
	ctx.f23.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmuls f1,f1,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fadds f30,f2,f16
	ctx.f30.f64 = double(float(ctx.f2.f64 + ctx.f16.f64));
	// fsubs f2,f16,f2
	ctx.f2.f64 = double(float(ctx.f16.f64 - ctx.f2.f64));
	// lfs f16,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f16.f64 = double(temp.f32);
	// fmsubs f9,f5,f9,f23
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 - ctx.f23.f64));
	// lfs f23,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f23.f64 = double(temp.f32);
	// lfs f25,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f25.f64 = double(temp.f32);
	// fadds f26,f27,f25
	ctx.f26.f64 = double(float(ctx.f27.f64 + ctx.f25.f64));
	// fsubs f27,f25,f27
	ctx.f27.f64 = double(float(ctx.f25.f64 - ctx.f27.f64));
	// fmsubs f25,f24,f8,f15
	ctx.f25.f64 = double(float(ctx.f24.f64 * ctx.f8.f64 - ctx.f15.f64));
	// lfs f15,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f15.f64 = double(temp.f32);
	// lfs f24,-196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f24,f14,f8,f24
	ctx.f24.f64 = double(float(ctx.f14.f64 * ctx.f8.f64 + ctx.f24.f64));
	// fmadds f8,f5,f8,f1
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f1.f64));
	// lfs f5,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f14,f25,f9
	ctx.f14.f64 = double(float(ctx.f25.f64 - ctx.f9.f64));
	// lfs f1,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// fadds f9,f9,f25
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f25.f64));
	// stfs f9,-168(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// stfs f14,-200(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fsubs f9,f24,f8
	ctx.f9.f64 = double(float(ctx.f24.f64 - ctx.f8.f64));
	// stfs f9,-184(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// fadds f9,f8,f24
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f24.f64));
	// stfs f9,-172(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// fsubs f9,f5,f1
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// fadds f8,f18,f23
	ctx.f8.f64 = double(float(ctx.f18.f64 + ctx.f23.f64));
	// fmr f24,f9
	ctx.f24.f64 = ctx.f9.f64;
	// fmr f14,f9
	ctx.f14.f64 = ctx.f9.f64;
	// fmuls f9,f8,f10
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f9,-196(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// lfs f9,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fadds f25,f9,f15
	ctx.f25.f64 = double(float(ctx.f9.f64 + ctx.f15.f64));
	// lfs f9,-196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f9,f24,f11,f9
	ctx.f9.f64 = double(float(ctx.f24.f64 * ctx.f11.f64 - ctx.f9.f64));
	// stfs f9,-204(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fmadds f9,f14,f10,f8
	ctx.f9.f64 = double(float(ctx.f14.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f9,-208(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// lfs f9,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f14,f25,f13
	ctx.f14.f64 = double(float(ctx.f25.f64 * ctx.f13.f64));
	// fsubs f8,f16,f9
	ctx.f8.f64 = double(float(ctx.f16.f64 - ctx.f9.f64));
	// fmr f24,f8
	ctx.f24.f64 = ctx.f8.f64;
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f8,-196(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// fadds f8,f1,f5
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fsubs f5,f18,f23
	ctx.f5.f64 = double(float(ctx.f18.f64 - ctx.f23.f64));
	// fmsubs f1,f24,f12,f14
	ctx.f1.f64 = double(float(ctx.f24.f64 * ctx.f12.f64 - ctx.f14.f64));
	// fmr f23,f8
	ctx.f23.f64 = ctx.f8.f64;
	// fmuls f18,f5,f13
	ctx.f18.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmr f14,f5
	ctx.f14.f64 = ctx.f5.f64;
	// lfs f5,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	ctx.f5.f64 = double(temp.f32);
	// fadds f8,f1,f5
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fsubs f5,f5,f1
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// lfs f24,-196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	ctx.f24.f64 = double(temp.f32);
	// stfs f13,-196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// fmadds f25,f25,f12,f24
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f12.f64 + ctx.f24.f64));
	// fadds f13,f9,f16
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f16.f64));
	// lfs f9,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f15
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f15.f64));
	// lfs f24,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f24.f64 = double(temp.f32);
	// fadds f1,f25,f24
	ctx.f1.f64 = double(float(ctx.f25.f64 + ctx.f24.f64));
	// fsubs f25,f24,f25
	ctx.f25.f64 = double(float(ctx.f24.f64 - ctx.f25.f64));
	// fmadds f24,f23,f12,f18
	ctx.f24.f64 = double(float(ctx.f23.f64 * ctx.f12.f64 + ctx.f18.f64));
	// fsubs f16,f6,f25
	ctx.f16.f64 = double(float(ctx.f6.f64 - ctx.f25.f64));
	// fadds f6,f25,f6
	ctx.f6.f64 = double(float(ctx.f25.f64 + ctx.f6.f64));
	// lfs f23,-196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	ctx.f23.f64 = double(temp.f32);
	// fmsubs f12,f14,f12,f23
	ctx.f12.f64 = double(float(ctx.f14.f64 * ctx.f12.f64 - ctx.f23.f64));
	// lfs f14,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f23,f9,f11
	ctx.f23.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fadds f18,f1,f14
	ctx.f18.f64 = double(float(ctx.f1.f64 + ctx.f14.f64));
	// fsubs f1,f14,f1
	ctx.f1.f64 = double(float(ctx.f14.f64 - ctx.f1.f64));
	// fmsubs f13,f13,f10,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f23.f64));
	// fmadds f11,f9,f10,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fadds f9,f30,f22
	ctx.f9.f64 = double(float(ctx.f30.f64 + ctx.f22.f64));
	// fadds f10,f13,f24
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f24.f64));
	// fsubs f13,f24,f13
	ctx.f13.f64 = double(float(ctx.f24.f64 - ctx.f13.f64));
	// fadds f24,f8,f31
	ctx.f24.f64 = double(float(ctx.f8.f64 + ctx.f31.f64));
	// fadds f23,f11,f12
	ctx.f23.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fadds f11,f26,f21
	ctx.f11.f64 = double(float(ctx.f26.f64 + ctx.f21.f64));
	// fsubs f8,f31,f8
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f8.f64));
	// fadds f15,f24,f9
	ctx.f15.f64 = double(float(ctx.f24.f64 + ctx.f9.f64));
	// stfs f15,0(r3)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f15,f5,f19
	ctx.f15.f64 = double(float(ctx.f5.f64 + ctx.f19.f64));
	// fsubs f9,f9,f24
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f24.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f9,f18,f11
	ctx.f9.f64 = double(float(ctx.f18.f64 + ctx.f11.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f9,f21,f26
	ctx.f9.f64 = double(float(ctx.f21.f64 - ctx.f26.f64));
	// fsubs f11,f11,f18
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f18.f64));
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fsubs f11,f22,f30
	ctx.f11.f64 = double(float(ctx.f22.f64 - ctx.f30.f64));
	// fsubs f5,f19,f5
	ctx.f5.f64 = double(float(ctx.f19.f64 - ctx.f5.f64));
	// fadds f30,f15,f16
	ctx.f30.f64 = double(float(ctx.f15.f64 + ctx.f16.f64));
	// fsubs f31,f16,f15
	ctx.f31.f64 = double(float(ctx.f16.f64 - ctx.f15.f64));
	// fadds f26,f8,f9
	ctx.f26.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f26,20(r3)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fsubs f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// stfs f9,16(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fsubs f11,f4,f27
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f27.f64));
	// fadds f9,f2,f3
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fadds f26,f5,f6
	ctx.f26.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f8,f31,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fsubs f30,f6,f5
	ctx.f30.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fadds f25,f8,f11
	ctx.f25.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// lfs f31,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fadds f11,f1,f9
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fsubs f11,f9,f1
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// stfs f11,44(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmuls f8,f30,f0
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f1,-180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f9,f3,f2
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lfs f30,-176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	ctx.f30.f64 = double(temp.f32);
	// fadds f11,f27,f4
	ctx.f11.f64 = double(float(ctx.f27.f64 + ctx.f4.f64));
	// lfs f2,-184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f4,f26,f0
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// stfs f25,32(r3)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f5,f17,f13
	ctx.f5.f64 = double(float(ctx.f17.f64 - ctx.f13.f64));
	// fadds f6,f12,f31
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fadds f13,f13,f17
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f17.f64));
	// fsubs f12,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fadds f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f3,52(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// stfs f9,60(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fsubs f9,f11,f4
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// lfs f3,-200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	ctx.f3.f64 = double(temp.f32);
	// fadds f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f11,56(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fsubs f8,f1,f10
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// stfs f9,48(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fadds f11,f3,f28
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f28.f64));
	// fadds f9,f2,f20
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f20.f64));
	// fsubs f4,f30,f23
	ctx.f4.f64 = double(float(ctx.f30.f64 - ctx.f23.f64));
	// fadds f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fsubs f27,f6,f5
	ctx.f27.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fadds f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fadds f26,f8,f11
	ctx.f26.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f26,64(r3)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// fadds f11,f4,f9
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f11,68(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// fsubs f11,f9,f4
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// stfs f11,76(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// fsubs f9,f20,f2
	ctx.f9.f64 = double(float(ctx.f20.f64 - ctx.f2.f64));
	// fadds f8,f23,f30
	ctx.f8.f64 = double(float(ctx.f23.f64 + ctx.f30.f64));
	// fsubs f11,f28,f3
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f3.f64));
	// fadds f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f4,84(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stfs f10,92(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fsubs f10,f11,f8
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f4,-172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	ctx.f4.f64 = double(temp.f32);
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f11,88(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fmuls f9,f27,f0
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// lfs f8,-168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f11,f7,f4
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// stfs f10,80(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fadds f10,f8,f29
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f29.f64));
	// fadds f5,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f5,96(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f11,104(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f11,f4,f7
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fsubs f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fadds f6,f13,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f13,100(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fsubs f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// fmuls f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsubs f13,f29,f8
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f8.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f10,116(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f10,112(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6afc
	ctx.lr = 0x833C88F8;
	__restfpr_14(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C8904"))) PPC_WEAK_FUNC(sub_833C8904);
PPC_FUNC_IMPL(__imp__sub_833C8904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C8908"))) PPC_WEAK_FUNC(sub_833C8908);
PPC_FUNC_IMPL(__imp__sub_833C8908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ad8
	ctx.lr = 0x833C8918;
	__savefpr_24(ctx, base);
	// lfs f12,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f28,f13,f12
	ctx.f28.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fadds f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fadds f10,f8,f9
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lfs f7,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fadds f8,f6,f7
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// lfs f5,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fadds f26,f2,f4
	ctx.f26.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// lfs f30,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f29.f64 = double(temp.f32);
	// fadds f25,f31,f1
	ctx.f25.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// fadds f6,f10,f28
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f28.f64));
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f28,f10
	ctx.f10.f64 = double(float(ctx.f28.f64 - ctx.f10.f64));
	// fadds f28,f8,f12
	ctx.f28.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsubs f8,f13,f7
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fadds f27,f9,f11
	ctx.f27.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f7,f3,f5
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fsubs f9,f3,f5
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fsubs f5,f2,f4
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fsubs f3,f29,f30
	ctx.f3.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// fsubs f4,f31,f1
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fadds f24,f29,f30
	ctx.f24.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fadds f2,f25,f7
	ctx.f2.f64 = double(float(ctx.f25.f64 + ctx.f7.f64));
	// fsubs f7,f7,f25
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f25.f64));
	// fsubs f29,f9,f3
	ctx.f29.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fadds f30,f4,f5
	ctx.f30.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f9,f3,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fsubs f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fadds f1,f24,f26
	ctx.f1.f64 = double(float(ctx.f24.f64 + ctx.f26.f64));
	// fsubs f31,f26,f24
	ctx.f31.f64 = double(float(ctx.f26.f64 - ctx.f24.f64));
	// fsubs f4,f29,f30
	ctx.f4.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// fadds f3,f30,f29
	ctx.f3.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// fadds f30,f5,f9
	ctx.f30.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fsubs f29,f9,f5
	ctx.f29.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f5,f3,f0
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f4,f30,f0
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fadds f3,f9,f8
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f3,32(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// stfs f9,40(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fsubs f9,f27,f5
	ctx.f9.f64 = double(float(ctx.f27.f64 - ctx.f5.f64));
	// stfs f9,44(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fsubs f9,f13,f4
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f9,48(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fadds f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fadds f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,52(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fadds f13,f2,f6
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f0,f1,f28
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f28.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f13,f6,f2
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f3,f5,f27
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f27.f64));
	// stfs f3,36(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fsubs f0,f28,f1
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f1.f64));
	// fsubs f13,f10,f31
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f0,f7,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f13,f31,f10
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f10.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fsubs f0,f12,f7
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b24
	ctx.lr = 0x833C8A84;
	__restfpr_24(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C8A90"))) PPC_WEAK_FUNC(sub_833C8A90);
PPC_FUNC_IMPL(__imp__sub_833C8A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6acc
	ctx.lr = 0x833C8AA0;
	__savefpr_21(ctx, base);
	// lfs f9,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f25,f7,f8
	ctx.f25.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fsubs f26,f10,f9
	ctx.f26.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f29,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f27,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f24,f11,f29
	ctx.f24.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// lfs f28,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f28.f64 = double(temp.f32);
	// fadds f11,f29,f11
	ctx.f11.f64 = double(float(ctx.f29.f64 + ctx.f11.f64));
	// fadds f29,f27,f28
	ctx.f29.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f28,f27,f28
	ctx.f28.f64 = double(float(ctx.f27.f64 - ctx.f28.f64));
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f9,f7,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f3,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f27,f26,f25
	ctx.f27.f64 = double(float(ctx.f26.f64 - ctx.f25.f64));
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fadds f26,f25,f26
	ctx.f26.f64 = double(float(ctx.f25.f64 + ctx.f26.f64));
	// lfs f2,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f8,f27,f12
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f12.f64));
	// fsubs f27,f10,f9
	ctx.f27.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f7,f26,f12
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f12.f64));
	// fadds f26,f9,f10
	ctx.f26.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fsubs f10,f6,f5
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fadds f9,f3,f4
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fmuls f27,f27,f12
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f12.f64));
	// fmuls f12,f26,f12
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f12.f64));
	// fmr f26,f10
	ctx.f26.f64 = ctx.f10.f64;
	// fmr f25,f10
	ctx.f25.f64 = ctx.f10.f64;
	// fmuls f23,f9,f13
	ctx.f23.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f22,f9,f0
	ctx.f22.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f10,f5,f6
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fsubs f9,f3,f4
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fmsubs f6,f26,f0,f23
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f0.f64 - ctx.f23.f64));
	// fmadds f5,f25,f13,f22
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f13.f64 + ctx.f22.f64));
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// fmuls f26,f9,f0
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmr f25,f9
	ctx.f25.f64 = ctx.f9.f64;
	// fsubs f10,f2,f1
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fadds f9,f30,f31
	ctx.f9.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fmsubs f4,f4,f13,f26
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 - ctx.f26.f64));
	// fmadds f3,f25,f13,f3
	ctx.f3.f64 = double(float(ctx.f25.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmr f26,f10
	ctx.f26.f64 = ctx.f10.f64;
	// fmuls f23,f9,f0
	ctx.f23.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f25,f10,f0
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f10,f1,f2
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fsubs f1,f30,f31
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fmsubs f2,f26,f13,f23
	ctx.f2.f64 = double(float(ctx.f26.f64 * ctx.f13.f64 - ctx.f23.f64));
	// fmadds f9,f9,f13,f25
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f25.f64));
	// fmr f26,f10
	ctx.f26.f64 = ctx.f10.f64;
	// fmr f25,f10
	ctx.f25.f64 = ctx.f10.f64;
	// fadds f10,f8,f24
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f24.f64));
	// fmuls f23,f1,f13
	ctx.f23.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f22,f1,f0
	ctx.f22.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fadds f1,f7,f29
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f29.f64));
	// fsubs f7,f29,f7
	ctx.f7.f64 = double(float(ctx.f29.f64 - ctx.f7.f64));
	// fadds f31,f2,f6
	ctx.f31.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fadds f30,f9,f5
	ctx.f30.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fmsubs f0,f26,f0,f23
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f0.f64 - ctx.f23.f64));
	// fmadds f13,f25,f13,f22
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f13.f64 + ctx.f22.f64));
	// fadds f21,f31,f10
	ctx.f21.f64 = double(float(ctx.f31.f64 + ctx.f10.f64));
	// stfs f21,0(r3)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f10,f24,f8
	ctx.f10.f64 = double(float(ctx.f24.f64 - ctx.f8.f64));
	// fsubs f8,f6,f2
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// fadds f6,f30,f1
	ctx.f6.f64 = double(float(ctx.f30.f64 + ctx.f1.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f6,f1,f30
	ctx.f6.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fsubs f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,20(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fsubs f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fsubs f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// stfs f10,28(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fsubs f7,f3,f13
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fadds f9,f27,f28
	ctx.f9.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fsubs f11,f28,f27
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f27.f64));
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// fadds f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// fadds f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfs f10,40(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fsubs f10,f9,f7
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f10,44(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fadds f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f6,36(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f10,52(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f10,48(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b18
	ctx.lr = 0x833C8C70;
	__restfpr_21(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C8C7C"))) PPC_WEAK_FUNC(sub_833C8C7C);
PPC_FUNC_IMPL(__imp__sub_833C8C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C8C80"))) PPC_WEAK_FUNC(sub_833C8C80);
PPC_FUNC_IMPL(__imp__sub_833C8C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fadds f9,f7,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fsubs f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fadds f7,f11,f6
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fsubs f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fsubs f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C8D04"))) PPC_WEAK_FUNC(sub_833C8D04);
PPC_FUNC_IMPL(__imp__sub_833C8D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C8D08"))) PPC_WEAK_FUNC(sub_833C8D08);
PPC_FUNC_IMPL(__imp__sub_833C8D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fadds f9,f7,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fsubs f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fadds f7,f11,f6
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fadds f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fsubs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C8D8C"))) PPC_WEAK_FUNC(sub_833C8D8C);
PPC_FUNC_IMPL(__imp__sub_833C8D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C8D90"))) PPC_WEAK_FUNC(sub_833C8D90);
PPC_FUNC_IMPL(__imp__sub_833C8D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C8DC4"))) PPC_WEAK_FUNC(sub_833C8DC4);
PPC_FUNC_IMPL(__imp__sub_833C8DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C8DC8"))) PPC_WEAK_FUNC(sub_833C8DC8);
PPC_FUNC_IMPL(__imp__sub_833C8DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r9,r3,-2
	ctx.r9.s64 = ctx.r3.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f8,6380(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6380);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_833C8E18:
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// fadds f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// fsubs f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmsubs f10,f12,f10,f7
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f7.f64));
	// fmadds f12,f12,f11,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x833c8e18
	if (!ctx.cr6.eq) goto loc_833C8E18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C8E94"))) PPC_WEAK_FUNC(sub_833C8E94);
PPC_FUNC_IMPL(__imp__sub_833C8E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C8E98"))) PPC_WEAK_FUNC(sub_833C8E98);
PPC_FUNC_IMPL(__imp__sub_833C8E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r9,r3,-2
	ctx.r9.s64 = ctx.r3.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f8,6380(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6380);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_833C8EE8:
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// fadds f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// fsubs f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmadds f12,f9,f11,f7
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmsubs f11,f9,f10,f6
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 - ctx.f6.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsubs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x833c8ee8
	if (!ctx.cr6.eq) goto loc_833C8EE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C8F64"))) PPC_WEAK_FUNC(sub_833C8F64);
PPC_FUNC_IMPL(__imp__sub_833C8F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C8F68"))) PPC_WEAK_FUNC(sub_833C8F68);
PPC_FUNC_IMPL(__imp__sub_833C8F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x833C8F70;
	__savegprlr_24(ctx, base);
	// srawi r24,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r3.s32 >> 1;
	// divw r9,r5,r3
	ctx.r9.s32 = ctx.r5.s32 / ctx.r3.s32;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x833c90d4
	if (ctx.cr6.lt) goto loc_833C90D4;
	// addi r11,r24,-5
	ctx.r11.s64 = ctx.r24.s64 + -5;
	// addi r10,r3,-3
	ctx.r10.s64 = ctx.r3.s64 + -3;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r29,r5,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// neg r11,r9
	ctx.r11.s64 = -ctx.r9.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// add r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r25,r28,1
	ctx.r25.s64 = ctx.r28.s64 + 1;
loc_833C8FC8:
	// add r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 + ctx.r29.u64;
	// lfs f11,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// add r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 + ctx.r8.u64;
	// lfs f12,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// addi r27,r10,-4
	ctx.r27.s64 = ctx.r10.s64 + -4;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// add r26,r26,r9
	ctx.r26.u64 = ctx.r26.u64 + ctx.r9.u64;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 + ctx.r29.u64;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 + ctx.r8.u64;
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// add r26,r26,r9
	ctx.r26.u64 = ctx.r26.u64 + ctx.r9.u64;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// add r26,r26,r9
	ctx.r26.u64 = ctx.r26.u64 + ctx.r9.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r26,r26,r9
	ctx.r26.u64 = ctx.r26.u64 + ctx.r9.u64;
	// fmuls f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmadds f13,f12,f10,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f13,-8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 + ctx.r29.u64;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 + ctx.r8.u64;
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmsubs f0,f11,f0,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmadds f13,f11,f10,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 + ctx.r29.u64;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 + ctx.r8.u64;
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmsubs f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmadds f0,f11,f0,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmsubs f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f0,f12,f10,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// bne cr6,0x833c8fc8
	if (!ctx.cr6.eq) goto loc_833C8FC8;
loc_833C90D4:
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x833c9160
	if (!ctx.cr6.lt) goto loc_833C9160;
	// subf r7,r26,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r26.s64;
	// subf r10,r25,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r25.s64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r3,r9
	ctx.r3.s64 = -ctx.r9.s64;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r7,r25,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r25.s64;
loc_833C9114:
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fmuls f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmsubs f0,f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 - ctx.f11.f64));
	// fmadds f13,f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bne cr6,0x833c9114
	if (!ctx.cr6.eq) goto loc_833C9114;
loc_833C9160:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsx f0,r11,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C9178"))) PPC_WEAK_FUNC(sub_833C9178);
PPC_FUNC_IMPL(__imp__sub_833C9178) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bne cr6,0x833c91e0
	if (!ctx.cr6.eq) goto loc_833C91E0;
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x833c7fa8
	ctx.lr = 0x833C91A8;
	sub_833C7FA8(ctx, base);
	// addi r11,r5,-32
	ctx.r11.s64 = ctx.r5.s64 + -32;
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bl 0x833c83c8
	ctx.lr = 0x833C91BC;
	sub_833C83C8(ctx, base);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r3,r10,256
	ctx.r3.s64 = ctx.r10.s64 + 256;
	// bl 0x833c7fa8
	ctx.lr = 0x833C91C8;
	sub_833C7FA8(ctx, base);
	// addi r3,r10,384
	ctx.r3.s64 = ctx.r10.s64 + 384;
	// bl 0x833c7fa8
	ctx.lr = 0x833C91D0;
	sub_833C7FA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_833C91E0:
	// addi r11,r5,-16
	ctx.r11.s64 = ctx.r5.s64 + -16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bl 0x833c8908
	ctx.lr = 0x833C91F0;
	sub_833C8908(ctx, base);
	// addi r3,r10,64
	ctx.r3.s64 = ctx.r10.s64 + 64;
	// bl 0x833c8a90
	ctx.lr = 0x833C91F8;
	sub_833C8A90(ctx, base);
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// bl 0x833c8908
	ctx.lr = 0x833C9200;
	sub_833C8908(ctx, base);
	// addi r3,r10,192
	ctx.r3.s64 = ctx.r10.s64 + 192;
	// bl 0x833c8908
	ctx.lr = 0x833C9208;
	sub_833C8908(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C9218"))) PPC_WEAK_FUNC(sub_833C9218);
PPC_FUNC_IMPL(__imp__sub_833C9218) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bne cr6,0x833c9288
	if (!ctx.cr6.eq) goto loc_833C9288;
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9248;
	sub_833C7FA8(ctx, base);
	// addi r11,r5,-32
	ctx.r11.s64 = ctx.r5.s64 + -32;
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x833c83c8
	ctx.lr = 0x833C9260;
	sub_833C83C8(ctx, base);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r3,r10,256
	ctx.r3.s64 = ctx.r10.s64 + 256;
	// bl 0x833c7fa8
	ctx.lr = 0x833C926C;
	sub_833C7FA8(ctx, base);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r10,384
	ctx.r3.s64 = ctx.r10.s64 + 384;
	// bl 0x833c83c8
	ctx.lr = 0x833C9278;
	sub_833C83C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_833C9288:
	// addi r11,r5,-16
	ctx.r11.s64 = ctx.r5.s64 + -16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bl 0x833c8908
	ctx.lr = 0x833C9298;
	sub_833C8908(ctx, base);
	// addi r3,r10,64
	ctx.r3.s64 = ctx.r10.s64 + 64;
	// bl 0x833c8a90
	ctx.lr = 0x833C92A0;
	sub_833C8A90(ctx, base);
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// bl 0x833c8908
	ctx.lr = 0x833C92A8;
	sub_833C8908(ctx, base);
	// addi r3,r10,192
	ctx.r3.s64 = ctx.r10.s64 + 192;
	// bl 0x833c8a90
	ctx.lr = 0x833C92B0;
	sub_833C8A90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833C92C0"))) PPC_WEAK_FUNC(sub_833C92C0);
PPC_FUNC_IMPL(__imp__sub_833C92C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x833C92C8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// srawi r31,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r18.s32 >> 2;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// ble cr6,0x833c93cc
	if (!ctx.cr6.gt) goto loc_833C93CC;
loc_833C92E8:
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r18
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x833c939c
	if (!ctx.cr6.lt) goto loc_833C939C;
loc_833C92F4:
	// subf r30,r31,r23
	ctx.r30.s64 = ctx.r23.s64 - ctx.r31.s64;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x833c9390
	if (!ctx.cr6.lt) goto loc_833C9390;
	// srawi r10,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 1;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// subf r9,r31,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r6,r30,r23
	ctx.r6.u64 = ctx.r30.u64 + ctx.r23.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r21,r7,r28
	ctx.r21.u64 = ctx.r7.u64 + ctx.r28.u64;
	// add r22,r8,r28
	ctx.r22.u64 = ctx.r8.u64 + ctx.r28.u64;
	// rlwinm r20,r23,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r23,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r9,r19
	ctx.r27.u64 = ctx.r9.u64 + ctx.r19.u64;
	// add r25,r10,r19
	ctx.r25.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r26,r11,r19
	ctx.r26.u64 = ctx.r11.u64 + ctx.r19.u64;
loc_833C9348:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c77e0
	ctx.lr = 0x833C9358;
	sub_833C77E0(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c7b68
	ctx.lr = 0x833C9368;
	sub_833C7B68(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c77e0
	ctx.lr = 0x833C9378;
	sub_833C77E0(ctx, base);
	// add r30,r20,r30
	ctx.r30.u64 = ctx.r20.u64 + ctx.r30.u64;
	// add r27,r24,r27
	ctx.r27.u64 = ctx.r24.u64 + ctx.r27.u64;
	// add r26,r24,r26
	ctx.r26.u64 = ctx.r24.u64 + ctx.r26.u64;
	// add r25,r24,r25
	ctx.r25.u64 = ctx.r24.u64 + ctx.r25.u64;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x833c9348
	if (ctx.cr6.lt) goto loc_833C9348;
loc_833C9390:
	// rlwinm r23,r23,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r23,r18
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x833c92f4
	if (ctx.cr6.lt) goto loc_833C92F4;
loc_833C939C:
	// subf r11,r31,r18
	ctx.r11.s64 = ctx.r18.s64 - ctx.r31.s64;
	// srawi r10,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x833c77e0
	ctx.lr = 0x833C93C0;
	sub_833C77E0(ctx, base);
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// bgt cr6,0x833c92e8
	if (ctx.cr6.gt) goto loc_833C92E8;
loc_833C93CC:
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r18
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x833c95f0
	if (!ctx.cr6.lt) goto loc_833C95F0;
loc_833C93D8:
	// subf r25,r31,r24
	ctx.r25.s64 = ctx.r24.s64 - ctx.r31.s64;
	// cmpw cr6,r25,r18
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x833c95e4
	if (!ctx.cr6.lt) goto loc_833C95E4;
	// addi r11,r24,48
	ctx.r11.s64 = ctx.r24.s64 + 48;
	// srawi r9,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r25,r24
	ctx.r11.u64 = ctx.r25.u64 + ctx.r24.u64;
	// subf r8,r31,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r31.s64;
	// subf r9,r9,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r9.s64;
	// addi r6,r25,96
	ctx.r6.s64 = ctx.r25.s64 + 96;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r20,r7,r28
	ctx.r20.u64 = ctx.r7.u64 + ctx.r28.u64;
	// add r22,r8,r28
	ctx.r22.u64 = ctx.r8.u64 + ctx.r28.u64;
	// rlwinm r21,r24,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r24,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r9,r19
	ctx.r27.u64 = ctx.r9.u64 + ctx.r19.u64;
	// add r26,r10,r19
	ctx.r26.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r30,r11,r19
	ctx.r30.u64 = ctx.r11.u64 + ctx.r19.u64;
loc_833C9438:
	// addi r4,r27,-384
	ctx.r4.s64 = ctx.r27.s64 + -384;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c77e0
	ctx.lr = 0x833C9448;
	sub_833C77E0(ctx, base);
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bne cr6,0x833c9494
	if (!ctx.cr6.eq) goto loc_833C9494;
	// addi r11,r29,-8
	ctx.r11.s64 = ctx.r29.s64 + -8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9468;
	sub_833C7FA8(ctx, base);
	// addi r11,r29,-32
	ctx.r11.s64 = ctx.r29.s64 + -32;
	// addi r3,r27,-256
	ctx.r3.s64 = ctx.r27.s64 + -256;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x833c83c8
	ctx.lr = 0x833C947C;
	sub_833C83C8(ctx, base);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r27,-128
	ctx.r3.s64 = ctx.r27.s64 + -128;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9488;
	sub_833C7FA8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9490;
	sub_833C7FA8(ctx, base);
	// b 0x833c94bc
	goto loc_833C94BC;
loc_833C9494:
	// addi r11,r29,-16
	ctx.r11.s64 = ctx.r29.s64 + -16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x833c8908
	ctx.lr = 0x833C94A4;
	sub_833C8908(ctx, base);
	// addi r3,r27,-320
	ctx.r3.s64 = ctx.r27.s64 + -320;
	// bl 0x833c8a90
	ctx.lr = 0x833C94AC;
	sub_833C8A90(ctx, base);
	// addi r3,r27,-256
	ctx.r3.s64 = ctx.r27.s64 + -256;
	// bl 0x833c8908
	ctx.lr = 0x833C94B4;
	sub_833C8908(ctx, base);
	// addi r3,r27,-192
	ctx.r3.s64 = ctx.r27.s64 + -192;
	// bl 0x833c8908
	ctx.lr = 0x833C94BC;
	sub_833C8908(ctx, base);
loc_833C94BC:
	// addi r4,r30,-384
	ctx.r4.s64 = ctx.r30.s64 + -384;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c7b68
	ctx.lr = 0x833C94CC;
	sub_833C7B68(ctx, base);
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bne cr6,0x833c9520
	if (!ctx.cr6.eq) goto loc_833C9520;
	// addi r11,r29,-8
	ctx.r11.s64 = ctx.r29.s64 + -8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x833c7fa8
	ctx.lr = 0x833C94EC;
	sub_833C7FA8(ctx, base);
	// addi r11,r29,-32
	ctx.r11.s64 = ctx.r29.s64 + -32;
	// addi r3,r30,-256
	ctx.r3.s64 = ctx.r30.s64 + -256;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x833c83c8
	ctx.lr = 0x833C9504;
	sub_833C83C8(ctx, base);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r30,-128
	ctx.r3.s64 = ctx.r30.s64 + -128;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9510;
	sub_833C7FA8(ctx, base);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833c83c8
	ctx.lr = 0x833C951C;
	sub_833C83C8(ctx, base);
	// b 0x833c9548
	goto loc_833C9548;
loc_833C9520:
	// addi r11,r29,-16
	ctx.r11.s64 = ctx.r29.s64 + -16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x833c8908
	ctx.lr = 0x833C9530;
	sub_833C8908(ctx, base);
	// addi r3,r30,-320
	ctx.r3.s64 = ctx.r30.s64 + -320;
	// bl 0x833c8a90
	ctx.lr = 0x833C9538;
	sub_833C8A90(ctx, base);
	// addi r3,r30,-256
	ctx.r3.s64 = ctx.r30.s64 + -256;
	// bl 0x833c8908
	ctx.lr = 0x833C9540;
	sub_833C8908(ctx, base);
	// addi r3,r30,-192
	ctx.r3.s64 = ctx.r30.s64 + -192;
	// bl 0x833c8a90
	ctx.lr = 0x833C9548;
	sub_833C8A90(ctx, base);
loc_833C9548:
	// addi r4,r26,-384
	ctx.r4.s64 = ctx.r26.s64 + -384;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c77e0
	ctx.lr = 0x833C9558;
	sub_833C77E0(ctx, base);
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bne cr6,0x833c95a4
	if (!ctx.cr6.eq) goto loc_833C95A4;
	// addi r11,r29,-8
	ctx.r11.s64 = ctx.r29.s64 + -8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9578;
	sub_833C7FA8(ctx, base);
	// addi r11,r29,-32
	ctx.r11.s64 = ctx.r29.s64 + -32;
	// addi r3,r26,-256
	ctx.r3.s64 = ctx.r26.s64 + -256;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x833c83c8
	ctx.lr = 0x833C958C;
	sub_833C83C8(ctx, base);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r26,-128
	ctx.r3.s64 = ctx.r26.s64 + -128;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9598;
	sub_833C7FA8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x833c7fa8
	ctx.lr = 0x833C95A0;
	sub_833C7FA8(ctx, base);
	// b 0x833c95cc
	goto loc_833C95CC;
loc_833C95A4:
	// addi r11,r29,-16
	ctx.r11.s64 = ctx.r29.s64 + -16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x833c8908
	ctx.lr = 0x833C95B4;
	sub_833C8908(ctx, base);
	// addi r3,r26,-320
	ctx.r3.s64 = ctx.r26.s64 + -320;
	// bl 0x833c8a90
	ctx.lr = 0x833C95BC;
	sub_833C8A90(ctx, base);
	// addi r3,r26,-256
	ctx.r3.s64 = ctx.r26.s64 + -256;
	// bl 0x833c8908
	ctx.lr = 0x833C95C4;
	sub_833C8908(ctx, base);
	// addi r3,r26,-192
	ctx.r3.s64 = ctx.r26.s64 + -192;
	// bl 0x833c8908
	ctx.lr = 0x833C95CC;
	sub_833C8908(ctx, base);
loc_833C95CC:
	// add r25,r21,r25
	ctx.r25.u64 = ctx.r21.u64 + ctx.r25.u64;
	// add r27,r27,r23
	ctx.r27.u64 = ctx.r27.u64 + ctx.r23.u64;
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// add r26,r26,r23
	ctx.r26.u64 = ctx.r26.u64 + ctx.r23.u64;
	// cmpw cr6,r25,r18
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x833c9438
	if (ctx.cr6.lt) goto loc_833C9438;
loc_833C95E4:
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r24,r18
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x833c93d8
	if (ctx.cr6.lt) goto loc_833C93D8;
loc_833C95F0:
	// subf r11,r31,r18
	ctx.r11.s64 = ctx.r18.s64 - ctx.r31.s64;
	// srawi r10,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r11,r19
	ctx.r30.u64 = ctx.r11.u64 + ctx.r19.u64;
	// subf r11,r10,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r10.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x833c77e0
	ctx.lr = 0x833C9618;
	sub_833C77E0(ctx, base);
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x833c9668
	if (!ctx.cr6.eq) goto loc_833C9668;
	// addi r11,r29,-8
	ctx.r11.s64 = ctx.r29.s64 + -8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9638;
	sub_833C7FA8(ctx, base);
	// addi r11,r29,-32
	ctx.r11.s64 = ctx.r29.s64 + -32;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x833c83c8
	ctx.lr = 0x833C964C;
	sub_833C83C8(ctx, base);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r30,256
	ctx.r3.s64 = ctx.r30.s64 + 256;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9658;
	sub_833C7FA8(ctx, base);
	// addi r3,r30,384
	ctx.r3.s64 = ctx.r30.s64 + 384;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9660;
	sub_833C7FA8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_833C9668:
	// addi r11,r29,-16
	ctx.r11.s64 = ctx.r29.s64 + -16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x833c8908
	ctx.lr = 0x833C9678;
	sub_833C8908(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x833c8a90
	ctx.lr = 0x833C9680;
	sub_833C8A90(ctx, base);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x833c8908
	ctx.lr = 0x833C9688;
	sub_833C8908(ctx, base);
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// bl 0x833c8908
	ctx.lr = 0x833C9690;
	sub_833C8908(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C9698"))) PPC_WEAK_FUNC(sub_833C9698);
PPC_FUNC_IMPL(__imp__sub_833C9698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x833C96A0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r22,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r3.s32 >> 1;
	// srawi r31,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 2;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// ble cr6,0x833c97b4
	if (!ctx.cr6.gt) goto loc_833C97B4;
loc_833C96C0:
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r22
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x833c97a8
	if (!ctx.cr6.lt) goto loc_833C97A8;
loc_833C96CC:
	// subf r30,r31,r23
	ctx.r30.s64 = ctx.r23.s64 - ctx.r31.s64;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x833c9738
	if (!ctx.cr6.lt) goto loc_833C9738;
	// srawi r9,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 1;
	// add r11,r30,r22
	ctx.r11.u64 = ctx.r30.u64 + ctx.r22.u64;
	// subf r9,r9,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r9.s64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r23,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r25,r9,r26
	ctx.r25.u64 = ctx.r9.u64 + ctx.r26.u64;
	// rlwinm r24,r23,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r10,r20
	ctx.r29.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r28,r11,r20
	ctx.r28.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_833C9704:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c77e0
	ctx.lr = 0x833C9714;
	sub_833C77E0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c77e0
	ctx.lr = 0x833C9724;
	sub_833C77E0(ctx, base);
	// add r30,r21,r30
	ctx.r30.u64 = ctx.r21.u64 + ctx.r30.u64;
	// add r29,r24,r29
	ctx.r29.u64 = ctx.r24.u64 + ctx.r29.u64;
	// add r28,r24,r28
	ctx.r28.u64 = ctx.r24.u64 + ctx.r28.u64;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x833c9704
	if (ctx.cr6.lt) goto loc_833C9704;
loc_833C9738:
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r31,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x833c979c
	if (!ctx.cr6.lt) goto loc_833C979C;
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// add r8,r30,r22
	ctx.r8.u64 = ctx.r30.u64 + ctx.r22.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r26
	ctx.r5.u64 = ctx.r9.u64 + ctx.r26.u64;
	// rlwinm r24,r23,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r23,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r10,r20
	ctx.r29.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r28,r11,r20
	ctx.r28.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_833C9770:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c7b68
	ctx.lr = 0x833C977C;
	sub_833C7B68(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c7b68
	ctx.lr = 0x833C9788;
	sub_833C7B68(ctx, base);
	// add r30,r24,r30
	ctx.r30.u64 = ctx.r24.u64 + ctx.r30.u64;
	// add r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 + ctx.r29.u64;
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x833c9770
	if (ctx.cr6.lt) goto loc_833C9770;
loc_833C979C:
	// rlwinm r23,r23,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r23,r22
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x833c96cc
	if (ctx.cr6.lt) goto loc_833C96CC;
loc_833C97A8:
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// bgt cr6,0x833c96c0
	if (ctx.cr6.gt) goto loc_833C96C0;
loc_833C97B4:
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r22
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x833c9a8c
	if (!ctx.cr6.lt) goto loc_833C9A8C;
loc_833C97C0:
	// subf r28,r31,r21
	ctx.r28.s64 = ctx.r21.s64 - ctx.r31.s64;
	// cmpw cr6,r28,r22
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x833c991c
	if (!ctx.cr6.lt) goto loc_833C991C;
	// srawi r10,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 1;
	// add r11,r28,r22
	ctx.r11.u64 = ctx.r28.u64 + ctx.r22.u64;
	// subf r10,r10,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
	// addi r8,r28,96
	ctx.r8.s64 = ctx.r28.s64 + 96;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r9,r26
	ctx.r24.u64 = ctx.r9.u64 + ctx.r26.u64;
	// rlwinm r23,r21,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r21,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r20
	ctx.r30.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r29,r11,r20
	ctx.r29.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_833C9800:
	// addi r4,r30,-384
	ctx.r4.s64 = ctx.r30.s64 + -384;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c77e0
	ctx.lr = 0x833C9810;
	sub_833C77E0(ctx, base);
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bne cr6,0x833c985c
	if (!ctx.cr6.eq) goto loc_833C985C;
	// addi r11,r27,-8
	ctx.r11.s64 = ctx.r27.s64 + -8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9830;
	sub_833C7FA8(ctx, base);
	// addi r11,r27,-32
	ctx.r11.s64 = ctx.r27.s64 + -32;
	// addi r3,r30,-256
	ctx.r3.s64 = ctx.r30.s64 + -256;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x833c83c8
	ctx.lr = 0x833C9844;
	sub_833C83C8(ctx, base);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r30,-128
	ctx.r3.s64 = ctx.r30.s64 + -128;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9850;
	sub_833C7FA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9858;
	sub_833C7FA8(ctx, base);
	// b 0x833c9884
	goto loc_833C9884;
loc_833C985C:
	// addi r11,r27,-16
	ctx.r11.s64 = ctx.r27.s64 + -16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x833c8908
	ctx.lr = 0x833C986C;
	sub_833C8908(ctx, base);
	// addi r3,r30,-320
	ctx.r3.s64 = ctx.r30.s64 + -320;
	// bl 0x833c8a90
	ctx.lr = 0x833C9874;
	sub_833C8A90(ctx, base);
	// addi r3,r30,-256
	ctx.r3.s64 = ctx.r30.s64 + -256;
	// bl 0x833c8908
	ctx.lr = 0x833C987C;
	sub_833C8908(ctx, base);
	// addi r3,r30,-192
	ctx.r3.s64 = ctx.r30.s64 + -192;
	// bl 0x833c8908
	ctx.lr = 0x833C9884;
	sub_833C8908(ctx, base);
loc_833C9884:
	// addi r4,r29,-384
	ctx.r4.s64 = ctx.r29.s64 + -384;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c77e0
	ctx.lr = 0x833C9894;
	sub_833C77E0(ctx, base);
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bne cr6,0x833c98e0
	if (!ctx.cr6.eq) goto loc_833C98E0;
	// addi r11,r27,-8
	ctx.r11.s64 = ctx.r27.s64 + -8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x833c7fa8
	ctx.lr = 0x833C98B4;
	sub_833C7FA8(ctx, base);
	// addi r11,r27,-32
	ctx.r11.s64 = ctx.r27.s64 + -32;
	// addi r3,r29,-256
	ctx.r3.s64 = ctx.r29.s64 + -256;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x833c83c8
	ctx.lr = 0x833C98C8;
	sub_833C83C8(ctx, base);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r29,-128
	ctx.r3.s64 = ctx.r29.s64 + -128;
	// bl 0x833c7fa8
	ctx.lr = 0x833C98D4;
	sub_833C7FA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833c7fa8
	ctx.lr = 0x833C98DC;
	sub_833C7FA8(ctx, base);
	// b 0x833c9908
	goto loc_833C9908;
loc_833C98E0:
	// addi r11,r27,-16
	ctx.r11.s64 = ctx.r27.s64 + -16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x833c8908
	ctx.lr = 0x833C98F0;
	sub_833C8908(ctx, base);
	// addi r3,r29,-320
	ctx.r3.s64 = ctx.r29.s64 + -320;
	// bl 0x833c8a90
	ctx.lr = 0x833C98F8;
	sub_833C8A90(ctx, base);
	// addi r3,r29,-256
	ctx.r3.s64 = ctx.r29.s64 + -256;
	// bl 0x833c8908
	ctx.lr = 0x833C9900;
	sub_833C8908(ctx, base);
	// addi r3,r29,-192
	ctx.r3.s64 = ctx.r29.s64 + -192;
	// bl 0x833c8908
	ctx.lr = 0x833C9908;
	sub_833C8908(ctx, base);
loc_833C9908:
	// add r28,r23,r28
	ctx.r28.u64 = ctx.r23.u64 + ctx.r28.u64;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// cmpw cr6,r28,r22
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x833c9800
	if (ctx.cr6.lt) goto loc_833C9800;
loc_833C991C:
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r31,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpw cr6,r28,r22
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x833c9a80
	if (!ctx.cr6.lt) goto loc_833C9A80;
	// add r11,r28,r22
	ctx.r11.u64 = ctx.r28.u64 + ctx.r22.u64;
	// subf r10,r31,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r31.s64;
	// addi r8,r28,96
	ctx.r8.s64 = ctx.r28.s64 + 96;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r26
	ctx.r5.u64 = ctx.r9.u64 + ctx.r26.u64;
	// rlwinm r24,r21,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r21,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r20
	ctx.r30.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r29,r11,r20
	ctx.r29.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_833C995C:
	// addi r4,r30,-384
	ctx.r4.s64 = ctx.r30.s64 + -384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c7b68
	ctx.lr = 0x833C9968;
	sub_833C7B68(ctx, base);
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bne cr6,0x833c99bc
	if (!ctx.cr6.eq) goto loc_833C99BC;
	// addi r11,r27,-8
	ctx.r11.s64 = ctx.r27.s64 + -8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9988;
	sub_833C7FA8(ctx, base);
	// addi r11,r27,-32
	ctx.r11.s64 = ctx.r27.s64 + -32;
	// addi r3,r30,-256
	ctx.r3.s64 = ctx.r30.s64 + -256;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x833c83c8
	ctx.lr = 0x833C99A0;
	sub_833C83C8(ctx, base);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r30,-128
	ctx.r3.s64 = ctx.r30.s64 + -128;
	// bl 0x833c7fa8
	ctx.lr = 0x833C99AC;
	sub_833C7FA8(ctx, base);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833c83c8
	ctx.lr = 0x833C99B8;
	sub_833C83C8(ctx, base);
	// b 0x833c99e4
	goto loc_833C99E4;
loc_833C99BC:
	// addi r11,r27,-16
	ctx.r11.s64 = ctx.r27.s64 + -16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x833c8908
	ctx.lr = 0x833C99CC;
	sub_833C8908(ctx, base);
	// addi r3,r30,-320
	ctx.r3.s64 = ctx.r30.s64 + -320;
	// bl 0x833c8a90
	ctx.lr = 0x833C99D4;
	sub_833C8A90(ctx, base);
	// addi r3,r30,-256
	ctx.r3.s64 = ctx.r30.s64 + -256;
	// bl 0x833c8908
	ctx.lr = 0x833C99DC;
	sub_833C8908(ctx, base);
	// addi r3,r30,-192
	ctx.r3.s64 = ctx.r30.s64 + -192;
	// bl 0x833c8a90
	ctx.lr = 0x833C99E4;
	sub_833C8A90(ctx, base);
loc_833C99E4:
	// addi r4,r29,-384
	ctx.r4.s64 = ctx.r29.s64 + -384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c7b68
	ctx.lr = 0x833C99F0;
	sub_833C7B68(ctx, base);
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bne cr6,0x833c9a44
	if (!ctx.cr6.eq) goto loc_833C9A44;
	// addi r11,r27,-8
	ctx.r11.s64 = ctx.r27.s64 + -8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9A10;
	sub_833C7FA8(ctx, base);
	// addi r11,r27,-32
	ctx.r11.s64 = ctx.r27.s64 + -32;
	// addi r3,r29,-256
	ctx.r3.s64 = ctx.r29.s64 + -256;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x833c83c8
	ctx.lr = 0x833C9A28;
	sub_833C83C8(ctx, base);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r29,-128
	ctx.r3.s64 = ctx.r29.s64 + -128;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9A34;
	sub_833C7FA8(ctx, base);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833c83c8
	ctx.lr = 0x833C9A40;
	sub_833C83C8(ctx, base);
	// b 0x833c9a6c
	goto loc_833C9A6C;
loc_833C9A44:
	// addi r11,r27,-16
	ctx.r11.s64 = ctx.r27.s64 + -16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x833c8908
	ctx.lr = 0x833C9A54;
	sub_833C8908(ctx, base);
	// addi r3,r29,-320
	ctx.r3.s64 = ctx.r29.s64 + -320;
	// bl 0x833c8a90
	ctx.lr = 0x833C9A5C;
	sub_833C8A90(ctx, base);
	// addi r3,r29,-256
	ctx.r3.s64 = ctx.r29.s64 + -256;
	// bl 0x833c8908
	ctx.lr = 0x833C9A64;
	sub_833C8908(ctx, base);
	// addi r3,r29,-192
	ctx.r3.s64 = ctx.r29.s64 + -192;
	// bl 0x833c8a90
	ctx.lr = 0x833C9A6C;
	sub_833C8A90(ctx, base);
loc_833C9A6C:
	// add r28,r24,r28
	ctx.r28.u64 = ctx.r24.u64 + ctx.r28.u64;
	// add r30,r25,r30
	ctx.r30.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 + ctx.r29.u64;
	// cmpw cr6,r28,r22
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x833c995c
	if (ctx.cr6.lt) goto loc_833C995C;
loc_833C9A80:
	// rlwinm r21,r21,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r21,r22
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x833c97c0
	if (ctx.cr6.lt) goto loc_833C97C0;
loc_833C9A8C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C9A94"))) PPC_WEAK_FUNC(sub_833C9A94);
PPC_FUNC_IMPL(__imp__sub_833C9A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C9A98"))) PPC_WEAK_FUNC(sub_833C9A98);
PPC_FUNC_IMPL(__imp__sub_833C9A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x833C9AA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// srawi r31,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r27.s32 >> 2;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x833c77e0
	ctx.lr = 0x833C9ACC;
	sub_833C77E0(ctx, base);
	// cmpwi cr6,r27,512
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 512, ctx.xer);
	// ble cr6,0x833c9b58
	if (!ctx.cr6.gt) goto loc_833C9B58;
loc_833C9AD4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c9a98
	ctx.lr = 0x833C9AE8;
	sub_833C9A98(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c9b78
	ctx.lr = 0x833C9B00;
	sub_833C9B78(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c9a98
	ctx.lr = 0x833C9B18;
	sub_833C9A98(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x833c77e0
	ctx.lr = 0x833C9B50;
	sub_833C77E0(ctx, base);
	// cmpwi cr6,r27,512
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 512, ctx.xer);
	// bgt cr6,0x833c9ad4
	if (ctx.cr6.gt) goto loc_833C9AD4;
loc_833C9B58:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833c92c0
	ctx.lr = 0x833C9B6C;
	sub_833C92C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C9B74"))) PPC_WEAK_FUNC(sub_833C9B74);
PPC_FUNC_IMPL(__imp__sub_833C9B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C9B78"))) PPC_WEAK_FUNC(sub_833C9B78);
PPC_FUNC_IMPL(__imp__sub_833C9B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x833C9B80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r31,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r29.s32 >> 2;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x833c7b68
	ctx.lr = 0x833C9BA8;
	sub_833C7B68(ctx, base);
	// cmpwi cr6,r29,512
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 512, ctx.xer);
	// ble cr6,0x833c9c30
	if (!ctx.cr6.gt) goto loc_833C9C30;
loc_833C9BB0:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c9a98
	ctx.lr = 0x833C9BC4;
	sub_833C9A98(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c9b78
	ctx.lr = 0x833C9BDC;
	sub_833C9B78(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c9a98
	ctx.lr = 0x833C9BF4;
	sub_833C9A98(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r29,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r29.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r27
	ctx.r5.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// bl 0x833c7b68
	ctx.lr = 0x833C9C28;
	sub_833C7B68(ctx, base);
	// cmpwi cr6,r29,512
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 512, ctx.xer);
	// bgt cr6,0x833c9bb0
	if (ctx.cr6.gt) goto loc_833C9BB0;
loc_833C9C30:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833c9698
	ctx.lr = 0x833C9C44;
	sub_833C9698(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C9C4C"))) PPC_WEAK_FUNC(sub_833C9C4C);
PPC_FUNC_IMPL(__imp__sub_833C9C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833C9C50"))) PPC_WEAK_FUNC(sub_833C9C50);
PPC_FUNC_IMPL(__imp__sub_833C9C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x833C9C58;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6ad0
	ctx.lr = 0x833C9C60;
	__savefpr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// ble cr6,0x833c9d70
	if (!ctx.cr6.gt) goto loc_833C9D70;
	// srawi r30,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 2;
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x833c69a0
	ctx.lr = 0x833C9C94;
	sub_833C69A0(ctx, base);
	// cmpwi cr6,r27,512
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 512, ctx.xer);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ble cr6,0x833c9d1c
	if (!ctx.cr6.gt) goto loc_833C9D1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833c9a98
	ctx.lr = 0x833C9CAC;
	sub_833C9A98(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833c9b78
	ctx.lr = 0x833C9CC4;
	sub_833C9B78(ctx, base);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833c9a98
	ctx.lr = 0x833C9CDC;
	sub_833C9A98(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x833c9a98
	ctx.lr = 0x833C9CFC;
	sub_833C9A98(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833c5b90
	ctx.lr = 0x833C9D0C;
	sub_833C5B90(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b1c
	ctx.lr = 0x833C9D18;
	__restfpr_22(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833C9D1C:
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ble cr6,0x833c9d4c
	if (!ctx.cr6.gt) goto loc_833C9D4C;
	// bl 0x833c92c0
	ctx.lr = 0x833C9D2C;
	sub_833C92C0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833c5b90
	ctx.lr = 0x833C9D3C;
	sub_833C5B90(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b1c
	ctx.lr = 0x833C9D48;
	__restfpr_22(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833C9D4C:
	// bl 0x833c9178
	ctx.lr = 0x833C9D50;
	sub_833C9178(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833c5b90
	ctx.lr = 0x833C9D60;
	sub_833C5B90(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b1c
	ctx.lr = 0x833C9D6C;
	__restfpr_22(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833C9D70:
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 8, ctx.xer);
	// ble cr6,0x833c9ebc
	if (!ctx.cr6.gt) goto loc_833C9EBC;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x833c9e64
	if (!ctx.cr6.eq) goto loc_833C9E64;
	// addi r11,r28,-8
	ctx.r11.s64 = ctx.r28.s64 + -8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x833c7fa8
	ctx.lr = 0x833C9D94;
	sub_833C7FA8(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f22.f64 = double(temp.f32);
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f1,12(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f30,20(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f29,24(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f26,28(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f28,40(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f27,44(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f25,56(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f24,60(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f23,88(r31)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f22,92(r31)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f10,96(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f9,80(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f8,84(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f7,100(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f4,104(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f3,108(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f6,112(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f5,116(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b1c
	ctx.lr = 0x833C9E60;
	__restfpr_22(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833C9E64:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x833c8908
	ctx.lr = 0x833C9E6C;
	sub_833C8908(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f7,28(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b1c
	ctx.lr = 0x833C9EB8;
	__restfpr_22(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833C9EBC:
	// bne cr6,0x833c9f50
	if (!ctx.cr6.eq) goto loc_833C9F50;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f11,f10,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fadds f9,f8,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fsubs f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fadds f7,f11,f6
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsubs f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fadds f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fsubs f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fsubs f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b1c
	ctx.lr = 0x833C9F4C;
	__restfpr_22(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833C9F50:
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bne cr6,0x833c9f88
	if (!ctx.cr6.eq) goto loc_833C9F88;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_833C9F88:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b1c
	ctx.lr = 0x833C9F94;
	__restfpr_22(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833C9F98"))) PPC_WEAK_FUNC(sub_833C9F98);
PPC_FUNC_IMPL(__imp__sub_833C9F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x833C9FA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// ble cr6,0x833ca098
	if (!ctx.cr6.gt) goto loc_833CA098;
	// srawi r30,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 2;
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x833c70b8
	ctx.lr = 0x833C9FD4;
	sub_833C70B8(ctx, base);
	// cmpwi cr6,r27,512
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 512, ctx.xer);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ble cr6,0x833ca054
	if (!ctx.cr6.gt) goto loc_833CA054;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833c9a98
	ctx.lr = 0x833C9FEC;
	sub_833C9A98(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833c9b78
	ctx.lr = 0x833CA004;
	sub_833C9B78(ctx, base);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833c9a98
	ctx.lr = 0x833CA01C;
	sub_833C9A98(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x833c9a98
	ctx.lr = 0x833CA03C;
	sub_833C9A98(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833c60c0
	ctx.lr = 0x833CA04C;
	sub_833C60C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833CA054:
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ble cr6,0x833ca07c
	if (!ctx.cr6.gt) goto loc_833CA07C;
	// bl 0x833c92c0
	ctx.lr = 0x833CA064;
	sub_833C92C0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833c60c0
	ctx.lr = 0x833CA074;
	sub_833C60C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833CA07C:
	// bl 0x833c9178
	ctx.lr = 0x833CA080;
	sub_833C9178(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833c60c0
	ctx.lr = 0x833CA090;
	sub_833C60C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833CA098:
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 8, ctx.xer);
	// ble cr6,0x833ca148
	if (!ctx.cr6.gt) goto loc_833CA148;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x833ca0c8
	if (!ctx.cr6.eq) goto loc_833CA0C8;
	// addi r11,r28,-8
	ctx.r11.s64 = ctx.r28.s64 + -8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x833c7fa8
	ctx.lr = 0x833CA0BC;
	sub_833C7FA8(ctx, base);
	// bl 0x833c67c8
	ctx.lr = 0x833CA0C0;
	sub_833C67C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833CA0C8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x833c8908
	ctx.lr = 0x833CA0D0;
	sub_833C8908(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f7,12(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f6,16(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f5,20(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f3,28(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f2,40(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f1,44(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f10,56(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f9,60(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833CA148:
	// bne cr6,0x833ca1d4
	if (!ctx.cr6.eq) goto loc_833CA1D4;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f11,f10,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fadds f9,f8,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fsubs f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fadds f7,f11,f6
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsubs f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fadds f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fadds f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fsubs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fadds f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833CA1D4:
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bne cr6,0x833ca20c
	if (!ctx.cr6.eq) goto loc_833CA20C;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_833CA20C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833CA214"))) PPC_WEAK_FUNC(sub_833CA214);
PPC_FUNC_IMPL(__imp__sub_833CA214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833CA218"))) PPC_WEAK_FUNC(sub_833CA218);
PPC_FUNC_IMPL(__imp__sub_833CA218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x833CA220;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x833ca25c
	if (!ctx.cr6.gt) goto loc_833CA25C;
	// srawi r30,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r31.s32 >> 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833c5870
	ctx.lr = 0x833CA25C;
	sub_833C5870(ctx, base);
loc_833CA25C:
	// lwz r26,4(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x833ca284
	if (!ctx.cr6.gt) goto loc_833CA284;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r26,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r31.s32 >> 2;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x833c5a90
	ctx.lr = 0x833CA284;
	sub_833C5A90(ctx, base);
loc_833CA284:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x833ca304
	if (ctx.cr6.lt) goto loc_833CA304;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// ble cr6,0x833ca2c8
	if (!ctx.cr6.gt) goto loc_833CA2C8;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r27,8
	ctx.r5.s64 = ctx.r27.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c9c50
	ctx.lr = 0x833CA2AC;
	sub_833C9C50(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c8dc8
	ctx.lr = 0x833CA2C4;
	sub_833C8DC8(ctx, base);
	// b 0x833ca2e4
	goto loc_833CA2E4;
loc_833CA2C8:
	// bne cr6,0x833ca2e4
	if (!ctx.cr6.eq) goto loc_833CA2E4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r27,8
	ctx.r5.s64 = ctx.r27.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x833c9c50
	ctx.lr = 0x833CA2E4;
	sub_833C9C50(ctx, base);
loc_833CA2E4:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,4(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_833CA304:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// ble cr6,0x833ca350
	if (!ctx.cr6.gt) goto loc_833CA350;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c8e98
	ctx.lr = 0x833CA348;
	sub_833C8E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x833ca358
	goto loc_833CA358;
loc_833CA350:
	// bne cr6,0x833ca36c
	if (!ctx.cr6.eq) goto loc_833CA36C;
	// li r3,4
	ctx.r3.s64 = 4;
loc_833CA358:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r27,8
	ctx.r5.s64 = ctx.r27.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x833c9f98
	ctx.lr = 0x833CA36C;
	sub_833C9F98(ctx, base);
loc_833CA36C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833CA374"))) PPC_WEAK_FUNC(sub_833CA374);
PPC_FUNC_IMPL(__imp__sub_833CA374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833CA378"))) PPC_WEAK_FUNC(sub_833CA378);
PPC_FUNC_IMPL(__imp__sub_833CA378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x833CA380;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x833ca3bc
	if (!ctx.cr6.gt) goto loc_833CA3BC;
	// srawi r29,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r31.s32 >> 2;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833c5870
	ctx.lr = 0x833CA3BC;
	sub_833C5870(ctx, base);
loc_833CA3BC:
	// lwz r25,4(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x833ca3e0
	if (!ctx.cr6.gt) goto loc_833CA3E0;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// bl 0x833c5a90
	ctx.lr = 0x833CA3E0;
	sub_833C5A90(ctx, base);
loc_833CA3E0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bge cr6,0x833ca490
	if (!ctx.cr6.lt) goto loc_833CA490;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lfs f12,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x833ca438
	if (ctx.cr6.lt) goto loc_833CA438;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
loc_833CA40C:
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// bne cr6,0x833ca40c
	if (!ctx.cr6.eq) goto loc_833CA40C;
loc_833CA438:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// fsubs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// ble cr6,0x833ca474
	if (!ctx.cr6.gt) goto loc_833CA474;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c8e98
	ctx.lr = 0x833CA46C;
	sub_833C8E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x833ca47c
	goto loc_833CA47C;
loc_833CA474:
	// bne cr6,0x833ca490
	if (!ctx.cr6.eq) goto loc_833CA490;
	// li r3,4
	ctx.r3.s64 = 4;
loc_833CA47C:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r26,8
	ctx.r5.s64 = ctx.r26.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x833c9f98
	ctx.lr = 0x833CA490;
	sub_833C9F98(ctx, base);
loc_833CA490:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x833c8f68
	ctx.lr = 0x833CA4AC;
	sub_833C8F68(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x833ca568
	if (ctx.cr6.lt) goto loc_833CA568;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// ble cr6,0x833ca4e8
	if (!ctx.cr6.gt) goto loc_833CA4E8;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r26,8
	ctx.r5.s64 = ctx.r26.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c9c50
	ctx.lr = 0x833CA4D0;
	sub_833C9C50(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833c8dc8
	ctx.lr = 0x833CA4E4;
	sub_833C8DC8(ctx, base);
	// b 0x833ca504
	goto loc_833CA504;
loc_833CA4E8:
	// bne cr6,0x833ca504
	if (!ctx.cr6.eq) goto loc_833CA504;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r26,8
	ctx.r5.s64 = ctx.r26.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x833c9c50
	ctx.lr = 0x833CA504;
	sub_833C9C50(ctx, base);
loc_833CA504:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// ble cr6,0x833ca55c
	if (!ctx.cr6.gt) goto loc_833CA55C;
	// addi r10,r31,-3
	ctx.r10.s64 = ctx.r31.s64 + -3;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_833CA530:
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stfs f0,-8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// bne cr6,0x833ca530
	if (!ctx.cr6.eq) goto loc_833CA530;
loc_833CA55C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f12,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
loc_833CA568:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833CA570"))) PPC_WEAK_FUNC(sub_833CA570);
PPC_FUNC_IMPL(__imp__sub_833CA570) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r10,r5,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | ctx.r11.u64;
	// beq cr6,0x833ca5a8
	if (ctx.cr6.eq) goto loc_833CA5A8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833CA594:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833ca594
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833CA594;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_833CA5A8:
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833CA5BC"))) PPC_WEAK_FUNC(sub_833CA5BC);
PPC_FUNC_IMPL(__imp__sub_833CA5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833CA5C0"))) PPC_WEAK_FUNC(sub_833CA5C0);
PPC_FUNC_IMPL(__imp__sub_833CA5C0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x833CA5C8;
	__savegprlr_20(ctx, base);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r11,r1,-368
	ctx.r11.s64 = ctx.r1.s64 + -368;
	// li r25,8
	ctx.r25.s64 = 8;
loc_833CA5D4:
	// lhz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 48);
	// lhz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// lhz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// lhz r7,80(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// lhz r5,96(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 96);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// lhz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 64);
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// lhz r28,112(r10)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + 112);
	// or r5,r31,r9
	ctx.r5.u64 = ctx.r31.u64 | ctx.r9.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// or r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 | ctx.r30.u64;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// or r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 | ctx.r8.u64;
	// or r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 | ctx.r29.u64;
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 | ctx.r28.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x833ca66c
	if (!ctx.cr6.eq) goto loc_833CA66C;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// srawi r9,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 11;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r9,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r9.u32);
	// stw r9,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r9.u32);
	// stw r9,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r9.u32);
	// stw r9,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r9.u32);
	// b 0x833ca794
	goto loc_833CA794;
loc_833CA66C:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lwz r26,64(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// lwz r24,128(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 128);
	// mullw r5,r5,r27
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// lwz r23,192(r6)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r6.u32 + 192);
	// lwz r27,32(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r22,96(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + 96);
	// lwz r21,160(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 160);
	// lwz r20,224(r6)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r6.u32 + 224);
	// mullw r9,r26,r9
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r9.s32);
	// mullw r26,r24,r8
	ctx.r26.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 11;
	// mullw r5,r23,r7
	ctx.r5.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r7.s32);
	// srawi r9,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 11;
	// srawi r7,r26,11
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r26.s32 >> 11;
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// mullw r27,r27,r31
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r31.s32);
	// subf r26,r5,r9
	ctx.r26.s64 = ctx.r9.s64 - ctx.r5.s64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// mulli r5,r26,2896
	ctx.r5.s64 = ctx.r26.s64 * 2896;
	// mullw r30,r22,r30
	ctx.r30.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r30.s32);
	// srawi r26,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r26.s64 = ctx.r5.s32 >> 11;
	// mullw r29,r21,r29
	ctx.r29.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r29.s32);
	// add r31,r7,r8
	ctx.r31.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r28,r20,r28
	ctx.r28.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r28.s32);
	// srawi r5,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r27.s32 >> 11;
	// srawi r30,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 11;
	// srawi r29,r29,11
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 11;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r27,r9,r31
	ctx.r27.u64 = ctx.r9.u64 + ctx.r31.u64;
	// srawi r28,r28,11
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 11;
	// subf r7,r9,r26
	ctx.r7.s64 = ctx.r26.s64 - ctx.r9.s64;
	// subf r31,r9,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r9.s64;
	// subf r9,r30,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r30.s64;
	// subf r26,r28,r5
	ctx.r26.s64 = ctx.r5.s64 - ctx.r28.s64;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r5,r28,r5
	ctx.r5.u64 = ctx.r28.u64 + ctx.r5.u64;
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r8,r26,r9
	ctx.r8.u64 = ctx.r26.u64 + ctx.r9.u64;
	// mulli r28,r9,-5352
	ctx.r28.s64 = ctx.r9.s64 * -5352;
	// add r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r5,r30,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r30.s64;
	// mulli r8,r8,3784
	ctx.r8.s64 = ctx.r8.s64 * 3784;
	// srawi r8,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 11;
	// mulli r5,r5,2896
	ctx.r5.s64 = ctx.r5.s64 * 2896;
	// srawi r28,r28,11
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 11;
	// mulli r30,r26,2217
	ctx.r30.s64 = ctx.r26.s64 * 2217;
	// srawi r26,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r26.s64 = ctx.r5.s32 >> 11;
	// subf r5,r9,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r9.s64;
	// add r28,r9,r27
	ctx.r28.u64 = ctx.r9.u64 + ctx.r27.u64;
	// subf r9,r9,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r9.s64;
	// srawi r30,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 11;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r9,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r9.u32);
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r5,r8,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r8.s64;
	// subf r8,r9,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r9.s64;
	// add r30,r9,r29
	ctx.r30.u64 = ctx.r9.u64 + ctx.r29.u64;
	// subf r9,r9,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r9.s64;
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// stw r9,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r9.u32);
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r5,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// stw r8,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r8.u32);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// subf r9,r9,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r9.s64;
	// stw r8,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r8.u32);
loc_833CA794:
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bgt cr6,0x833ca5d4
	if (ctx.cr6.gt) goto loc_833CA5D4;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r11,r1,-344
	ctx.r11.s64 = ctx.r1.s64 + -344;
	// li r7,8
	ctx.r7.s64 = 8;
loc_833CA7B4:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lwz r8,-12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r5,-20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r28,r8,r9
	ctx.r28.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r27,r8,r9
	ctx.r27.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r31,-16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// subf r26,r6,r5
	ctx.r26.s64 = ctx.r5.s64 - ctx.r6.s64;
	// lwz r30,-8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r29,-24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// subf r8,r3,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r31,r26,r28
	ctx.r31.u64 = ctx.r26.u64 + ctx.r28.u64;
	// mulli r8,r8,2896
	ctx.r8.s64 = ctx.r8.s64 * 2896;
	// subf r3,r30,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r30.s64;
	// add r5,r29,r30
	ctx.r5.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mulli r31,r31,3784
	ctx.r31.s64 = ctx.r31.s64 * 3784;
	// mulli r30,r28,-5352
	ctx.r30.s64 = ctx.r28.s64 * -5352;
	// srawi r25,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 11;
	// srawi r31,r31,11
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 11;
	// srawi r29,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 11;
	// subf r30,r27,r6
	ctx.r30.s64 = ctx.r6.s64 - ctx.r27.s64;
	// add r8,r6,r27
	ctx.r8.u64 = ctx.r6.u64 + ctx.r27.u64;
	// mulli r30,r30,2896
	ctx.r30.s64 = ctx.r30.s64 * 2896;
	// srawi r28,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r28.s64 = ctx.r30.s32 >> 11;
	// mulli r27,r26,2217
	ctx.r27.s64 = ctx.r26.s64 * 2217;
	// add r30,r9,r5
	ctx.r30.u64 = ctx.r9.u64 + ctx.r5.u64;
	// subf r6,r9,r25
	ctx.r6.s64 = ctx.r25.s64 - ctx.r9.s64;
	// subf r5,r9,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r9.s64;
	// subf r9,r8,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r8.s64;
	// srawi r27,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 11;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// subf r29,r31,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r31.s64;
	// add r31,r6,r3
	ctx.r31.u64 = ctx.r6.u64 + ctx.r3.u64;
	// subf r6,r6,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r6.s64;
	// add r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 + ctx.r30.u64;
	// subf r8,r8,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r8.s64;
	// addi r3,r3,127
	ctx.r3.s64 = ctx.r3.s64 + 127;
	// addi r8,r8,127
	ctx.r8.s64 = ctx.r8.s64 + 127;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stb r3,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r3.u8);
	// add r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stb r8,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r8.u8);
	// subf r8,r9,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r9.s64;
	// subf r9,r9,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r9.s64;
	// addi r3,r3,127
	ctx.r3.s64 = ctx.r3.s64 + 127;
	// addi r9,r9,127
	ctx.r9.s64 = ctx.r9.s64 + 127;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stb r9,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r9.u8);
	// add r9,r29,r8
	ctx.r9.u64 = ctx.r29.u64 + ctx.r8.u64;
	// subf r8,r8,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r8.s64;
	// addi r6,r3,127
	ctx.r6.s64 = ctx.r3.s64 + 127;
	// addi r8,r8,127
	ctx.r8.s64 = ctx.r8.s64 + 127;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// stb r6,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
	// stb r8,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r8.u8);
	// add r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 + ctx.r5.u64;
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
	// addi r8,r8,127
	ctx.r8.s64 = ctx.r8.s64 + 127;
	// addi r9,r9,127
	ctx.r9.s64 = ctx.r9.s64 + 127;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bne cr6,0x833ca7b4
	if (!ctx.cr6.eq) goto loc_833CA7B4;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833CA8E8"))) PPC_WEAK_FUNC(sub_833CA8E8);
PPC_FUNC_IMPL(__imp__sub_833CA8E8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x833CA8F0;
	__savegprlr_19(ctx, base);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r25,r4,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r1,-368
	ctx.r11.s64 = ctx.r1.s64 + -368;
	// li r24,8
	ctx.r24.s64 = 8;
loc_833CA904:
	// lhz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 48);
	// lhz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// lhz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// lhz r5,80(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// lhz r4,96(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 96);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// lhz r7,64(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 64);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// lhz r28,112(r10)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + 112);
	// or r4,r31,r8
	ctx.r4.u64 = ctx.r31.u64 | ctx.r8.u64;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// or r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 | ctx.r7.u64;
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | ctx.r29.u64;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 | ctx.r28.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x833ca99c
	if (!ctx.cr6.eq) goto loc_833CA99C;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// srawi r8,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 11;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r8,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r8.u32);
	// stw r8,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r8.u32);
	// stw r8,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r8.u32);
	// stw r8,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r8.u32);
	// b 0x833caac4
	goto loc_833CAAC4;
loc_833CA99C:
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwz r26,64(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// lwz r23,128(r6)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r6.u32 + 128);
	// mullw r4,r4,r27
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// lwz r22,192(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + 192);
	// lwz r27,32(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r21,96(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 96);
	// lwz r20,160(r6)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r6.u32 + 160);
	// lwz r19,224(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 224);
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// mullw r26,r23,r7
	ctx.r26.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r7.s32);
	// srawi r7,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 11;
	// mullw r4,r22,r5
	ctx.r4.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r5.s32);
	// srawi r8,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 11;
	// srawi r5,r26,11
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r26.s32 >> 11;
	// srawi r4,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 11;
	// mullw r27,r27,r31
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r31.s32);
	// subf r26,r4,r8
	ctx.r26.s64 = ctx.r8.s64 - ctx.r4.s64;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// mulli r4,r26,2896
	ctx.r4.s64 = ctx.r26.s64 * 2896;
	// mullw r30,r21,r30
	ctx.r30.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r30.s32);
	// srawi r26,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r26.s64 = ctx.r4.s32 >> 11;
	// mullw r29,r20,r29
	ctx.r29.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r29.s32);
	// add r31,r5,r7
	ctx.r31.u64 = ctx.r5.u64 + ctx.r7.u64;
	// mullw r28,r19,r28
	ctx.r28.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r28.s32);
	// srawi r4,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 11;
	// srawi r30,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 11;
	// srawi r29,r29,11
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 11;
	// subf r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	// add r27,r8,r31
	ctx.r27.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r28,r28,11
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 11;
	// subf r5,r8,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r8.s64;
	// subf r31,r8,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r8.s64;
	// subf r8,r30,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r30.s64;
	// subf r26,r28,r4
	ctx.r26.s64 = ctx.r4.s64 - ctx.r28.s64;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r29,r5,r7
	ctx.r29.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 + ctx.r4.u64;
	// subf r5,r5,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r5.s64;
	// add r7,r26,r8
	ctx.r7.u64 = ctx.r26.u64 + ctx.r8.u64;
	// mulli r28,r8,-5352
	ctx.r28.s64 = ctx.r8.s64 * -5352;
	// add r8,r4,r30
	ctx.r8.u64 = ctx.r4.u64 + ctx.r30.u64;
	// subf r4,r30,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r30.s64;
	// mulli r7,r7,3784
	ctx.r7.s64 = ctx.r7.s64 * 3784;
	// srawi r7,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 11;
	// mulli r4,r4,2896
	ctx.r4.s64 = ctx.r4.s64 * 2896;
	// srawi r28,r28,11
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 11;
	// mulli r30,r26,2217
	ctx.r30.s64 = ctx.r26.s64 * 2217;
	// srawi r26,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r26.s64 = ctx.r4.s32 >> 11;
	// subf r4,r8,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r8.s64;
	// add r28,r8,r27
	ctx.r28.u64 = ctx.r8.u64 + ctx.r27.u64;
	// subf r8,r8,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r8.s64;
	// srawi r30,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 11;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r8,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r8.u32);
	// add r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 + ctx.r7.u64;
	// subf r4,r7,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r7.s64;
	// subf r7,r8,r26
	ctx.r7.s64 = ctx.r26.s64 - ctx.r8.s64;
	// add r30,r8,r29
	ctx.r30.u64 = ctx.r8.u64 + ctx.r29.u64;
	// subf r8,r8,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r8.s64;
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// stw r8,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r8.u32);
	// add r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r7,r7,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r7.s64;
	// stw r4,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// stw r7,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r7.u32);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// subf r8,r8,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r8.s64;
	// stw r7,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r7.u32);
loc_833CAAC4:
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// stw r8,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bgt cr6,0x833ca904
	if (ctx.cr6.gt) goto loc_833CA904;
	// addi r11,r1,-344
	ctx.r11.s64 = ctx.r1.s64 + -344;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// li r6,8
	ctx.r6.s64 = 8;
loc_833CAAE4:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r7,-12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r4,-20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r28,r7,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r7.s64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r27,r7,r8
	ctx.r27.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r31,-16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// subf r26,r5,r4
	ctx.r26.s64 = ctx.r4.s64 - ctx.r5.s64;
	// lwz r30,-8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r8,r31,r3
	ctx.r8.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lwz r29,-24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// subf r7,r3,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r31,r26,r28
	ctx.r31.u64 = ctx.r26.u64 + ctx.r28.u64;
	// mulli r7,r7,2896
	ctx.r7.s64 = ctx.r7.s64 * 2896;
	// subf r3,r30,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r30.s64;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mulli r31,r31,3784
	ctx.r31.s64 = ctx.r31.s64 * 3784;
	// mulli r30,r28,-5352
	ctx.r30.s64 = ctx.r28.s64 * -5352;
	// srawi r24,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r24.s64 = ctx.r7.s32 >> 11;
	// srawi r31,r31,11
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 11;
	// srawi r29,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 11;
	// subf r30,r27,r5
	ctx.r30.s64 = ctx.r5.s64 - ctx.r27.s64;
	// add r7,r5,r27
	ctx.r7.u64 = ctx.r5.u64 + ctx.r27.u64;
	// mulli r30,r30,2896
	ctx.r30.s64 = ctx.r30.s64 * 2896;
	// srawi r28,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r28.s64 = ctx.r30.s32 >> 11;
	// mulli r30,r26,2217
	ctx.r30.s64 = ctx.r26.s64 * 2217;
	// srawi r27,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r27.s64 = ctx.r30.s32 >> 11;
	// add r30,r8,r4
	ctx.r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r4,r8,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r8.s64;
	// subf r5,r8,r24
	ctx.r5.s64 = ctx.r24.s64 - ctx.r8.s64;
	// subf r8,r7,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r7.s64;
	// subf r29,r31,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r31.s64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r31,r5,r3
	ctx.r31.u64 = ctx.r5.u64 + ctx.r3.u64;
	// subf r5,r5,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r5.s64;
	// add r3,r7,r30
	ctx.r3.u64 = ctx.r7.u64 + ctx.r30.u64;
	// subf r7,r7,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r7.s64;
	// addi r3,r3,127
	ctx.r3.s64 = ctx.r3.s64 + 127;
	// addi r30,r7,127
	ctx.r30.s64 = ctx.r7.s64 + 127;
	// srawi r7,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 8;
	// add r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r27,r7,16,8,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFF0000;
	// subf r7,r8,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r8.s64;
	// subf r8,r8,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r8.s64;
	// addi r3,r3,127
	ctx.r3.s64 = ctx.r3.s64 + 127;
	// addi r8,r8,127
	ctx.r8.s64 = ctx.r8.s64 + 127;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r31,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 8;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r30,r8,16,8,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF0000;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// or r8,r27,r3
	ctx.r8.u64 = ctx.r27.u64 | ctx.r3.u64;
	// or r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 | ctx.r31.u64;
	// add r31,r29,r7
	ctx.r31.u64 = ctx.r29.u64 + ctx.r7.u64;
	// subf r30,r7,r5
	ctx.r30.s64 = ctx.r5.s64 - ctx.r7.s64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r5,r31,r4
	ctx.r5.u64 = ctx.r31.u64 + ctx.r4.u64;
	// addi r29,r7,127
	ctx.r29.s64 = ctx.r7.s64 + 127;
	// addi r5,r5,127
	ctx.r5.s64 = ctx.r5.s64 + 127;
	// addi r30,r30,127
	ctx.r30.s64 = ctx.r30.s64 + 127;
	// subf r7,r31,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r31.s64;
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// srawi r4,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 8;
	// addi r7,r7,127
	ctx.r7.s64 = ctx.r7.s64 + 127;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// srawi r31,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r29.s32 >> 8;
	// rlwinm r5,r5,16,8,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF0000;
	// srawi r30,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 8;
	// or r7,r5,r4
	ctx.r7.u64 = ctx.r5.u64 | ctx.r4.u64;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r5,r31,16,8,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFF0000;
	// rlwinm r31,r8,8,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rlwinm r4,r3,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r30,r7,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 | ctx.r8.u64;
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// or r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 | ctx.r7.u64;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r5,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r5.u32);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r4,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
	// add r9,r25,r9
	ctx.r9.u64 = ctx.r25.u64 + ctx.r9.u64;
	// bne cr6,0x833caae4
	if (!ctx.cr6.eq) goto loc_833CAAE4;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833CAC6C"))) PPC_WEAK_FUNC(sub_833CAC6C);
PPC_FUNC_IMPL(__imp__sub_833CAC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833CAC70"))) PPC_WEAK_FUNC(sub_833CAC70);
PPC_FUNC_IMPL(__imp__sub_833CAC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,-10584
	ctx.r11.s64 = ctx.r11.s64 + -10584;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x833ca5c0
	sub_833CA5C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833CAC84"))) PPC_WEAK_FUNC(sub_833CAC84);
PPC_FUNC_IMPL(__imp__sub_833CAC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833CAC88"))) PPC_WEAK_FUNC(sub_833CAC88);
PPC_FUNC_IMPL(__imp__sub_833CAC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,-14688
	ctx.r11.s64 = ctx.r11.s64 + -14688;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x833ca5c0
	sub_833CA5C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833CAC9C"))) PPC_WEAK_FUNC(sub_833CAC9C);
PPC_FUNC_IMPL(__imp__sub_833CAC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833CACA0"))) PPC_WEAK_FUNC(sub_833CACA0);
PPC_FUNC_IMPL(__imp__sub_833CACA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,-14688
	ctx.r11.s64 = ctx.r11.s64 + -14688;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x833ca8e8
	sub_833CA8E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833CACB4"))) PPC_WEAK_FUNC(sub_833CACB4);
PPC_FUNC_IMPL(__imp__sub_833CACB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833CACB8"))) PPC_WEAK_FUNC(sub_833CACB8);
PPC_FUNC_IMPL(__imp__sub_833CACB8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x833CACC0;
	__savegprlr_18(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,-10584
	ctx.r11.s64 = ctx.r11.s64 + -10584;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r1,-384
	ctx.r11.s64 = ctx.r1.s64 + -384;
	// li r23,8
	ctx.r23.s64 = 8;
loc_833CACDC:
	// lhz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + 48);
	// lhz r5,16(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// lhz r6,32(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// extsh r28,r31
	ctx.r28.s64 = ctx.r31.s16;
	// lhz r31,80(r9)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + 80);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// lhz r30,96(r9)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r9.u32 + 96);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r27,r31
	ctx.r27.s64 = ctx.r31.s16;
	// lhz r5,64(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 64);
	// extsh r31,r30
	ctx.r31.s64 = ctx.r30.s16;
	// lhz r26,112(r9)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r9.u32 + 112);
	// or r30,r29,r6
	ctx.r30.u64 = ctx.r29.u64 | ctx.r6.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// or r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 | ctx.r28.u64;
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// or r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 | ctx.r5.u64;
	// or r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 | ctx.r27.u64;
	// or r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 | ctx.r31.u64;
	// or r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 | ctx.r26.u64;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x833cad74
	if (!ctx.cr6.eq) goto loc_833CAD74;
	// lhz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mullw r6,r6,r5
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// srawi r6,r6,11
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 11;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// stw r6,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r6.u32);
	// stw r6,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r6.u32);
	// stw r6,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r6.u32);
	// stw r6,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r6.u32);
	// stw r6,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r6.u32);
	// b 0x833cae9c
	goto loc_833CAE9C;
loc_833CAD74:
	// lhz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lwz r25,0(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// lwz r24,64(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r22,128(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// mullw r30,r30,r25
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r25.s32);
	// lwz r21,192(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// lwz r25,32(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r20,96(r10)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r19,160(r10)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// lwz r18,224(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// mullw r6,r24,r6
	ctx.r6.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r6.s32);
	// mullw r24,r22,r5
	ctx.r24.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r5.s32);
	// srawi r5,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r30.s32 >> 11;
	// mullw r30,r21,r31
	ctx.r30.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r31.s32);
	// srawi r6,r6,11
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 11;
	// srawi r31,r24,11
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FF) != 0);
	ctx.r31.s64 = ctx.r24.s32 >> 11;
	// srawi r30,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 11;
	// mullw r25,r25,r29
	ctx.r25.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r29.s32);
	// subf r24,r30,r6
	ctx.r24.s64 = ctx.r6.s64 - ctx.r30.s64;
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// mulli r30,r24,2896
	ctx.r30.s64 = ctx.r24.s64 * 2896;
	// mullw r28,r20,r28
	ctx.r28.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r28.s32);
	// srawi r24,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r24.s64 = ctx.r30.s32 >> 11;
	// mullw r27,r19,r27
	ctx.r27.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r27.s32);
	// add r29,r31,r5
	ctx.r29.u64 = ctx.r31.u64 + ctx.r5.u64;
	// mullw r26,r18,r26
	ctx.r26.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r26.s32);
	// srawi r30,r25,11
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FF) != 0);
	ctx.r30.s64 = ctx.r25.s32 >> 11;
	// srawi r28,r28,11
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 11;
	// srawi r27,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 11;
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// add r25,r6,r29
	ctx.r25.u64 = ctx.r6.u64 + ctx.r29.u64;
	// srawi r26,r26,11
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 11;
	// subf r31,r6,r24
	ctx.r31.s64 = ctx.r24.s64 - ctx.r6.s64;
	// subf r29,r6,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r6.s64;
	// subf r6,r28,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r28.s64;
	// subf r24,r26,r30
	ctx.r24.s64 = ctx.r30.s64 - ctx.r26.s64;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// add r27,r31,r5
	ctx.r27.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r30,r26,r30
	ctx.r30.u64 = ctx.r26.u64 + ctx.r30.u64;
	// subf r31,r31,r5
	ctx.r31.s64 = ctx.r5.s64 - ctx.r31.s64;
	// add r5,r24,r6
	ctx.r5.u64 = ctx.r24.u64 + ctx.r6.u64;
	// mulli r26,r6,-5352
	ctx.r26.s64 = ctx.r6.s64 * -5352;
	// add r6,r30,r28
	ctx.r6.u64 = ctx.r30.u64 + ctx.r28.u64;
	// subf r30,r28,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r28.s64;
	// mulli r5,r5,3784
	ctx.r5.s64 = ctx.r5.s64 * 3784;
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// mulli r30,r30,2896
	ctx.r30.s64 = ctx.r30.s64 * 2896;
	// srawi r26,r26,11
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 11;
	// mulli r28,r24,2217
	ctx.r28.s64 = ctx.r24.s64 * 2217;
	// srawi r24,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r24.s64 = ctx.r30.s32 >> 11;
	// subf r30,r6,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r6.s64;
	// add r26,r6,r25
	ctx.r26.u64 = ctx.r6.u64 + ctx.r25.u64;
	// subf r6,r6,r25
	ctx.r6.s64 = ctx.r25.s64 - ctx.r6.s64;
	// srawi r28,r28,11
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 11;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r6,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r6.u32);
	// add r6,r30,r5
	ctx.r6.u64 = ctx.r30.u64 + ctx.r5.u64;
	// subf r30,r5,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r5.s64;
	// subf r5,r6,r24
	ctx.r5.s64 = ctx.r24.s64 - ctx.r6.s64;
	// add r28,r6,r27
	ctx.r28.u64 = ctx.r6.u64 + ctx.r27.u64;
	// subf r6,r6,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r6.s64;
	// stw r28,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// stw r6,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r6.u32);
	// add r6,r30,r5
	ctx.r6.u64 = ctx.r30.u64 + ctx.r5.u64;
	// add r30,r5,r31
	ctx.r30.u64 = ctx.r5.u64 + ctx.r31.u64;
	// subf r5,r5,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r5.s64;
	// stw r30,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
	// stw r5,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r5.u32);
	// add r5,r6,r29
	ctx.r5.u64 = ctx.r6.u64 + ctx.r29.u64;
	// subf r6,r6,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r6.s64;
	// stw r5,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r5.u32);
loc_833CAE9C:
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// stw r6,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bgt cr6,0x833cacdc
	if (ctx.cr6.gt) goto loc_833CACDC;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// addi r11,r1,-360
	ctx.r11.s64 = ctx.r1.s64 + -360;
	// li r5,8
	ctx.r5.s64 = 8;
loc_833CAEC0:
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwz r6,-12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,-16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// subf r26,r6,r7
	ctx.r26.s64 = ctx.r7.s64 - ctx.r6.s64;
	// add r25,r6,r7
	ctx.r25.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r31,-20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// subf r6,r30,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r30.s64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r7,r29,r30
	ctx.r7.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r28,-8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// subf r24,r3,r31
	ctx.r24.s64 = ctx.r31.s64 - ctx.r3.s64;
	// lwz r27,-24(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// mulli r6,r6,2896
	ctx.r6.s64 = ctx.r6.s64 * 2896;
	// lbz r23,-1(r10)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// srawi r22,r6,11
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FF) != 0);
	ctx.r22.s64 = ctx.r6.s32 >> 11;
	// add r29,r24,r26
	ctx.r29.u64 = ctx.r24.u64 + ctx.r26.u64;
	// add r6,r3,r25
	ctx.r6.u64 = ctx.r3.u64 + ctx.r25.u64;
	// subf r3,r25,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r25.s64;
	// mulli r29,r29,3784
	ctx.r29.s64 = ctx.r29.s64 * 3784;
	// mulli r21,r26,-5352
	ctx.r21.s64 = ctx.r26.s64 * -5352;
	// add r31,r27,r28
	ctx.r31.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mulli r3,r3,2896
	ctx.r3.s64 = ctx.r3.s64 * 2896;
	// srawi r29,r29,11
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 11;
	// subf r30,r28,r27
	ctx.r30.s64 = ctx.r27.s64 - ctx.r28.s64;
	// srawi r26,r21,11
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FF) != 0);
	ctx.r26.s64 = ctx.r21.s32 >> 11;
	// mulli r25,r24,2217
	ctx.r25.s64 = ctx.r24.s64 * 2217;
	// add r27,r7,r31
	ctx.r27.u64 = ctx.r7.u64 + ctx.r31.u64;
	// srawi r24,r3,11
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r24.s64 = ctx.r3.s32 >> 11;
	// subf r3,r7,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r7.s64;
	// subf r28,r7,r22
	ctx.r28.s64 = ctx.r22.s64 - ctx.r7.s64;
	// subf r7,r6,r26
	ctx.r7.s64 = ctx.r26.s64 - ctx.r6.s64;
	// add r26,r6,r27
	ctx.r26.u64 = ctx.r6.u64 + ctx.r27.u64;
	// add r31,r28,r30
	ctx.r31.u64 = ctx.r28.u64 + ctx.r30.u64;
	// addi r26,r26,127
	ctx.r26.s64 = ctx.r26.s64 + 127;
	// subf r30,r28,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r28.s64;
	// subf r28,r6,r27
	ctx.r28.s64 = ctx.r27.s64 - ctx.r6.s64;
	// srawi r25,r25,11
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 11;
	// srawi r6,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r26.s32 >> 8;
	// addi r28,r28,127
	ctx.r28.s64 = ctx.r28.s64 + 127;
	// add r27,r6,r23
	ctx.r27.u64 = ctx.r6.u64 + ctx.r23.u64;
	// srawi r6,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r28.s32 >> 8;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// subf r29,r29,r25
	ctx.r29.s64 = ctx.r25.s64 - ctx.r29.s64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stb r27,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r27.u8);
	// add r27,r7,r31
	ctx.r27.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lbz r28,6(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// stb r6,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r6.u8);
	// subf r6,r7,r24
	ctx.r6.s64 = ctx.r24.s64 - ctx.r7.s64;
	// subf r7,r7,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r7.s64;
	// lbz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r31,r27,127
	ctx.r31.s64 = ctx.r27.s64 + 127;
	// addi r7,r7,127
	ctx.r7.s64 = ctx.r7.s64 + 127;
	// srawi r31,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 8;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lbz r31,5(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stb r7,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r7.u8);
	// add r7,r6,r30
	ctx.r7.u64 = ctx.r6.u64 + ctx.r30.u64;
	// subf r30,r6,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r6.s64;
	// lbz r31,1(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r28,r7,127
	ctx.r28.s64 = ctx.r7.s64 + 127;
	// add r7,r29,r6
	ctx.r7.u64 = ctx.r29.u64 + ctx.r6.u64;
	// srawi r6,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r28.s32 >> 8;
	// addi r30,r30,127
	ctx.r30.s64 = ctx.r30.s64 + 127;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// srawi r31,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 8;
	// stb r6,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r6.u8);
	// lbz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r6,r6,127
	ctx.r6.s64 = ctx.r6.s64 + 127;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// stb r31,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r31.u8);
	// addi r7,r7,127
	ctx.r7.s64 = ctx.r7.s64 + 127;
	// lbz r3,2(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// stb r6,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r6.u8);
	// lbz r6,3(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stb r7,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// bne cr6,0x833caec0
	if (!ctx.cr6.eq) goto loc_833CAEC0;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833CB03C"))) PPC_WEAK_FUNC(sub_833CB03C);
PPC_FUNC_IMPL(__imp__sub_833CB03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833CB040"))) PPC_WEAK_FUNC(sub_833CB040);
PPC_FUNC_IMPL(__imp__sub_833CB040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x833CB048;
	__savegprlr_18(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r22,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r22.u64);
	// bl 0x82cb16f0
	ctx.lr = 0x833CB06C;
	sub_82CB16F0(ctx, base);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r5,4(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x833cb0ac
	if (!ctx.cr6.lt) goto loc_833CB0AC;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// subfic r8,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r8.s64 = 4 - ctx.r11.s64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// clrlwi r27,r10,28
	ctx.r27.u64 = ctx.r10.u32 & 0xF;
	// srw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// b 0x833cb0bc
	goto loc_833CB0BC;
loc_833CB0AC:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r27,r9,28
	ctx.r27.u64 = ctx.r9.u32 & 0xF;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_833CB0BC:
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r9,r27,-1
	ctx.r9.s64 = ctx.r27.s64 + -1;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r26,r1,276
	ctx.r26.s64 = ctx.r1.s64 + 276;
	// addi r25,r1,282
	ctx.r25.s64 = ctx.r1.s64 + 282;
	// stb r8,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r8.u8);
	// li r8,96
	ctx.r8.s64 = 96;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// stb r8,277(r1)
	PPC_STORE_U8(ctx.r1.u32 + 277, ctx.r8.u8);
	// li r8,176
	ctx.r8.s64 = 176;
	// stb r8,278(r1)
	PPC_STORE_U8(ctx.r1.u32 + 278, ctx.r8.u8);
	// li r8,7
	ctx.r8.s64 = 7;
	// slw r29,r23,r9
	ctx.r29.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r9.u8 & 0x3F));
	// stb r8,279(r1)
	PPC_STORE_U8(ctx.r1.u32 + 279, ctx.r8.u8);
	// li r8,11
	ctx.r8.s64 = 11;
	// stb r8,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r8.u8);
	// li r8,15
	ctx.r8.s64 = 15;
	// stb r8,281(r1)
	PPC_STORE_U8(ctx.r1.u32 + 281, ctx.r8.u8);
	// ble cr6,0x833cb55c
	if (!ctx.cr6.gt) goto loc_833CB55C;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_833CB110:
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r9,r4,-2
	ctx.r9.s64 = ctx.r4.s64 + -2;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// slw r31,r23,r9
	ctx.r31.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r9.u8 & 0x3F));
	// addi r30,r31,-1
	ctx.r30.s64 = ctx.r31.s64 + -1;
	// bge cr6,0x833cb54c
	if (!ctx.cr6.lt) goto loc_833CB54C;
loc_833CB12C:
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x833cb540
	if (ctx.cr6.eq) goto loc_833CB540;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cb154
	if (!ctx.cr6.eq) goto loc_833CB154;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cb160
	goto loc_833CB160;
loc_833CB154:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_833CB160:
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x833cb540
	if (ctx.cr6.eq) goto loc_833CB540;
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x833cb540
	if (ctx.cr6.gt) goto loc_833CB540;
	// lis r12,-31939
	ctx.r12.s64 = -2093154304;
	// addi r12,r12,-20080
	ctx.r12.s64 = ctx.r12.s64 + -20080;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_833CB1A0;
	case 1:
		goto loc_833CB1B4;
	case 2:
		goto loc_833CB1EC;
	case 3:
		goto loc_833CB4C8;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-20064(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + -20064);
	// lwz r25,-20044(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + -20044);
	// lwz r25,-19988(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19988);
	// lwz r25,-19256(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19256);
loc_833CB1A0:
	// rlwinm r6,r8,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,17
	ctx.r9.s64 = ctx.r9.s64 + 17;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// b 0x833cb1f8
	goto loc_833CB1F8;
loc_833CB1B4:
	// rlwinm r9,r8,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// addi r6,r9,18
	ctx.r6.s64 = ctx.r9.s64 + 18;
	// addi r20,r9,34
	ctx.r20.s64 = ctx.r9.s64 + 34;
	// addi r9,r9,50
	ctx.r9.s64 = ctx.r9.s64 + 50;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r9,r25,1
	ctx.r9.s64 = ctx.r25.s64 + 1;
	// stb r6,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r6.u8);
	// stb r20,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r20.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r25,r9,1
	ctx.r25.s64 = ctx.r9.s64 + 1;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// b 0x833cb544
	goto loc_833CB544;
loc_833CB1EC:
	// stb r22,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r22.u8);
	// rlwinm r6,r8,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_833CB1F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cb354
	if (!ctx.cr6.eq) goto loc_833CB354;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cb338
	if (!ctx.cr6.eq) goto loc_833CB338;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r11,r7,31
	ctx.xer.ca = ctx.r7.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r7.s64;
loc_833CB21C:
	// srw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
loc_833CB220:
	// and r20,r9,r31
	ctx.r20.u64 = ctx.r9.u64 & ctx.r31.u64;
	// and r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 & ctx.r30.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// or r9,r8,r29
	ctx.r9.u64 = ctx.r8.u64 | ctx.r29.u64;
	// beq cr6,0x833cb238
	if (ctx.cr6.eq) goto loc_833CB238;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_833CB238:
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r20,r1,80
	ctx.r20.s64 = ctx.r1.s64 + 80;
	// sthx r9,r8,r20
	PPC_STORE_U16(ctx.r8.u32 + ctx.r20.u32, ctx.r9.u16);
loc_833CB244:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cb3b8
	if (!ctx.cr6.eq) goto loc_833CB3B8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cb39c
	if (!ctx.cr6.eq) goto loc_833CB39C;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r11,r7,31
	ctx.xer.ca = ctx.r7.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r7.s64;
loc_833CB26C:
	// srw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
loc_833CB270:
	// and r20,r9,r31
	ctx.r20.u64 = ctx.r9.u64 & ctx.r31.u64;
	// and r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 & ctx.r30.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// or r9,r8,r29
	ctx.r9.u64 = ctx.r8.u64 | ctx.r29.u64;
	// beq cr6,0x833cb288
	if (ctx.cr6.eq) goto loc_833CB288;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_833CB288:
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r20,r1,80
	ctx.r20.s64 = ctx.r1.s64 + 80;
	// sthx r9,r8,r20
	PPC_STORE_U16(ctx.r8.u32 + ctx.r20.u32, ctx.r9.u16);
loc_833CB294:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cb41c
	if (!ctx.cr6.eq) goto loc_833CB41C;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cb400
	if (!ctx.cr6.eq) goto loc_833CB400;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r11,r7,31
	ctx.xer.ca = ctx.r7.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r7.s64;
loc_833CB2BC:
	// srw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
loc_833CB2C0:
	// and r20,r9,r31
	ctx.r20.u64 = ctx.r9.u64 & ctx.r31.u64;
	// and r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 & ctx.r30.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// or r9,r8,r29
	ctx.r9.u64 = ctx.r8.u64 | ctx.r29.u64;
	// beq cr6,0x833cb2d8
	if (ctx.cr6.eq) goto loc_833CB2D8;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_833CB2D8:
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r20,r1,80
	ctx.r20.s64 = ctx.r1.s64 + 80;
	// sthx r9,r8,r20
	PPC_STORE_U16(ctx.r8.u32 + ctx.r20.u32, ctx.r9.u16);
loc_833CB2E4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cb480
	if (!ctx.cr6.eq) goto loc_833CB480;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cb464
	if (!ctx.cr6.eq) goto loc_833CB464;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r11,r7,31
	ctx.xer.ca = ctx.r7.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r7.s64;
loc_833CB30C:
	// srw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
loc_833CB310:
	// and r20,r9,r31
	ctx.r20.u64 = ctx.r9.u64 & ctx.r31.u64;
	// and r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 & ctx.r30.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// or r9,r8,r29
	ctx.r9.u64 = ctx.r8.u64 | ctx.r29.u64;
	// beq cr6,0x833cb328
	if (ctx.cr6.eq) goto loc_833CB328;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_833CB328:
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// sthx r9,r8,r6
	PPC_STORE_U16(ctx.r8.u32 + ctx.r6.u32, ctx.r9.u16);
	// b 0x833cb544
	goto loc_833CB544;
loc_833CB338:
	// li r11,31
	ctx.r11.s64 = 31;
loc_833CB33C:
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x833cb244
	goto loc_833CB244;
loc_833CB354:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x833cb33c
	if (!ctx.cr6.eq) goto loc_833CB33C;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bge cr6,0x833cb394
	if (!ctx.cr6.lt) goto loc_833CB394;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r20,r11,r7
	ctx.r20.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// slw r19,r8,r11
	ctx.r19.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// or r9,r19,r9
	ctx.r9.u64 = ctx.r19.u64 | ctx.r9.u64;
	// srw r10,r8,r20
	ctx.r10.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r20.u8 & 0x3F));
	// b 0x833cb220
	goto loc_833CB220;
loc_833CB394:
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// b 0x833cb21c
	goto loc_833CB21C;
loc_833CB39C:
	// li r11,31
	ctx.r11.s64 = 31;
loc_833CB3A0:
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x833cb294
	goto loc_833CB294;
loc_833CB3B8:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x833cb3a0
	if (!ctx.cr6.eq) goto loc_833CB3A0;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bge cr6,0x833cb3f8
	if (!ctx.cr6.lt) goto loc_833CB3F8;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r20,r11,r7
	ctx.r20.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// slw r19,r8,r11
	ctx.r19.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// or r9,r19,r9
	ctx.r9.u64 = ctx.r19.u64 | ctx.r9.u64;
	// srw r10,r8,r20
	ctx.r10.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r20.u8 & 0x3F));
	// b 0x833cb270
	goto loc_833CB270;
loc_833CB3F8:
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// b 0x833cb26c
	goto loc_833CB26C;
loc_833CB400:
	// li r11,31
	ctx.r11.s64 = 31;
loc_833CB404:
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x833cb2e4
	goto loc_833CB2E4;
loc_833CB41C:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x833cb404
	if (!ctx.cr6.eq) goto loc_833CB404;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bge cr6,0x833cb45c
	if (!ctx.cr6.lt) goto loc_833CB45C;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r20,r11,r7
	ctx.r20.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// slw r19,r8,r11
	ctx.r19.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// or r9,r19,r9
	ctx.r9.u64 = ctx.r19.u64 | ctx.r9.u64;
	// srw r10,r8,r20
	ctx.r10.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r20.u8 & 0x3F));
	// b 0x833cb2c0
	goto loc_833CB2C0;
loc_833CB45C:
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// b 0x833cb2bc
	goto loc_833CB2BC;
loc_833CB464:
	// li r11,31
	ctx.r11.s64 = 31;
loc_833CB468:
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x833cb544
	goto loc_833CB544;
loc_833CB480:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x833cb468
	if (!ctx.cr6.eq) goto loc_833CB468;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bge cr6,0x833cb4c0
	if (!ctx.cr6.lt) goto loc_833CB4C0;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r20,r11,r7
	ctx.r20.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// slw r19,r8,r11
	ctx.r19.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// or r9,r19,r9
	ctx.r9.u64 = ctx.r19.u64 | ctx.r9.u64;
	// srw r10,r8,r20
	ctx.r10.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r20.u8 & 0x3F));
	// b 0x833cb310
	goto loc_833CB310;
loc_833CB4C0:
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// b 0x833cb30c
	goto loc_833CB30C;
loc_833CB4C8:
	// rlwinm r6,r8,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x833cb504
	if (!ctx.cr6.lt) goto loc_833CB504;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subfic r20,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r20.s64 = 32 - ctx.r7.s64;
	// subf r19,r11,r7
	ctx.r19.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// slw r18,r9,r11
	ctx.r18.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// srw r20,r28,r20
	ctx.r20.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r20.u8 & 0x3F));
	// or r10,r18,r10
	ctx.r10.u64 = ctx.r18.u64 | ctx.r10.u64;
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// and r8,r20,r10
	ctx.r8.u64 = ctx.r20.u64 & ctx.r10.u64;
	// srw r10,r9,r19
	ctx.r10.u64 = ctx.r19.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r19.u8 & 0x3F));
	// b 0x833cb518
	goto loc_833CB518;
loc_833CB504:
	// subfic r9,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r7.s64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// srw r9,r28,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r9.u8 & 0x3F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
loc_833CB518:
	// and r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 & ctx.r30.u64;
	// and r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 & ctx.r31.u64;
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | ctx.r29.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x833cb530
	if (ctx.cr6.eq) goto loc_833CB530;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_833CB530:
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r22,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r22.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// sthx r9,r8,r6
	PPC_STORE_U16(ctx.r8.u32 + ctx.r6.u32, ctx.r9.u16);
loc_833CB540:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_833CB544:
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x833cb12c
	if (ctx.cr6.lt) goto loc_833CB12C;
loc_833CB54C:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// srawi r29,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bgt cr6,0x833cb110
	if (ctx.cr6.gt) goto loc_833CB110;
loc_833CB55C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x833cb8c0
	if (ctx.cr6.eq) goto loc_833CB8C0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x833cb8c0
	if (!ctx.cr6.lt) goto loc_833CB8C0;
loc_833CB570:
	// lbz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x833cb8b4
	if (ctx.cr6.eq) goto loc_833CB8B4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cb598
	if (!ctx.cr6.eq) goto loc_833CB598;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cb5a4
	goto loc_833CB5A4;
loc_833CB598:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_833CB5A4:
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x833cb8b4
	if (ctx.cr6.eq) goto loc_833CB8B4;
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x833cb8b4
	if (ctx.cr6.gt) goto loc_833CB8B4;
	// lis r12,-31939
	ctx.r12.s64 = -2093154304;
	// addi r12,r12,-18988
	ctx.r12.s64 = ctx.r12.s64 + -18988;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_833CB5E4;
	case 1:
		goto loc_833CB5F8;
	case 2:
		goto loc_833CB630;
	case 3:
		goto loc_833CB86C;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-18972(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18972);
	// lwz r25,-18952(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18952);
	// lwz r25,-18896(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18896);
	// lwz r25,-18324(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18324);
loc_833CB5E4:
	// rlwinm r7,r8,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,17
	ctx.r9.s64 = ctx.r9.s64 + 17;
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// b 0x833cb63c
	goto loc_833CB63C;
loc_833CB5F8:
	// rlwinm r9,r8,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// addi r7,r9,18
	ctx.r7.s64 = ctx.r9.s64 + 18;
	// addi r4,r9,34
	ctx.r4.s64 = ctx.r9.s64 + 34;
	// addi r9,r9,50
	ctx.r9.s64 = ctx.r9.s64 + 50;
	// stb r8,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r8.u8);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r9,r25,1
	ctx.r9.s64 = ctx.r25.s64 + 1;
	// stb r7,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r7.u8);
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r25,r9,1
	ctx.r25.s64 = ctx.r9.s64 + 1;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// b 0x833cb8b8
	goto loc_833CB8B8;
loc_833CB630:
	// stb r22,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r22.u8);
	// rlwinm r7,r8,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_833CB63C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cb658
	if (!ctx.cr6.eq) goto loc_833CB658;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r9,31
	ctx.r9.s64 = 31;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cb664
	goto loc_833CB664;
loc_833CB658:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_833CB664:
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833cb684
	if (ctx.cr6.eq) goto loc_833CB684;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// b 0x833cb6c4
	goto loc_833CB6C4;
loc_833CB684:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x833cb6a0
	if (!ctx.cr6.eq) goto loc_833CB6A0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r9,31
	ctx.r9.s64 = 31;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cb6ac
	goto loc_833CB6AC;
loc_833CB6A0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_833CB6AC:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r11,r23,0,31,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r23.u32, 0) & 0xFFFFFFFFFFFF0001) | (ctx.r11.u64 & 0xFFFE);
	// sthx r11,r8,r4
	PPC_STORE_U16(ctx.r8.u32 + ctx.r4.u32, ctx.r11.u16);
loc_833CB6C4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x833cb6e4
	if (!ctx.cr6.eq) goto loc_833CB6E4;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,31
	ctx.r10.s64 = 31;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cb6f0
	goto loc_833CB6F0;
loc_833CB6E4:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
loc_833CB6F0:
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x833cb710
	if (ctx.cr6.eq) goto loc_833CB710;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x833cb750
	goto loc_833CB750;
loc_833CB710:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x833cb72c
	if (!ctx.cr6.eq) goto loc_833CB72C;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,31
	ctx.r10.s64 = 31;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cb738
	goto loc_833CB738;
loc_833CB72C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_833CB738:
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r9,r23,0,31,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r23.u32, 0) & 0xFFFFFFFFFFFF0001) | (ctx.r9.u64 & 0xFFFE);
	// sthx r9,r8,r4
	PPC_STORE_U16(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u16);
loc_833CB750:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x833cb770
	if (!ctx.cr6.eq) goto loc_833CB770;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r9,31
	ctx.r9.s64 = 31;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cb77c
	goto loc_833CB77C;
loc_833CB770:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
loc_833CB77C:
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833cb79c
	if (ctx.cr6.eq) goto loc_833CB79C;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r10,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r10.u8);
	// b 0x833cb7dc
	goto loc_833CB7DC;
loc_833CB79C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x833cb7b8
	if (!ctx.cr6.eq) goto loc_833CB7B8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r9,31
	ctx.r9.s64 = 31;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cb7c4
	goto loc_833CB7C4;
loc_833CB7B8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_833CB7C4:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r10,r23,0,31,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r23.u32, 0) & 0xFFFFFFFFFFFF0001) | (ctx.r10.u64 & 0xFFFE);
	// sthx r10,r8,r4
	PPC_STORE_U16(ctx.r8.u32 + ctx.r4.u32, ctx.r10.u16);
loc_833CB7DC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x833cb7fc
	if (!ctx.cr6.eq) goto loc_833CB7FC;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cb808
	goto loc_833CB808;
loc_833CB7FC:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_833CB808:
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x833cb828
	if (ctx.cr6.eq) goto loc_833CB828;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x833cb8b8
	goto loc_833CB8B8;
loc_833CB828:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cb844
	if (!ctx.cr6.eq) goto loc_833CB844;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cb850
	goto loc_833CB850;
loc_833CB844:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_833CB850:
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwimi r9,r23,0,31,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r23.u32, 0) & 0xFFFFFFFFFFFF0001) | (ctx.r9.u64 & 0xFFFE);
	// sthx r9,r8,r7
	PPC_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u16);
	// b 0x833cb8b8
	goto loc_833CB8B8;
loc_833CB86C:
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cb88c
	if (!ctx.cr6.eq) goto loc_833CB88C;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cb898
	goto loc_833CB898;
loc_833CB88C:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_833CB898:
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stb r22,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r22.u8);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwimi r9,r23,0,31,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r23.u32, 0) & 0xFFFFFFFFFFFF0001) | (ctx.r9.u64 & 0xFFFE);
	// sthx r9,r8,r7
	PPC_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u16);
loc_833CB8B4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_833CB8B8:
	// cmplw cr6,r6,r25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x833cb570
	if (ctx.cr6.lt) goto loc_833CB570;
loc_833CB8C0:
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// stw r11,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// stw r5,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r5.u32);
	// sth r9,2(r24)
	PPC_STORE_U16(ctx.r24.u32 + 2, ctx.r9.u16);
	// stw r8,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r8.u32);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r7,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r7.u32);
	// stw r6,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r6.u32);
	// stw r10,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r10.u32);
	// stw r11,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
	// stw r9,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r9.u32);
	// stw r8,28(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28, ctx.r8.u32);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r7,32(r24)
	PPC_STORE_U32(ctx.r24.u32 + 32, ctx.r7.u32);
	// stw r6,36(r24)
	PPC_STORE_U32(ctx.r24.u32 + 36, ctx.r6.u32);
	// stw r10,40(r24)
	PPC_STORE_U32(ctx.r24.u32 + 40, ctx.r10.u32);
	// stw r11,44(r24)
	PPC_STORE_U32(ctx.r24.u32 + 44, ctx.r11.u32);
	// stw r9,48(r24)
	PPC_STORE_U32(ctx.r24.u32 + 48, ctx.r9.u32);
	// stw r8,52(r24)
	PPC_STORE_U32(ctx.r24.u32 + 52, ctx.r8.u32);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r7,56(r24)
	PPC_STORE_U32(ctx.r24.u32 + 56, ctx.r7.u32);
	// stw r6,60(r24)
	PPC_STORE_U32(ctx.r24.u32 + 60, ctx.r6.u32);
	// stw r10,64(r24)
	PPC_STORE_U32(ctx.r24.u32 + 64, ctx.r10.u32);
	// stw r11,68(r24)
	PPC_STORE_U32(ctx.r24.u32 + 68, ctx.r11.u32);
	// stw r9,72(r24)
	PPC_STORE_U32(ctx.r24.u32 + 72, ctx.r9.u32);
	// stw r8,76(r24)
	PPC_STORE_U32(ctx.r24.u32 + 76, ctx.r8.u32);
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r7,80(r24)
	PPC_STORE_U32(ctx.r24.u32 + 80, ctx.r7.u32);
	// stw r6,84(r24)
	PPC_STORE_U32(ctx.r24.u32 + 84, ctx.r6.u32);
	// stw r10,88(r24)
	PPC_STORE_U32(ctx.r24.u32 + 88, ctx.r10.u32);
	// stw r11,92(r24)
	PPC_STORE_U32(ctx.r24.u32 + 92, ctx.r11.u32);
	// stw r9,96(r24)
	PPC_STORE_U32(ctx.r24.u32 + 96, ctx.r9.u32);
	// stw r8,100(r24)
	PPC_STORE_U32(ctx.r24.u32 + 100, ctx.r8.u32);
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r8,204(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r7,104(r24)
	PPC_STORE_U32(ctx.r24.u32 + 104, ctx.r7.u32);
	// stw r6,108(r24)
	PPC_STORE_U32(ctx.r24.u32 + 108, ctx.r6.u32);
	// stw r10,112(r24)
	PPC_STORE_U32(ctx.r24.u32 + 112, ctx.r10.u32);
	// stw r11,116(r24)
	PPC_STORE_U32(ctx.r24.u32 + 116, ctx.r11.u32);
	// stw r9,120(r24)
	PPC_STORE_U32(ctx.r24.u32 + 120, ctx.r9.u32);
	// stw r8,124(r24)
	PPC_STORE_U32(ctx.r24.u32 + 124, ctx.r8.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833CB9D4"))) PPC_WEAK_FUNC(sub_833CB9D4);
PPC_FUNC_IMPL(__imp__sub_833CB9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833CB9D8"))) PPC_WEAK_FUNC(sub_833CB9D8);
PPC_FUNC_IMPL(__imp__sub_833CB9D8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x833CB9E0;
	__savegprlr_22(ctx, base);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x833cba24
	if (!ctx.cr6.lt) goto loc_833CBA24;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r8,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r11.s64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// srw r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// b 0x833cba2c
	goto loc_833CBA2C;
loc_833CBA24:
	// rlwinm r7,r10,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
loc_833CBA2C:
	// li r8,16
	ctx.r8.s64 = 16;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r28,r1,-236
	ctx.r28.s64 = ctx.r1.s64 + -236;
	// stb r8,-236(r1)
	PPC_STORE_U8(ctx.r1.u32 + -236, ctx.r8.u8);
	// li r8,96
	ctx.r8.s64 = 96;
	// addi r26,r1,-232
	ctx.r26.s64 = ctx.r1.s64 + -232;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r8,-235(r1)
	PPC_STORE_U8(ctx.r1.u32 + -235, ctx.r8.u8);
	// li r8,176
	ctx.r8.s64 = 176;
	// stb r8,-234(r1)
	PPC_STORE_U8(ctx.r1.u32 + -234, ctx.r8.u8);
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r8,-233(r1)
	PPC_STORE_U8(ctx.r1.u32 + -233, ctx.r8.u8);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// slw r27,r9,r8
	ctx.r27.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// beq cr6,0x833cbee4
	if (ctx.cr6.eq) goto loc_833CBEE4;
loc_833CBA78:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x833cbaf8
	if (!ctx.cr6.gt) goto loc_833CBAF8;
loc_833CBA84:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cbaa0
	if (!ctx.cr6.eq) goto loc_833CBAA0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cbaac
	goto loc_833CBAAC;
loc_833CBAA0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_833CBAAC:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833cbaec
	if (ctx.cr6.eq) goto loc_833CBAEC;
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// lbzx r8,r6,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// lbzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// neg r10,r27
	ctx.r10.s64 = -ctx.r27.s64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x833cbad8
	if (ctx.cr6.lt) goto loc_833CBAD8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_833CBAD8:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stbx r10,r8,r3
	PPC_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u8);
	// beq cr6,0x833cbee4
	if (ctx.cr6.eq) goto loc_833CBEE4;
loc_833CBAEC:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x833cba84
	if (ctx.cr6.lt) goto loc_833CBA84;
loc_833CBAF8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x833cbed4
	if (!ctx.cr6.lt) goto loc_833CBED4;
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// add r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 + ctx.r10.u64;
loc_833CBB0C:
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833cbec8
	if (ctx.cr6.eq) goto loc_833CBEC8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cbb34
	if (!ctx.cr6.eq) goto loc_833CBB34;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r7,r9,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cbb40
	goto loc_833CBB40;
loc_833CBB34:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_833CBB40:
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x833cbec8
	if (ctx.cr6.eq) goto loc_833CBEC8;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x833cbec8
	if (ctx.cr6.gt) goto loc_833CBEC8;
	// lis r12,-31939
	ctx.r12.s64 = -2093154304;
	// addi r12,r12,-17552
	ctx.r12.s64 = ctx.r12.s64 + -17552;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_833CBB80;
	case 1:
		goto loc_833CBB94;
	case 2:
		goto loc_833CBBCC;
	case 3:
		goto loc_833CBE68;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-17536(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17536);
	// lwz r25,-17516(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17516);
	// lwz r25,-17460(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17460);
	// lwz r25,-16792(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + -16792);
loc_833CBB80:
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,17
	ctx.r10.s64 = ctx.r10.s64 + 17;
	// stb r10,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r10.u8);
	// b 0x833cbbd8
	goto loc_833CBBD8;
loc_833CBB94:
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// addi r23,r10,18
	ctx.r23.s64 = ctx.r10.s64 + 18;
	// addi r22,r10,34
	ctx.r22.s64 = ctx.r10.s64 + 34;
	// addi r10,r10,50
	ctx.r10.s64 = ctx.r10.s64 + 50;
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 1;
	// stb r23,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r23.u8);
	// stb r22,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r22.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r26,r10,1
	ctx.r26.s64 = ctx.r10.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x833cbecc
	goto loc_833CBECC;
loc_833CBBCC:
	// stb r25,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r25.u8);
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_833CBBD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cbbf4
	if (!ctx.cr6.eq) goto loc_833CBBF4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cbc00
	goto loc_833CBC00;
loc_833CBBF4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_833CBC00:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833cbc20
	if (ctx.cr6.eq) goto loc_833CBC20;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// b 0x833cbc78
	goto loc_833CBC78;
loc_833CBC20:
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne cr6,0x833cbc48
	if (!ctx.cr6.eq) goto loc_833CBC48;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cbc54
	goto loc_833CBC54;
loc_833CBC48:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_833CBC54:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// neg r10,r27
	ctx.r10.s64 = -ctx.r27.s64;
	// bne cr6,0x833cbc68
	if (!ctx.cr6.eq) goto loc_833CBC68;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_833CBC68:
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// stbx r10,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// beq cr6,0x833cbee4
	if (ctx.cr6.eq) goto loc_833CBEE4;
loc_833CBC78:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cbc98
	if (!ctx.cr6.eq) goto loc_833CBC98;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cbca4
	goto loc_833CBCA4;
loc_833CBC98:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_833CBCA4:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833cbcc4
	if (ctx.cr6.eq) goto loc_833CBCC4;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// b 0x833cbd1c
	goto loc_833CBD1C;
loc_833CBCC4:
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne cr6,0x833cbcec
	if (!ctx.cr6.eq) goto loc_833CBCEC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cbcf8
	goto loc_833CBCF8;
loc_833CBCEC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_833CBCF8:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// neg r10,r27
	ctx.r10.s64 = -ctx.r27.s64;
	// bne cr6,0x833cbd0c
	if (!ctx.cr6.eq) goto loc_833CBD0C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_833CBD0C:
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// stbx r10,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// beq cr6,0x833cbee4
	if (ctx.cr6.eq) goto loc_833CBEE4;
loc_833CBD1C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cbd3c
	if (!ctx.cr6.eq) goto loc_833CBD3C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cbd48
	goto loc_833CBD48;
loc_833CBD3C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_833CBD48:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833cbd68
	if (ctx.cr6.eq) goto loc_833CBD68;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// b 0x833cbdc0
	goto loc_833CBDC0;
loc_833CBD68:
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne cr6,0x833cbd90
	if (!ctx.cr6.eq) goto loc_833CBD90;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cbd9c
	goto loc_833CBD9C;
loc_833CBD90:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_833CBD9C:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// neg r10,r27
	ctx.r10.s64 = -ctx.r27.s64;
	// bne cr6,0x833cbdb0
	if (!ctx.cr6.eq) goto loc_833CBDB0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_833CBDB0:
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// stbx r10,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// beq cr6,0x833cbee4
	if (ctx.cr6.eq) goto loc_833CBEE4;
loc_833CBDC0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833cbde0
	if (!ctx.cr6.eq) goto loc_833CBDE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cbdec
	goto loc_833CBDEC;
loc_833CBDE0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_833CBDEC:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833cbe0c
	if (ctx.cr6.eq) goto loc_833CBE0C;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// b 0x833cbecc
	goto loc_833CBECC;
loc_833CBE0C:
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne cr6,0x833cbe34
	if (!ctx.cr6.eq) goto loc_833CBE34;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cbe40
	goto loc_833CBE40;
loc_833CBE34:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_833CBE40:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// neg r10,r27
	ctx.r10.s64 = -ctx.r27.s64;
	// bne cr6,0x833cbe54
	if (!ctx.cr6.eq) goto loc_833CBE54;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_833CBE54:
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// stbx r10,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// beq cr6,0x833cbee4
	if (ctx.cr6.eq) goto loc_833CBEE4;
	// b 0x833cbecc
	goto loc_833CBECC;
loc_833CBE68:
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne cr6,0x833cbe94
	if (!ctx.cr6.eq) goto loc_833CBE94;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x833cbea0
	goto loc_833CBEA0;
loc_833CBE94:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_833CBEA0:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// neg r10,r27
	ctx.r10.s64 = -ctx.r27.s64;
	// bne cr6,0x833cbeb4
	if (!ctx.cr6.eq) goto loc_833CBEB4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_833CBEB4:
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// stbx r10,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// beq cr6,0x833cbee4
	if (ctx.cr6.eq) goto loc_833CBEE4;
	// stb r25,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r25.u8);
loc_833CBEC8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_833CBECC:
	// cmplw cr6,r6,r26
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x833cbb0c
	if (ctx.cr6.lt) goto loc_833CBB0C;
loc_833CBED4:
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// srawi r27,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x833cba78
	if (!ctx.cr6.eq) goto loc_833CBA78;
loc_833CBEE4:
	// stw r31,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r31.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833CBEF4"))) PPC_WEAK_FUNC(sub_833CBEF4);
PPC_FUNC_IMPL(__imp__sub_833CBEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833CBEF8"))) PPC_WEAK_FUNC(sub_833CBEF8);
PPC_FUNC_IMPL(__imp__sub_833CBEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,7
	ctx.r10.s64 = 7;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833CBF20:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x833cbf20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833CBF20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833cb9d8
	ctx.lr = 0x833CBF34;
	sub_833CB9D8(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// lhz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// lhz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r11,90(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// sth r8,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r8.u16);
	// sth r7,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r7.u16);
	// sth r6,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r6.u16);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// sth r10,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r10.u16);
	// lhz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// lhz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r11,106(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r10,126(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// sth r9,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r9.u16);
	// sth r8,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r8.u16);
	// sth r7,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r7.u16);
	// sth r6,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r6.u16);
	// sth r11,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r11.u16);
	// sth r10,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r10.u16);
	// lhz r9,98(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r8,102(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// lhz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// lhz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// lhz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// sth r9,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r9.u16);
	// sth r8,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r8.u16);
	// sth r7,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r7.u16);
	// sth r6,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r6.u16);
	// sth r11,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// sth r10,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r10.u16);
	// lhz r9,110(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r8,114(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r7,130(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 130);
	// lhz r6,134(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// lhz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// lhz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// sth r9,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r9.u16);
	// sth r8,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r8.u16);
	// sth r7,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r7.u16);
	// sth r6,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r6.u16);
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// sth r10,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r10.u16);
	// lhz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 136);
	// lhz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// lhz r7,118(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// lhz r6,122(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 122);
	// lhz r11,138(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 138);
	// lhz r10,142(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 142);
	// sth r9,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r9.u16);
	// sth r8,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r8.u16);
	// sth r7,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r7.u16);
	// sth r6,58(r31)
	PPC_STORE_U16(ctx.r31.u32 + 58, ctx.r6.u16);
	// sth r11,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r11.u16);
	// sth r10,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r10.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833CC048"))) PPC_WEAK_FUNC(sub_833CC048);
PPC_FUNC_IMPL(__imp__sub_833CC048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x833CC050;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,7
	ctx.r10.s64 = 7;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833CC07C:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x833cc07c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833CC07C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833cb9d8
	ctx.lr = 0x833CC094;
	sub_833CB9D8(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r25,85(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lbz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r27,89(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r4,93(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r6,83(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,86(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stb r5,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r5.u8);
	// lbz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// add r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 + ctx.r24.u64;
	// stb r5,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r5.u8);
	// lbz r5,3(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// add r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 + ctx.r25.u64;
	// lbz r25,94(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 94);
	// stb r5,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r5.u8);
	// lbz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// lbz r26,95(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
	// lbz r5,5(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// stb r5,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r5.u8);
	// lbz r5,6(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lbz r3,125(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// stb r5,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r5.u8);
	// lbz r5,7(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// lbz r30,105(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stb r5,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r5.u8);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,124(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbz r5,97(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lbz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r7,91(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r9,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r9.u8);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r27,r9,r7
	ctx.r27.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r7,101(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// lbz r9,106(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// stb r27,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r27.u8);
	// lbz r27,6(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// stb r27,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r27.u8);
	// lbz r27,7(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// stb r27,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r27.u8);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// lbz r25,127(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// lbz r26,98(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// lbz r27,99(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lbz r30,102(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lbz r31,103(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r3,126(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 126);
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lbz r4,109(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 109);
	// stb r8,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r8.u8);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// stb r8,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r8.u8);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbz r6,113(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// stb r8,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r8.u8);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// stb r8,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r8.u8);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r8,107(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r8,129(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// stb r3,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 + ctx.r25.u64;
	// stb r3,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r3.u8);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// stb r3,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r3.u8);
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// stb r3,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r3.u8);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stb r3,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r3.u8);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stb r3,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r3.u8);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stb r9,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r9.u8);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r9,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r9.u8);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// lbz r8,133(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 133);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r6,110(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 110);
	// lbz r26,111(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// lbz r27,114(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// lbz r30,115(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// lbz r31,130(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 130);
	// stb r9,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r9.u8);
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r3,131(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 131);
	// add r25,r9,r8
	ctx.r25.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r4,134(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 134);
	// lbz r5,135(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 135);
	// lbz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r7,117(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// stb r25,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r25.u8);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 + ctx.r25.u64;
	// lbz r25,137(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 137);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + ctx.r26.u64;
	// lbz r26,140(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 140);
	// stb r6,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lbz r27,141(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 141);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// lbz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// lbz r31,119(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// stb r6,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r6.u8);
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lbz r3,122(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// stb r6,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r6.u8);
	// lbz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lbz r4,123(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 123);
	// stb r6,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r6.u8);
	// lbz r6,7(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbz r5,138(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 138);
	// stb r6,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r6.u8);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lbz r6,139(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 139);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r7,142(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 142);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r8,121(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r8,118(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r9,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r9.u8);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lbz r9,143(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// stb r30,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r30.u8);
	// lbz r30,5(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// stb r30,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r30.u8);
	// lbz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// stb r30,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r30.u8);
	// lbz r30,7(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// stb r30,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r30.u8);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stb r8,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r8.u8);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stb r8,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r8.u8);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stb r8,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r8.u8);
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r11,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r11.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

