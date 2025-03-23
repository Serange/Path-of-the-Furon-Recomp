#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82FB9D34"))) PPC_WEAK_FUNC(sub_82FB9D34);
PPC_FUNC_IMPL(__imp__sub_82FB9D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB9D38"))) PPC_WEAK_FUNC(sub_82FB9D38);
PPC_FUNC_IMPL(__imp__sub_82FB9D38) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r31,r10,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r8,r9,8,19,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x1F00;
	// lhz r9,82(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 82);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r7,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// slw r10,r5,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// beq cr6,0x82fb9e08
	if (ctx.cr6.eq) goto loc_82FB9E08;
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r9.s64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82fb9db0
	if (!ctx.cr6.lt) goto loc_82FB9DB0;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// sth r9,82(r8)
	PPC_STORE_U16(ctx.r8.u32 + 82, ctx.r9.u16);
	// b 0x82fb9e04
	goto loc_82FB9E04;
loc_82FB9DB0:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// add r6,r31,r9
	ctx.r6.u64 = ctx.r31.u64 + ctx.r9.u64;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// sth r7,82(r6)
	PPC_STORE_U16(ctx.r6.u32 + 82, ctx.r7.u16);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r9,r8,27
	ctx.r9.u64 = ctx.r8.u32 & 0x1F;
	// rlwinm r7,r5,10,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0x1F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82fb9de8
	if (ctx.cr6.lt) goto loc_82FB9DE8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FB9DE8:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r8,r9,0,27,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// oris r6,r7,32768
	ctx.r6.u64 = ctx.r7.u64 | 2147483648;
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// bne cr6,0x82fb9e08
	if (!ctx.cr6.eq) goto loc_82FB9E08;
loc_82FB9E04:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FB9E08:
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r8,r10,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r10,r5,27
	ctx.r10.u64 = ctx.r5.u32 & 0x1F;
	// rlwinm r7,r6,5,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0x1F;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82fb9e34
	if (!ctx.cr6.gt) goto loc_82FB9E34;
	// subf r9,r10,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r10.s64;
	// b 0x82fb9e50
	goto loc_82FB9E50;
loc_82FB9E34:
	// blt cr6,0x82fb9e48
	if (ctx.cr6.lt) goto loc_82FB9E48;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82fb9e50
	if (!ctx.cr6.eq) goto loc_82FB9E50;
loc_82FB9E48:
	// rlwinm r9,r6,10,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1F;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82FB9E50:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82fb9e98
	if (ctx.cr6.eq) goto loc_82FB9E98;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fb9e64
	if (ctx.cr6.lt) goto loc_82FB9E64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82FB9E64:
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r6,r6,10,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1F;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82fb9e84
	if (ctx.cr6.lt) goto loc_82FB9E84;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FB9E84:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r5,r10,0,27,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1F) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFE0);
	// oris r7,r8,32768
	ctx.r7.u64 = ctx.r8.u64 | 2147483648;
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_82FB9E98:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fb9eb8
	if (ctx.cr6.eq) goto loc_82FB9EB8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fb9eb8
	if (ctx.cr6.eq) goto loc_82FB9EB8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// sth r30,82(r8)
	PPC_STORE_U16(ctx.r8.u32 + 82, ctx.r30.u16);
