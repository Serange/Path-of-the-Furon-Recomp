#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827EF0BC"))) PPC_WEAK_FUNC(sub_827EF0BC);
PPC_FUNC_IMPL(__imp__sub_827EF0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EF0C0"))) PPC_WEAK_FUNC(sub_827EF0C0);
PPC_FUNC_IMPL(__imp__sub_827EF0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r10,r11,-5024
	ctx.r10.s64 = ctx.r11.s64 + -5024;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827ef110
	if (!ctx.cr6.eq) goto loc_827EF110;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// bne cr6,0x827ef0e4
	if (!ctx.cr6.eq) goto loc_827EF0E4;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r3,r11,-6392
	ctx.r3.s64 = ctx.r11.s64 + -6392;
	// blr 
	return;
loc_827EF0E4:
	// addi r11,r5,-32
	ctx.r11.s64 = ctx.r5.s64 + -32;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x827ef110
	if (ctx.cr6.eq) goto loc_827EF110;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r3,r11,-5944
	ctx.r3.s64 = ctx.r11.s64 + -5944;
	// blr 
	return;
loc_827EF110:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r10,r11,-4832
	ctx.r10.s64 = ctx.r11.s64 + -4832;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827ef160
	if (!ctx.cr6.eq) goto loc_827EF160;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// bne cr6,0x827ef134
	if (!ctx.cr6.eq) goto loc_827EF134;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r3,r11,-5480
	ctx.r3.s64 = ctx.r11.s64 + -5480;
	// blr 
	return;
loc_827EF134:
	// addi r11,r5,-32
	ctx.r11.s64 = ctx.r5.s64 + -32;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x827ef160
	if (ctx.cr6.eq) goto loc_827EF160;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r3,r11,-5256
	ctx.r3.s64 = ctx.r11.s64 + -5256;
	// blr 
	return;
loc_827EF160:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r10,r11,-4608
	ctx.r10.s64 = ctx.r11.s64 + -4608;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827ef1b0
	if (!ctx.cr6.eq) goto loc_827EF1B0;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// bne cr6,0x827ef184
	if (!ctx.cr6.eq) goto loc_827EF184;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r3,r11,-6200
	ctx.r3.s64 = ctx.r11.s64 + -6200;
	// blr 
	return;
loc_827EF184:
	// addi r11,r5,-32
	ctx.r11.s64 = ctx.r5.s64 + -32;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x827ef1b0
	if (ctx.cr6.eq) goto loc_827EF1B0;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r3,r11,-5736
	ctx.r3.s64 = ctx.r11.s64 + -5736;
	// blr 
	return;
loc_827EF1B0:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r10,r11,-3496
	ctx.r10.s64 = ctx.r11.s64 + -3496;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// bne cr6,0x827ef1d4
	if (!ctx.cr6.eq) goto loc_827EF1D4;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r3,r11,-3120
	ctx.r3.s64 = ctx.r11.s64 + -3120;
	// blr 
	return;
loc_827EF1D4:
	// addi r11,r5,-32
	ctx.r11.s64 = ctx.r5.s64 + -32;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r3,r11,-2704
	ctx.r3.s64 = ctx.r11.s64 + -2704;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EF200"))) PPC_WEAK_FUNC(sub_827EF200);
PPC_FUNC_IMPL(__imp__sub_827EF200) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EF208"))) PPC_WEAK_FUNC(sub_827EF208);
PPC_FUNC_IMPL(__imp__sub_827EF208) {
	PPC_FUNC_PROLOGUE();
loc_827EF208:
	// b 0x827ef208
	goto loc_827EF208;
}

__attribute__((alias("__imp__sub_827EF20C"))) PPC_WEAK_FUNC(sub_827EF20C);
PPC_FUNC_IMPL(__imp__sub_827EF20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EF210"))) PPC_WEAK_FUNC(sub_827EF210);
PPC_FUNC_IMPL(__imp__sub_827EF210) {
	PPC_FUNC_PROLOGUE();
loc_827EF210:
	// b 0x827ef210
	goto loc_827EF210;
}

__attribute__((alias("__imp__sub_827EF214"))) PPC_WEAK_FUNC(sub_827EF214);
PPC_FUNC_IMPL(__imp__sub_827EF214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EF218"))) PPC_WEAK_FUNC(sub_827EF218);
PPC_FUNC_IMPL(__imp__sub_827EF218) {
	PPC_FUNC_PROLOGUE();
loc_827EF218:
	// b 0x827ef218
	goto loc_827EF218;
}

__attribute__((alias("__imp__sub_827EF21C"))) PPC_WEAK_FUNC(sub_827EF21C);
PPC_FUNC_IMPL(__imp__sub_827EF21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EF220"))) PPC_WEAK_FUNC(sub_827EF220);
PPC_FUNC_IMPL(__imp__sub_827EF220) {
	PPC_FUNC_PROLOGUE();
loc_827EF220:
	// b 0x827ef220
	goto loc_827EF220;
}

__attribute__((alias("__imp__sub_827EF224"))) PPC_WEAK_FUNC(sub_827EF224);
PPC_FUNC_IMPL(__imp__sub_827EF224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EF228"))) PPC_WEAK_FUNC(sub_827EF228);
PPC_FUNC_IMPL(__imp__sub_827EF228) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EF230"))) PPC_WEAK_FUNC(sub_827EF230);
PPC_FUNC_IMPL(__imp__sub_827EF230) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EF240"))) PPC_WEAK_FUNC(sub_827EF240);
PPC_FUNC_IMPL(__imp__sub_827EF240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EF258"))) PPC_WEAK_FUNC(sub_827EF258);
PPC_FUNC_IMPL(__imp__sub_827EF258) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x827ef34c
	if (!ctx.cr6.gt) goto loc_827EF34C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,-3
	ctx.r6.s64 = ctx.r11.s64 + -3;
	// bl 0x827eaa70
	ctx.lr = 0x827EF27C;
	sub_827EAA70(ctx, base);
	// bl 0x827eaa70
	ctx.lr = 0x827EF280;
	sub_827EAA70(ctx, base);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x827ef32c
	if (!ctx.cr6.gt) goto loc_827EF32C;
	// addi r5,r6,-2
	ctx.r5.s64 = ctx.r6.s64 + -2;
	// li r6,8
	ctx.r6.s64 = 8;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x827ef2a8
	if (ctx.cr6.lt) goto loc_827EF2A8;
loc_827EF298:
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x827ef298
	if (!ctx.cr6.lt) goto loc_827EF298;
loc_827EF2A8:
	// rlwinm r11,r6,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// and r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r4,r8,1
	ctx.r4.u64 = ctx.r8.u64 ^ 1;
	// bl 0x827eaa70
	ctx.lr = 0x827EF2C0;
	sub_827EAA70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827eaa70
	ctx.lr = 0x827EF2C8;
	sub_827EAA70(ctx, base);
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// and r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 & ctx.r5.u64;
	// cntlzw r4,r7
	ctx.r4.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// bl 0x827eaa70
	ctx.lr = 0x827EF2E0;
	sub_827EAA70(ctx, base);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// ble cr6,0x827ef328
	if (!ctx.cr6.gt) goto loc_827EF328;
loc_827EF2E8:
	// rlwinm r11,r6,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// and r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r4,r8,1
	ctx.r4.u64 = ctx.r8.u64 ^ 1;
	// bl 0x827eaa70
	ctx.lr = 0x827EF300;
	sub_827EAA70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827eaa70
	ctx.lr = 0x827EF308;
	sub_827EAA70(ctx, base);
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// and r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 & ctx.r5.u64;
	// cntlzw r4,r7
	ctx.r4.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// bl 0x827eaa70
	ctx.lr = 0x827EF320;
	sub_827EAA70(ctx, base);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bgt cr6,0x827ef2e8
	if (ctx.cr6.gt) goto loc_827EF2E8;
loc_827EF328:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_827EF32C:
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
	// bl 0x827eaa70
	ctx.lr = 0x827EF334;
	sub_827EAA70(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827eaa70
	ctx.lr = 0x827EF33C;
	sub_827EAA70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827EF34C:
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// subfic r11,r6,1
	ctx.xer.ca = ctx.r6.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r6.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r4,r10,31
	ctx.r4.u64 = ctx.r10.u32 & 0x1;
	// bl 0x827eaa70
	ctx.lr = 0x827EF360;
	sub_827EAA70(ctx, base);
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
	// bl 0x827eaa70
	ctx.lr = 0x827EF368;
	sub_827EAA70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EF378"))) PPC_WEAK_FUNC(sub_827EF378);
PPC_FUNC_IMPL(__imp__sub_827EF378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x827ef398
	if (!ctx.cr6.eq) goto loc_827EF398;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_827EF398:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EF3D0"))) PPC_WEAK_FUNC(sub_827EF3D0);
PPC_FUNC_IMPL(__imp__sub_827EF3D0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x827ef4c4
	if (!ctx.cr6.gt) goto loc_827EF4C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
	// bl 0x827ef378
	ctx.lr = 0x827EF3F4;
	sub_827EF378(ctx, base);
	// bl 0x827ef378
	ctx.lr = 0x827EF3F8;
	sub_827EF378(ctx, base);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x827ef4a4
	if (!ctx.cr6.gt) goto loc_827EF4A4;
	// addi r7,r8,-2
	ctx.r7.s64 = ctx.r8.s64 + -2;
	// li r8,8
	ctx.r8.s64 = 8;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// blt cr6,0x827ef420
	if (ctx.cr6.lt) goto loc_827EF420;
loc_827EF410:
	// subf r7,r8,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r8.s64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x827ef410
	if (!ctx.cr6.lt) goto loc_827EF410;
loc_827EF420:
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// and r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 & ctx.r7.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r4,r6,1
	ctx.r4.u64 = ctx.r6.u64 ^ 1;
	// bl 0x827ef378
	ctx.lr = 0x827EF438;
	sub_827EF378(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827ef378
	ctx.lr = 0x827EF440;
	sub_827EF378(ctx, base);
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// and r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 & ctx.r7.u64;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// bl 0x827ef378
	ctx.lr = 0x827EF458;
	sub_827EF378(ctx, base);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// ble cr6,0x827ef4a0
	if (!ctx.cr6.gt) goto loc_827EF4A0;
loc_827EF460:
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// and r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 & ctx.r7.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r4,r6,1
	ctx.r4.u64 = ctx.r6.u64 ^ 1;
	// bl 0x827ef378
	ctx.lr = 0x827EF478;
	sub_827EF378(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827ef378
	ctx.lr = 0x827EF480;
	sub_827EF378(ctx, base);
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// and r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 & ctx.r7.u64;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// bl 0x827ef378
	ctx.lr = 0x827EF498;
	sub_827EF378(ctx, base);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bgt cr6,0x827ef460
	if (ctx.cr6.gt) goto loc_827EF460;
loc_827EF4A0:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_827EF4A4:
	// clrlwi r4,r8,31
	ctx.r4.u64 = ctx.r8.u32 & 0x1;
	// bl 0x827ef378
	ctx.lr = 0x827EF4AC;
	sub_827EF378(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827ef378
	ctx.lr = 0x827EF4B4;
	sub_827EF378(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827EF4C4:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subfic r11,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r8.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r4,r10,31
	ctx.r4.u64 = ctx.r10.u32 & 0x1;
	// bl 0x827ef378
	ctx.lr = 0x827EF4D8;
	sub_827EF378(ctx, base);
	// clrlwi r4,r8,31
	ctx.r4.u64 = ctx.r8.u32 & 0x1;
	// bl 0x827ef378
	ctx.lr = 0x827EF4E0;
	sub_827EF378(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EF4F0"))) PPC_WEAK_FUNC(sub_827EF4F0);
PPC_FUNC_IMPL(__imp__sub_827EF4F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x827ef534
	if (!ctx.cr6.eq) goto loc_827EF534;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r7,r11,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r6,r11,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r5,r11,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stb r6,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r6.u8);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stb r5,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r5.u8);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_827EF534:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EF56C"))) PPC_WEAK_FUNC(sub_827EF56C);
PPC_FUNC_IMPL(__imp__sub_827EF56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EF570"))) PPC_WEAK_FUNC(sub_827EF570);
PPC_FUNC_IMPL(__imp__sub_827EF570) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x827ef65c
	if (!ctx.cr6.gt) goto loc_827EF65C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-3
	ctx.r31.s64 = ctx.r11.s64 + -3;
	// bl 0x827ef4f0
	ctx.lr = 0x827EF59C;
	sub_827EF4F0(ctx, base);
	// bl 0x827ef4f0
	ctx.lr = 0x827EF5A0;
	sub_827EF4F0(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// ble cr6,0x827ef64c
	if (!ctx.cr6.gt) goto loc_827EF64C;
	// addi r30,r31,-2
	ctx.r30.s64 = ctx.r31.s64 + -2;
	// li r31,8
	ctx.r31.s64 = 8;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x827ef5c8
	if (ctx.cr6.lt) goto loc_827EF5C8;
loc_827EF5B8:
	// subf r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x827ef5b8
	if (!ctx.cr6.lt) goto loc_827EF5B8;
loc_827EF5C8:
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r4,r8,1
	ctx.r4.u64 = ctx.r8.u64 ^ 1;
	// bl 0x827ef4f0
	ctx.lr = 0x827EF5E0;
	sub_827EF4F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827ef4f0
	ctx.lr = 0x827EF5E8;
	sub_827EF4F0(ctx, base);
	// rlwinm r31,r31,30,2,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// and r7,r31,r30
	ctx.r7.u64 = ctx.r31.u64 & ctx.r30.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// bl 0x827ef4f0
	ctx.lr = 0x827EF600;
	sub_827EF4F0(ctx, base);
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// ble cr6,0x827ef648
	if (!ctx.cr6.gt) goto loc_827EF648;
loc_827EF608:
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r4,r8,1
	ctx.r4.u64 = ctx.r8.u64 ^ 1;
	// bl 0x827ef4f0
	ctx.lr = 0x827EF620;
	sub_827EF4F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827ef4f0
	ctx.lr = 0x827EF628;
	sub_827EF4F0(ctx, base);
	// rlwinm r31,r31,30,2,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// and r7,r31,r30
	ctx.r7.u64 = ctx.r31.u64 & ctx.r30.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// bl 0x827ef4f0
	ctx.lr = 0x827EF640;
	sub_827EF4F0(ctx, base);
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bgt cr6,0x827ef608
	if (ctx.cr6.gt) goto loc_827EF608;
loc_827EF648:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_827EF64C:
	// clrlwi r4,r31,31
	ctx.r4.u64 = ctx.r31.u32 & 0x1;
	// bl 0x827ef4f0
	ctx.lr = 0x827EF654;
	sub_827EF4F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x827ef674
	goto loc_827EF674;
loc_827EF65C:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// subfic r11,r31,1
	ctx.xer.ca = ctx.r31.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r31.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r4,r10,31
	ctx.r4.u64 = ctx.r10.u32 & 0x1;
	// bl 0x827ef4f0
	ctx.lr = 0x827EF670;
	sub_827EF4F0(ctx, base);
	// clrlwi r4,r31,31
	ctx.r4.u64 = ctx.r31.u32 & 0x1;
loc_827EF674:
	// bl 0x827ef4f0
	ctx.lr = 0x827EF678;
	sub_827EF4F0(ctx, base);
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

__attribute__((alias("__imp__sub_827EF690"))) PPC_WEAK_FUNC(sub_827EF690);
PPC_FUNC_IMPL(__imp__sub_827EF690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827EF6A4"))) PPC_WEAK_FUNC(sub_827EF6A4);
PPC_FUNC_IMPL(__imp__sub_827EF6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EF6A8"))) PPC_WEAK_FUNC(sub_827EF6A8);
PPC_FUNC_IMPL(__imp__sub_827EF6A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827EF6BC"))) PPC_WEAK_FUNC(sub_827EF6BC);
PPC_FUNC_IMPL(__imp__sub_827EF6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EF6C0"))) PPC_WEAK_FUNC(sub_827EF6C0);
PPC_FUNC_IMPL(__imp__sub_827EF6C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827EF6E8"))) PPC_WEAK_FUNC(sub_827EF6E8);
PPC_FUNC_IMPL(__imp__sub_827EF6E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EF6EC"))) PPC_WEAK_FUNC(sub_827EF6EC);
PPC_FUNC_IMPL(__imp__sub_827EF6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EF6F0"))) PPC_WEAK_FUNC(sub_827EF6F0);
PPC_FUNC_IMPL(__imp__sub_827EF6F0) {
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
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827ef7dc
	if (!ctx.cr6.lt) goto loc_827EF7DC;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// addi r11,r11,25296
	ctx.r11.s64 = ctx.r11.s64 + 25296;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827ef7dc
	if (ctx.cr6.eq) goto loc_827EF7DC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827ef7dc
	if (ctx.cr6.eq) goto loc_827EF7DC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// lis r6,-32129
	ctx.r6.s64 = -2105606144;
	// addi r7,r7,-2416
	ctx.r7.s64 = ctx.r7.s64 + -2416;
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// addi r6,r6,-2392
	ctx.r6.s64 = ctx.r6.s64 + -2392;
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// std r10,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r10.u64);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// beq cr6,0x827ef77c
	if (ctx.cr6.eq) goto loc_827EF77C;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// addi r9,r10,-2368
	ctx.r9.s64 = ctx.r10.s64 + -2368;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_827EF77C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x827ed9c8
	ctx.lr = 0x827EF7A0;
	sub_827ED9C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x827ef7e0
	if (ctx.cr6.eq) goto loc_827EF7E0;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x827ef7dc
	if (ctx.cr6.eq) goto loc_827EF7DC;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x827ef7c8
	if (!ctx.cr6.eq) goto loc_827EF7C8;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x827ef7e0
	goto loc_827EF7E0;
loc_827EF7C8:
	// cmpwi cr6,r3,-101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -101, ctx.xer);
	// li r3,-3
	ctx.r3.s64 = -3;
	// beq cr6,0x827ef7e0
	if (ctx.cr6.eq) goto loc_827EF7E0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x827ef7e0
	goto loc_827EF7E0;
loc_827EF7DC:
	// li r3,-10
	ctx.r3.s64 = -10;
loc_827EF7E0:
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

__attribute__((alias("__imp__sub_827EF7F8"))) PPC_WEAK_FUNC(sub_827EF7F8);
PPC_FUNC_IMPL(__imp__sub_827EF7F8) {
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
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827ef8e0
	if (!ctx.cr6.lt) goto loc_827EF8E0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827ef8e0
	if (ctx.cr6.eq) goto loc_827EF8E0;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ef8e0
	if (ctx.cr6.eq) goto loc_827EF8E0;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ef8e0
	if (ctx.cr6.eq) goto loc_827EF8E0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-32129
	ctx.r6.s64 = -2105606144;
	// lis r30,-32129
	ctx.r30.s64 = -2105606144;
	// addi r6,r6,-2416
	ctx.r6.s64 = ctx.r6.s64 + -2416;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r30,r30,-2392
	ctx.r30.s64 = ctx.r30.s64 + -2392;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// beq cr6,0x827ef884
	if (ctx.cr6.eq) goto loc_827EF884;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r10,r11,-2368
	ctx.r10.s64 = ctx.r11.s64 + -2368;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_827EF884:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827eddf0
	ctx.lr = 0x827EF8A4;
	sub_827EDDF0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x827ef8e4
	if (ctx.cr6.eq) goto loc_827EF8E4;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x827ef8e0
	if (ctx.cr6.eq) goto loc_827EF8E0;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x827ef8cc
	if (!ctx.cr6.eq) goto loc_827EF8CC;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x827ef8e4
	goto loc_827EF8E4;
loc_827EF8CC:
	// cmpwi cr6,r3,-101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -101, ctx.xer);
	// li r3,-3
	ctx.r3.s64 = -3;
	// beq cr6,0x827ef8e4
	if (ctx.cr6.eq) goto loc_827EF8E4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x827ef8e4
	goto loc_827EF8E4;
loc_827EF8E0:
	// li r3,-10
	ctx.r3.s64 = -10;
loc_827EF8E4:
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

__attribute__((alias("__imp__sub_827EF8FC"))) PPC_WEAK_FUNC(sub_827EF8FC);
PPC_FUNC_IMPL(__imp__sub_827EF8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EF900"))) PPC_WEAK_FUNC(sub_827EF900);
PPC_FUNC_IMPL(__imp__sub_827EF900) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x827EF908;
	__savegprlr_21(ctx, base);
	// add r26,r3,r4
	ctx.r26.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r24,r26,-13
	ctx.r24.s64 = ctx.r26.s64 + -13;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 + 3;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,32
	ctx.r25.s64 = 32;
	// li r23,255
	ctx.r23.s64 = 255;
loc_827EF928:
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// blt cr6,0x827ef944
	if (ctx.cr6.lt) goto loc_827EF944;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// blt cr6,0x827ef940
	if (ctx.cr6.lt) goto loc_827EF940;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_827EF940:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_827EF944:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x827efce4
	if (!ctx.cr6.lt) goto loc_827EFCE4;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
	// rotlwi r9,r9,6
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// xor r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// rlwinm r9,r4,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// xor r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r31.u64;
	// rlwinm r9,r4,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// xor r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r30.u64;
	// rlwinm r4,r9,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r4,r4,27,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFF;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r9,r7
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// sthx r10,r9,r7
	PPC_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u16);
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827ef928
	if (ctx.cr6.eq) goto loc_827EF928;
loc_827EF9A8:
	// cmplwi cr6,r9,49151
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 49151, ctx.xer);
	// bgt cr6,0x827ef928
	if (ctx.cr6.gt) goto loc_827EF928;
	// subf r31,r3,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x827ef928
	if (ctx.cr6.gt) goto loc_827EF928;
	// subf r30,r9,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplwi cr6,r9,2048
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2048, ctx.xer);
	// ble cr6,0x827efa28
	if (!ctx.cr6.gt) goto loc_827EFA28;
	// lbz r22,3(r30)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r21,0(r29)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x827efa28
	if (ctx.cr6.eq) goto loc_827EFA28;
	// clrlwi r9,r4,21
	ctx.r9.u64 = ctx.r4.u32 & 0x7FF;
	// xori r4,r9,16415
	ctx.r4.u64 = ctx.r9.u64 ^ 16415;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r9,r7
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// sthx r10,r9,r7
	PPC_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u16);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827ef928
	if (ctx.cr6.eq) goto loc_827EF928;
	// cmplwi cr6,r9,49151
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 49151, ctx.xer);
	// bgt cr6,0x827ef928
	if (ctx.cr6.gt) goto loc_827EF928;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x827ef928
	if (ctx.cr6.gt) goto loc_827EF928;
	// subf r30,r9,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplwi cr6,r9,2048
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2048, ctx.xer);
	// ble cr6,0x827efa28
	if (!ctx.cr6.gt) goto loc_827EFA28;
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ef928
	if (!ctx.cr6.eq) goto loc_827EF928;
loc_827EFA28:
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ef928
	if (!ctx.cr6.eq) goto loc_827EF928;
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ef928
	if (!ctx.cr6.eq) goto loc_827EF928;
	// subf. r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827efacc
	if (ctx.cr0.eq) goto loc_827EFACC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x827efa74
	if (ctx.cr6.gt) goto loc_827EFA74;
	// lbz r4,-2(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + -2);
	// or r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 | ctx.r10.u64;
	// stb r4,-2(r8)
	PPC_STORE_U8(ctx.r8.u32 + -2, ctx.r4.u8);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x827efac8
	goto loc_827EFAC8;
loc_827EFA74:
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// bgt cr6,0x827efa84
	if (ctx.cr6.gt) goto loc_827EFA84;
	// addi r4,r10,253
	ctx.r4.s64 = ctx.r10.s64 + 253;
	// b 0x827efaa0
	goto loc_827EFAA0;
loc_827EFA84:
	// addi r10,r10,237
	ctx.r10.s64 = ctx.r10.s64 + 237;
loc_827EFA88:
	// addi r10,r10,-255
	ctx.r10.s64 = ctx.r10.s64 + -255;
	// stb r27,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r27.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bgt cr6,0x827efa88
	if (ctx.cr6.gt) goto loc_827EFA88;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_827EFAA0:
	// stb r4,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
loc_827EFAA8:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x827efaa8
	if (ctx.cr6.lt) goto loc_827EFAA8;
	// subf r8,r28,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r28.s64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_827EFAC8:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_827EFACC:
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827efbf4
	if (!ctx.cr6.eq) goto loc_827EFBF4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827efbf4
	if (!ctx.cr6.eq) goto loc_827EFBF4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r4,5(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827efbf4
	if (!ctx.cr6.eq) goto loc_827EFBF4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r4,6(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827efbf4
	if (!ctx.cr6.eq) goto loc_827EFBF4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r4,7(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827efbf4
	if (!ctx.cr6.eq) goto loc_827EFBF4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827efbf4
	if (!ctx.cr6.eq) goto loc_827EFBF4;
	// addi r10,r30,9
	ctx.r10.s64 = ctx.r30.s64 + 9;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x827efb70
	if (!ctx.cr6.lt) goto loc_827EFB70;
loc_827EFB50:
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827efb70
	if (!ctx.cr6.eq) goto loc_827EFB70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x827efb50
	if (ctx.cr6.lt) goto loc_827EFB50;
loc_827EFB70:
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// cmplwi cr6,r9,16384
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16384, ctx.xer);
	// bgt cr6,0x827efba0
	if (ctx.cr6.gt) goto loc_827EFBA0;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r10,33
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 33, ctx.xer);
	// bgt cr6,0x827efb94
	if (ctx.cr6.gt) goto loc_827EFB94;
	// addi r9,r10,254
	ctx.r9.s64 = ctx.r10.s64 + 254;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// b 0x827efc5c
	goto loc_827EFC5C;
loc_827EFB94:
	// addi r9,r10,-33
	ctx.r9.s64 = ctx.r10.s64 + -33;
	// stb r25,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r25.u8);
	// b 0x827efbbc
	goto loc_827EFBBC;
loc_827EFBA0:
	// addi r4,r9,-16384
	ctx.r4.s64 = ctx.r9.s64 + -16384;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// ble cr6,0x827efc4c
	if (!ctx.cr6.gt) goto loc_827EFC4C;
	// li r31,16
	ctx.r31.s64 = 16;
	// addi r9,r10,-9
	ctx.r9.s64 = ctx.r10.s64 + -9;
	// rlwimi r31,r4,21,28,28
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0x8) | (ctx.r31.u64 & 0xFFFFFFFFFFFFFFF7);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
loc_827EFBBC:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x827efbe8
	if (!ctx.cr6.gt) goto loc_827EFBE8;
	// addi r8,r9,-256
	ctx.r8.s64 = ctx.r9.s64 + -256;
	// divwu r8,r8,r23
	ctx.r8.u32 = ctx.r8.u32 / ctx.r23.u32;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_827EFBD4:
	// stb r27,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r27.u8);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,-255
	ctx.r9.s64 = ctx.r9.s64 + -255;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x827efbd4
	if (!ctx.cr0.eq) goto loc_827EFBD4;
loc_827EFBE8:
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x827efc64
	goto loc_827EFC64;
loc_827EFBF4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,2048
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2048, ctx.xer);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// bgt cr6,0x827efc2c
	if (ctx.cr6.gt) goto loc_827EFC2C;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// rlwinm r9,r9,29,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0xFF;
	// rlwimi r4,r10,3,0,28
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r4,r4,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFC;
	// stb r4,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// stb r9,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r9.u8);
	// b 0x827efc78
	goto loc_827EFC78;
loc_827EFC2C:
	// cmplwi cr6,r9,16384
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16384, ctx.xer);
	// bgt cr6,0x827efc48
	if (ctx.cr6.gt) goto loc_827EFC48;
	// addi r10,r10,254
	ctx.r10.s64 = ctx.r10.s64 + 254;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// b 0x827efc5c
	goto loc_827EFC5C;
loc_827EFC48:
	// addi r4,r9,-16384
	ctx.r4.s64 = ctx.r9.s64 + -16384;
loc_827EFC4C:
	// addi r9,r10,254
	ctx.r9.s64 = ctx.r10.s64 + 254;
	// rlwinm r31,r4,21,28,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 21) & 0x8;
	// or r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 | ctx.r9.u64;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
loc_827EFC5C:
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
loc_827EFC64:
	// rlwinm r9,r4,2,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFC;
	// rlwinm r4,r4,26,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0xFF;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r4,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
loc_827EFC78:
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x827efce4
	if (!ctx.cr6.lt) goto loc_827EFCE4;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
	// rotlwi r9,r9,6
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// xor r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// rlwinm r9,r4,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// xor r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r31.u64;
	// rlwinm r9,r4,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// xor r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r30.u64;
	// rlwinm r4,r9,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r4,r4,27,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFF;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r9,r7
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// sthx r10,r9,r7
	PPC_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u16);
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827ef9a8
	if (!ctx.cr6.eq) goto loc_827EF9A8;
	// b 0x827ef928
	goto loc_827EF928;
loc_827EFCE4:
	// subf r11,r5,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r5.s64;
	// subf r3,r28,r26
	ctx.r3.s64 = ctx.r26.s64 - ctx.r28.s64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827EFCF4"))) PPC_WEAK_FUNC(sub_827EFCF4);
PPC_FUNC_IMPL(__imp__sub_827EFCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EFCF8"))) PPC_WEAK_FUNC(sub_827EFCF8);
PPC_FUNC_IMPL(__imp__sub_827EFCF8) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,13
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 13, ctx.xer);
	// bgt cr6,0x827efd28
	if (ctx.cr6.gt) goto loc_827EFD28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x827efd3c
	goto loc_827EFD3C;
loc_827EFD28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827ef900
	ctx.lr = 0x827EFD34;
	sub_827EF900(ctx, base);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_827EFD3C:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827efdf0
	if (ctx.cr6.eq) goto loc_827EFDF0;
	// subf r10,r3,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bne cr6,0x827efd6c
	if (!ctx.cr6.eq) goto loc_827EFD6C;
	// cmplwi cr6,r3,238
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 238, ctx.xer);
	// bgt cr6,0x827efd6c
	if (ctx.cr6.gt) goto loc_827EFD6C;
	// addi r10,r3,17
	ctx.r10.s64 = ctx.r3.s64 + 17;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x827efdd4
	goto loc_827EFDD4;
loc_827EFD6C:
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x827efd84
	if (ctx.cr6.gt) goto loc_827EFD84;
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// stb r9,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r9.u8);
	// b 0x827efdd8
	goto loc_827EFDD8;
loc_827EFD84:
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// bgt cr6,0x827efd98
	if (ctx.cr6.gt) goto loc_827EFD98;
	// addi r10,r3,253
	ctx.r10.s64 = ctx.r3.s64 + 253;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x827efdd4
	goto loc_827EFDD4;
loc_827EFD98:
	// addi r10,r3,-18
	ctx.r10.s64 = ctx.r3.s64 + -18;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x827efdd0
	if (!ctx.cr6.gt) goto loc_827EFDD0;
	// addi r9,r10,-256
	ctx.r9.s64 = ctx.r10.s64 + -256;
	// li r4,255
	ctx.r4.s64 = 255;
	// divwu r9,r9,r4
	ctx.r9.u32 = ctx.r9.u32 / ctx.r4.u32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_827EFDBC:
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,-255
	ctx.r10.s64 = ctx.r10.s64 + -255;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x827efdbc
	if (!ctx.cr0.eq) goto loc_827EFDBC;
loc_827EFDD0:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_827EFDD4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_827EFDD8:
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x827efdd8
	if (!ctx.cr0.eq) goto loc_827EFDD8;
loc_827EFDF0:
	// li r10,17
	ctx.r10.s64 = 17;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_827EFE30"))) PPC_WEAK_FUNC(sub_827EFE30);
PPC_FUNC_IMPL(__imp__sub_827EFE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r9,256
	ctx.r9.s64 = 256;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,17
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 17, ctx.xer);
	// ble cr6,0x827efe90
	if (!ctx.cr6.gt) goto loc_827EFE90;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r8,-17
	ctx.r8.s64 = ctx.r8.s64 + -17;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfc r7,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r4,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFE00;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
loc_827EFE78:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x827efe78
	if (!ctx.cr0.eq) goto loc_827EFE78;
loc_827EFE90:
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r4,r8,32768
	ctx.r4.u64 = ctx.r8.u64 | 32768;
loc_827EFE98:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r9,767
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 767, ctx.xer);
	// bgt cr6,0x827f18a4
	if (ctx.cr6.gt) goto loc_827F18A4;
loc_827EFEAC:
	// lis r12,-32129
	ctx.r12.s64 = -2105606144;
	// addi r12,r12,-316
	ctx.r12.s64 = ctx.r12.s64 + -316;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_827F14A4;
	case 1:
		goto loc_827F14D0;
	case 2:
		goto loc_827F14F4;
	case 3:
		goto loc_827F1518;
	case 4:
		goto loc_827F153C;
	case 5:
		goto loc_827F1568;
	case 6:
		goto loc_827F158C;
	case 7:
		goto loc_827F15B0;
	case 8:
		goto loc_827F15D4;
	case 9:
		goto loc_827F1600;
	case 10:
		goto loc_827F1624;
	case 11:
		goto loc_827F1648;
	case 12:
		goto loc_827F166C;
	case 13:
		goto loc_827F1698;
	case 14:
		goto loc_827F16BC;
	case 15:
		goto loc_827F16E0;
	case 16:
		goto loc_827F1704;
	case 17:
		goto loc_827F1864;
	case 18:
		goto loc_827F18D8;
	case 19:
		goto loc_827F191C;
	case 20:
		goto loc_827F1968;
	case 21:
		goto loc_827F19BC;
	case 22:
		goto loc_827F1A18;
	case 23:
		goto loc_827F1A7C;
	case 24:
		goto loc_827F17B4;
	case 25:
		goto loc_827F1AE8;
	case 26:
		goto loc_827F1B20;
	case 27:
		goto loc_827F1B68;
	case 28:
		goto loc_827F1BB8;
	case 29:
		goto loc_827F1C10;
	case 30:
		goto loc_827F1C70;
	case 31:
		goto loc_827F1CD8;
	case 32:
		goto loc_827F1D48;
	case 33:
		goto loc_827F1EB8;
	case 34:
		goto loc_827F1EF0;
	case 35:
		goto loc_827F1F34;
	case 36:
		goto loc_827F1F80;
	case 37:
		goto loc_827F1FD4;
	case 38:
		goto loc_827F2030;
	case 39:
		goto loc_827F2094;
	case 40:
		goto loc_827F2100;
	case 41:
		goto loc_827F2174;
	case 42:
		goto loc_827F21F0;
	case 43:
		goto loc_827F2274;
	case 44:
		goto loc_827F2300;
	case 45:
		goto loc_827F2394;
	case 46:
		goto loc_827F2430;
	case 47:
		goto loc_827F24D4;
	case 48:
		goto loc_827F2580;
	case 49:
		goto loc_827F2634;
	case 50:
		goto loc_827F26F0;
	case 51:
		goto loc_827F27B4;
	case 52:
		goto loc_827F2880;
	case 53:
		goto loc_827F2954;
	case 54:
		goto loc_827F2A30;
	case 55:
		goto loc_827F2B14;
	case 56:
		goto loc_827F2C00;
	case 57:
		goto loc_827F2CF4;
	case 58:
		goto loc_827F2DF0;
	case 59:
		goto loc_827F2EF4;
	case 60:
		goto loc_827F3000;
	case 61:
		goto loc_827F3114;
	case 62:
		goto loc_827F3230;
	case 63:
		goto loc_827F3354;
	case 64:
		goto loc_827F3480;
	case 65:
		goto loc_827F34B4;
	case 66:
		goto loc_827F34E0;
	case 67:
		goto loc_827F350C;
	case 68:
		goto loc_827F3538;
	case 69:
		goto loc_827F356C;
	case 70:
		goto loc_827F3598;
	case 71:
		goto loc_827F35C4;
	case 72:
		goto loc_827F35F0;
	case 73:
		goto loc_827F3624;
	case 74:
		goto loc_827F3650;
	case 75:
		goto loc_827F367C;
	case 76:
		goto loc_827F36A8;
	case 77:
		goto loc_827F36DC;
	case 78:
		goto loc_827F3708;
	case 79:
		goto loc_827F3734;
	case 80:
		goto loc_827F3760;
	case 81:
		goto loc_827F3794;
	case 82:
		goto loc_827F37C0;
	case 83:
		goto loc_827F37EC;
	case 84:
		goto loc_827F3818;
	case 85:
		goto loc_827F384C;
	case 86:
		goto loc_827F3878;
	case 87:
		goto loc_827F38A4;
	case 88:
		goto loc_827F38D0;
	case 89:
		goto loc_827F3904;
	case 90:
		goto loc_827F3930;
	case 91:
		goto loc_827F395C;
	case 92:
		goto loc_827F3988;
	case 93:
		goto loc_827F39BC;
	case 94:
		goto loc_827F39E8;
	case 95:
		goto loc_827F3A14;
	case 96:
		goto loc_827F3A40;
	case 97:
		goto loc_827F3A7C;
	case 98:
		goto loc_827F3AB0;
	case 99:
		goto loc_827F3AE4;
	case 100:
		goto loc_827F3B18;
	case 101:
		goto loc_827F3B54;
	case 102:
		goto loc_827F3B88;
	case 103:
		goto loc_827F3BBC;
	case 104:
		goto loc_827F3BF0;
	case 105:
		goto loc_827F3C2C;
	case 106:
		goto loc_827F3C60;
	case 107:
		goto loc_827F3C94;
	case 108:
		goto loc_827F3CC8;
	case 109:
		goto loc_827F3D04;
	case 110:
		goto loc_827F3D38;
	case 111:
		goto loc_827F3D6C;
	case 112:
		goto loc_827F3DA0;
	case 113:
		goto loc_827F3DDC;
	case 114:
		goto loc_827F3E10;
	case 115:
		goto loc_827F3E44;
	case 116:
		goto loc_827F3E78;
	case 117:
		goto loc_827F3EB4;
	case 118:
		goto loc_827F3EE8;
	case 119:
		goto loc_827F3F1C;
	case 120:
		goto loc_827F3F50;
	case 121:
		goto loc_827F3F8C;
	case 122:
		goto loc_827F3FC0;
	case 123:
		goto loc_827F3FF4;
	case 124:
		goto loc_827F4028;
	case 125:
		goto loc_827F4064;
	case 126:
		goto loc_827F4098;
	case 127:
		goto loc_827F40CC;
	case 128:
		goto loc_827F4100;
	case 129:
		goto loc_827F4144;
	case 130:
		goto loc_827F4180;
	case 131:
		goto loc_827F41BC;
	case 132:
		goto loc_827F41F8;
	case 133:
		goto loc_827F423C;
	case 134:
		goto loc_827F4278;
	case 135:
		goto loc_827F42B4;
	case 136:
		goto loc_827F42F0;
	case 137:
		goto loc_827F4334;
	case 138:
		goto loc_827F4370;
	case 139:
		goto loc_827F43AC;
	case 140:
		goto loc_827F43E8;
	case 141:
		goto loc_827F442C;
	case 142:
		goto loc_827F4468;
	case 143:
		goto loc_827F44A4;
	case 144:
		goto loc_827F44E0;
	case 145:
		goto loc_827F4524;
	case 146:
		goto loc_827F4560;
	case 147:
		goto loc_827F459C;
	case 148:
		goto loc_827F45D8;
	case 149:
		goto loc_827F461C;
	case 150:
		goto loc_827F4658;
	case 151:
		goto loc_827F4694;
	case 152:
		goto loc_827F46D0;
	case 153:
		goto loc_827F4714;
	case 154:
		goto loc_827F4750;
	case 155:
		goto loc_827F478C;
	case 156:
		goto loc_827F47C8;
	case 157:
		goto loc_827F480C;
	case 158:
		goto loc_827F4848;
	case 159:
		goto loc_827F4884;
	case 160:
		goto loc_827F48C0;
	case 161:
		goto loc_827F490C;
	case 162:
		goto loc_827F4950;
	case 163:
		goto loc_827F4994;
	case 164:
		goto loc_827F49D8;
	case 165:
		goto loc_827F4A24;
	case 166:
		goto loc_827F4A68;
	case 167:
		goto loc_827F4AAC;
	case 168:
		goto loc_827F4AF0;
	case 169:
		goto loc_827F4B3C;
	case 170:
		goto loc_827F4B80;
	case 171:
		goto loc_827F4BC4;
	case 172:
		goto loc_827F4C08;
	case 173:
		goto loc_827F4C54;
	case 174:
		goto loc_827F4C98;
	case 175:
		goto loc_827F4CDC;
	case 176:
		goto loc_827F4D20;
	case 177:
		goto loc_827F4D6C;
	case 178:
		goto loc_827F4DB0;
	case 179:
		goto loc_827F4DF4;
	case 180:
		goto loc_827F4E38;
	case 181:
		goto loc_827F4E84;
	case 182:
		goto loc_827F4EC8;
	case 183:
		goto loc_827F4F0C;
	case 184:
		goto loc_827F4F50;
	case 185:
		goto loc_827F4F9C;
	case 186:
		goto loc_827F4FE0;
	case 187:
		goto loc_827F5024;
	case 188:
		goto loc_827F5068;
	case 189:
		goto loc_827F50B4;
	case 190:
		goto loc_827F50F8;
	case 191:
		goto loc_827F513C;
	case 192:
		goto loc_827F5180;
	case 193:
		goto loc_827F51D4;
	case 194:
		goto loc_827F5220;
	case 195:
		goto loc_827F526C;
	case 196:
		goto loc_827F52B8;
	case 197:
		goto loc_827F530C;
	case 198:
		goto loc_827F5358;
	case 199:
		goto loc_827F53A4;
	case 200:
		goto loc_827F53F0;
	case 201:
		goto loc_827F5444;
	case 202:
		goto loc_827F5490;
	case 203:
		goto loc_827F54DC;
	case 204:
		goto loc_827F5528;
	case 205:
		goto loc_827F557C;
	case 206:
		goto loc_827F55C8;
	case 207:
		goto loc_827F5614;
	case 208:
		goto loc_827F5660;
	case 209:
		goto loc_827F56B4;
	case 210:
		goto loc_827F5700;
	case 211:
		goto loc_827F574C;
	case 212:
		goto loc_827F5798;
	case 213:
		goto loc_827F57EC;
	case 214:
		goto loc_827F5838;
	case 215:
		goto loc_827F5884;
	case 216:
		goto loc_827F58D0;
	case 217:
		goto loc_827F5924;
	case 218:
		goto loc_827F5970;
	case 219:
		goto loc_827F59BC;
	case 220:
		goto loc_827F5A08;
	case 221:
		goto loc_827F5A5C;
	case 222:
		goto loc_827F5AA8;
	case 223:
		goto loc_827F5AF4;
	case 224:
		goto loc_827F5B40;
	case 225:
		goto loc_827F5B9C;
	case 226:
		goto loc_827F5BE8;
	case 227:
		goto loc_827F5C34;
	case 228:
		goto loc_827F5C80;
	case 229:
		goto loc_827F5CDC;
	case 230:
		goto loc_827F5D28;
	case 231:
		goto loc_827F5D74;
	case 232:
		goto loc_827F5DC0;
	case 233:
		goto loc_827F5E1C;
	case 234:
		goto loc_827F5E68;
	case 235:
		goto loc_827F5EB4;
	case 236:
		goto loc_827F5F00;
	case 237:
		goto loc_827F5F5C;
	case 238:
		goto loc_827F5FA8;
	case 239:
		goto loc_827F5FF4;
	case 240:
		goto loc_827F6040;
	case 241:
		goto loc_827F609C;
	case 242:
		goto loc_827F60E8;
	case 243:
		goto loc_827F6134;
	case 244:
		goto loc_827F6180;
	case 245:
		goto loc_827F61DC;
	case 246:
		goto loc_827F6228;
	case 247:
		goto loc_827F6274;
	case 248:
		goto loc_827F62C0;
	case 249:
		goto loc_827F631C;
	case 250:
		goto loc_827F6368;
	case 251:
		goto loc_827F63B4;
	case 252:
		goto loc_827F6400;
	case 253:
		goto loc_827F645C;
	case 254:
		goto loc_827F64C8;
	case 255:
		goto loc_827F653C;
	case 256:
		goto loc_827F0AC4;
	case 257:
		goto loc_827F0BAC;
	case 258:
		goto loc_827F0BDC;
	case 259:
		goto loc_827F0C14;
	case 260:
		goto loc_827F0C54;
	case 261:
		goto loc_827F0C9C;
	case 262:
		goto loc_827F0CEC;
	case 263:
		goto loc_827F0D44;
	case 264:
		goto loc_827F0DA4;
	case 265:
		goto loc_827F0E0C;
	case 266:
		goto loc_827F0E7C;
	case 267:
		goto loc_827F0EF4;
	case 268:
		goto loc_827F0F74;
	case 269:
		goto loc_827F0FFC;
	case 270:
		goto loc_827F108C;
	case 271:
		goto loc_827F1124;
	case 272:
		goto loc_827F1704;
	case 273:
		goto loc_827F1864;
	case 274:
		goto loc_827F18D8;
	case 275:
		goto loc_827F191C;
	case 276:
		goto loc_827F1968;
	case 277:
		goto loc_827F19BC;
	case 278:
		goto loc_827F1A18;
	case 279:
		goto loc_827F1A7C;
	case 280:
		goto loc_827F17B4;
	case 281:
		goto loc_827F1AE8;
	case 282:
		goto loc_827F1B20;
	case 283:
		goto loc_827F1B68;
	case 284:
		goto loc_827F1BB8;
	case 285:
		goto loc_827F1C10;
	case 286:
		goto loc_827F1C70;
	case 287:
		goto loc_827F1CD8;
	case 288:
		goto loc_827F1D48;
	case 289:
		goto loc_827F1EB8;
	case 290:
		goto loc_827F1EF0;
	case 291:
		goto loc_827F1F34;
	case 292:
		goto loc_827F1F80;
	case 293:
		goto loc_827F1FD4;
	case 294:
		goto loc_827F2030;
	case 295:
		goto loc_827F2094;
	case 296:
		goto loc_827F2100;
	case 297:
		goto loc_827F2174;
	case 298:
		goto loc_827F21F0;
	case 299:
		goto loc_827F2274;
	case 300:
		goto loc_827F2300;
	case 301:
		goto loc_827F2394;
	case 302:
		goto loc_827F2430;
	case 303:
		goto loc_827F24D4;
	case 304:
		goto loc_827F2580;
	case 305:
		goto loc_827F2634;
	case 306:
		goto loc_827F26F0;
	case 307:
		goto loc_827F27B4;
	case 308:
		goto loc_827F2880;
	case 309:
		goto loc_827F2954;
	case 310:
		goto loc_827F2A30;
	case 311:
		goto loc_827F2B14;
	case 312:
		goto loc_827F2C00;
	case 313:
		goto loc_827F2CF4;
	case 314:
		goto loc_827F2DF0;
	case 315:
		goto loc_827F2EF4;
	case 316:
		goto loc_827F3000;
	case 317:
		goto loc_827F3114;
	case 318:
		goto loc_827F3230;
	case 319:
		goto loc_827F3354;
	case 320:
		goto loc_827F3480;
	case 321:
		goto loc_827F34B4;
	case 322:
		goto loc_827F34E0;
	case 323:
		goto loc_827F350C;
	case 324:
		goto loc_827F3538;
	case 325:
		goto loc_827F356C;
	case 326:
		goto loc_827F3598;
	case 327:
		goto loc_827F35C4;
	case 328:
		goto loc_827F35F0;
	case 329:
		goto loc_827F3624;
	case 330:
		goto loc_827F3650;
	case 331:
		goto loc_827F367C;
	case 332:
		goto loc_827F36A8;
	case 333:
		goto loc_827F36DC;
	case 334:
		goto loc_827F3708;
	case 335:
		goto loc_827F3734;
	case 336:
		goto loc_827F3760;
	case 337:
		goto loc_827F3794;
	case 338:
		goto loc_827F37C0;
	case 339:
		goto loc_827F37EC;
	case 340:
		goto loc_827F3818;
	case 341:
		goto loc_827F384C;
	case 342:
		goto loc_827F3878;
	case 343:
		goto loc_827F38A4;
	case 344:
		goto loc_827F38D0;
	case 345:
		goto loc_827F3904;
	case 346:
		goto loc_827F3930;
	case 347:
		goto loc_827F395C;
	case 348:
		goto loc_827F3988;
	case 349:
		goto loc_827F39BC;
	case 350:
		goto loc_827F39E8;
	case 351:
		goto loc_827F3A14;
	case 352:
		goto loc_827F3A40;
	case 353:
		goto loc_827F3A7C;
	case 354:
		goto loc_827F3AB0;
	case 355:
		goto loc_827F3AE4;
	case 356:
		goto loc_827F3B18;
	case 357:
		goto loc_827F3B54;
	case 358:
		goto loc_827F3B88;
	case 359:
		goto loc_827F3BBC;
	case 360:
		goto loc_827F3BF0;
	case 361:
		goto loc_827F3C2C;
	case 362:
		goto loc_827F3C60;
	case 363:
		goto loc_827F3C94;
	case 364:
		goto loc_827F3CC8;
	case 365:
		goto loc_827F3D04;
	case 366:
		goto loc_827F3D38;
	case 367:
		goto loc_827F3D6C;
	case 368:
		goto loc_827F3DA0;
	case 369:
		goto loc_827F3DDC;
	case 370:
		goto loc_827F3E10;
	case 371:
		goto loc_827F3E44;
	case 372:
		goto loc_827F3E78;
	case 373:
		goto loc_827F3EB4;
	case 374:
		goto loc_827F3EE8;
	case 375:
		goto loc_827F3F1C;
	case 376:
		goto loc_827F3F50;
	case 377:
		goto loc_827F3F8C;
	case 378:
		goto loc_827F3FC0;
	case 379:
		goto loc_827F3FF4;
	case 380:
		goto loc_827F4028;
	case 381:
		goto loc_827F4064;
	case 382:
		goto loc_827F4098;
	case 383:
		goto loc_827F40CC;
	case 384:
		goto loc_827F4100;
	case 385:
		goto loc_827F4144;
	case 386:
		goto loc_827F4180;
	case 387:
		goto loc_827F41BC;
	case 388:
		goto loc_827F41F8;
	case 389:
		goto loc_827F423C;
	case 390:
		goto loc_827F4278;
	case 391:
		goto loc_827F42B4;
	case 392:
		goto loc_827F42F0;
	case 393:
		goto loc_827F4334;
	case 394:
		goto loc_827F4370;
	case 395:
		goto loc_827F43AC;
	case 396:
		goto loc_827F43E8;
	case 397:
		goto loc_827F442C;
	case 398:
		goto loc_827F4468;
	case 399:
		goto loc_827F44A4;
	case 400:
		goto loc_827F44E0;
	case 401:
		goto loc_827F4524;
	case 402:
		goto loc_827F4560;
	case 403:
		goto loc_827F459C;
	case 404:
		goto loc_827F45D8;
	case 405:
		goto loc_827F461C;
	case 406:
		goto loc_827F4658;
	case 407:
		goto loc_827F4694;
	case 408:
		goto loc_827F46D0;
	case 409:
		goto loc_827F4714;
	case 410:
		goto loc_827F4750;
	case 411:
		goto loc_827F478C;
	case 412:
		goto loc_827F47C8;
	case 413:
		goto loc_827F480C;
	case 414:
		goto loc_827F4848;
	case 415:
		goto loc_827F4884;
	case 416:
		goto loc_827F48C0;
	case 417:
		goto loc_827F490C;
	case 418:
		goto loc_827F4950;
	case 419:
		goto loc_827F4994;
	case 420:
		goto loc_827F49D8;
	case 421:
		goto loc_827F4A24;
	case 422:
		goto loc_827F4A68;
	case 423:
		goto loc_827F4AAC;
	case 424:
		goto loc_827F4AF0;
	case 425:
		goto loc_827F4B3C;
	case 426:
		goto loc_827F4B80;
	case 427:
		goto loc_827F4BC4;
	case 428:
		goto loc_827F4C08;
	case 429:
		goto loc_827F4C54;
	case 430:
		goto loc_827F4C98;
	case 431:
		goto loc_827F4CDC;
	case 432:
		goto loc_827F4D20;
	case 433:
		goto loc_827F4D6C;
	case 434:
		goto loc_827F4DB0;
	case 435:
		goto loc_827F4DF4;
	case 436:
		goto loc_827F4E38;
	case 437:
		goto loc_827F4E84;
	case 438:
		goto loc_827F4EC8;
	case 439:
		goto loc_827F4F0C;
	case 440:
		goto loc_827F4F50;
	case 441:
		goto loc_827F4F9C;
	case 442:
		goto loc_827F4FE0;
	case 443:
		goto loc_827F5024;
	case 444:
		goto loc_827F5068;
	case 445:
		goto loc_827F50B4;
	case 446:
		goto loc_827F50F8;
	case 447:
		goto loc_827F513C;
	case 448:
		goto loc_827F5180;
	case 449:
		goto loc_827F51D4;
	case 450:
		goto loc_827F5220;
	case 451:
		goto loc_827F526C;
	case 452:
		goto loc_827F52B8;
	case 453:
		goto loc_827F530C;
	case 454:
		goto loc_827F5358;
	case 455:
		goto loc_827F53A4;
	case 456:
		goto loc_827F53F0;
	case 457:
		goto loc_827F5444;
	case 458:
		goto loc_827F5490;
	case 459:
		goto loc_827F54DC;
	case 460:
		goto loc_827F5528;
	case 461:
		goto loc_827F557C;
	case 462:
		goto loc_827F55C8;
	case 463:
		goto loc_827F5614;
	case 464:
		goto loc_827F5660;
	case 465:
		goto loc_827F56B4;
	case 466:
		goto loc_827F5700;
	case 467:
		goto loc_827F574C;
	case 468:
		goto loc_827F5798;
	case 469:
		goto loc_827F57EC;
	case 470:
		goto loc_827F5838;
	case 471:
		goto loc_827F5884;
	case 472:
		goto loc_827F58D0;
	case 473:
		goto loc_827F5924;
	case 474:
		goto loc_827F5970;
	case 475:
		goto loc_827F59BC;
	case 476:
		goto loc_827F5A08;
	case 477:
		goto loc_827F5A5C;
	case 478:
		goto loc_827F5AA8;
	case 479:
		goto loc_827F5AF4;
	case 480:
		goto loc_827F5B40;
	case 481:
		goto loc_827F5B9C;
	case 482:
		goto loc_827F5BE8;
	case 483:
		goto loc_827F5C34;
	case 484:
		goto loc_827F5C80;
	case 485:
		goto loc_827F5CDC;
	case 486:
		goto loc_827F5D28;
	case 487:
		goto loc_827F5D74;
	case 488:
		goto loc_827F5DC0;
	case 489:
		goto loc_827F5E1C;
	case 490:
		goto loc_827F5E68;
	case 491:
		goto loc_827F5EB4;
	case 492:
		goto loc_827F5F00;
	case 493:
		goto loc_827F5F5C;
	case 494:
		goto loc_827F5FA8;
	case 495:
		goto loc_827F5FF4;
	case 496:
		goto loc_827F6040;
	case 497:
		goto loc_827F609C;
	case 498:
		goto loc_827F60E8;
	case 499:
		goto loc_827F6134;
	case 500:
		goto loc_827F6180;
	case 501:
		goto loc_827F61DC;
	case 502:
		goto loc_827F6228;
	case 503:
		goto loc_827F6274;
	case 504:
		goto loc_827F62C0;
	case 505:
		goto loc_827F631C;
	case 506:
		goto loc_827F6368;
	case 507:
		goto loc_827F63B4;
	case 508:
		goto loc_827F6400;
	case 509:
		goto loc_827F645C;
	case 510:
		goto loc_827F64C8;
	case 511:
		goto loc_827F653C;
	case 512:
		goto loc_827F11C4;
	case 513:
		goto loc_827F11F8;
	case 514:
		goto loc_827F1224;
	case 515:
		goto loc_827F1250;
	case 516:
		goto loc_827F127C;
	case 517:
		goto loc_827F12B0;
	case 518:
		goto loc_827F12DC;
	case 519:
		goto loc_827F1308;
	case 520:
		goto loc_827F1334;
	case 521:
		goto loc_827F1368;
	case 522:
		goto loc_827F1394;
	case 523:
		goto loc_827F13C0;
	case 524:
		goto loc_827F13EC;
	case 525:
		goto loc_827F1420;
	case 526:
		goto loc_827F144C;
	case 527:
		goto loc_827F1478;
	case 528:
		goto loc_827F1704;
	case 529:
		goto loc_827F1864;
	case 530:
		goto loc_827F18D8;
	case 531:
		goto loc_827F191C;
	case 532:
		goto loc_827F1968;
	case 533:
		goto loc_827F19BC;
	case 534:
		goto loc_827F1A18;
	case 535:
		goto loc_827F1A7C;
	case 536:
		goto loc_827F17B4;
	case 537:
		goto loc_827F1AE8;
	case 538:
		goto loc_827F1B20;
	case 539:
		goto loc_827F1B68;
	case 540:
		goto loc_827F1BB8;
	case 541:
		goto loc_827F1C10;
	case 542:
		goto loc_827F1C70;
	case 543:
		goto loc_827F1CD8;
	case 544:
		goto loc_827F1D48;
	case 545:
		goto loc_827F1EB8;
	case 546:
		goto loc_827F1EF0;
	case 547:
		goto loc_827F1F34;
	case 548:
		goto loc_827F1F80;
	case 549:
		goto loc_827F1FD4;
	case 550:
		goto loc_827F2030;
	case 551:
		goto loc_827F2094;
	case 552:
		goto loc_827F2100;
	case 553:
		goto loc_827F2174;
	case 554:
		goto loc_827F21F0;
	case 555:
		goto loc_827F2274;
	case 556:
		goto loc_827F2300;
	case 557:
		goto loc_827F2394;
	case 558:
		goto loc_827F2430;
	case 559:
		goto loc_827F24D4;
	case 560:
		goto loc_827F2580;
	case 561:
		goto loc_827F2634;
	case 562:
		goto loc_827F26F0;
	case 563:
		goto loc_827F27B4;
	case 564:
		goto loc_827F2880;
	case 565:
		goto loc_827F2954;
	case 566:
		goto loc_827F2A30;
	case 567:
		goto loc_827F2B14;
	case 568:
		goto loc_827F2C00;
	case 569:
		goto loc_827F2CF4;
	case 570:
		goto loc_827F2DF0;
	case 571:
		goto loc_827F2EF4;
	case 572:
		goto loc_827F3000;
	case 573:
		goto loc_827F3114;
	case 574:
		goto loc_827F3230;
	case 575:
		goto loc_827F3354;
	case 576:
		goto loc_827F3480;
	case 577:
		goto loc_827F34B4;
	case 578:
		goto loc_827F34E0;
	case 579:
		goto loc_827F350C;
	case 580:
		goto loc_827F3538;
	case 581:
		goto loc_827F356C;
	case 582:
		goto loc_827F3598;
	case 583:
		goto loc_827F35C4;
	case 584:
		goto loc_827F35F0;
	case 585:
		goto loc_827F3624;
	case 586:
		goto loc_827F3650;
	case 587:
		goto loc_827F367C;
	case 588:
		goto loc_827F36A8;
	case 589:
		goto loc_827F36DC;
	case 590:
		goto loc_827F3708;
	case 591:
		goto loc_827F3734;
	case 592:
		goto loc_827F3760;
	case 593:
		goto loc_827F3794;
	case 594:
		goto loc_827F37C0;
	case 595:
		goto loc_827F37EC;
	case 596:
		goto loc_827F3818;
	case 597:
		goto loc_827F384C;
	case 598:
		goto loc_827F3878;
	case 599:
		goto loc_827F38A4;
	case 600:
		goto loc_827F38D0;
	case 601:
		goto loc_827F3904;
	case 602:
		goto loc_827F3930;
	case 603:
		goto loc_827F395C;
	case 604:
		goto loc_827F3988;
	case 605:
		goto loc_827F39BC;
	case 606:
		goto loc_827F39E8;
	case 607:
		goto loc_827F3A14;
	case 608:
		goto loc_827F3A40;
	case 609:
		goto loc_827F3A7C;
	case 610:
		goto loc_827F3AB0;
	case 611:
		goto loc_827F3AE4;
	case 612:
		goto loc_827F3B18;
	case 613:
		goto loc_827F3B54;
	case 614:
		goto loc_827F3B88;
	case 615:
		goto loc_827F3BBC;
	case 616:
		goto loc_827F3BF0;
	case 617:
		goto loc_827F3C2C;
	case 618:
		goto loc_827F3C60;
	case 619:
		goto loc_827F3C94;
	case 620:
		goto loc_827F3CC8;
	case 621:
		goto loc_827F3D04;
	case 622:
		goto loc_827F3D38;
	case 623:
		goto loc_827F3D6C;
	case 624:
		goto loc_827F3DA0;
	case 625:
		goto loc_827F3DDC;
	case 626:
		goto loc_827F3E10;
	case 627:
		goto loc_827F3E44;
	case 628:
		goto loc_827F3E78;
	case 629:
		goto loc_827F3EB4;
	case 630:
		goto loc_827F3EE8;
	case 631:
		goto loc_827F3F1C;
	case 632:
		goto loc_827F3F50;
	case 633:
		goto loc_827F3F8C;
	case 634:
		goto loc_827F3FC0;
	case 635:
		goto loc_827F3FF4;
	case 636:
		goto loc_827F4028;
	case 637:
		goto loc_827F4064;
	case 638:
		goto loc_827F4098;
	case 639:
		goto loc_827F40CC;
	case 640:
		goto loc_827F4100;
	case 641:
		goto loc_827F4144;
	case 642:
		goto loc_827F4180;
	case 643:
		goto loc_827F41BC;
	case 644:
		goto loc_827F41F8;
	case 645:
		goto loc_827F423C;
	case 646:
		goto loc_827F4278;
	case 647:
		goto loc_827F42B4;
	case 648:
		goto loc_827F42F0;
	case 649:
		goto loc_827F4334;
	case 650:
		goto loc_827F4370;
	case 651:
		goto loc_827F43AC;
	case 652:
		goto loc_827F43E8;
	case 653:
		goto loc_827F442C;
	case 654:
		goto loc_827F4468;
	case 655:
		goto loc_827F44A4;
	case 656:
		goto loc_827F44E0;
	case 657:
		goto loc_827F4524;
	case 658:
		goto loc_827F4560;
	case 659:
		goto loc_827F459C;
	case 660:
		goto loc_827F45D8;
	case 661:
		goto loc_827F461C;
	case 662:
		goto loc_827F4658;
	case 663:
		goto loc_827F4694;
	case 664:
		goto loc_827F46D0;
	case 665:
		goto loc_827F4714;
	case 666:
		goto loc_827F4750;
	case 667:
		goto loc_827F478C;
	case 668:
		goto loc_827F47C8;
	case 669:
		goto loc_827F480C;
	case 670:
		goto loc_827F4848;
	case 671:
		goto loc_827F4884;
	case 672:
		goto loc_827F48C0;
	case 673:
		goto loc_827F490C;
	case 674:
		goto loc_827F4950;
	case 675:
		goto loc_827F4994;
	case 676:
		goto loc_827F49D8;
	case 677:
		goto loc_827F4A24;
	case 678:
		goto loc_827F4A68;
	case 679:
		goto loc_827F4AAC;
	case 680:
		goto loc_827F4AF0;
	case 681:
		goto loc_827F4B3C;
	case 682:
		goto loc_827F4B80;
	case 683:
		goto loc_827F4BC4;
	case 684:
		goto loc_827F4C08;
	case 685:
		goto loc_827F4C54;
	case 686:
		goto loc_827F4C98;
	case 687:
		goto loc_827F4CDC;
	case 688:
		goto loc_827F4D20;
	case 689:
		goto loc_827F4D6C;
	case 690:
		goto loc_827F4DB0;
	case 691:
		goto loc_827F4DF4;
	case 692:
		goto loc_827F4E38;
	case 693:
		goto loc_827F4E84;
	case 694:
		goto loc_827F4EC8;
	case 695:
		goto loc_827F4F0C;
	case 696:
		goto loc_827F4F50;
	case 697:
		goto loc_827F4F9C;
	case 698:
		goto loc_827F4FE0;
	case 699:
		goto loc_827F5024;
	case 700:
		goto loc_827F5068;
	case 701:
		goto loc_827F50B4;
	case 702:
		goto loc_827F50F8;
	case 703:
		goto loc_827F513C;
	case 704:
		goto loc_827F5180;
	case 705:
		goto loc_827F51D4;
	case 706:
		goto loc_827F5220;
	case 707:
		goto loc_827F526C;
	case 708:
		goto loc_827F52B8;
	case 709:
		goto loc_827F530C;
	case 710:
		goto loc_827F5358;
	case 711:
		goto loc_827F53A4;
	case 712:
		goto loc_827F53F0;
	case 713:
		goto loc_827F5444;
	case 714:
		goto loc_827F5490;
	case 715:
		goto loc_827F54DC;
	case 716:
		goto loc_827F5528;
	case 717:
		goto loc_827F557C;
	case 718:
		goto loc_827F55C8;
	case 719:
		goto loc_827F5614;
	case 720:
		goto loc_827F5660;
	case 721:
		goto loc_827F56B4;
	case 722:
		goto loc_827F5700;
	case 723:
		goto loc_827F574C;
	case 724:
		goto loc_827F5798;
	case 725:
		goto loc_827F57EC;
	case 726:
		goto loc_827F5838;
	case 727:
		goto loc_827F5884;
	case 728:
		goto loc_827F58D0;
	case 729:
		goto loc_827F5924;
	case 730:
		goto loc_827F5970;
	case 731:
		goto loc_827F59BC;
	case 732:
		goto loc_827F5A08;
	case 733:
		goto loc_827F5A5C;
	case 734:
		goto loc_827F5AA8;
	case 735:
		goto loc_827F5AF4;
	case 736:
		goto loc_827F5B40;
	case 737:
		goto loc_827F5B9C;
	case 738:
		goto loc_827F5BE8;
	case 739:
		goto loc_827F5C34;
	case 740:
		goto loc_827F5C80;
	case 741:
		goto loc_827F5CDC;
	case 742:
		goto loc_827F5D28;
	case 743:
		goto loc_827F5D74;
	case 744:
		goto loc_827F5DC0;
	case 745:
		goto loc_827F5E1C;
	case 746:
		goto loc_827F5E68;
	case 747:
		goto loc_827F5EB4;
	case 748:
		goto loc_827F5F00;
	case 749:
		goto loc_827F5F5C;
	case 750:
		goto loc_827F5FA8;
	case 751:
		goto loc_827F5FF4;
	case 752:
		goto loc_827F6040;
	case 753:
		goto loc_827F609C;
	case 754:
		goto loc_827F60E8;
	case 755:
		goto loc_827F6134;
	case 756:
		goto loc_827F6180;
	case 757:
		goto loc_827F61DC;
	case 758:
		goto loc_827F6228;
	case 759:
		goto loc_827F6274;
	case 760:
		goto loc_827F62C0;
	case 761:
		goto loc_827F631C;
	case 762:
		goto loc_827F6368;
	case 763:
		goto loc_827F63B4;
	case 764:
		goto loc_827F6400;
	case 765:
		goto loc_827F645C;
	case 766:
		goto loc_827F64C8;
	case 767:
		goto loc_827F653C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,5284(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5284);
	// lwz r19,5328(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5328);
	// lwz r19,5364(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5364);
	// lwz r19,5400(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5400);
	// lwz r19,5436(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5436);
	// lwz r19,5480(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5480);
	// lwz r19,5516(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5516);
	// lwz r19,5552(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5552);
	// lwz r19,5588(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5588);
	// lwz r19,5632(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5632);
	// lwz r19,5668(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5668);
	// lwz r19,5704(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5704);
	// lwz r19,5740(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5740);
	// lwz r19,5784(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// lwz r19,5820(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5820);
	// lwz r19,5856(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5856);
	// lwz r19,5892(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5892);
	// lwz r19,6244(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6244);
	// lwz r19,6360(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6360);
	// lwz r19,6428(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6428);
	// lwz r19,6504(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6504);
	// lwz r19,6588(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6588);
	// lwz r19,6680(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6680);
	// lwz r19,6780(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6780);
	// lwz r19,6068(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6068);
	// lwz r19,6888(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6888);
	// lwz r19,6944(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6944);
	// lwz r19,7016(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7016);
	// lwz r19,7096(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7096);
	// lwz r19,7184(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7184);
	// lwz r19,7280(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7280);
	// lwz r19,7384(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7384);
	// lwz r19,7496(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// lwz r19,7864(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7864);
	// lwz r19,7920(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7920);
	// lwz r19,7988(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7988);
	// lwz r19,8064(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8064);
	// lwz r19,8148(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8148);
	// lwz r19,8240(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// lwz r19,8340(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8340);
	// lwz r19,8448(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8448);
	// lwz r19,8564(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8564);
	// lwz r19,8688(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8688);
	// lwz r19,8820(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8820);
	// lwz r19,8960(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8960);
	// lwz r19,9108(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9108);
	// lwz r19,9264(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9264);
	// lwz r19,9428(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9428);
	// lwz r19,9600(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9600);
	// lwz r19,9780(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9780);
	// lwz r19,9968(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9968);
	// lwz r19,10164(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10164);
	// lwz r19,10368(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10368);
	// lwz r19,10580(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10580);
	// lwz r19,10800(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10800);
	// lwz r19,11028(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11028);
	// lwz r19,11264(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11264);
	// lwz r19,11508(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// lwz r19,11760(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11760);
	// lwz r19,12020(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12020);
	// lwz r19,12288(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12288);
	// lwz r19,12564(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12564);
	// lwz r19,12848(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12848);
	// lwz r19,13140(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13140);
	// lwz r19,13440(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13440);
	// lwz r19,13492(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13492);
	// lwz r19,13536(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13536);
	// lwz r19,13580(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13580);
	// lwz r19,13624(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13624);
	// lwz r19,13676(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13676);
	// lwz r19,13720(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13720);
	// lwz r19,13764(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13764);
	// lwz r19,13808(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13808);
	// lwz r19,13860(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13860);
	// lwz r19,13904(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13904);
	// lwz r19,13948(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13948);
	// lwz r19,13992(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13992);
	// lwz r19,14044(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14044);
	// lwz r19,14088(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14088);
	// lwz r19,14132(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14132);
	// lwz r19,14176(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14176);
	// lwz r19,14228(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14228);
	// lwz r19,14272(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14272);
	// lwz r19,14316(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14316);
	// lwz r19,14360(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14360);
	// lwz r19,14412(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14412);
	// lwz r19,14456(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14456);
	// lwz r19,14500(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14500);
	// lwz r19,14544(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14544);
	// lwz r19,14596(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14596);
	// lwz r19,14640(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14640);
	// lwz r19,14684(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14684);
	// lwz r19,14728(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14728);
	// lwz r19,14780(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14780);
	// lwz r19,14824(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14824);
	// lwz r19,14868(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14868);
	// lwz r19,14912(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14912);
	// lwz r19,14972(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14972);
	// lwz r19,15024(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15024);
	// lwz r19,15076(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15076);
	// lwz r19,15128(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15128);
	// lwz r19,15188(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15188);
	// lwz r19,15240(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15240);
	// lwz r19,15292(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15292);
	// lwz r19,15344(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15344);
	// lwz r19,15404(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15404);
	// lwz r19,15456(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15456);
	// lwz r19,15508(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15508);
	// lwz r19,15560(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15560);
	// lwz r19,15620(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15620);
	// lwz r19,15672(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15672);
	// lwz r19,15724(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15724);
	// lwz r19,15776(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15776);
	// lwz r19,15836(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15836);
	// lwz r19,15888(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15888);
	// lwz r19,15940(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15940);
	// lwz r19,15992(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15992);
	// lwz r19,16052(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16052);
	// lwz r19,16104(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16104);
	// lwz r19,16156(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16156);
	// lwz r19,16208(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16208);
	// lwz r19,16268(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16268);
	// lwz r19,16320(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16320);
	// lwz r19,16372(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16372);
	// lwz r19,16424(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16424);
	// lwz r19,16484(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16484);
	// lwz r19,16536(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16536);
	// lwz r19,16588(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16588);
	// lwz r19,16640(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16640);
	// lwz r19,16708(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16708);
	// lwz r19,16768(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16768);
	// lwz r19,16828(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16828);
	// lwz r19,16888(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16888);
	// lwz r19,16956(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16956);
	// lwz r19,17016(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17016);
	// lwz r19,17076(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17076);
	// lwz r19,17136(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17136);
	// lwz r19,17204(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17204);
	// lwz r19,17264(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17264);
	// lwz r19,17324(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17324);
	// lwz r19,17384(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17384);
	// lwz r19,17452(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17452);
	// lwz r19,17512(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17512);
	// lwz r19,17572(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17572);
	// lwz r19,17632(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17632);
	// lwz r19,17700(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17700);
	// lwz r19,17760(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17760);
	// lwz r19,17820(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17820);
	// lwz r19,17880(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17880);
	// lwz r19,17948(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17948);
	// lwz r19,18008(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18008);
	// lwz r19,18068(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18068);
	// lwz r19,18128(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18128);
	// lwz r19,18196(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18196);
	// lwz r19,18256(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18256);
	// lwz r19,18316(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18316);
	// lwz r19,18376(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18376);
	// lwz r19,18444(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18444);
	// lwz r19,18504(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18504);
	// lwz r19,18564(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18564);
	// lwz r19,18624(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18624);
	// lwz r19,18700(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18700);
	// lwz r19,18768(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18768);
	// lwz r19,18836(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18836);
	// lwz r19,18904(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18904);
	// lwz r19,18980(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18980);
	// lwz r19,19048(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19048);
	// lwz r19,19116(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19116);
	// lwz r19,19184(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19184);
	// lwz r19,19260(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19260);
	// lwz r19,19328(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19328);
	// lwz r19,19396(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19396);
	// lwz r19,19464(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19464);
	// lwz r19,19540(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19540);
	// lwz r19,19608(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19608);
	// lwz r19,19676(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19676);
	// lwz r19,19744(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19744);
	// lwz r19,19820(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19820);
	// lwz r19,19888(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19888);
	// lwz r19,19956(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19956);
	// lwz r19,20024(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20024);
	// lwz r19,20100(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20100);
	// lwz r19,20168(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20168);
	// lwz r19,20236(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20236);
	// lwz r19,20304(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20304);
	// lwz r19,20380(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20380);
	// lwz r19,20448(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20448);
	// lwz r19,20516(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20516);
	// lwz r19,20584(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20584);
	// lwz r19,20660(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20660);
	// lwz r19,20728(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20728);
	// lwz r19,20796(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20796);
	// lwz r19,20864(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20864);
	// lwz r19,20948(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20948);
	// lwz r19,21024(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21024);
	// lwz r19,21100(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21100);
	// lwz r19,21176(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21176);
	// lwz r19,21260(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21260);
	// lwz r19,21336(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21336);
	// lwz r19,21412(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21412);
	// lwz r19,21488(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21488);
	// lwz r19,21572(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21572);
	// lwz r19,21648(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21648);
	// lwz r19,21724(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21724);
	// lwz r19,21800(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21800);
	// lwz r19,21884(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21884);
	// lwz r19,21960(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21960);
	// lwz r19,22036(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22036);
	// lwz r19,22112(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22112);
	// lwz r19,22196(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22196);
	// lwz r19,22272(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22272);
	// lwz r19,22348(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22348);
	// lwz r19,22424(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22424);
	// lwz r19,22508(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22508);
	// lwz r19,22584(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22584);
	// lwz r19,22660(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22660);
	// lwz r19,22736(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22736);
	// lwz r19,22820(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22820);
	// lwz r19,22896(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22896);
	// lwz r19,22972(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22972);
	// lwz r19,23048(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23048);
	// lwz r19,23132(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23132);
	// lwz r19,23208(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23208);
	// lwz r19,23284(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23284);
	// lwz r19,23360(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23360);
	// lwz r19,23452(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23452);
	// lwz r19,23528(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23528);
	// lwz r19,23604(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23604);
	// lwz r19,23680(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23680);
	// lwz r19,23772(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23772);
	// lwz r19,23848(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23848);
	// lwz r19,23924(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23924);
	// lwz r19,24000(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24000);
	// lwz r19,24092(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24092);
	// lwz r19,24168(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24168);
	// lwz r19,24244(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24244);
	// lwz r19,24320(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24320);
	// lwz r19,24412(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24412);
	// lwz r19,24488(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24488);
	// lwz r19,24564(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24564);
	// lwz r19,24640(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24640);
	// lwz r19,24732(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24732);
	// lwz r19,24808(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24808);
	// lwz r19,24884(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24884);
	// lwz r19,24960(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24960);
	// lwz r19,25052(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25052);
	// lwz r19,25128(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25128);
	// lwz r19,25204(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25204);
	// lwz r19,25280(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25280);
	// lwz r19,25372(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25372);
	// lwz r19,25448(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25448);
	// lwz r19,25524(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25524);
	// lwz r19,25600(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25600);
	// lwz r19,25692(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25692);
	// lwz r19,25800(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25800);
	// lwz r19,25916(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25916);
	// lwz r19,2756(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2756);
	// lwz r19,2988(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2988);
	// lwz r19,3036(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3036);
	// lwz r19,3092(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3092);
	// lwz r19,3156(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3156);
	// lwz r19,3228(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3228);
	// lwz r19,3308(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3308);
	// lwz r19,3396(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3396);
	// lwz r19,3492(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3492);
	// lwz r19,3596(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3596);
	// lwz r19,3708(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3708);
	// lwz r19,3828(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3828);
	// lwz r19,3956(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3956);
	// lwz r19,4092(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4092);
	// lwz r19,4236(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4236);
	// lwz r19,4388(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4388);
	// lwz r19,5892(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5892);
	// lwz r19,6244(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6244);
	// lwz r19,6360(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6360);
	// lwz r19,6428(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6428);
	// lwz r19,6504(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6504);
	// lwz r19,6588(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6588);
	// lwz r19,6680(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6680);
	// lwz r19,6780(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6780);
	// lwz r19,6068(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6068);
	// lwz r19,6888(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6888);
	// lwz r19,6944(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6944);
	// lwz r19,7016(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7016);
	// lwz r19,7096(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7096);
	// lwz r19,7184(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7184);
	// lwz r19,7280(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7280);
	// lwz r19,7384(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7384);
	// lwz r19,7496(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// lwz r19,7864(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7864);
	// lwz r19,7920(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7920);
	// lwz r19,7988(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7988);
	// lwz r19,8064(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8064);
	// lwz r19,8148(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8148);
	// lwz r19,8240(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// lwz r19,8340(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8340);
	// lwz r19,8448(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8448);
	// lwz r19,8564(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8564);
	// lwz r19,8688(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8688);
	// lwz r19,8820(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8820);
	// lwz r19,8960(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8960);
	// lwz r19,9108(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9108);
	// lwz r19,9264(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9264);
	// lwz r19,9428(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9428);
	// lwz r19,9600(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9600);
	// lwz r19,9780(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9780);
	// lwz r19,9968(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9968);
	// lwz r19,10164(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10164);
	// lwz r19,10368(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10368);
	// lwz r19,10580(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10580);
	// lwz r19,10800(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10800);
	// lwz r19,11028(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11028);
	// lwz r19,11264(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11264);
	// lwz r19,11508(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// lwz r19,11760(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11760);
	// lwz r19,12020(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12020);
	// lwz r19,12288(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12288);
	// lwz r19,12564(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12564);
	// lwz r19,12848(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12848);
	// lwz r19,13140(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13140);
	// lwz r19,13440(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13440);
	// lwz r19,13492(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13492);
	// lwz r19,13536(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13536);
	// lwz r19,13580(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13580);
	// lwz r19,13624(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13624);
	// lwz r19,13676(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13676);
	// lwz r19,13720(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13720);
	// lwz r19,13764(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13764);
	// lwz r19,13808(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13808);
	// lwz r19,13860(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13860);
	// lwz r19,13904(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13904);
	// lwz r19,13948(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13948);
	// lwz r19,13992(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13992);
	// lwz r19,14044(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14044);
	// lwz r19,14088(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14088);
	// lwz r19,14132(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14132);
	// lwz r19,14176(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14176);
	// lwz r19,14228(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14228);
	// lwz r19,14272(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14272);
	// lwz r19,14316(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14316);
	// lwz r19,14360(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14360);
	// lwz r19,14412(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14412);
	// lwz r19,14456(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14456);
	// lwz r19,14500(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14500);
	// lwz r19,14544(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14544);
	// lwz r19,14596(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14596);
	// lwz r19,14640(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14640);
	// lwz r19,14684(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14684);
	// lwz r19,14728(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14728);
	// lwz r19,14780(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14780);
	// lwz r19,14824(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14824);
	// lwz r19,14868(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14868);
	// lwz r19,14912(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14912);
	// lwz r19,14972(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14972);
	// lwz r19,15024(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15024);
	// lwz r19,15076(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15076);
	// lwz r19,15128(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15128);
	// lwz r19,15188(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15188);
	// lwz r19,15240(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15240);
	// lwz r19,15292(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15292);
	// lwz r19,15344(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15344);
	// lwz r19,15404(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15404);
	// lwz r19,15456(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15456);
	// lwz r19,15508(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15508);
	// lwz r19,15560(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15560);
	// lwz r19,15620(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15620);
	// lwz r19,15672(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15672);
	// lwz r19,15724(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15724);
	// lwz r19,15776(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15776);
	// lwz r19,15836(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15836);
	// lwz r19,15888(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15888);
	// lwz r19,15940(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15940);
	// lwz r19,15992(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15992);
	// lwz r19,16052(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16052);
	// lwz r19,16104(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16104);
	// lwz r19,16156(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16156);
	// lwz r19,16208(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16208);
	// lwz r19,16268(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16268);
	// lwz r19,16320(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16320);
	// lwz r19,16372(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16372);
	// lwz r19,16424(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16424);
	// lwz r19,16484(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16484);
	// lwz r19,16536(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16536);
	// lwz r19,16588(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16588);
	// lwz r19,16640(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16640);
	// lwz r19,16708(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16708);
	// lwz r19,16768(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16768);
	// lwz r19,16828(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16828);
	// lwz r19,16888(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16888);
	// lwz r19,16956(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16956);
	// lwz r19,17016(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17016);
	// lwz r19,17076(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17076);
	// lwz r19,17136(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17136);
	// lwz r19,17204(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17204);
	// lwz r19,17264(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17264);
	// lwz r19,17324(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17324);
	// lwz r19,17384(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17384);
	// lwz r19,17452(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17452);
	// lwz r19,17512(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17512);
	// lwz r19,17572(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17572);
	// lwz r19,17632(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17632);
	// lwz r19,17700(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17700);
	// lwz r19,17760(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17760);
	// lwz r19,17820(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17820);
	// lwz r19,17880(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17880);
	// lwz r19,17948(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17948);
	// lwz r19,18008(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18008);
	// lwz r19,18068(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18068);
	// lwz r19,18128(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18128);
	// lwz r19,18196(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18196);
	// lwz r19,18256(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18256);
	// lwz r19,18316(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18316);
	// lwz r19,18376(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18376);
	// lwz r19,18444(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18444);
	// lwz r19,18504(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18504);
	// lwz r19,18564(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18564);
	// lwz r19,18624(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18624);
	// lwz r19,18700(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18700);
	// lwz r19,18768(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18768);
	// lwz r19,18836(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18836);
	// lwz r19,18904(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18904);
	// lwz r19,18980(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18980);
	// lwz r19,19048(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19048);
	// lwz r19,19116(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19116);
	// lwz r19,19184(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19184);
	// lwz r19,19260(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19260);
	// lwz r19,19328(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19328);
	// lwz r19,19396(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19396);
	// lwz r19,19464(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19464);
	// lwz r19,19540(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19540);
	// lwz r19,19608(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19608);
	// lwz r19,19676(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19676);
	// lwz r19,19744(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19744);
	// lwz r19,19820(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19820);
	// lwz r19,19888(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19888);
	// lwz r19,19956(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19956);
	// lwz r19,20024(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20024);
	// lwz r19,20100(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20100);
	// lwz r19,20168(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20168);
	// lwz r19,20236(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20236);
	// lwz r19,20304(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20304);
	// lwz r19,20380(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20380);
	// lwz r19,20448(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20448);
	// lwz r19,20516(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20516);
	// lwz r19,20584(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20584);
	// lwz r19,20660(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20660);
	// lwz r19,20728(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20728);
	// lwz r19,20796(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20796);
	// lwz r19,20864(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20864);
	// lwz r19,20948(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20948);
	// lwz r19,21024(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21024);
	// lwz r19,21100(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21100);
	// lwz r19,21176(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21176);
	// lwz r19,21260(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21260);
	// lwz r19,21336(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21336);
	// lwz r19,21412(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21412);
	// lwz r19,21488(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21488);
	// lwz r19,21572(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21572);
	// lwz r19,21648(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21648);
	// lwz r19,21724(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21724);
	// lwz r19,21800(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21800);
	// lwz r19,21884(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21884);
	// lwz r19,21960(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21960);
	// lwz r19,22036(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22036);
	// lwz r19,22112(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22112);
	// lwz r19,22196(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22196);
	// lwz r19,22272(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22272);
	// lwz r19,22348(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22348);
	// lwz r19,22424(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22424);
	// lwz r19,22508(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22508);
	// lwz r19,22584(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22584);
	// lwz r19,22660(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22660);
	// lwz r19,22736(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22736);
	// lwz r19,22820(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22820);
	// lwz r19,22896(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22896);
	// lwz r19,22972(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22972);
	// lwz r19,23048(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23048);
	// lwz r19,23132(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23132);
	// lwz r19,23208(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23208);
	// lwz r19,23284(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23284);
	// lwz r19,23360(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23360);
	// lwz r19,23452(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23452);
	// lwz r19,23528(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23528);
	// lwz r19,23604(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23604);
	// lwz r19,23680(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23680);
	// lwz r19,23772(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23772);
	// lwz r19,23848(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23848);
	// lwz r19,23924(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23924);
	// lwz r19,24000(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24000);
	// lwz r19,24092(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24092);
	// lwz r19,24168(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24168);
	// lwz r19,24244(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24244);
	// lwz r19,24320(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24320);
	// lwz r19,24412(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24412);
	// lwz r19,24488(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24488);
	// lwz r19,24564(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24564);
	// lwz r19,24640(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24640);
	// lwz r19,24732(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24732);
	// lwz r19,24808(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24808);
	// lwz r19,24884(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24884);
	// lwz r19,24960(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24960);
	// lwz r19,25052(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25052);
	// lwz r19,25128(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25128);
	// lwz r19,25204(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25204);
	// lwz r19,25280(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25280);
	// lwz r19,25372(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25372);
	// lwz r19,25448(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25448);
	// lwz r19,25524(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25524);
	// lwz r19,25600(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25600);
	// lwz r19,25692(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25692);
	// lwz r19,25800(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25800);
	// lwz r19,25916(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25916);
	// lwz r19,4548(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4548);
	// lwz r19,4600(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// lwz r19,4644(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4644);
	// lwz r19,4688(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4688);
	// lwz r19,4732(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4732);
	// lwz r19,4784(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4784);
	// lwz r19,4828(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4828);
	// lwz r19,4872(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4872);
	// lwz r19,4916(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4916);
	// lwz r19,4968(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4968);
	// lwz r19,5012(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5012);
	// lwz r19,5056(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5056);
	// lwz r19,5100(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5100);
	// lwz r19,5152(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5152);
	// lwz r19,5196(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5196);
	// lwz r19,5240(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5240);
	// lwz r19,5892(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5892);
	// lwz r19,6244(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6244);
	// lwz r19,6360(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6360);
	// lwz r19,6428(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6428);
	// lwz r19,6504(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6504);
	// lwz r19,6588(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6588);
	// lwz r19,6680(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6680);
	// lwz r19,6780(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6780);
	// lwz r19,6068(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6068);
	// lwz r19,6888(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6888);
	// lwz r19,6944(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6944);
	// lwz r19,7016(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7016);
	// lwz r19,7096(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7096);
	// lwz r19,7184(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7184);
	// lwz r19,7280(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7280);
	// lwz r19,7384(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7384);
	// lwz r19,7496(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// lwz r19,7864(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7864);
	// lwz r19,7920(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7920);
	// lwz r19,7988(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7988);
	// lwz r19,8064(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8064);
	// lwz r19,8148(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8148);
	// lwz r19,8240(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// lwz r19,8340(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8340);
	// lwz r19,8448(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8448);
	// lwz r19,8564(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8564);
	// lwz r19,8688(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8688);
	// lwz r19,8820(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8820);
	// lwz r19,8960(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8960);
	// lwz r19,9108(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9108);
	// lwz r19,9264(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9264);
	// lwz r19,9428(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9428);
	// lwz r19,9600(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9600);
	// lwz r19,9780(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9780);
	// lwz r19,9968(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9968);
	// lwz r19,10164(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10164);
	// lwz r19,10368(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10368);
	// lwz r19,10580(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10580);
	// lwz r19,10800(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10800);
	// lwz r19,11028(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11028);
	// lwz r19,11264(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11264);
	// lwz r19,11508(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// lwz r19,11760(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11760);
	// lwz r19,12020(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12020);
	// lwz r19,12288(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12288);
	// lwz r19,12564(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12564);
	// lwz r19,12848(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12848);
	// lwz r19,13140(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13140);
	// lwz r19,13440(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13440);
	// lwz r19,13492(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13492);
	// lwz r19,13536(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13536);
	// lwz r19,13580(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13580);
	// lwz r19,13624(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13624);
	// lwz r19,13676(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13676);
	// lwz r19,13720(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13720);
	// lwz r19,13764(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13764);
	// lwz r19,13808(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13808);
	// lwz r19,13860(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13860);
	// lwz r19,13904(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13904);
	// lwz r19,13948(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13948);
	// lwz r19,13992(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13992);
	// lwz r19,14044(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14044);
	// lwz r19,14088(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14088);
	// lwz r19,14132(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14132);
	// lwz r19,14176(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14176);
	// lwz r19,14228(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14228);
	// lwz r19,14272(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14272);
	// lwz r19,14316(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14316);
	// lwz r19,14360(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14360);
	// lwz r19,14412(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14412);
	// lwz r19,14456(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14456);
	// lwz r19,14500(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14500);
	// lwz r19,14544(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14544);
	// lwz r19,14596(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14596);
	// lwz r19,14640(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14640);
	// lwz r19,14684(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14684);
	// lwz r19,14728(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14728);
	// lwz r19,14780(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14780);
	// lwz r19,14824(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14824);
	// lwz r19,14868(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14868);
	// lwz r19,14912(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14912);
	// lwz r19,14972(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14972);
	// lwz r19,15024(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15024);
	// lwz r19,15076(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15076);
	// lwz r19,15128(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15128);
	// lwz r19,15188(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15188);
	// lwz r19,15240(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15240);
	// lwz r19,15292(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15292);
	// lwz r19,15344(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15344);
	// lwz r19,15404(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15404);
	// lwz r19,15456(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15456);
	// lwz r19,15508(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15508);
	// lwz r19,15560(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15560);
	// lwz r19,15620(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15620);
	// lwz r19,15672(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15672);
	// lwz r19,15724(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15724);
	// lwz r19,15776(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15776);
	// lwz r19,15836(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15836);
	// lwz r19,15888(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15888);
	// lwz r19,15940(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15940);
	// lwz r19,15992(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15992);
	// lwz r19,16052(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16052);
	// lwz r19,16104(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16104);
	// lwz r19,16156(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16156);
	// lwz r19,16208(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16208);
	// lwz r19,16268(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16268);
	// lwz r19,16320(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16320);
	// lwz r19,16372(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16372);
	// lwz r19,16424(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16424);
	// lwz r19,16484(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16484);
	// lwz r19,16536(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16536);
	// lwz r19,16588(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16588);
	// lwz r19,16640(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16640);
	// lwz r19,16708(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16708);
	// lwz r19,16768(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16768);
	// lwz r19,16828(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16828);
	// lwz r19,16888(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16888);
	// lwz r19,16956(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16956);
	// lwz r19,17016(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17016);
	// lwz r19,17076(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17076);
	// lwz r19,17136(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17136);
	// lwz r19,17204(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17204);
	// lwz r19,17264(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17264);
	// lwz r19,17324(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17324);
	// lwz r19,17384(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17384);
	// lwz r19,17452(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17452);
	// lwz r19,17512(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17512);
	// lwz r19,17572(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17572);
	// lwz r19,17632(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17632);
	// lwz r19,17700(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17700);
	// lwz r19,17760(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17760);
	// lwz r19,17820(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17820);
	// lwz r19,17880(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17880);
	// lwz r19,17948(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17948);
	// lwz r19,18008(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18008);
	// lwz r19,18068(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18068);
	// lwz r19,18128(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18128);
	// lwz r19,18196(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18196);
	// lwz r19,18256(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18256);
	// lwz r19,18316(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18316);
	// lwz r19,18376(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18376);
	// lwz r19,18444(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18444);
	// lwz r19,18504(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18504);
	// lwz r19,18564(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18564);
	// lwz r19,18624(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18624);
	// lwz r19,18700(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18700);
	// lwz r19,18768(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18768);
	// lwz r19,18836(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18836);
	// lwz r19,18904(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18904);
	// lwz r19,18980(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18980);
	// lwz r19,19048(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19048);
	// lwz r19,19116(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19116);
	// lwz r19,19184(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19184);
	// lwz r19,19260(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19260);
	// lwz r19,19328(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19328);
	// lwz r19,19396(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19396);
	// lwz r19,19464(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19464);
	// lwz r19,19540(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19540);
	// lwz r19,19608(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19608);
	// lwz r19,19676(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19676);
	// lwz r19,19744(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19744);
	// lwz r19,19820(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19820);
	// lwz r19,19888(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19888);
	// lwz r19,19956(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19956);
	// lwz r19,20024(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20024);
	// lwz r19,20100(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20100);
	// lwz r19,20168(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20168);
	// lwz r19,20236(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20236);
	// lwz r19,20304(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20304);
	// lwz r19,20380(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20380);
	// lwz r19,20448(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20448);
	// lwz r19,20516(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20516);
	// lwz r19,20584(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20584);
	// lwz r19,20660(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20660);
	// lwz r19,20728(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20728);
	// lwz r19,20796(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20796);
	// lwz r19,20864(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20864);
	// lwz r19,20948(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20948);
	// lwz r19,21024(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21024);
	// lwz r19,21100(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21100);
	// lwz r19,21176(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21176);
	// lwz r19,21260(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21260);
	// lwz r19,21336(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21336);
	// lwz r19,21412(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21412);
	// lwz r19,21488(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21488);
	// lwz r19,21572(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21572);
	// lwz r19,21648(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21648);
	// lwz r19,21724(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21724);
	// lwz r19,21800(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21800);
	// lwz r19,21884(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21884);
	// lwz r19,21960(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21960);
	// lwz r19,22036(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22036);
	// lwz r19,22112(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22112);
	// lwz r19,22196(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22196);
	// lwz r19,22272(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22272);
	// lwz r19,22348(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22348);
	// lwz r19,22424(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22424);
	// lwz r19,22508(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22508);
	// lwz r19,22584(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22584);
	// lwz r19,22660(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22660);
	// lwz r19,22736(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22736);
	// lwz r19,22820(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22820);
	// lwz r19,22896(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22896);
	// lwz r19,22972(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22972);
	// lwz r19,23048(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23048);
	// lwz r19,23132(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23132);
	// lwz r19,23208(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23208);
	// lwz r19,23284(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23284);
	// lwz r19,23360(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23360);
	// lwz r19,23452(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23452);
	// lwz r19,23528(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23528);
	// lwz r19,23604(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23604);
	// lwz r19,23680(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23680);
	// lwz r19,23772(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23772);
	// lwz r19,23848(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23848);
	// lwz r19,23924(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23924);
	// lwz r19,24000(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24000);
	// lwz r19,24092(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24092);
	// lwz r19,24168(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24168);
	// lwz r19,24244(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24244);
	// lwz r19,24320(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24320);
	// lwz r19,24412(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24412);
	// lwz r19,24488(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24488);
	// lwz r19,24564(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24564);
	// lwz r19,24640(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24640);
	// lwz r19,24732(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24732);
	// lwz r19,24808(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24808);
	// lwz r19,24884(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24884);
	// lwz r19,24960(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24960);
	// lwz r19,25052(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25052);
	// lwz r19,25128(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25128);
	// lwz r19,25204(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25204);
	// lwz r19,25280(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25280);
	// lwz r19,25372(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25372);
	// lwz r19,25448(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25448);
	// lwz r19,25524(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25524);
	// lwz r19,25600(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25600);
	// lwz r19,25692(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25692);
	// lwz r19,25800(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25800);
	// lwz r19,25916(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25916);
loc_827F0AC4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r8,r8,255
	ctx.r8.s64 = ctx.r8.s64 + 255;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f0ac4
	if (ctx.cr6.eq) goto loc_827F0AC4;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r9,r9,-255
	ctx.r9.s64 = ctx.r9.s64 + -255;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,3(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,6(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,7(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,9(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,10(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,11(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,13(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,14(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,15(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r8,17(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// stb r8,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r8.u8);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
loc_827F0B7C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x827f0b7c
	if (!ctx.cr0.eq) goto loc_827F0B7C;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// cmplwi cr6,r9,767
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 767, ctx.xer);
	// ble cr6,0x827efeac
	if (!ctx.cr6.gt) goto loc_827EFEAC;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F0BAC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F0BDC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F0C14:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F0C54:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F0C9C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F0CEC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// lbz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F0D44:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// lbz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// lbz r7,9(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// stb r7,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r7.u8);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F0DA4:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// lbz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// lbz r7,9(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r7,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r7.u8);
	// lbz r8,10(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// stb r8,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r8.u8);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F0E0C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// lbz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// lbz r7,9(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r7,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r7.u8);
	// lbz r8,10(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// stb r8,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r8.u8);
	// lbz r7,11(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stb r7,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r7.u8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F0E7C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// lbz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// lbz r7,9(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r7,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r7.u8);
	// lbz r8,10(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// stb r8,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r8.u8);
	// lbz r7,11(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// stb r7,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r7.u8);
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// addi r10,r10,13
	ctx.r10.s64 = ctx.r10.s64 + 13;
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F0EF4:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// lbz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// lbz r7,9(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r7,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r7.u8);
	// lbz r8,10(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// stb r8,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r8.u8);
	// lbz r7,11(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// stb r7,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r7.u8);
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// lbz r7,13(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// addi r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 + 14;
	// stb r7,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r7.u8);
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F0F74:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// lbz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// lbz r7,9(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r7,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r7.u8);
	// lbz r8,10(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// stb r8,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r8.u8);
	// lbz r7,11(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// stb r7,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r7.u8);
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// lbz r7,13(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// stb r7,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r7.u8);
	// lbz r8,14(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// stb r8,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r8.u8);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F0FFC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// lbz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// lbz r7,9(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r7,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r7.u8);
	// lbz r8,10(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// stb r8,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r8.u8);
	// lbz r7,11(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// stb r7,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r7.u8);
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// lbz r7,13(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// stb r7,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r7.u8);
	// lbz r8,14(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stb r8,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r8.u8);
	// lbz r7,15(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r7,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r7.u8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F108C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// lbz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// lbz r7,9(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r7,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r7.u8);
	// lbz r8,10(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// stb r8,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r8.u8);
	// lbz r7,11(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// stb r7,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r7.u8);
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// lbz r7,13(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// stb r7,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r7.u8);
	// lbz r8,14(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stb r8,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r8.u8);
	// lbz r7,15(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// stb r7,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r7.u8);
	// lbz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// addi r10,r10,17
	ctx.r10.s64 = ctx.r10.s64 + 17;
	// stb r8,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r8.u8);
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F1124:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// lbz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// lbz r7,9(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r7,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r7.u8);
	// lbz r8,10(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// stb r8,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r8.u8);
	// lbz r7,11(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// stb r7,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r7.u8);
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// lbz r7,13(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// stb r7,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r7.u8);
	// lbz r8,14(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stb r8,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r8.u8);
	// lbz r7,15(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// stb r7,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r7.u8);
	// lbz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// stb r8,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r8.u8);
	// lbz r7,17(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// stb r7,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r7.u8);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F11C4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2049(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2049);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2048(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2048);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2047(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2047);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F11F8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2049(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2049);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2048(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2048);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2047(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2047);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F1224:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2049(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2049);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2048(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2048);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2047(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2047);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F1250:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2049(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2049);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2048(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2048);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2047(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2047);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F127C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2050(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2050);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2049(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2049);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2048(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2048);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F12B0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2050(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2050);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2049(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2049);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2048(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2048);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F12DC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2050(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2050);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2049(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2049);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2048(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2048);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F1308:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2050(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2050);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2049(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2049);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2048(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2048);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F1334:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2051(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2051);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2050(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2050);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2049(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2049);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F1368:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2051(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2051);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2050(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2050);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2049(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2049);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F1394:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2051(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2051);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2050(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2050);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2049(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2049);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F13C0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2051(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2051);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2050(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2050);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2049(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2049);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F13EC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2052(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2052);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2051(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2051);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2050(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2050);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F1420:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2052(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2052);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2051(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2051);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2050(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2050);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F144C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2052(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2052);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2051(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2051);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2050(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2050);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F1478:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2052(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2052);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2051(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2051);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2050(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2050);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F14A4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F14D0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F14F4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F1518:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F153C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F1568:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F158C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F15B0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F15D4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r9,-2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F1600:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r9,-2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F1624:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r9,-2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F1648:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r9,-2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F166C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r9,-3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F1698:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r9,-3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F16BC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r9,-3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F16E0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r9,-3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F1704:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_827F1708:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827f1708
	if (ctx.cr6.eq) goto loc_827F1708;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r30,r8,6
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 6);
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r30,r30,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r7,r7,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r7.s64;
	// addi r8,r9,-255
	ctx.r8.s64 = ctx.r9.s64 + -255;
	// addi r9,r7,-16384
	ctx.r9.s64 = ctx.r7.s64 + -16384;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r9,9
	ctx.r9.s64 = ctx.r9.s64 + 9;
	// lbz r30,-16384(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + -16384);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r30,-16383(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + -16383);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// lbz r30,-16382(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + -16382);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// lbz r30,-16381(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + -16381);
	// stb r30,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r30.u8);
	// lbz r30,-16380(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + -16380);
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// lbz r30,-16379(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + -16379);
	// stb r30,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r30.u8);
	// lbz r30,-16378(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + -16378);
	// stb r30,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r30.u8);
	// lbz r30,-16377(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + -16377);
	// stb r30,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r30.u8);
	// lbz r7,-16376(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + -16376);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
loc_827F1798:
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x827f1798
	if (!ctx.cr0.eq) goto loc_827F1798;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F17B4:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_827F17B8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827f17b8
	if (ctx.cr6.eq) goto loc_827F17B8;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r30,r8,6
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 6);
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r30,r30,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r7,r7,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r7.s64;
	// addi r8,r9,-255
	ctx.r8.s64 = ctx.r9.s64 + -255;
	// subf r9,r4,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r4.s64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r7,r9,9
	ctx.r7.s64 = ctx.r9.s64 + 9;
	// lbz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r30,1(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// lbz r30,2(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// lbz r30,3(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r30,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r30.u8);
	// lbz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// lbz r30,5(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r30,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r30.u8);
	// lbz r30,6(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r30,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r30.u8);
	// lbz r30,7(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r30,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r30.u8);
	// lbz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
loc_827F1848:
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x827f1848
	if (!ctx.cr0.eq) goto loc_827F1848;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F1864:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827f65b8
	if (ctx.cr6.eq) goto loc_827F65B8;
	// lbz r8,-16384(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16384);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,-16383(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16383);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r9,-16382(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16382);
loc_827F189C:
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
loc_827F18A0:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_827F18A4:
	// lbz r8,-2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// li r9,256
	ctx.r9.s64 = 256;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827efe98
	if (ctx.cr6.eq) goto loc_827EFE98;
loc_827F18B8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x827f18b8
	if (!ctx.cr0.eq) goto loc_827F18B8;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F18D8:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-16384(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16384);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-16383(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16383);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-16382(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16382);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-16381(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16381);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F191C:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-16384(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16384);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-16383(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16383);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-16382(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16382);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-16381(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16381);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-16380(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16380);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F1968:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-16384(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16384);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-16383(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16383);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-16382(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16382);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-16381(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16381);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-16380(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16380);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,-16379(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16379);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F19BC:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-16384(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16384);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-16383(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16383);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-16382(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16382);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-16381(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16381);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-16380(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16380);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-16379(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16379);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-16378(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16378);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F1A18:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-16384(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16384);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-16383(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16383);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-16382(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16382);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-16381(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16381);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-16380(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16380);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-16379(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16379);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-16378(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16378);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,-16377(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16377);
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F1A7C:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-16384(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16384);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-16383(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16383);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-16382(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16382);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-16381(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16381);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-16380(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16380);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-16379(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16379);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-16378(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16378);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,-16377(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16377);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,-16376(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -16376);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F1AE8:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r9,r4,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r4.s64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// b 0x827f189c
	goto loc_827F189C;
loc_827F1B20:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r9,r4,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r4.s64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F1B68:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r9,r4,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r4.s64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F1BB8:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r9,r4,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r4.s64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F1C10:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r9,r4,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r4.s64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r9,6(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r9,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F1C70:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r9,r4,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r4.s64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F1CD8:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r9,r4,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r4.s64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// lbz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F1D48:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_827F1D4C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827f1d4c
	if (ctx.cr6.eq) goto loc_827F1D4C;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r30,r8,6
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 6);
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r30,r30,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r7,r7,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r7.s64;
	// addi r8,r9,-255
	ctx.r8.s64 = ctx.r9.s64 + -255;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r9,33
	ctx.r9.s64 = ctx.r9.s64 + 33;
	// lbz r30,-1(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + -1);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r30,0(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// lbz r30,1(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// lbz r30,2(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// stb r30,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r30.u8);
	// lbz r30,3(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// lbz r30,4(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 4);
	// stb r30,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r30.u8);
	// lbz r30,5(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// stb r30,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r30.u8);
	// lbz r30,6(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 6);
	// stb r30,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r30.u8);
	// lbz r30,7(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 7);
	// stb r30,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r30.u8);
	// lbz r30,8(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 8);
	// stb r30,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r30.u8);
	// lbz r30,9(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 9);
	// stb r30,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r30.u8);
	// lbz r30,10(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 10);
	// stb r30,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r30.u8);
	// lbz r30,11(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 11);
	// stb r30,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r30.u8);
	// lbz r30,12(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 12);
	// stb r30,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r30.u8);
	// lbz r30,13(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 13);
	// stb r30,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r30.u8);
	// lbz r30,14(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 14);
	// stb r30,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r30.u8);
	// lbz r30,15(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 15);
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// lbz r30,16(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 16);
	// stb r30,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r30.u8);
	// lbz r30,17(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 17);
	// stb r30,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r30.u8);
	// lbz r30,18(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 18);
	// stb r30,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r30.u8);
	// lbz r30,19(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 19);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// lbz r30,20(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 20);
	// stb r30,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r30.u8);
	// lbz r30,21(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 21);
	// stb r30,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r30.u8);
	// lbz r30,22(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 22);
	// stb r30,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r30.u8);
	// lbz r30,23(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 23);
	// stb r30,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r30.u8);
	// lbz r30,24(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 24);
	// stb r30,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r30.u8);
	// lbz r30,25(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 25);
	// stb r30,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r30.u8);
	// lbz r30,26(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 26);
	// stb r30,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r30.u8);
	// lbz r30,27(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 27);
	// stb r30,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r30.u8);
	// lbz r30,28(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 28);
	// stb r30,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r30.u8);
	// lbz r30,29(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 29);
	// stb r30,30(r11)
	PPC_STORE_U8(ctx.r11.u32 + 30, ctx.r30.u8);
	// lbz r30,30(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 30);
	// stb r30,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r30.u8);
	// lbz r7,31(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 31);
	// stb r7,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r7.u8);
	// addi r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 33;
loc_827F1E9C:
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x827f1e9c
	if (!ctx.cr0.eq) goto loc_827F1E9C;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F1EB8:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// b 0x827f18a0
	goto loc_827F18A0;
loc_827F1EF0:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F1F34:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F1F80:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F1FD4:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2030:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,6(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2094:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2100:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r9,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r9.u8);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2174:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F21F0:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r9,10(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r9,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r9.u8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2274:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2300:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r9,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r9.u8);
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2394:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2430:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r9,14(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r9,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r9.u8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F24D4:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2580:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stb r9,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r9.u8);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2634:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stb r8,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r8.u8);
	// lbz r7,17(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// addi r11,r11,19
	ctx.r11.s64 = ctx.r11.s64 + 19;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F26F0:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stb r8,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r8.u8);
	// lbz r7,17(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// lbz r9,18(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// stb r9,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r9.u8);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F27B4:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stb r8,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r8.u8);
	// lbz r7,17(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// lbz r8,18(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// stb r8,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r8.u8);
	// lbz r7,19(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19);
	// stb r7,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r7.u8);
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2880:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stb r8,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r8.u8);
	// lbz r7,17(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// lbz r8,18(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// stb r8,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r8.u8);
	// lbz r7,19(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19);
	// stb r7,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r7.u8);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// stb r9,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r9.u8);
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2954:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stb r8,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r8.u8);
	// lbz r7,17(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// lbz r8,18(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// stb r8,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r8.u8);
	// lbz r7,19(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19);
	// stb r7,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r7.u8);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// stb r8,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r8.u8);
	// lbz r7,21(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// stb r7,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r7.u8);
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2A30:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stb r8,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r8.u8);
	// lbz r7,17(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// lbz r8,18(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// stb r8,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r8.u8);
	// lbz r7,19(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19);
	// stb r7,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r7.u8);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// stb r8,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r8.u8);
	// lbz r7,21(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// stb r7,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r7.u8);
	// lbz r9,22(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 22);
	// stb r9,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r9.u8);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2B14:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stb r8,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r8.u8);
	// lbz r7,17(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// lbz r8,18(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// stb r8,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r8.u8);
	// lbz r7,19(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19);
	// stb r7,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r7.u8);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// stb r8,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r8.u8);
	// lbz r7,21(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// stb r7,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r7.u8);
	// lbz r8,22(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 22);
	// stb r8,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r8.u8);
	// lbz r7,23(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 23);
	// stb r7,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2C00:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stb r8,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r8.u8);
	// lbz r7,17(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// lbz r8,18(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// stb r8,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r8.u8);
	// lbz r7,19(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19);
	// stb r7,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r7.u8);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// stb r8,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r8.u8);
	// lbz r7,21(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// stb r7,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r7.u8);
	// lbz r8,22(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 22);
	// stb r8,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r8.u8);
	// lbz r7,23(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 23);
	// stb r7,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// lbz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// stb r9,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r9.u8);
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2CF4:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stb r8,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r8.u8);
	// lbz r7,17(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// lbz r8,18(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// stb r8,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r8.u8);
	// lbz r7,19(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19);
	// stb r7,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r7.u8);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// stb r8,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r8.u8);
	// lbz r7,21(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// stb r7,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r7.u8);
	// lbz r8,22(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 22);
	// stb r8,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r8.u8);
	// lbz r7,23(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 23);
	// stb r7,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// lbz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// stb r8,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r8.u8);
	// lbz r7,25(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 25);
	// stb r7,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r7.u8);
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2DF0:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stb r8,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r8.u8);
	// lbz r7,17(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// lbz r8,18(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// stb r8,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r8.u8);
	// lbz r7,19(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19);
	// stb r7,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r7.u8);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// stb r8,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r8.u8);
	// lbz r7,21(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// stb r7,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r7.u8);
	// lbz r8,22(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 22);
	// stb r8,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r8.u8);
	// lbz r7,23(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 23);
	// stb r7,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// lbz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// stb r8,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r8.u8);
	// lbz r7,25(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 25);
	// stb r7,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r7.u8);
	// lbz r9,26(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 26);
	// stb r9,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r9.u8);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F2EF4:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stb r8,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r8.u8);
	// lbz r7,17(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// lbz r8,18(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// stb r8,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r8.u8);
	// lbz r7,19(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19);
	// stb r7,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r7.u8);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// stb r8,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r8.u8);
	// lbz r7,21(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// stb r7,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r7.u8);
	// lbz r8,22(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 22);
	// stb r8,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r8.u8);
	// lbz r7,23(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 23);
	// stb r7,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// lbz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// stb r8,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r8.u8);
	// lbz r7,25(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 25);
	// stb r7,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r7.u8);
	// lbz r8,26(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 26);
	// stb r8,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r8.u8);
	// lbz r7,27(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 27);
	// stb r7,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r7.u8);
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F3000:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stb r8,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r8.u8);
	// lbz r7,17(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// lbz r8,18(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// stb r8,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r8.u8);
	// lbz r7,19(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19);
	// stb r7,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r7.u8);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// stb r8,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r8.u8);
	// lbz r7,21(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// stb r7,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r7.u8);
	// lbz r8,22(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 22);
	// stb r8,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r8.u8);
	// lbz r7,23(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 23);
	// stb r7,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// lbz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// stb r8,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r8.u8);
	// lbz r7,25(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 25);
	// stb r7,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r7.u8);
	// lbz r8,26(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 26);
	// stb r8,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r8.u8);
	// lbz r7,27(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 27);
	// stb r7,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r7.u8);
	// lbz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// stb r9,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r9.u8);
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F3114:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stb r8,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r8.u8);
	// lbz r7,17(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// lbz r8,18(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// stb r8,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r8.u8);
	// lbz r7,19(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19);
	// stb r7,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r7.u8);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// stb r8,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r8.u8);
	// lbz r7,21(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// stb r7,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r7.u8);
	// lbz r8,22(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 22);
	// stb r8,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r8.u8);
	// lbz r7,23(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 23);
	// stb r7,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// lbz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// stb r8,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r8.u8);
	// lbz r7,25(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 25);
	// stb r7,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r7.u8);
	// lbz r8,26(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 26);
	// stb r8,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r8.u8);
	// lbz r7,27(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 27);
	// stb r7,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r7.u8);
	// lbz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// stb r8,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r8.u8);
	// lbz r7,29(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 29);
	// stb r7,30(r11)
	PPC_STORE_U8(ctx.r11.u32 + 30, ctx.r7.u8);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F3230:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stb r8,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r8.u8);
	// lbz r7,17(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// lbz r8,18(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// stb r8,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r8.u8);
	// lbz r7,19(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19);
	// stb r7,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r7.u8);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// stb r8,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r8.u8);
	// lbz r7,21(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// stb r7,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r7.u8);
	// lbz r8,22(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 22);
	// stb r8,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r8.u8);
	// lbz r7,23(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 23);
	// stb r7,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// lbz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// stb r8,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r8.u8);
	// lbz r7,25(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 25);
	// stb r7,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r7.u8);
	// lbz r8,26(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 26);
	// stb r8,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r8.u8);
	// lbz r7,27(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 27);
	// stb r7,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r7.u8);
	// lbz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// stb r8,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r8.u8);
	// lbz r7,29(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 29);
	// stb r7,30(r11)
	PPC_STORE_U8(ctx.r11.u32 + 30, ctx.r7.u8);
	// lbz r9,30(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 30);
	// stb r9,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r9.u8);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F3354:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// lbz r7,11(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbz r7,15(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// stb r8,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r8.u8);
	// lbz r7,17(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// lbz r8,18(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// stb r8,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r8.u8);
	// lbz r7,19(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19);
	// stb r7,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r7.u8);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// stb r8,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r8.u8);
	// lbz r7,21(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// stb r7,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r7.u8);
	// lbz r8,22(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 22);
	// stb r8,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r8.u8);
	// lbz r7,23(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 23);
	// stb r7,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// lbz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// stb r8,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r8.u8);
	// lbz r7,25(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 25);
	// stb r7,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r7.u8);
	// lbz r8,26(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 26);
	// stb r8,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r8.u8);
	// lbz r7,27(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 27);
	// stb r7,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r7.u8);
	// lbz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// stb r8,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r8.u8);
	// lbz r7,29(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 29);
	// stb r7,30(r11)
	PPC_STORE_U8(ctx.r11.u32 + 30, ctx.r7.u8);
	// lbz r8,30(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 30);
	// stb r8,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r8.u8);
	// lbz r7,31(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 31);
	// stb r7,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r7.u8);
	// addi r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 33;
	// b 0x827f18a4
	goto loc_827F18A4;
loc_827F3480:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F34B4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F34E0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F350C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F3538:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F356C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F3598:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F35C4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F35F0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F3624:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F3650:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F367C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F36A8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F36DC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F3708:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F3734:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F3760:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F3794:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F37C0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F37EC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F3818:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F384C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F3878:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F38A4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F38D0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F3904:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F3930:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F395C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F3988:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F39BC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F39E8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F3A14:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F3A40:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F3A7C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F3AB0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F3AE4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F3B18:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F3B54:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F3B88:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F3BBC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F3BF0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F3C2C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F3C60:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F3C94:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F3CC8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F3D04:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F3D38:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F3D6C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F3DA0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F3DDC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F3E10:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F3E44:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F3E78:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F3EB4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F3EE8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F3F1C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F3F50:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F3F8C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F3FC0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F3FF4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F4028:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-5(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F4064:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-5(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F4098:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-5(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F40CC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r9,-5(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F4100:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F4144:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F4180:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F41BC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F41F8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F423C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F4278:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F42B4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F42F0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F4334:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F4370:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F43AC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F43E8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F442C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F4468:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F44A4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F44E0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F4524:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F4560:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F459C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F45D8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F461C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F4658:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F4694:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F46D0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F4714:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F4750:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F478C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F47C8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F480C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F4848:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F4884:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F48C0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F490C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F4950:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F4994:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F49D8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F4A24:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F4A68:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F4AAC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F4AF0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F4B3C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F4B80:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F4BC4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F4C08:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F4C54:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F4C98:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F4CDC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F4D20:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F4D6C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F4DB0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F4DF4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F4E38:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F4E84:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F4EC8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F4F0C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F4F50:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,-2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F4F9C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,-2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F4FE0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,-2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F5024:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,-2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F5068:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,-3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F50B4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,-3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F50F8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,-3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F513C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r9,-3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F5180:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F51D4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F5220:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F526C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F52B8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F530C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F5358:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F53A4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F53F0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F5444:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F5490:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F54DC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F5528:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F557C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F55C8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F5614:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F5660:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F56B4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F5700:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F574C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F5798:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F57EC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F5838:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F5884:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F58D0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F5924:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F5970:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F59BC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F5A08:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F5A5C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f64ac
	goto loc_827F64AC;
loc_827F5AA8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f6518
	goto loc_827F6518;
loc_827F5AF4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x827f658c
	goto loc_827F658C;
loc_827F5B40:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,6(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F5B9C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,6(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// b 0x827f64a4
	goto loc_827F64A4;
loc_827F5BE8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,6(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// b 0x827f6510
	goto loc_827F6510;
loc_827F5C34:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,6(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// b 0x827f6584
	goto loc_827F6584;
loc_827F5C80:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,5(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F5CDC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,5(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// b 0x827f64a4
	goto loc_827F64A4;
loc_827F5D28:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,5(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// b 0x827f6510
	goto loc_827F6510;
loc_827F5D74:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,5(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// b 0x827f6584
	goto loc_827F6584;
loc_827F5DC0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F5E1C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// b 0x827f64a4
	goto loc_827F64A4;
loc_827F5E68:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// b 0x827f6510
	goto loc_827F6510;
loc_827F5EB4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// b 0x827f6584
	goto loc_827F6584;
loc_827F5F00:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F5F5C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// b 0x827f64a4
	goto loc_827F64A4;
loc_827F5FA8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// b 0x827f6510
	goto loc_827F6510;
loc_827F5FF4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// b 0x827f6584
	goto loc_827F6584;
loc_827F6040:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F609C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// b 0x827f64a4
	goto loc_827F64A4;
loc_827F60E8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// b 0x827f6510
	goto loc_827F6510;
loc_827F6134:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// b 0x827f6584
	goto loc_827F6584;
loc_827F6180:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F61DC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// b 0x827f64a4
	goto loc_827F64A4;
loc_827F6228:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// b 0x827f6510
	goto loc_827F6510;
loc_827F6274:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// b 0x827f6584
	goto loc_827F6584;
loc_827F62C0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F631C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// b 0x827f64a4
	goto loc_827F64A4;
loc_827F6368:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// b 0x827f6510
	goto loc_827F6510;
loc_827F63B4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// b 0x827f6584
	goto loc_827F6584;
loc_827F6400:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F645C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
loc_827F64A4:
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_827F64AC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F64C8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
loc_827F6510:
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_827F6518:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F653C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r8,-7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -7);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,-6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r8,-5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -5);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r8,-3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
loc_827F6584:
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_827F658C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x827efe98
	goto loc_827EFE98;
loc_827F65B8:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// beq cr6,0x827f65d8
	if (ctx.cr6.eq) goto loc_827F65D8;
	// subfc r11,r31,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
loc_827F65D8:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F65E4"))) PPC_WEAK_FUNC(sub_827F65E4);
PPC_FUNC_IMPL(__imp__sub_827F65E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F65E8"))) PPC_WEAK_FUNC(sub_827F65E8);
PPC_FUNC_IMPL(__imp__sub_827F65E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x827F65F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// stfd f0,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f0.u64);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r8,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r8.u32);
	// addi r28,r31,20320
	ctx.r28.s64 = ctx.r31.s64 + 20320;
	// stw r9,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// lwz r6,96(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r7,92(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// lfd f13,160(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// stfd f13,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f13.u64);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// lfd f12,160(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// stfd f12,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f12.u64);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r7,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r7.u32);
	// stw r8,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r8.u32);
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r6,92(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// lfd f11,160(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// stfd f11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f11.u64);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,20320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20320, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,20324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20324, ctx.r8.u32);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r7,20328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20328, ctx.r7.u32);
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r6,20332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20332, ctx.r6.u32);
	// bl 0x823beaf8
	ctx.lr = 0x827F66E8;
	sub_823BEAF8(ctx, base);
	// stw r27,20340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20340, ctx.r27.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x827f6728
	if (!ctx.cr6.eq) goto loc_827F6728;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lbz r8,7(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lbz r7,6(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6);
	// addi r4,r11,6472
	ctx.r4.s64 = ctx.r11.s64 + 6472;
	// lbz r6,5(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 5);
	// lbz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// bl 0x8232e868
	ctx.lr = 0x827F6714;
	sub_8232E868(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82295908
	ctx.lr = 0x827F6720;
	sub_82295908(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x827F6728;
	sub_82299080(ctx, base);
loc_827F6728:
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r25,20336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20336, ctx.r25.u32);
	// stw r24,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,20344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20344, ctx.r10.u32);
	// bne cr6,0x827f6748
	if (!ctx.cr6.eq) goto loc_827F6748;
	// li r11,32
	ctx.r11.s64 = 32;
loc_827F6748:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r10,512
	ctx.r10.s64 = 512;
	// beq cr6,0x827f6758
	if (ctx.cr6.eq) goto loc_827F6758;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_827F6758:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82786bc8
	ctx.lr = 0x827F677C;
	sub_82786BC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F6790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827f6820
	if (ctx.cr6.eq) goto loc_827F6820;
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827f67b4
	if (ctx.cr6.eq) goto loc_827F67B4;
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// b 0x827f67b8
	goto loc_827F67B8;
loc_827F67B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_827F67B8:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827f7d28
	ctx.lr = 0x827F67C4;
	sub_827F7D28(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f6820
	if (!ctx.cr6.eq) goto loc_827F6820;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x822959a8
	ctx.lr = 0x827F67DC;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f6818
	if (ctx.cr6.eq) goto loc_827F6818;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f6804
	if (ctx.cr6.eq) goto loc_827F6804;
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x82407d18
	ctx.lr = 0x827F67F8;
	sub_82407D18(ctx, base);
	// stw r3,20344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20344, ctx.r3.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_827F6804:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82407d18
	ctx.lr = 0x827F680C;
	sub_82407D18(ctx, base);
	// stw r3,20344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20344, ctx.r3.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_827F6818:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,20344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20344, ctx.r3.u32);
loc_827F6820:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6828"))) PPC_WEAK_FUNC(sub_827F6828);
PPC_FUNC_IMPL(__imp__sub_827F6828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x827F6830;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,20344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f68f0
	if (ctx.cr6.eq) goto loc_827F68F0;
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f6938
	if (ctx.cr6.eq) goto loc_827F6938;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f68a8
	if (ctx.cr6.eq) goto loc_827F68A8;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r10.u32);
	// lwz r3,20344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f6898
	if (ctx.cr6.eq) goto loc_827F6898;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F6898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F6898:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20344, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_827F68A8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r5,20324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20324, ctx.r5.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F68EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,20344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20344, ctx.r30.u32);
loc_827F68F0:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bea278
	ctx.lr = 0x827F68FC;
	sub_82BEA278(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r7,r31,20320
	ctx.r7.s64 = ctx.r31.s64 + 20320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r9,156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r3,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r3.u32);
	// lwz r3,20336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20336);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F6938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F6938:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6940"))) PPC_WEAK_FUNC(sub_827F6940);
PPC_FUNC_IMPL(__imp__sub_827F6940) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r10,6440
	ctx.r4.s64 = ctx.r10.s64 + 6440;
	// lhz r9,20322(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20322);
	// lbz r8,20327(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20327);
	// lbz r7,20326(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20326);
	// lbz r6,20325(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20325);
	// lbz r5,20324(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20324);
	// bl 0x8232e868
	ctx.lr = 0x827F6978;
	sub_8232E868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_827F6990"))) PPC_WEAK_FUNC(sub_827F6990);
PPC_FUNC_IMPL(__imp__sub_827F6990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827F6998;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827f69bc
	if (!ctx.cr6.eq) goto loc_827F69BC;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r30,r11,-23164
	ctx.r30.s64 = ctx.r11.s64 + -23164;
	// b 0x827f69ec
	goto loc_827F69EC;
loc_827F69BC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827f69d0
	if (!ctx.cr6.eq) goto loc_827F69D0;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r30,r11,-23148
	ctx.r30.s64 = ctx.r11.s64 + -23148;
	// b 0x827f69ec
	goto loc_827F69EC;
loc_827F69D0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827f69e4
	if (!ctx.cr6.eq) goto loc_827F69E4;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r30,r11,-23136
	ctx.r30.s64 = ctx.r11.s64 + -23136;
	// b 0x827f69ec
	goto loc_827F69EC;
loc_827F69E4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,1588
	ctx.r30.s64 = ctx.r11.s64 + 1588;
loc_827F69EC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lhz r9,20322(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20322);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lbz r8,20327(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20327);
	// addi r4,r11,6440
	ctx.r4.s64 = ctx.r11.s64 + 6440;
	// lbz r7,20326(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20326);
	// lbz r6,20325(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20325);
	// lbz r5,20324(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20324);
	// bl 0x8232e868
	ctx.lr = 0x827F6A10;
	sub_8232E868(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827f6a2c
	if (!ctx.cr6.eq) goto loc_827F6A2C;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_827F6A2C:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f6a3c
	if (ctx.cr6.eq) goto loc_827F6A3C;
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
loc_827F6A3C:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,-23120
	ctx.r4.s64 = ctx.r11.s64 + -23120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232e868
	ctx.lr = 0x827F6A50;
	sub_8232E868(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// beq cr6,0x827f6a78
	if (ctx.cr6.eq) goto loc_827F6A78;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294520
	ctx.lr = 0x827F6A78;
	sub_82294520(ctx, base);
loc_827F6A78:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294cc8
	ctx.lr = 0x827F6A80;
	sub_82294CC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6A8C"))) PPC_WEAK_FUNC(sub_827F6A8C);
PPC_FUNC_IMPL(__imp__sub_827F6A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6A90"))) PPC_WEAK_FUNC(sub_827F6A90);
PPC_FUNC_IMPL(__imp__sub_827F6A90) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x827F6AA8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f6b2c
	if (ctx.cr6.eq) goto loc_827F6B2C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32136
	ctx.r6.s64 = -2106064896;
	// addi r11,r8,-23088
	ctx.r11.s64 = ctx.r8.s64 + -23088;
	// lis r5,-32129
	ctx.r5.s64 = -2105606144;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,27328
	ctx.r7.s64 = ctx.r6.s64 + 27328;
	// addi r6,r5,31640
	ctx.r6.s64 = ctx.r5.s64 + 31640;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,14520
	ctx.r9.s64 = ctx.r9.s64 + 14520;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,20348
	ctx.r5.s64 = 20348;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x827F6B1C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827F6B2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6B40"))) PPC_WEAK_FUNC(sub_827F6B40);
PPC_FUNC_IMPL(__imp__sub_827F6B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827F6B48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27260);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f6b74
	if (!ctx.cr6.eq) goto loc_827F6B74;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827881c8
	ctx.lr = 0x827F6B68;
	sub_827881C8(ctx, base);
	// stw r3,-27260(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27260, ctx.r3.u32);
	// bl 0x82788280
	ctx.lr = 0x827F6B70;
	sub_82788280(ctx, base);
	// lwz r10,-27260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27260);
loc_827F6B74:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-26056(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26056);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827f6b94
	if (ctx.cr6.eq) goto loc_827F6B94;
	// bl 0x822f2bd8
	ctx.lr = 0x827F6B88;
	sub_822F2BD8(ctx, base);
	// lwz r11,-26056(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26056);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x827f6b9c
	goto loc_827F6B9C;
loc_827F6B94:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_827F6B9C:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f6bcc
	if (!ctx.cr6.eq) goto loc_827F6BCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x827F6BBC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x827F6BC4;
	sub_822AADA8(ctx, base);
	// lwz r11,-26056(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26056);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_827F6BCC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f6bf8
	if (!ctx.cr6.eq) goto loc_827F6BF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x827F6BE8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x827F6BF0;
	sub_82398640(ctx, base);
	// lwz r11,-26056(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26056);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_827F6BF8:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f6c30
	if (ctx.cr6.eq) goto loc_827F6C30;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x827F6C14;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x827f6c30
	if (!ctx.cr6.eq) goto loc_827F6C30;
	// lwz r3,-26056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F6C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F6C30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6C38"))) PPC_WEAK_FUNC(sub_827F6C38);
PPC_FUNC_IMPL(__imp__sub_827F6C38) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6C40"))) PPC_WEAK_FUNC(sub_827F6C40);
PPC_FUNC_IMPL(__imp__sub_827F6C40) {
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
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-27260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27260);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f6c84
	if (!ctx.cr6.eq) goto loc_827F6C84;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827881c8
	ctx.lr = 0x827F6C78;
	sub_827881C8(ctx, base);
	// stw r3,-27260(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27260, ctx.r3.u32);
	// bl 0x82788280
	ctx.lr = 0x827F6C80;
	sub_82788280(ctx, base);
	// lwz r11,-27260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27260);
loc_827F6C84:
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

__attribute__((alias("__imp__sub_827F6CAC"))) PPC_WEAK_FUNC(sub_827F6CAC);
PPC_FUNC_IMPL(__imp__sub_827F6CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6CB0"))) PPC_WEAK_FUNC(sub_827F6CB0);
PPC_FUNC_IMPL(__imp__sub_827F6CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x827F6CB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F6CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f7208
	ctx.lr = 0x827F6CF8;
	sub_827F7208(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f6d08
	if (!ctx.cr6.eq) goto loc_827F6D08;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_827F6D08:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e640b8
	ctx.lr = 0x827F6D18;
	sub_82E640B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// lis r5,-31884
	ctx.r5.s64 = -2089549824;
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r30.u8);
	// lis r8,-31885
	ctx.r8.s64 = -2089615360;
	// stb r30,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r30.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r30,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r30.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r30,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r30.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,25104(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25104);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r8,28868(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28868);
	// sth r11,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r11.u16);
	// bl 0x822a93e8
	ctx.lr = 0x827F6D70;
	sub_822A93E8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,328(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F6DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827891d0
	ctx.lr = 0x827F6DB8;
	sub_827891D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6DC4"))) PPC_WEAK_FUNC(sub_827F6DC4);
PPC_FUNC_IMPL(__imp__sub_827F6DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6DC8"))) PPC_WEAK_FUNC(sub_827F6DC8);
PPC_FUNC_IMPL(__imp__sub_827F6DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x827F6DD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F6DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f7208
	ctx.lr = 0x827F6E10;
	sub_827F7208(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f6e20
	if (!ctx.cr6.eq) goto loc_827F6E20;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_827F6E20:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lbz r8,319(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 319);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r7,318(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 318);
	// addi r4,r11,6472
	ctx.r4.s64 = ctx.r11.s64 + 6472;
	// lbz r6,317(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 317);
	// lbz r5,316(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 316);
	// bl 0x8232e868
	ctx.lr = 0x827F6E40;
	sub_8232E868(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82295908
	ctx.lr = 0x827F6E4C;
	sub_82295908(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x827F6E54;
	sub_82299080(ctx, base);
	// lhz r10,314(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 314);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6E68"))) PPC_WEAK_FUNC(sub_827F6E68);
PPC_FUNC_IMPL(__imp__sub_827F6E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x827F6E70;
	__savegprlr_24(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826f4b58
	ctx.lr = 0x827F6E7C;
	sub_826F4B58(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e640b8
	ctx.lr = 0x827F6E8C;
	sub_82E640B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// lis r26,-31884
	ctx.r26.s64 = -2089549824;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// lis r24,-31883
	ctx.r24.s64 = -2089484288;
loc_827F6EA4:
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82bea278
	ctx.lr = 0x827F6EB0;
	sub_82BEA278(ctx, base);
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r3,328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// li r5,576
	ctx.r5.s64 = 576;
	// stw r8,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r8.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F6EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x827f6f18
	if (!ctx.cr6.eq) goto loc_827F6F18;
	// lwz r3,-31340(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31340);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F6F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// beq cr6,0x827f7150
	if (ctx.cr6.eq) goto loc_827F7150;
	// cmpwi cr6,r3,10054
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10054, ctx.xer);
	// bne cr6,0x827f7144
	if (!ctx.cr6.eq) goto loc_827F7144;
loc_827F6F18:
	// lwz r8,80(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lhz r6,114(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lhz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// beq cr6,0x827f6f68
	if (ctx.cr6.eq) goto loc_827F6F68;
	// lwz r11,20324(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20324);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x827f6f68
	if (!ctx.cr6.eq) goto loc_827F6F68;
	// lhz r11,20322(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 20322);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827f6f68
	if (!ctx.cr6.eq) goto loc_827F6F68;
	// lhz r11,20320(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 20320);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827f6f68
	if (!ctx.cr6.eq) goto loc_827F6F68;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
loc_827F6F68:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f6fd4
	if (!ctx.cr6.gt) goto loc_827F6FD4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_827F6F7C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x827f6fd4
	if (!ctx.cr6.eq) goto loc_827F6FD4;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,20324(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20324);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x827f6fc0
	if (!ctx.cr6.eq) goto loc_827F6FC0;
	// lhz r4,20322(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20322);
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x827f6fc0
	if (!ctx.cr6.eq) goto loc_827F6FC0;
	// lhz r4,20320(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20320);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x827f6fc0
	if (!ctx.cr6.eq) goto loc_827F6FC0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_827F6FC0:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827f6f7c
	if (ctx.cr6.lt) goto loc_827F6F7C;
loc_827F6FD4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x827f701c
	if (!ctx.cr6.eq) goto loc_827F701C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827f6ea4
	if (ctx.cr6.eq) goto loc_827F6EA4;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x827f6ea4
	if (ctx.cr6.eq) goto loc_827F6EA4;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827f7004
	if (!ctx.cr6.eq) goto loc_827F7004;
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f6ea4
	if (!ctx.cr6.eq) goto loc_827F6EA4;
loc_827F7004:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F7018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x827f6ea4
	goto loc_827F6EA4;
loc_827F701C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x827f7124
	if (!ctx.cr6.eq) goto loc_827F7124;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F7038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827f6ea4
	if (!ctx.cr6.eq) goto loc_827F6EA4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,28868(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28868);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,25104(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25104);
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// ld r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x822a93e8
	ctx.lr = 0x827F706C;
	sub_822A93E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x823bdf10
	ctx.lr = 0x827F7080;
	sub_823BDF10(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r5,328(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F70B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82295d40
	ctx.lr = 0x827F70B8;
	sub_82295D40(ctx, base);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827F70D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r30,68
	ctx.r31.s64 = ctx.r30.s64 + 68;
	// lwz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r29,72(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x827f7110
	if (!ctx.cr6.gt) goto loc_827F7110;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x827F7110;
	sub_82294520(ctx, base);
loc_827F7110:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f7124
	if (ctx.cr0.eq) goto loc_827F7124;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_827F7124:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F7140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x827f6ea4
	goto loc_827F6EA4;
loc_827F7144:
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,-14464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14464, ctx.r11.u32);
loc_827F7150:
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7158"))) PPC_WEAK_FUNC(sub_827F7158);
PPC_FUNC_IMPL(__imp__sub_827F7158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r10,6472
	ctx.r4.s64 = ctx.r10.s64 + 6472;
	// lbz r8,319(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 319);
	// lbz r7,318(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 318);
	// lbz r6,317(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 317);
	// lbz r5,316(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 316);
	// bl 0x8232e868
	ctx.lr = 0x827F718C;
	sub_8232E868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F71A4"))) PPC_WEAK_FUNC(sub_827F71A4);
PPC_FUNC_IMPL(__imp__sub_827F71A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F71A8"))) PPC_WEAK_FUNC(sub_827F71A8);
PPC_FUNC_IMPL(__imp__sub_827F71A8) {
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
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f71f0
	if (ctx.cr6.eq) goto loc_827F71F0;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x827f71f0
	if (!ctx.cr6.eq) goto loc_827F71F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F71E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
loc_827F71F0:
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

__attribute__((alias("__imp__sub_827F7204"))) PPC_WEAK_FUNC(sub_827F7204);
PPC_FUNC_IMPL(__imp__sub_827F7204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7208"))) PPC_WEAK_FUNC(sub_827F7208);
PPC_FUNC_IMPL(__imp__sub_827F7208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x827F7210;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r3,-31340(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31340);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F7240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// lwz r3,-31340(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31340);
	// bne cr6,0x827f729c
	if (!ctx.cr6.eq) goto loc_827F729C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827F7268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r8,-23052
	ctx.r4.s64 = ctx.r8.s64 + -23052;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8232e868
	ctx.lr = 0x827F727C;
	sub_8232E868(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82295908
	ctx.lr = 0x827F7288;
	sub_82295908(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x827F7290;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_827F729C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F72AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f7324
	if (!ctx.cr6.eq) goto loc_827F7324;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F72CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f7324
	if (!ctx.cr6.eq) goto loc_827F7324;
	// lwz r3,-31340(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31340);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F72E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r9,30592
	ctx.r5.s64 = ctx.r9.s64 + 30592;
	// addi r4,r8,-22992
	ctx.r4.s64 = ctx.r8.s64 + -22992;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8232e868
	ctx.lr = 0x827F7304;
	sub_8232E868(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82295908
	ctx.lr = 0x827F7310;
	sub_82295908(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x827F7318;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_827F7324:
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F733C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827F7354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827f7368
	if (ctx.cr6.eq) goto loc_827F7368;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r4,r11,32768
	ctx.r4.u64 = ctx.r11.u64 | 32768;
	// b 0x827f736c
	goto loc_827F736C;
loc_827F7368:
	// lis r4,2
	ctx.r4.s64 = 131072;
loc_827F736C:
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F738C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827F73A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-31905
	ctx.r7.s64 = -2090926080;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,-24528(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -24528);
	// bl 0x822b6860
	ctx.lr = 0x827F73B8;
	sub_822B6860(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// sth r5,314(r31)
	PPC_STORE_U16(ctx.r31.u32 + 314, ctx.r5.u16);
	// stw r6,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r6.u32);
	// bne cr6,0x827f73d8
	if (!ctx.cr6.eq) goto loc_827F73D8;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// sth r11,314(r31)
	PPC_STORE_U16(ctx.r31.u32 + 314, ctx.r11.u16);
loc_827F73D8:
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r29,314(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 314);
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r4,r31,312
	ctx.r4.s64 = ctx.r31.s64 + 312;
	// bl 0x827f7ab0
	ctx.lr = 0x827F73F0;
	sub_827F7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827f744c
	if (!ctx.cr6.eq) goto loc_827F744C;
	// lwz r3,-31340(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31340);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F740C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r9,30592
	ctx.r5.s64 = ctx.r9.s64 + 30592;
	// addi r4,r8,-22912
	ctx.r4.s64 = ctx.r8.s64 + -22912;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8232e868
	ctx.lr = 0x827F742C;
	sub_8232E868(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82295908
	ctx.lr = 0x827F7438;
	sub_82295908(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x827F7440;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_827F744C:
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F7464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f74bc
	if (!ctx.cr6.eq) goto loc_827F74BC;
	// lwz r3,-31340(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31340);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F7480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r9,30592
	ctx.r5.s64 = ctx.r9.s64 + 30592;
	// addi r4,r8,-22840
	ctx.r4.s64 = ctx.r8.s64 + -22840;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8232e868
	ctx.lr = 0x827F749C;
	sub_8232E868(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82295908
	ctx.lr = 0x827F74A8;
	sub_82295908(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x827F74B0;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_827F74BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F74C8"))) PPC_WEAK_FUNC(sub_827F74C8);
PPC_FUNC_IMPL(__imp__sub_827F74C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F74D0"))) PPC_WEAK_FUNC(sub_827F74D0);
PPC_FUNC_IMPL(__imp__sub_827F74D0) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e640b8
	ctx.lr = 0x827F74F8;
	sub_82E640B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r9,328(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x82407f70
	ctx.lr = 0x827F751C;
	sub_82407F70(ctx, base);
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

__attribute__((alias("__imp__sub_827F7538"))) PPC_WEAK_FUNC(sub_827F7538);
PPC_FUNC_IMPL(__imp__sub_827F7538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x827F7540;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-22776
	ctx.r4.s64 = ctx.r11.s64 + -22776;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x827F7568;
	sub_8233E028(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r3,132
	ctx.r3.s64 = 132;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// rldicr r6,r6,34,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82696930
	ctx.lr = 0x827F7580;
	sub_82696930(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-3776
	ctx.r29.s64 = ctx.r11.s64 + -3776;
	// addi r28,r10,-5084
	ctx.r28.s64 = ctx.r10.s64 + -5084;
	// beq cr6,0x827f75bc
	if (ctx.cr6.eq) goto loc_827F75BC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x827F75B4;
	sub_823C45A0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
loc_827F75BC:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-22728
	ctx.r4.s64 = ctx.r11.s64 + -22728;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x827F75DC;
	sub_8233E028(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r3,132
	ctx.r3.s64 = 132;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// rldicr r6,r6,34,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82696930
	ctx.lr = 0x827F75F4;
	sub_82696930(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f761c
	if (ctx.cr6.eq) goto loc_827F761C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r5,308
	ctx.r5.s64 = 308;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c45a0
	ctx.lr = 0x827F7614;
	sub_823C45A0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
loc_827F761C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7624"))) PPC_WEAK_FUNC(sub_827F7624);
PPC_FUNC_IMPL(__imp__sub_827F7624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7628"))) PPC_WEAK_FUNC(sub_827F7628);
PPC_FUNC_IMPL(__imp__sub_827F7628) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x827F7640;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f76c4
	if (ctx.cr6.eq) goto loc_827F76C4;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32145
	ctx.r7.s64 = -2106654720;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32129
	ctx.r6.s64 = -2105606144;
	// addi r11,r8,-22696
	ctx.r11.s64 = ctx.r8.s64 + -22696;
	// lis r5,-32129
	ctx.r5.s64 = -2105606144;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,18752
	ctx.r8.s64 = ctx.r7.s64 + 18752;
	// addi r7,r6,30008
	ctx.r7.s64 = ctx.r6.s64 + 30008;
	// addi r6,r5,30984
	ctx.r6.s64 = ctx.r5.s64 + 30984;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,14520
	ctx.r9.s64 = ctx.r9.s64 + 14520;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,332
	ctx.r5.s64 = 332;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x827F76B4;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827F76C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F76D8"))) PPC_WEAK_FUNC(sub_827F76D8);
PPC_FUNC_IMPL(__imp__sub_827F76D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827F76E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27580);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f770c
	if (!ctx.cr6.eq) goto loc_827F770C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826f58a8
	ctx.lr = 0x827F7700;
	sub_826F58A8(ctx, base);
	// stw r3,-27580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27580, ctx.r3.u32);
	// bl 0x826f5960
	ctx.lr = 0x827F7708;
	sub_826F5960(ctx, base);
	// lwz r10,-27580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27580);
loc_827F770C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-26052(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26052);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827f772c
	if (ctx.cr6.eq) goto loc_827F772C;
	// bl 0x822f2ae8
	ctx.lr = 0x827F7720;
	sub_822F2AE8(ctx, base);
	// lwz r11,-26052(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26052);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x827f7734
	goto loc_827F7734;
loc_827F772C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_827F7734:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f7764
	if (!ctx.cr6.eq) goto loc_827F7764;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x827F7754;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x827F775C;
	sub_822AADA8(ctx, base);
	// lwz r11,-26052(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26052);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_827F7764:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f7790
	if (!ctx.cr6.eq) goto loc_827F7790;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x827F7780;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x827F7788;
	sub_82398640(ctx, base);
	// lwz r11,-26052(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26052);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_827F7790:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f77c8
	if (ctx.cr6.eq) goto loc_827F77C8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x827F77AC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x827f77c8
	if (!ctx.cr6.eq) goto loc_827F77C8;
	// lwz r3,-26052(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26052);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F77C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F77C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F77D0"))) PPC_WEAK_FUNC(sub_827F77D0);
PPC_FUNC_IMPL(__imp__sub_827F77D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F77D8"))) PPC_WEAK_FUNC(sub_827F77D8);
PPC_FUNC_IMPL(__imp__sub_827F77D8) {
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
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-27580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27580);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f781c
	if (!ctx.cr6.eq) goto loc_827F781C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826f58a8
	ctx.lr = 0x827F7810;
	sub_826F58A8(ctx, base);
	// stw r3,-27580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27580, ctx.r3.u32);
	// bl 0x826f5960
	ctx.lr = 0x827F7818;
	sub_826F5960(ctx, base);
	// lwz r11,-27580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27580);
loc_827F781C:
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

__attribute__((alias("__imp__sub_827F7844"))) PPC_WEAK_FUNC(sub_827F7844);
PPC_FUNC_IMPL(__imp__sub_827F7844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7848"))) PPC_WEAK_FUNC(sub_827F7848);
PPC_FUNC_IMPL(__imp__sub_827F7848) {
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
	ctx.lr = 0x827F7878;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f7890
	if (ctx.cr0.eq) goto loc_827F7890;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_827F7890:
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

__attribute__((alias("__imp__sub_827F78B0"))) PPC_WEAK_FUNC(sub_827F78B0);
PPC_FUNC_IMPL(__imp__sub_827F78B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lis r4,-31884
	ctx.r4.s64 = -2089549824;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,25104(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25104);
	// b 0x822a93e8
	sub_822A93E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F78D4"))) PPC_WEAK_FUNC(sub_827F78D4);
PPC_FUNC_IMPL(__imp__sub_827F78D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F78D8"))) PPC_WEAK_FUNC(sub_827F78D8);
PPC_FUNC_IMPL(__imp__sub_827F78D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lis r4,-31884
	ctx.r4.s64 = -2089549824;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,25104(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25104);
	// b 0x822a93e8
	sub_822A93E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F78FC"))) PPC_WEAK_FUNC(sub_827F78FC);
PPC_FUNC_IMPL(__imp__sub_827F78FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7900"))) PPC_WEAK_FUNC(sub_827F7900);
PPC_FUNC_IMPL(__imp__sub_827F7900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7904"))) PPC_WEAK_FUNC(sub_827F7904);
PPC_FUNC_IMPL(__imp__sub_827F7904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7908"))) PPC_WEAK_FUNC(sub_827F7908);
PPC_FUNC_IMPL(__imp__sub_827F7908) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x827f7920
	sub_827F7920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7914"))) PPC_WEAK_FUNC(sub_827F7914);
PPC_FUNC_IMPL(__imp__sub_827F7914) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7918"))) PPC_WEAK_FUNC(sub_827F7918);
PPC_FUNC_IMPL(__imp__sub_827F7918) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7920"))) PPC_WEAK_FUNC(sub_827F7920);
PPC_FUNC_IMPL(__imp__sub_827F7920) {
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
	// bl 0x826f40d8
	ctx.lr = 0x827F7938;
	sub_826F40D8(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r8,r11,-22320
	ctx.r8.s64 = ctx.r11.s64 + -22320;
	// addi r7,r10,-22012
	ctx.r7.s64 = ctx.r10.s64 + -22012;
	// addi r6,r9,-22008
	ctx.r6.s64 = ctx.r9.s64 + -22008;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e640b8
	ctx.lr = 0x827F796C;
	sub_82E640B8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r5,312(r31)
	PPC_STORE_U16(ctx.r31.u32 + 312, ctx.r5.u16);
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

__attribute__((alias("__imp__sub_827F798C"))) PPC_WEAK_FUNC(sub_827F798C);
PPC_FUNC_IMPL(__imp__sub_827F798C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7990"))) PPC_WEAK_FUNC(sub_827F7990);
PPC_FUNC_IMPL(__imp__sub_827F7990) {
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
	// bl 0x827f7a00
	ctx.lr = 0x827F79B0;
	sub_827F7A00(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f79e4
	if (ctx.cr6.eq) goto loc_827F79E4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827f79dc
	if (ctx.cr6.lt) goto loc_827F79DC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827f79e4
	if (!ctx.cr6.gt) goto loc_827F79E4;
loc_827F79DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x827F79E4;
	sub_82294A58(ctx, base);
loc_827F79E4:
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

__attribute__((alias("__imp__sub_827F7A00"))) PPC_WEAK_FUNC(sub_827F7A00);
PPC_FUNC_IMPL(__imp__sub_827F7A00) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r8,r11,-22320
	ctx.r8.s64 = ctx.r11.s64 + -22320;
	// addi r7,r10,-22012
	ctx.r7.s64 = ctx.r10.s64 + -22012;
	// addi r6,r9,-22008
	ctx.r6.s64 = ctx.r9.s64 + -22008;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x827F7A3C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826f2900
	ctx.lr = 0x827F7A44;
	sub_826F2900(ctx, base);
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

__attribute__((alias("__imp__sub_827F7A58"))) PPC_WEAK_FUNC(sub_827F7A58);
PPC_FUNC_IMPL(__imp__sub_827F7A58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-64
	ctx.r3.s64 = ctx.r3.s64 + -64;
	// b 0x827f7990
	sub_827F7990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7A60"))) PPC_WEAK_FUNC(sub_827F7A60);
PPC_FUNC_IMPL(__imp__sub_827F7A60) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e640b8
	ctx.lr = 0x827F7A80;
	sub_82E640B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
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

__attribute__((alias("__imp__sub_827F7AAC"))) PPC_WEAK_FUNC(sub_827F7AAC);
PPC_FUNC_IMPL(__imp__sub_827F7AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7AB0"))) PPC_WEAK_FUNC(sub_827F7AB0);
PPC_FUNC_IMPL(__imp__sub_827F7AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827F7AB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_827F7AC8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F7AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x827f7b14
	if (ctx.cr6.eq) goto loc_827F7B14;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f7b08
	if (ctx.cr6.eq) goto loc_827F7B08;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r30,20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 20, ctx.xer);
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// blt cr6,0x827f7ac8
	if (ctx.cr6.lt) goto loc_827F7AC8;
loc_827F7B08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F7B0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_827F7B14:
	// lhz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f7b0c
	if (!ctx.cr6.eq) goto loc_827F7B0C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F7B34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7B3C"))) PPC_WEAK_FUNC(sub_827F7B3C);
PPC_FUNC_IMPL(__imp__sub_827F7B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7B40"))) PPC_WEAK_FUNC(sub_827F7B40);
PPC_FUNC_IMPL(__imp__sub_827F7B40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827f7b74
	if (!ctx.cr6.eq) goto loc_827F7B74;
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827f7b74
	if (!ctx.cr6.eq) goto loc_827F7B74;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_827F7B74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7B7C"))) PPC_WEAK_FUNC(sub_827F7B7C);
PPC_FUNC_IMPL(__imp__sub_827F7B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7B80"))) PPC_WEAK_FUNC(sub_827F7B80);
PPC_FUNC_IMPL(__imp__sub_827F7B80) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// stb r11,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7B98"))) PPC_WEAK_FUNC(sub_827F7B98);
PPC_FUNC_IMPL(__imp__sub_827F7B98) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x827f7bb0
	sub_827F7BB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7BA4"))) PPC_WEAK_FUNC(sub_827F7BA4);
PPC_FUNC_IMPL(__imp__sub_827F7BA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7BA8"))) PPC_WEAK_FUNC(sub_827F7BA8);
PPC_FUNC_IMPL(__imp__sub_827F7BA8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7BB0"))) PPC_WEAK_FUNC(sub_827F7BB0);
PPC_FUNC_IMPL(__imp__sub_827F7BB0) {
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
	// bl 0x82786868
	ctx.lr = 0x827F7BC8;
	sub_82786868(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r8,r11,-22664
	ctx.r8.s64 = ctx.r11.s64 + -22664;
	// addi r7,r10,-22340
	ctx.r7.s64 = ctx.r10.s64 + -22340;
	// addi r6,r9,-22336
	ctx.r6.s64 = ctx.r9.s64 + -22336;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// addi r3,r31,20320
	ctx.r3.s64 = ctx.r31.s64 + 20320;
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e640b8
	ctx.lr = 0x827F7BFC;
	sub_82E640B8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r5,20320(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20320, ctx.r5.u16);
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

__attribute__((alias("__imp__sub_827F7C1C"))) PPC_WEAK_FUNC(sub_827F7C1C);
PPC_FUNC_IMPL(__imp__sub_827F7C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7C20"))) PPC_WEAK_FUNC(sub_827F7C20);
PPC_FUNC_IMPL(__imp__sub_827F7C20) {
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
	// bl 0x827f7c90
	ctx.lr = 0x827F7C40;
	sub_827F7C90(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f7c74
	if (ctx.cr6.eq) goto loc_827F7C74;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827f7c6c
	if (ctx.cr6.lt) goto loc_827F7C6C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827f7c74
	if (!ctx.cr6.gt) goto loc_827F7C74;
loc_827F7C6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x827F7C74;
	sub_82294A58(ctx, base);
loc_827F7C74:
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

__attribute__((alias("__imp__sub_827F7C90"))) PPC_WEAK_FUNC(sub_827F7C90);
PPC_FUNC_IMPL(__imp__sub_827F7C90) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r8,r11,-22664
	ctx.r8.s64 = ctx.r11.s64 + -22664;
	// addi r7,r10,-22340
	ctx.r7.s64 = ctx.r10.s64 + -22340;
	// addi r6,r9,-22336
	ctx.r6.s64 = ctx.r9.s64 + -22336;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x827F7CCC;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826f2b08
	ctx.lr = 0x827F7CD4;
	sub_826F2B08(ctx, base);
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

__attribute__((alias("__imp__sub_827F7CE8"))) PPC_WEAK_FUNC(sub_827F7CE8);
PPC_FUNC_IMPL(__imp__sub_827F7CE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-96
	ctx.r3.s64 = ctx.r3.s64 + -96;
	// b 0x827f7c20
	sub_827F7C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7CF0"))) PPC_WEAK_FUNC(sub_827F7CF0);
PPC_FUNC_IMPL(__imp__sub_827F7CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7D18"))) PPC_WEAK_FUNC(sub_827F7D18);
PPC_FUNC_IMPL(__imp__sub_827F7D18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7D20"))) PPC_WEAK_FUNC(sub_827F7D20);
PPC_FUNC_IMPL(__imp__sub_827F7D20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,796(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7D28"))) PPC_WEAK_FUNC(sub_827F7D28);
PPC_FUNC_IMPL(__imp__sub_827F7D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827F7D30;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822bbad8
	ctx.lr = 0x827F7D44;
	sub_822BBAD8(ctx, base);
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x82fb4f28
	ctx.lr = 0x827F7D4C;
	sub_82FB4F28(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827f7d70
	if (ctx.cr6.eq) goto loc_827F7D70;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f7d70
	if (ctx.cr6.eq) goto loc_827F7D70;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82294a58
	ctx.lr = 0x827F7D70;
	sub_82294A58(ctx, base);
loc_827F7D70:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x827f7d7c
	if (ctx.cr6.eq) goto loc_827F7D7C;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_827F7D7C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7D9C"))) PPC_WEAK_FUNC(sub_827F7D9C);
PPC_FUNC_IMPL(__imp__sub_827F7D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7DA0"))) PPC_WEAK_FUNC(sub_827F7DA0);
PPC_FUNC_IMPL(__imp__sub_827F7DA0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x827F7DB8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f7e3c
	if (ctx.cr6.eq) goto loc_827F7E3C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-21992
	ctx.r11.s64 = ctx.r8.s64 + -21992;
	// lis r5,-32129
	ctx.r5.s64 = -2105606144;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,32744
	ctx.r6.s64 = ctx.r5.s64 + 32744;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,14520
	ctx.r9.s64 = ctx.r9.s64 + 14520;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,140
	ctx.r5.s64 = 140;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x827F7E2C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827F7E3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7E50"))) PPC_WEAK_FUNC(sub_827F7E50);
PPC_FUNC_IMPL(__imp__sub_827F7E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827F7E58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27628);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f7e84
	if (!ctx.cr6.eq) goto loc_827F7E84;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826e58c8
	ctx.lr = 0x827F7E78;
	sub_826E58C8(ctx, base);
	// stw r3,-27628(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27628, ctx.r3.u32);
	// bl 0x826e5988
	ctx.lr = 0x827F7E80;
	sub_826E5988(ctx, base);
	// lwz r10,-27628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27628);
loc_827F7E84:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-26048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26048);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827f7ea4
	if (ctx.cr6.eq) goto loc_827F7EA4;
	// bl 0x823123b8
	ctx.lr = 0x827F7E98;
	sub_823123B8(ctx, base);
	// lwz r11,-26048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26048);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x827f7eac
	goto loc_827F7EAC;
loc_827F7EA4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_827F7EAC:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f7edc
	if (!ctx.cr6.eq) goto loc_827F7EDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x827F7ECC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x827F7ED4;
	sub_822AADA8(ctx, base);
	// lwz r11,-26048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26048);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_827F7EDC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f7f08
	if (!ctx.cr6.eq) goto loc_827F7F08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x827F7EF8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x827F7F00;
	sub_82398640(ctx, base);
	// lwz r11,-26048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26048);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_827F7F08:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f7f40
	if (ctx.cr6.eq) goto loc_827F7F40;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x827F7F24;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x827f7f40
	if (!ctx.cr6.eq) goto loc_827F7F40;
	// lwz r3,-26048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26048);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F7F40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F7F40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7F48"))) PPC_WEAK_FUNC(sub_827F7F48);
PPC_FUNC_IMPL(__imp__sub_827F7F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// addi r9,r11,32728
	ctx.r9.s64 = ctx.r11.s64 + 32728;
	// addi r8,r10,5760
	ctx.r8.s64 = ctx.r10.s64 + 5760;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7F68"))) PPC_WEAK_FUNC(sub_827F7F68);
PPC_FUNC_IMPL(__imp__sub_827F7F68) {
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
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-27628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27628);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f7fac
	if (!ctx.cr6.eq) goto loc_827F7FAC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826e58c8
	ctx.lr = 0x827F7FA0;
	sub_826E58C8(ctx, base);
	// stw r3,-27628(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27628, ctx.r3.u32);
	// bl 0x826e5988
	ctx.lr = 0x827F7FA8;
	sub_826E5988(ctx, base);
	// lwz r11,-27628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27628);
loc_827F7FAC:
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

__attribute__((alias("__imp__sub_827F7FD4"))) PPC_WEAK_FUNC(sub_827F7FD4);
PPC_FUNC_IMPL(__imp__sub_827F7FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7FD8"))) PPC_WEAK_FUNC(sub_827F7FD8);
PPC_FUNC_IMPL(__imp__sub_827F7FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7FE4"))) PPC_WEAK_FUNC(sub_827F7FE4);
PPC_FUNC_IMPL(__imp__sub_827F7FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7FE8"))) PPC_WEAK_FUNC(sub_827F7FE8);
PPC_FUNC_IMPL(__imp__sub_827F7FE8) {
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
	// beq cr6,0x827f8020
	if (ctx.cr6.eq) goto loc_827F8020;
	// bl 0x826e7570
	ctx.lr = 0x827F8008;
	sub_826E7570(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r9,r11,-21936
	ctx.r9.s64 = ctx.r11.s64 + -21936;
	// addi r8,r10,-21664
	ctx.r8.s64 = ctx.r10.s64 + -21664;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
loc_827F8020:
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

__attribute__((alias("__imp__sub_827F8034"))) PPC_WEAK_FUNC(sub_827F8034);
PPC_FUNC_IMPL(__imp__sub_827F8034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F8038"))) PPC_WEAK_FUNC(sub_827F8038);
PPC_FUNC_IMPL(__imp__sub_827F8038) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8040"))) PPC_WEAK_FUNC(sub_827F8040);
PPC_FUNC_IMPL(__imp__sub_827F8040) {
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
	// bl 0x826e7570
	ctx.lr = 0x827F8058;
	sub_826E7570(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r9,r11,-21936
	ctx.r9.s64 = ctx.r11.s64 + -21936;
	// addi r8,r10,-21664
	ctx.r8.s64 = ctx.r10.s64 + -21664;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_827F8088"))) PPC_WEAK_FUNC(sub_827F8088);
PPC_FUNC_IMPL(__imp__sub_827F8088) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r9,r11,-21936
	ctx.r9.s64 = ctx.r11.s64 + -21936;
	// addi r8,r10,-21664
	ctx.r8.s64 = ctx.r10.s64 + -21664;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x827F80C0;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e76b8
	ctx.lr = 0x827F80C8;
	sub_826E76B8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827f80fc
	if (ctx.cr6.eq) goto loc_827F80FC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827f80f4
	if (ctx.cr6.lt) goto loc_827F80F4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827f80fc
	if (!ctx.cr6.gt) goto loc_827F80FC;
loc_827F80F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x827F80FC;
	sub_82294A58(ctx, base);
loc_827F80FC:
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

__attribute__((alias("__imp__sub_827F8118"))) PPC_WEAK_FUNC(sub_827F8118);
PPC_FUNC_IMPL(__imp__sub_827F8118) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r9,r11,-21936
	ctx.r9.s64 = ctx.r11.s64 + -21936;
	// addi r8,r10,-21664
	ctx.r8.s64 = ctx.r10.s64 + -21664;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x827F8148;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e76b8
	ctx.lr = 0x827F8150;
	sub_826E76B8(ctx, base);
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

__attribute__((alias("__imp__sub_827F8164"))) PPC_WEAK_FUNC(sub_827F8164);
PPC_FUNC_IMPL(__imp__sub_827F8164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F8168"))) PPC_WEAK_FUNC(sub_827F8168);
PPC_FUNC_IMPL(__imp__sub_827F8168) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-60
	ctx.r3.s64 = ctx.r3.s64 + -60;
	// b 0x827f8088
	sub_827F8088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F8170"))) PPC_WEAK_FUNC(sub_827F8170);
PPC_FUNC_IMPL(__imp__sub_827F8170) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x827F8188;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f820c
	if (ctx.cr6.eq) goto loc_827F820C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-21644
	ctx.r11.s64 = ctx.r8.s64 + -21644;
	// lis r5,-32128
	ctx.r5.s64 = -2105540608;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-20312
	ctx.r6.s64 = ctx.r5.s64 + -20312;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,14520
	ctx.r9.s64 = ctx.r9.s64 + 14520;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x827F81FC;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827F820C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8220"))) PPC_WEAK_FUNC(sub_827F8220);
PPC_FUNC_IMPL(__imp__sub_827F8220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827F8228;
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
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f8258
	if (!ctx.cr6.eq) goto loc_827F8258;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aace8
	ctx.lr = 0x827F824C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x827F8254;
	sub_822AADA8(ctx, base);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_827F8258:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-26044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26044);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827f8278
	if (ctx.cr6.eq) goto loc_827F8278;
	// bl 0x822955c8
	ctx.lr = 0x827F826C;
	sub_822955C8(ctx, base);
	// lwz r11,-26044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26044);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x827f8280
	goto loc_827F8280;
loc_827F8278:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_827F8280:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-26048(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26048);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f82ac
	if (!ctx.cr6.eq) goto loc_827F82AC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14520
	ctx.r3.s64 = ctx.r11.s64 + 14520;
	// bl 0x827f7da0
	ctx.lr = 0x827F829C;
	sub_827F7DA0(ctx, base);
	// stw r3,-26048(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26048, ctx.r3.u32);
	// bl 0x827f7e50
	ctx.lr = 0x827F82A4;
	sub_827F7E50(ctx, base);
	// lwz r11,-26044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26044);
	// lwz r10,-26048(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26048);
loc_827F82AC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f82d8
	if (!ctx.cr6.eq) goto loc_827F82D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82398580
	ctx.lr = 0x827F82C8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x827F82D0;
	sub_82398640(ctx, base);
	// lwz r11,-26044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26044);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_827F82D8:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f8310
	if (ctx.cr6.eq) goto loc_827F8310;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x827F82F4;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x827f8310
	if (!ctx.cr6.eq) goto loc_827F8310;
	// lwz r3,-26044(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26044);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F8310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F8310:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F8318"))) PPC_WEAK_FUNC(sub_827F8318);
PPC_FUNC_IMPL(__imp__sub_827F8318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// addi r9,r11,-20328
	ctx.r9.s64 = ctx.r11.s64 + -20328;
	// addi r8,r10,5760
	ctx.r8.s64 = ctx.r10.s64 + 5760;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8338"))) PPC_WEAK_FUNC(sub_827F8338);
PPC_FUNC_IMPL(__imp__sub_827F8338) {
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
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f837c
	if (!ctx.cr6.eq) goto loc_827F837C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x822aace8
	ctx.lr = 0x827F8370;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x827F8378;
	sub_822AADA8(ctx, base);
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_827F837C:
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

__attribute__((alias("__imp__sub_827F83A4"))) PPC_WEAK_FUNC(sub_827F83A4);
PPC_FUNC_IMPL(__imp__sub_827F83A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F83A8"))) PPC_WEAK_FUNC(sub_827F83A8);
PPC_FUNC_IMPL(__imp__sub_827F83A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827F83B8"))) PPC_WEAK_FUNC(sub_827F83B8);
PPC_FUNC_IMPL(__imp__sub_827F83B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x827F83C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// std r29,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r29.u64);
	// bne cr6,0x827f84c4
	if (!ctx.cr6.eq) goto loc_827F84C4;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r31,1
	ctx.r31.s64 = 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bne cr6,0x827f84c4
	if (!ctx.cr6.eq) goto loc_827F84C4;
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,164(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x827f84c4
	if (ctx.cr6.eq) goto loc_827F84C4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827f9b50
	ctx.lr = 0x827F8430;
	sub_827F9B50(ctx, base);
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827f84c4
	if (!ctx.cr6.eq) goto loc_827F84C4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x827f846c
	if (ctx.cr6.gt) goto loc_827F846C;
	// lbzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x827f8470
	goto loc_827F8470;
loc_827F846C:
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
loc_827F8470:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x827f848c
	if (ctx.cr6.gt) goto loc_827F848C;
	// lbzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x827f8490
	goto loc_827F8490;
loc_827F848C:
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
loc_827F8490:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// bne cr6,0x827f84a8
	if (!ctx.cr6.eq) goto loc_827F84A8;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,81
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 81, ctx.xer);
	// beq cr6,0x827f84ac
	if (ctx.cr6.eq) goto loc_827F84AC;
loc_827F84A8:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_827F84AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827fafa0
	ctx.lr = 0x827F84B8;
	sub_827FAFA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_827F84C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F84D0"))) PPC_WEAK_FUNC(sub_827F84D0);
PPC_FUNC_IMPL(__imp__sub_827F84D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827F84D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// ble cr6,0x827f8618
	if (!ctx.cr6.gt) goto loc_827F8618;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// blt cr6,0x827f8520
	if (ctx.cr6.lt) goto loc_827F8520;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x827f8524
	goto loc_827F8524;
loc_827F8520:
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
loc_827F8524:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x827f8618
	if (!ctx.cr6.eq) goto loc_827F8618;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r9,255
	ctx.r9.s64 = 255;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x827f854c
	if (ctx.cr6.gt) goto loc_827F854C;
	// lbzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x827f8550
	goto loc_827F8550;
loc_827F854C:
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
loc_827F8550:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827f8618
	if (ctx.cr6.eq) goto loc_827F8618;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827f9b50
	ctx.lr = 0x827F8578;
	sub_827F9B50(ctx, base);
	// lwz r10,160(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827f8618
	if (!ctx.cr6.eq) goto loc_827F8618;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x827f85b4
	if (ctx.cr6.gt) goto loc_827F85B4;
	// lbzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x827f85b8
	goto loc_827F85B8;
loc_827F85B4:
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
loc_827F85B8:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x827f85d4
	if (ctx.cr6.gt) goto loc_827F85D4;
	// lbzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x827f85d8
	goto loc_827F85D8;
loc_827F85D4:
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
loc_827F85D8:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// bne cr6,0x827f8618
	if (!ctx.cr6.eq) goto loc_827F8618;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// bne cr6,0x827f8618
	if (!ctx.cr6.eq) goto loc_827F8618;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827fafa0
	ctx.lr = 0x827F8600;
	sub_827FAFA0(ctx, base);
	// li r11,74
	ctx.r11.s64 = 74;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ldx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r11.u32);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x827f861c
	if (ctx.cr6.eq) goto loc_827F861C;
loc_827F8618:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827F861C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F8624"))) PPC_WEAK_FUNC(sub_827F8624);
PPC_FUNC_IMPL(__imp__sub_827F8624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F8628"))) PPC_WEAK_FUNC(sub_827F8628);
PPC_FUNC_IMPL(__imp__sub_827F8628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lbz r11,73(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f86f0
	if (ctx.cr6.eq) goto loc_827F86F0;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f86f0
	if (ctx.cr6.eq) goto loc_827F86F0;
loc_827F865C:
	// li r5,512
	ctx.r5.s64 = 512;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x827faf18
	ctx.lr = 0x827F866C;
	sub_827FAF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x827f8690
	if (!ctx.cr6.gt) goto loc_827F8690;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f9448
	ctx.lr = 0x827F8684;
	sub_827F9448(ctx, base);
	// lfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// b 0x827f865c
	goto loc_827F865C;
loc_827F8690:
	// lbz r11,73(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x827f86f0
	if (!ctx.cr6.eq) goto loc_827F86F0;
	// lfs f0,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f13,168(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x827f86f0
	if (ctx.cr6.gt) goto loc_827F86F0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r10,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r10.u8);
	// beq cr6,0x827f86d8
	if (ctx.cr6.eq) goto loc_827F86D8;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r9,r10,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r9,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
loc_827F86D8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fae68
	ctx.lr = 0x827F86F0;
	sub_827FAE68(ctx, base);
loc_827F86F0:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8708"))) PPC_WEAK_FUNC(sub_827F8708);
PPC_FUNC_IMPL(__imp__sub_827F8708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x827F8710;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stbx r11,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
	// lbz r8,117(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 117);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r8,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r8.u8);
	// lbz r6,118(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 118);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r6,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r6.u8);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r3,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r8,120(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 120);
	// stbx r8,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// lbz r7,121(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 121);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r7,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r7.u8);
	// lbz r5,122(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 122);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r5,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r5.u8);
	// lwz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r5,108(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 108);
	// stbx r5,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u8);
	// lbz r3,109(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 109);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// lbz r9,110(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 110);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r9,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r9.u8);
	// lwz r7,108(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r7,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r7.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// lbz r9,113(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 113);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r9.u8);
	// lbz r7,114(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 114);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r7,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r7.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,112(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r7,136(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stbx r6,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r8,r9,2,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stbx r8,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r5,136(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r10,r5,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x1;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stbx r10,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,136(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r6,r8,4,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x1;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stbx r6,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stbx r10,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r8,136(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r5,r8,6,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x1;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stbx r5,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r7,r10,7,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stbx r7,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r6,136(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 136);
	// clrlwi r9,r6,31
	ctx.r9.u64 = ctx.r6.u32 & 0x1;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stbx r9,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// bl 0x827fa058
	ctx.lr = 0x827F8958;
	sub_827FA058(ctx, base);
	// addi r4,r30,140
	ctx.r4.s64 = ctx.r30.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827facb8
	ctx.lr = 0x827F8964;
	sub_827FACB8(ctx, base);
	// lwz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r8,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// rlwinm r4,r8,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF;
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stbx r5,r7,r6
	PPC_STORE_U8(ctx.r7.u32 + ctx.r6.u32, ctx.r5.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r3,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r3.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r9.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x827f89f8
	if (!ctx.cr6.gt) goto loc_827F89F8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_827F89D4:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x827fabf8
	ctx.lr = 0x827F89E4;
	sub_827FABF8(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827f89d4
	if (ctx.cr6.lt) goto loc_827F89D4;
loc_827F89F8:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r11,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r6,r11,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stbx r8,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r7,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r7.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r6,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r6.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r9,76(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827f8a8c
	if (!ctx.cr6.gt) goto loc_827F8A8C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_827F8A68:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x827fa7a0
	ctx.lr = 0x827F8A78;
	sub_827FA7A0(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827f8a68
	if (ctx.cr6.lt) goto loc_827F8A68;
loc_827F8A8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F8A94"))) PPC_WEAK_FUNC(sub_827F8A94);
PPC_FUNC_IMPL(__imp__sub_827F8A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F8A98"))) PPC_WEAK_FUNC(sub_827F8A98);
PPC_FUNC_IMPL(__imp__sub_827F8A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x827F8AA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,116
	ctx.r4.s64 = ctx.r30.s64 + 116;
	// bl 0x827f9b50
	ctx.lr = 0x827F8AB8;
	sub_827F9B50(ctx, base);
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// bl 0x827f9b50
	ctx.lr = 0x827F8AC0;
	sub_827F9B50(ctx, base);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// bl 0x827f9b50
	ctx.lr = 0x827F8AC8;
	sub_827F9B50(ctx, base);
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// bl 0x827f9b50
	ctx.lr = 0x827F8AD0;
	sub_827F9B50(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x827f8b00
	if (ctx.cr6.gt) goto loc_827F8B00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x827f8b04
	goto loc_827F8B04;
loc_827F8B00:
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_827F8B04:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwimi r9,r7,26,0,0
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 26) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r9,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r9.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x827f8b40
	if (ctx.cr6.gt) goto loc_827F8B40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x827f8b44
	goto loc_827F8B44;
loc_827F8B40:
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_827F8B44:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwimi r9,r6,30,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 30) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r9,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r9.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x827f8b84
	if (ctx.cr6.gt) goto loc_827F8B84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x827f8b88
	goto loc_827F8B88;
loc_827F8B84:
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_827F8B88:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwimi r9,r6,29,2,2
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 29) & 0x20000000) | (ctx.r9.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r9,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x827f8bc8
	if (ctx.cr6.gt) goto loc_827F8BC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x827f8bcc
	goto loc_827F8BCC;
loc_827F8BC8:
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_827F8BCC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwimi r9,r6,28,3,3
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 28) & 0x10000000) | (ctx.r9.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r9,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x827f8c0c
	if (ctx.cr6.gt) goto loc_827F8C0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x827f8c10
	goto loc_827F8C10;
loc_827F8C0C:
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_827F8C10:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwimi r9,r6,27,4,4
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 27) & 0x8000000) | (ctx.r9.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r9,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x827f8c50
	if (ctx.cr6.gt) goto loc_827F8C50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x827f8c54
	goto loc_827F8C54;
loc_827F8C50:
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_827F8C54:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwimi r9,r6,26,5,5
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 26) & 0x4000000) | (ctx.r9.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r9,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x827f8c94
	if (ctx.cr6.gt) goto loc_827F8C94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x827f8c98
	goto loc_827F8C98;
loc_827F8C94:
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_827F8C98:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwimi r9,r6,25,6,6
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 25) & 0x2000000) | (ctx.r9.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r9,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x827f8cd8
	if (ctx.cr6.gt) goto loc_827F8CD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x827f8cdc
	goto loc_827F8CDC;
loc_827F8CD8:
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_827F8CDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwimi r10,r7,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r10,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r10.u32);
	// bl 0x827fafa0
	ctx.lr = 0x827F8D04;
	sub_827FAFA0(ctx, base);
	// addi r4,r30,140
	ctx.r4.s64 = ctx.r30.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fa660
	ctx.lr = 0x827F8D10;
	sub_827FA660(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x827f9b50
	ctx.lr = 0x827F8D20;
	sub_827F9B50(ctx, base);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x827f8d64
	if (!ctx.cr6.eq) goto loc_827F8D64;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r30,60
	ctx.r29.s64 = ctx.r30.s64 + 60;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r26,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r26.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x827f8d58
	if (ctx.cr6.eq) goto loc_827F8D58;
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x827F8D58;
	sub_82294520(ctx, base);
loc_827F8D58:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826696d0
	ctx.lr = 0x827F8D64;
	sub_826696D0(ctx, base);
loc_827F8D64:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f8da8
	if (!ctx.cr6.gt) goto loc_827F8DA8;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_827F8D78:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f8da8
	if (!ctx.cr6.eq) goto loc_827F8DA8;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x827fa5d8
	ctx.lr = 0x827F8D94;
	sub_827FA5D8(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827f8d78
	if (ctx.cr6.lt) goto loc_827F8D78;
loc_827F8DA8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x827f8df8
	if (ctx.cr6.gt) goto loc_827F8DF8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 | ctx.r6.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r28,r10,r5
	ctx.r28.u64 = ctx.r10.u64 | ctx.r5.u64;
	// b 0x827f8dfc
	goto loc_827F8DFC;
loc_827F8DF8:
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_827F8DFC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f8e7c
	if (!ctx.cr6.eq) goto loc_827F8E7C;
	// addi r29,r30,72
	ctx.r29.s64 = ctx.r30.s64 + 72;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f9a18
	ctx.lr = 0x827F8E18;
	sub_827F9A18(ctx, base);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r27,76(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// ble cr6,0x827f8e54
	if (!ctx.cr6.gt) goto loc_827F8E54;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// li r4,20
	ctx.r4.s64 = 20;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x827F8E54;
	sub_82294520(ctx, base);
loc_827F8E54:
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r27,r9
	ctx.r9.u64 = ctx.r27.u64 + ctx.r9.u64;
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e640b8
	ctx.lr = 0x827F8E7C;
	sub_82E640B8(ctx, base);
loc_827F8E7C:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f8ec0
	if (!ctx.cr6.gt) goto loc_827F8EC0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_827F8E90:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f8ec0
	if (!ctx.cr6.eq) goto loc_827F8EC0;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x827fa348
	ctx.lr = 0x827F8EAC;
	sub_827FA348(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827f8e90
	if (ctx.cr6.lt) goto loc_827F8E90;
loc_827F8EC0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f8f34
	if (ctx.cr6.eq) goto loc_827F8F34;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r31,r30,60
	ctx.r31.s64 = ctx.r30.s64 + 60;
	// stw r26,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f8f28
	if (ctx.cr6.eq) goto loc_827F8F28;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827f8f28
	if (ctx.cr6.eq) goto loc_827F8F28;
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f8f08
	if (!ctx.cr6.eq) goto loc_827F8F08;
	// bl 0x822900a0
	ctx.lr = 0x827F8F04;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_827F8F08:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F8F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_827F8F28:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// bl 0x827f9a18
	ctx.lr = 0x827F8F34;
	sub_827F9A18(ctx, base);
loc_827F8F34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F8F3C"))) PPC_WEAK_FUNC(sub_827F8F3C);
PPC_FUNC_IMPL(__imp__sub_827F8F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F8F40"))) PPC_WEAK_FUNC(sub_827F8F40);
PPC_FUNC_IMPL(__imp__sub_827F8F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x827F8F48;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// addi r28,r31,74
	ctx.r28.s64 = ctx.r31.s64 + 74;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_827F8F60:
	// bl 0x82cb2308
	ctx.lr = 0x827F8F64;
	sub_82CB2308(ctx, base);
	// stbx r3,r28,r30
	PPC_STORE_U8(ctx.r28.u32 + ctx.r30.u32, ctx.r3.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x827f8f60
	if (ctx.cr6.lt) goto loc_827F8F60;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f8fbc
	if (!ctx.cr6.eq) goto loc_827F8FBC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822959a8
	ctx.lr = 0x827F8F8C;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f8f9c
	if (ctx.cr6.eq) goto loc_827F8F9C;
	// bl 0x827fa298
	ctx.lr = 0x827F8F98;
	sub_827FA298(ctx, base);
	// b 0x827f8fa0
	goto loc_827F8FA0;
loc_827F8F9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_827F8FA0:
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x827fa180
	ctx.lr = 0x827F8FAC;
	sub_827FA180(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f8fbc
	if (!ctx.cr6.eq) goto loc_827F8FBC;
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
loc_827F8FBC:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f90c0
	if (ctx.cr6.eq) goto loc_827F90C0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x827f90c8
	if (!ctx.cr6.eq) goto loc_827F90C8;
	// li r11,512
	ctx.r11.s64 = 512;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x82294520
	ctx.lr = 0x827F8FFC;
	sub_82294520(ctx, base);
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823992a0
	ctx.lr = 0x827F9008;
	sub_823992A0(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// li r5,83
	ctx.r5.s64 = 83;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r8,81
	ctx.r8.s64 = 81;
	// stbx r7,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r7,160(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// stbx r7,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lbz r7,161(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 161);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r7,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lbz r30,162(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 162);
	// stb r30,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r30.u8);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lwz r7,160(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stb r7,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// stbx r5,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u8);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// bl 0x827fa058
	ctx.lr = 0x827F9084;
	sub_827FA058(ctx, base);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x827f9fe8
	ctx.lr = 0x827F9094;
	sub_827F9FE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f90b0
	if (ctx.cr6.eq) goto loc_827F90B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stb r11,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r11.u8);
	// b 0x827f90b8
	goto loc_827F90B8;
loc_827F90B0:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
loc_827F90B8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1a50
	ctx.lr = 0x827F90C0;
	sub_822B1A50(ctx, base);
loc_827F90C0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827f90e4
	if (ctx.cr6.eq) goto loc_827F90E4;
loc_827F90C8:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f90dc
	if (ctx.cr6.eq) goto loc_827F90DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827f9f58
	ctx.lr = 0x827F90DC;
	sub_827F9F58(ctx, base);
loc_827F90DC:
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
	// stb r29,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r29.u8);
loc_827F90E4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F90F0"))) PPC_WEAK_FUNC(sub_827F90F0);
PPC_FUNC_IMPL(__imp__sub_827F90F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827F90F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f91ec
	if (!ctx.cr6.eq) goto loc_827F91EC;
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827f91ec
	if (ctx.cr6.eq) goto loc_827F91EC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822959a8
	ctx.lr = 0x827F9128;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f9138
	if (ctx.cr6.eq) goto loc_827F9138;
	// bl 0x827f9ee0
	ctx.lr = 0x827F9134;
	sub_827F9EE0(ctx, base);
	// b 0x827f913c
	goto loc_827F913C;
loc_827F9138:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F913C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// clrlwi r30,r29,24
	ctx.r30.u64 = ctx.r29.u32 & 0xFF;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// stw r8,116(r9)
	PPC_STORE_U32(ctx.r9.u32 + 116, ctx.r8.u32);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x827f9e60
	ctx.lr = 0x827F916C;
	sub_827F9E60(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r10,152
	ctx.r10.s64 = ctx.r10.s64 + 152;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827F9180:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x827f9180
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827F9180;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827f9d70
	ctx.lr = 0x827F91A4;
	sub_827F9D70(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,140
	ctx.r3.s64 = ctx.r11.s64 + 140;
	// bl 0x822bbe90
	ctx.lr = 0x827F91B4;
	sub_822BBE90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x827F91BC;
	sub_82299080(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f91ec
	if (ctx.cr6.eq) goto loc_827F91EC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f9208
	ctx.lr = 0x827F91DC;
	sub_827F9208(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f91f8
	if (ctx.cr6.eq) goto loc_827F91F8;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x827f91f8
	if (ctx.cr6.eq) goto loc_827F91F8;
loc_827F91EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_827F91F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9204"))) PPC_WEAK_FUNC(sub_827F9204);
PPC_FUNC_IMPL(__imp__sub_827F9204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9208"))) PPC_WEAK_FUNC(sub_827F9208);
PPC_FUNC_IMPL(__imp__sub_827F9208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x827F9210;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x827f9274
	if (!ctx.cr6.eq) goto loc_827F9274;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822959a8
	ctx.lr = 0x827F9248;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f9258
	if (ctx.cr6.eq) goto loc_827F9258;
	// bl 0x827fa298
	ctx.lr = 0x827F9254;
	sub_827FA298(ctx, base);
	// b 0x827f925c
	goto loc_827F925C;
loc_827F9258:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_827F925C:
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x827fa180
	ctx.lr = 0x827F9268;
	sub_827FA180(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f9280
	if (ctx.cr6.eq) goto loc_827F9280;
	// stb r28,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r28.u8);
loc_827F9274:
	// stb r28,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r28.u8);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x827f929c
	goto loc_827F929C;
loc_827F9280:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
	// bl 0x82294a58
	ctx.lr = 0x827F9290;
	sub_82294A58(ctx, base);
	// stw r29,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r29.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_827F929C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fae68
	ctx.lr = 0x827F92AC;
	sub_827FAE68(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F92B8"))) PPC_WEAK_FUNC(sub_827F92B8);
PPC_FUNC_IMPL(__imp__sub_827F92B8) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f9300
	if (ctx.cr6.eq) goto loc_827F9300;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f9300
	if (ctx.cr6.eq) goto loc_827F9300;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f9300
	if (ctx.cr6.eq) goto loc_827F9300;
	// bl 0x827f9328
	ctx.lr = 0x827F92F0;
	sub_827F9328(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f9314
	if (ctx.cr6.eq) goto loc_827F9314;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x827f9314
	if (ctx.cr6.eq) goto loc_827F9314;
loc_827F9300:
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
loc_827F9314:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9328"))) PPC_WEAK_FUNC(sub_827F9328);
PPC_FUNC_IMPL(__imp__sub_827F9328) {
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
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f9354
	if (ctx.cr6.eq) goto loc_827F9354;
	// bl 0x827f9d20
	ctx.lr = 0x827F9354;
	sub_827F9D20(ctx, base);
loc_827F9354:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x82294a58
	ctx.lr = 0x827F935C;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fae68
	ctx.lr = 0x827F9380;
	sub_827FAE68(ctx, base);
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

__attribute__((alias("__imp__sub_827F9398"))) PPC_WEAK_FUNC(sub_827F9398);
PPC_FUNC_IMPL(__imp__sub_827F9398) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827f9420
	if (ctx.cr6.eq) goto loc_827F9420;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f93e0
	if (ctx.cr6.eq) goto loc_827F93E0;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f93e0
	if (ctx.cr6.eq) goto loc_827F93E0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f9428
	if (!ctx.cr6.eq) goto loc_827F9428;
loc_827F93E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F93F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// lwz r9,124(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827f9420
	if (ctx.cr6.eq) goto loc_827F9420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f8f40
	ctx.lr = 0x827F9410;
	sub_827F8F40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f9428
	if (ctx.cr6.eq) goto loc_827F9428;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x827f9428
	if (ctx.cr6.eq) goto loc_827F9428;
loc_827F9420:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827f942c
	goto loc_827F942C;
loc_827F9428:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827F942C:
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

__attribute__((alias("__imp__sub_827F9444"))) PPC_WEAK_FUNC(sub_827F9444);
PPC_FUNC_IMPL(__imp__sub_827F9444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9448"))) PPC_WEAK_FUNC(sub_827F9448);
PPC_FUNC_IMPL(__imp__sub_827F9448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x827F9450;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,73(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x827f9578
	if (!ctx.cr6.eq) goto loc_827F9578;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827f9690
	if (!ctx.cr6.gt) goto loc_827F9690;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// bl 0x827f83b8
	ctx.lr = 0x827F9484;
	sub_827F83B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f9690
	if (ctx.cr6.eq) goto loc_827F9690;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,512
	ctx.r11.s64 = 512;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82294520
	ctx.lr = 0x827F94B4;
	sub_82294520(ctx, base);
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823992a0
	ctx.lr = 0x827F94C0;
	sub_823992A0(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// li r5,83
	ctx.r5.s64 = 83;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r8,82
	ctx.r8.s64 = 82;
	// stbx r7,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r7,160(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// stbx r7,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lbz r7,161(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 161);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r7,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lbz r30,162(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 162);
	// stb r30,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r30.u8);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lwz r7,160(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stb r7,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// stbx r5,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u8);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// bl 0x827fa058
	ctx.lr = 0x827F953C;
	sub_827FA058(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x827f9bf8
	ctx.lr = 0x827F9548;
	sub_827F9BF8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x827f8708
	ctx.lr = 0x827F9558;
	sub_827F8708(ctx, base);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x827f9fe8
	ctx.lr = 0x827F9568;
	sub_827F9FE8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1a50
	ctx.lr = 0x827F9570;
	sub_822B1A50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_827F9578:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x827f9690
	if (!ctx.cr6.eq) goto loc_827F9690;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f84d0
	ctx.lr = 0x827F9590;
	sub_827F84D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f9690
	if (ctx.cr6.eq) goto loc_827F9690;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r4,-31884
	ctx.r4.s64 = -2089549824;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,128(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 128);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// lwz r4,25104(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25104);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822a93e8
	ctx.lr = 0x827F95D4;
	sub_822A93E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827f9690
	if (ctx.cr6.eq) goto loc_827F9690;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 + 132;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294ac0
	ctx.lr = 0x827F95FC;
	sub_82294AC0(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r28,-16
	ctx.r9.s64 = ctx.r28.s64 + -16;
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r10,132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// li r3,16
	ctx.r3.s64 = 16;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// bl 0x822959a8
	ctx.lr = 0x827F9634;
	sub_822959A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827f9658
	if (ctx.cr6.eq) goto loc_827F9658;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e640b8
	ctx.lr = 0x827F964C;
	sub_82E640B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
loc_827F9658:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827f9b00
	ctx.lr = 0x827F9664;
	sub_827F9B00(ctx, base);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f8a98
	ctx.lr = 0x827F9678;
	sub_827F8A98(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fae68
	ctx.lr = 0x827F9690;
	sub_827FAE68(ctx, base);
loc_827F9690:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9698"))) PPC_WEAK_FUNC(sub_827F9698);
PPC_FUNC_IMPL(__imp__sub_827F9698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x827F96A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f973c
	if (ctx.cr6.eq) goto loc_827F973C;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827f973c
	if (!ctx.cr6.eq) goto loc_827F973C;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f9710
	if (!ctx.cr6.gt) goto loc_827F9710;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_827F96DC:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f96f8
	if (ctx.cr6.eq) goto loc_827F96F8;
	// bl 0x82294a58
	ctx.lr = 0x827F96F8;
	sub_82294A58(ctx, base);
loc_827F96F8:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x827f96dc
	if (ctx.cr6.lt) goto loc_827F96DC;
loc_827F9710:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 + 132;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// stw r28,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827f9738
	if (ctx.cr6.eq) goto loc_827F9738;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82294520
	ctx.lr = 0x827F9738;
	sub_82294520(ctx, base);
loc_827F9738:
	// stw r28,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r28.u32);
loc_827F973C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9744"))) PPC_WEAK_FUNC(sub_827F9744);
PPC_FUNC_IMPL(__imp__sub_827F9744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9748"))) PPC_WEAK_FUNC(sub_827F9748);
PPC_FUNC_IMPL(__imp__sub_827F9748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x827F9750;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f980c
	if (!ctx.cr6.eq) goto loc_827F980C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x822959a8
	ctx.lr = 0x827F9780;
	sub_822959A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827f97a8
	if (ctx.cr6.eq) goto loc_827F97A8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e640b8
	ctx.lr = 0x827F9798;
	sub_82E640B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// b 0x827f97ac
	goto loc_827F97AC;
loc_827F97A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_827F97AC:
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82bea998
	ctx.lr = 0x827F97BC;
	sub_82BEA998(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f97fc
	if (ctx.cr6.eq) goto loc_827F97FC;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r10,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r10.u8);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fae68
	ctx.lr = 0x827F97F0;
	sub_827FAE68(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_827F97FC:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x82294a58
	ctx.lr = 0x827F9804;
	sub_82294A58(ctx, base);
	// stw r28,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r28.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
loc_827F980C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9818"))) PPC_WEAK_FUNC(sub_827F9818);
PPC_FUNC_IMPL(__imp__sub_827F9818) {
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
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f989c
	if (ctx.cr6.eq) goto loc_827F989C;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f989c
	if (ctx.cr6.eq) goto loc_827F989C;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f989c
	if (ctx.cr6.eq) goto loc_827F989C;
	// rlwinm r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f9864
	if (!ctx.cr6.eq) goto loc_827F9864;
	// bl 0x827f9d20
	ctx.lr = 0x827F9864;
	sub_827F9D20(ctx, base);
loc_827F9864:
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fae68
	ctx.lr = 0x827F9884;
	sub_827FAE68(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_827F989C:
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

__attribute__((alias("__imp__sub_827F98B4"))) PPC_WEAK_FUNC(sub_827F98B4);
PPC_FUNC_IMPL(__imp__sub_827F98B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F98B8"))) PPC_WEAK_FUNC(sub_827F98B8);
PPC_FUNC_IMPL(__imp__sub_827F98B8) {
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
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f9908
	if (ctx.cr6.eq) goto loc_827F9908;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f9908
	if (ctx.cr6.eq) goto loc_827F9908;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f9940
	if (!ctx.cr6.eq) goto loc_827F9940;
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x827f9908
	if (!ctx.cr6.eq) goto loc_827F9908;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
loc_827F9908:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fae68
	ctx.lr = 0x827F9920;
	sub_827FAE68(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r10.u8);
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
loc_827F9940:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fae68
	ctx.lr = 0x827F9958;
	sub_827FAE68(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_827F9978"))) PPC_WEAK_FUNC(sub_827F9978);
PPC_FUNC_IMPL(__imp__sub_827F9978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f99d8
	if (ctx.cr6.eq) goto loc_827F99D8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// addi r4,r10,6440
	ctx.r4.s64 = ctx.r10.s64 + 6440;
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// bl 0x8232e868
	ctx.lr = 0x827F99C0;
	sub_8232E868(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295908
	ctx.lr = 0x827F99CC;
	sub_82295908(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x827F99D4;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_827F99D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F99EC"))) PPC_WEAK_FUNC(sub_827F99EC);
PPC_FUNC_IMPL(__imp__sub_827F99EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F99F0"))) PPC_WEAK_FUNC(sub_827F99F0);
PPC_FUNC_IMPL(__imp__sub_827F99F0) {
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
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9A14"))) PPC_WEAK_FUNC(sub_827F9A14);
PPC_FUNC_IMPL(__imp__sub_827F9A14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9A18"))) PPC_WEAK_FUNC(sub_827F9A18);
PPC_FUNC_IMPL(__imp__sub_827F9A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x827F9A20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f9a88
	if (!ctx.cr6.gt) goto loc_827F9A88;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_827F9A44:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x827f9a60
	if (ctx.cr6.eq) goto loc_827F9A60;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x827f9a68
	if (!ctx.cr6.eq) goto loc_827F9A68;
loc_827F9A60:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82294a58
	ctx.lr = 0x827F9A68;
	sub_82294A58(ctx, base);
loc_827F9A68:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stb r28,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r28.u8);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827f9a44
	if (ctx.cr6.lt) goto loc_827F9A44;
loc_827F9A88:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x827f9aac
	if (ctx.cr6.eq) goto loc_827F9AAC;
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x827F9AAC;
	sub_82294520(ctx, base);
loc_827F9AAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9AB4"))) PPC_WEAK_FUNC(sub_827F9AB4);
PPC_FUNC_IMPL(__imp__sub_827F9AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9AB8"))) PPC_WEAK_FUNC(sub_827F9AB8);
PPC_FUNC_IMPL(__imp__sub_827F9AB8) {
	PPC_FUNC_PROLOGUE();
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82294ac0
	sub_82294AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9ACC"))) PPC_WEAK_FUNC(sub_827F9ACC);
PPC_FUNC_IMPL(__imp__sub_827F9ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9AD0"))) PPC_WEAK_FUNC(sub_827F9AD0);
PPC_FUNC_IMPL(__imp__sub_827F9AD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9AF4"))) PPC_WEAK_FUNC(sub_827F9AF4);
PPC_FUNC_IMPL(__imp__sub_827F9AF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9AF8"))) PPC_WEAK_FUNC(sub_827F9AF8);
PPC_FUNC_IMPL(__imp__sub_827F9AF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9AFC"))) PPC_WEAK_FUNC(sub_827F9AFC);
PPC_FUNC_IMPL(__imp__sub_827F9AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9B00"))) PPC_WEAK_FUNC(sub_827F9B00);
PPC_FUNC_IMPL(__imp__sub_827F9B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827F9B08;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x827f9b50
	ctx.lr = 0x827F9B24;
	sub_827F9B50(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x827f9b50
	ctx.lr = 0x827F9B3C;
	sub_827F9B50(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r10,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9B50"))) PPC_WEAK_FUNC(sub_827F9B50);
PPC_FUNC_IMPL(__imp__sub_827F9B50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x827f9ba8
	if (ctx.cr6.gt) goto loc_827F9BA8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// blr 
	return;
loc_827F9BA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9BB4"))) PPC_WEAK_FUNC(sub_827F9BB4);
PPC_FUNC_IMPL(__imp__sub_827F9BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9BB8"))) PPC_WEAK_FUNC(sub_827F9BB8);
PPC_FUNC_IMPL(__imp__sub_827F9BB8) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e640b8
	ctx.lr = 0x827F9BD8;
	sub_82E640B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_827F9BF8"))) PPC_WEAK_FUNC(sub_827F9BF8);
PPC_FUNC_IMPL(__imp__sub_827F9BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r11,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r6,r11,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stbx r8,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r5,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r5.u8);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lhz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// rlwinm r6,r7,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF;
	// stbx r6,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u8);
	// rlwinm r5,r7,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r4,r7,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r4,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r4.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9CB0"))) PPC_WEAK_FUNC(sub_827F9CB0);
PPC_FUNC_IMPL(__imp__sub_827F9CB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9CBC"))) PPC_WEAK_FUNC(sub_827F9CBC);
PPC_FUNC_IMPL(__imp__sub_827F9CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9CC0"))) PPC_WEAK_FUNC(sub_827F9CC0);
PPC_FUNC_IMPL(__imp__sub_827F9CC0) {
	PPC_FUNC_PROLOGUE();
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r8,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r8.u8);
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r6,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r6.u8);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r4,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r4.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9D1C"))) PPC_WEAK_FUNC(sub_827F9D1C);
PPC_FUNC_IMPL(__imp__sub_827F9D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9D20"))) PPC_WEAK_FUNC(sub_827F9D20);
PPC_FUNC_IMPL(__imp__sub_827F9D20) {
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
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stb r30,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r30.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f9d54
	if (ctx.cr6.eq) goto loc_827F9D54;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827f9f58
	ctx.lr = 0x827F9D54;
	sub_827F9F58(ctx, base);
loc_827F9D54:
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_827F9D70"))) PPC_WEAK_FUNC(sub_827F9D70);
PPC_FUNC_IMPL(__imp__sub_827F9D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x827F9D78;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// ld r4,-16080(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16080);
	// bl 0x8229e490
	ctx.lr = 0x827F9DB4;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,228(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827F9DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82294bb8
	ctx.lr = 0x827F9DDC;
	sub_82294BB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827f9e08
	ctx.lr = 0x827F9DE4;
	sub_827F9E08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9DF0"))) PPC_WEAK_FUNC(sub_827F9DF0);
PPC_FUNC_IMPL(__imp__sub_827F9DF0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9E04"))) PPC_WEAK_FUNC(sub_827F9E04);
PPC_FUNC_IMPL(__imp__sub_827F9E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9E08"))) PPC_WEAK_FUNC(sub_827F9E08);
PPC_FUNC_IMPL(__imp__sub_827F9E08) {
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
	// beq cr6,0x827f9e44
	if (ctx.cr6.eq) goto loc_827F9E44;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x827F9E44;
	sub_82294520(ctx, base);
loc_827F9E44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x827F9E4C;
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

__attribute__((alias("__imp__sub_827F9E60"))) PPC_WEAK_FUNC(sub_827F9E60);
PPC_FUNC_IMPL(__imp__sub_827F9E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x827F9E68;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e640b8
	ctx.lr = 0x827F9E88;
	sub_82E640B8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// ld r4,-16108(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16108);
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x827F9EA8;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,228(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F9EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r9,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9ED8"))) PPC_WEAK_FUNC(sub_827F9ED8);
PPC_FUNC_IMPL(__imp__sub_827F9ED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9EDC"))) PPC_WEAK_FUNC(sub_827F9EDC);
PPC_FUNC_IMPL(__imp__sub_827F9EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9EE0"))) PPC_WEAK_FUNC(sub_827F9EE0);
PPC_FUNC_IMPL(__imp__sub_827F9EE0) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e640b8
	ctx.lr = 0x827F9F00;
	sub_82E640B8(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// lwz r3,-31340(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31340);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f9f40
	if (ctx.cr6.eq) goto loc_827F9F40;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,-24528(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24528);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827F9F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lwz r11,-31536(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31536);
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
loc_827F9F40:
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

__attribute__((alias("__imp__sub_827F9F58"))) PPC_WEAK_FUNC(sub_827F9F58);
PPC_FUNC_IMPL(__imp__sub_827F9F58) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f9f8c
	if (ctx.cr6.eq) goto loc_827F9F8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F9F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F9F8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x827F9F94;
	sub_82294A58(ctx, base);
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

__attribute__((alias("__imp__sub_827F9FAC"))) PPC_WEAK_FUNC(sub_827F9FAC);
PPC_FUNC_IMPL(__imp__sub_827F9FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9FB0"))) PPC_WEAK_FUNC(sub_827F9FB0);
PPC_FUNC_IMPL(__imp__sub_827F9FB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
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

__attribute__((alias("__imp__sub_827F9FD0"))) PPC_WEAK_FUNC(sub_827F9FD0);
PPC_FUNC_IMPL(__imp__sub_827F9FD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9FD4"))) PPC_WEAK_FUNC(sub_827F9FD4);
PPC_FUNC_IMPL(__imp__sub_827F9FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9FD8"))) PPC_WEAK_FUNC(sub_827F9FD8);
PPC_FUNC_IMPL(__imp__sub_827F9FD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9FE0"))) PPC_WEAK_FUNC(sub_827F9FE0);
PPC_FUNC_IMPL(__imp__sub_827F9FE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9FE8"))) PPC_WEAK_FUNC(sub_827F9FE8);
PPC_FUNC_IMPL(__imp__sub_827F9FE8) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827FA024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827fa03c
	if (ctx.cr6.eq) goto loc_827FA03C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x827fa040
	if (ctx.cr6.eq) goto loc_827FA040;
loc_827FA03C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FA040:
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

__attribute__((alias("__imp__sub_827FA054"))) PPC_WEAK_FUNC(sub_827FA054);
PPC_FUNC_IMPL(__imp__sub_827FA054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FA058"))) PPC_WEAK_FUNC(sub_827FA058);
PPC_FUNC_IMPL(__imp__sub_827FA058) {
	PPC_FUNC_PROLOGUE();
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r8,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r8.u8);
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r6,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r6.u8);
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r7,4(r6)
	PPC_STORE_U8(ctx.r6.u32 + 4, ctx.r7.u8);
	// lbz r5,5(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r5,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// lbz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,6(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6, ctx.r9.u8);
	// ld r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r7,7(r6)
	PPC_STORE_U8(ctx.r6.u32 + 7, ctx.r7.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FA104"))) PPC_WEAK_FUNC(sub_827FA104);
PPC_FUNC_IMPL(__imp__sub_827FA104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FA108"))) PPC_WEAK_FUNC(sub_827FA108);
PPC_FUNC_IMPL(__imp__sub_827FA108) {
	PPC_FUNC_PROLOGUE();
	// b 0x822b1a50
	sub_822B1A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FA10C"))) PPC_WEAK_FUNC(sub_827FA10C);
PPC_FUNC_IMPL(__imp__sub_827FA10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FA110"))) PPC_WEAK_FUNC(sub_827FA110);
PPC_FUNC_IMPL(__imp__sub_827FA110) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x827fa158
	if (ctx.cr6.eq) goto loc_827FA158;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294520
	ctx.lr = 0x827FA158;
	sub_82294520(ctx, base);
loc_827FA158:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823992a0
	ctx.lr = 0x827FA164;
	sub_823992A0(ctx, base);
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

__attribute__((alias("__imp__sub_827FA180"))) PPC_WEAK_FUNC(sub_827FA180);
PPC_FUNC_IMPL(__imp__sub_827FA180) {
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
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r9,-31885
	ctx.r9.s64 = -2089615360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// sth r11,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r11.u16);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r4,28872(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28872);
	// bl 0x822b6860
	ctx.lr = 0x827FA1B8;
	sub_822B6860(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-31340(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31340);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x827FA1DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x827fa27c
	if (ctx.cr6.eq) goto loc_827FA27C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827FA1FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827FA214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x827FA22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FA244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827fa27c
	if (ctx.cr6.eq) goto loc_827FA27C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827FA264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827fa27c
	if (ctx.cr6.eq) goto loc_827FA27C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827fa280
	if (!ctx.cr6.eq) goto loc_827FA280;
loc_827FA27C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FA280:
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

__attribute__((alias("__imp__sub_827FA294"))) PPC_WEAK_FUNC(sub_827FA294);
PPC_FUNC_IMPL(__imp__sub_827FA294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FA298"))) PPC_WEAK_FUNC(sub_827FA298);
PPC_FUNC_IMPL(__imp__sub_827FA298) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e640b8
	ctx.lr = 0x827FA2BC;
	sub_82E640B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// sth r30,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r30.u16);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e640b8
	ctx.lr = 0x827FA2DC;
	sub_82E640B8(ctx, base);
	// sth r30,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r30.u16);
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

__attribute__((alias("__imp__sub_827FA2FC"))) PPC_WEAK_FUNC(sub_827FA2FC);
PPC_FUNC_IMPL(__imp__sub_827FA2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FA300"))) PPC_WEAK_FUNC(sub_827FA300);
PPC_FUNC_IMPL(__imp__sub_827FA300) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_827FA31C:
	// bl 0x82cb2308
	ctx.lr = 0x827FA320;
	sub_82CB2308(ctx, base);
	// stbx r3,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x827fa31c
	if (ctx.cr6.lt) goto loc_827FA31C;
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

__attribute__((alias("__imp__sub_827FA348"))) PPC_WEAK_FUNC(sub_827FA348);
PPC_FUNC_IMPL(__imp__sub_827FA348) {
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
	// bl 0x827f9b50
	ctx.lr = 0x827FA368;
	sub_827F9B50(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fa3c8
	ctx.lr = 0x827FA374;
	sub_827FA3C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x827fa3a8
	if (ctx.cr6.gt) goto loc_827FA3A8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r9.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x827fa3b0
	goto loc_827FA3B0;
loc_827FA3A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_827FA3B0:
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

__attribute__((alias("__imp__sub_827FA3C8"))) PPC_WEAK_FUNC(sub_827FA3C8);
PPC_FUNC_IMPL(__imp__sub_827FA3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x827FA3D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x827fa410
	if (ctx.cr6.gt) goto loc_827FA410;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x827fa414
	goto loc_827FA414;
loc_827FA410:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_827FA414:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x827fa5bc
	if (ctx.cr6.gt) goto loc_827FA5BC;
	// lis r12,-32128
	ctx.r12.s64 = -2105540608;
	// addi r12,r12,-23492
	ctx.r12.s64 = ctx.r12.s64 + -23492;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_827FA484;
	case 1:
		goto loc_827FA4B0;
	case 2:
		goto loc_827FA4DC;
	case 3:
		goto loc_827FA574;
	case 4:
		goto loc_827FA454;
	case 5:
		goto loc_827FA50C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-23420(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23420);
	// lwz r19,-23376(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23376);
	// lwz r19,-23332(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23332);
	// lwz r19,-23180(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23180);
	// lwz r19,-23468(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23468);
	// lwz r19,-23284(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23284);
loc_827FA454:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x827f9b50
	ctx.lr = 0x827FA46C;
	sub_827F9B50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82666e30
	ctx.lr = 0x827FA478;
	sub_82666E30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_827FA484:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827f9b50
	ctx.lr = 0x827FA498;
	sub_827F9B50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82666d68
	ctx.lr = 0x827FA4A4;
	sub_82666D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_827FA4B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x827fafa0
	ctx.lr = 0x827FA4C4;
	sub_827FAFA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82666f18
	ctx.lr = 0x827FA4D0;
	sub_82666F18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_827FA4DC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// bl 0x827fafa0
	ctx.lr = 0x827FA4F4;
	sub_827FAFA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82666dd0
	ctx.lr = 0x827FA500;
	sub_82666DD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_827FA50C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827f9b50
	ctx.lr = 0x827FA520;
	sub_827F9B50(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x827fa564
	if (ctx.cr6.gt) goto loc_827FA564;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82666ea0
	ctx.lr = 0x827FA54C;
	sub_82666EA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_827FA564:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_827FA574:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x827fa660
	ctx.lr = 0x827FA590;
	sub_827FA660(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827fa5a4
	if (ctx.cr6.eq) goto loc_827FA5A4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x827fa5ac
	goto loc_827FA5AC;
loc_827FA5A4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_827FA5AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82666ca0
	ctx.lr = 0x827FA5B4;
	sub_82666CA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x827FA5BC;
	sub_82299080(ctx, base);
loc_827FA5BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FA5C8"))) PPC_WEAK_FUNC(sub_827FA5C8);
PPC_FUNC_IMPL(__imp__sub_827FA5C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f9b50
	sub_827F9B50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FA5CC"))) PPC_WEAK_FUNC(sub_827FA5CC);
PPC_FUNC_IMPL(__imp__sub_827FA5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FA5D0"))) PPC_WEAK_FUNC(sub_827FA5D0);
PPC_FUNC_IMPL(__imp__sub_827FA5D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x827fafa0
	sub_827FAFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FA5D4"))) PPC_WEAK_FUNC(sub_827FA5D4);
PPC_FUNC_IMPL(__imp__sub_827FA5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FA5D8"))) PPC_WEAK_FUNC(sub_827FA5D8);
PPC_FUNC_IMPL(__imp__sub_827FA5D8) {
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
	// bl 0x827f9b50
	ctx.lr = 0x827FA5F8;
	sub_827F9B50(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// bl 0x827f9b50
	ctx.lr = 0x827FA600;
	sub_827F9B50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x827fa638
	if (ctx.cr6.gt) goto loc_827FA638;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// b 0x827fa640
	goto loc_827FA640;
loc_827FA638:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_827FA640:
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

__attribute__((alias("__imp__sub_827FA658"))) PPC_WEAK_FUNC(sub_827FA658);
PPC_FUNC_IMPL(__imp__sub_827FA658) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FA660"))) PPC_WEAK_FUNC(sub_827FA660);
PPC_FUNC_IMPL(__imp__sub_827FA660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x827FA668;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// bl 0x827f9b50
	ctx.lr = 0x827FA688;
	sub_827F9B50(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x827fa758
	if (ctx.cr6.gt) goto loc_827FA758;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x827fa728
	if (!ctx.cr6.gt) goto loc_827FA728;
	// addic. r11,r29,1
	ctx.xer.ca = ctx.r29.u32 > 4294967294;
	ctx.r11.s64 = ctx.r29.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827fa6b8
	if (!ctx.cr0.eq) goto loc_827FA6B8;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// b 0x827fa6d8
	goto loc_827FA6D8;
loc_827FA6B8:
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// rlwinm r9,r11,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// rlwinm r12,r8,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x827FA6CC;
	sub_82CB8074(ctx, base);
	// lwz r7,0(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r7,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r1.u32 = ea;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
loc_827FA6D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82bea998
	ctx.lr = 0x827FA6EC;
	sub_82BEA998(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stbx r26,r28,r29
	PPC_STORE_U8(ctx.r28.u32 + ctx.r29.u32, ctx.r26.u8);
	// bl 0x82295680
	ctx.lr = 0x827FA708;
	sub_82295680(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82295908
	ctx.lr = 0x827FA714;
	sub_82295908(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x827FA71C;
	sub_82299080(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_827FA728:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827fa760
	if (ctx.cr6.eq) goto loc_827FA760;
	// stw r26,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82294520
	ctx.lr = 0x827FA74C;
	sub_82294520(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_827FA758:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_827FA760:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FA76C"))) PPC_WEAK_FUNC(sub_827FA76C);
PPC_FUNC_IMPL(__imp__sub_827FA76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FA770"))) PPC_WEAK_FUNC(sub_827FA770);
PPC_FUNC_IMPL(__imp__sub_827FA770) {
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
	// bl 0x827fafa0
	ctx.lr = 0x827FA788;
	sub_827FAFA0(ctx, base);
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

__attribute__((alias("__imp__sub_827FA7A0"))) PPC_WEAK_FUNC(sub_827FA7A0);
PPC_FUNC_IMPL(__imp__sub_827FA7A0) {
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
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r8,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r8.u8);
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r6,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r6.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r6,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r6.u32);
	// bl 0x827fa850
	ctx.lr = 0x827FA81C;
	sub_827FA850(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r5.u32);
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// stbx r10,r4,r11
	PPC_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_827FA850"))) PPC_WEAK_FUNC(sub_827FA850);
PPC_FUNC_IMPL(__imp__sub_827FA850) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x827faa48
	if (ctx.cr6.gt) goto loc_827FAA48;
	// lis r12,-32128
	ctx.r12.s64 = -2105540608;
	// addi r12,r12,-22364
	ctx.r12.s64 = ctx.r12.s64 + -22364;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_827FA91C;
	case 1:
		goto loc_827FA978;
	case 2:
		goto loc_827FA988;
	case 3:
		goto loc_827FAA3C;
	case 4:
		goto loc_827FA8BC;
	case 5:
		goto loc_827FA9A0;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-22244(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22244);
	// lwz r19,-22152(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22152);
	// lwz r19,-22136(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22136);
	// lwz r19,-21956(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21956);
	// lwz r19,-22340(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22340);
	// lwz r19,-22112(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22112);
loc_827FA8BC:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r11,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r6,r11,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stbx r8,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r7,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r7.u8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r6,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r6.u8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// b 0x827faa48
	goto loc_827FAA48;
loc_827FA91C:
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lbz r8,5(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r8,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r8.u8);
	// lbz r6,6(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r6,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r6.u8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r4,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r4.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// b 0x827faa48
	goto loc_827FAA48;
loc_827FA978:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fa058
	ctx.lr = 0x827FA984;
	sub_827FA058(ctx, base);
	// b 0x827faa48
	goto loc_827FAA48;
loc_827FA988:
	// ld r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x827fa058
	ctx.lr = 0x827FA99C;
	sub_827FA058(ctx, base);
	// b 0x827faa48
	goto loc_827FAA48;
loc_827FA9A0:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// lbz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stbx r8,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u8);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r6,5(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r6,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r6.u8);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r3,6(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// stb r3,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r3.u8);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stb r7,3(r5)
	PPC_STORE_U8(ctx.r5.u32 + 3, ctx.r7.u8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// ble cr6,0x827faa48
	if (!ctx.cr6.gt) goto loc_827FAA48;
loc_827FAA10:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lbzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r5,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r5.u8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x827faa10
	if (ctx.cr6.lt) goto loc_827FAA10;
	// b 0x827faa48
	goto loc_827FAA48;
loc_827FAA3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x827faaf0
	ctx.lr = 0x827FAA48;
	sub_827FAAF0(ctx, base);
loc_827FAA48:
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

__attribute__((alias("__imp__sub_827FAA60"))) PPC_WEAK_FUNC(sub_827FAA60);
PPC_FUNC_IMPL(__imp__sub_827FAA60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r11,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r6,r11,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stbx r8,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r7,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r7.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FAAC0"))) PPC_WEAK_FUNC(sub_827FAAC0);
PPC_FUNC_IMPL(__imp__sub_827FAAC0) {
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
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x827fa058
	ctx.lr = 0x827FAADC;
	sub_827FA058(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FAAEC"))) PPC_WEAK_FUNC(sub_827FAAEC);
PPC_FUNC_IMPL(__imp__sub_827FAAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FAAF0"))) PPC_WEAK_FUNC(sub_827FAAF0);
PPC_FUNC_IMPL(__imp__sub_827FAAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827FAAF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827fab1c
	if (ctx.cr6.eq) goto loc_827FAB1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x827FAB14;
	sub_82CB0EC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x827fab20
	goto loc_827FAB20;
loc_827FAB1C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_827FAB20:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r30,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r30,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// rlwinm r7,r30,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r8,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r8.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r7,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r7.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r30,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r30.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x827fabcc
	if (ctx.cr6.eq) goto loc_827FABCC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bbad8
	ctx.lr = 0x827FAB88;
	sub_822BBAD8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,132(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// bl 0x82bea998
	ctx.lr = 0x827FABA4;
	sub_82BEA998(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x827fabc0
	if (ctx.cr6.eq) goto loc_827FABC0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827fabc0
	if (ctx.cr6.eq) goto loc_827FABC0;
	// bl 0x82294a58
	ctx.lr = 0x827FABC0;
	sub_82294A58(ctx, base);
loc_827FABC0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_827FABCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FABD8"))) PPC_WEAK_FUNC(sub_827FABD8);
PPC_FUNC_IMPL(__imp__sub_827FABD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FABF4"))) PPC_WEAK_FUNC(sub_827FABF4);
PPC_FUNC_IMPL(__imp__sub_827FABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FABF8"))) PPC_WEAK_FUNC(sub_827FABF8);
PPC_FUNC_IMPL(__imp__sub_827FABF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r8,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r8.u8);
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r6,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r6.u8);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lbz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stbx r5,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u8);
	// lbz r9,5(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r9.u8);
	// lbz r7,6(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r7,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r7.u8);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lbz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FACB8"))) PPC_WEAK_FUNC(sub_827FACB8);
PPC_FUNC_IMPL(__imp__sub_827FACB8) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x827face4
	if (!ctx.cr6.eq) goto loc_827FACE4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_827FACE4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r30,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r30,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// rlwinm r7,r30,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r8,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r8.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r7,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r7.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r30,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r30.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827fada0
	if (ctx.cr6.eq) goto loc_827FADA0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827fada0
	if (!ctx.cr6.gt) goto loc_827FADA0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x822bbad8
	ctx.lr = 0x827FAD5C;
	sub_822BBAD8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,132(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// bl 0x82bea998
	ctx.lr = 0x827FAD78;
	sub_82BEA998(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x827fad94
	if (ctx.cr6.eq) goto loc_827FAD94;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827fad94
	if (ctx.cr6.eq) goto loc_827FAD94;
	// bl 0x82294a58
	ctx.lr = 0x827FAD94;
	sub_82294A58(ctx, base);
loc_827FAD94:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_827FADA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_827FADBC"))) PPC_WEAK_FUNC(sub_827FADBC);
PPC_FUNC_IMPL(__imp__sub_827FADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FADC0"))) PPC_WEAK_FUNC(sub_827FADC0);
PPC_FUNC_IMPL(__imp__sub_827FADC0) {
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
	// bl 0x827fa058
	ctx.lr = 0x827FADD8;
	sub_827FA058(ctx, base);
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

__attribute__((alias("__imp__sub_827FADF0"))) PPC_WEAK_FUNC(sub_827FADF0);
PPC_FUNC_IMPL(__imp__sub_827FADF0) {
	PPC_FUNC_PROLOGUE();
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r8,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r8.u8);
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r6,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r6.u8);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r4,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r4.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FAE4C"))) PPC_WEAK_FUNC(sub_827FAE4C);
PPC_FUNC_IMPL(__imp__sub_827FAE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FAE50"))) PPC_WEAK_FUNC(sub_827FAE50);
PPC_FUNC_IMPL(__imp__sub_827FAE50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stbx r4,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FAE68"))) PPC_WEAK_FUNC(sub_827FAE68);
PPC_FUNC_IMPL(__imp__sub_827FAE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x827FAE70;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827faef8
	if (!ctx.cr6.gt) goto loc_827FAEF8;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_827FAE98:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add. r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x827faed4
	if (ctx.cr0.eq) goto loc_827FAED4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827FAED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827FAED4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827faee8
	if (!ctx.cr6.gt) goto loc_827FAEE8;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
loc_827FAEE8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827fae98
	if (ctx.cr6.lt) goto loc_827FAE98;
loc_827FAEF8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FAF00"))) PPC_WEAK_FUNC(sub_827FAF00);
PPC_FUNC_IMPL(__imp__sub_827FAF00) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// beq cr6,0x827faf10
	if (ctx.cr6.eq) goto loc_827FAF10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827FAF10:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FAF18"))) PPC_WEAK_FUNC(sub_827FAF18);
PPC_FUNC_IMPL(__imp__sub_827FAF18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827faf88
	if (ctx.cr6.eq) goto loc_827FAF88;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e640b8
	ctx.lr = 0x827FAF58;
	sub_82E640B8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,512
	ctx.r5.s64 = 512;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827FAF84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827FAF88:
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

__attribute__((alias("__imp__sub_827FAFA0"))) PPC_WEAK_FUNC(sub_827FAFA0);
PPC_FUNC_IMPL(__imp__sub_827FAFA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x827fb028
	if (ctx.cr6.gt) goto loc_827FB028;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r8,r10,8,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r8,r5,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rldicr r7,r8,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rldicr r8,r6,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rldicr r6,r7,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rldicr r7,r8,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// std r6,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r6.u64);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
loc_827FB028:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB034"))) PPC_WEAK_FUNC(sub_827FB034);
PPC_FUNC_IMPL(__imp__sub_827FB034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FB038"))) PPC_WEAK_FUNC(sub_827FB038);
PPC_FUNC_IMPL(__imp__sub_827FB038) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f9b50
	sub_827F9B50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FB03C"))) PPC_WEAK_FUNC(sub_827FB03C);
PPC_FUNC_IMPL(__imp__sub_827FB03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FB040"))) PPC_WEAK_FUNC(sub_827FB040);
PPC_FUNC_IMPL(__imp__sub_827FB040) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x827fb070
	if (ctx.cr6.gt) goto loc_827FB070;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
loc_827FB070:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB07C"))) PPC_WEAK_FUNC(sub_827FB07C);
PPC_FUNC_IMPL(__imp__sub_827FB07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FB080"))) PPC_WEAK_FUNC(sub_827FB080);
PPC_FUNC_IMPL(__imp__sub_827FB080) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB098"))) PPC_WEAK_FUNC(sub_827FB098);
PPC_FUNC_IMPL(__imp__sub_827FB098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB0A4"))) PPC_WEAK_FUNC(sub_827FB0A4);
PPC_FUNC_IMPL(__imp__sub_827FB0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FB0A8"))) PPC_WEAK_FUNC(sub_827FB0A8);
PPC_FUNC_IMPL(__imp__sub_827FB0A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r8,r9,-21592
	ctx.r8.s64 = ctx.r9.s64 + -21592;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB0D0"))) PPC_WEAK_FUNC(sub_827FB0D0);
PPC_FUNC_IMPL(__imp__sub_827FB0D0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB0D8"))) PPC_WEAK_FUNC(sub_827FB0D8);
PPC_FUNC_IMPL(__imp__sub_827FB0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r8,r9,-21592
	ctx.r8.s64 = ctx.r9.s64 + -21592;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB0F8"))) PPC_WEAK_FUNC(sub_827FB0F8);
PPC_FUNC_IMPL(__imp__sub_827FB0F8) {
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
	// bl 0x827fb168
	ctx.lr = 0x827FB118;
	sub_827FB168(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827fb14c
	if (ctx.cr6.eq) goto loc_827FB14C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827fb144
	if (ctx.cr6.lt) goto loc_827FB144;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827fb14c
	if (!ctx.cr6.gt) goto loc_827FB14C;
loc_827FB144:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x827FB14C;
	sub_82294A58(ctx, base);
loc_827FB14C:
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

__attribute__((alias("__imp__sub_827FB168"))) PPC_WEAK_FUNC(sub_827FB168);
PPC_FUNC_IMPL(__imp__sub_827FB168) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r10,r11,-21592
	ctx.r10.s64 = ctx.r11.s64 + -21592;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x827FB18C;
	sub_8229C068(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x825568c0
	ctx.lr = 0x827FB194;
	sub_825568C0(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x825568c0
	ctx.lr = 0x827FB19C;
	sub_825568C0(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x825568c0
	ctx.lr = 0x827FB1A4;
	sub_825568C0(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x825568c0
	ctx.lr = 0x827FB1AC;
	sub_825568C0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x825568c0
	ctx.lr = 0x827FB1B4;
	sub_825568C0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x825568c0
	ctx.lr = 0x827FB1BC;
	sub_825568C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x827FB1C4;
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

__attribute__((alias("__imp__sub_827FB1D8"))) PPC_WEAK_FUNC(sub_827FB1D8);
PPC_FUNC_IMPL(__imp__sub_827FB1D8) {
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
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-25676(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25676);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,-25676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25676, ctx.r11.u32);
	// bne cr6,0x827fb218
	if (!ctx.cr6.eq) goto loc_827FB218;
	// bl 0x822900a0
	ctx.lr = 0x827FB214;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_827FB218:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827FB230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_827FB248"))) PPC_WEAK_FUNC(sub_827FB248);
PPC_FUNC_IMPL(__imp__sub_827FB248) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r11,-25676(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25676);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-25676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25676, ctx.r11.u32);
	// b 0x823454e8
	sub_823454E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FB25C"))) PPC_WEAK_FUNC(sub_827FB25C);
PPC_FUNC_IMPL(__imp__sub_827FB25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FB260"))) PPC_WEAK_FUNC(sub_827FB260);
PPC_FUNC_IMPL(__imp__sub_827FB260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,-26040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26040);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB27C"))) PPC_WEAK_FUNC(sub_827FB27C);
PPC_FUNC_IMPL(__imp__sub_827FB27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FB280"))) PPC_WEAK_FUNC(sub_827FB280);
PPC_FUNC_IMPL(__imp__sub_827FB280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// lfs f12,-18224(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18224);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// lfs f11,-18228(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18228);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f10,-18232(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18232);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f9,-18236(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -18236);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lfs f8,32024(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32024);
	ctx.f8.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f7,-18240(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -18240);
	ctx.f7.f64 = double(temp.f32);
	// addi r6,r8,-21288
	ctx.r6.s64 = ctx.r8.s64 + -21288;
	// lfs f6,-18244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18244);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-18248(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18248);
	ctx.f5.f64 = double(temp.f32);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// lfs f4,-18252(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18252);
	ctx.f4.f64 = double(temp.f32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f10,28(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f9,32(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f8,36(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f7,40(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f6,44(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f5,48(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f4,52(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB328"))) PPC_WEAK_FUNC(sub_827FB328);
PPC_FUNC_IMPL(__imp__sub_827FB328) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-21280
	ctx.r9.s64 = ctx.r11.s64 + -21280;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x827fb35c
	if (ctx.cr6.eq) goto loc_827FB35C;
	// bl 0x82294a58
	ctx.lr = 0x827FB358;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827FB35C:
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

__attribute__((alias("__imp__sub_827FB370"))) PPC_WEAK_FUNC(sub_827FB370);
PPC_FUNC_IMPL(__imp__sub_827FB370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f11,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r8,r10,-21288
	ctx.r8.s64 = ctx.r10.s64 + -21288;
	// stfs f2,24(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f4,28(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f5,32(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f6,36(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f7,40(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f8,44(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f9,48(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB3C8"))) PPC_WEAK_FUNC(sub_827FB3C8);
PPC_FUNC_IMPL(__imp__sub_827FB3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f0,-28844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// fmadds f10,f12,f11,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f9,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmadds f6,f9,f11,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f5,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmadds f2,f5,f11,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f2,16(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmadds f10,f0,f11,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmadds f6,f9,f11,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f6,24(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f5,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmadds f2,f5,f11,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f2,28(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmadds f10,f0,f11,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,32(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f9,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmadds f6,f9,f11,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f6,36(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f5,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmadds f2,f5,f11,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f2,40(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmadds f10,f0,f11,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,44(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f9,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmadds f6,f9,f11,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f6,48(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f5,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,52(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmadds f2,f5,f11,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f2,52(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmadds f11,f0,f11,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f11,56(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// bgt cr6,0x827fb4f0
	if (ctx.cr6.gt) goto loc_827FB4F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827FB4F0:
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB4F8"))) PPC_WEAK_FUNC(sub_827FB4F8);
PPC_FUNC_IMPL(__imp__sub_827FB4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r11,-29008
	ctx.r9.s64 = ctx.r11.s64 + -29008;
	// lis r8,-31904
	ctx.r8.s64 = -2090860544;
	// lis r7,-31904
	ctx.r7.s64 = -2090860544;
	// lis r6,-32233
	ctx.r6.s64 = -2112421888;
	// lfs f11,-29008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29008);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-18256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18256);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r6,-21284
	ctx.r5.s64 = ctx.r6.s64 + -21284;
	// lfs f0,-3436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3436);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-14096(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -14096);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-14292(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -14292);
	ctx.f10.f64 = double(temp.f32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f10,28(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB54C"))) PPC_WEAK_FUNC(sub_827FB54C);
PPC_FUNC_IMPL(__imp__sub_827FB54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FB550"))) PPC_WEAK_FUNC(sub_827FB550);
PPC_FUNC_IMPL(__imp__sub_827FB550) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-21280
	ctx.r9.s64 = ctx.r11.s64 + -21280;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x827fb584
	if (ctx.cr6.eq) goto loc_827FB584;
	// bl 0x82294a58
	ctx.lr = 0x827FB580;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827FB584:
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

__attribute__((alias("__imp__sub_827FB598"))) PPC_WEAK_FUNC(sub_827FB598);
PPC_FUNC_IMPL(__imp__sub_827FB598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r10,r11,-21284
	ctx.r10.s64 = ctx.r11.s64 + -21284;
	// stfs f3,16(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f4,20(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f5,24(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f6,28(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB5C4"))) PPC_WEAK_FUNC(sub_827FB5C4);
PPC_FUNC_IMPL(__imp__sub_827FB5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FB5C8"))) PPC_WEAK_FUNC(sub_827FB5C8);
PPC_FUNC_IMPL(__imp__sub_827FB5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmadds f10,f12,f11,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f9,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmadds f6,f9,f11,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f5,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmadds f2,f5,f11,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f2,16(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmadds f10,f0,f11,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmadds f6,f9,f11,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f6,24(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f5,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmadds f2,f5,f11,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f2,28(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmadds f11,f0,f11,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB664"))) PPC_WEAK_FUNC(sub_827FB664);
PPC_FUNC_IMPL(__imp__sub_827FB664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FB668"))) PPC_WEAK_FUNC(sub_827FB668);
PPC_FUNC_IMPL(__imp__sub_827FB668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827fb69c
	if (!ctx.cr6.eq) goto loc_827FB69C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// blr 
	return;
loc_827FB69C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32128
	ctx.r12.s64 = -2105540608;
	// addi r12,r12,-18720
	ctx.r12.s64 = ctx.r12.s64 + -18720;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_827FB6F4;
	case 1:
		goto loc_827FB704;
	case 2:
		goto loc_827FB714;
	case 3:
		goto loc_827FB724;
	case 4:
		goto loc_827FB734;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-18700(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18700);
	// lwz r19,-18684(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18684);
	// lwz r19,-18668(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18668);
	// lwz r19,-18652(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18652);
	// lwz r19,-18636(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18636);
loc_827FB6F4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_827FB704:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
loc_827FB714:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_827FB724:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
loc_827FB734:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB744"))) PPC_WEAK_FUNC(sub_827FB744);
PPC_FUNC_IMPL(__imp__sub_827FB744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FB748"))) PPC_WEAK_FUNC(sub_827FB748);
PPC_FUNC_IMPL(__imp__sub_827FB748) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x827fb794
	if (!ctx.cr6.gt) goto loc_827FB794;
	// bl 0x82cb4f48
	ctx.lr = 0x827FB768;
	sub_82CB4F48(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lfs f0,-26236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26236);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827FB794:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB7A8"))) PPC_WEAK_FUNC(sub_827FB7A8);
PPC_FUNC_IMPL(__imp__sub_827FB7A8) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x827fb7f4
	if (!ctx.cr6.gt) goto loc_827FB7F4;
	// bl 0x82cb4f48
	ctx.lr = 0x827FB7C8;
	sub_82CB4F48(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lfs f0,-14292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14292);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827FB7F4:
	// li r3,-10000
	ctx.r3.s64 = -10000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB808"))) PPC_WEAK_FUNC(sub_827FB808);
PPC_FUNC_IMPL(__imp__sub_827FB808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827FB810;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82bea278
	ctx.lr = 0x827FB828;
	sub_82BEA278(ctx, base);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfd f13,-3832(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3832);
	// lfs f12,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f12.f64 = double(temp.f32);
	// fmul f7,f10,f13
	ctx.f7.f64 = ctx.f10.f64 * ctx.f13.f64;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fsubs f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fdivs f1,f5,f8
	ctx.f1.f64 = double(float(ctx.f5.f64 / ctx.f8.f64));
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x827fb8e0
	if (!ctx.cr6.gt) goto loc_827FB8E0;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f11,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f10,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f9,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f8,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f7,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f6,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f5,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,44(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f4,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,48(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f3,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,52(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f2,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,56(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_827FB8E0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x827fb904
	if (!ctx.cr6.lt) goto loc_827FB904;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827fb918
	ctx.lr = 0x827FB8FC;
	sub_827FB918(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_827FB904:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x827fb3c8
	ctx.lr = 0x827FB910;
	sub_827FB3C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FB918"))) PPC_WEAK_FUNC(sub_827FB918);
PPC_FUNC_IMPL(__imp__sub_827FB918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f8,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f7,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f6,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f5,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f4,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,44(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f3,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f2,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,52(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f1,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,56(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

