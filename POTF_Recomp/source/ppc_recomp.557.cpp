#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831F7158"))) PPC_WEAK_FUNC(sub_831F7158);
PPC_FUNC_IMPL(__imp__sub_831F7158) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r4,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7178"))) PPC_WEAK_FUNC(sub_831F7178);
PPC_FUNC_IMPL(__imp__sub_831F7178) {
	PPC_FUNC_PROLOGUE();
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7180"))) PPC_WEAK_FUNC(sub_831F7180);
PPC_FUNC_IMPL(__imp__sub_831F7180) {
	PPC_FUNC_PROLOGUE();
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7188"))) PPC_WEAK_FUNC(sub_831F7188);
PPC_FUNC_IMPL(__imp__sub_831F7188) {
	PPC_FUNC_PROLOGUE();
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7190"))) PPC_WEAK_FUNC(sub_831F7190);
PPC_FUNC_IMPL(__imp__sub_831F7190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-22292
	ctx.r11.s64 = ctx.r11.s64 + -22292;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F71A0"))) PPC_WEAK_FUNC(sub_831F71A0);
PPC_FUNC_IMPL(__imp__sub_831F71A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F71A4"))) PPC_WEAK_FUNC(sub_831F71A4);
PPC_FUNC_IMPL(__imp__sub_831F71A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F71A8"))) PPC_WEAK_FUNC(sub_831F71A8);
PPC_FUNC_IMPL(__imp__sub_831F71A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F71B8"))) PPC_WEAK_FUNC(sub_831F71B8);
PPC_FUNC_IMPL(__imp__sub_831F71B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F71C8"))) PPC_WEAK_FUNC(sub_831F71C8);
PPC_FUNC_IMPL(__imp__sub_831F71C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r4,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F71E8"))) PPC_WEAK_FUNC(sub_831F71E8);
PPC_FUNC_IMPL(__imp__sub_831F71E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F71F8"))) PPC_WEAK_FUNC(sub_831F71F8);
PPC_FUNC_IMPL(__imp__sub_831F71F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F7208"))) PPC_WEAK_FUNC(sub_831F7208);
PPC_FUNC_IMPL(__imp__sub_831F7208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F7218"))) PPC_WEAK_FUNC(sub_831F7218);
PPC_FUNC_IMPL(__imp__sub_831F7218) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F7228"))) PPC_WEAK_FUNC(sub_831F7228);
PPC_FUNC_IMPL(__imp__sub_831F7228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F7238"))) PPC_WEAK_FUNC(sub_831F7238);
PPC_FUNC_IMPL(__imp__sub_831F7238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F723C"))) PPC_WEAK_FUNC(sub_831F723C);
PPC_FUNC_IMPL(__imp__sub_831F723C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7240"))) PPC_WEAK_FUNC(sub_831F7240);
PPC_FUNC_IMPL(__imp__sub_831F7240) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7248"))) PPC_WEAK_FUNC(sub_831F7248);
PPC_FUNC_IMPL(__imp__sub_831F7248) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F725C"))) PPC_WEAK_FUNC(sub_831F725C);
PPC_FUNC_IMPL(__imp__sub_831F725C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7260"))) PPC_WEAK_FUNC(sub_831F7260);
PPC_FUNC_IMPL(__imp__sub_831F7260) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F726C"))) PPC_WEAK_FUNC(sub_831F726C);
PPC_FUNC_IMPL(__imp__sub_831F726C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7270"))) PPC_WEAK_FUNC(sub_831F7270);
PPC_FUNC_IMPL(__imp__sub_831F7270) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7278"))) PPC_WEAK_FUNC(sub_831F7278);
PPC_FUNC_IMPL(__imp__sub_831F7278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F728C"))) PPC_WEAK_FUNC(sub_831F728C);
PPC_FUNC_IMPL(__imp__sub_831F728C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7290"))) PPC_WEAK_FUNC(sub_831F7290);
PPC_FUNC_IMPL(__imp__sub_831F7290) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F729C"))) PPC_WEAK_FUNC(sub_831F729C);
PPC_FUNC_IMPL(__imp__sub_831F729C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F72A0"))) PPC_WEAK_FUNC(sub_831F72A0);
PPC_FUNC_IMPL(__imp__sub_831F72A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F72A8"))) PPC_WEAK_FUNC(sub_831F72A8);
PPC_FUNC_IMPL(__imp__sub_831F72A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F72BC"))) PPC_WEAK_FUNC(sub_831F72BC);
PPC_FUNC_IMPL(__imp__sub_831F72BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F72C0"))) PPC_WEAK_FUNC(sub_831F72C0);
PPC_FUNC_IMPL(__imp__sub_831F72C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F72C8"))) PPC_WEAK_FUNC(sub_831F72C8);
PPC_FUNC_IMPL(__imp__sub_831F72C8) {
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

__attribute__((alias("__imp__sub_831F72DC"))) PPC_WEAK_FUNC(sub_831F72DC);
PPC_FUNC_IMPL(__imp__sub_831F72DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F72E0"))) PPC_WEAK_FUNC(sub_831F72E0);
PPC_FUNC_IMPL(__imp__sub_831F72E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F72E8"))) PPC_WEAK_FUNC(sub_831F72E8);
PPC_FUNC_IMPL(__imp__sub_831F72E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F72FC"))) PPC_WEAK_FUNC(sub_831F72FC);
PPC_FUNC_IMPL(__imp__sub_831F72FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7300"))) PPC_WEAK_FUNC(sub_831F7300);
PPC_FUNC_IMPL(__imp__sub_831F7300) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F730C"))) PPC_WEAK_FUNC(sub_831F730C);
PPC_FUNC_IMPL(__imp__sub_831F730C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7310"))) PPC_WEAK_FUNC(sub_831F7310);
PPC_FUNC_IMPL(__imp__sub_831F7310) {
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

__attribute__((alias("__imp__sub_831F7320"))) PPC_WEAK_FUNC(sub_831F7320);
PPC_FUNC_IMPL(__imp__sub_831F7320) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7328"))) PPC_WEAK_FUNC(sub_831F7328);
PPC_FUNC_IMPL(__imp__sub_831F7328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F733C"))) PPC_WEAK_FUNC(sub_831F733C);
PPC_FUNC_IMPL(__imp__sub_831F733C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7340"))) PPC_WEAK_FUNC(sub_831F7340);
PPC_FUNC_IMPL(__imp__sub_831F7340) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7348"))) PPC_WEAK_FUNC(sub_831F7348);
PPC_FUNC_IMPL(__imp__sub_831F7348) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7354"))) PPC_WEAK_FUNC(sub_831F7354);
PPC_FUNC_IMPL(__imp__sub_831F7354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7358"))) PPC_WEAK_FUNC(sub_831F7358);
PPC_FUNC_IMPL(__imp__sub_831F7358) {
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

__attribute__((alias("__imp__sub_831F7368"))) PPC_WEAK_FUNC(sub_831F7368);
PPC_FUNC_IMPL(__imp__sub_831F7368) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7370"))) PPC_WEAK_FUNC(sub_831F7370);
PPC_FUNC_IMPL(__imp__sub_831F7370) {
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

__attribute__((alias("__imp__sub_831F7384"))) PPC_WEAK_FUNC(sub_831F7384);
PPC_FUNC_IMPL(__imp__sub_831F7384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7388"))) PPC_WEAK_FUNC(sub_831F7388);
PPC_FUNC_IMPL(__imp__sub_831F7388) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7390"))) PPC_WEAK_FUNC(sub_831F7390);
PPC_FUNC_IMPL(__imp__sub_831F7390) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F739C"))) PPC_WEAK_FUNC(sub_831F739C);
PPC_FUNC_IMPL(__imp__sub_831F739C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F73A0"))) PPC_WEAK_FUNC(sub_831F73A0);
PPC_FUNC_IMPL(__imp__sub_831F73A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F73B0"))) PPC_WEAK_FUNC(sub_831F73B0);
PPC_FUNC_IMPL(__imp__sub_831F73B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F73B8"))) PPC_WEAK_FUNC(sub_831F73B8);
PPC_FUNC_IMPL(__imp__sub_831F73B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F73CC"))) PPC_WEAK_FUNC(sub_831F73CC);
PPC_FUNC_IMPL(__imp__sub_831F73CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F73D0"))) PPC_WEAK_FUNC(sub_831F73D0);
PPC_FUNC_IMPL(__imp__sub_831F73D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F73D8"))) PPC_WEAK_FUNC(sub_831F73D8);
PPC_FUNC_IMPL(__imp__sub_831F73D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F73E4"))) PPC_WEAK_FUNC(sub_831F73E4);
PPC_FUNC_IMPL(__imp__sub_831F73E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F73E8"))) PPC_WEAK_FUNC(sub_831F73E8);
PPC_FUNC_IMPL(__imp__sub_831F73E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 * 20;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F73F8"))) PPC_WEAK_FUNC(sub_831F73F8);
PPC_FUNC_IMPL(__imp__sub_831F73F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7400"))) PPC_WEAK_FUNC(sub_831F7400);
PPC_FUNC_IMPL(__imp__sub_831F7400) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7414"))) PPC_WEAK_FUNC(sub_831F7414);
PPC_FUNC_IMPL(__imp__sub_831F7414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7418"))) PPC_WEAK_FUNC(sub_831F7418);
PPC_FUNC_IMPL(__imp__sub_831F7418) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7420"))) PPC_WEAK_FUNC(sub_831F7420);
PPC_FUNC_IMPL(__imp__sub_831F7420) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7428"))) PPC_WEAK_FUNC(sub_831F7428);
PPC_FUNC_IMPL(__imp__sub_831F7428) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F743C"))) PPC_WEAK_FUNC(sub_831F743C);
PPC_FUNC_IMPL(__imp__sub_831F743C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7440"))) PPC_WEAK_FUNC(sub_831F7440);
PPC_FUNC_IMPL(__imp__sub_831F7440) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7448"))) PPC_WEAK_FUNC(sub_831F7448);
PPC_FUNC_IMPL(__imp__sub_831F7448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F745C"))) PPC_WEAK_FUNC(sub_831F745C);
PPC_FUNC_IMPL(__imp__sub_831F745C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7460"))) PPC_WEAK_FUNC(sub_831F7460);
PPC_FUNC_IMPL(__imp__sub_831F7460) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7468"))) PPC_WEAK_FUNC(sub_831F7468);
PPC_FUNC_IMPL(__imp__sub_831F7468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F747C"))) PPC_WEAK_FUNC(sub_831F747C);
PPC_FUNC_IMPL(__imp__sub_831F747C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7480"))) PPC_WEAK_FUNC(sub_831F7480);
PPC_FUNC_IMPL(__imp__sub_831F7480) {
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

__attribute__((alias("__imp__sub_831F7494"))) PPC_WEAK_FUNC(sub_831F7494);
PPC_FUNC_IMPL(__imp__sub_831F7494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7498"))) PPC_WEAK_FUNC(sub_831F7498);
PPC_FUNC_IMPL(__imp__sub_831F7498) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x83206be8
	sub_83206BE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F74A8"))) PPC_WEAK_FUNC(sub_831F74A8);
PPC_FUNC_IMPL(__imp__sub_831F74A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F74AC"))) PPC_WEAK_FUNC(sub_831F74AC);
PPC_FUNC_IMPL(__imp__sub_831F74AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F74B0"))) PPC_WEAK_FUNC(sub_831F74B0);
PPC_FUNC_IMPL(__imp__sub_831F74B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,276
	ctx.r10.s64 = ctx.r4.s64 * 276;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F74C0"))) PPC_WEAK_FUNC(sub_831F74C0);
PPC_FUNC_IMPL(__imp__sub_831F74C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F74C8"))) PPC_WEAK_FUNC(sub_831F74C8);
PPC_FUNC_IMPL(__imp__sub_831F74C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,276
	ctx.r11.s64 = ctx.r11.s64 * 276;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F74DC"))) PPC_WEAK_FUNC(sub_831F74DC);
PPC_FUNC_IMPL(__imp__sub_831F74DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F74E0"))) PPC_WEAK_FUNC(sub_831F74E0);
PPC_FUNC_IMPL(__imp__sub_831F74E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F74E8"))) PPC_WEAK_FUNC(sub_831F74E8);
PPC_FUNC_IMPL(__imp__sub_831F74E8) {
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

__attribute__((alias("__imp__sub_831F74FC"))) PPC_WEAK_FUNC(sub_831F74FC);
PPC_FUNC_IMPL(__imp__sub_831F74FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7500"))) PPC_WEAK_FUNC(sub_831F7500);
PPC_FUNC_IMPL(__imp__sub_831F7500) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x83206be8
	sub_83206BE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7510"))) PPC_WEAK_FUNC(sub_831F7510);
PPC_FUNC_IMPL(__imp__sub_831F7510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7514"))) PPC_WEAK_FUNC(sub_831F7514);
PPC_FUNC_IMPL(__imp__sub_831F7514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7518"))) PPC_WEAK_FUNC(sub_831F7518);
PPC_FUNC_IMPL(__imp__sub_831F7518) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7524"))) PPC_WEAK_FUNC(sub_831F7524);
PPC_FUNC_IMPL(__imp__sub_831F7524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7528"))) PPC_WEAK_FUNC(sub_831F7528);
PPC_FUNC_IMPL(__imp__sub_831F7528) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7530"))) PPC_WEAK_FUNC(sub_831F7530);
PPC_FUNC_IMPL(__imp__sub_831F7530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,452
	ctx.r11.s64 = ctx.r11.s64 * 452;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7544"))) PPC_WEAK_FUNC(sub_831F7544);
PPC_FUNC_IMPL(__imp__sub_831F7544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7548"))) PPC_WEAK_FUNC(sub_831F7548);
PPC_FUNC_IMPL(__imp__sub_831F7548) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7550"))) PPC_WEAK_FUNC(sub_831F7550);
PPC_FUNC_IMPL(__imp__sub_831F7550) {
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

__attribute__((alias("__imp__sub_831F7564"))) PPC_WEAK_FUNC(sub_831F7564);
PPC_FUNC_IMPL(__imp__sub_831F7564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7568"))) PPC_WEAK_FUNC(sub_831F7568);
PPC_FUNC_IMPL(__imp__sub_831F7568) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x83206be8
	sub_83206BE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7578"))) PPC_WEAK_FUNC(sub_831F7578);
PPC_FUNC_IMPL(__imp__sub_831F7578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F757C"))) PPC_WEAK_FUNC(sub_831F757C);
PPC_FUNC_IMPL(__imp__sub_831F757C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7580"))) PPC_WEAK_FUNC(sub_831F7580);
PPC_FUNC_IMPL(__imp__sub_831F7580) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F758C"))) PPC_WEAK_FUNC(sub_831F758C);
PPC_FUNC_IMPL(__imp__sub_831F758C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7590"))) PPC_WEAK_FUNC(sub_831F7590);
PPC_FUNC_IMPL(__imp__sub_831F7590) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7598"))) PPC_WEAK_FUNC(sub_831F7598);
PPC_FUNC_IMPL(__imp__sub_831F7598) {
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

__attribute__((alias("__imp__sub_831F75AC"))) PPC_WEAK_FUNC(sub_831F75AC);
PPC_FUNC_IMPL(__imp__sub_831F75AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F75B0"))) PPC_WEAK_FUNC(sub_831F75B0);
PPC_FUNC_IMPL(__imp__sub_831F75B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F75B8"))) PPC_WEAK_FUNC(sub_831F75B8);
PPC_FUNC_IMPL(__imp__sub_831F75B8) {
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

__attribute__((alias("__imp__sub_831F75CC"))) PPC_WEAK_FUNC(sub_831F75CC);
PPC_FUNC_IMPL(__imp__sub_831F75CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F75D0"))) PPC_WEAK_FUNC(sub_831F75D0);
PPC_FUNC_IMPL(__imp__sub_831F75D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x83206be8
	sub_83206BE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F75E0"))) PPC_WEAK_FUNC(sub_831F75E0);
PPC_FUNC_IMPL(__imp__sub_831F75E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F75E4"))) PPC_WEAK_FUNC(sub_831F75E4);
PPC_FUNC_IMPL(__imp__sub_831F75E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F75E8"))) PPC_WEAK_FUNC(sub_831F75E8);
PPC_FUNC_IMPL(__imp__sub_831F75E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F75F0"))) PPC_WEAK_FUNC(sub_831F75F0);
PPC_FUNC_IMPL(__imp__sub_831F75F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F75F8"))) PPC_WEAK_FUNC(sub_831F75F8);
PPC_FUNC_IMPL(__imp__sub_831F75F8) {
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

__attribute__((alias("__imp__sub_831F760C"))) PPC_WEAK_FUNC(sub_831F760C);
PPC_FUNC_IMPL(__imp__sub_831F760C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7610"))) PPC_WEAK_FUNC(sub_831F7610);
PPC_FUNC_IMPL(__imp__sub_831F7610) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x83206be8
	sub_83206BE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7620"))) PPC_WEAK_FUNC(sub_831F7620);
PPC_FUNC_IMPL(__imp__sub_831F7620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7624"))) PPC_WEAK_FUNC(sub_831F7624);
PPC_FUNC_IMPL(__imp__sub_831F7624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7628"))) PPC_WEAK_FUNC(sub_831F7628);
PPC_FUNC_IMPL(__imp__sub_831F7628) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7634"))) PPC_WEAK_FUNC(sub_831F7634);
PPC_FUNC_IMPL(__imp__sub_831F7634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7638"))) PPC_WEAK_FUNC(sub_831F7638);
PPC_FUNC_IMPL(__imp__sub_831F7638) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7640"))) PPC_WEAK_FUNC(sub_831F7640);
PPC_FUNC_IMPL(__imp__sub_831F7640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7654"))) PPC_WEAK_FUNC(sub_831F7654);
PPC_FUNC_IMPL(__imp__sub_831F7654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7658"))) PPC_WEAK_FUNC(sub_831F7658);
PPC_FUNC_IMPL(__imp__sub_831F7658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831F7660;
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
	// ble cr6,0x831f76dc
	if (!ctx.cr6.gt) goto loc_831F76DC;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831f7688
	if (!ctx.cr6.lt) goto loc_831F7688;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_831F7688:
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206bd8
	ctx.lr = 0x831F7694;
	sub_83206BD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831f76ac
	if (!ctx.cr0.eq) goto loc_831F76AC;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x831f76dc
	goto loc_831F76DC;
loc_831F76AC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831f76d8
	if (ctx.cr6.eq) goto loc_831F76D8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x831F76CC;
	sub_82CB1160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83206be8
	ctx.lr = 0x831F76D8;
	sub_83206BE8(ctx, base);
loc_831F76D8:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F76DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F76E4"))) PPC_WEAK_FUNC(sub_831F76E4);
PPC_FUNC_IMPL(__imp__sub_831F76E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F76E8"))) PPC_WEAK_FUNC(sub_831F76E8);
PPC_FUNC_IMPL(__imp__sub_831F76E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831F76F0;
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
	// ble cr6,0x831f776c
	if (!ctx.cr6.gt) goto loc_831F776C;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831f7718
	if (!ctx.cr6.lt) goto loc_831F7718;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_831F7718:
	// mulli r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 * 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206bd8
	ctx.lr = 0x831F7724;
	sub_83206BD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831f773c
	if (!ctx.cr0.eq) goto loc_831F773C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x831f776c
	goto loc_831F776C;
loc_831F773C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831f7768
	if (ctx.cr6.eq) goto loc_831F7768;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 * 24;
	// bl 0x82cb1160
	ctx.lr = 0x831F775C;
	sub_82CB1160(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206be8
	ctx.lr = 0x831F7768;
	sub_83206BE8(ctx, base);
loc_831F7768:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F776C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7774"))) PPC_WEAK_FUNC(sub_831F7774);
PPC_FUNC_IMPL(__imp__sub_831F7774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7778"))) PPC_WEAK_FUNC(sub_831F7778);
PPC_FUNC_IMPL(__imp__sub_831F7778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831F7780;
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
	// ble cr6,0x831f77fc
	if (!ctx.cr6.gt) goto loc_831F77FC;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831f77a8
	if (!ctx.cr6.lt) goto loc_831F77A8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_831F77A8:
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206bd8
	ctx.lr = 0x831F77B4;
	sub_83206BD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831f77cc
	if (!ctx.cr0.eq) goto loc_831F77CC;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x831f77fc
	goto loc_831F77FC;
loc_831F77CC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831f77f8
	if (ctx.cr6.eq) goto loc_831F77F8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82cb1160
	ctx.lr = 0x831F77EC;
	sub_82CB1160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83206be8
	ctx.lr = 0x831F77F8;
	sub_83206BE8(ctx, base);
loc_831F77F8:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F77FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7804"))) PPC_WEAK_FUNC(sub_831F7804);
PPC_FUNC_IMPL(__imp__sub_831F7804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7808"))) PPC_WEAK_FUNC(sub_831F7808);
PPC_FUNC_IMPL(__imp__sub_831F7808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831F7810;
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
	// ble cr6,0x831f788c
	if (!ctx.cr6.gt) goto loc_831F788C;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831f7838
	if (!ctx.cr6.lt) goto loc_831F7838;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_831F7838:
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206bd8
	ctx.lr = 0x831F7844;
	sub_83206BD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831f785c
	if (!ctx.cr0.eq) goto loc_831F785C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x831f788c
	goto loc_831F788C;
loc_831F785C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831f7888
	if (ctx.cr6.eq) goto loc_831F7888;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82cb1160
	ctx.lr = 0x831F787C;
	sub_82CB1160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83206be8
	ctx.lr = 0x831F7888;
	sub_83206BE8(ctx, base);
loc_831F7888:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F788C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7894"))) PPC_WEAK_FUNC(sub_831F7894);
PPC_FUNC_IMPL(__imp__sub_831F7894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7898"))) PPC_WEAK_FUNC(sub_831F7898);
PPC_FUNC_IMPL(__imp__sub_831F7898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831F78A0;
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
	// ble cr6,0x831f791c
	if (!ctx.cr6.gt) goto loc_831F791C;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831f78c8
	if (!ctx.cr6.lt) goto loc_831F78C8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_831F78C8:
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206bd8
	ctx.lr = 0x831F78D4;
	sub_83206BD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831f78ec
	if (!ctx.cr0.eq) goto loc_831F78EC;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x831f791c
	goto loc_831F791C;
loc_831F78EC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831f7918
	if (ctx.cr6.eq) goto loc_831F7918;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82cb1160
	ctx.lr = 0x831F790C;
	sub_82CB1160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83206be8
	ctx.lr = 0x831F7918;
	sub_83206BE8(ctx, base);
loc_831F7918:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F791C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7924"))) PPC_WEAK_FUNC(sub_831F7924);
PPC_FUNC_IMPL(__imp__sub_831F7924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7928"))) PPC_WEAK_FUNC(sub_831F7928);
PPC_FUNC_IMPL(__imp__sub_831F7928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831F7930;
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
	// ble cr6,0x831f79ac
	if (!ctx.cr6.gt) goto loc_831F79AC;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831f7958
	if (!ctx.cr6.lt) goto loc_831F7958;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_831F7958:
	// mulli r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 * 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206bd8
	ctx.lr = 0x831F7964;
	sub_83206BD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831f797c
	if (!ctx.cr0.eq) goto loc_831F797C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x831f79ac
	goto loc_831F79AC;
loc_831F797C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831f79a8
	if (ctx.cr6.eq) goto loc_831F79A8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// bl 0x82cb1160
	ctx.lr = 0x831F799C;
	sub_82CB1160(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206be8
	ctx.lr = 0x831F79A8;
	sub_83206BE8(ctx, base);
loc_831F79A8:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F79AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F79B4"))) PPC_WEAK_FUNC(sub_831F79B4);
PPC_FUNC_IMPL(__imp__sub_831F79B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F79B8"))) PPC_WEAK_FUNC(sub_831F79B8);
PPC_FUNC_IMPL(__imp__sub_831F79B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831F79C0;
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
	// ble cr6,0x831f7a3c
	if (!ctx.cr6.gt) goto loc_831F7A3C;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831f79e8
	if (!ctx.cr6.lt) goto loc_831F79E8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_831F79E8:
	// mulli r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 * 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206bd8
	ctx.lr = 0x831F79F4;
	sub_83206BD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831f7a0c
	if (!ctx.cr0.eq) goto loc_831F7A0C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x831f7a3c
	goto loc_831F7A3C;
loc_831F7A0C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831f7a38
	if (ctx.cr6.eq) goto loc_831F7A38;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 * 20;
	// bl 0x82cb1160
	ctx.lr = 0x831F7A2C;
	sub_82CB1160(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206be8
	ctx.lr = 0x831F7A38;
	sub_83206BE8(ctx, base);
loc_831F7A38:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F7A3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7A44"))) PPC_WEAK_FUNC(sub_831F7A44);
PPC_FUNC_IMPL(__imp__sub_831F7A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7A48"))) PPC_WEAK_FUNC(sub_831F7A48);
PPC_FUNC_IMPL(__imp__sub_831F7A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831F7A50;
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
	// ble cr6,0x831f7acc
	if (!ctx.cr6.gt) goto loc_831F7ACC;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831f7a78
	if (!ctx.cr6.lt) goto loc_831F7A78;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_831F7A78:
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206bd8
	ctx.lr = 0x831F7A84;
	sub_83206BD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831f7a9c
	if (!ctx.cr0.eq) goto loc_831F7A9C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x831f7acc
	goto loc_831F7ACC;
loc_831F7A9C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831f7ac8
	if (ctx.cr6.eq) goto loc_831F7AC8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82cb1160
	ctx.lr = 0x831F7ABC;
	sub_82CB1160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83206be8
	ctx.lr = 0x831F7AC8;
	sub_83206BE8(ctx, base);
loc_831F7AC8:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F7ACC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7AD4"))) PPC_WEAK_FUNC(sub_831F7AD4);
PPC_FUNC_IMPL(__imp__sub_831F7AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7AD8"))) PPC_WEAK_FUNC(sub_831F7AD8);
PPC_FUNC_IMPL(__imp__sub_831F7AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831F7AE0;
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
	// ble cr6,0x831f7b5c
	if (!ctx.cr6.gt) goto loc_831F7B5C;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831f7b08
	if (!ctx.cr6.lt) goto loc_831F7B08;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_831F7B08:
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206bd8
	ctx.lr = 0x831F7B14;
	sub_83206BD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831f7b2c
	if (!ctx.cr0.eq) goto loc_831F7B2C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x831f7b5c
	goto loc_831F7B5C;
loc_831F7B2C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831f7b58
	if (ctx.cr6.eq) goto loc_831F7B58;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x831F7B4C;
	sub_82CB1160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83206be8
	ctx.lr = 0x831F7B58;
	sub_83206BE8(ctx, base);
loc_831F7B58:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F7B5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7B64"))) PPC_WEAK_FUNC(sub_831F7B64);
PPC_FUNC_IMPL(__imp__sub_831F7B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7B68"))) PPC_WEAK_FUNC(sub_831F7B68);
PPC_FUNC_IMPL(__imp__sub_831F7B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831F7B70;
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
	// ble cr6,0x831f7bec
	if (!ctx.cr6.gt) goto loc_831F7BEC;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831f7b98
	if (!ctx.cr6.lt) goto loc_831F7B98;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_831F7B98:
	// mulli r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 * 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206bd8
	ctx.lr = 0x831F7BA4;
	sub_83206BD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831f7bbc
	if (!ctx.cr0.eq) goto loc_831F7BBC;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x831f7bec
	goto loc_831F7BEC;
loc_831F7BBC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831f7be8
	if (ctx.cr6.eq) goto loc_831F7BE8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 * 20;
	// bl 0x82cb1160
	ctx.lr = 0x831F7BDC;
	sub_82CB1160(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206be8
	ctx.lr = 0x831F7BE8;
	sub_83206BE8(ctx, base);
loc_831F7BE8:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F7BEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7BF4"))) PPC_WEAK_FUNC(sub_831F7BF4);
PPC_FUNC_IMPL(__imp__sub_831F7BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7BF8"))) PPC_WEAK_FUNC(sub_831F7BF8);
PPC_FUNC_IMPL(__imp__sub_831F7BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831F7C00;
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
	// ble cr6,0x831f7c7c
	if (!ctx.cr6.gt) goto loc_831F7C7C;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831f7c28
	if (!ctx.cr6.lt) goto loc_831F7C28;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_831F7C28:
	// mulli r4,r30,276
	ctx.r4.s64 = ctx.r30.s64 * 276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206bd8
	ctx.lr = 0x831F7C34;
	sub_83206BD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831f7c4c
	if (!ctx.cr0.eq) goto loc_831F7C4C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x831f7c7c
	goto loc_831F7C7C;
loc_831F7C4C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831f7c78
	if (ctx.cr6.eq) goto loc_831F7C78;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,276
	ctx.r5.s64 = ctx.r11.s64 * 276;
	// bl 0x82cb1160
	ctx.lr = 0x831F7C6C;
	sub_82CB1160(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206be8
	ctx.lr = 0x831F7C78;
	sub_83206BE8(ctx, base);
loc_831F7C78:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F7C7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7C84"))) PPC_WEAK_FUNC(sub_831F7C84);
PPC_FUNC_IMPL(__imp__sub_831F7C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7C88"))) PPC_WEAK_FUNC(sub_831F7C88);
PPC_FUNC_IMPL(__imp__sub_831F7C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831F7C90;
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
	// ble cr6,0x831f7d0c
	if (!ctx.cr6.gt) goto loc_831F7D0C;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831f7cb8
	if (!ctx.cr6.lt) goto loc_831F7CB8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_831F7CB8:
	// mulli r4,r30,452
	ctx.r4.s64 = ctx.r30.s64 * 452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206bd8
	ctx.lr = 0x831F7CC4;
	sub_83206BD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831f7cdc
	if (!ctx.cr0.eq) goto loc_831F7CDC;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x831f7d0c
	goto loc_831F7D0C;
loc_831F7CDC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831f7d08
	if (ctx.cr6.eq) goto loc_831F7D08;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,452
	ctx.r5.s64 = ctx.r11.s64 * 452;
	// bl 0x82cb1160
	ctx.lr = 0x831F7CFC;
	sub_82CB1160(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206be8
	ctx.lr = 0x831F7D08;
	sub_83206BE8(ctx, base);
loc_831F7D08:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F7D0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7D14"))) PPC_WEAK_FUNC(sub_831F7D14);
PPC_FUNC_IMPL(__imp__sub_831F7D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7D18"))) PPC_WEAK_FUNC(sub_831F7D18);
PPC_FUNC_IMPL(__imp__sub_831F7D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831F7D20;
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
	// ble cr6,0x831f7d9c
	if (!ctx.cr6.gt) goto loc_831F7D9C;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831f7d48
	if (!ctx.cr6.lt) goto loc_831F7D48;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_831F7D48:
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206bd8
	ctx.lr = 0x831F7D54;
	sub_83206BD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831f7d6c
	if (!ctx.cr0.eq) goto loc_831F7D6C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x831f7d9c
	goto loc_831F7D9C;
loc_831F7D6C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831f7d98
	if (ctx.cr6.eq) goto loc_831F7D98;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82cb1160
	ctx.lr = 0x831F7D8C;
	sub_82CB1160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83206be8
	ctx.lr = 0x831F7D98;
	sub_83206BE8(ctx, base);
loc_831F7D98:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F7D9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7DA4"))) PPC_WEAK_FUNC(sub_831F7DA4);
PPC_FUNC_IMPL(__imp__sub_831F7DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7DA8"))) PPC_WEAK_FUNC(sub_831F7DA8);
PPC_FUNC_IMPL(__imp__sub_831F7DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831F7DB0;
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
	// ble cr6,0x831f7e28
	if (!ctx.cr6.gt) goto loc_831F7E28;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831f7dd8
	if (!ctx.cr6.lt) goto loc_831F7DD8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_831F7DD8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206bd8
	ctx.lr = 0x831F7DE4;
	sub_83206BD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831f7dfc
	if (!ctx.cr0.eq) goto loc_831F7DFC;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x831f7e28
	goto loc_831F7E28;
loc_831F7DFC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831f7e24
	if (ctx.cr6.eq) goto loc_831F7E24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82cb1160
	ctx.lr = 0x831F7E18;
	sub_82CB1160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83206be8
	ctx.lr = 0x831F7E24;
	sub_83206BE8(ctx, base);
loc_831F7E24:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F7E28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7E30"))) PPC_WEAK_FUNC(sub_831F7E30);
PPC_FUNC_IMPL(__imp__sub_831F7E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831F7E38;
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
	// ble cr6,0x831f7eb4
	if (!ctx.cr6.gt) goto loc_831F7EB4;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831f7e60
	if (!ctx.cr6.lt) goto loc_831F7E60;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_831F7E60:
	// mulli r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 * 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206bd8
	ctx.lr = 0x831F7E6C;
	sub_83206BD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831f7e84
	if (!ctx.cr0.eq) goto loc_831F7E84;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x831f7eb4
	goto loc_831F7EB4;
loc_831F7E84:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831f7eb0
	if (ctx.cr6.eq) goto loc_831F7EB0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,40
	ctx.r5.s64 = ctx.r11.s64 * 40;
	// bl 0x82cb1160
	ctx.lr = 0x831F7EA4;
	sub_82CB1160(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206be8
	ctx.lr = 0x831F7EB0;
	sub_83206BE8(ctx, base);
loc_831F7EB0:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F7EB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7EBC"))) PPC_WEAK_FUNC(sub_831F7EBC);
PPC_FUNC_IMPL(__imp__sub_831F7EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7EC0"))) PPC_WEAK_FUNC(sub_831F7EC0);
PPC_FUNC_IMPL(__imp__sub_831F7EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,25735
	ctx.r4.s64 = 1686568960;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7EC8"))) PPC_WEAK_FUNC(sub_831F7EC8);
PPC_FUNC_IMPL(__imp__sub_831F7EC8) {
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
	// bl 0x831f69e0
	ctx.lr = 0x831F7EE8;
	sub_831F69E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-22264
	ctx.r4.s64 = ctx.r11.s64 + -22264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F7EFC;
	sub_831F6908(ctx, base);
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

__attribute__((alias("__imp__sub_831F7F14"))) PPC_WEAK_FUNC(sub_831F7F14);
PPC_FUNC_IMPL(__imp__sub_831F7F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7F18"))) PPC_WEAK_FUNC(sub_831F7F18);
PPC_FUNC_IMPL(__imp__sub_831F7F18) {
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
	// addi r4,r11,-22260
	ctx.r4.s64 = ctx.r11.s64 + -22260;
	// bl 0x831f6908
	ctx.lr = 0x831F7F38;
	sub_831F6908(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12412
	ctx.r4.s64 = ctx.r11.s64 + 12412;
	// bl 0x831f6908
	ctx.lr = 0x831F7F48;
	sub_831F6908(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831F7F64"))) PPC_WEAK_FUNC(sub_831F7F64);
PPC_FUNC_IMPL(__imp__sub_831F7F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7F68"))) PPC_WEAK_FUNC(sub_831F7F68);
PPC_FUNC_IMPL(__imp__sub_831F7F68) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,21496
	ctx.r4.s64 = ctx.r11.s64 + 21496;
	// bl 0x831f6908
	ctx.lr = 0x831F7F88;
	sub_831F6908(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12412
	ctx.r4.s64 = ctx.r11.s64 + 12412;
	// bl 0x831f6908
	ctx.lr = 0x831F7F98;
	sub_831F6908(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831F7FC0"))) PPC_WEAK_FUNC(sub_831F7FC0);
PPC_FUNC_IMPL(__imp__sub_831F7FC0) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r5,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r5.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
loc_831F8000:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x831f8000
	if (!ctx.cr6.eq) goto loc_831F8000;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82299698
	ctx.lr = 0x831F8028;
	sub_82299698(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831f8044
	if (!ctx.cr0.eq) goto loc_831F8044;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x831f805c
	goto loc_831F805C;
loc_831F8044:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x831f8044
	if (!ctx.cr0.eq) goto loc_831F8044;
loc_831F805C:
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

__attribute__((alias("__imp__sub_831F8074"))) PPC_WEAK_FUNC(sub_831F8074);
PPC_FUNC_IMPL(__imp__sub_831F8074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F8078"))) PPC_WEAK_FUNC(sub_831F8078);
PPC_FUNC_IMPL(__imp__sub_831F8078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831F8080;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831f80e8
	if (ctx.cr6.lt) goto loc_831F80E8;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82299698
	ctx.lr = 0x831F80A8;
	sub_82299698(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r3,388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 388, ctx.r3.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x831f80d0
	if (!ctx.cr6.eq) goto loc_831F80D0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x831f80e8
	goto loc_831F80E8;
loc_831F80D0:
	// stw r30,392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 392, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r3,388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// bl 0x82cb1160
	ctx.lr = 0x831F80E8;
	sub_82CB1160(ctx, base);
loc_831F80E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F80F0"))) PPC_WEAK_FUNC(sub_831F80F0);
PPC_FUNC_IMPL(__imp__sub_831F80F0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,25735
	ctx.r4.s64 = 1686568960;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F80F8"))) PPC_WEAK_FUNC(sub_831F80F8);
PPC_FUNC_IMPL(__imp__sub_831F80F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x831F8100;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F8114;
	sub_831F69E0(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r20,r10,-22240
	ctx.r20.s64 = ctx.r10.s64 + -22240;
	// addi r21,r11,-22264
	ctx.r21.s64 = ctx.r11.s64 + -22264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8134;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F813C;
	sub_831F7F68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// mulli r11,r11,276
	ctx.r11.s64 = ctx.r11.s64 * 276;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831f8254
	if (!ctx.cr6.lt) goto loc_831F8254;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r22,r5,21496
	ctx.r22.s64 = ctx.r5.s64 + 21496;
	// addi r27,r6,-22396
	ctx.r27.s64 = ctx.r6.s64 + -22396;
	// addi r26,r7,-22420
	ctx.r26.s64 = ctx.r7.s64 + -22420;
	// addi r25,r8,-22248
	ctx.r25.s64 = ctx.r8.s64 + -22248;
	// addi r24,r9,25000
	ctx.r24.s64 = ctx.r9.s64 + 25000;
	// addi r23,r10,-27436
	ctx.r23.s64 = ctx.r10.s64 + -27436;
	// addi r28,r11,-22256
	ctx.r28.s64 = ctx.r11.s64 + -22256;
loc_831F8194:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F819C;
	sub_831F69E0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F81AC;
	sub_831F6908(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,260(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F81C0;
	sub_831F6908(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F81D0;
	sub_831F6C48(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r7,268(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,264(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// bl 0x831f6908
	ctx.lr = 0x831F81E8;
	sub_831F6908(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831f8234
	if (ctx.cr6.eq) goto loc_831F8234;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8200;
	sub_831F6908(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831F8224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6ab0
	ctx.lr = 0x831F8230;
	sub_831F6AB0(ctx, base);
	// b 0x831f8238
	goto loc_831F8238;
loc_831F8234:
	// bl 0x831f7f18
	ctx.lr = 0x831F8238;
	sub_831F7F18(ctx, base);
loc_831F8238:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,276
	ctx.r30.s64 = ctx.r30.s64 + 276;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r11,276
	ctx.r11.s64 = ctx.r11.s64 * 276;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831f8194
	if (ctx.cr6.lt) goto loc_831F8194;
loc_831F8254:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F8260;
	sub_831F6A40(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F8268"))) PPC_WEAK_FUNC(sub_831F8268);
PPC_FUNC_IMPL(__imp__sub_831F8268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x831F8270;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F8288;
	sub_831F69E0(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r19,r10,-22192
	ctx.r19.s64 = ctx.r10.s64 + -22192;
	// addi r21,r11,-22264
	ctx.r21.s64 = ctx.r11.s64 + -22264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F82A8;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F82B0;
	sub_831F7F68(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831f83a4
	if (!ctx.cr6.lt) goto loc_831F83A4;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r5,-22420
	ctx.r29.s64 = ctx.r5.s64 + -22420;
	// addi r27,r6,-22208
	ctx.r27.s64 = ctx.r6.s64 + -22208;
	// addi r26,r7,-22216
	ctx.r26.s64 = ctx.r7.s64 + -22216;
	// addi r25,r8,5720
	ctx.r25.s64 = ctx.r8.s64 + 5720;
	// addi r24,r9,-22256
	ctx.r24.s64 = ctx.r9.s64 + -22256;
	// addi r23,r10,-22220
	ctx.r23.s64 = ctx.r10.s64 + -22220;
	// addi r22,r11,-22232
	ctx.r22.s64 = ctx.r11.s64 + -22232;
loc_831F8300:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F8308;
	sub_831F69E0(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8318;
	sub_831F6908(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831f6b98
	ctx.lr = 0x831F8330;
	sub_831F6B98(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8344;
	sub_831F6908(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8358;
	sub_831F6908(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F836C;
	sub_831F6908(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8380;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f18
	ctx.lr = 0x831F8388;
	sub_831F7F18(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831f8300
	if (ctx.cr6.lt) goto loc_831F8300;
loc_831F83A4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F83B0;
	sub_831F6A40(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F83B8"))) PPC_WEAK_FUNC(sub_831F83B8);
PPC_FUNC_IMPL(__imp__sub_831F83B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x831F83C0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F83D8;
	sub_831F69E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r14,r11,-22112
	ctx.r14.s64 = ctx.r11.s64 + -22112;
	// addi r16,r10,-22264
	ctx.r16.s64 = ctx.r10.s64 + -22264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F83F8;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F8400;
	sub_831F7F68(ctx, base);
	// lwz r10,4(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x831f8580
	if (!ctx.cr6.lt) goto loc_831F8580;
	// lis r29,-32247
	ctx.r29.s64 = -2113339392;
	// lis r30,-32247
	ctx.r30.s64 = -2113339392;
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r21,r29,-22220
	ctx.r21.s64 = ctx.r29.s64 + -22220;
	// addi r20,r30,-22116
	ctx.r20.s64 = ctx.r30.s64 + -22116;
	// addi r28,r28,-22420
	ctx.r28.s64 = ctx.r28.s64 + -22420;
	// addi r30,r3,-22120
	ctx.r30.s64 = ctx.r3.s64 + -22120;
	// addi r29,r4,-22128
	ctx.r29.s64 = ctx.r4.s64 + -22128;
	// addi r26,r5,-22144
	ctx.r26.s64 = ctx.r5.s64 + -22144;
	// addi r25,r6,-22152
	ctx.r25.s64 = ctx.r6.s64 + -22152;
	// addi r19,r7,-12392
	ctx.r19.s64 = ctx.r7.s64 + -12392;
	// addi r18,r8,-12384
	ctx.r18.s64 = ctx.r8.s64 + -12384;
	// addi r24,r9,-22164
	ctx.r24.s64 = ctx.r9.s64 + -22164;
	// addi r23,r10,-22172
	ctx.r23.s64 = ctx.r10.s64 + -22172;
	// addi r22,r11,-22180
	ctx.r22.s64 = ctx.r11.s64 + -22180;
loc_831F847C:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r11,r11,0,16,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE00;
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// beq cr6,0x831f8564
	if (ctx.cr6.eq) goto loc_831F8564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F8494;
	sub_831F69E0(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F84A4;
	sub_831F6908(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F84B8;
	sub_831F6908(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F84CC;
	sub_831F6908(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831f84e0
	if (!ctx.cr0.eq) goto loc_831F84E0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_831F84E0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F84EC;
	sub_831F6C48(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r5,r10,23,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// lwzx r7,r9,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// bl 0x82cb61f0
	ctx.lr = 0x831F8510;
	sub_82CB61F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F8520;
	sub_831F6C48(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831f8534
	if (!ctx.cr0.eq) goto loc_831F8534;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_831F8534:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F8540;
	sub_831F6C48(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r11,16,19,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FFF;
	// rlwinm r6,r11,3,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// bl 0x831f6b98
	ctx.lr = 0x831F855C;
	sub_831F6B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f18
	ctx.lr = 0x831F8564;
	sub_831F7F18(ctx, base);
loc_831F8564:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831f847c
	if (ctx.cr6.lt) goto loc_831F847C;
loc_831F8580:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F858C;
	sub_831F6A40(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F8594"))) PPC_WEAK_FUNC(sub_831F8594);
PPC_FUNC_IMPL(__imp__sub_831F8594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F8598"))) PPC_WEAK_FUNC(sub_831F8598);
PPC_FUNC_IMPL(__imp__sub_831F8598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x831F85A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F85B4;
	sub_831F69E0(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r23,r10,-22080
	ctx.r23.s64 = ctx.r10.s64 + -22080;
	// addi r27,r11,-22264
	ctx.r27.s64 = ctx.r11.s64 + -22264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F85D4;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F85DC;
	sub_831F7F68(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x831f8690
	if (!ctx.cr6.lt) goto loc_831F8690;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r28,r8,-22420
	ctx.r28.s64 = ctx.r8.s64 + -22420;
	// addi r26,r9,-22092
	ctx.r26.s64 = ctx.r9.s64 + -22092;
	// addi r25,r10,-27436
	ctx.r25.s64 = ctx.r10.s64 + -27436;
	// addi r24,r11,-22216
	ctx.r24.s64 = ctx.r11.s64 + -22216;
loc_831F8618:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831f8674
	if (ctx.cr0.eq) goto loc_831F8674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F862C;
	sub_831F69E0(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F863C;
	sub_831F6908(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// bl 0x831f6908
	ctx.lr = 0x831F8658;
	sub_831F6908(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F866C;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f18
	ctx.lr = 0x831F8674;
	sub_831F7F18(ctx, base);
loc_831F8674:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831f8618
	if (ctx.cr6.lt) goto loc_831F8618;
loc_831F8690:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F869C;
	sub_831F6A40(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F86A4"))) PPC_WEAK_FUNC(sub_831F86A4);
PPC_FUNC_IMPL(__imp__sub_831F86A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F86A8"))) PPC_WEAK_FUNC(sub_831F86A8);
PPC_FUNC_IMPL(__imp__sub_831F86A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x831F86B0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F86C8;
	sub_831F69E0(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r18,r10,-22044
	ctx.r18.s64 = ctx.r10.s64 + -22044;
	// addi r19,r11,-22264
	ctx.r19.s64 = ctx.r11.s64 + -22264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F86E8;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F86F0;
	sub_831F7F68(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831f87e8
	if (!ctx.cr6.lt) goto loc_831F87E8;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r4,-22420
	ctx.r29.s64 = ctx.r4.s64 + -22420;
	// addi r27,r5,-22220
	ctx.r27.s64 = ctx.r5.s64 + -22220;
	// addi r26,r6,-22052
	ctx.r26.s64 = ctx.r6.s64 + -22052;
	// addi r25,r7,-22060
	ctx.r25.s64 = ctx.r7.s64 + -22060;
	// addi r22,r8,-12392
	ctx.r22.s64 = ctx.r8.s64 + -12392;
	// addi r21,r9,-12384
	ctx.r21.s64 = ctx.r9.s64 + -12384;
	// addi r24,r10,-27436
	ctx.r24.s64 = ctx.r10.s64 + -27436;
	// addi r23,r11,-22072
	ctx.r23.s64 = ctx.r11.s64 + -22072;
loc_831F8748:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F8750;
	sub_831F69E0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8760;
	sub_831F6908(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8774;
	sub_831F6908(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831f8788
	if (!ctx.cr0.eq) goto loc_831F8788;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_831F8788:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F8794;
	sub_831F6C48(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F87A8;
	sub_831F6908(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r11,13,19,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1FFF;
	// rlwinm r6,r11,14,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// bl 0x831f6b98
	ctx.lr = 0x831F87C4;
	sub_831F6B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f18
	ctx.lr = 0x831F87CC;
	sub_831F7F18(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831f8748
	if (ctx.cr6.lt) goto loc_831F8748;
loc_831F87E8:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F87F4;
	sub_831F6A40(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F87FC"))) PPC_WEAK_FUNC(sub_831F87FC);
PPC_FUNC_IMPL(__imp__sub_831F87FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F8800"))) PPC_WEAK_FUNC(sub_831F8800);
PPC_FUNC_IMPL(__imp__sub_831F8800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x831F8808;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F8820;
	sub_831F69E0(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r15,r10,-21960
	ctx.r15.s64 = ctx.r10.s64 + -21960;
	// addi r17,r11,-22264
	ctx.r17.s64 = ctx.r11.s64 + -22264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8840;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F8848;
	sub_831F7F68(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r30,0(r20)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831f89b8
	if (!ctx.cr6.lt) goto loc_831F89B8;
	// lis r29,-32247
	ctx.r29.s64 = -2113339392;
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// lis r3,-32223
	ctx.r3.s64 = -2111766528;
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r21,r29,-21964
	ctx.r21.s64 = ctx.r29.s64 + -21964;
	// addi r28,r28,-22420
	ctx.r28.s64 = ctx.r28.s64 + -22420;
	// addi r19,r3,-12392
	ctx.r19.s64 = ctx.r3.s64 + -12392;
	// addi r18,r4,-12384
	ctx.r18.s64 = ctx.r4.s64 + -12384;
	// addi r27,r5,-21976
	ctx.r27.s64 = ctx.r5.s64 + -21976;
	// addi r26,r6,-21984
	ctx.r26.s64 = ctx.r6.s64 + -21984;
	// addi r25,r7,-21996
	ctx.r25.s64 = ctx.r7.s64 + -21996;
	// addi r29,r8,-22004
	ctx.r29.s64 = ctx.r8.s64 + -22004;
	// addi r24,r9,-22016
	ctx.r24.s64 = ctx.r9.s64 + -22016;
	// addi r23,r10,-22024
	ctx.r23.s64 = ctx.r10.s64 + -22024;
	// addi r22,r11,-9296
	ctx.r22.s64 = ctx.r11.s64 + -9296;
loc_831F88B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F88C0;
	sub_831F69E0(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F88D0;
	sub_831F6908(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r6,r11,r16
	ctx.r6.u64 = ctx.r11.u64 + ctx.r16.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F88EC;
	sub_831F6908(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,18,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// bl 0x831f6908
	ctx.lr = 0x831F8904;
	sub_831F6908(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,30,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7;
	// rlwinm r9,r11,27,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// rlwinm r8,r11,24,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// rlwinm r11,r11,21,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7;
	// lbzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// lbzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// lbzx r8,r8,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x831f6c48
	ctx.lr = 0x831F8950;
	sub_831F6C48(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r11,9,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// bl 0x82cb61f0
	ctx.lr = 0x831F8964;
	sub_82CB61F0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F8974;
	sub_831F6C48(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831f8988
	if (!ctx.cr0.eq) goto loc_831F8988;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_831F8988:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F8994;
	sub_831F6C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f18
	ctx.lr = 0x831F899C;
	sub_831F7F18(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831f88b8
	if (ctx.cr6.lt) goto loc_831F88B8;
loc_831F89B8:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F89C4;
	sub_831F6A40(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F89CC"))) PPC_WEAK_FUNC(sub_831F89CC);
PPC_FUNC_IMPL(__imp__sub_831F89CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F89D0"))) PPC_WEAK_FUNC(sub_831F89D0);
PPC_FUNC_IMPL(__imp__sub_831F89D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x831F89D8;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F89EC;
	sub_831F69E0(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r15,r10,-21912
	ctx.r15.s64 = ctx.r10.s64 + -21912;
	// addi r16,r11,-22264
	ctx.r16.s64 = ctx.r11.s64 + -22264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8A0C;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F8A14;
	sub_831F7F68(ctx, base);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x831f8b64
	if (!ctx.cr6.lt) goto loc_831F8B64;
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// lis r29,-32247
	ctx.r29.s64 = -2113339392;
	// lis r30,-32247
	ctx.r30.s64 = -2113339392;
	// lis r3,-32223
	ctx.r3.s64 = -2111766528;
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// lis r5,-32223
	ctx.r5.s64 = -2111766528;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r28,r28,-22420
	ctx.r28.s64 = ctx.r28.s64 + -22420;
	// addi r29,r29,-21920
	ctx.r29.s64 = ctx.r29.s64 + -21920;
	// addi r30,r30,-21932
	ctx.r30.s64 = ctx.r30.s64 + -21932;
	// addi r20,r3,24368
	ctx.r20.s64 = ctx.r3.s64 + 24368;
	// addi r19,r4,24372
	ctx.r19.s64 = ctx.r4.s64 + 24372;
	// addi r18,r5,24376
	ctx.r18.s64 = ctx.r5.s64 + 24376;
	// addi r22,r6,21574
	ctx.r22.s64 = ctx.r6.s64 + 21574;
	// addi r17,r7,-9992
	ctx.r17.s64 = ctx.r7.s64 + -9992;
	// addi r26,r8,-21976
	ctx.r26.s64 = ctx.r8.s64 + -21976;
	// addi r25,r9,-21984
	ctx.r25.s64 = ctx.r9.s64 + -21984;
	// addi r24,r10,-22016
	ctx.r24.s64 = ctx.r10.s64 + -22016;
	// addi r23,r11,-21948
	ctx.r23.s64 = ctx.r11.s64 + -21948;
loc_831F8A90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F8A98;
	sub_831F69E0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8AA8;
	sub_831F6908(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,12,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// bl 0x831f6908
	ctx.lr = 0x831F8AC0;
	sub_831F6908(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82cb61f0
	ctx.lr = 0x831F8AD0;
	sub_82CB61F0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F8AE0;
	sub_831F6C48(ctx, base);
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831f8af4
	if (!ctx.cr0.eq) goto loc_831F8AF4;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
loc_831F8AF4:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// bne 0x831f8b04
	if (!ctx.cr0.eq) goto loc_831F8B04;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_831F8B04:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// bne 0x831f8b14
	if (!ctx.cr0.eq) goto loc_831F8B14;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
loc_831F8B14:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bne 0x831f8b24
	if (!ctx.cr0.eq) goto loc_831F8B24;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_831F8B24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb61f0
	ctx.lr = 0x831F8B30;
	sub_82CB61F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F8B40;
	sub_831F6C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f18
	ctx.lr = 0x831F8B48;
	sub_831F7F18(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831f8a90
	if (ctx.cr6.lt) goto loc_831F8A90;
loc_831F8B64:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F8B70;
	sub_831F6A40(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F8B78"))) PPC_WEAK_FUNC(sub_831F8B78);
PPC_FUNC_IMPL(__imp__sub_831F8B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x831F8B80;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F8B9C;
	sub_831F69E0(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r19,r10,-21800
	ctx.r19.s64 = ctx.r10.s64 + -21800;
	// addi r27,r11,-22264
	ctx.r27.s64 = ctx.r11.s64 + -22264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8BBC;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F8BC4;
	sub_831F7F68(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r18,r11,-22016
	ctx.r18.s64 = ctx.r11.s64 + -22016;
	// addi r26,r10,-22420
	ctx.r26.s64 = ctx.r10.s64 + -22420;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831f8cdc
	if (!ctx.cr6.lt) goto loc_831F8CDC;
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
	// addi r29,r6,-22432
	ctx.r29.s64 = ctx.r6.s64 + -22432;
	// addi r25,r7,-21808
	ctx.r25.s64 = ctx.r7.s64 + -21808;
	// addi r24,r8,-21816
	ctx.r24.s64 = ctx.r8.s64 + -21816;
	// addi r23,r9,-21824
	ctx.r23.s64 = ctx.r9.s64 + -21824;
	// addi r22,r10,-21832
	ctx.r22.s64 = ctx.r10.s64 + -21832;
	// addi r21,r11,-21840
	ctx.r21.s64 = ctx.r11.s64 + -21840;
loc_831F8C1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F8C24;
	sub_831F69E0(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8C34;
	sub_831F6908(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8C48;
	sub_831F6908(ctx, base);
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8C64;
	sub_831F6908(ctx, base);
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8C80;
	sub_831F6908(ctx, base);
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8C9C;
	sub_831F6908(ctx, base);
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8CB8;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f18
	ctx.lr = 0x831F8CC0;
	sub_831F7F18(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831f8c1c
	if (ctx.cr6.lt) goto loc_831F8C1C;
loc_831F8CDC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F8CE8;
	sub_831F6A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F8CF0;
	sub_831F69E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r23,r11,-21852
	ctx.r23.s64 = ctx.r11.s64 + -21852;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8D08;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F8D10;
	sub_831F7F68(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,0(r20)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831f8dd8
	if (!ctx.cr6.lt) goto loc_831F8DD8;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r8,-21856
	ctx.r29.s64 = ctx.r8.s64 + -21856;
	// addi r28,r9,-21864
	ctx.r28.s64 = ctx.r9.s64 + -21864;
	// addi r25,r10,-18728
	ctx.r25.s64 = ctx.r10.s64 + -18728;
	// addi r24,r11,-21868
	ctx.r24.s64 = ctx.r11.s64 + -21868;
loc_831F8D48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F8D50;
	sub_831F69E0(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8D60;
	sub_831F6908(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8D74;
	sub_831F6908(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8D88;
	sub_831F6908(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,2(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8D9C;
	sub_831F6908(ctx, base);
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// bl 0x831f6908
	ctx.lr = 0x831F8DB4;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f18
	ctx.lr = 0x831F8DBC;
	sub_831F7F18(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831f8d48
	if (ctx.cr6.lt) goto loc_831F8D48;
loc_831F8DD8:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F8DE4;
	sub_831F6A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F8DEC;
	sub_831F69E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r25,r11,-21884
	ctx.r25.s64 = ctx.r11.s64 + -21884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8E04;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F8E0C;
	sub_831F7F68(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,0(r17)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831f8e98
	if (!ctx.cr6.lt) goto loc_831F8E98;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r10,-14088
	ctx.r29.s64 = ctx.r10.s64 + -14088;
	// addi r28,r11,-21892
	ctx.r28.s64 = ctx.r11.s64 + -21892;
loc_831F8E34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F8E3C;
	sub_831F69E0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8E4C;
	sub_831F6908(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8E60;
	sub_831F6908(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8E74;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f18
	ctx.lr = 0x831F8E7C;
	sub_831F7F18(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831f8e34
	if (ctx.cr6.lt) goto loc_831F8E34;
loc_831F8E98:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F8EA4;
	sub_831F6A40(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F8EAC"))) PPC_WEAK_FUNC(sub_831F8EAC);
PPC_FUNC_IMPL(__imp__sub_831F8EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F8EB0"))) PPC_WEAK_FUNC(sub_831F8EB0);
PPC_FUNC_IMPL(__imp__sub_831F8EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x831F8EB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F8ED8;
	sub_831F69E0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r27,r11,-13692
	ctx.r27.s64 = ctx.r11.s64 + -13692;
	// addi r4,r10,-22264
	ctx.r4.s64 = ctx.r10.s64 + -22264;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8EF4;
	sub_831F6908(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831f8f10
	if (ctx.cr6.eq) goto loc_831F8F10;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,25008
	ctx.r4.s64 = ctx.r11.s64 + 25008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F8F10;
	sub_831F6C48(ctx, base);
loc_831F8F10:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r10,r10,-12028
	ctx.r10.s64 = ctx.r10.s64 + -12028;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r4,r9,-10736
	ctx.r4.s64 = ctx.r9.s64 + -10736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x831f6c48
	ctx.lr = 0x831F8F34;
	sub_831F6C48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,-22420
	ctx.r29.s64 = ctx.r11.s64 + -22420;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x831f8fa8
	if (ctx.cr6.eq) goto loc_831F8FA8;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r10,r10,-12104
	ctx.r10.s64 = ctx.r10.s64 + -12104;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x831f6c48
	ctx.lr = 0x831F8F68;
	sub_831F6C48(ctx, base);
	// lhz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x831f8f88
	if (ctx.cr6.eq) goto loc_831F8F88;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-21776
	ctx.r5.s64 = ctx.r11.s64 + -21776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8F88;
	sub_831F6908(ctx, base);
loc_831F8F88:
	// lhz r6,6(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x831f8fa8
	if (ctx.cr6.eq) goto loc_831F8FA8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-21784
	ctx.r5.s64 = ctx.r11.s64 + -21784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8FA8;
	sub_831F6908(ctx, base);
loc_831F8FA8:
	// lhz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x831f8fc8
	if (ctx.cr6.eq) goto loc_831F8FC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,29412
	ctx.r5.s64 = ctx.r11.s64 + 29412;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F8FC8;
	sub_831F6908(ctx, base);
loc_831F8FC8:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x831f902c
	if (!ctx.cr6.eq) goto loc_831F902C;
	// lhz r29,10(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// bl 0x831f7f68
	ctx.lr = 0x831F8FE0;
	sub_831F7F68(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x831f901c
	if (ctx.cr6.eq) goto loc_831F901C;
loc_831F8FF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r6,r10,r28
	ctx.r6.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831f8eb0
	ctx.lr = 0x831F9010;
	sub_831F8EB0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x831f8ff0
	if (!ctx.cr0.eq) goto loc_831F8FF0;
loc_831F901C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F9028;
	sub_831F6A40(ctx, base);
	// b 0x831f9030
	goto loc_831F9030;
loc_831F902C:
	// bl 0x831f7f18
	ctx.lr = 0x831F9030;
	sub_831F7F18(ctx, base);
loc_831F9030:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9038"))) PPC_WEAK_FUNC(sub_831F9038);
PPC_FUNC_IMPL(__imp__sub_831F9038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x831F9040;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F905C;
	sub_831F69E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r28,r11,29720
	ctx.r28.s64 = ctx.r11.s64 + 29720;
	// addi r4,r10,-22264
	ctx.r4.s64 = ctx.r10.s64 + -22264;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F9078;
	sub_831F6908(ctx, base);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831f90e4
	if (ctx.cr0.eq) goto loc_831F90E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lhz r6,6(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// addi r11,r11,-21752
	ctx.r11.s64 = ctx.r11.s64 + -21752;
	// addi r4,r9,-21760
	ctx.r4.s64 = ctx.r9.s64 + -21760;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82cb61f0
	ctx.lr = 0x831F90AC;
	sub_82CB61F0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11224
	ctx.r4.s64 = ctx.r11.s64 + -11224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F90C0;
	sub_831F6C48(ctx, base);
	// lhz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x831f90e4
	if (ctx.cr6.eq) goto loc_831F90E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r5,r11,-21768
	ctx.r5.s64 = ctx.r11.s64 + -21768;
	// addi r4,r10,-22420
	ctx.r4.s64 = ctx.r10.s64 + -22420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F90E4;
	sub_831F6908(ctx, base);
loc_831F90E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F90EC;
	sub_831F7F68(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x831f8eb0
	ctx.lr = 0x831F910C;
	sub_831F8EB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F9118;
	sub_831F6A40(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9120"))) PPC_WEAK_FUNC(sub_831F9120);
PPC_FUNC_IMPL(__imp__sub_831F9120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x831F9128;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,128(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831f91c4
	if (ctx.cr6.lt) goto loc_831F91C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,388(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 388);
	// bl 0x831f69e0
	ctx.lr = 0x831F914C;
	sub_831F69E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r27,r11,-21748
	ctx.r27.s64 = ctx.r11.s64 + -21748;
	// addi r4,r10,-22264
	ctx.r4.s64 = ctx.r10.s64 + -22264;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F9168;
	sub_831F6908(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F9170;
	sub_831F7F68(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831f91b8
	if (ctx.cr6.eq) goto loc_831F91B8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x831f91b8
	if (!ctx.cr6.gt) goto loc_831F91B8;
loc_831F9190:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831f9038
	ctx.lr = 0x831F91A4;
	sub_831F9038(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831f9190
	if (ctx.cr6.lt) goto loc_831F9190;
loc_831F91B8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F91C4;
	sub_831F6A40(ctx, base);
loc_831F91C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F91CC"))) PPC_WEAK_FUNC(sub_831F91CC);
PPC_FUNC_IMPL(__imp__sub_831F91CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F91D0"))) PPC_WEAK_FUNC(sub_831F91D0);
PPC_FUNC_IMPL(__imp__sub_831F91D0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x831f91e4
	if (!ctx.cr6.eq) goto loc_831F91E4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,21574
	ctx.r3.s64 = ctx.r11.s64 + 21574;
	// blr 
	return;
loc_831F91E4:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F91F0"))) PPC_WEAK_FUNC(sub_831F91F0);
PPC_FUNC_IMPL(__imp__sub_831F91F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x831f7fc0
	sub_831F7FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F91F4"))) PPC_WEAK_FUNC(sub_831F91F4);
PPC_FUNC_IMPL(__imp__sub_831F91F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F91F8"))) PPC_WEAK_FUNC(sub_831F91F8);
PPC_FUNC_IMPL(__imp__sub_831F91F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x831f8078
	sub_831F8078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F91FC"))) PPC_WEAK_FUNC(sub_831F91FC);
PPC_FUNC_IMPL(__imp__sub_831F91FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9200"))) PPC_WEAK_FUNC(sub_831F9200);
PPC_FUNC_IMPL(__imp__sub_831F9200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f7658
	sub_831F7658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9210"))) PPC_WEAK_FUNC(sub_831F9210);
PPC_FUNC_IMPL(__imp__sub_831F9210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9214"))) PPC_WEAK_FUNC(sub_831F9214);
PPC_FUNC_IMPL(__imp__sub_831F9214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9218"))) PPC_WEAK_FUNC(sub_831F9218);
PPC_FUNC_IMPL(__imp__sub_831F9218) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f76e8
	sub_831F76E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9228"))) PPC_WEAK_FUNC(sub_831F9228);
PPC_FUNC_IMPL(__imp__sub_831F9228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F922C"))) PPC_WEAK_FUNC(sub_831F922C);
PPC_FUNC_IMPL(__imp__sub_831F922C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9230"))) PPC_WEAK_FUNC(sub_831F9230);
PPC_FUNC_IMPL(__imp__sub_831F9230) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f7778
	sub_831F7778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9240"))) PPC_WEAK_FUNC(sub_831F9240);
PPC_FUNC_IMPL(__imp__sub_831F9240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9244"))) PPC_WEAK_FUNC(sub_831F9244);
PPC_FUNC_IMPL(__imp__sub_831F9244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9248"))) PPC_WEAK_FUNC(sub_831F9248);
PPC_FUNC_IMPL(__imp__sub_831F9248) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f7808
	sub_831F7808(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9258"))) PPC_WEAK_FUNC(sub_831F9258);
PPC_FUNC_IMPL(__imp__sub_831F9258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F925C"))) PPC_WEAK_FUNC(sub_831F925C);
PPC_FUNC_IMPL(__imp__sub_831F925C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9260"))) PPC_WEAK_FUNC(sub_831F9260);
PPC_FUNC_IMPL(__imp__sub_831F9260) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f7898
	sub_831F7898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9270"))) PPC_WEAK_FUNC(sub_831F9270);
PPC_FUNC_IMPL(__imp__sub_831F9270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9274"))) PPC_WEAK_FUNC(sub_831F9274);
PPC_FUNC_IMPL(__imp__sub_831F9274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9278"))) PPC_WEAK_FUNC(sub_831F9278);
PPC_FUNC_IMPL(__imp__sub_831F9278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f7928
	sub_831F7928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9288"))) PPC_WEAK_FUNC(sub_831F9288);
PPC_FUNC_IMPL(__imp__sub_831F9288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F928C"))) PPC_WEAK_FUNC(sub_831F928C);
PPC_FUNC_IMPL(__imp__sub_831F928C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9290"))) PPC_WEAK_FUNC(sub_831F9290);
PPC_FUNC_IMPL(__imp__sub_831F9290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f79b8
	sub_831F79B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F92A0"))) PPC_WEAK_FUNC(sub_831F92A0);
PPC_FUNC_IMPL(__imp__sub_831F92A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F92A4"))) PPC_WEAK_FUNC(sub_831F92A4);
PPC_FUNC_IMPL(__imp__sub_831F92A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F92A8"))) PPC_WEAK_FUNC(sub_831F92A8);
PPC_FUNC_IMPL(__imp__sub_831F92A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f7a48
	sub_831F7A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F92B8"))) PPC_WEAK_FUNC(sub_831F92B8);
PPC_FUNC_IMPL(__imp__sub_831F92B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F92BC"))) PPC_WEAK_FUNC(sub_831F92BC);
PPC_FUNC_IMPL(__imp__sub_831F92BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F92C0"))) PPC_WEAK_FUNC(sub_831F92C0);
PPC_FUNC_IMPL(__imp__sub_831F92C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f7ad8
	sub_831F7AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F92D0"))) PPC_WEAK_FUNC(sub_831F92D0);
PPC_FUNC_IMPL(__imp__sub_831F92D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F92D4"))) PPC_WEAK_FUNC(sub_831F92D4);
PPC_FUNC_IMPL(__imp__sub_831F92D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F92D8"))) PPC_WEAK_FUNC(sub_831F92D8);
PPC_FUNC_IMPL(__imp__sub_831F92D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f7b68
	sub_831F7B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F92E8"))) PPC_WEAK_FUNC(sub_831F92E8);
PPC_FUNC_IMPL(__imp__sub_831F92E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F92EC"))) PPC_WEAK_FUNC(sub_831F92EC);
PPC_FUNC_IMPL(__imp__sub_831F92EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F92F0"))) PPC_WEAK_FUNC(sub_831F92F0);
PPC_FUNC_IMPL(__imp__sub_831F92F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f7bf8
	sub_831F7BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9300"))) PPC_WEAK_FUNC(sub_831F9300);
PPC_FUNC_IMPL(__imp__sub_831F9300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9304"))) PPC_WEAK_FUNC(sub_831F9304);
PPC_FUNC_IMPL(__imp__sub_831F9304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9308"))) PPC_WEAK_FUNC(sub_831F9308);
PPC_FUNC_IMPL(__imp__sub_831F9308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f7c88
	sub_831F7C88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9318"))) PPC_WEAK_FUNC(sub_831F9318);
PPC_FUNC_IMPL(__imp__sub_831F9318) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F931C"))) PPC_WEAK_FUNC(sub_831F931C);
PPC_FUNC_IMPL(__imp__sub_831F931C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9320"))) PPC_WEAK_FUNC(sub_831F9320);
PPC_FUNC_IMPL(__imp__sub_831F9320) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f7d18
	sub_831F7D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9330"))) PPC_WEAK_FUNC(sub_831F9330);
PPC_FUNC_IMPL(__imp__sub_831F9330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9334"))) PPC_WEAK_FUNC(sub_831F9334);
PPC_FUNC_IMPL(__imp__sub_831F9334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9338"))) PPC_WEAK_FUNC(sub_831F9338);
PPC_FUNC_IMPL(__imp__sub_831F9338) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f7da8
	sub_831F7DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9348"))) PPC_WEAK_FUNC(sub_831F9348);
PPC_FUNC_IMPL(__imp__sub_831F9348) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F934C"))) PPC_WEAK_FUNC(sub_831F934C);
PPC_FUNC_IMPL(__imp__sub_831F934C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9350"))) PPC_WEAK_FUNC(sub_831F9350);
PPC_FUNC_IMPL(__imp__sub_831F9350) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f7e30
	sub_831F7E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9360"))) PPC_WEAK_FUNC(sub_831F9360);
PPC_FUNC_IMPL(__imp__sub_831F9360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9364"))) PPC_WEAK_FUNC(sub_831F9364);
PPC_FUNC_IMPL(__imp__sub_831F9364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9368"))) PPC_WEAK_FUNC(sub_831F9368);
PPC_FUNC_IMPL(__imp__sub_831F9368) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831F9370;
	__savegprlr_29(ctx, base);
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lis r10,20042
	ctx.r10.s64 = 1313472512;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x831f9394
	if (!ctx.cr6.lt) goto loc_831F9394;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// b 0x831f961c
	goto loc_831F961C;
loc_831F9394:
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r7,-19687
	ctx.r7.s64 = -1290207232;
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 + 56;
	// mulli r8,r10,40
	ctx.r8.s64 = ctx.r10.s64 * 40;
	// ori r10,r7,62707
	ctx.r10.u64 = ctx.r7.u64 | 62707;
	// extsw r31,r6
	ctx.r31.s64 = ctx.r6.s32;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x831f943c
	if (!ctx.cr6.lt) goto loc_831F943C;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r6,40
	ctx.r11.s64 = ctx.r6.s64 * 40;
	// add r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_831F93D4:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831f9404
	if (ctx.cr6.eq) goto loc_831F9404;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// b 0x831f93fc
	goto loc_831F93FC;
loc_831F93E8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrldi r6,r11,56
	ctx.r6.u64 = ctx.r11.u64 & 0xFF;
	// mulld r7,r7,r10
	ctx.r7.s64 = ctx.r7.s64 * ctx.r10.s64;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
loc_831F93FC:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x831f93e8
	if (!ctx.cr0.eq) goto loc_831F93E8;
loc_831F9404:
	// addi r8,r31,32
	ctx.r8.s64 = ctx.r31.s64 + 32;
	// cmpwi cr6,r31,-32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -32, ctx.xer);
	// beq cr6,0x831f9430
	if (ctx.cr6.eq) goto loc_831F9430;
	// b 0x831f9424
	goto loc_831F9424;
loc_831F9414:
	// clrldi r6,r11,56
	ctx.r6.u64 = ctx.r11.u64 & 0xFF;
	// mulld r7,r7,r10
	ctx.r7.s64 = ctx.r7.s64 * ctx.r10.s64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
loc_831F9424:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x831f9414
	if (!ctx.cr0.eq) goto loc_831F9414;
loc_831F9430:
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x831f93d4
	if (ctx.cr6.lt) goto loc_831F93D4;
loc_831F943C:
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lwz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r31,r6
	ctx.r31.s64 = ctx.r6.s32;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x831f9508
	if (!ctx.cr6.lt) goto loc_831F9508;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,21574
	ctx.r30.s64 = ctx.r11.s64 + 21574;
loc_831F9474:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x831f9488
	if (!ctx.cr6.eq) goto loc_831F9488;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// b 0x831f9490
	goto loc_831F9490;
loc_831F9488:
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_831F9490:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x831f94b8
	if (ctx.cr6.eq) goto loc_831F94B8;
	// b 0x831f94ac
	goto loc_831F94AC;
loc_831F949C:
	// clrldi r6,r11,56
	ctx.r6.u64 = ctx.r11.u64 & 0xFF;
	// mulld r7,r7,r10
	ctx.r7.s64 = ctx.r7.s64 * ctx.r10.s64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
loc_831F94AC:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x831f949c
	if (!ctx.cr0.eq) goto loc_831F949C;
loc_831F94B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x831f94cc
	if (!ctx.cr6.eq) goto loc_831F94CC;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// b 0x831f94d4
	goto loc_831F94D4;
loc_831F94CC:
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_831F94D4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x831f94fc
	if (ctx.cr6.eq) goto loc_831F94FC;
	// b 0x831f94f0
	goto loc_831F94F0;
loc_831F94E0:
	// clrldi r6,r11,56
	ctx.r6.u64 = ctx.r11.u64 & 0xFF;
	// mulld r7,r7,r10
	ctx.r7.s64 = ctx.r7.s64 * ctx.r10.s64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
loc_831F94F0:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x831f94e0
	if (!ctx.cr0.eq) goto loc_831F94E0;
loc_831F94FC:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x831f9474
	if (ctx.cr6.lt) goto loc_831F9474;
loc_831F9508:
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r8,r8,276
	ctx.r8.s64 = ctx.r8.s64 * 276;
	// extsw r31,r6
	ctx.r31.s64 = ctx.r6.s32;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x831f9590
	if (!ctx.cr6.lt) goto loc_831F9590;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r6,276
	ctx.r11.s64 = ctx.r6.s64 * 276;
	// add r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_831F9538:
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x831f9584
	if (ctx.cr6.eq) goto loc_831F9584;
	// b 0x831f9578
	goto loc_831F9578;
loc_831F9548:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x831f9574
	if (ctx.cr6.eq) goto loc_831F9574;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x831f9574
	if (ctx.cr6.eq) goto loc_831F9574;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x831f9574
	if (ctx.cr6.eq) goto loc_831F9574;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x831f9574
	if (ctx.cr6.eq) goto loc_831F9574;
	// clrldi r8,r8,56
	ctx.r8.u64 = ctx.r8.u64 & 0xFF;
	// mulld r11,r7,r10
	ctx.r11.s64 = ctx.r7.s64 * ctx.r10.s64;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_831F9574:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_831F9578:
	// lbz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb. r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831f9548
	if (!ctx.cr0.eq) goto loc_831F9548;
loc_831F9584:
	// addi r31,r31,276
	ctx.r31.s64 = ctx.r31.s64 + 276;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x831f9538
	if (ctx.cr6.lt) goto loc_831F9538;
loc_831F9590:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831f9614
	if (ctx.cr6.eq) goto loc_831F9614;
	// b 0x831f95ac
	goto loc_831F95AC;
loc_831F959C:
	// clrldi r6,r11,56
	ctx.r6.u64 = ctx.r11.u64 & 0xFF;
	// mulld r8,r7,r10
	ctx.r8.s64 = ctx.r7.s64 * ctx.r10.s64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_831F95AC:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x831f959c
	if (!ctx.cr0.eq) goto loc_831F959C;
	// lis r9,-27911
	ctx.r9.s64 = -1829175296;
	// rlwinm r6,r5,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// rlwinm r11,r5,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// lis r8,14763
	ctx.r8.s64 = 967507968;
	// ori r4,r9,11883
	ctx.r4.u64 = ctx.r9.u64 | 11883;
	// mulld r11,r11,r10
	ctx.r11.s64 = ctx.r11.s64 * ctx.r10.s64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// ori r8,r8,49284
	ctx.r8.u64 = ctx.r8.u64 | 49284;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// lis r9,23608
	ctx.r9.s64 = 1547173888;
	// lis r8,-3780
	ctx.r8.s64 = -247726080;
	// mulld r11,r11,r10
	ctx.r11.s64 = ctx.r11.s64 * ctx.r10.s64;
	// mulld r10,r6,r4
	ctx.r10.s64 = ctx.r6.s64 * ctx.r4.s64;
	// ori r9,r9,2961
	ctx.r9.u64 = ctx.r9.u64 | 2961;
	// ori r8,r8,44983
	ctx.r8.u64 = ctx.r8.u64 | 44983;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r5,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulld r10,r7,r9
	ctx.r10.s64 = ctx.r7.s64 * ctx.r9.s64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_831F9614:
	// rldicl r11,r7,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// stw r7,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r7.u32);
loc_831F961C:
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9624"))) PPC_WEAK_FUNC(sub_831F9624);
PPC_FUNC_IMPL(__imp__sub_831F9624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9628"))) PPC_WEAK_FUNC(sub_831F9628);
PPC_FUNC_IMPL(__imp__sub_831F9628) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831f965c
	if (!ctx.cr6.eq) goto loc_831F965C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x831f9368
	ctx.lr = 0x831F965C;
	sub_831F9368(ctx, base);
loc_831F965C:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831f968c
	if (ctx.cr6.eq) goto loc_831F968C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_831F968C:
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

__attribute__((alias("__imp__sub_831F96A4"))) PPC_WEAK_FUNC(sub_831F96A4);
PPC_FUNC_IMPL(__imp__sub_831F96A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F96A8"))) PPC_WEAK_FUNC(sub_831F96A8);
PPC_FUNC_IMPL(__imp__sub_831F96A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x831F96B0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F96C4;
	sub_831F69E0(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r21,r10,-21700
	ctx.r21.s64 = ctx.r10.s64 + -21700;
	// addi r27,r11,-22264
	ctx.r27.s64 = ctx.r11.s64 + -22264;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F96E4;
	sub_831F6908(ctx, base);
	// lwz r5,116(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r22,r11,25008
	ctx.r22.s64 = ctx.r11.s64 + 25008;
	// beq cr6,0x831f9704
	if (ctx.cr6.eq) goto loc_831F9704;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F9704;
	sub_831F6C48(ctx, base);
loc_831F9704:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F970C;
	sub_831F7F68(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r23,r11,-9664
	ctx.r23.s64 = ctx.r11.s64 + -9664;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831f9810
	if (ctx.cr6.eq) goto loc_831F9810;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F9728;
	sub_831F69E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r26,r11,-21708
	ctx.r26.s64 = ctx.r11.s64 + -21708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F9740;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F9748;
	sub_831F7F68(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r29,r28,32
	ctx.r29.s64 = ctx.r28.s64 + 32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831f9804
	if (!ctx.cr6.lt) goto loc_831F9804;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r24,r10,21574
	ctx.r24.s64 = ctx.r10.s64 + 21574;
	// addi r25,r11,5660
	ctx.r25.s64 = ctx.r11.s64 + 5660;
loc_831F9778:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F9780;
	sub_831F69E0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F9790;
	sub_831F6908(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x831f97a4
	if (!ctx.cr6.eq) goto loc_831F97A4;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x831f97ac
	goto loc_831F97AC;
loc_831F97A4:
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_831F97AC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F97B8;
	sub_831F6C48(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x831f97cc
	if (!ctx.cr6.eq) goto loc_831F97CC;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x831f97d4
	goto loc_831F97D4;
loc_831F97CC:
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_831F97D4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F97E0;
	sub_831F6C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f18
	ctx.lr = 0x831F97E8;
	sub_831F7F18(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831f9778
	if (ctx.cr6.lt) goto loc_831F9778;
loc_831F9804:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F9810;
	sub_831F6A40(ctx, base);
loc_831F9810:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F9818;
	sub_831F69E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r26,r11,-21720
	ctx.r26.s64 = ctx.r11.s64 + -21720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F9830;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F9838;
	sub_831F7F68(ctx, base);
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lwz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// addi r29,r28,56
	ctx.r29.s64 = ctx.r28.s64 + 56;
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831f98bc
	if (!ctx.cr6.lt) goto loc_831F98BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r28,r11,-21732
	ctx.r28.s64 = ctx.r11.s64 + -21732;
loc_831F9860:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F9868;
	sub_831F69E0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F9878;
	sub_831F6908(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F9888;
	sub_831F6C48(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F9898;
	sub_831F6C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f18
	ctx.lr = 0x831F98A0;
	sub_831F7F18(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831f9860
	if (ctx.cr6.lt) goto loc_831F9860;
loc_831F98BC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F98C8;
	sub_831F6A40(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F98D4;
	sub_831F6A40(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F98DC"))) PPC_WEAK_FUNC(sub_831F98DC);
PPC_FUNC_IMPL(__imp__sub_831F98DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F98E0"))) PPC_WEAK_FUNC(sub_831F98E0);
PPC_FUNC_IMPL(__imp__sub_831F98E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x831F98E8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F9904;
	sub_831F69E0(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r18,r10,-21692
	ctx.r18.s64 = ctx.r10.s64 + -21692;
	// addi r22,r11,-22264
	ctx.r22.s64 = ctx.r11.s64 + -22264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F9924;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F992C;
	sub_831F7F68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1b930
	ctx.lr = 0x831F9934;
	sub_82F1B930(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82299698
	ctx.lr = 0x831F9944;
	sub_82299698(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x831f995c
	if (!ctx.cr0.eq) goto loc_831F995C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,128(r21)
	PPC_STORE_U32(ctx.r21.u32 + 128, ctx.r11.u32);
	// b 0x831f9a9c
	goto loc_831F9A9C;
loc_831F995C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1bca0
	ctx.lr = 0x831F9970;
	sub_82F1BCA0(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r19,r26,8
	ctx.r19.s64 = ctx.r26.s64 + 8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831f9a90
	if (!ctx.cr6.lt) goto loc_831F9A90;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r20,r6,21574
	ctx.r20.s64 = ctx.r6.s64 + 21574;
	// addi r29,r7,-22420
	ctx.r29.s64 = ctx.r7.s64 + -22420;
	// addi r25,r8,-22216
	ctx.r25.s64 = ctx.r8.s64 + -22216;
	// addi r24,r9,-13672
	ctx.r24.s64 = ctx.r9.s64 + -13672;
	// addi r23,r10,-27436
	ctx.r23.s64 = ctx.r10.s64 + -27436;
	// addi r28,r11,-13684
	ctx.r28.s64 = ctx.r11.s64 + -13684;
loc_831F99BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831f9a74
	if (ctx.cr0.eq) goto loc_831F9A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F99D0;
	sub_831F69E0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F99E0;
	sub_831F6908(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r6,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 4;
	// bl 0x831f6908
	ctx.lr = 0x831F99FC;
	sub_831F6908(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F9A10;
	sub_831F6908(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F9A24;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F9A2C;
	sub_831F7F68(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x831f9a44
	if (!ctx.cr6.eq) goto loc_831F9A44;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// b 0x831f9a4c
	goto loc_831F9A4C;
loc_831F9A44:
	// lwz r10,44(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 44);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_831F9A4C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// bl 0x831f8eb0
	ctx.lr = 0x831F9A68;
	sub_831F8EB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F9A74;
	sub_831F6A40(ctx, base);
loc_831F9A74:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831f99bc
	if (ctx.cr6.lt) goto loc_831F99BC;
loc_831F9A90:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822996c0
	ctx.lr = 0x831F9A9C;
	sub_822996C0(ctx, base);
loc_831F9A9C:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F9AA8;
	sub_831F6A40(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9AB0"))) PPC_WEAK_FUNC(sub_831F9AB0);
PPC_FUNC_IMPL(__imp__sub_831F9AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x831F9AB8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F9AD0;
	sub_831F69E0(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r19,r10,-21660
	ctx.r19.s64 = ctx.r10.s64 + -21660;
	// addi r24,r11,-22264
	ctx.r24.s64 = ctx.r11.s64 + -22264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F9AF0;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F9AF8;
	sub_831F7F68(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831f9c4c
	if (!ctx.cr6.lt) goto loc_831F9C4C;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r20,r5,21574
	ctx.r20.s64 = ctx.r5.s64 + 21574;
	// addi r28,r6,-22420
	ctx.r28.s64 = ctx.r6.s64 + -22420;
	// addi r23,r7,-21672
	ctx.r23.s64 = ctx.r7.s64 + -21672;
	// addi r22,r8,-21680
	ctx.r22.s64 = ctx.r8.s64 + -21680;
	// addi r21,r9,25008
	ctx.r21.s64 = ctx.r9.s64 + 25008;
	// addi r26,r10,-27436
	ctx.r26.s64 = ctx.r10.s64 + -27436;
	// addi r25,r11,-13672
	ctx.r25.s64 = ctx.r11.s64 + -13672;
loc_831F9B48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831F9B50;
	sub_831F69E0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F9B60;
	sub_831F6908(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r11,20
	ctx.r11.s64 = 20;
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r6,r10,r11
	ctx.r6.s32 = ctx.r10.s32 / ctx.r11.s32;
	// bl 0x831f6908
	ctx.lr = 0x831F9B80;
	sub_831F6908(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x831f9b94
	if (!ctx.cr6.eq) goto loc_831F9B94;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// b 0x831f9b9c
	goto loc_831F9B9C;
loc_831F9B94:
	// lwz r10,44(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_831F9B9C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831F9BA8;
	sub_831F6C48(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F9BBC;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831F9BC4;
	sub_831F7F68(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x831f9c1c
	goto loc_831F9C1C;
loc_831F9BD8:
	// bl 0x831f69e0
	ctx.lr = 0x831F9BDC;
	sub_831F69E0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F9BEC;
	sub_831F6908(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831F9C00;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f18
	ctx.lr = 0x831F9C08;
	sub_831F7F18(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_831F9C1C:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x831f9bd8
	if (ctx.cr6.lt) goto loc_831F9BD8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F9C30;
	sub_831F6A40(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831f9b48
	if (ctx.cr6.lt) goto loc_831F9B48;
loc_831F9C4C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831F9C58;
	sub_831F6A40(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9C60"))) PPC_WEAK_FUNC(sub_831F9C60);
PPC_FUNC_IMPL(__imp__sub_831F9C60) {
	PPC_FUNC_PROLOGUE();
	// b 0x831f9628
	sub_831F9628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9C64"))) PPC_WEAK_FUNC(sub_831F9C64);
PPC_FUNC_IMPL(__imp__sub_831F9C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9C68"))) PPC_WEAK_FUNC(sub_831F9C68);
PPC_FUNC_IMPL(__imp__sub_831F9C68) {
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
	// ble cr6,0x831f9c9c
	if (!ctx.cr6.gt) goto loc_831F9C9C;
	// bl 0x831f7658
	ctx.lr = 0x831F9C9C;
	sub_831F7658(ctx, base);
loc_831F9C9C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_831F9CD4"))) PPC_WEAK_FUNC(sub_831F9CD4);
PPC_FUNC_IMPL(__imp__sub_831F9CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9CD8"))) PPC_WEAK_FUNC(sub_831F9CD8);
PPC_FUNC_IMPL(__imp__sub_831F9CD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f76e8
	sub_831F76E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9CF0"))) PPC_WEAK_FUNC(sub_831F9CF0);
PPC_FUNC_IMPL(__imp__sub_831F9CF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9CF4"))) PPC_WEAK_FUNC(sub_831F9CF4);
PPC_FUNC_IMPL(__imp__sub_831F9CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9CF8"))) PPC_WEAK_FUNC(sub_831F9CF8);
PPC_FUNC_IMPL(__imp__sub_831F9CF8) {
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
	// ble cr6,0x831f9d2c
	if (!ctx.cr6.gt) goto loc_831F9D2C;
	// bl 0x831f76e8
	ctx.lr = 0x831F9D2C;
	sub_831F76E8(ctx, base);
loc_831F9D2C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82cb1160
	ctx.lr = 0x831F9D48;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_831F9D6C"))) PPC_WEAK_FUNC(sub_831F9D6C);
PPC_FUNC_IMPL(__imp__sub_831F9D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9D70"))) PPC_WEAK_FUNC(sub_831F9D70);
PPC_FUNC_IMPL(__imp__sub_831F9D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f7778
	sub_831F7778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9D88"))) PPC_WEAK_FUNC(sub_831F9D88);
PPC_FUNC_IMPL(__imp__sub_831F9D88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9D8C"))) PPC_WEAK_FUNC(sub_831F9D8C);
PPC_FUNC_IMPL(__imp__sub_831F9D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9D90"))) PPC_WEAK_FUNC(sub_831F9D90);
PPC_FUNC_IMPL(__imp__sub_831F9D90) {
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
	// ble cr6,0x831f9dc4
	if (!ctx.cr6.gt) goto loc_831F9DC4;
	// bl 0x831f7778
	ctx.lr = 0x831F9DC4;
	sub_831F7778(ctx, base);
loc_831F9DC4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_831F9E18"))) PPC_WEAK_FUNC(sub_831F9E18);
PPC_FUNC_IMPL(__imp__sub_831F9E18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f7808
	sub_831F7808(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9E30"))) PPC_WEAK_FUNC(sub_831F9E30);
PPC_FUNC_IMPL(__imp__sub_831F9E30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9E34"))) PPC_WEAK_FUNC(sub_831F9E34);
PPC_FUNC_IMPL(__imp__sub_831F9E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9E38"))) PPC_WEAK_FUNC(sub_831F9E38);
PPC_FUNC_IMPL(__imp__sub_831F9E38) {
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
	// ble cr6,0x831f9e64
	if (!ctx.cr6.gt) goto loc_831F9E64;
	// bl 0x831f7808
	ctx.lr = 0x831F9E64;
	sub_831F7808(ctx, base);
loc_831F9E64:
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

__attribute__((alias("__imp__sub_831F9E80"))) PPC_WEAK_FUNC(sub_831F9E80);
PPC_FUNC_IMPL(__imp__sub_831F9E80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x831f7898
	sub_831F7898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9E98"))) PPC_WEAK_FUNC(sub_831F9E98);
PPC_FUNC_IMPL(__imp__sub_831F9E98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9E9C"))) PPC_WEAK_FUNC(sub_831F9E9C);
PPC_FUNC_IMPL(__imp__sub_831F9E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