loc_82FB9EB8:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r9,r9,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1;
	// addi r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 + 76;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// srw r3,r4,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r8.u8 & 0x3F));
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r7.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB9EEC"))) PPC_WEAK_FUNC(sub_82FB9EEC);
PPC_FUNC_IMPL(__imp__sub_82FB9EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB9EF0"))) PPC_WEAK_FUNC(sub_82FB9EF0);
PPC_FUNC_IMPL(__imp__sub_82FB9EF0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r9,r10,8,19,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1F00;
	// lhz r10,82(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 82);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r6,5,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0x1F;
	// clrlwi r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r6,r6,10,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1F;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// beq cr6,0x82fb9f54
	if (ctx.cr6.eq) goto loc_82FB9F54;
	// subfic r3,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r3.s64 = 256 - ctx.r10.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82FB9F54:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82fb9f68
	if (!ctx.cr6.gt) goto loc_82FB9F68;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// b 0x82fb9f7c
	goto loc_82FB9F7C;
loc_82FB9F68:
	// blt cr6,0x82fb9f78
	if (ctx.cr6.lt) goto loc_82FB9F78;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82fb9f7c
	if (!ctx.cr6.eq) goto loc_82FB9F7C;
loc_82FB9F78:
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r11.s64;
loc_82FB9F7C:
	// rlwinm r9,r8,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x1;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srw r3,r9,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB9F94"))) PPC_WEAK_FUNC(sub_82FB9F94);
PPC_FUNC_IMPL(__imp__sub_82FB9F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB9F98"))) PPC_WEAK_FUNC(sub_82FB9F98);
PPC_FUNC_IMPL(__imp__sub_82FB9F98) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r7,3,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r9,r10,10,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1F;
	// subfic r6,r8,7
	ctx.xer.ca = ctx.r8.u32 <= 7;
	ctx.r6.s64 = 7 - ctx.r8.s64;
	// srw r8,r5,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r6.u8 & 0x3F));
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82fb9ffc
	if (!ctx.cr6.lt) goto loc_82FB9FFC;
	// rlwinm r6,r10,5,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// subf r8,r8,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r8.s64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fba008
	if (ctx.cr6.lt) goto loc_82FBA008;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// oris r9,r7,32768
	ctx.r9.u64 = ctx.r7.u64 | 2147483648;
	// rlwimi r10,r8,27,0,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 27) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82FB9FFC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r8,r9,6
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFFFF;
loc_82FBA008:
	// oris r9,r7,32768
	ctx.r9.u64 = ctx.r7.u64 | 2147483648;
	// rlwimi r10,r8,27,0,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 27) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA01C"))) PPC_WEAK_FUNC(sub_82FBA01C);
PPC_FUNC_IMPL(__imp__sub_82FBA01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBA020"))) PPC_WEAK_FUNC(sub_82FBA020);
PPC_FUNC_IMPL(__imp__sub_82FBA020) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fba068
	if (ctx.cr6.eq) goto loc_82FBA068;
loc_82FBA054:
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// dcbz r10,r7
	memset(base + ((ctx.r10.u32 + ctx.r7.u32) & ~31), 0, 32);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fba054
	if (ctx.cr6.lt) goto loc_82FBA054;
loc_82FBA068:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r5,r10,1
	ctx.r5.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r7,0,5,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x7FFF000;
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r4,r9,31,20,0
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 31) & 0xFFFFFFFF80000FFF) | (ctx.r4.u64 & 0x7FFFF000);
	// rlwinm r10,r10,0,12,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// rlwinm r6,r6,0,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// clrlwi r9,r7,6
	ctx.r9.u64 = ctx.r7.u32 & 0x3FFFFFF;
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r8,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// stw r8,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// sth r8,82(r11)
	PPC_STORE_U16(ctx.r11.u32 + 82, ctx.r8.u16);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA0D0"))) PPC_WEAK_FUNC(sub_82FBA0D0);
PPC_FUNC_IMPL(__imp__sub_82FBA0D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82fba100
	if (ctx.cr6.eq) goto loc_82FBA100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r3,r9,6,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1F;
	// blr 
	return;
loc_82FBA100:
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r3,r8,6,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA110"))) PPC_WEAK_FUNC(sub_82FBA110);
PPC_FUNC_IMPL(__imp__sub_82FBA110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82fba140
	if (ctx.cr6.eq) goto loc_82FBA140;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r3,r9,6,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1F;
	// blr 
	return;
loc_82FBA140:
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r3,r8,6,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA150"))) PPC_WEAK_FUNC(sub_82FBA150);
PPC_FUNC_IMPL(__imp__sub_82FBA150) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82fba180
	if (ctx.cr6.eq) goto loc_82FBA180;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r3,r9,6,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1F;
	// blr 
	return;
loc_82FBA180:
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r3,r8,6,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA190"))) PPC_WEAK_FUNC(sub_82FBA190);
PPC_FUNC_IMPL(__imp__sub_82FBA190) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r9,10(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 10);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rotlwi r8,r9,12
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 12);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r4,r7,0,20,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lbz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 8);
	// rlwimi r6,r7,12,18,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 12) & 0x3000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFCFFF);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lbz r8,9(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 9);
	// rlwimi r4,r8,17,12,14
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 17) & 0xE0000) | (ctx.r4.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r10,r7,0,6,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFC000000);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwimi r6,r9,0,0,5
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFC000000) | (ctx.r6.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA204"))) PPC_WEAK_FUNC(sub_82FBA204);
PPC_FUNC_IMPL(__imp__sub_82FBA204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBA208"))) PPC_WEAK_FUNC(sub_82FBA208);
PPC_FUNC_IMPL(__imp__sub_82FBA208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// beq cr6,0x82fba234
	if (ctx.cr6.eq) goto loc_82FBA234;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r3,r7,20,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0xFF;
	// blr 
	return;
loc_82FBA234:
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r3,r8,20,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA250"))) PPC_WEAK_FUNC(sub_82FBA250);
PPC_FUNC_IMPL(__imp__sub_82FBA250) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,76(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA26C"))) PPC_WEAK_FUNC(sub_82FBA26C);
PPC_FUNC_IMPL(__imp__sub_82FBA26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBA270"))) PPC_WEAK_FUNC(sub_82FBA270);
PPC_FUNC_IMPL(__imp__sub_82FBA270) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r7,r9,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x82fba29c
	if (!ctx.cr6.eq) goto loc_82FBA29C;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
loc_82FBA29C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r8,r9,0,10,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x300000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82fba2c4
	if (!ctx.cr6.eq) goto loc_82FBA2C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_82FBA2C4:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r8,r9,21
	ctx.r8.s64 = ctx.r9.s64 + 21;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r10,r4,6
	ctx.r10.u64 = ctx.r4.u32 & 0x3FFFFFF;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r8,r9,29
	ctx.r8.u64 = ctx.r9.u32 & 0x7;
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA2F8"))) PPC_WEAK_FUNC(sub_82FBA2F8);
PPC_FUNC_IMPL(__imp__sub_82FBA2F8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r5,r10,0,0,5
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFC000000) | (ctx.r5.u64 & 0xFFFFFFFF03FFFFFF);
	// rlwimi r9,r6,24,5,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 24) & 0x7000000) | (ctx.r9.u64 & 0xFFFFFFFFF8FFFFFF);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA32C"))) PPC_WEAK_FUNC(sub_82FBA32C);
PPC_FUNC_IMPL(__imp__sub_82FBA32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBA330"))) PPC_WEAK_FUNC(sub_82FBA330);
PPC_FUNC_IMPL(__imp__sub_82FBA330) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r11,21,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7FFF;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA34C"))) PPC_WEAK_FUNC(sub_82FBA34C);
PPC_FUNC_IMPL(__imp__sub_82FBA34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBA350"))) PPC_WEAK_FUNC(sub_82FBA350);
PPC_FUNC_IMPL(__imp__sub_82FBA350) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// lis r10,32746
	ctx.r10.s64 = 2146041856;
	// lis r9,32746
	ctx.r9.s64 = 2146041856;
	// ori r8,r11,6144
	ctx.r8.u64 = ctx.r11.u64 | 6144;
	// ori r6,r10,6148
	ctx.r6.u64 = ctx.r10.u64 | 6148;
	// ori r4,r9,6152
	ctx.r4.u64 = ctx.r9.u64 | 6152;
	// lis r7,32746
	ctx.r7.s64 = 2146041856;
	// lis r5,32746
	ctx.r5.s64 = 2146041856;
	// lwbrx r11,0,r8
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// ori r10,r7,6156
	ctx.r10.u64 = ctx.r7.u64 | 6156;
	// lis r3,32746
	ctx.r3.s64 = 2146041856;
	// lwbrx r8,0,r6
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r6.u32));
	// ori r7,r5,6160
	ctx.r7.u64 = ctx.r5.u64 | 6160;
	// lwbrx r5,0,r4
	ctx.r5.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// ori r4,r3,6164
	ctx.r4.u64 = ctx.r3.u64 | 6164;
	// lis r9,32746
	ctx.r9.s64 = 2146041856;
	// lis r6,32746
	ctx.r6.s64 = 2146041856;
	// lwbrx r11,0,r10
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// ori r10,r9,6168
	ctx.r10.u64 = ctx.r9.u64 | 6168;
	// lwbrx r8,0,r7
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// lis r3,32746
	ctx.r3.s64 = 2146041856;
	// ori r7,r6,6172
	ctx.r7.u64 = ctx.r6.u64 | 6172;
	// lwbrx r5,0,r4
	ctx.r5.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// ori r4,r3,6176
	ctx.r4.u64 = ctx.r3.u64 | 6176;
	// lis r9,32746
	ctx.r9.s64 = 2146041856;
	// lis r6,32746
	ctx.r6.s64 = 2146041856;
	// lwbrx r11,0,r10
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// ori r10,r9,6208
	ctx.r10.u64 = ctx.r9.u64 | 6208;
	// lwbrx r8,0,r7
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// lis r3,32746
	ctx.r3.s64 = 2146041856;
	// ori r7,r6,6212
	ctx.r7.u64 = ctx.r6.u64 | 6212;
	// lwbrx r5,0,r4
	ctx.r5.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// ori r4,r3,6216
	ctx.r4.u64 = ctx.r3.u64 | 6216;
	// lis r9,32746
	ctx.r9.s64 = 2146041856;
	// lis r6,32746
	ctx.r6.s64 = 2146041856;
	// lwbrx r11,0,r10
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// ori r10,r9,6220
	ctx.r10.u64 = ctx.r9.u64 | 6220;
	// lwbrx r8,0,r7
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// lis r3,32746
	ctx.r3.s64 = 2146041856;
	// ori r7,r6,6224
	ctx.r7.u64 = ctx.r6.u64 | 6224;
	// lwbrx r5,0,r4
	ctx.r5.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// ori r4,r3,6228
	ctx.r4.u64 = ctx.r3.u64 | 6228;
	// lis r9,32746
	ctx.r9.s64 = 2146041856;
	// lis r6,32746
	ctx.r6.s64 = 2146041856;
	// lwbrx r11,0,r10
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// ori r3,r9,6232
	ctx.r3.u64 = ctx.r9.u64 | 6232;
	// lwbrx r9,0,r7
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// lis r8,32746
	ctx.r8.s64 = 2146041856;
	// ori r10,r6,6236
	ctx.r10.u64 = ctx.r6.u64 | 6236;
	// lwbrx r6,0,r4
	ctx.r6.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// lis r7,32746
	ctx.r7.s64 = 2146041856;
	// lis r5,32746
	ctx.r5.s64 = 2146041856;
	// ori r8,r8,6240
	ctx.r8.u64 = ctx.r8.u64 | 6240;
	// lwbrx r3,0,r3
	ctx.r3.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r3.u32));
	// lis r4,32746
	ctx.r4.s64 = 2146041856;
	// ori r7,r7,6244
	ctx.r7.u64 = ctx.r7.u64 | 6244;
	// lwbrx r10,0,r10
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// ori r6,r5,6272
	ctx.r6.u64 = ctx.r5.u64 | 6272;
	// lis r9,32746
	ctx.r9.s64 = 2146041856;
	// lwbrx r10,0,r8
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// ori r5,r4,6276
	ctx.r5.u64 = ctx.r4.u64 | 6276;
	// ori r4,r11,6280
	ctx.r4.u64 = ctx.r11.u64 | 6280;
	// lwbrx r8,0,r7
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// ori r3,r9,6284
	ctx.r3.u64 = ctx.r9.u64 | 6284;
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// lwbrx r6,0,r6
	ctx.r6.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r6.u32));
	// lis r9,32746
	ctx.r9.s64 = 2146041856;
	// lwbrx r10,0,r5
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r5.u32));
	// ori r11,r11,6288
	ctx.r11.u64 = ctx.r11.u64 | 6288;
	// lwbrx r6,0,r4
	ctx.r6.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// lis r7,32746
	ctx.r7.s64 = 2146041856;
	// lwbrx r4,0,r3
	ctx.r4.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r3.u32));
	// lis r8,32746
	ctx.r8.s64 = 2146041856;
	// lis r3,32746
	ctx.r3.s64 = 2146041856;
	// ori r5,r9,6292
	ctx.r5.u64 = ctx.r9.u64 | 6292;
	// ori r10,r7,6296
	ctx.r10.u64 = ctx.r7.u64 | 6296;
	// lwbrx r7,0,r11
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// lis r9,32746
	ctx.r9.s64 = 2146041856;
	// ori r6,r8,6300
	ctx.r6.u64 = ctx.r8.u64 | 6300;
	// ori r4,r3,6304
	ctx.r4.u64 = ctx.r3.u64 | 6304;
	// ori r11,r9,6308
	ctx.r11.u64 = ctx.r9.u64 | 6308;
	// lwbrx r3,0,r5
	ctx.r3.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r5.u32));
	// lwbrx r10,0,r10
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// lwbrx r9,0,r6
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r6.u32));
	// lwbrx r8,0,r4
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// lwbrx r7,0,r11
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA4C8"))) PPC_WEAK_FUNC(sub_82FBA4C8);
PPC_FUNC_IMPL(__imp__sub_82FBA4C8) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA4D0"))) PPC_WEAK_FUNC(sub_82FBA4D0);
PPC_FUNC_IMPL(__imp__sub_82FBA4D0) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA4D8"))) PPC_WEAK_FUNC(sub_82FBA4D8);
PPC_FUNC_IMPL(__imp__sub_82FBA4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// ori r11,r11,6168
	ctx.r11.u64 = ctx.r11.u64 | 6168;
	// lwbrx r10,0,r11
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// xori r3,r10,512
	ctx.r3.u64 = ctx.r10.u64 ^ 512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA4EC"))) PPC_WEAK_FUNC(sub_82FBA4EC);
PPC_FUNC_IMPL(__imp__sub_82FBA4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBA4F0"))) PPC_WEAK_FUNC(sub_82FBA4F0);
PPC_FUNC_IMPL(__imp__sub_82FBA4F0) {
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
	// bl 0x833b83d4
	ctx.lr = 0x82FBA500;
	__imp__MmGetPhysicalAddress(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,20212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20212);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA524"))) PPC_WEAK_FUNC(sub_82FBA524);
PPC_FUNC_IMPL(__imp__sub_82FBA524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBA528"))) PPC_WEAK_FUNC(sub_82FBA528);
PPC_FUNC_IMPL(__imp__sub_82FBA528) {
	PPC_FUNC_PROLOGUE();
	// addis r10,r3,8187
	ctx.r10.s64 = ctx.r3.s64 + 536543232;
	// addi r10,r10,-31152
	ctx.r10.s64 = ctx.r10.s64 + -31152;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwbrx r4,0,r9
	PPC_MM_STORE_U32(ctx.r9.u32, __builtin_bswap32(ctx.r4.u32));
	// eieio 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA540"))) PPC_WEAK_FUNC(sub_82FBA540);
PPC_FUNC_IMPL(__imp__sub_82FBA540) {
	PPC_FUNC_PROLOGUE();
	// addis r10,r3,8187
	ctx.r10.s64 = ctx.r3.s64 + 536543232;
	// addi r10,r10,-31088
	ctx.r10.s64 = ctx.r10.s64 + -31088;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwbrx r4,0,r9
	PPC_MM_STORE_U32(ctx.r9.u32, __builtin_bswap32(ctx.r4.u32));
	// eieio 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA558"))) PPC_WEAK_FUNC(sub_82FBA558);
PPC_FUNC_IMPL(__imp__sub_82FBA558) {
	PPC_FUNC_PROLOGUE();
	// addis r10,r3,8187
	ctx.r10.s64 = ctx.r3.s64 + 536543232;
	// addi r10,r10,-31072
	ctx.r10.s64 = ctx.r10.s64 + -31072;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwbrx r4,0,r9
	PPC_MM_STORE_U32(ctx.r9.u32, __builtin_bswap32(ctx.r4.u32));
	// eieio 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA570"))) PPC_WEAK_FUNC(sub_82FBA570);
PPC_FUNC_IMPL(__imp__sub_82FBA570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// rlwimi r4,r3,1,30,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 1) & 0x2) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFFD);
	// ori r11,r11,6148
	ctx.r11.u64 = ctx.r11.u64 | 6148;
	// clrlwi r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	// stwbrx r10,0,r11
	PPC_MM_STORE_U32(ctx.r11.u32, __builtin_bswap32(ctx.r10.u32));
	// eieio 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA58C"))) PPC_WEAK_FUNC(sub_82FBA58C);
PPC_FUNC_IMPL(__imp__sub_82FBA58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBA590"))) PPC_WEAK_FUNC(sub_82FBA590);
PPC_FUNC_IMPL(__imp__sub_82FBA590) {
	PPC_FUNC_PROLOGUE();
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,32
	ctx.r11.s64 = 32;
	// lvx128 v62,r4,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r4,r11
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA5B4"))) PPC_WEAK_FUNC(sub_82FBA5B4);
PPC_FUNC_IMPL(__imp__sub_82FBA5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBA5B8"))) PPC_WEAK_FUNC(sub_82FBA5B8);
PPC_FUNC_IMPL(__imp__sub_82FBA5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,6148
	ctx.r9.u64 = ctx.r11.u64 | 6148;
	// stwx r10,0,r9
	PPC_MM_STORE_U32(ctx.r9.u32, ctx.r10.u32);
	// eieio 
	// lis r8,32746
	ctx.r8.s64 = 2146041856;
	// lis r7,768
	ctx.r7.s64 = 50331648;
	// ori r6,r8,6148
	ctx.r6.u64 = ctx.r8.u64 | 6148;
	// stwx r7,0,r6
	PPC_MM_STORE_U32(ctx.r6.u32, ctx.r7.u32);
	// eieio 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA5E4"))) PPC_WEAK_FUNC(sub_82FBA5E4);
PPC_FUNC_IMPL(__imp__sub_82FBA5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBA5E8"))) PPC_WEAK_FUNC(sub_82FBA5E8);
PPC_FUNC_IMPL(__imp__sub_82FBA5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82FBA5F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fba698
	if (!ctx.cr6.gt) goto loc_82FBA698;
	// lis r11,8186
	ctx.r11.s64 = 536477696;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// ori r27,r11,34464
	ctx.r27.u64 = ctx.r11.u64 | 34464;
	// lis r26,-31890
	ctx.r26.s64 = -2089943040;
loc_82FBA620:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r31,r30,64
	ctx.r31.s64 = ctx.r30.s64 + 64;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fba684
	if (!ctx.cr6.eq) goto loc_82FBA684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b7fe4
	ctx.lr = 0x82FBA640;
	__imp__XMACreateContext(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x82fba6a4
	if (ctx.cr6.lt) goto loc_82FBA6A4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x833b83d4
	ctx.lr = 0x82FBA654;
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,20212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20212);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r10,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r8,r9,27,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FF;
	// sth r9,80(r30)
	PPC_STORE_U16(ctx.r30.u32 + 80, ctx.r9.u16);
	// clrlwi r7,r9,27
	ctx.r7.u64 = ctx.r9.u32 & 0x1F;
	// add r6,r8,r27
	ctx.r6.u64 = ctx.r8.u64 + ctx.r27.u64;
	// slw r5,r25,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwbrx r5,0,r4
	PPC_MM_STORE_U32(ctx.r4.u32, __builtin_bswap32(ctx.r5.u32));
	// eieio 
loc_82FBA684:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,96
	ctx.r28.s64 = ctx.r28.s64 + 96;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fba620
	if (ctx.cr6.lt) goto loc_82FBA620;
loc_82FBA698:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// oris r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 262144;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82FBA6A4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBA6B0"))) PPC_WEAK_FUNC(sub_82FBA6B0);
PPC_FUNC_IMPL(__imp__sub_82FBA6B0) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r11,0,14,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fba6d4
	if (ctx.cr6.eq) goto loc_82FBA6D4;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82FBA6D4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fba730
	if (!ctx.cr6.gt) goto loc_82FBA730;
	// lis r8,8186
	ctx.r8.s64 = 536477696;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r7,r8,34448
	ctx.r7.u64 = ctx.r8.u64 | 34448;
loc_82FBA6F4:
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lhz r5,80(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 80);
	// rlwinm r4,r5,27,5,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r3,r5,27
	ctx.r3.u64 = ctx.r5.u32 & 0x1F;
	// add r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 + ctx.r7.u64;
	// slw r5,r6,r3
	ctx.r5.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r3.u8 & 0x3F));
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwbrx r5,0,r4
	PPC_MM_STORE_U32(ctx.r4.u32, __builtin_bswap32(ctx.r5.u32));
	// eieio 
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82fba6f4
	if (ctx.cr6.lt) goto loc_82FBA6F4;
loc_82FBA730:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// oris r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 65536;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA744"))) PPC_WEAK_FUNC(sub_82FBA744);
PPC_FUNC_IMPL(__imp__sub_82FBA744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBA748"))) PPC_WEAK_FUNC(sub_82FBA748);
PPC_FUNC_IMPL(__imp__sub_82FBA748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FBA750;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mftb r30
	ctx.r30.u64 = __rdtsc();
	// bl 0x82fba810
	ctx.lr = 0x82FBA760;
	sub_82FBA810(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82fba794
	if (!ctx.cr6.eq) goto loc_82FBA794;
loc_82FBA768:
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// subf r29,r30,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bl 0x833b8184
	ctx.lr = 0x82FBA774;
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// rldicl r10,r3,61,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// cmpld cr6,r29,r10
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x82fba7a0
	if (ctx.cr6.gt) goto loc_82FBA7A0;
	// db16cyc 
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fba810
	ctx.lr = 0x82FBA78C;
	sub_82FBA810(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fba768
	if (ctx.cr6.eq) goto loc_82FBA768;
loc_82FBA794:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82FBA7A0:
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,6148
	ctx.r10.u64 = ctx.r11.u64 | 6148;
	// stwx r30,0,r10
	PPC_MM_STORE_U32(ctx.r10.u32, ctx.r30.u32);
	// eieio 
	// lis r9,32746
	ctx.r9.s64 = 2146041856;
	// lis r8,768
	ctx.r8.s64 = 50331648;
	// ori r7,r9,6148
	ctx.r7.u64 = ctx.r9.u64 | 6148;
	// stwx r8,0,r7
	PPC_MM_STORE_U32(ctx.r7.u32, ctx.r8.u32);
	// eieio 
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fba810
	ctx.lr = 0x82FBA7D0;
	sub_82FBA810(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ble cr6,0x82fba7f8
	if (!ctx.cr6.gt) goto loc_82FBA7F8;
loc_82FBA7DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fba020
	ctx.lr = 0x82FBA7E8;
	sub_82FBA020(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fba7dc
	if (ctx.cr6.lt) goto loc_82FBA7DC;
loc_82FBA7F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// oris r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 524288;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBA810"))) PPC_WEAK_FUNC(sub_82FBA810);
PPC_FUNC_IMPL(__imp__sub_82FBA810) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fba940
	if (!ctx.cr6.eq) goto loc_82FBA940;
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r7,r11,6168
	ctx.r7.u64 = ctx.r11.u64 | 6168;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwbrx r6,0,r7
	ctx.r6.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// xori r7,r6,512
	ctx.r7.u64 = ctx.r6.u64 ^ 512;
	// beq cr6,0x82fba878
	if (ctx.cr6.eq) goto loc_82FBA878;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
loc_82FBA858:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82fba950
	if (ctx.cr6.eq) goto loc_82FBA950;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82fba858
	if (ctx.cr6.lt) goto loc_82FBA858;
loc_82FBA878:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82fba934
	if (ctx.cr6.eq) goto loc_82FBA934;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
loc_82FBA890:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lvx128 v63,r10,r3
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r6
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r10
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r30,r10,12,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r5,r10,12,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fba8e4
	if (!ctx.cr6.eq) goto loc_82FBA8E4;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r4,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r4.u32);
loc_82FBA8E4:
	// rlwinm r10,r5,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fba90c
	if (!ctx.cr6.eq) goto loc_82FBA90C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r4,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r4.u32);
loc_82FBA90C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82fba920
	if (!ctx.cr6.eq) goto loc_82FBA920;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_82FBA920:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r8,r8,96
	ctx.r8.s64 = ctx.r8.s64 + 96;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fba890
	if (ctx.cr6.lt) goto loc_82FBA890;
loc_82FBA934:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// oris r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 131072;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_82FBA940:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82FBA950:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBA960"))) PPC_WEAK_FUNC(sub_82FBA960);
PPC_FUNC_IMPL(__imp__sub_82FBA960) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82fba9ac
	if (ctx.cr6.eq) goto loc_82FBA9AC;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
loc_82FBA978:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,68(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// rlwinm r10,r10,18,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1F00;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fba9a0
	if (ctx.cr6.eq) goto loc_82FBA9A0;
loc_82FBA990:
	// dcbf r11,r9
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fba990
	if (ctx.cr6.lt) goto loc_82FBA990;
loc_82FBA9A0:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,96
	ctx.r7.s64 = ctx.r7.s64 + 96;
	// bne 0x82fba978
	if (!ctx.cr0.eq) goto loc_82FBA978;
loc_82FBA9AC:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fbaa0c
	if (ctx.cr6.eq) goto loc_82FBAA0C;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82fbaa0c
	if (ctx.cr6.eq) goto loc_82FBAA0C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
loc_82FBA9D4:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lvx128 v63,r11,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r11
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r5,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r5,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82fba9d4
	if (ctx.cr6.lt) goto loc_82FBA9D4;
loc_82FBAA0C:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fbaa68
	if (!ctx.cr6.gt) goto loc_82FBAA68;
	// lis r9,8186
	ctx.r9.s64 = 536477696;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r7,r9,34384
	ctx.r7.u64 = ctx.r9.u64 | 34384;
loc_82FBAA2C:
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r5,80(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 80);
	// rlwinm r4,r5,27,5,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r3,r5,27
	ctx.r3.u64 = ctx.r5.u32 & 0x1F;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// slw r5,r6,r3
	ctx.r5.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r3.u8 & 0x3F));
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwbrx r5,0,r4
	PPC_MM_STORE_U32(ctx.r4.u32, __builtin_bswap32(ctx.r5.u32));
	// eieio 
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82fbaa2c
	if (ctx.cr6.lt) goto loc_82FBAA2C;
loc_82FBAA68:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,16,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFCFFFF;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBAA7C"))) PPC_WEAK_FUNC(sub_82FBAA7C);
PPC_FUNC_IMPL(__imp__sub_82FBAA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBAA80"))) PPC_WEAK_FUNC(sub_82FBAA80);
PPC_FUNC_IMPL(__imp__sub_82FBAA80) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbab94
	if (ctx.cr6.eq) goto loc_82FBAB94;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fbab94
	if (ctx.cr6.eq) goto loc_82FBAB94;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fbaac4
	if (!ctx.cr6.eq) goto loc_82FBAAC4;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82fbab94
	if (ctx.cr6.gt) goto loc_82FBAB94;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stb r3,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r3.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,15112
	ctx.r11.s64 = ctx.r11.s64 + 15112;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82FBAAC4:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82fbaaf0
	if (!ctx.cr6.eq) goto loc_82FBAAF0;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82fbab94
	if (ctx.cr6.gt) goto loc_82FBAB94;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stb r3,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r3.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,15112
	ctx.r11.s64 = ctx.r11.s64 + 15112;
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82FBAAF0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82fbab60
	if (ctx.cr6.eq) goto loc_82FBAB60;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82fbab30
	if (ctx.cr6.eq) goto loc_82FBAB30;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82fbab94
	if (!ctx.cr6.eq) goto loc_82FBAB94;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82fbab94
	if (!ctx.cr6.eq) goto loc_82FBAB94;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,15112
	ctx.r11.s64 = ctx.r11.s64 + 15112;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r9,r11,144
	ctx.r9.s64 = ctx.r11.s64 + 144;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82FBAB30:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82fbab40
	if (ctx.cr6.eq) goto loc_82FBAB40;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82fbab94
	if (!ctx.cr6.eq) goto loc_82FBAB94;
loc_82FBAB40:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,15112
	ctx.r11.s64 = ctx.r11.s64 + 15112;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82FBAB60:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82fbab78
	if (ctx.cr6.eq) goto loc_82FBAB78;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82fbab78
	if (ctx.cr6.eq) goto loc_82FBAB78;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82fbab94
	if (!ctx.cr6.eq) goto loc_82FBAB94;
loc_82FBAB78:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,15112
	ctx.r9.s64 = ctx.r11.s64 + 15112;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82FBAB94:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBAB9C"))) PPC_WEAK_FUNC(sub_82FBAB9C);
PPC_FUNC_IMPL(__imp__sub_82FBAB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBABA0"))) PPC_WEAK_FUNC(sub_82FBABA0);
PPC_FUNC_IMPL(__imp__sub_82FBABA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBABA4"))) PPC_WEAK_FUNC(sub_82FBABA4);
PPC_FUNC_IMPL(__imp__sub_82FBABA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBABA8"))) PPC_WEAK_FUNC(sub_82FBABA8);
PPC_FUNC_IMPL(__imp__sub_82FBABA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBABAC"))) PPC_WEAK_FUNC(sub_82FBABAC);
PPC_FUNC_IMPL(__imp__sub_82FBABAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBABB0"))) PPC_WEAK_FUNC(sub_82FBABB0);
PPC_FUNC_IMPL(__imp__sub_82FBABB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBABB4"))) PPC_WEAK_FUNC(sub_82FBABB4);
PPC_FUNC_IMPL(__imp__sub_82FBABB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBABB8"))) PPC_WEAK_FUNC(sub_82FBABB8);
PPC_FUNC_IMPL(__imp__sub_82FBABB8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x833b8a64
	__imp__XAudioQueryDriverPerformance(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBABC0"))) PPC_WEAK_FUNC(sub_82FBABC0);
PPC_FUNC_IMPL(__imp__sub_82FBABC0) {
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
	// addi r10,r11,15288
	ctx.r10.s64 = ctx.r11.s64 + 15288;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x833b77d4
	ctx.lr = 0x82FBABE8;
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
}

__attribute__((alias("__imp__sub_82FBAC00"))) PPC_WEAK_FUNC(sub_82FBAC00);
PPC_FUNC_IMPL(__imp__sub_82FBAC00) {
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

__attribute__((alias("__imp__sub_82FBAC14"))) PPC_WEAK_FUNC(sub_82FBAC14);
PPC_FUNC_IMPL(__imp__sub_82FBAC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBAC18"))) PPC_WEAK_FUNC(sub_82FBAC18);
PPC_FUNC_IMPL(__imp__sub_82FBAC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,15288
	ctx.r10.s64 = ctx.r11.s64 + 15288;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBAC28"))) PPC_WEAK_FUNC(sub_82FBAC28);
PPC_FUNC_IMPL(__imp__sub_82FBAC28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x833b7fb4
	__imp__RtlTryEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBAC30"))) PPC_WEAK_FUNC(sub_82FBAC30);
PPC_FUNC_IMPL(__imp__sub_82FBAC30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x833b7fb4
	__imp__RtlTryEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBAC38"))) PPC_WEAK_FUNC(sub_82FBAC38);
PPC_FUNC_IMPL(__imp__sub_82FBAC38) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBAC50"))) PPC_WEAK_FUNC(sub_82FBAC50);
PPC_FUNC_IMPL(__imp__sub_82FBAC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FBAC58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBAC64;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbac84
	if (ctx.cr6.eq) goto loc_82FBAC84;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbacb4
	if (ctx.cr6.eq) goto loc_82FBACB4;
loc_82FBAC84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a74
	ctx.lr = 0x82FBAC8C;
	__imp__KeTryToAcquireSpinLockAtRaisedIrql(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbacac
	if (!ctx.cr6.eq) goto loc_82FBACAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBACA0;
	__imp__KfLowerIrql(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82FBACAC:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FBACB4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBACCC"))) PPC_WEAK_FUNC(sub_82FBACCC);
PPC_FUNC_IMPL(__imp__sub_82FBACCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBACD0"))) PPC_WEAK_FUNC(sub_82FBACD0);
PPC_FUNC_IMPL(__imp__sub_82FBACD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FBACD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82fbae30
	if (ctx.cr6.gt) goto loc_82FBAE30;
	// beq cr6,0x82fbae14
	if (ctx.cr6.eq) goto loc_82FBAE14;
	// addis r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -65536;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbadc0
	if (ctx.cr0.eq) goto loc_82FBADC0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82fbad68
	if (ctx.cr6.eq) goto loc_82FBAD68;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82fbae44
	if (!ctx.cr6.eq) goto loc_82FBAE44;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// addi r3,r11,20216
	ctx.r3.s64 = ctx.r11.s64 + 20216;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbad5c
	if (ctx.cr6.eq) goto loc_82FBAD5C;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fbad5c
	if (!ctx.cr6.eq) goto loc_82FBAD5C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x82fbad5c
	if (!ctx.cr0.eq) goto loc_82FBAD5C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FBAD54;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBAD5C;
	__imp__KfLowerIrql(ctx, base);
loc_82FBAD5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82FBAD68:
	// bl 0x833b8a44
	ctx.lr = 0x82FBAD6C;
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
	// beq cr6,0x82fbad94
	if (ctx.cr6.eq) goto loc_82FBAD94;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbae00
	if (ctx.cr6.eq) goto loc_82FBAE00;
loc_82FBAD94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a74
	ctx.lr = 0x82FBAD9C;
	__imp__KeTryToAcquireSpinLockAtRaisedIrql(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbadf4
	if (!ctx.cr6.eq) goto loc_82FBADF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBADB0;
	__imp__KfLowerIrql(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16388
	ctx.r3.u64 = ctx.r3.u64 | 16388;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82FBADC0:
	// bl 0x833b8a44
	ctx.lr = 0x82FBADC4;
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
	// beq cr6,0x82fbadec
	if (ctx.cr6.eq) goto loc_82FBADEC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbae00
	if (ctx.cr6.eq) goto loc_82FBAE00;
loc_82FBADEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBADF4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
loc_82FBADF4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FBAE00:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82FBAE14:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r11,r11,26480
	ctx.r11.s64 = ctx.r11.s64 + 26480;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x833b77e4
	ctx.lr = 0x82FBAE24;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82FBAE30:
	// addis r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -131072;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbae70
	if (ctx.cr0.eq) goto loc_82FBAE70;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82fbae54
	if (ctx.cr6.eq) goto loc_82FBAE54;
loc_82FBAE44:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82FBAE54:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r11,r11,26480
	ctx.r11.s64 = ctx.r11.s64 + 26480;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x833b77f4
	ctx.lr = 0x82FBAE64;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82FBAE70:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r11,r11,26480
	ctx.r11.s64 = ctx.r11.s64 + 26480;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x833b7fb4
	ctx.lr = 0x82FBAE80;
	__imp__RtlTryEnterCriticalSection(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82fbad5c
	if (!ctx.cr6.eq) goto loc_82FBAD5C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16388
	ctx.r3.u64 = ctx.r3.u64 | 16388;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBAE98"))) PPC_WEAK_FUNC(sub_82FBAE98);
PPC_FUNC_IMPL(__imp__sub_82FBAE98) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,15288
	ctx.r9.s64 = ctx.r11.s64 + 15288;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82fbaed8
	if (ctx.cr6.eq) goto loc_82FBAED8;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fbf870
	ctx.lr = 0x82FBAED8;
	sub_82FBF870(ctx, base);
loc_82FBAED8:
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

__attribute__((alias("__imp__sub_82FBAEF0"))) PPC_WEAK_FUNC(sub_82FBAEF0);
PPC_FUNC_IMPL(__imp__sub_82FBAEF0) {
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
	// clrlwi r30,r3,26
	ctx.r30.u64 = ctx.r3.u32 & 0x3F;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82FBAF1C:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82fbaf1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FBAF1C;
	// bl 0x833b7ac4
	ctx.lr = 0x82FBAF2C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82fbafd8
	if (!ctx.cr6.eq) goto loc_82FBAFD8;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbaf44
	if (!ctx.cr6.eq) goto loc_82FBAF44;
	// li r30,16
	ctx.r30.s64 = 16;
loc_82FBAF44:
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,2
	ctx.r7.s64 = 2;
loc_82FBAF54:
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fbaf80
	if (ctx.cr6.eq) goto loc_82FBAF80;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stb r4,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r4.u8);
	// stb r5,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
loc_82FBAF80:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82fbaf54
	if (ctx.cr6.lt) goto loc_82FBAF54;
	// rlwinm r11,r6,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbafa8
	if (ctx.cr6.eq) goto loc_82FBAFA8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// b 0x82fbafe8
	goto loc_82FBAFE8;
loc_82FBAFA8:
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
loc_82FBAFB0:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82fbafc8
	if (!ctx.cr6.eq) goto loc_82FBAFC8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82fbafb0
	if (!ctx.cr0.lt) goto loc_82FBAFB0;
	// b 0x82fbafe8
	goto loc_82FBAFE8;
loc_82FBAFC8:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// b 0x82fbafe8
	goto loc_82FBAFE8;
loc_82FBAFD8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
loc_82FBAFE8:
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

__attribute__((alias("__imp__sub_82FBB000"))) PPC_WEAK_FUNC(sub_82FBB000);
PPC_FUNC_IMPL(__imp__sub_82FBB000) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,268(r13)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,328(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82fbb02c
	if (!ctx.cr6.eq) goto loc_82FBB02C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBB02C:
	// lwz r9,324(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// rldicr r8,r11,56,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFF00000000000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// sradi r10,r8,8
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r8.s64 >> 8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82fbb048
	if (!ctx.cr6.eq) goto loc_82FBB048;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBB048:
	// rldicr r11,r11,56,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFF00000000000000;
	// lwz r9,320(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sradi r10,r8,8
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r8.s64 >> 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82fbb068
	if (!ctx.cr6.eq) goto loc_82FBB068;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBB068:
	// rldicr r11,r11,56,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFF00000000000000;
	// lwz r9,316(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sradi r10,r8,8
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r8.s64 >> 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82fbb088
	if (!ctx.cr6.eq) goto loc_82FBB088;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBB088:
	// rldicr r11,r11,56,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFF00000000000000;
	// lwz r9,312(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sradi r10,r8,8
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r8.s64 >> 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82fbb0a8
	if (!ctx.cr6.eq) goto loc_82FBB0A8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBB0A8:
	// rldicr r11,r11,56,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFF00000000000000;
	// lwz r9,308(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sradi r9,r8,8
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s64 >> 8;
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82fbb0c8
	if (!ctx.cr6.eq) goto loc_82FBB0C8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FBB0C8:
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// rldicr r10,r10,56,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFF00000000000000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82FBB0DC:
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// beq cr6,0x82fbb0f8
	if (ctx.cr6.eq) goto loc_82FBB0F8;
	// db16cyc 
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bne cr6,0x82fbb0dc
	if (!ctx.cr6.eq) goto loc_82FBB0DC;
	// blr 
	return;
loc_82FBB0F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB104"))) PPC_WEAK_FUNC(sub_82FBB104);
PPC_FUNC_IMPL(__imp__sub_82FBB104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB108"))) PPC_WEAK_FUNC(sub_82FBB108);
PPC_FUNC_IMPL(__imp__sub_82FBB108) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbb124
	if (ctx.cr6.eq) goto loc_82FBB124;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82FBB124:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,15104
	ctx.r10.s64 = ctx.r11.s64 + 15104;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB134"))) PPC_WEAK_FUNC(sub_82FBB134);
PPC_FUNC_IMPL(__imp__sub_82FBB134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB138"))) PPC_WEAK_FUNC(sub_82FBB138);
PPC_FUNC_IMPL(__imp__sub_82FBB138) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBB158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbb16c
	if (ctx.cr6.lt) goto loc_82FBB16C;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fc00b8
	ctx.lr = 0x82FBB16C;
	sub_82FC00B8(ctx, base);
loc_82FBB16C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB17C"))) PPC_WEAK_FUNC(sub_82FBB17C);
PPC_FUNC_IMPL(__imp__sub_82FBB17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB180"))) PPC_WEAK_FUNC(sub_82FBB180);
PPC_FUNC_IMPL(__imp__sub_82FBB180) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FBB194"))) PPC_WEAK_FUNC(sub_82FBB194);
PPC_FUNC_IMPL(__imp__sub_82FBB194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB198"))) PPC_WEAK_FUNC(sub_82FBB198);
PPC_FUNC_IMPL(__imp__sub_82FBB198) {
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
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r30,r11,26512
	ctx.r30.s64 = ctx.r11.s64 + 26512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b77e4
	ctx.lr = 0x82FBB1BC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,20240
	ctx.r31.s64 = ctx.r11.s64 + 20240;
	// lwz r11,20240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbb1e4
	if (ctx.cr6.eq) goto loc_82FBB1E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833b8424
	ctx.lr = 0x82FBB1DC;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FBB1E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b77f4
	ctx.lr = 0x82FBB1EC;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82FBB204"))) PPC_WEAK_FUNC(sub_82FBB204);
PPC_FUNC_IMPL(__imp__sub_82FBB204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB208"))) PPC_WEAK_FUNC(sub_82FBB208);
PPC_FUNC_IMPL(__imp__sub_82FBB208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB214"))) PPC_WEAK_FUNC(sub_82FBB214);
PPC_FUNC_IMPL(__imp__sub_82FBB214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB218"))) PPC_WEAK_FUNC(sub_82FBB218);
PPC_FUNC_IMPL(__imp__sub_82FBB218) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r3,r11,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB224"))) PPC_WEAK_FUNC(sub_82FBB224);
PPC_FUNC_IMPL(__imp__sub_82FBB224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB228"))) PPC_WEAK_FUNC(sub_82FBB228);
PPC_FUNC_IMPL(__imp__sub_82FBB228) {
	PPC_FUNC_PROLOGUE();
	// b 0x82fb8e98
	sub_82FB8E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBB22C"))) PPC_WEAK_FUNC(sub_82FBB22C);
PPC_FUNC_IMPL(__imp__sub_82FBB22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB230"))) PPC_WEAK_FUNC(sub_82FBB230);
PPC_FUNC_IMPL(__imp__sub_82FBB230) {
	PPC_FUNC_PROLOGUE();
	// b 0x82fbd6f0
	sub_82FBD6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBB234"))) PPC_WEAK_FUNC(sub_82FBB234);
PPC_FUNC_IMPL(__imp__sub_82FBB234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB238"))) PPC_WEAK_FUNC(sub_82FBB238);
PPC_FUNC_IMPL(__imp__sub_82FBB238) {
	PPC_FUNC_PROLOGUE();
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB254"))) PPC_WEAK_FUNC(sub_82FBB254);
PPC_FUNC_IMPL(__imp__sub_82FBB254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB258"))) PPC_WEAK_FUNC(sub_82FBB258);
PPC_FUNC_IMPL(__imp__sub_82FBB258) {
	PPC_FUNC_PROLOGUE();
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB274"))) PPC_WEAK_FUNC(sub_82FBB274);
PPC_FUNC_IMPL(__imp__sub_82FBB274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB278"))) PPC_WEAK_FUNC(sub_82FBB278);
PPC_FUNC_IMPL(__imp__sub_82FBB278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB2A4"))) PPC_WEAK_FUNC(sub_82FBB2A4);
PPC_FUNC_IMPL(__imp__sub_82FBB2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB2A8"))) PPC_WEAK_FUNC(sub_82FBB2A8);
PPC_FUNC_IMPL(__imp__sub_82FBB2A8) {
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

__attribute__((alias("__imp__sub_82FBB2BC"))) PPC_WEAK_FUNC(sub_82FBB2BC);
PPC_FUNC_IMPL(__imp__sub_82FBB2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB2C0"))) PPC_WEAK_FUNC(sub_82FBB2C0);
PPC_FUNC_IMPL(__imp__sub_82FBB2C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB2C8"))) PPC_WEAK_FUNC(sub_82FBB2C8);
PPC_FUNC_IMPL(__imp__sub_82FBB2C8) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,15292
	ctx.r9.s64 = ctx.r11.s64 + 15292;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82fbb310
	if (ctx.cr6.eq) goto loc_82FBB310;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBB310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBB310:
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

__attribute__((alias("__imp__sub_82FBB328"))) PPC_WEAK_FUNC(sub_82FBB328);
PPC_FUNC_IMPL(__imp__sub_82FBB328) {
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
	// addi r10,r11,15292
	ctx.r10.s64 = ctx.r11.s64 + 15292;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbb36c
	if (ctx.cr6.eq) goto loc_82FBB36C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBB364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82FBB36C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,14660
	ctx.r10.s64 = ctx.r11.s64 + 14660;
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

__attribute__((alias("__imp__sub_82FBB38C"))) PPC_WEAK_FUNC(sub_82FBB38C);
PPC_FUNC_IMPL(__imp__sub_82FBB38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB390"))) PPC_WEAK_FUNC(sub_82FBB390);
PPC_FUNC_IMPL(__imp__sub_82FBB390) {
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
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fbb3c8
	if (ctx.cr6.eq) goto loc_82FBB3C8;
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBB3C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBB3C8:
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
	ctx.lr = 0x82FBB3E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fbb3fc
	if (ctx.cr6.eq) goto loc_82FBB3FC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBB3FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBB3FC:
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

__attribute__((alias("__imp__sub_82FBB414"))) PPC_WEAK_FUNC(sub_82FBB414);
PPC_FUNC_IMPL(__imp__sub_82FBB414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB418"))) PPC_WEAK_FUNC(sub_82FBB418);
PPC_FUNC_IMPL(__imp__sub_82FBB418) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82fbb42c
	if (ctx.cr6.eq) goto loc_82FBB42C;
	// lis r11,-32003
	ctx.r11.s64 = -2097348608;
	// addi r4,r11,-21136
	ctx.r4.s64 = ctx.r11.s64 + -21136;
	// b 0x82fbb430
	goto loc_82FBB430;
loc_82FBB42C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82FBB430:
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FBB444"))) PPC_WEAK_FUNC(sub_82FBB444);
PPC_FUNC_IMPL(__imp__sub_82FBB444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB448"))) PPC_WEAK_FUNC(sub_82FBB448);
PPC_FUNC_IMPL(__imp__sub_82FBB448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB454"))) PPC_WEAK_FUNC(sub_82FBB454);
PPC_FUNC_IMPL(__imp__sub_82FBB454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB458"))) PPC_WEAK_FUNC(sub_82FBB458);
PPC_FUNC_IMPL(__imp__sub_82FBB458) {
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

__attribute__((alias("__imp__sub_82FBB474"))) PPC_WEAK_FUNC(sub_82FBB474);
PPC_FUNC_IMPL(__imp__sub_82FBB474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB478"))) PPC_WEAK_FUNC(sub_82FBB478);
PPC_FUNC_IMPL(__imp__sub_82FBB478) {
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

__attribute__((alias("__imp__sub_82FBB494"))) PPC_WEAK_FUNC(sub_82FBB494);
PPC_FUNC_IMPL(__imp__sub_82FBB494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB498"))) PPC_WEAK_FUNC(sub_82FBB498);
PPC_FUNC_IMPL(__imp__sub_82FBB498) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB49C"))) PPC_WEAK_FUNC(sub_82FBB49C);
PPC_FUNC_IMPL(__imp__sub_82FBB49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB4A0"))) PPC_WEAK_FUNC(sub_82FBB4A0);
PPC_FUNC_IMPL(__imp__sub_82FBB4A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB4A4"))) PPC_WEAK_FUNC(sub_82FBB4A4);
PPC_FUNC_IMPL(__imp__sub_82FBB4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB4A8"))) PPC_WEAK_FUNC(sub_82FBB4A8);
PPC_FUNC_IMPL(__imp__sub_82FBB4A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82fbb4b8
	if (ctx.cr6.gt) goto loc_82FBB4B8;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82FBB4B8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB4C0"))) PPC_WEAK_FUNC(sub_82FBB4C0);
PPC_FUNC_IMPL(__imp__sub_82FBB4C0) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,144
	ctx.r11.s64 = ctx.r3.s64 + 144;
loc_82FBB4C8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82fbb4ec
	if (ctx.cr6.eq) goto loc_82FBB4EC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x82fbb4c8
	if (ctx.cr6.lt) goto loc_82FBB4C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FBB4EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB4F4"))) PPC_WEAK_FUNC(sub_82FBB4F4);
PPC_FUNC_IMPL(__imp__sub_82FBB4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB4F8"))) PPC_WEAK_FUNC(sub_82FBB4F8);
PPC_FUNC_IMPL(__imp__sub_82FBB4F8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,168
	ctx.r11.s64 = ctx.r3.s64 + 168;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbb514
	if (ctx.cr6.lt) goto loc_82FBB514;
	// addi r11,r3,296
	ctx.r11.s64 = ctx.r3.s64 + 296;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82FBB514:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB51C"))) PPC_WEAK_FUNC(sub_82FBB51C);
PPC_FUNC_IMPL(__imp__sub_82FBB51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB520"))) PPC_WEAK_FUNC(sub_82FBB520);
PPC_FUNC_IMPL(__imp__sub_82FBB520) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB528"))) PPC_WEAK_FUNC(sub_82FBB528);
PPC_FUNC_IMPL(__imp__sub_82FBB528) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,256(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbb554
	if (ctx.cr6.eq) goto loc_82FBB554;
	// lbz r10,268(r13)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// addi r10,r10,83
	ctx.r10.s64 = ctx.r10.s64 + 83;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82FBB554:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB55C"))) PPC_WEAK_FUNC(sub_82FBB55C);
PPC_FUNC_IMPL(__imp__sub_82FBB55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB560"))) PPC_WEAK_FUNC(sub_82FBB560);
PPC_FUNC_IMPL(__imp__sub_82FBB560) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB570"))) PPC_WEAK_FUNC(sub_82FBB570);
PPC_FUNC_IMPL(__imp__sub_82FBB570) {
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

__attribute__((alias("__imp__sub_82FBB5A4"))) PPC_WEAK_FUNC(sub_82FBB5A4);
PPC_FUNC_IMPL(__imp__sub_82FBB5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB5A8"))) PPC_WEAK_FUNC(sub_82FBB5A8);
PPC_FUNC_IMPL(__imp__sub_82FBB5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82FBB5B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBB5CC;
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
	// beq cr6,0x82fbb5f4
	if (ctx.cr6.eq) goto loc_82FBB5F4;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82fbb610
	if (ctx.cr6.eq) goto loc_82FBB610;
loc_82FBB5F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBB5FC;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// b 0x82fbb614
	goto loc_82FBB614;
loc_82FBB610:
	// lbz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82FBB614:
	// rlwinm r10,r30,6,18,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0x3FC0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// addi r10,r10,168
	ctx.r10.s64 = ctx.r10.s64 + 168;
loc_82FBB630:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82fbb650
	if (ctx.cr6.eq) goto loc_82FBB650;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82fbb630
	if (ctx.cr6.lt) goto loc_82FBB630;
	// b 0x82fbb668
	goto loc_82FBB668;
loc_82FBB650:
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fbb6b8
	if (!ctx.cr0.eq) goto loc_82FBB6B8;
loc_82FBB668:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fbb6a8
	if (ctx.cr6.eq) goto loc_82FBB6A8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82fbb6a8
	if (!ctx.cr6.eq) goto loc_82FBB6A8;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbb6a8
	if (!ctx.cr0.eq) goto loc_82FBB6A8;
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
	ctx.lr = 0x82FBB6A0;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBB6A8;
	__imp__KfLowerIrql(ctx, base);
loc_82FBB6A8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82FBB6B8:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// beq cr6,0x82fbb6cc
	if (ctx.cr6.eq) goto loc_82FBB6CC;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82FBB6CC:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fbb718
	if (ctx.cr6.eq) goto loc_82FBB718;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fbb718
	if (!ctx.cr6.eq) goto loc_82FBB718;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbb718
	if (!ctx.cr0.eq) goto loc_82FBB718;
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
	ctx.lr = 0x82FBB710;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBB718;
	__imp__KfLowerIrql(ctx, base);
loc_82FBB718:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBB724"))) PPC_WEAK_FUNC(sub_82FBB724);
PPC_FUNC_IMPL(__imp__sub_82FBB724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB728"))) PPC_WEAK_FUNC(sub_82FBB728);
PPC_FUNC_IMPL(__imp__sub_82FBB728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FBB730;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBB740;
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
	// beq cr6,0x82fbb768
	if (ctx.cr6.eq) goto loc_82FBB768;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbb77c
	if (ctx.cr6.eq) goto loc_82FBB77C;
loc_82FBB768:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBB770;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FBB77C:
	// rlwinm r10,r29,6,18,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0x3FC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r27,8
	ctx.r27.s64 = 8;
	// addi r28,r10,168
	ctx.r28.s64 = ctx.r10.s64 + 168;
loc_82FBB794:
	// stw r28,296(r26)
	PPC_STORE_U32(ctx.r26.u32 + 296, ctx.r28.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbb840
	if (ctx.cr6.eq) goto loc_82FBB840;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fbb7f0
	if (ctx.cr6.eq) goto loc_82FBB7F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fbb7f0
	if (!ctx.cr6.eq) goto loc_82FBB7F0;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbb7f0
	if (!ctx.cr0.eq) goto loc_82FBB7F0;
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
	ctx.lr = 0x82FBB7E8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBB7F0;
	__imp__KfLowerIrql(ctx, base);
loc_82FBB7F0:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBB800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FBB804;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbb824
	if (ctx.cr6.eq) goto loc_82FBB824;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbb838
	if (ctx.cr6.eq) goto loc_82FBB838;
loc_82FBB824:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBB82C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FBB838:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82FBB840:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bne 0x82fbb794
	if (!ctx.cr0.eq) goto loc_82FBB794;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,296(r26)
	PPC_STORE_U32(ctx.r26.u32 + 296, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbb8a0
	if (ctx.cr6.eq) goto loc_82FBB8A0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fbb8a0
	if (!ctx.cr6.eq) goto loc_82FBB8A0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbb8a0
	if (!ctx.cr0.eq) goto loc_82FBB8A0;
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
	ctx.lr = 0x82FBB898;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBB8A0;
	__imp__KfLowerIrql(ctx, base);
loc_82FBB8A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBB8A8"))) PPC_WEAK_FUNC(sub_82FBB8A8);
PPC_FUNC_IMPL(__imp__sub_82FBB8A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82fbb8d8
	if (ctx.cr6.gt) goto loc_82FBB8D8;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82FBB8D8:
	// lis r10,0
	ctx.r10.s64 = 0;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// ori r8,r10,48000
	ctx.r8.u64 = ctx.r10.u64 | 48000;
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB8EC"))) PPC_WEAK_FUNC(sub_82FBB8EC);
PPC_FUNC_IMPL(__imp__sub_82FBB8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB8F0"))) PPC_WEAK_FUNC(sub_82FBB8F0);
PPC_FUNC_IMPL(__imp__sub_82FBB8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FBB8F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,256(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbb968
	if (ctx.cr6.eq) goto loc_82FBB968;
	// lbz r10,268(r13)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// addi r10,r10,83
	ctx.r10.s64 = ctx.r10.s64 + 83;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fbb968
	if (ctx.cr6.eq) goto loc_82FBB968;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r31,r10,20216
	ctx.r31.s64 = ctx.r10.s64 + 20216;
	// addi r27,r3,144
	ctx.r27.s64 = ctx.r3.s64 + 144;
	// addi r28,r11,26480
	ctx.r28.s64 = ctx.r11.s64 + 26480;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FBB944:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82FBB94C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r26,r7
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82fbb970
	if (ctx.cr6.eq) goto loc_82FBB970;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x82fbb94c
	if (ctx.cr6.lt) goto loc_82FBB94C;
loc_82FBB968:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82FBB970:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82fbb9b4
	if (ctx.cr6.eq) goto loc_82FBB9B4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fbb9b4
	if (!ctx.cr6.eq) goto loc_82FBB9B4;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbb9b4
	if (!ctx.cr0.eq) goto loc_82FBB9B4;
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
	ctx.lr = 0x82FBB9AC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBB9B4;
	__imp__KfLowerIrql(ctx, base);
loc_82FBB9B4:
	// lwz r30,24(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fbb9e4
	if (ctx.cr6.eq) goto loc_82FBB9E4;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82FBB9C4:
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x833b77f4
	ctx.lr = 0x82FBB9CC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82fbb9c4
	if (!ctx.cr0.eq) goto loc_82FBB9C4;
loc_82FBB9D4:
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x833b77e4
	ctx.lr = 0x82FBB9DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82fbb9d4
	if (!ctx.cr0.eq) goto loc_82FBB9D4;
loc_82FBB9E4:
	// bl 0x833b8a44
	ctx.lr = 0x82FBB9E8;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbba08
	if (ctx.cr6.eq) goto loc_82FBBA08;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82fbba20
	if (ctx.cr6.eq) goto loc_82FBBA20;
loc_82FBBA08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBBA10;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82FBBA20:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// b 0x82fbb944
	goto loc_82FBB944;
}

__attribute__((alias("__imp__sub_82FBBA2C"))) PPC_WEAK_FUNC(sub_82FBBA2C);
PPC_FUNC_IMPL(__imp__sub_82FBBA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBBA30"))) PPC_WEAK_FUNC(sub_82FBBA30);
PPC_FUNC_IMPL(__imp__sub_82FBBA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FBBA38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,256(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r10,300(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 300);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbbb54
	if (ctx.cr6.eq) goto loc_82FBBB54;
	// lbz r10,268(r13)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// addi r10,r10,83
	ctx.r10.s64 = ctx.r10.s64 + 83;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fbbb54
	if (ctx.cr6.eq) goto loc_82FBBB54;
	// lwz r11,296(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 296);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fbbb54
	if (!ctx.cr6.eq) goto loc_82FBBB54;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r31,r10,20216
	ctx.r31.s64 = ctx.r10.s64 + 20216;
	// addi r28,r11,26480
	ctx.r28.s64 = ctx.r11.s64 + 26480;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FBBA90:
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbbad4
	if (ctx.cr6.eq) goto loc_82FBBAD4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fbbad4
	if (!ctx.cr6.eq) goto loc_82FBBAD4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbbad4
	if (!ctx.cr0.eq) goto loc_82FBBAD4;
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
	ctx.lr = 0x82FBBACC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBBAD4;
	__imp__KfLowerIrql(ctx, base);
loc_82FBBAD4:
	// lwz r30,24(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fbbb04
	if (ctx.cr6.eq) goto loc_82FBBB04;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82FBBAE4:
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x833b77f4
	ctx.lr = 0x82FBBAEC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82fbbae4
	if (!ctx.cr0.eq) goto loc_82FBBAE4;
loc_82FBBAF4:
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x833b77e4
	ctx.lr = 0x82FBBAFC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82fbbaf4
	if (!ctx.cr0.eq) goto loc_82FBBAF4;
loc_82FBBB04:
	// bl 0x833b8a44
	ctx.lr = 0x82FBBB08;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbbb28
	if (ctx.cr6.eq) goto loc_82FBBB28;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbbb40
	if (ctx.cr6.eq) goto loc_82FBBB40;
loc_82FBBB28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBBB30;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82FBBB40:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,296(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 296);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82fbba90
	if (ctx.cr6.eq) goto loc_82FBBA90;
loc_82FBBB54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBBB5C"))) PPC_WEAK_FUNC(sub_82FBBB5C);
PPC_FUNC_IMPL(__imp__sub_82FBBB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBBB60"))) PPC_WEAK_FUNC(sub_82FBBB60);
PPC_FUNC_IMPL(__imp__sub_82FBBB60) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r10,r11,20240
	ctx.r10.s64 = ctx.r11.s64 + 20240;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82fbbb94
	if (!ctx.cr6.eq) goto loc_82FBBB94;
	// bl 0x82fbb198
	ctx.lr = 0x82FBBB80;
	sub_82FBB198(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,20256
	ctx.r3.s64 = ctx.r11.s64 + 20256;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833b8574
	ctx.lr = 0x82FBBB94;
	__imp__KeSetEvent(ctx, base);
loc_82FBBB94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBBBA4"))) PPC_WEAK_FUNC(sub_82FBBBA4);
PPC_FUNC_IMPL(__imp__sub_82FBBBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBBBA8"))) PPC_WEAK_FUNC(sub_82FBBBA8);
PPC_FUNC_IMPL(__imp__sub_82FBBBA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// beq cr6,0x82fbbbbc
	if (ctx.cr6.eq) goto loc_82FBBBBC;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82FBBBBC:
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

__attribute__((alias("__imp__sub_82FBBBD8"))) PPC_WEAK_FUNC(sub_82FBBBD8);
PPC_FUNC_IMPL(__imp__sub_82FBBBD8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fbbbec
	if (ctx.cr6.eq) goto loc_82FBBBEC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// b 0x82fbbbf0
	goto loc_82FBBBF0;
loc_82FBBBEC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82FBBBF0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82fbbc00
	if (ctx.cr6.eq) goto loc_82FBBC00;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82fbbc04
	goto loc_82FBBC04;
loc_82FBBC00:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82FBBC04:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbbc18
	if (ctx.cr6.eq) goto loc_82FBBC18;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
loc_82FBBC18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBBC20"))) PPC_WEAK_FUNC(sub_82FBBC20);
PPC_FUNC_IMPL(__imp__sub_82FBBC20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fbbc34
	if (ctx.cr6.eq) goto loc_82FBBC34;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// b 0x82fbbc38
	goto loc_82FBBC38;
loc_82FBBC34:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82FBBC38:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82fbbc48
	if (ctx.cr6.eq) goto loc_82FBBC48;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82fbbc4c
	goto loc_82FBBC4C;
loc_82FBBC48:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82FBBC4C:
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbbc94
	if (ctx.cr6.eq) goto loc_82FBBC94;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbbc90
	if (ctx.cr6.eq) goto loc_82FBBC90;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbbc90
	if (ctx.cr6.eq) goto loc_82FBBC90;
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
loc_82FBBC90:
	// blr 
	return;
loc_82FBBC94:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBBC9C"))) PPC_WEAK_FUNC(sub_82FBBC9C);
PPC_FUNC_IMPL(__imp__sub_82FBBC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBBCA0"))) PPC_WEAK_FUNC(sub_82FBBCA0);
PPC_FUNC_IMPL(__imp__sub_82FBBCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FBBCA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBBCB4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbbcdc
	if (ctx.cr6.eq) goto loc_82FBBCDC;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82fbbcf8
	if (ctx.cr6.eq) goto loc_82FBBCF8;
loc_82FBBCDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBBCE4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
	// b 0x82fbbcfc
	goto loc_82FBBCFC;
loc_82FBBCF8:
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82FBBCFC:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82fbbbd8
	ctx.lr = 0x82FBBD14;
	sub_82FBBBD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fbbddc
	if (ctx.cr6.eq) goto loc_82FBBDDC;
loc_82FBBD20:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82fbbd60
	if (ctx.cr6.eq) goto loc_82FBBD60;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82fbbd60
	if (!ctx.cr6.eq) goto loc_82FBBD60;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbbd60
	if (!ctx.cr0.eq) goto loc_82FBBD60;
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
	ctx.lr = 0x82FBBD58;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBBD60;
	__imp__KfLowerIrql(ctx, base);
loc_82FBBD60:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBBD74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FBBD78;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbbd98
	if (ctx.cr6.eq) goto loc_82FBBD98;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82fbbdb4
	if (ctx.cr6.eq) goto loc_82FBBDB4;
loc_82FBBD98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBBDA0;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
	// b 0x82fbbdb8
	goto loc_82FBBDB8;
loc_82FBBDB4:
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82FBBDB8:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82fbbbd8
	ctx.lr = 0x82FBBDD0;
	sub_82FBBBD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82fbbd20
	if (!ctx.cr6.eq) goto loc_82FBBD20;
loc_82FBBDDC:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82fbbe1c
	if (ctx.cr6.eq) goto loc_82FBBE1C;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82fbbe1c
	if (!ctx.cr6.eq) goto loc_82FBBE1C;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbbe1c
	if (!ctx.cr0.eq) goto loc_82FBBE1C;
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
	ctx.lr = 0x82FBBE14;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBBE1C;
	__imp__KfLowerIrql(ctx, base);
loc_82FBBE1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBBE24"))) PPC_WEAK_FUNC(sub_82FBBE24);
PPC_FUNC_IMPL(__imp__sub_82FBBE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBBE28"))) PPC_WEAK_FUNC(sub_82FBBE28);
PPC_FUNC_IMPL(__imp__sub_82FBBE28) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,15292
	ctx.r10.s64 = ctx.r11.s64 + 15292;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbbe74
	if (ctx.cr6.eq) goto loc_82FBBE74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBBE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82FBBE74:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,14660
	ctx.r9.s64 = ctx.r11.s64 + 14660;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82fbbea0
	if (ctx.cr6.eq) goto loc_82FBBEA0;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fbf870
	ctx.lr = 0x82FBBEA0;
	sub_82FBF870(ctx, base);
loc_82FBBEA0:
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

__attribute__((alias("__imp__sub_82FBBEBC"))) PPC_WEAK_FUNC(sub_82FBBEBC);
PPC_FUNC_IMPL(__imp__sub_82FBBEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBBEC0"))) PPC_WEAK_FUNC(sub_82FBBEC0);
PPC_FUNC_IMPL(__imp__sub_82FBBEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FBBEC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBBED4;
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
	// beq cr6,0x82fbbefc
	if (ctx.cr6.eq) goto loc_82FBBEFC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbbf10
	if (ctx.cr6.eq) goto loc_82FBBF10;
loc_82FBBEFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBBF04;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FBBF10:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stw r9,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbbf74
	if (ctx.cr6.eq) goto loc_82FBBF74;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fbbf74
	if (!ctx.cr6.eq) goto loc_82FBBF74;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbbf74
	if (!ctx.cr0.eq) goto loc_82FBBF74;
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
	ctx.lr = 0x82FBBF6C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBBF74;
	__imp__KfLowerIrql(ctx, base);
loc_82FBBF74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBBF7C"))) PPC_WEAK_FUNC(sub_82FBBF7C);
PPC_FUNC_IMPL(__imp__sub_82FBBF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBBF80"))) PPC_WEAK_FUNC(sub_82FBBF80);
PPC_FUNC_IMPL(__imp__sub_82FBBF80) {
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

__attribute__((alias("__imp__sub_82FBBFA4"))) PPC_WEAK_FUNC(sub_82FBBFA4);
PPC_FUNC_IMPL(__imp__sub_82FBBFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBBFA8"))) PPC_WEAK_FUNC(sub_82FBBFA8);
PPC_FUNC_IMPL(__imp__sub_82FBBFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FBBFB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbbfd0
	if (ctx.cr6.eq) goto loc_82FBBFD0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82fbbfdc
	goto loc_82FBBFDC;
loc_82FBBFD0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,15104
	ctx.r10.s64 = ctx.r11.s64 + 15104;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82FBBFDC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fbe060
	ctx.lr = 0x82FBBFE8;
	sub_82FBE060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbc088
	if (ctx.cr6.lt) goto loc_82FBC088;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// bgt cr6,0x82fbc01c
	if (ctx.cr6.gt) goto loc_82FBC01C;
	// li r10,6
	ctx.r10.s64 = 6;
loc_82FBC01C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stb r10,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r10.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// ori r9,r11,48000
	ctx.r9.u64 = ctx.r11.u64 | 48000;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x82fb9568
	ctx.lr = 0x82FBC038;
	sub_82FB9568(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fbc084
	if (ctx.cr6.lt) goto loc_82FBC084;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// bl 0x82fbaef0
	ctx.lr = 0x82FBC050;
	sub_82FBAEF0(ctx, base);
	// lbz r8,97(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// beq cr6,0x82fbc080
	if (ctx.cr6.eq) goto loc_82FBC080;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82FBC080:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82FBC084:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82FBC088:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBC090"))) PPC_WEAK_FUNC(sub_82FBC090);
PPC_FUNC_IMPL(__imp__sub_82FBC090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FBC098;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r27,168
	ctx.r11.s64 = ctx.r27.s64 + 168;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbc0bc
	if (ctx.cr6.lt) goto loc_82FBC0BC;
	// addi r11,r27,296
	ctx.r11.s64 = ctx.r27.s64 + 296;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbc0c0
	if (ctx.cr6.lt) goto loc_82FBC0C0;
loc_82FBC0BC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82FBC0C0:
	// bl 0x833b8a44
	ctx.lr = 0x82FBC0C4;
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
	// beq cr6,0x82fbc0ec
	if (ctx.cr6.eq) goto loc_82FBC0EC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbc100
	if (ctx.cr6.eq) goto loc_82FBC100;
loc_82FBC0EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBC0F4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FBC100:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fbba30
	ctx.lr = 0x82FBC114;
	sub_82FBBA30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbc168
	if (ctx.cr6.eq) goto loc_82FBC168;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fbc168
	if (!ctx.cr6.eq) goto loc_82FBC168;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbc168
	if (!ctx.cr0.eq) goto loc_82FBC168;
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
	ctx.lr = 0x82FBC160;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBC168;
	__imp__KfLowerIrql(ctx, base);
loc_82FBC168:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBC174"))) PPC_WEAK_FUNC(sub_82FBC174);
PPC_FUNC_IMPL(__imp__sub_82FBC174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC178"))) PPC_WEAK_FUNC(sub_82FBC178);
PPC_FUNC_IMPL(__imp__sub_82FBC178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FBC180;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lbz r26,268(r13)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
loc_82FBC198:
	// bl 0x833b8a44
	ctx.lr = 0x82FBC19C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbc1bc
	if (ctx.cr6.eq) goto loc_82FBC1BC;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fbc1d8
	if (ctx.cr6.eq) goto loc_82FBC1D8;
loc_82FBC1BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBC1C4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// b 0x82fbc1dc
	goto loc_82FBC1DC;
loc_82FBC1D8:
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82FBC1DC:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbc2d4
	if (ctx.cr6.eq) goto loc_82FBC2D4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf. r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82fbc2d4
	if (ctx.cr0.eq) goto loc_82FBC2D4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbc22c
	if (ctx.cr6.eq) goto loc_82FBC22C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_82FBC22C:
	// lwz r9,40(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r8,r26,36
	ctx.r8.s64 = ctx.r26.s64 + 36;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stwx r30,r7,r27
	PPC_STORE_U32(ctx.r7.u32 + ctx.r27.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbc2a8
	if (ctx.cr6.eq) goto loc_82FBC2A8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fbc2a8
	if (!ctx.cr6.eq) goto loc_82FBC2A8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbc2a8
	if (!ctx.cr0.eq) goto loc_82FBC2A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FBC2A0;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBC2A8;
	__imp__KfLowerIrql(ctx, base);
loc_82FBC2A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBC2BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbc198
	if (ctx.cr6.lt) goto loc_82FBC198;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fc00b8
	ctx.lr = 0x82FBC2D0;
	sub_82FC00B8(ctx, base);
	// b 0x82fbc198
	goto loc_82FBC198;
loc_82FBC2D4:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fbc314
	if (ctx.cr6.eq) goto loc_82FBC314;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fbc314
	if (!ctx.cr6.eq) goto loc_82FBC314;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbc314
	if (!ctx.cr0.eq) goto loc_82FBC314;
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
	ctx.lr = 0x82FBC30C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBC314;
	__imp__KfLowerIrql(ctx, base);
loc_82FBC314:
	// addi r11,r26,36
	ctx.r11.s64 = ctx.r26.s64 + 36;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r27
	PPC_STORE_U32(ctx.r9.u32 + ctx.r27.u32, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBC32C"))) PPC_WEAK_FUNC(sub_82FBC32C);
PPC_FUNC_IMPL(__imp__sub_82FBC32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC330"))) PPC_WEAK_FUNC(sub_82FBC330);
PPC_FUNC_IMPL(__imp__sub_82FBC330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FBC338;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x833b8a44
	ctx.lr = 0x82FBC348;
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
	// beq cr6,0x82fbc370
	if (ctx.cr6.eq) goto loc_82FBC370;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbc384
	if (ctx.cr6.eq) goto loc_82FBC384;
loc_82FBC370:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBC378;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FBC384:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r28,68
	ctx.r30.s64 = ctx.r28.s64 + 68;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82FBC390:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbc3bc
	if (ctx.cr6.eq) goto loc_82FBC3BC;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fbc3bc
	if (ctx.cr0.eq) goto loc_82FBC3BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fbf698
	ctx.lr = 0x82FBC3B0;
	sub_82FBF698(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x82fbc390
	if (!ctx.cr6.lt) goto loc_82FBC390;
loc_82FBC3BC:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fbc408
	if (ctx.cr6.eq) goto loc_82FBC408;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fbc408
	if (!ctx.cr6.eq) goto loc_82FBC408;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbc408
	if (!ctx.cr0.eq) goto loc_82FBC408;
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
	ctx.lr = 0x82FBC400;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBC408;
	__imp__KfLowerIrql(ctx, base);
loc_82FBC408:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBC414"))) PPC_WEAK_FUNC(sub_82FBC414);
PPC_FUNC_IMPL(__imp__sub_82FBC414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC418"))) PPC_WEAK_FUNC(sub_82FBC418);
PPC_FUNC_IMPL(__imp__sub_82FBC418) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fbbbd8
	ctx.lr = 0x82FBC438;
	sub_82FBBBD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbc488
	if (ctx.cr6.eq) goto loc_82FBC488;
loc_82FBC440:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbc470
	if (ctx.cr6.eq) goto loc_82FBC470;
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
loc_82FBC470:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbbbd8
	ctx.lr = 0x82FBC480;
	sub_82FBBBD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fbc440
	if (!ctx.cr6.eq) goto loc_82FBC440;
loc_82FBC488:
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

__attribute__((alias("__imp__sub_82FBC49C"))) PPC_WEAK_FUNC(sub_82FBC49C);
PPC_FUNC_IMPL(__imp__sub_82FBC49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC4A0"))) PPC_WEAK_FUNC(sub_82FBC4A0);
PPC_FUNC_IMPL(__imp__sub_82FBC4A0) {
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
	// bl 0x82fbbfa8
	ctx.lr = 0x82FBC4B8;
	sub_82FBBFA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbc4cc
	if (ctx.cr6.lt) goto loc_82FBC4CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,372
	ctx.r11.s64 = ctx.r11.s64 + 372;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FBC4CC:
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

__attribute__((alias("__imp__sub_82FBC4E0"))) PPC_WEAK_FUNC(sub_82FBC4E0);
PPC_FUNC_IMPL(__imp__sub_82FBC4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FBC4E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBC4F4;
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
	// beq cr6,0x82fbc51c
	if (ctx.cr6.eq) goto loc_82FBC51C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbc530
	if (ctx.cr6.eq) goto loc_82FBC530;
loc_82FBC51C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBC524;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FBC530:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r28,80
	ctx.r3.s64 = ctx.r28.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82fbbec0
	ctx.lr = 0x82FBC540;
	sub_82FBBEC0(ctx, base);
	// lbz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 128);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbc574
	if (ctx.cr6.eq) goto loc_82FBC574;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82FBC554:
	// lwz r11,124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82fbbec0
	ctx.lr = 0x82FBC560;
	sub_82FBBEC0(ctx, base);
	// lbz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 128);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbc554
	if (ctx.cr6.lt) goto loc_82FBC554;
loc_82FBC574:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fbc5c0
	if (ctx.cr6.eq) goto loc_82FBC5C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fbc5c0
	if (!ctx.cr6.eq) goto loc_82FBC5C0;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbc5c0
	if (!ctx.cr0.eq) goto loc_82FBC5C0;
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
	ctx.lr = 0x82FBC5B8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBC5C0;
	__imp__KfLowerIrql(ctx, base);
loc_82FBC5C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBC5C8"))) PPC_WEAK_FUNC(sub_82FBC5C8);
PPC_FUNC_IMPL(__imp__sub_82FBC5C8) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fbbbd8
	ctx.lr = 0x82FBC5E8;
	sub_82FBBBD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbc638
	if (ctx.cr6.eq) goto loc_82FBC638;
loc_82FBC5F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbc620
	if (ctx.cr6.eq) goto loc_82FBC620;
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
loc_82FBC620:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbbbd8
	ctx.lr = 0x82FBC630;
	sub_82FBBBD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fbc5f0
	if (!ctx.cr6.eq) goto loc_82FBC5F0;
loc_82FBC638:
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

__attribute__((alias("__imp__sub_82FBC64C"))) PPC_WEAK_FUNC(sub_82FBC64C);
PPC_FUNC_IMPL(__imp__sub_82FBC64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC650"))) PPC_WEAK_FUNC(sub_82FBC650);
PPC_FUNC_IMPL(__imp__sub_82FBC650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FBC658;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r26,r4,24
	ctx.r26.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82fbc6fc
	if (ctx.cr6.eq) goto loc_82FBC6FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fbb728
	ctx.lr = 0x82FBC674;
	sub_82FBB728(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r27,r31,140
	ctx.r27.s64 = ctx.r31.s64 + 140;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x833b8aa4
	ctx.lr = 0x82FBC68C;
	__imp__XAudioGetVoiceCategoryVolumeChangeMask(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r29,r31,132
	ctx.r29.s64 = ctx.r31.s64 + 132;
loc_82FBC698:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbc6d0
	if (ctx.cr6.lt) goto loc_82FBC6D0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// and r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fbc6bc
	if (ctx.cr6.eq) goto loc_82FBC6BC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a94
	ctx.lr = 0x82FBC6BC;
	__imp__XAudioGetVoiceCategoryVolume(ctx, base);
loc_82FBC6BC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82fbc698
	if (ctx.cr6.lt) goto loc_82FBC698;
loc_82FBC6D0:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,20324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20324);
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82fbc6fc
	if (!ctx.cr6.gt) goto loc_82FBC6FC;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,20272
	ctx.r3.s64 = ctx.r10.s64 + 20272;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833b8a84
	ctx.lr = 0x82FBC6FC;
	__imp__KeReleaseSemaphore(ctx, base);
loc_82FBC6FC:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbc178
	ctx.lr = 0x82FBC708;
	sub_82FBC178(ctx, base);
	// addi r4,r31,356
	ctx.r4.s64 = ctx.r31.s64 + 356;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbb000
	ctx.lr = 0x82FBC714;
	sub_82FBB000(ctx, base);
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbc768
	if (ctx.cr6.eq) goto loc_82FBC768;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82FBC72C:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82fbc178
	ctx.lr = 0x82FBC73C;
	sub_82FBC178(ctx, base);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,356
	ctx.r4.s64 = ctx.r11.s64 + 356;
	// bl 0x82fbb000
	ctx.lr = 0x82FBC750;
	sub_82FBB000(ctx, base);
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// xori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 ^ 1;
	// addi r28,r28,44
	ctx.r28.s64 = ctx.r28.s64 + 44;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbc72c
	if (ctx.cr6.lt) goto loc_82FBC72C;
loc_82FBC768:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82fbc784
	if (ctx.cr6.eq) goto loc_82FBC784;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbb728
	ctx.lr = 0x82FBC784;
	sub_82FBB728(ctx, base);
loc_82FBC784:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBC78C"))) PPC_WEAK_FUNC(sub_82FBC78C);
PPC_FUNC_IMPL(__imp__sub_82FBC78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC790"))) PPC_WEAK_FUNC(sub_82FBC790);
PPC_FUNC_IMPL(__imp__sub_82FBC790) {
	PPC_FUNC_PROLOGUE();
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBC7A4"))) PPC_WEAK_FUNC(sub_82FBC7A4);
PPC_FUNC_IMPL(__imp__sub_82FBC7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC7A8"))) PPC_WEAK_FUNC(sub_82FBC7A8);
PPC_FUNC_IMPL(__imp__sub_82FBC7A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBC7BC"))) PPC_WEAK_FUNC(sub_82FBC7BC);
PPC_FUNC_IMPL(__imp__sub_82FBC7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC7C0"))) PPC_WEAK_FUNC(sub_82FBC7C0);
PPC_FUNC_IMPL(__imp__sub_82FBC7C0) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fbbbd8
	ctx.lr = 0x82FBC7E0;
	sub_82FBBBD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbc830
	if (ctx.cr6.eq) goto loc_82FBC830;
loc_82FBC7E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbc818
	if (ctx.cr6.eq) goto loc_82FBC818;
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
loc_82FBC818:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbbbd8
	ctx.lr = 0x82FBC828;
	sub_82FBBBD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fbc7e8
	if (!ctx.cr6.eq) goto loc_82FBC7E8;
loc_82FBC830:
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

__attribute__((alias("__imp__sub_82FBC844"))) PPC_WEAK_FUNC(sub_82FBC844);
PPC_FUNC_IMPL(__imp__sub_82FBC844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC848"))) PPC_WEAK_FUNC(sub_82FBC848);
PPC_FUNC_IMPL(__imp__sub_82FBC848) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fbbbd8
	ctx.lr = 0x82FBC868;
	sub_82FBBBD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbc8b8
	if (ctx.cr6.eq) goto loc_82FBC8B8;
loc_82FBC870:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbc8a0
	if (ctx.cr6.eq) goto loc_82FBC8A0;
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
loc_82FBC8A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbbbd8
	ctx.lr = 0x82FBC8B0;
	sub_82FBBBD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fbc870
	if (!ctx.cr6.eq) goto loc_82FBC870;
loc_82FBC8B8:
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

__attribute__((alias("__imp__sub_82FBC8CC"))) PPC_WEAK_FUNC(sub_82FBC8CC);
PPC_FUNC_IMPL(__imp__sub_82FBC8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC8D0"))) PPC_WEAK_FUNC(sub_82FBC8D0);
PPC_FUNC_IMPL(__imp__sub_82FBC8D0) {
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
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82fbc848
	ctx.lr = 0x82FBC8EC;
	sub_82FBC848(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82fbc848
	ctx.lr = 0x82FBC8F4;
	sub_82FBC848(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbc7c0
	ctx.lr = 0x82FBC8FC;
	sub_82FBC7C0(ctx, base);
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

__attribute__((alias("__imp__sub_82FBC910"))) PPC_WEAK_FUNC(sub_82FBC910);
PPC_FUNC_IMPL(__imp__sub_82FBC910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82FBC918;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,15312
	ctx.r10.s64 = ctx.r11.s64 + 15312;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// bl 0x82fc00b0
	ctx.lr = 0x82FBC930;
	sub_82FC00B0(ctx, base);
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbc954
	if (ctx.cr6.eq) goto loc_82FBC954;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBC954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBC954:
	// lwz r11,304(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 304);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbc9b0
	if (ctx.cr6.eq) goto loc_82FBC9B0;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,20308
	ctx.r3.s64 = ctx.r11.s64 + 20308;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833b8574
	ctx.lr = 0x82FBC978;
	__imp__KeSetEvent(ctx, base);
	// addi r31,r23,308
	ctx.r31.s64 = ctx.r23.s64 + 308;
	// li r30,6
	ctx.r30.s64 = 6;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82FBC984:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbc9a4
	if (ctx.cr6.eq) goto loc_82FBC9A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bf2190
	ctx.lr = 0x82FBC998;
	sub_82BF2190(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bea4e0
	ctx.lr = 0x82FBC9A0;
	sub_82BEA4E0(ctx, base);
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_82FBC9A4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82fbc984
	if (!ctx.cr0.eq) goto loc_82FBC984;
loc_82FBC9B0:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r30,r11,26512
	ctx.r30.s64 = ctx.r11.s64 + 26512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b77e4
	ctx.lr = 0x82FBC9C0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,20240
	ctx.r31.s64 = ctx.r11.s64 + 20240;
	// lwz r11,20240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbc9e8
	if (ctx.cr6.eq) goto loc_82FBC9E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833b8424
	ctx.lr = 0x82FBC9E0;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FBC9E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b77f4
	ctx.lr = 0x82FBC9F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x833b8a44
	ctx.lr = 0x82FBC9F4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbca1c
	if (ctx.cr6.eq) goto loc_82FBCA1C;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82fbca38
	if (ctx.cr6.eq) goto loc_82FBCA38;
loc_82FBCA1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBCA24;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
	// b 0x82fbca3c
	goto loc_82FBCA3C;
loc_82FBCA38:
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82FBCA3C:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// addi r21,r23,80
	ctx.r21.s64 = ctx.r23.s64 + 80;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82fbbbd8
	ctx.lr = 0x82FBCA58;
	sub_82FBBBD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fbcb20
	if (ctx.cr6.eq) goto loc_82FBCB20;
loc_82FBCA64:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82fbcaa4
	if (ctx.cr6.eq) goto loc_82FBCAA4;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82fbcaa4
	if (!ctx.cr6.eq) goto loc_82FBCAA4;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbcaa4
	if (!ctx.cr0.eq) goto loc_82FBCAA4;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FBCA9C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBCAA4;
	__imp__KfLowerIrql(ctx, base);
loc_82FBCAA4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBCAB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FBCABC;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbcadc
	if (ctx.cr6.eq) goto loc_82FBCADC;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82fbcaf8
	if (ctx.cr6.eq) goto loc_82FBCAF8;
loc_82FBCADC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBCAE4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
	// b 0x82fbcafc
	goto loc_82FBCAFC;
loc_82FBCAF8:
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82FBCAFC:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82fbbbd8
	ctx.lr = 0x82FBCB14;
	sub_82FBBBD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82fbca64
	if (!ctx.cr6.eq) goto loc_82FBCA64;
loc_82FBCB20:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82fbcb60
	if (ctx.cr6.eq) goto loc_82FBCB60;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82fbcb60
	if (!ctx.cr6.eq) goto loc_82FBCB60;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbcb60
	if (!ctx.cr0.eq) goto loc_82FBCB60;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FBCB58;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBCB60;
	__imp__KfLowerIrql(ctx, base);
loc_82FBCB60:
	// lbz r11,128(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 128);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbccf4
	if (ctx.cr6.eq) goto loc_82FBCCF4;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_82FBCB74:
	// lwz r11,124(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 124);
	// add r26,r25,r11
	ctx.r26.u64 = ctx.r25.u64 + ctx.r11.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBCB80;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbcba0
	if (ctx.cr6.eq) goto loc_82FBCBA0;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82fbcbbc
	if (ctx.cr6.eq) goto loc_82FBCBBC;
loc_82FBCBA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBCBA8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
	// b 0x82fbcbc0
	goto loc_82FBCBC0;
loc_82FBCBBC:
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82FBCBC0:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82fbbbd8
	ctx.lr = 0x82FBCBD8;
	sub_82FBBBD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fbcca0
	if (ctx.cr6.eq) goto loc_82FBCCA0;
loc_82FBCBE4:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82fbcc24
	if (ctx.cr6.eq) goto loc_82FBCC24;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82fbcc24
	if (!ctx.cr6.eq) goto loc_82FBCC24;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbcc24
	if (!ctx.cr0.eq) goto loc_82FBCC24;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FBCC1C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBCC24;
	__imp__KfLowerIrql(ctx, base);
loc_82FBCC24:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBCC38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FBCC3C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbcc5c
	if (ctx.cr6.eq) goto loc_82FBCC5C;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82fbcc78
	if (ctx.cr6.eq) goto loc_82FBCC78;
loc_82FBCC5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBCC64;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
	// b 0x82fbcc7c
	goto loc_82FBCC7C;
loc_82FBCC78:
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82FBCC7C:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82fbbbd8
	ctx.lr = 0x82FBCC94;
	sub_82FBBBD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82fbcbe4
	if (!ctx.cr6.eq) goto loc_82FBCBE4;
loc_82FBCCA0:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82fbcce0
	if (ctx.cr6.eq) goto loc_82FBCCE0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82fbcce0
	if (!ctx.cr6.eq) goto loc_82FBCCE0;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbcce0
	if (!ctx.cr0.eq) goto loc_82FBCCE0;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FBCCD8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBCCE0;
	__imp__KfLowerIrql(ctx, base);
loc_82FBCCE0:
	// lbz r11,128(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 128);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,44
	ctx.r25.s64 = ctx.r25.s64 + 44;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbcb74
	if (ctx.cr6.lt) goto loc_82FBCB74;
loc_82FBCCF4:
	// lwz r3,64(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbcd14
	if (ctx.cr6.eq) goto loc_82FBCD14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBCD10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,64(r23)
	PPC_STORE_U32(ctx.r23.u32 + 64, ctx.r22.u32);
loc_82FBCD14:
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// stw r11,20324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20324, ctx.r11.u32);
	// lwz r3,60(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbcd34
	if (ctx.cr6.eq) goto loc_82FBCD34;
	// bl 0x82fbd6f0
	ctx.lr = 0x82FBCD30;
	sub_82FBD6F0(ctx, base);
	// stw r22,60(r23)
	PPC_STORE_U32(ctx.r23.u32 + 60, ctx.r22.u32);
loc_82FBCD34:
	// addi r31,r23,12
	ctx.r31.s64 = ctx.r23.s64 + 12;
	// li r29,6
	ctx.r29.s64 = 6;
loc_82FBCD3C:
	// li r30,2
	ctx.r30.s64 = 2;
loc_82FBCD40:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbcd54
	if (ctx.cr6.eq) goto loc_82FBCD54;
	// bl 0x82fb8e98
	ctx.lr = 0x82FBCD50;
	sub_82FB8E98(ctx, base);
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_82FBCD54:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82fbcd40
	if (!ctx.cr0.eq) goto loc_82FBCD40;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82fbcd3c
	if (!ctx.cr0.eq) goto loc_82FBCD3C;
	// addi r3,r21,24
	ctx.r3.s64 = ctx.r21.s64 + 24;
	// bl 0x82fbc848
	ctx.lr = 0x82FBCD70;
	sub_82FBC848(ctx, base);
	// addi r3,r21,12
	ctx.r3.s64 = ctx.r21.s64 + 12;
	// bl 0x82fbc848
	ctx.lr = 0x82FBCD78;
	sub_82FBC848(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82fbc7c0
	ctx.lr = 0x82FBCD80;
	sub_82FBC7C0(ctx, base);
	// addi r3,r23,68
	ctx.r3.s64 = ctx.r23.s64 + 68;
	// bl 0x82fbc848
	ctx.lr = 0x82FBCD88;
	sub_82FBC848(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r10,r11,15292
	ctx.r10.s64 = ctx.r11.s64 + 15292;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82fbcdb4
	if (ctx.cr6.eq) goto loc_82FBCDB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBCDB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r22.u32);
loc_82FBCDB4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,14660
	ctx.r10.s64 = ctx.r11.s64 + 14660;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBCDC8"))) PPC_WEAK_FUNC(sub_82FBCDC8);
PPC_FUNC_IMPL(__imp__sub_82FBCDC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBCDCC"))) PPC_WEAK_FUNC(sub_82FBCDCC);
PPC_FUNC_IMPL(__imp__sub_82FBCDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBCDD0"))) PPC_WEAK_FUNC(sub_82FBCDD0);
PPC_FUNC_IMPL(__imp__sub_82FBCDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FBCDD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,268(r13)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// lwz r10,256(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// addi r9,r11,83
	ctx.r9.s64 = ctx.r11.s64 + 83;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20324);
	// lis r9,-31890
	ctx.r9.s64 = -2089943040;
	// addi r28,r9,20292
	ctx.r28.s64 = ctx.r9.s64 + 20292;
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r27,r10,20272
	ctx.r27.s64 = ctx.r10.s64 + 20272;
	// addi r29,r11,20308
	ctx.r29.s64 = ctx.r11.s64 + 20308;
loc_82FBCE10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x833b8564
	ctx.lr = 0x82FBCE28;
	__imp__KeWaitForSingleObject(ctx, base);
	// lwz r3,20324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20324);
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbce64
	if (ctx.cr6.eq) goto loc_82FBCE64;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// addic. r5,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82fbce74
	if (ctx.cr0.eq) goto loc_82FBCE74;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833b8a84
	ctx.lr = 0x82FBCE60;
	__imp__KeReleaseSemaphore(ctx, base);
	// b 0x82fbce74
	goto loc_82FBCE74;
loc_82FBCE64:
	// bl 0x82fbc4e0
	ctx.lr = 0x82FBCE68;
	sub_82FBC4E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20324);
	// bl 0x82fbc650
	ctx.lr = 0x82FBCE74;
	sub_82FBC650(ctx, base);
loc_82FBCE74:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833b8574
	ctx.lr = 0x82FBCE84;
	__imp__KeSetEvent(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fbce10
	if (ctx.cr6.eq) goto loc_82FBCE10;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBCE98"))) PPC_WEAK_FUNC(sub_82FBCE98);
PPC_FUNC_IMPL(__imp__sub_82FBCE98) {
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
	// lbz r11,268(r13)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lwz r9,256(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// addi r8,r11,83
	ctx.r8.s64 = ctx.r11.s64 + 83;
	// addi r30,r10,20272
	ctx.r30.s64 = ctx.r10.s64 + 20272;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20324);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x833b8564
	ctx.lr = 0x82FBCEE8;
	__imp__KeWaitForSingleObject(ctx, base);
	// lwz r3,20324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20324);
	// lwz r9,300(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fbcf28
	if (ctx.cr6.eq) goto loc_82FBCF28;
loc_82FBCEF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fbc650
	ctx.lr = 0x82FBCF00;
	sub_82FBC650(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x833b8564
	ctx.lr = 0x82FBCF18;
	__imp__KeWaitForSingleObject(ctx, base);
	// lwz r3,20324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20324);
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbcef8
	if (!ctx.cr6.eq) goto loc_82FBCEF8;
loc_82FBCF28:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBCF44"))) PPC_WEAK_FUNC(sub_82FBCF44);
PPC_FUNC_IMPL(__imp__sub_82FBCF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBCF48"))) PPC_WEAK_FUNC(sub_82FBCF48);
PPC_FUNC_IMPL(__imp__sub_82FBCF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FBCF50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbcfac
	if (ctx.cr6.eq) goto loc_82FBCFAC;
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r29,r31,-4
	ctx.r29.s64 = ctx.r31.s64 + -4;
	// mulli r11,r10,44
	ctx.r11.s64 = ctx.r10.s64 * 44;
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt 0x82fbcfa0
	if (ctx.cr0.lt) goto loc_82FBCFA0;
loc_82FBCF7C:
	// addi r31,r31,-44
	ctx.r31.s64 = ctx.r31.s64 + -44;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82fbc848
	ctx.lr = 0x82FBCF88;
	sub_82FBC848(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82fbc848
	ctx.lr = 0x82FBCF90;
	sub_82FBC848(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbc7c0
	ctx.lr = 0x82FBCF98;
	sub_82FBC7C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82fbcf7c
	if (!ctx.cr0.lt) goto loc_82FBCF7C;
loc_82FBCFA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82FBCFAC:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82fbc848
	ctx.lr = 0x82FBCFB4;
	sub_82FBC848(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82fbc848
	ctx.lr = 0x82FBCFBC;
	sub_82FBC848(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbc7c0
	ctx.lr = 0x82FBCFC4;
	sub_82FBC7C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBCFD0"))) PPC_WEAK_FUNC(sub_82FBCFD0);
PPC_FUNC_IMPL(__imp__sub_82FBCFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FBCFD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bl 0x82fc0138
	ctx.lr = 0x82FBCFEC;
	sub_82FC0138(ctx, base);
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r30,r11,26448
	ctx.r30.s64 = ctx.r11.s64 + 26448;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x833b77e4
	ctx.lr = 0x82FBCFFC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,256(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// beq cr6,0x82fbd084
	if (ctx.cr6.eq) goto loc_82FBD084;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,20308
	ctx.r3.s64 = ctx.r11.s64 + 20308;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833b8574
	ctx.lr = 0x82FBD024;
	__imp__KeSetEvent(ctx, base);
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lis r9,-31890
	ctx.r9.s64 = -2089943040;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r8,r10,20292
	ctx.r8.s64 = ctx.r10.s64 + 20292;
	// addi r7,r9,20256
	ctx.r7.s64 = ctx.r9.s64 + 20256;
	// li r5,44
	ctx.r5.s64 = 44;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82cb16f0
	ctx.lr = 0x82FBD050;
	sub_82CB16F0(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x833b8ab4
	ctx.lr = 0x82FBD074;
	__imp__KeWaitForMultipleObjects(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82fbd098
	if (!ctx.cr6.eq) goto loc_82FBD098;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82fbd098
	goto loc_82FBD098;
loc_82FBD084:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbc4e0
	ctx.lr = 0x82FBD08C;
	sub_82FBC4E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbc650
	ctx.lr = 0x82FBD098;
	sub_82FBC650(ctx, base);
loc_82FBD098:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbd0cc
	if (!ctx.cr6.eq) goto loc_82FBD0CC;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBD0B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbd0cc
	if (ctx.cr6.lt) goto loc_82FBD0CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fc00b8
	ctx.lr = 0x82FBD0CC;
	sub_82FC00B8(ctx, base);
loc_82FBD0CC:
	// stw r28,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r28.u32);
	// bl 0x82fc0140
	ctx.lr = 0x82FBD0D4;
	sub_82FC0140(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x833b77f4
	ctx.lr = 0x82FBD0DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBD0E8"))) PPC_WEAK_FUNC(sub_82FBD0E8);
PPC_FUNC_IMPL(__imp__sub_82FBD0E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBD128"))) PPC_WEAK_FUNC(sub_82FBD128);
PPC_FUNC_IMPL(__imp__sub_82FBD128) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,15292
	ctx.r9.s64 = ctx.r11.s64 + 15292;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82fbd170
	if (ctx.cr6.eq) goto loc_82FBD170;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBD170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBD170:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r9,r10,15312
	ctx.r9.s64 = ctx.r10.s64 + 15312;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// li r8,24
	ctx.r8.s64 = 24;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lis r6,-31890
	ctx.r6.s64 = -2089943040;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r11,16256
	ctx.r11.s64 = 1065353216;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// addi r7,r31,132
	ctx.r7.s64 = ctx.r31.s64 + 132;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r31,20324(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20324, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82FBD1FC"))) PPC_WEAK_FUNC(sub_82FBD1FC);
PPC_FUNC_IMPL(__imp__sub_82FBD1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBD200"))) PPC_WEAK_FUNC(sub_82FBD200);
PPC_FUNC_IMPL(__imp__sub_82FBD200) {
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
	// bl 0x82fbc910
	ctx.lr = 0x82FBD218;
	sub_82FBC910(ctx, base);
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

__attribute__((alias("__imp__sub_82FBD230"))) PPC_WEAK_FUNC(sub_82FBD230);
PPC_FUNC_IMPL(__imp__sub_82FBD230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82FBD238;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x82fc00a8
	ctx.lr = 0x82FBD248;
	sub_82FC00A8(ctx, base);
	// lbz r11,1(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stb r11,128(r30)
	PPC_STORE_U8(ctx.r30.u32 + 128, ctx.r11.u8);
	// beq cr6,0x82fbd330
	if (ctx.cr6.eq) goto loc_82FBD330;
	// lis r11,1489
	ctx.r11.s64 = 97583104;
	// ori r10,r11,29789
	ctx.r10.u64 = ctx.r11.u64 | 29789;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fbd284
	if (ctx.cr6.gt) goto loc_82FBD284;
	// mulli r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 * 44;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82fbd288
	if (!ctx.cr6.gt) goto loc_82FBD288;
loc_82FBD284:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82FBD288:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBD29C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd310
	if (ctx.cr6.eq) goto loc_82FBD310;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r7,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r7.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt 0x82fbd308
	if (ctx.cr0.lt) goto loc_82FBD308;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
loc_82FBD2C4:
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r5,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r5.u32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// bge 0x82fbd2c4
	if (!ctx.cr0.lt) goto loc_82FBD2C4;
loc_82FBD308:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82fbd314
	goto loc_82FBD314;
loc_82FBD310:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82FBD314:
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbd330
	if (!ctx.cr6.eq) goto loc_82FBD330;
loc_82FBD320:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82FBD330:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbd344
	if (ctx.cr6.eq) goto loc_82FBD344;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82fbd350
	goto loc_82FBD350;
loc_82FBD344:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,15104
	ctx.r10.s64 = ctx.r11.s64 + 15104;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82FBD350:
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82fbe098
	ctx.lr = 0x82FBD360;
	sub_82FBE098(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82fbd5c4
	if (ctx.cr6.lt) goto loc_82FBD5C4;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r11,r10,20308
	ctx.r11.s64 = ctx.r10.s64 + 20308;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lis r6,-31890
	ctx.r6.s64 = -2089943040;
	// stb r9,20308(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20308, ctx.r9.u8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// addi r10,r6,20292
	ctx.r10.s64 = ctx.r6.s64 + 20292;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// stb r8,20292(r6)
	PPC_STORE_U8(ctx.r6.u32 + 20292, ctx.r8.u8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lis r4,-31890
	ctx.r4.s64 = -2089943040;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// addi r3,r4,20272
	ctx.r3.s64 = ctx.r4.s64 + 20272;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833b8ad4
	ctx.lr = 0x82FBD3D4;
	__imp__KeInitializeSemaphore(ctx, base);
	// lis r3,-31890
	ctx.r3.s64 = -2089943040;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r3,20256
	ctx.r11.s64 = ctx.r3.s64 + 20256;
	// lis r6,-31890
	ctx.r6.s64 = -2089943040;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stb r10,20256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20256, ctx.r10.u8);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r3,r6,20240
	ctx.r3.s64 = ctx.r6.s64 + 20240;
	// lis r7,-32004
	ctx.r7.s64 = -2097414144;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// addi r9,r7,-17568
	ctx.r9.s64 = ctx.r7.s64 + -17568;
	// lis r8,32128
	ctx.r8.s64 = 2105540608;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,20240(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20240, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// bl 0x833b8424
	ctx.lr = 0x82FBD420;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// stw r25,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r25.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r3,2(r24)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r24.u32 + 2);
	// bl 0x82fbaef0
	ctx.lr = 0x82FBD430;
	sub_82FBAEF0(ctx, base);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r29,r30,308
	ctx.r29.s64 = ctx.r30.s64 + 308;
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
loc_82FBD43C:
	// addi r11,r1,98
	ctx.r11.s64 = ctx.r1.s64 + 98;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fbd4d0
	if (ctx.cr6.eq) goto loc_82FBD4D0;
	// lis r10,-32004
	ctx.r10.s64 = -2097414144;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// addi r7,r10,-12648
	ctx.r7.s64 = ctx.r10.s64 + -12648;
	// bne cr6,0x82fbd46c
	if (!ctx.cr6.eq) goto loc_82FBD46C;
	// lis r11,-32004
	ctx.r11.s64 = -2097414144;
	// addi r7,r11,-12848
	ctx.r7.s64 = ctx.r11.s64 + -12848;
loc_82FBD46C:
	// slw r11,r27,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r31.u8 & 0x3F));
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833b82f4
	ctx.lr = 0x82FBD490;
	__imp__ExCreateThread(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbd320
	if (ctx.cr6.lt) goto loc_82FBD320;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,2624(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2624);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x833b7a24
	ctx.lr = 0x82FBD4A8;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b7a14
	ctx.lr = 0x82FBD4B4;
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b8ac4
	ctx.lr = 0x82FBD4BC;
	__imp__KeResumeThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82FBD4C4;
	__imp__ObDereferenceObject(ctx, base);
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r11.u32);
loc_82FBD4D0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// blt cr6,0x82fbd43c
	if (ctx.cr6.lt) goto loc_82FBD43C;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// std r25,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r25.u64);
	// std r25,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r25.u64);
	// stw r25,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r25.u32);
	// stb r25,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r25.u8);
	// stb r25,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r25.u8);
	// bgt cr6,0x82fbd510
	if (ctx.cr6.gt) goto loc_82FBD510;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82FBD510:
	// lis r10,0
	ctx.r10.s64 = 0;
	// stb r11,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r11.u8);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// ori r8,r10,48000
	ctx.r8.u64 = ctx.r10.u64 | 48000;
	// li r29,3
	ctx.r29.s64 = 3;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
loc_82FBD528:
	// addi r11,r1,98
	ctx.r11.s64 = ctx.r1.s64 + 98;
	// lbzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fbd56c
	if (ctx.cr6.eq) goto loc_82FBD56C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82FBD53C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82fbd56c
	if (ctx.cr6.lt) goto loc_82FBD56C;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82fb95c0
	ctx.lr = 0x82FBD55C;
	sub_82FB95C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x82fbd53c
	if (ctx.cr6.lt) goto loc_82FBD53C;
loc_82FBD56C:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r29,15
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 15, ctx.xer);
	// blt cr6,0x82fbd528
	if (ctx.cr6.lt) goto loc_82FBD528;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82fbd5c4
	if (ctx.cr6.lt) goto loc_82FBD5C4;
	// addi r31,r30,64
	ctx.r31.s64 = ctx.r30.s64 + 64;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fcb558
	ctx.lr = 0x82FBD594;
	sub_82FCB558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbd5c8
	if (ctx.cr6.lt) goto loc_82FBD5C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32003
	ctx.r10.s64 = -2097348608;
	// addi r4,r10,-21136
	ctx.r4.s64 = ctx.r10.s64 + -21136;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82FBD5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82FBD5C4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82FBD5C8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBD5D0"))) PPC_WEAK_FUNC(sub_82FBD5D0);
PPC_FUNC_IMPL(__imp__sub_82FBD5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FBD5D8;
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
	// bl 0x82fbbfa8
	ctx.lr = 0x82FBD5F0;
	sub_82FBBFA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbd604
	if (ctx.cr6.lt) goto loc_82FBD604;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,372
	ctx.r4.s64 = ctx.r11.s64 + 372;
	// b 0x82fbd608
	goto loc_82FBD608;
loc_82FBD604:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82FBD608:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbd6a4
	if (ctx.cr6.lt) goto loc_82FBD6A4;
	// lis r3,24962
	ctx.r3.s64 = 1635909632;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// bl 0x82fcbd58
	ctx.lr = 0x82FBD624;
	sub_82FCBD58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82fbd6a4
	if (ctx.cr6.lt) goto loc_82FBD6A4;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r4,372
	ctx.r4.s64 = 372;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBD648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd664
	if (ctx.cr6.eq) goto loc_82FBD664;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82fbd128
	ctx.lr = 0x82FBD658;
	sub_82FBD128(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fbd670
	if (!ctx.cr6.eq) goto loc_82FBD670;
loc_82FBD664:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82fbd6a4
	goto loc_82FBD6A4;
loc_82FBD670:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fbd230
	ctx.lr = 0x82FBD67C;
	sub_82FBD230(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82fbd690
	if (ctx.cr6.lt) goto loc_82FBD690;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// b 0x82fbd6a4
	goto loc_82FBD6A4;
loc_82FBD690:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBD6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBD6A4:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd6c0
	if (ctx.cr6.eq) goto loc_82FBD6C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBD6C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBD6C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBD6CC"))) PPC_WEAK_FUNC(sub_82FBD6CC);
PPC_FUNC_IMPL(__imp__sub_82FBD6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBD6D0"))) PPC_WEAK_FUNC(sub_82FBD6D0);
PPC_FUNC_IMPL(__imp__sub_82FBD6D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bne cr6,0x82fbd6e0
	if (!ctx.cr6.eq) goto loc_82FBD6E0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FBD6E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FBD6F0"))) PPC_WEAK_FUNC(sub_82FBD6F0);
PPC_FUNC_IMPL(__imp__sub_82FBD6F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bne cr6,0x82fbd700
	if (!ctx.cr6.eq) goto loc_82FBD700;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FBD700:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FBD710"))) PPC_WEAK_FUNC(sub_82FBD710);
PPC_FUNC_IMPL(__imp__sub_82FBD710) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bne cr6,0x82fbd720
	if (!ctx.cr6.eq) goto loc_82FBD720;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FBD720:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FBD730"))) PPC_WEAK_FUNC(sub_82FBD730);
PPC_FUNC_IMPL(__imp__sub_82FBD730) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bne cr6,0x82fbd740
	if (!ctx.cr6.eq) goto loc_82FBD740;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FBD740:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FBD750"))) PPC_WEAK_FUNC(sub_82FBD750);
PPC_FUNC_IMPL(__imp__sub_82FBD750) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bne cr6,0x82fbd760
	if (!ctx.cr6.eq) goto loc_82FBD760;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FBD760:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FBD770"))) PPC_WEAK_FUNC(sub_82FBD770);
PPC_FUNC_IMPL(__imp__sub_82FBD770) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bne cr6,0x82fbd780
	if (!ctx.cr6.eq) goto loc_82FBD780;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FBD780:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FBD790"))) PPC_WEAK_FUNC(sub_82FBD790);
PPC_FUNC_IMPL(__imp__sub_82FBD790) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// bne cr6,0x82fbd7a0
	if (!ctx.cr6.eq) goto loc_82FBD7A0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_82FBD7A0:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82fbd7dc
	if (!ctx.cr6.lt) goto loc_82FBD7DC;
loc_82FBD7B8:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82fbd7d0
	if (!ctx.cr6.eq) goto loc_82FBD7D0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fbd7e4
	if (ctx.cr6.eq) goto loc_82FBD7E4;
loc_82FBD7D0:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fbd7b8
	if (ctx.cr6.lt) goto loc_82FBD7B8;
loc_82FBD7DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FBD7E4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBD7EC"))) PPC_WEAK_FUNC(sub_82FBD7EC);
PPC_FUNC_IMPL(__imp__sub_82FBD7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBD7F0"))) PPC_WEAK_FUNC(sub_82FBD7F0);
PPC_FUNC_IMPL(__imp__sub_82FBD7F0) {
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

__attribute__((alias("__imp__sub_82FBD804"))) PPC_WEAK_FUNC(sub_82FBD804);
PPC_FUNC_IMPL(__imp__sub_82FBD804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBD808"))) PPC_WEAK_FUNC(sub_82FBD808);
PPC_FUNC_IMPL(__imp__sub_82FBD808) {
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

__attribute__((alias("__imp__sub_82FBD824"))) PPC_WEAK_FUNC(sub_82FBD824);
PPC_FUNC_IMPL(__imp__sub_82FBD824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBD828"))) PPC_WEAK_FUNC(sub_82FBD828);
PPC_FUNC_IMPL(__imp__sub_82FBD828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subfic r11,r3,127
	ctx.xer.ca = ctx.r3.u32 <= 127;
	ctx.r11.s64 = 127 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBD838"))) PPC_WEAK_FUNC(sub_82FBD838);
PPC_FUNC_IMPL(__imp__sub_82FBD838) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBD840"))) PPC_WEAK_FUNC(sub_82FBD840);
PPC_FUNC_IMPL(__imp__sub_82FBD840) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBD84C"))) PPC_WEAK_FUNC(sub_82FBD84C);
PPC_FUNC_IMPL(__imp__sub_82FBD84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBD850"))) PPC_WEAK_FUNC(sub_82FBD850);
PPC_FUNC_IMPL(__imp__sub_82FBD850) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBD85C"))) PPC_WEAK_FUNC(sub_82FBD85C);
PPC_FUNC_IMPL(__imp__sub_82FBD85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBD860"))) PPC_WEAK_FUNC(sub_82FBD860);
PPC_FUNC_IMPL(__imp__sub_82FBD860) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBD878"))) PPC_WEAK_FUNC(sub_82FBD878);
PPC_FUNC_IMPL(__imp__sub_82FBD878) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBD8A0"))) PPC_WEAK_FUNC(sub_82FBD8A0);
PPC_FUNC_IMPL(__imp__sub_82FBD8A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBD8B0"))) PPC_WEAK_FUNC(sub_82FBD8B0);
PPC_FUNC_IMPL(__imp__sub_82FBD8B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82fbd8e4
	if (!ctx.cr6.lt) goto loc_82FBD8E4;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbd8e4
	if (ctx.cr6.eq) goto loc_82FBD8E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82FBD8E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBD8EC"))) PPC_WEAK_FUNC(sub_82FBD8EC);
PPC_FUNC_IMPL(__imp__sub_82FBD8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBD8F0"))) PPC_WEAK_FUNC(sub_82FBD8F0);
PPC_FUNC_IMPL(__imp__sub_82FBD8F0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82fbd928
	if (!ctx.cr6.lt) goto loc_82FBD928;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbd928
	if (ctx.cr6.eq) goto loc_82FBD928;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82FBD928:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBD930"))) PPC_WEAK_FUNC(sub_82FBD930);
PPC_FUNC_IMPL(__imp__sub_82FBD930) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgt cr6,0x82fbd950
	if (ctx.cr6.gt) goto loc_82FBD950;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82fbd984
	if (!ctx.cr6.lt) goto loc_82FBD984;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82fbd964
	goto loc_82FBD964;
loc_82FBD950:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82fbd984
	if (!ctx.cr6.lt) goto loc_82FBD984;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_82FBD964:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fbd984
	if (ctx.cr6.eq) goto loc_82FBD984;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fbd988
	if (!ctx.cr6.eq) goto loc_82FBD988;
loc_82FBD984:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBD988:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBD990"))) PPC_WEAK_FUNC(sub_82FBD990);
PPC_FUNC_IMPL(__imp__sub_82FBD990) {
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
	// addi r10,r11,15332
	ctx.r10.s64 = ctx.r11.s64 + 15332;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fbd9d8
	if (ctx.cr6.eq) goto loc_82FBD9D8;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// bl 0x82fbf870
	ctx.lr = 0x82FBD9D0;
	sub_82FBF870(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_82FBD9D8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,14660
	ctx.r10.s64 = ctx.r11.s64 + 14660;
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

__attribute__((alias("__imp__sub_82FBD9F8"))) PPC_WEAK_FUNC(sub_82FBD9F8);
PPC_FUNC_IMPL(__imp__sub_82FBD9F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBD9FC"))) PPC_WEAK_FUNC(sub_82FBD9FC);
PPC_FUNC_IMPL(__imp__sub_82FBD9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBDA00"))) PPC_WEAK_FUNC(sub_82FBDA00);
PPC_FUNC_IMPL(__imp__sub_82FBDA00) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBDA14"))) PPC_WEAK_FUNC(sub_82FBDA14);
PPC_FUNC_IMPL(__imp__sub_82FBDA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBDA18"))) PPC_WEAK_FUNC(sub_82FBDA18);
PPC_FUNC_IMPL(__imp__sub_82FBDA18) {
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
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x82fbda58
	if (!ctx.cr0.eq) goto loc_82FBDA58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBDA44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_82FBDA58:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBDA6C"))) PPC_WEAK_FUNC(sub_82FBDA6C);
PPC_FUNC_IMPL(__imp__sub_82FBDA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBDA70"))) PPC_WEAK_FUNC(sub_82FBDA70);
PPC_FUNC_IMPL(__imp__sub_82FBDA70) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82fbda80
	if (!ctx.cr6.eq) goto loc_82FBDA80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBDA80:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBDA88"))) PPC_WEAK_FUNC(sub_82FBDA88);
PPC_FUNC_IMPL(__imp__sub_82FBDA88) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// bgt cr6,0x82fbdab0
	if (ctx.cr6.gt) goto loc_82FBDAB0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82fbdae4
	if (!ctx.cr6.lt) goto loc_82FBDAE4;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82fbdac4
	goto loc_82FBDAC4;
loc_82FBDAB0:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82fbdae4
	if (!ctx.cr6.lt) goto loc_82FBDAE4;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_82FBDAC4:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fbdae4
	if (ctx.cr6.eq) goto loc_82FBDAE4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fbdae8
	if (!ctx.cr6.eq) goto loc_82FBDAE8;
loc_82FBDAE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBDAE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbdafc
	if (!ctx.cr6.eq) goto loc_82FBDAFC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
loc_82FBDAFC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FBDB0C"))) PPC_WEAK_FUNC(sub_82FBDB0C);
PPC_FUNC_IMPL(__imp__sub_82FBDB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBDB10"))) PPC_WEAK_FUNC(sub_82FBDB10);
PPC_FUNC_IMPL(__imp__sub_82FBDB10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// bgt cr6,0x82fbdb3c
	if (ctx.cr6.gt) goto loc_82FBDB3C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82fbdb70
	if (!ctx.cr6.lt) goto loc_82FBDB70;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82fbdb50
	goto loc_82FBDB50;
loc_82FBDB3C:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82fbdb70
	if (!ctx.cr6.lt) goto loc_82FBDB70;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_82FBDB50:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fbdb70
	if (ctx.cr6.eq) goto loc_82FBDB70;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fbdb74
	if (!ctx.cr6.eq) goto loc_82FBDB74;
loc_82FBDB70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBDB74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbdb88
	if (!ctx.cr6.eq) goto loc_82FBDB88;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
loc_82FBDB88:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FBDB98"))) PPC_WEAK_FUNC(sub_82FBDB98);
PPC_FUNC_IMPL(__imp__sub_82FBDB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82FBDBA0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fbdc64
	if (ctx.cr6.eq) goto loc_82FBDC64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
loc_82FBDBC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82fbdbd8
	if (!ctx.cr6.eq) goto loc_82FBDBD8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82FBDBD8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82fbdc64
	if (!ctx.cr6.lt) goto loc_82FBDC64;
loc_82FBDBF0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fbdc08
	if (!ctx.cr6.eq) goto loc_82FBDC08;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fbdc28
	if (ctx.cr6.eq) goto loc_82FBDC28;
loc_82FBDC08:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fbdbf0
	if (ctx.cr6.lt) goto loc_82FBDBF0;
	// b 0x82fbdc64
	goto loc_82FBDC64;
loc_82FBDC28:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r9,r7,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r7,r9,128
	ctx.r7.s64 = ctx.r9.s64 + 128;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lbz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82fbdbc8
	if (ctx.cr6.lt) goto loc_82FBDBC8;
loc_82FBDC64:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// subf. r30,r26,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r26.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82fbdc7c
	if (!ctx.cr0.eq) goto loc_82FBDC7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82FBDC7C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// ble cr6,0x82fbdc9c
	if (!ctx.cr6.gt) goto loc_82FBDC9C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82FBDC9C:
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r28,r10,20328
	ctx.r28.s64 = ctx.r10.s64 + 20328;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fbf860
	ctx.lr = 0x82FBDCB8;
	sub_82FBF860(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82fbdcd8
	if (!ctx.cr6.eq) goto loc_82FBDCD8;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82FBDCD8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbdd14
	if (ctx.cr6.eq) goto loc_82FBDD14;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82FBDCF4;
	sub_82CB1160(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fbdd14
	if (ctx.cr6.eq) goto loc_82FBDD14;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// bl 0x82fbf870
	ctx.lr = 0x82FBDD10;
	sub_82FBF870(ctx, base);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
loc_82FBDD14:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82fbdd8c
	if (ctx.cr6.eq) goto loc_82FBDD8C;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82FBDD3C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// subf r5,r7,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// srawi r7,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 3;
	// addi r3,r7,128
	ctx.r3.s64 = ctx.r7.s64 + 128;
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// blt cr6,0x82fbdd3c
	if (ctx.cr6.lt) goto loc_82FBDD3C;
loc_82FBDD8C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBDD98"))) PPC_WEAK_FUNC(sub_82FBDD98);
PPC_FUNC_IMPL(__imp__sub_82FBDD98) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbde08
	if (ctx.cr6.eq) goto loc_82FBDE08;
loc_82FBDDAC:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82fbddf8
	if (!ctx.cr6.lt) goto loc_82FBDDF8;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fbddf8
	if (ctx.cr6.eq) goto loc_82FBDDF8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fbddf8
	if (ctx.cr6.eq) goto loc_82FBDDF8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbddf8
	if (ctx.cr6.eq) goto loc_82FBDDF8;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82FBDDF8:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbddac
	if (ctx.cr6.lt) goto loc_82FBDDAC;
loc_82FBDE08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBDE10"))) PPC_WEAK_FUNC(sub_82FBDE10);
PPC_FUNC_IMPL(__imp__sub_82FBDE10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82FBDE28:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82fbde3c
	if (!ctx.cr6.gt) goto loc_82FBDE3C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82FBDE3C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x82fbde28
	if (!ctx.cr0.eq) goto loc_82FBDE28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBDE4C"))) PPC_WEAK_FUNC(sub_82FBDE4C);
PPC_FUNC_IMPL(__imp__sub_82FBDE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBDE50"))) PPC_WEAK_FUNC(sub_82FBDE50);
PPC_FUNC_IMPL(__imp__sub_82FBDE50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbdea4
	if (ctx.cr6.eq) goto loc_82FBDEA4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82FBDE84:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82fbde98
	if (!ctx.cr6.gt) goto loc_82FBDE98;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82FBDE98:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x82fbde84
	if (!ctx.cr0.eq) goto loc_82FBDE84;
loc_82FBDEA4:
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBDEAC"))) PPC_WEAK_FUNC(sub_82FBDEAC);
PPC_FUNC_IMPL(__imp__sub_82FBDEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBDEB0"))) PPC_WEAK_FUNC(sub_82FBDEB0);
PPC_FUNC_IMPL(__imp__sub_82FBDEB0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r11,15332
	ctx.r9.s64 = ctx.r11.s64 + 15332;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fbdf18
	if (ctx.cr6.eq) goto loc_82FBDF18;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82FBDEF8:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82fbdf0c
	if (!ctx.cr6.gt) goto loc_82FBDF0C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82FBDF0C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// bne 0x82fbdef8
	if (!ctx.cr0.eq) goto loc_82FBDEF8;
loc_82FBDF18:
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fbdf40
	if (ctx.cr6.eq) goto loc_82FBDF40;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBDF3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_82FBDF40:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbdfa8
	if (ctx.cr6.eq) goto loc_82FBDFA8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBDF58:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rotlwi r10,r7,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// stwx r6,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82fbdf58
	if (ctx.cr6.lt) goto loc_82FBDF58;
loc_82FBDFA8:
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

__attribute__((alias("__imp__sub_82FBDFC4"))) PPC_WEAK_FUNC(sub_82FBDFC4);
PPC_FUNC_IMPL(__imp__sub_82FBDFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBDFC8"))) PPC_WEAK_FUNC(sub_82FBDFC8);
PPC_FUNC_IMPL(__imp__sub_82FBDFC8) {
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
	// addi r10,r11,15332
	ctx.r10.s64 = ctx.r11.s64 + 15332;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fbe010
	if (ctx.cr6.eq) goto loc_82FBE010;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// bl 0x82fbf870
	ctx.lr = 0x82FBE008;
	sub_82FBF870(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_82FBE010:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,14660
	ctx.r10.s64 = ctx.r11.s64 + 14660;
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

__attribute__((alias("__imp__sub_82FBE034"))) PPC_WEAK_FUNC(sub_82FBE034);
PPC_FUNC_IMPL(__imp__sub_82FBE034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE038"))) PPC_WEAK_FUNC(sub_82FBE038);
PPC_FUNC_IMPL(__imp__sub_82FBE038) {
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
	// bl 0x82fbde50
	ctx.lr = 0x82FBE048;
	sub_82FBDE50(ctx, base);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE05C"))) PPC_WEAK_FUNC(sub_82FBE05C);
PPC_FUNC_IMPL(__imp__sub_82FBE05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE060"))) PPC_WEAK_FUNC(sub_82FBE060);
PPC_FUNC_IMPL(__imp__sub_82FBE060) {
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
	// bl 0x82fbde50
	ctx.lr = 0x82FBE078;
	sub_82FBDE50(ctx, base);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FBE098"))) PPC_WEAK_FUNC(sub_82FBE098);
PPC_FUNC_IMPL(__imp__sub_82FBE098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FBE0A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBE0C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbe0fc
	if (ctx.cr6.eq) goto loc_82FBE0FC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fbdeb0
	ctx.lr = 0x82FBE0DC;
	sub_82FBDEB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe0fc
	if (ctx.cr6.eq) goto loc_82FBE0FC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82FBE0FC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBE10C"))) PPC_WEAK_FUNC(sub_82FBE10C);
PPC_FUNC_IMPL(__imp__sub_82FBE10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE110"))) PPC_WEAK_FUNC(sub_82FBE110);
PPC_FUNC_IMPL(__imp__sub_82FBE110) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82FBE13C;
	sub_82CB16F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82FBE15C;
	sub_82CB1160(ctx, base);
	// lbz r9,59(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 59);
	// stb r9,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r9.u8);
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lbz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// stb r8,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r8.u8);
	// lwz r7,80(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lwz r6,84(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r6,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82FBE19C"))) PPC_WEAK_FUNC(sub_82FBE19C);
PPC_FUNC_IMPL(__imp__sub_82FBE19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE1A0"))) PPC_WEAK_FUNC(sub_82FBE1A0);
PPC_FUNC_IMPL(__imp__sub_82FBE1A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82fbe1e8
	if (!ctx.cr6.eq) goto loc_82FBE1E8;
	// lbz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82fbe1e0
	if (ctx.cr6.eq) goto loc_82FBE1E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBE1C0:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lbz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x82fbe1c0
	if (ctx.cr6.lt) goto loc_82FBE1C0;
loc_82FBE1E0:
	// stb r10,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// b 0x82fbe1f0
	goto loc_82FBE1F0;
loc_82FBE1E8:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
loc_82FBE1F0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,48000
	ctx.r9.u64 = ctx.r11.u64 | 48000;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE208"))) PPC_WEAK_FUNC(sub_82FBE208);
PPC_FUNC_IMPL(__imp__sub_82FBE208) {
	PPC_FUNC_PROLOGUE();
	// b 0x82fbd710
	sub_82FBD710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBE20C"))) PPC_WEAK_FUNC(sub_82FBE20C);
PPC_FUNC_IMPL(__imp__sub_82FBE20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE210"))) PPC_WEAK_FUNC(sub_82FBE210);
PPC_FUNC_IMPL(__imp__sub_82FBE210) {
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

__attribute__((alias("__imp__sub_82FBE22C"))) PPC_WEAK_FUNC(sub_82FBE22C);
PPC_FUNC_IMPL(__imp__sub_82FBE22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE230"))) PPC_WEAK_FUNC(sub_82FBE230);
PPC_FUNC_IMPL(__imp__sub_82FBE230) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
loc_82FBE238:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82fbe25c
	if (!ctx.cr6.eq) goto loc_82FBE25C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x82fbe238
	if (ctx.cr6.lt) goto loc_82FBE238;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FBE25C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE26C"))) PPC_WEAK_FUNC(sub_82FBE26C);
PPC_FUNC_IMPL(__imp__sub_82FBE26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE270"))) PPC_WEAK_FUNC(sub_82FBE270);
PPC_FUNC_IMPL(__imp__sub_82FBE270) {
	PPC_FUNC_PROLOGUE();
	// lbz r9,268(r13)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fbe2a8
	if (ctx.cr6.eq) goto loc_82FBE2A8;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82FBE28C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fbe2b8
	if (ctx.cr6.eq) goto loc_82FBE2B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82fbe28c
	if (ctx.cr6.lt) goto loc_82FBE28C;
loc_82FBE2A8:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
loc_82FBE2B8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE2D8"))) PPC_WEAK_FUNC(sub_82FBE2D8);
PPC_FUNC_IMPL(__imp__sub_82FBE2D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE2E0"))) PPC_WEAK_FUNC(sub_82FBE2E0);
PPC_FUNC_IMPL(__imp__sub_82FBE2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82fbe2fc
	if (!ctx.cr6.lt) goto loc_82FBE2FC;
	// addi r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 33;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82FBE2FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE308"))) PPC_WEAK_FUNC(sub_82FBE308);
PPC_FUNC_IMPL(__imp__sub_82FBE308) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lwz r9,140(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE320"))) PPC_WEAK_FUNC(sub_82FBE320);
PPC_FUNC_IMPL(__imp__sub_82FBE320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FBE328;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82FBE348;
	sub_82CB1160(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBE364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbe388
	if (ctx.cr6.lt) goto loc_82FBE388;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fbe1a0
	ctx.lr = 0x82FBE378;
	sub_82FBE1A0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fcbe48
	ctx.lr = 0x82FBE388;
	sub_82FCBE48(ctx, base);
loc_82FBE388:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBE390"))) PPC_WEAK_FUNC(sub_82FBE390);
PPC_FUNC_IMPL(__imp__sub_82FBE390) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBE3B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbe3e0
	if (ctx.cr6.lt) goto loc_82FBE3E0;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe3e0
	if (ctx.cr6.eq) goto loc_82FBE3E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82FBE3E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBE3E0:
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

__attribute__((alias("__imp__sub_82FBE3F4"))) PPC_WEAK_FUNC(sub_82FBE3F4);
PPC_FUNC_IMPL(__imp__sub_82FBE3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE3F8"))) PPC_WEAK_FUNC(sub_82FBE3F8);
PPC_FUNC_IMPL(__imp__sub_82FBE3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FBE400;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBE410;
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
	// beq cr6,0x82fbe438
	if (ctx.cr6.eq) goto loc_82FBE438;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbe44c
	if (ctx.cr6.eq) goto loc_82FBE44C;
loc_82FBE438:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBE440;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FBE44C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,76(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBE46C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fbe488
	if (ctx.cr6.lt) goto loc_82FBE488;
	// lbz r10,61(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 61);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r8,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r8.u8);
loc_82FBE488:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fbe4d4
	if (ctx.cr6.eq) goto loc_82FBE4D4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fbe4d4
	if (!ctx.cr6.eq) goto loc_82FBE4D4;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbe4d4
	if (!ctx.cr0.eq) goto loc_82FBE4D4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FBE4CC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBE4D4;
	__imp__KfLowerIrql(ctx, base);
loc_82FBE4D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBE4E0"))) PPC_WEAK_FUNC(sub_82FBE4E0);
PPC_FUNC_IMPL(__imp__sub_82FBE4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lbz r10,268(r13)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// lwz r11,20324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20324);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE4FC"))) PPC_WEAK_FUNC(sub_82FBE4FC);
PPC_FUNC_IMPL(__imp__sub_82FBE4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE500"))) PPC_WEAK_FUNC(sub_82FBE500);
PPC_FUNC_IMPL(__imp__sub_82FBE500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FBE508;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,20324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20324);
	// lbz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r7,140(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// and r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ctx.r7.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82fbe550
	if (ctx.cr6.eq) goto loc_82FBE550;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBE548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbe5e8
	if (ctx.cr6.lt) goto loc_82FBE5E8;
loc_82FBE550:
	// addi r29,r31,76
	ctx.r29.s64 = ctx.r31.s64 + 76;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fcd000
	ctx.lr = 0x82FBE564;
	sub_82FCD000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbe5e8
	if (ctx.cr6.lt) goto loc_82FBE5E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fcc4a8
	ctx.lr = 0x82FBE578;
	sub_82FCC4A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbe5e8
	if (ctx.cr6.lt) goto loc_82FBE5E8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBE598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fbe5e4
	if (ctx.cr6.lt) goto loc_82FBE5E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82fc00b8
	ctx.lr = 0x82FBE5B0;
	sub_82FC00B8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fbe5e4
	if (!ctx.cr6.eq) goto loc_82FBE5E4;
	// lbz r11,61(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 61);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fbe5e4
	if (!ctx.cr6.eq) goto loc_82FBE5E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fcd348
	ctx.lr = 0x82FBE5DC;
	sub_82FCD348(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82FBE5E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82FBE5E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBE5F0"))) PPC_WEAK_FUNC(sub_82FBE5F0);
PPC_FUNC_IMPL(__imp__sub_82FBE5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82fbe614
	if (!ctx.cr6.lt) goto loc_82FBE614;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// addi r9,r11,33
	ctx.r9.s64 = ctx.r11.s64 + 33;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20324);
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82fbe61c
	goto loc_82FBE61C;
loc_82FBE614:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
loc_82FBE61C:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lfs f13,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FBE63C"))) PPC_WEAK_FUNC(sub_82FBE63C);
PPC_FUNC_IMPL(__imp__sub_82FBE63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE640"))) PPC_WEAK_FUNC(sub_82FBE640);
PPC_FUNC_IMPL(__imp__sub_82FBE640) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82FBE65C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82fbe65c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FBE65C;
	// bl 0x82fbe1a0
	ctx.lr = 0x82FBE66C;
	sub_82FBE1A0(ctx, base);
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r9,20324(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20324);
	// addi r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 + 12;
loc_82FBE684:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82fbe6f8
	if (!ctx.cr6.eq) goto loc_82FBE6F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x82fbe684
	if (ctx.cr6.lt) goto loc_82FBE684;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBE6A4:
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// lbz r11,57(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbe6c8
	if (!ctx.cr6.eq) goto loc_82FBE6C8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82FBE6C8:
	// stb r11,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r11.u8);
	// lbz r11,58(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbe6dc
	if (!ctx.cr6.eq) goto loc_82FBE6DC;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82FBE6DC:
	// stb r11,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, ctx.r11.u8);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r10,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82FBE6F8:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82fbe6a4
	goto loc_82FBE6A4;
}

