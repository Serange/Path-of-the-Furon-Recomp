#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EE4454"))) PPC_WEAK_FUNC(sub_82EE4454);
PPC_FUNC_IMPL(__imp__sub_82EE4454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4458"))) PPC_WEAK_FUNC(sub_82EE4458);
PPC_FUNC_IMPL(__imp__sub_82EE4458) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bgt cr6,0x82ee447c
	if (ctx.cr6.gt) goto loc_82EE447C;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bgt cr6,0x82ee447c
	if (ctx.cr6.gt) goto loc_82EE447C;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82EE447C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4484"))) PPC_WEAK_FUNC(sub_82EE4484);
PPC_FUNC_IMPL(__imp__sub_82EE4484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4488"))) PPC_WEAK_FUNC(sub_82EE4488);
PPC_FUNC_IMPL(__imp__sub_82EE4488) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x82ee4498
	if (!ctx.cr6.gt) goto loc_82EE4498;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EE4498:
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE44A8"))) PPC_WEAK_FUNC(sub_82EE44A8);
PPC_FUNC_IMPL(__imp__sub_82EE44A8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE44B4"))) PPC_WEAK_FUNC(sub_82EE44B4);
PPC_FUNC_IMPL(__imp__sub_82EE44B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE44B8"))) PPC_WEAK_FUNC(sub_82EE44B8);
PPC_FUNC_IMPL(__imp__sub_82EE44B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bgt cr6,0x82ee44dc
	if (ctx.cr6.gt) goto loc_82EE44DC;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bgt cr6,0x82ee44dc
	if (ctx.cr6.gt) goto loc_82EE44DC;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82EE44DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE44E4"))) PPC_WEAK_FUNC(sub_82EE44E4);
PPC_FUNC_IMPL(__imp__sub_82EE44E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE44E8"))) PPC_WEAK_FUNC(sub_82EE44E8);
PPC_FUNC_IMPL(__imp__sub_82EE44E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x82ee44f8
	if (!ctx.cr6.gt) goto loc_82EE44F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EE44F8:
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4508"))) PPC_WEAK_FUNC(sub_82EE4508);
PPC_FUNC_IMPL(__imp__sub_82EE4508) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4514"))) PPC_WEAK_FUNC(sub_82EE4514);
PPC_FUNC_IMPL(__imp__sub_82EE4514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4518"))) PPC_WEAK_FUNC(sub_82EE4518);
PPC_FUNC_IMPL(__imp__sub_82EE4518) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bgt cr6,0x82ee453c
	if (ctx.cr6.gt) goto loc_82EE453C;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bgt cr6,0x82ee453c
	if (ctx.cr6.gt) goto loc_82EE453C;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82EE453C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4544"))) PPC_WEAK_FUNC(sub_82EE4544);
PPC_FUNC_IMPL(__imp__sub_82EE4544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4548"))) PPC_WEAK_FUNC(sub_82EE4548);
PPC_FUNC_IMPL(__imp__sub_82EE4548) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x82ee4558
	if (!ctx.cr6.gt) goto loc_82EE4558;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EE4558:
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4568"))) PPC_WEAK_FUNC(sub_82EE4568);
PPC_FUNC_IMPL(__imp__sub_82EE4568) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4574"))) PPC_WEAK_FUNC(sub_82EE4574);
PPC_FUNC_IMPL(__imp__sub_82EE4574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4578"))) PPC_WEAK_FUNC(sub_82EE4578);
PPC_FUNC_IMPL(__imp__sub_82EE4578) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bgt cr6,0x82ee459c
	if (ctx.cr6.gt) goto loc_82EE459C;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bgt cr6,0x82ee459c
	if (ctx.cr6.gt) goto loc_82EE459C;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82EE459C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE45A4"))) PPC_WEAK_FUNC(sub_82EE45A4);
PPC_FUNC_IMPL(__imp__sub_82EE45A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE45A8"))) PPC_WEAK_FUNC(sub_82EE45A8);
PPC_FUNC_IMPL(__imp__sub_82EE45A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x82ee45b8
	if (!ctx.cr6.gt) goto loc_82EE45B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EE45B8:
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE45C8"))) PPC_WEAK_FUNC(sub_82EE45C8);
PPC_FUNC_IMPL(__imp__sub_82EE45C8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE45D4"))) PPC_WEAK_FUNC(sub_82EE45D4);
PPC_FUNC_IMPL(__imp__sub_82EE45D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE45D8"))) PPC_WEAK_FUNC(sub_82EE45D8);
PPC_FUNC_IMPL(__imp__sub_82EE45D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bgt cr6,0x82ee4600
	if (ctx.cr6.gt) goto loc_82EE4600;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bgt cr6,0x82ee4600
	if (ctx.cr6.gt) goto loc_82EE4600;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82EE4600:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4608"))) PPC_WEAK_FUNC(sub_82EE4608);
PPC_FUNC_IMPL(__imp__sub_82EE4608) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// ble cr6,0x82ee4618
	if (!ctx.cr6.gt) goto loc_82EE4618;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EE4618:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE462C"))) PPC_WEAK_FUNC(sub_82EE462C);
PPC_FUNC_IMPL(__imp__sub_82EE462C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4630"))) PPC_WEAK_FUNC(sub_82EE4630);
PPC_FUNC_IMPL(__imp__sub_82EE4630) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4648"))) PPC_WEAK_FUNC(sub_82EE4648);
PPC_FUNC_IMPL(__imp__sub_82EE4648) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bgt cr6,0x82ee4674
	if (ctx.cr6.gt) goto loc_82EE4674;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bgt cr6,0x82ee4674
	if (ctx.cr6.gt) goto loc_82EE4674;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82EE4674:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE467C"))) PPC_WEAK_FUNC(sub_82EE467C);
PPC_FUNC_IMPL(__imp__sub_82EE467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4680"))) PPC_WEAK_FUNC(sub_82EE4680);
PPC_FUNC_IMPL(__imp__sub_82EE4680) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// ble cr6,0x82ee4690
	if (!ctx.cr6.gt) goto loc_82EE4690;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EE4690:
	// rlwinm r11,r4,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE46B0"))) PPC_WEAK_FUNC(sub_82EE46B0);
PPC_FUNC_IMPL(__imp__sub_82EE46B0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3;
	// rlwinm r9,r4,30,2,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// clrlwi r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE46D4"))) PPC_WEAK_FUNC(sub_82EE46D4);
PPC_FUNC_IMPL(__imp__sub_82EE46D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE46D8"))) PPC_WEAK_FUNC(sub_82EE46D8);
PPC_FUNC_IMPL(__imp__sub_82EE46D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bgt cr6,0x82ee4704
	if (ctx.cr6.gt) goto loc_82EE4704;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bgt cr6,0x82ee4704
	if (ctx.cr6.gt) goto loc_82EE4704;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82EE4704:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE470C"))) PPC_WEAK_FUNC(sub_82EE470C);
PPC_FUNC_IMPL(__imp__sub_82EE470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4710"))) PPC_WEAK_FUNC(sub_82EE4710);
PPC_FUNC_IMPL(__imp__sub_82EE4710) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// ble cr6,0x82ee4720
	if (!ctx.cr6.gt) goto loc_82EE4720;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EE4720:
	// rlwinm r10,r4,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE473C"))) PPC_WEAK_FUNC(sub_82EE473C);
PPC_FUNC_IMPL(__imp__sub_82EE473C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4740"))) PPC_WEAK_FUNC(sub_82EE4740);
PPC_FUNC_IMPL(__imp__sub_82EE4740) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// rlwinm r9,r4,30,2,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4760"))) PPC_WEAK_FUNC(sub_82EE4760);
PPC_FUNC_IMPL(__imp__sub_82EE4760) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bgt cr6,0x82ee478c
	if (ctx.cr6.gt) goto loc_82EE478C;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bgt cr6,0x82ee478c
	if (ctx.cr6.gt) goto loc_82EE478C;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82EE478C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4794"))) PPC_WEAK_FUNC(sub_82EE4794);
PPC_FUNC_IMPL(__imp__sub_82EE4794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4798"))) PPC_WEAK_FUNC(sub_82EE4798);
PPC_FUNC_IMPL(__imp__sub_82EE4798) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// ble cr6,0x82ee47a8
	if (!ctx.cr6.gt) goto loc_82EE47A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EE47A8:
	// rlwinm r11,r4,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE47C8"))) PPC_WEAK_FUNC(sub_82EE47C8);
PPC_FUNC_IMPL(__imp__sub_82EE47C8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// rlwinm r9,r4,30,2,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r10,r4,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE47EC"))) PPC_WEAK_FUNC(sub_82EE47EC);
PPC_FUNC_IMPL(__imp__sub_82EE47EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE47F0"))) PPC_WEAK_FUNC(sub_82EE47F0);
PPC_FUNC_IMPL(__imp__sub_82EE47F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bgt cr6,0x82ee481c
	if (ctx.cr6.gt) goto loc_82EE481C;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bgt cr6,0x82ee481c
	if (ctx.cr6.gt) goto loc_82EE481C;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82EE481C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4824"))) PPC_WEAK_FUNC(sub_82EE4824);
PPC_FUNC_IMPL(__imp__sub_82EE4824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4828"))) PPC_WEAK_FUNC(sub_82EE4828);
PPC_FUNC_IMPL(__imp__sub_82EE4828) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// ble cr6,0x82ee4838
	if (!ctx.cr6.gt) goto loc_82EE4838;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EE4838:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// rlwinm r9,r4,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4858"))) PPC_WEAK_FUNC(sub_82EE4858);
PPC_FUNC_IMPL(__imp__sub_82EE4858) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// rlwinm r11,r4,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3;
	// rlwinm r9,r4,30,2,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4878"))) PPC_WEAK_FUNC(sub_82EE4878);
PPC_FUNC_IMPL(__imp__sub_82EE4878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE487C"))) PPC_WEAK_FUNC(sub_82EE487C);
PPC_FUNC_IMPL(__imp__sub_82EE487C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4880"))) PPC_WEAK_FUNC(sub_82EE4880);
PPC_FUNC_IMPL(__imp__sub_82EE4880) {
	PPC_FUNC_PROLOGUE();
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4890"))) PPC_WEAK_FUNC(sub_82EE4890);
PPC_FUNC_IMPL(__imp__sub_82EE4890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4894"))) PPC_WEAK_FUNC(sub_82EE4894);
PPC_FUNC_IMPL(__imp__sub_82EE4894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4898"))) PPC_WEAK_FUNC(sub_82EE4898);
PPC_FUNC_IMPL(__imp__sub_82EE4898) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE48A0"))) PPC_WEAK_FUNC(sub_82EE48A0);
PPC_FUNC_IMPL(__imp__sub_82EE48A0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE48A8"))) PPC_WEAK_FUNC(sub_82EE48A8);
PPC_FUNC_IMPL(__imp__sub_82EE48A8) {
	PPC_FUNC_PROLOGUE();
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE48B8"))) PPC_WEAK_FUNC(sub_82EE48B8);
PPC_FUNC_IMPL(__imp__sub_82EE48B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE48BC"))) PPC_WEAK_FUNC(sub_82EE48BC);
PPC_FUNC_IMPL(__imp__sub_82EE48BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE48C0"))) PPC_WEAK_FUNC(sub_82EE48C0);
PPC_FUNC_IMPL(__imp__sub_82EE48C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE48C4"))) PPC_WEAK_FUNC(sub_82EE48C4);
PPC_FUNC_IMPL(__imp__sub_82EE48C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE48C8"))) PPC_WEAK_FUNC(sub_82EE48C8);
PPC_FUNC_IMPL(__imp__sub_82EE48C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,4138
	ctx.r10.s64 = 271187968;
	// rlwinm r11,r11,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE48E8"))) PPC_WEAK_FUNC(sub_82EE48E8);
PPC_FUNC_IMPL(__imp__sub_82EE48E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EE48F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee4958
	if (ctx.cr6.eq) goto loc_82EE4958;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee494c
	if (ctx.cr0.eq) goto loc_82EE494C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EE491C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ee4934
	if (ctx.cr6.eq) goto loc_82EE4934;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ee7e30
	ctx.lr = 0x82EE4934;
	sub_82EE7E30(ctx, base);
loc_82EE4934:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lhz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee491c
	if (ctx.cr6.lt) goto loc_82EE491C;
loc_82EE494C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x822996c0
	ctx.lr = 0x82EE4958;
	sub_822996C0(ctx, base);
loc_82EE4958:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee49b8
	if (ctx.cr6.eq) goto loc_82EE49B8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee49ac
	if (ctx.cr0.eq) goto loc_82EE49AC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EE497C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ee4994
	if (ctx.cr6.eq) goto loc_82EE4994;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ee7e30
	ctx.lr = 0x82EE4994;
	sub_82EE7E30(ctx, base);
loc_82EE4994:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee497c
	if (ctx.cr6.lt) goto loc_82EE497C;
loc_82EE49AC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x822996c0
	ctx.lr = 0x82EE49B8;
	sub_822996C0(ctx, base);
loc_82EE49B8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x822996c0
	ctx.lr = 0x82EE49C4;
	sub_822996C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE49CC"))) PPC_WEAK_FUNC(sub_82EE49CC);
PPC_FUNC_IMPL(__imp__sub_82EE49CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE49D0"))) PPC_WEAK_FUNC(sub_82EE49D0);
PPC_FUNC_IMPL(__imp__sub_82EE49D0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82ee4a00
	if (!ctx.cr6.eq) goto loc_82EE4A00;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82ee4a00
	if (!ctx.cr6.eq) goto loc_82EE4A00;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82ee4a8c
	goto loc_82EE4A8C;
loc_82EE4A00:
	// not. r7,r11
	ctx.r7.u64 = ~ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r31,1
	ctx.r31.s64 = 1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// beq 0x82ee4a24
	if (ctx.cr0.eq) goto loc_82EE4A24;
loc_82EE4A14:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee4a14
	if (!ctx.cr6.eq) goto loc_82EE4A14;
loc_82EE4A24:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82ee4a4c
	if (ctx.cr6.eq) goto loc_82EE4A4C;
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ee4a3c
	if (!ctx.cr6.eq) goto loc_82EE4A3C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82EE4A3C:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee4a48
	if (!ctx.cr6.gt) goto loc_82EE4A48;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82EE4A48:
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_82EE4A4C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ee4a88
	if (ctx.cr6.eq) goto loc_82EE4A88;
	// b 0x82ee4a80
	goto loc_82EE4A80;
loc_82EE4A58:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee4a88
	if (ctx.cr6.eq) goto loc_82EE4A88;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82ee3ea0
	ctx.lr = 0x82EE4A6C;
	sub_82EE3EA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee4a8c
	if (ctx.cr0.lt) goto loc_82EE4A8C;
	// lwz r7,36(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// addi r5,r5,48
	ctx.r5.s64 = ctx.r5.s64 + 48;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82EE4A80:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82ee4a58
	if (!ctx.cr6.eq) goto loc_82EE4A58;
loc_82EE4A88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE4A8C:
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

__attribute__((alias("__imp__sub_82EE4AA0"))) PPC_WEAK_FUNC(sub_82EE4AA0);
PPC_FUNC_IMPL(__imp__sub_82EE4AA0) {
	PPC_FUNC_PROLOGUE();
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r3,10(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4ABC"))) PPC_WEAK_FUNC(sub_82EE4ABC);
PPC_FUNC_IMPL(__imp__sub_82EE4ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4AC0"))) PPC_WEAK_FUNC(sub_82EE4AC0);
PPC_FUNC_IMPL(__imp__sub_82EE4AC0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ee4aec
	if (!ctx.cr6.eq) goto loc_82EE4AEC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee4adc
	if (ctx.cr6.lt) goto loc_82EE4ADC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EE4ADC:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82ee4b20
	goto loc_82EE4B20;
loc_82EE4AEC:
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lhz r10,10(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee4b08
	if (ctx.cr6.lt) goto loc_82EE4B08;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ee4b14
	goto loc_82EE4B14;
loc_82EE4B08:
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82EE4B14:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82EE4B20:
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4B28"))) PPC_WEAK_FUNC(sub_82EE4B28);
PPC_FUNC_IMPL(__imp__sub_82EE4B28) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82e6c660
	ctx.lr = 0x82EE4B3C;
	sub_82E6C660(ctx, base);
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

__attribute__((alias("__imp__sub_82EE4B50"))) PPC_WEAK_FUNC(sub_82EE4B50);
PPC_FUNC_IMPL(__imp__sub_82EE4B50) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82e6c660
	ctx.lr = 0x82EE4B64;
	sub_82E6C660(ctx, base);
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

__attribute__((alias("__imp__sub_82EE4B78"))) PPC_WEAK_FUNC(sub_82EE4B78);
PPC_FUNC_IMPL(__imp__sub_82EE4B78) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ee4bb8
	if (ctx.cr6.eq) goto loc_82EE4BB8;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82EE4B98:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee4b98
	if (!ctx.cr0.eq) goto loc_82EE4B98;
loc_82EE4BB8:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82e6c660
	ctx.lr = 0x82EE4BC0;
	sub_82E6C660(ctx, base);
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

__attribute__((alias("__imp__sub_82EE4BD4"))) PPC_WEAK_FUNC(sub_82EE4BD4);
PPC_FUNC_IMPL(__imp__sub_82EE4BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4BD8"))) PPC_WEAK_FUNC(sub_82EE4BD8);
PPC_FUNC_IMPL(__imp__sub_82EE4BD8) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ee4c24
	if (ctx.cr6.eq) goto loc_82EE4C24;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// subf r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82EE4C00:
	// lfsx f13,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82ee4c14
	if (!ctx.cr6.eq) goto loc_82EE4C14;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EE4C14:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee4c00
	if (!ctx.cr0.eq) goto loc_82EE4C00;
loc_82EE4C24:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82e6c660
	ctx.lr = 0x82EE4C2C;
	sub_82E6C660(ctx, base);
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

__attribute__((alias("__imp__sub_82EE4C40"))) PPC_WEAK_FUNC(sub_82EE4C40);
PPC_FUNC_IMPL(__imp__sub_82EE4C40) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82e6c7b0
	ctx.lr = 0x82EE4C54;
	sub_82E6C7B0(ctx, base);
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

__attribute__((alias("__imp__sub_82EE4C68"))) PPC_WEAK_FUNC(sub_82EE4C68);
PPC_FUNC_IMPL(__imp__sub_82EE4C68) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm. r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ee4ca4
	if (ctx.cr0.eq) goto loc_82EE4CA4;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82EE4C84:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee4c84
	if (!ctx.cr0.eq) goto loc_82EE4C84;
loc_82EE4CA4:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82e6c7b0
	ctx.lr = 0x82EE4CAC;
	sub_82E6C7B0(ctx, base);
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

__attribute__((alias("__imp__sub_82EE4CC0"))) PPC_WEAK_FUNC(sub_82EE4CC0);
PPC_FUNC_IMPL(__imp__sub_82EE4CC0) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82e6c7b0
	ctx.lr = 0x82EE4CD4;
	sub_82E6C7B0(ctx, base);
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

__attribute__((alias("__imp__sub_82EE4CE8"))) PPC_WEAK_FUNC(sub_82EE4CE8);
PPC_FUNC_IMPL(__imp__sub_82EE4CE8) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm. r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ee4d1c
	if (ctx.cr0.eq) goto loc_82EE4D1C;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82EE4D04:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee4d04
	if (!ctx.cr0.eq) goto loc_82EE4D04;
loc_82EE4D1C:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82e6c7b0
	ctx.lr = 0x82EE4D24;
	sub_82E6C7B0(ctx, base);
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

__attribute__((alias("__imp__sub_82EE4D38"))) PPC_WEAK_FUNC(sub_82EE4D38);
PPC_FUNC_IMPL(__imp__sub_82EE4D38) {
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
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x82e6c460
	ctx.lr = 0x82EE4D74;
	sub_82E6C460(ctx, base);
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

__attribute__((alias("__imp__sub_82EE4D88"))) PPC_WEAK_FUNC(sub_82EE4D88);
PPC_FUNC_IMPL(__imp__sub_82EE4D88) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm. r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ee4dd8
	if (ctx.cr0.eq) goto loc_82EE4DD8;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82EE4DA4:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee4da4
	if (!ctx.cr0.eq) goto loc_82EE4DA4;
loc_82EE4DD8:
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x82e6c460
	ctx.lr = 0x82EE4E08;
	sub_82E6C460(ctx, base);
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

__attribute__((alias("__imp__sub_82EE4E1C"))) PPC_WEAK_FUNC(sub_82EE4E1C);
PPC_FUNC_IMPL(__imp__sub_82EE4E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4E20"))) PPC_WEAK_FUNC(sub_82EE4E20);
PPC_FUNC_IMPL(__imp__sub_82EE4E20) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm. r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ee4e60
	if (ctx.cr0.eq) goto loc_82EE4E60;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82EE4E3C:
	// lwax r8,r9,r11
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee4e3c
	if (!ctx.cr0.eq) goto loc_82EE4E3C;
loc_82EE4E60:
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x82e6c460
	ctx.lr = 0x82EE4E90;
	sub_82E6C460(ctx, base);
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

__attribute__((alias("__imp__sub_82EE4EA4"))) PPC_WEAK_FUNC(sub_82EE4EA4);
PPC_FUNC_IMPL(__imp__sub_82EE4EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4EA8"))) PPC_WEAK_FUNC(sub_82EE4EA8);
PPC_FUNC_IMPL(__imp__sub_82EE4EA8) {
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
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x82e6c460
	ctx.lr = 0x82EE4EE4;
	sub_82E6C460(ctx, base);
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

__attribute__((alias("__imp__sub_82EE4EF8"))) PPC_WEAK_FUNC(sub_82EE4EF8);
PPC_FUNC_IMPL(__imp__sub_82EE4EF8) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82e6c6c0
	ctx.lr = 0x82EE4F0C;
	sub_82E6C6C0(ctx, base);
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

__attribute__((alias("__imp__sub_82EE4F20"))) PPC_WEAK_FUNC(sub_82EE4F20);
PPC_FUNC_IMPL(__imp__sub_82EE4F20) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82e6c6c0
	ctx.lr = 0x82EE4F34;
	sub_82E6C6C0(ctx, base);
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

__attribute__((alias("__imp__sub_82EE4F48"))) PPC_WEAK_FUNC(sub_82EE4F48);
PPC_FUNC_IMPL(__imp__sub_82EE4F48) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ee4f88
	if (ctx.cr6.eq) goto loc_82EE4F88;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82EE4F68:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee4f68
	if (!ctx.cr0.eq) goto loc_82EE4F68;
loc_82EE4F88:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82e6c6c0
	ctx.lr = 0x82EE4F90;
	sub_82E6C6C0(ctx, base);
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

__attribute__((alias("__imp__sub_82EE4FA4"))) PPC_WEAK_FUNC(sub_82EE4FA4);
PPC_FUNC_IMPL(__imp__sub_82EE4FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4FA8"))) PPC_WEAK_FUNC(sub_82EE4FA8);
PPC_FUNC_IMPL(__imp__sub_82EE4FA8) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ee4ff4
	if (ctx.cr6.eq) goto loc_82EE4FF4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// subf r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82EE4FD0:
	// lfsx f13,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82ee4fe4
	if (!ctx.cr6.eq) goto loc_82EE4FE4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EE4FE4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee4fd0
	if (!ctx.cr0.eq) goto loc_82EE4FD0;
loc_82EE4FF4:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82e6c6c0
	ctx.lr = 0x82EE4FFC;
	sub_82E6C6C0(ctx, base);
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

__attribute__((alias("__imp__sub_82EE5010"))) PPC_WEAK_FUNC(sub_82EE5010);
PPC_FUNC_IMPL(__imp__sub_82EE5010) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82e6c808
	ctx.lr = 0x82EE5024;
	sub_82E6C808(ctx, base);
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

__attribute__((alias("__imp__sub_82EE5038"))) PPC_WEAK_FUNC(sub_82EE5038);
PPC_FUNC_IMPL(__imp__sub_82EE5038) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm. r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ee5074
	if (ctx.cr0.eq) goto loc_82EE5074;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82EE5054:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee5054
	if (!ctx.cr0.eq) goto loc_82EE5054;
loc_82EE5074:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82e6c808
	ctx.lr = 0x82EE507C;
	sub_82E6C808(ctx, base);
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

__attribute__((alias("__imp__sub_82EE5090"))) PPC_WEAK_FUNC(sub_82EE5090);
PPC_FUNC_IMPL(__imp__sub_82EE5090) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82e6c808
	ctx.lr = 0x82EE50A4;
	sub_82E6C808(ctx, base);
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

__attribute__((alias("__imp__sub_82EE50B8"))) PPC_WEAK_FUNC(sub_82EE50B8);
PPC_FUNC_IMPL(__imp__sub_82EE50B8) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm. r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ee50ec
	if (ctx.cr0.eq) goto loc_82EE50EC;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82EE50D4:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee50d4
	if (!ctx.cr0.eq) goto loc_82EE50D4;
loc_82EE50EC:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82e6c808
	ctx.lr = 0x82EE50F4;
	sub_82E6C808(ctx, base);
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

__attribute__((alias("__imp__sub_82EE5108"))) PPC_WEAK_FUNC(sub_82EE5108);
PPC_FUNC_IMPL(__imp__sub_82EE5108) {
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
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x82e6c540
	ctx.lr = 0x82EE5144;
	sub_82E6C540(ctx, base);
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

__attribute__((alias("__imp__sub_82EE5158"))) PPC_WEAK_FUNC(sub_82EE5158);
PPC_FUNC_IMPL(__imp__sub_82EE5158) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm. r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ee51a8
	if (ctx.cr0.eq) goto loc_82EE51A8;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82EE5174:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee5174
	if (!ctx.cr0.eq) goto loc_82EE5174;
loc_82EE51A8:
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x82e6c540
	ctx.lr = 0x82EE51D8;
	sub_82E6C540(ctx, base);
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

__attribute__((alias("__imp__sub_82EE51EC"))) PPC_WEAK_FUNC(sub_82EE51EC);
PPC_FUNC_IMPL(__imp__sub_82EE51EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE51F0"))) PPC_WEAK_FUNC(sub_82EE51F0);
PPC_FUNC_IMPL(__imp__sub_82EE51F0) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm. r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ee5230
	if (ctx.cr0.eq) goto loc_82EE5230;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82EE520C:
	// lwax r8,r9,r11
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee520c
	if (!ctx.cr0.eq) goto loc_82EE520C;
loc_82EE5230:
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x82e6c540
	ctx.lr = 0x82EE5260;
	sub_82E6C540(ctx, base);
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

__attribute__((alias("__imp__sub_82EE5274"))) PPC_WEAK_FUNC(sub_82EE5274);
PPC_FUNC_IMPL(__imp__sub_82EE5274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE5278"))) PPC_WEAK_FUNC(sub_82EE5278);
PPC_FUNC_IMPL(__imp__sub_82EE5278) {
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
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x82e6c540
	ctx.lr = 0x82EE52B4;
	sub_82E6C540(ctx, base);
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

__attribute__((alias("__imp__sub_82EE52C8"))) PPC_WEAK_FUNC(sub_82EE52C8);
PPC_FUNC_IMPL(__imp__sub_82EE52C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EE52D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE52F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82cb1160
	ctx.lr = 0x82EE5304;
	sub_82CB1160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE5310"))) PPC_WEAK_FUNC(sub_82EE5310);
PPC_FUNC_IMPL(__imp__sub_82EE5310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EE5318;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm. r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ee536c
	if (ctx.cr0.eq) goto loc_82EE536C;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_82EE5338:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee5338
	if (!ctx.cr0.eq) goto loc_82EE5338;
loc_82EE536C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE537C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82cb1160
	ctx.lr = 0x82EE5390;
	sub_82CB1160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE539C"))) PPC_WEAK_FUNC(sub_82EE539C);
PPC_FUNC_IMPL(__imp__sub_82EE539C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE53A0"))) PPC_WEAK_FUNC(sub_82EE53A0);
PPC_FUNC_IMPL(__imp__sub_82EE53A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EE53A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm. r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ee53ec
	if (ctx.cr0.eq) goto loc_82EE53EC;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_82EE53C8:
	// lwax r8,r9,r11
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee53c8
	if (!ctx.cr0.eq) goto loc_82EE53C8;
loc_82EE53EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE53FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82cb1160
	ctx.lr = 0x82EE5410;
	sub_82CB1160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE541C"))) PPC_WEAK_FUNC(sub_82EE541C);
PPC_FUNC_IMPL(__imp__sub_82EE541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE5420"))) PPC_WEAK_FUNC(sub_82EE5420);
PPC_FUNC_IMPL(__imp__sub_82EE5420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EE5428;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE5448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82cb1160
	ctx.lr = 0x82EE545C;
	sub_82CB1160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE5468"))) PPC_WEAK_FUNC(sub_82EE5468);
PPC_FUNC_IMPL(__imp__sub_82EE5468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82EE5470;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r31,24(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r6,32(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82ee5620
	if (ctx.cr6.lt) goto loc_82EE5620;
	// beq cr6,0x82ee5618
	if (ctx.cr6.eq) goto loc_82EE5618;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82ee55f8
	if (ctx.cr6.lt) goto loc_82EE55F8;
	// beq cr6,0x82ee5554
	if (ctx.cr6.eq) goto loc_82EE5554;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x82ee54c0
	if (ctx.cr6.eq) goto loc_82EE54C0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82ee578c
	goto loc_82EE578C;
loc_82EE54C0:
	// lwz r9,52(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// divwu r27,r11,r9
	ctx.r27.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee54dc
	if (!ctx.cr6.gt) goto loc_82EE54DC;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_82EE54DC:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ee5788
	if (ctx.cr6.eq) goto loc_82EE5788;
loc_82EE54E8:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee5544
	if (ctx.cr0.eq) goto loc_82EE5544;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82EE54FC:
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x82ee5468
	ctx.lr = 0x82EE551C;
	sub_82EE5468(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee578c
	if (ctx.cr0.lt) goto loc_82EE578C;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// blt cr6,0x82ee54fc
	if (ctx.cr6.lt) goto loc_82EE54FC;
loc_82EE5544:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82ee54e8
	if (ctx.cr6.lt) goto loc_82EE54E8;
	// b 0x82ee5788
	goto loc_82EE5788;
loc_82EE5554:
	// lhz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mullw r8,r10,r7
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// divwu r28,r11,r8
	ctx.r28.u32 = ctx.r11.u32 / ctx.r8.u32;
	// twllei r8,0
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82ee5578
	if (!ctx.cr6.gt) goto loc_82EE5578;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
loc_82EE5578:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ee55f0
	if (ctx.cr6.eq) goto loc_82EE55F0;
loc_82EE5588:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ee55e4
	if (ctx.cr6.eq) goto loc_82EE55E4;
loc_82EE5594:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee55d4
	if (ctx.cr6.eq) goto loc_82EE55D4;
loc_82EE55A0:
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lhz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee55a0
	if (ctx.cr6.lt) goto loc_82EE55A0;
loc_82EE55D4:
	// lhz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82ee5594
	if (ctx.cr6.lt) goto loc_82EE5594;
loc_82EE55E4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82ee5588
	if (ctx.cr6.lt) goto loc_82EE5588;
loc_82EE55F0:
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// b 0x82ee5634
	goto loc_82EE5634;
loc_82EE55F8:
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
loc_82EE5604:
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// divwu r28,r11,r9
	ctx.r28.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// b 0x82ee562c
	goto loc_82EE562C;
loc_82EE5618:
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// b 0x82ee5604
	goto loc_82EE5604;
loc_82EE5620:
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82EE562C:
	// ble cr6,0x82ee5634
	if (!ctx.cr6.gt) goto loc_82EE5634;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_82EE5634:
	// lhz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82ee5738
	if (ctx.cr0.eq) goto loc_82EE5738;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82ee5658
	if (ctx.cr6.eq) goto loc_82EE5658;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// b 0x82ee5660
	goto loc_82EE5660;
loc_82EE5658:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
loc_82EE5660:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82ee5738
	if (ctx.cr0.eq) goto loc_82EE5738;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82ee567c
	if (!ctx.cr6.eq) goto loc_82EE567C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r27,r9,6720
	ctx.r27.s64 = ctx.r9.s64 + 6720;
	// b 0x82ee5684
	goto loc_82EE5684;
loc_82EE567C:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r27,r9,6704
	ctx.r27.s64 = ctx.r9.s64 + 6704;
loc_82EE5684:
	// mullw. r9,r10,r28
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x82ee5734
	if (ctx.cr0.eq) goto loc_82EE5734;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r5,r4,r11
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 + ctx.r25.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_82EE56C4:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subf r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r5,r29,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r29.s64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee5700
	if (!ctx.cr6.gt) goto loc_82EE5700;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82EE56E4:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// rlwinm r30,r8,2,28,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// lwzx r30,r30,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bgt cr6,0x82ee56e4
	if (ctx.cr6.gt) goto loc_82EE56E4;
loc_82EE5700:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee572c
	if (ctx.cr6.eq) goto loc_82EE572C;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82EE5714:
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r26,0(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// bne 0x82ee5714
	if (!ctx.cr0.eq) goto loc_82EE5714;
loc_82EE572C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ee56c4
	if (!ctx.cr6.eq) goto loc_82EE56C4;
loc_82EE5734:
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
loc_82EE5738:
	// lwz r10,44(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 12);
	// mullw r7,r10,r28
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee5750
	if (!ctx.cr6.gt) goto loc_82EE5750;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82EE5750:
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ee5768
	if (!ctx.cr6.eq) goto loc_82EE5768;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82ee578c
	goto loc_82EE578C;
loc_82EE5768:
	// lhz r11,10(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 10);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EE5780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee578c
	if (ctx.cr0.lt) goto loc_82EE578C;
loc_82EE5788:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE578C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE5794"))) PPC_WEAK_FUNC(sub_82EE5794);
PPC_FUNC_IMPL(__imp__sub_82EE5794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE5798"))) PPC_WEAK_FUNC(sub_82EE5798);
PPC_FUNC_IMPL(__imp__sub_82EE5798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82EE57A0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r31,24(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r6,32(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82ee5950
	if (ctx.cr6.lt) goto loc_82EE5950;
	// beq cr6,0x82ee5948
	if (ctx.cr6.eq) goto loc_82EE5948;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82ee5928
	if (ctx.cr6.lt) goto loc_82EE5928;
	// beq cr6,0x82ee5884
	if (ctx.cr6.eq) goto loc_82EE5884;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x82ee57f0
	if (ctx.cr6.eq) goto loc_82EE57F0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82ee5b60
	goto loc_82EE5B60;
loc_82EE57F0:
	// lwz r9,52(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// divwu r27,r11,r9
	ctx.r27.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee580c
	if (!ctx.cr6.gt) goto loc_82EE580C;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_82EE580C:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ee5b5c
	if (ctx.cr6.eq) goto loc_82EE5B5C;
loc_82EE5818:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee5874
	if (ctx.cr0.eq) goto loc_82EE5874;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82EE582C:
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x82ee5798
	ctx.lr = 0x82EE584C;
	sub_82EE5798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee5b60
	if (ctx.cr0.lt) goto loc_82EE5B60;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// blt cr6,0x82ee582c
	if (ctx.cr6.lt) goto loc_82EE582C;
loc_82EE5874:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82ee5818
	if (ctx.cr6.lt) goto loc_82EE5818;
	// b 0x82ee5b5c
	goto loc_82EE5B5C;
loc_82EE5884:
	// lhz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mullw r8,r10,r7
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// divwu r27,r11,r8
	ctx.r27.u32 = ctx.r11.u32 / ctx.r8.u32;
	// twllei r8,0
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82ee58a8
	if (!ctx.cr6.gt) goto loc_82EE58A8;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
loc_82EE58A8:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ee5920
	if (ctx.cr6.eq) goto loc_82EE5920;
loc_82EE58B8:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ee5914
	if (ctx.cr6.eq) goto loc_82EE5914;
loc_82EE58C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee5904
	if (ctx.cr6.eq) goto loc_82EE5904;
loc_82EE58D0:
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lhz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee58d0
	if (ctx.cr6.lt) goto loc_82EE58D0;
loc_82EE5904:
	// lhz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82ee58c4
	if (ctx.cr6.lt) goto loc_82EE58C4;
loc_82EE5914:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82ee58b8
	if (ctx.cr6.lt) goto loc_82EE58B8;
loc_82EE5920:
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// b 0x82ee5964
	goto loc_82EE5964;
loc_82EE5928:
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
loc_82EE5934:
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// divwu r27,r11,r9
	ctx.r27.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// b 0x82ee595c
	goto loc_82EE595C;
loc_82EE5948:
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// b 0x82ee5934
	goto loc_82EE5934;
loc_82EE5950:
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82EE595C:
	// ble cr6,0x82ee5964
	if (!ctx.cr6.gt) goto loc_82EE5964;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_82EE5964:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82ee5a08
	if (ctx.cr6.eq) goto loc_82EE5A08;
	// lwz r10,52(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// beq cr6,0x82ee59d4
	if (ctx.cr6.eq) goto loc_82EE59D4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82ee5a04
	if (!ctx.cr6.eq) goto loc_82EE5A04;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee5a04
	if (ctx.cr6.eq) goto loc_82EE5A04;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r9,r6,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r6.s64;
	// lfs f12,6048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
loc_82EE59A8:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82ee59bc
	if (ctx.cr6.eq) goto loc_82EE59BC;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82ee59c0
	goto loc_82EE59C0;
loc_82EE59BC:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82EE59C0:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee59a8
	if (!ctx.cr0.eq) goto loc_82EE59A8;
	// b 0x82ee5a04
	goto loc_82EE5A04;
loc_82EE59D4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee5a04
	if (ctx.cr6.eq) goto loc_82EE5A04;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r9,r6,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r6.s64;
loc_82EE59E4:
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee59e4
	if (!ctx.cr0.eq) goto loc_82EE59E4;
loc_82EE5A04:
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
loc_82EE5A08:
	// lhz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82ee5b0c
	if (ctx.cr0.eq) goto loc_82EE5B0C;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82ee5a2c
	if (ctx.cr6.eq) goto loc_82EE5A2C;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// b 0x82ee5a34
	goto loc_82EE5A34;
loc_82EE5A2C:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
loc_82EE5A34:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82ee5b0c
	if (ctx.cr0.eq) goto loc_82EE5B0C;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82ee5a50
	if (!ctx.cr6.eq) goto loc_82EE5A50;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r28,r9,6752
	ctx.r28.s64 = ctx.r9.s64 + 6752;
	// b 0x82ee5a58
	goto loc_82EE5A58;
loc_82EE5A50:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r28,r9,6736
	ctx.r28.s64 = ctx.r9.s64 + 6736;
loc_82EE5A58:
	// mullw. r9,r10,r27
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x82ee5b08
	if (ctx.cr0.eq) goto loc_82EE5B08;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r5,r4,r11
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_82EE5A98:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subf r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r5,r29,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r29.s64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee5ad4
	if (!ctx.cr6.gt) goto loc_82EE5AD4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82EE5AB8:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// rlwinm r30,r8,2,28,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// lwzx r30,r30,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bgt cr6,0x82ee5ab8
	if (ctx.cr6.gt) goto loc_82EE5AB8;
loc_82EE5AD4:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee5b00
	if (ctx.cr6.eq) goto loc_82EE5B00;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82EE5AE8:
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r26,0(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// bne 0x82ee5ae8
	if (!ctx.cr0.eq) goto loc_82EE5AE8;
loc_82EE5B00:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ee5a98
	if (!ctx.cr6.eq) goto loc_82EE5A98;
loc_82EE5B08:
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
loc_82EE5B0C:
	// lwz r10,44(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 12);
	// mullw r7,r10,r27
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee5b24
	if (!ctx.cr6.gt) goto loc_82EE5B24;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82EE5B24:
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ee5b3c
	if (!ctx.cr6.eq) goto loc_82EE5B3C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82ee5b60
	goto loc_82EE5B60;
loc_82EE5B3C:
	// lhz r11,10(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 10);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EE5B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee5b60
	if (ctx.cr0.lt) goto loc_82EE5B60;
loc_82EE5B5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE5B60:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE5B68"))) PPC_WEAK_FUNC(sub_82EE5B68);
PPC_FUNC_IMPL(__imp__sub_82EE5B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82EE5B70;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r31,24(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r6,32(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82ee5d20
	if (ctx.cr6.lt) goto loc_82EE5D20;
	// beq cr6,0x82ee5d18
	if (ctx.cr6.eq) goto loc_82EE5D18;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82ee5cf8
	if (ctx.cr6.lt) goto loc_82EE5CF8;
	// beq cr6,0x82ee5c54
	if (ctx.cr6.eq) goto loc_82EE5C54;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x82ee5bc0
	if (ctx.cr6.eq) goto loc_82EE5BC0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82ee5f1c
	goto loc_82EE5F1C;
loc_82EE5BC0:
	// lwz r9,52(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// divwu r27,r11,r9
	ctx.r27.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee5bdc
	if (!ctx.cr6.gt) goto loc_82EE5BDC;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_82EE5BDC:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ee5f18
	if (ctx.cr6.eq) goto loc_82EE5F18;
loc_82EE5BE8:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee5c44
	if (ctx.cr0.eq) goto loc_82EE5C44;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82EE5BFC:
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x82ee5b68
	ctx.lr = 0x82EE5C1C;
	sub_82EE5B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee5f1c
	if (ctx.cr0.lt) goto loc_82EE5F1C;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// blt cr6,0x82ee5bfc
	if (ctx.cr6.lt) goto loc_82EE5BFC;
loc_82EE5C44:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82ee5be8
	if (ctx.cr6.lt) goto loc_82EE5BE8;
	// b 0x82ee5f18
	goto loc_82EE5F18;
loc_82EE5C54:
	// lhz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mullw r8,r10,r7
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// divwu r27,r11,r8
	ctx.r27.u32 = ctx.r11.u32 / ctx.r8.u32;
	// twllei r8,0
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82ee5c78
	if (!ctx.cr6.gt) goto loc_82EE5C78;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
loc_82EE5C78:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ee5cf0
	if (ctx.cr6.eq) goto loc_82EE5CF0;
loc_82EE5C88:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ee5ce4
	if (ctx.cr6.eq) goto loc_82EE5CE4;
loc_82EE5C94:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee5cd4
	if (ctx.cr6.eq) goto loc_82EE5CD4;
loc_82EE5CA0:
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lhz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee5ca0
	if (ctx.cr6.lt) goto loc_82EE5CA0;
loc_82EE5CD4:
	// lhz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82ee5c94
	if (ctx.cr6.lt) goto loc_82EE5C94;
loc_82EE5CE4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82ee5c88
	if (ctx.cr6.lt) goto loc_82EE5C88;
loc_82EE5CF0:
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// b 0x82ee5d34
	goto loc_82EE5D34;
loc_82EE5CF8:
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
loc_82EE5D04:
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// divwu r27,r11,r9
	ctx.r27.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// b 0x82ee5d2c
	goto loc_82EE5D2C;
loc_82EE5D18:
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// b 0x82ee5d04
	goto loc_82EE5D04;
loc_82EE5D20:
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82EE5D2C:
	// ble cr6,0x82ee5d34
	if (!ctx.cr6.gt) goto loc_82EE5D34;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_82EE5D34:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82ee5dc4
	if (ctx.cr6.eq) goto loc_82EE5DC4;
	// lwz r10,52(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// beq cr6,0x82ee5d90
	if (ctx.cr6.eq) goto loc_82EE5D90;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82ee5dc0
	if (!ctx.cr6.eq) goto loc_82EE5DC0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee5dc0
	if (ctx.cr6.eq) goto loc_82EE5DC0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r9,r6,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r6.s64;
loc_82EE5D68:
	// lwax r8,r9,r11
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee5d68
	if (!ctx.cr0.eq) goto loc_82EE5D68;
	// b 0x82ee5dc0
	goto loc_82EE5DC0;
loc_82EE5D90:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee5dc0
	if (ctx.cr6.eq) goto loc_82EE5DC0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r9,r6,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r6.s64;
loc_82EE5DA0:
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee5da0
	if (!ctx.cr0.eq) goto loc_82EE5DA0;
loc_82EE5DC0:
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
loc_82EE5DC4:
	// lhz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82ee5ec8
	if (ctx.cr0.eq) goto loc_82EE5EC8;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82ee5de8
	if (ctx.cr6.eq) goto loc_82EE5DE8;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// b 0x82ee5df0
	goto loc_82EE5DF0;
loc_82EE5DE8:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
loc_82EE5DF0:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82ee5ec8
	if (ctx.cr0.eq) goto loc_82EE5EC8;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82ee5e0c
	if (!ctx.cr6.eq) goto loc_82EE5E0C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r28,r9,6784
	ctx.r28.s64 = ctx.r9.s64 + 6784;
	// b 0x82ee5e14
	goto loc_82EE5E14;
loc_82EE5E0C:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r28,r9,6768
	ctx.r28.s64 = ctx.r9.s64 + 6768;
loc_82EE5E14:
	// mullw. r9,r10,r27
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x82ee5ec4
	if (ctx.cr0.eq) goto loc_82EE5EC4;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r5,r4,r11
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_82EE5E54:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subf r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r5,r29,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r29.s64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee5e90
	if (!ctx.cr6.gt) goto loc_82EE5E90;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82EE5E74:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// rlwinm r30,r8,2,28,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// lwzx r30,r30,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bgt cr6,0x82ee5e74
	if (ctx.cr6.gt) goto loc_82EE5E74;
loc_82EE5E90:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee5ebc
	if (ctx.cr6.eq) goto loc_82EE5EBC;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82EE5EA4:
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r26,0(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// bne 0x82ee5ea4
	if (!ctx.cr0.eq) goto loc_82EE5EA4;
loc_82EE5EBC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ee5e54
	if (!ctx.cr6.eq) goto loc_82EE5E54;
loc_82EE5EC4:
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
loc_82EE5EC8:
	// lwz r10,44(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 12);
	// mullw r7,r10,r27
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee5ee0
	if (!ctx.cr6.gt) goto loc_82EE5EE0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82EE5EE0:
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ee5ef8
	if (!ctx.cr6.eq) goto loc_82EE5EF8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82ee5f1c
	goto loc_82EE5F1C;
loc_82EE5EF8:
	// lhz r11,10(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 10);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EE5F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee5f1c
	if (ctx.cr0.lt) goto loc_82EE5F1C;
loc_82EE5F18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE5F1C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE5F24"))) PPC_WEAK_FUNC(sub_82EE5F24);
PPC_FUNC_IMPL(__imp__sub_82EE5F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE5F28"))) PPC_WEAK_FUNC(sub_82EE5F28);
PPC_FUNC_IMPL(__imp__sub_82EE5F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82EE5F30;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r31,24(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r6,32(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82ee60e0
	if (ctx.cr6.lt) goto loc_82EE60E0;
	// beq cr6,0x82ee60d8
	if (ctx.cr6.eq) goto loc_82EE60D8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82ee60b8
	if (ctx.cr6.lt) goto loc_82EE60B8;
	// beq cr6,0x82ee6014
	if (ctx.cr6.eq) goto loc_82EE6014;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x82ee5f80
	if (ctx.cr6.eq) goto loc_82EE5F80;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82ee62dc
	goto loc_82EE62DC;
loc_82EE5F80:
	// lwz r9,52(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// divwu r27,r11,r9
	ctx.r27.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee5f9c
	if (!ctx.cr6.gt) goto loc_82EE5F9C;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_82EE5F9C:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ee62d8
	if (ctx.cr6.eq) goto loc_82EE62D8;
loc_82EE5FA8:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee6004
	if (ctx.cr0.eq) goto loc_82EE6004;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82EE5FBC:
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x82ee5f28
	ctx.lr = 0x82EE5FDC;
	sub_82EE5F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee62dc
	if (ctx.cr0.lt) goto loc_82EE62DC;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// blt cr6,0x82ee5fbc
	if (ctx.cr6.lt) goto loc_82EE5FBC;
loc_82EE6004:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82ee5fa8
	if (ctx.cr6.lt) goto loc_82EE5FA8;
	// b 0x82ee62d8
	goto loc_82EE62D8;
loc_82EE6014:
	// lhz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mullw r8,r10,r7
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// divwu r27,r11,r8
	ctx.r27.u32 = ctx.r11.u32 / ctx.r8.u32;
	// twllei r8,0
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82ee6038
	if (!ctx.cr6.gt) goto loc_82EE6038;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
loc_82EE6038:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ee60b0
	if (ctx.cr6.eq) goto loc_82EE60B0;
loc_82EE6048:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ee60a4
	if (ctx.cr6.eq) goto loc_82EE60A4;
loc_82EE6054:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee6094
	if (ctx.cr6.eq) goto loc_82EE6094;
loc_82EE6060:
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lhz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee6060
	if (ctx.cr6.lt) goto loc_82EE6060;
loc_82EE6094:
	// lhz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82ee6054
	if (ctx.cr6.lt) goto loc_82EE6054;
loc_82EE60A4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82ee6048
	if (ctx.cr6.lt) goto loc_82EE6048;
loc_82EE60B0:
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// b 0x82ee60f4
	goto loc_82EE60F4;
loc_82EE60B8:
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
loc_82EE60C4:
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// divwu r27,r11,r9
	ctx.r27.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// b 0x82ee60ec
	goto loc_82EE60EC;
loc_82EE60D8:
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// b 0x82ee60c4
	goto loc_82EE60C4;
loc_82EE60E0:
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82EE60EC:
	// ble cr6,0x82ee60f4
	if (!ctx.cr6.gt) goto loc_82EE60F4;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_82EE60F4:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82ee6184
	if (ctx.cr6.eq) goto loc_82EE6184;
	// lwz r10,52(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// beq cr6,0x82ee6144
	if (ctx.cr6.eq) goto loc_82EE6144;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ee6180
	if (!ctx.cr6.eq) goto loc_82EE6180;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee6180
	if (ctx.cr6.eq) goto loc_82EE6180;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r9,r6,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r6.s64;
loc_82EE6128:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee6128
	if (!ctx.cr0.eq) goto loc_82EE6128;
	// b 0x82ee6180
	goto loc_82EE6180;
loc_82EE6144:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee6180
	if (ctx.cr6.eq) goto loc_82EE6180;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r8,r6,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r6.s64;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82EE615C:
	// lfsx f13,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82ee6170
	if (!ctx.cr6.eq) goto loc_82EE6170;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EE6170:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee615c
	if (!ctx.cr0.eq) goto loc_82EE615C;
loc_82EE6180:
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
loc_82EE6184:
	// lhz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82ee6288
	if (ctx.cr0.eq) goto loc_82EE6288;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82ee61a8
	if (ctx.cr6.eq) goto loc_82EE61A8;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// b 0x82ee61b0
	goto loc_82EE61B0;
loc_82EE61A8:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
loc_82EE61B0:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82ee6288
	if (ctx.cr0.eq) goto loc_82EE6288;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82ee61cc
	if (!ctx.cr6.eq) goto loc_82EE61CC;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r28,r9,6816
	ctx.r28.s64 = ctx.r9.s64 + 6816;
	// b 0x82ee61d4
	goto loc_82EE61D4;
loc_82EE61CC:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r28,r9,6800
	ctx.r28.s64 = ctx.r9.s64 + 6800;
loc_82EE61D4:
	// mullw. r9,r10,r27
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x82ee6284
	if (ctx.cr0.eq) goto loc_82EE6284;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r5,r4,r11
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_82EE6214:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subf r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r5,r29,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r29.s64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee6250
	if (!ctx.cr6.gt) goto loc_82EE6250;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82EE6234:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// rlwinm r30,r8,2,28,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// lwzx r30,r30,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bgt cr6,0x82ee6234
	if (ctx.cr6.gt) goto loc_82EE6234;
loc_82EE6250:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee627c
	if (ctx.cr6.eq) goto loc_82EE627C;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82EE6264:
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r26,0(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// bne 0x82ee6264
	if (!ctx.cr0.eq) goto loc_82EE6264;
loc_82EE627C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ee6214
	if (!ctx.cr6.eq) goto loc_82EE6214;
loc_82EE6284:
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
loc_82EE6288:
	// lwz r10,44(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 12);
	// mullw r7,r10,r27
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee62a0
	if (!ctx.cr6.gt) goto loc_82EE62A0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82EE62A0:
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ee62b8
	if (!ctx.cr6.eq) goto loc_82EE62B8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82ee62dc
	goto loc_82EE62DC;
loc_82EE62B8:
	// lhz r11,10(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 10);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EE62D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee62dc
	if (ctx.cr0.lt) goto loc_82EE62DC;
loc_82EE62D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE62DC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE62E4"))) PPC_WEAK_FUNC(sub_82EE62E4);
PPC_FUNC_IMPL(__imp__sub_82EE62E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE62E8"))) PPC_WEAK_FUNC(sub_82EE62E8);
PPC_FUNC_IMPL(__imp__sub_82EE62E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82EE62F0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r25,24(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r6,32(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lhz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82ee65bc
	if (ctx.cr6.lt) goto loc_82EE65BC;
	// beq cr6,0x82ee6534
	if (ctx.cr6.eq) goto loc_82EE6534;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82ee6480
	if (ctx.cr6.lt) goto loc_82EE6480;
	// beq cr6,0x82ee63d8
	if (ctx.cr6.eq) goto loc_82EE63D8;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x82ee6340
	if (ctx.cr6.eq) goto loc_82EE6340;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82ee67b8
	goto loc_82EE67B8;
loc_82EE6340:
	// lwz r10,52(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// divwu r28,r9,r10
	ctx.r28.u32 = ctx.r9.u32 / ctx.r10.u32;
	// twllei r10,0
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee6360
	if (!ctx.cr6.gt) goto loc_82EE6360;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82EE6360:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ee67b4
	if (ctx.cr6.eq) goto loc_82EE67B4;
loc_82EE636C:
	// lhz r11,10(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 10);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee63c8
	if (ctx.cr0.eq) goto loc_82EE63C8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EE6380:
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82ee5f28
	ctx.lr = 0x82EE63A0;
	sub_82EE5F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee67b8
	if (ctx.cr0.lt) goto loc_82EE67B8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lhz r10,10(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 10);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// blt cr6,0x82ee6380
	if (ctx.cr6.lt) goto loc_82EE6380;
loc_82EE63C8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82ee636c
	if (ctx.cr6.lt) goto loc_82EE636C;
	// b 0x82ee67b4
	goto loc_82EE67B4;
loc_82EE63D8:
	// lhz r9,6(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// divwu r26,r11,r9
	ctx.r26.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee63f4
	if (!ctx.cr6.gt) goto loc_82EE63F4;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82EE63F4:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ee65b4
	if (ctx.cr6.eq) goto loc_82EE65B4;
loc_82EE6404:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ee6470
	if (ctx.cr6.eq) goto loc_82EE6470;
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
loc_82EE6414:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee6460
	if (ctx.cr6.eq) goto loc_82EE6460;
loc_82EE6420:
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// ble cr6,0x82ee6430
	if (!ctx.cr6.gt) goto loc_82EE6430;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82ee6448
	goto loc_82EE6448;
loc_82EE6430:
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_82EE6448:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee6420
	if (ctx.cr6.lt) goto loc_82EE6420;
loc_82EE6460:
	// lhz r9,6(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ee6414
	if (ctx.cr6.lt) goto loc_82EE6414;
loc_82EE6470:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82ee6404
	if (ctx.cr6.lt) goto loc_82EE6404;
	// b 0x82ee65b4
	goto loc_82EE65B4;
loc_82EE6480:
	// lhz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// divwu r26,r11,r8
	ctx.r26.u32 = ctx.r11.u32 / ctx.r8.u32;
	// twllei r8,0
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee649c
	if (!ctx.cr6.gt) goto loc_82EE649C;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82EE649C:
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82ee65d0
	if (ctx.cr6.eq) goto loc_82EE65D0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ee65b4
	if (ctx.cr6.eq) goto loc_82EE65B4;
loc_82EE64B8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ee6524
	if (ctx.cr6.eq) goto loc_82EE6524;
loc_82EE64C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee6514
	if (ctx.cr6.eq) goto loc_82EE6514;
loc_82EE64D0:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x82ee64e0
	if (!ctx.cr6.gt) goto loc_82EE64E0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82ee64fc
	goto loc_82EE64FC;
loc_82EE64E0:
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_82EE64FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee64d0
	if (ctx.cr6.lt) goto loc_82EE64D0;
loc_82EE6514:
	// lhz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82ee64c4
	if (ctx.cr6.lt) goto loc_82EE64C4;
loc_82EE6524:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82ee64b8
	if (ctx.cr6.lt) goto loc_82EE64B8;
	// b 0x82ee65b4
	goto loc_82EE65B4;
loc_82EE6534:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee6548
	if (!ctx.cr6.gt) goto loc_82EE6548;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82EE6548:
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82ee65d0
	if (ctx.cr6.eq) goto loc_82EE65D0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ee65b4
	if (ctx.cr6.eq) goto loc_82EE65B4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
loc_82EE6568:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee65a8
	if (ctx.cr6.eq) goto loc_82EE65A8;
loc_82EE6574:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x82ee6584
	if (!ctx.cr6.gt) goto loc_82EE6584;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82ee6590
	goto loc_82EE6590;
loc_82EE6584:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_82EE6590:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee6574
	if (ctx.cr6.lt) goto loc_82EE6574;
loc_82EE65A8:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82ee6568
	if (!ctx.cr0.eq) goto loc_82EE6568;
loc_82EE65B4:
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// b 0x82ee65d0
	goto loc_82EE65D0;
loc_82EE65BC:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee65d0
	if (!ctx.cr6.gt) goto loc_82EE65D0;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82EE65D0:
	// lhz r11,2(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 2);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82ee6660
	if (ctx.cr6.eq) goto loc_82EE6660;
	// lwz r10,52(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// beq cr6,0x82ee6620
	if (ctx.cr6.eq) goto loc_82EE6620;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ee665c
	if (!ctx.cr6.eq) goto loc_82EE665C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee665c
	if (ctx.cr6.eq) goto loc_82EE665C;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r9,r6,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r6.s64;
loc_82EE6604:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee6604
	if (!ctx.cr0.eq) goto loc_82EE6604;
	// b 0x82ee665c
	goto loc_82EE665C;
loc_82EE6620:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee665c
	if (ctx.cr6.eq) goto loc_82EE665C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r8,r6,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r6.s64;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82EE6638:
	// lfsx f13,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82ee664c
	if (!ctx.cr6.eq) goto loc_82EE664C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EE664C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee6638
	if (!ctx.cr0.eq) goto loc_82EE6638;
loc_82EE665C:
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
loc_82EE6660:
	// lhz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82ee6764
	if (ctx.cr0.eq) goto loc_82EE6764;
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82ee6684
	if (ctx.cr6.eq) goto loc_82EE6684;
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// b 0x82ee668c
	goto loc_82EE668C;
loc_82EE6684:
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
loc_82EE668C:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82ee6764
	if (ctx.cr0.eq) goto loc_82EE6764;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82ee66a8
	if (!ctx.cr6.eq) goto loc_82EE66A8;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r28,r9,6848
	ctx.r28.s64 = ctx.r9.s64 + 6848;
	// b 0x82ee66b0
	goto loc_82EE66B0;
loc_82EE66A8:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r28,r9,6832
	ctx.r28.s64 = ctx.r9.s64 + 6832;
loc_82EE66B0:
	// mullw. r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x82ee6760
	if (ctx.cr0.eq) goto loc_82EE6760;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r5,r4,r11
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_82EE66F0:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subf r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r5,r29,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r29.s64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee672c
	if (!ctx.cr6.gt) goto loc_82EE672C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82EE6710:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// rlwinm r30,r8,2,28,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// lwzx r30,r30,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bgt cr6,0x82ee6710
	if (ctx.cr6.gt) goto loc_82EE6710;
loc_82EE672C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee6758
	if (ctx.cr6.eq) goto loc_82EE6758;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82EE6740:
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r27,0(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// bne 0x82ee6740
	if (!ctx.cr0.eq) goto loc_82EE6740;
loc_82EE6758:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ee66f0
	if (!ctx.cr6.eq) goto loc_82EE66F0;
loc_82EE6760:
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
loc_82EE6764:
	// lwz r10,44(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 12);
	// mullw r7,r10,r26
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee677c
	if (!ctx.cr6.gt) goto loc_82EE677C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82EE677C:
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ee6794
	if (!ctx.cr6.eq) goto loc_82EE6794;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82ee67b8
	goto loc_82EE67B8;
loc_82EE6794:
	// lhz r11,10(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 10);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EE67AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee67b8
	if (ctx.cr0.lt) goto loc_82EE67B8;
loc_82EE67B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE67B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE67C0"))) PPC_WEAK_FUNC(sub_82EE67C0);
PPC_FUNC_IMPL(__imp__sub_82EE67C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82EE67C8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r25,24(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r6,32(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lhz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82ee6b70
	if (ctx.cr6.lt) goto loc_82EE6B70;
	// beq cr6,0x82ee6adc
	if (ctx.cr6.eq) goto loc_82EE6ADC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82ee6a1c
	if (ctx.cr6.lt) goto loc_82EE6A1C;
	// beq cr6,0x82ee68b0
	if (ctx.cr6.eq) goto loc_82EE68B0;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x82ee6818
	if (ctx.cr6.eq) goto loc_82EE6818;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82ee6d6c
	goto loc_82EE6D6C;
loc_82EE6818:
	// lwz r10,52(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// divwu r28,r9,r10
	ctx.r28.u32 = ctx.r9.u32 / ctx.r10.u32;
	// twllei r10,0
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee6838
	if (!ctx.cr6.gt) goto loc_82EE6838;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82EE6838:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ee6d68
	if (ctx.cr6.eq) goto loc_82EE6D68;
loc_82EE6844:
	// lhz r11,10(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 10);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee68a0
	if (ctx.cr0.eq) goto loc_82EE68A0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EE6858:
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82ee5f28
	ctx.lr = 0x82EE6878;
	sub_82EE5F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee6d6c
	if (ctx.cr0.lt) goto loc_82EE6D6C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lhz r10,10(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 10);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// blt cr6,0x82ee6858
	if (ctx.cr6.lt) goto loc_82EE6858;
loc_82EE68A0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82ee6844
	if (ctx.cr6.lt) goto loc_82EE6844;
	// b 0x82ee6d68
	goto loc_82EE6D68;
loc_82EE68B0:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee68c4
	if (!ctx.cr6.gt) goto loc_82EE68C4;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82EE68C4:
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82ee6988
	if (!ctx.cr6.eq) goto loc_82EE6988;
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82ee6988
	if (!ctx.cr6.eq) goto loc_82EE6988;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ee6b68
	if (ctx.cr6.eq) goto loc_82EE6B68;
	// addi r10,r6,8
	ctx.r10.s64 = ctx.r6.s64 + 8;
	// addi r11,r5,32
	ctx.r11.s64 = ctx.r5.s64 + 32;
	// subf r8,r5,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r5.s64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82EE68F4:
	// lfs f0,-32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f0,-8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f0,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lfs f0,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lfs f0,-20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stfs f0,52(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bne 0x82ee68f4
	if (!ctx.cr0.eq) goto loc_82EE68F4;
	// b 0x82ee6b68
	goto loc_82EE6B68;
loc_82EE6988:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ee6b68
	if (ctx.cr6.eq) goto loc_82EE6B68;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82EE699C:
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee6a0c
	if (ctx.cr0.eq) goto loc_82EE6A0C;
loc_82EE69AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee69fc
	if (ctx.cr6.eq) goto loc_82EE69FC;
loc_82EE69B8:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82ee69e0
	if (ctx.cr6.gt) goto loc_82EE69E0;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x82ee69e0
	if (ctx.cr6.gt) goto loc_82EE69E0;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// b 0x82ee69e4
	goto loc_82EE69E4;
loc_82EE69E0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EE69E4:
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee69b8
	if (ctx.cr6.lt) goto loc_82EE69B8;
loc_82EE69FC:
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee69ac
	if (ctx.cr6.lt) goto loc_82EE69AC;
loc_82EE6A0C:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82ee699c
	if (!ctx.cr0.eq) goto loc_82EE699C;
	// b 0x82ee6b68
	goto loc_82EE6B68;
loc_82EE6A1C:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee6a30
	if (!ctx.cr6.gt) goto loc_82EE6A30;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82EE6A30:
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82ee6a48
	if (!ctx.cr6.eq) goto loc_82EE6A48;
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82ee6b84
	if (ctx.cr6.eq) goto loc_82EE6B84;
loc_82EE6A48:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ee6b68
	if (ctx.cr6.eq) goto loc_82EE6B68;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82EE6A5C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee6acc
	if (ctx.cr6.eq) goto loc_82EE6ACC;
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
loc_82EE6A6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee6abc
	if (ctx.cr6.eq) goto loc_82EE6ABC;
loc_82EE6A78:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x82ee6aa0
	if (ctx.cr6.gt) goto loc_82EE6AA0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82ee6aa0
	if (ctx.cr6.gt) goto loc_82EE6AA0;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// b 0x82ee6aa4
	goto loc_82EE6AA4;
loc_82EE6AA0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EE6AA4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee6a78
	if (ctx.cr6.lt) goto loc_82EE6A78;
loc_82EE6ABC:
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee6a6c
	if (ctx.cr6.lt) goto loc_82EE6A6C;
loc_82EE6ACC:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82ee6a5c
	if (!ctx.cr0.eq) goto loc_82EE6A5C;
	// b 0x82ee6b68
	goto loc_82EE6B68;
loc_82EE6ADC:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee6af0
	if (!ctx.cr6.gt) goto loc_82EE6AF0;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82EE6AF0:
	// lhz r9,6(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x82ee6b84
	if (ctx.cr6.eq) goto loc_82EE6B84;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ee6b68
	if (ctx.cr6.eq) goto loc_82EE6B68;
loc_82EE6B0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ee6b5c
	if (ctx.cr6.eq) goto loc_82EE6B5C;
loc_82EE6B18:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x82ee6b28
	if (!ctx.cr6.gt) goto loc_82EE6B28;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82ee6b44
	goto loc_82EE6B44;
loc_82EE6B28:
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
loc_82EE6B44:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// lhz r9,6(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ee6b18
	if (ctx.cr6.lt) goto loc_82EE6B18;
loc_82EE6B5C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82ee6b0c
	if (ctx.cr6.lt) goto loc_82EE6B0C;
loc_82EE6B68:
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// b 0x82ee6b84
	goto loc_82EE6B84;
loc_82EE6B70:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// rlwinm r26,r11,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee6b84
	if (!ctx.cr6.gt) goto loc_82EE6B84;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82EE6B84:
	// lhz r11,2(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 2);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82ee6c14
	if (ctx.cr6.eq) goto loc_82EE6C14;
	// lwz r10,52(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// beq cr6,0x82ee6bd4
	if (ctx.cr6.eq) goto loc_82EE6BD4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ee6c10
	if (!ctx.cr6.eq) goto loc_82EE6C10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee6c10
	if (ctx.cr6.eq) goto loc_82EE6C10;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r9,r6,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r6.s64;
loc_82EE6BB8:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee6bb8
	if (!ctx.cr0.eq) goto loc_82EE6BB8;
	// b 0x82ee6c10
	goto loc_82EE6C10;
loc_82EE6BD4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee6c10
	if (ctx.cr6.eq) goto loc_82EE6C10;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r8,r6,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r6.s64;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82EE6BEC:
	// lfsx f13,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82ee6c00
	if (!ctx.cr6.eq) goto loc_82EE6C00;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EE6C00:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee6bec
	if (!ctx.cr0.eq) goto loc_82EE6BEC;
loc_82EE6C10:
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
loc_82EE6C14:
	// lhz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82ee6d18
	if (ctx.cr0.eq) goto loc_82EE6D18;
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82ee6c38
	if (ctx.cr6.eq) goto loc_82EE6C38;
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// b 0x82ee6c40
	goto loc_82EE6C40;
loc_82EE6C38:
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
loc_82EE6C40:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82ee6d18
	if (ctx.cr0.eq) goto loc_82EE6D18;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82ee6c5c
	if (!ctx.cr6.eq) goto loc_82EE6C5C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r28,r9,6880
	ctx.r28.s64 = ctx.r9.s64 + 6880;
	// b 0x82ee6c64
	goto loc_82EE6C64;
loc_82EE6C5C:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r28,r9,6864
	ctx.r28.s64 = ctx.r9.s64 + 6864;
loc_82EE6C64:
	// mullw. r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x82ee6d14
	if (ctx.cr0.eq) goto loc_82EE6D14;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r5,r4,r11
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_82EE6CA4:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subf r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r5,r29,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r29.s64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee6ce0
	if (!ctx.cr6.gt) goto loc_82EE6CE0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82EE6CC4:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// rlwinm r30,r8,2,28,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// lwzx r30,r30,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bgt cr6,0x82ee6cc4
	if (ctx.cr6.gt) goto loc_82EE6CC4;
loc_82EE6CE0:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee6d0c
	if (ctx.cr6.eq) goto loc_82EE6D0C;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82EE6CF4:
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r27,0(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// bne 0x82ee6cf4
	if (!ctx.cr0.eq) goto loc_82EE6CF4;
loc_82EE6D0C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ee6ca4
	if (!ctx.cr6.eq) goto loc_82EE6CA4;
loc_82EE6D14:
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
loc_82EE6D18:
	// lwz r10,44(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 12);
	// mullw r7,r10,r26
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee6d30
	if (!ctx.cr6.gt) goto loc_82EE6D30;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82EE6D30:
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ee6d48
	if (!ctx.cr6.eq) goto loc_82EE6D48;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82ee6d6c
	goto loc_82EE6D6C;
loc_82EE6D48:
	// lhz r11,10(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 10);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EE6D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee6d6c
	if (ctx.cr0.lt) goto loc_82EE6D6C;
loc_82EE6D68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE6D6C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE6D74"))) PPC_WEAK_FUNC(sub_82EE6D74);
PPC_FUNC_IMPL(__imp__sub_82EE6D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE6D78"))) PPC_WEAK_FUNC(sub_82EE6D78);
PPC_FUNC_IMPL(__imp__sub_82EE6D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82EE6D80;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r25,24(r23)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// lwz r6,32(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// lhz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82ee7080
	if (ctx.cr6.lt) goto loc_82EE7080;
	// beq cr6,0x82ee6ffc
	if (ctx.cr6.eq) goto loc_82EE6FFC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82ee6f50
	if (ctx.cr6.lt) goto loc_82EE6F50;
	// beq cr6,0x82ee6eac
	if (ctx.cr6.eq) goto loc_82EE6EAC;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x82ee6dd0
	if (ctx.cr6.eq) goto loc_82EE6DD0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82ee72ac
	goto loc_82EE72AC;
loc_82EE6DD0:
	// lwz r10,52(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 52);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// divwu r27,r9,r10
	ctx.r27.u32 = ctx.r9.u32 / ctx.r10.u32;
	// twllei r10,0
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee6df0
	if (!ctx.cr6.gt) goto loc_82EE6DF0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82EE6DF0:
	// mullw. r9,r10,r27
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82ee6e30
	if (ctx.cr0.eq) goto loc_82EE6E30;
loc_82EE6E00:
	// rlwinm r7,r11,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r5,r11,30,2,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwzx r7,r5,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x82ee6e00
	if (ctx.cr6.lt) goto loc_82EE6E00;
loc_82EE6E30:
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ee72a8
	if (ctx.cr6.eq) goto loc_82EE72A8;
loc_82EE6E40:
	// lhz r11,10(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 10);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee6e9c
	if (ctx.cr0.eq) goto loc_82EE6E9C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EE6E54:
	// lwz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82ee5f28
	ctx.lr = 0x82EE6E74;
	sub_82EE5F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee72ac
	if (ctx.cr0.lt) goto loc_82EE72AC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lhz r10,10(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 10);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// blt cr6,0x82ee6e54
	if (ctx.cr6.lt) goto loc_82EE6E54;
loc_82EE6E9C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82ee6e40
	if (ctx.cr6.lt) goto loc_82EE6E40;
	// b 0x82ee72a8
	goto loc_82EE72A8;
loc_82EE6EAC:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee6ec0
	if (!ctx.cr6.gt) goto loc_82EE6EC0;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
loc_82EE6EC0:
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ee70d4
	if (ctx.cr6.eq) goto loc_82EE70D4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82EE6ED0:
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee6f40
	if (ctx.cr0.eq) goto loc_82EE6F40;
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
loc_82EE6EE4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee6f30
	if (ctx.cr6.eq) goto loc_82EE6F30;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EE6EF4:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x82ee6f10
	if (ctx.cr6.gt) goto loc_82EE6F10;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bgt cr6,0x82ee6f10
	if (ctx.cr6.gt) goto loc_82EE6F10;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82ee6f14
	goto loc_82EE6F14;
loc_82EE6F10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EE6F14:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee6ef4
	if (ctx.cr6.lt) goto loc_82EE6EF4;
loc_82EE6F30:
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee6ee4
	if (ctx.cr6.lt) goto loc_82EE6EE4;
loc_82EE6F40:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82ee6ed0
	if (!ctx.cr0.eq) goto loc_82EE6ED0;
	// b 0x82ee70d4
	goto loc_82EE70D4;
loc_82EE6F50:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee6f64
	if (!ctx.cr6.gt) goto loc_82EE6F64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
loc_82EE6F64:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ee70d4
	if (ctx.cr6.eq) goto loc_82EE70D4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82EE6F74:
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee6fec
	if (ctx.cr0.eq) goto loc_82EE6FEC;
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EE6F8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee6fd8
	if (ctx.cr6.eq) goto loc_82EE6FD8;
loc_82EE6F98:
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bgt cr6,0x82ee6fbc
	if (ctx.cr6.gt) goto loc_82EE6FBC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82ee6fbc
	if (ctx.cr6.gt) goto loc_82EE6FBC;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// b 0x82ee6fc0
	goto loc_82EE6FC0;
loc_82EE6FBC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EE6FC0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee6f98
	if (ctx.cr6.lt) goto loc_82EE6F98;
loc_82EE6FD8:
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee6f8c
	if (ctx.cr6.lt) goto loc_82EE6F8C;
loc_82EE6FEC:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82ee6f74
	if (!ctx.cr0.eq) goto loc_82EE6F74;
	// b 0x82ee70d4
	goto loc_82EE70D4;
loc_82EE6FFC:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// rlwinm r24,r11,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee7010
	if (!ctx.cr6.gt) goto loc_82EE7010;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
loc_82EE7010:
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ee70d4
	if (ctx.cr6.eq) goto loc_82EE70D4;
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
loc_82EE7024:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee7070
	if (ctx.cr6.eq) goto loc_82EE7070;
loc_82EE7030:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x82ee7040
	if (!ctx.cr6.gt) goto loc_82EE7040;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82ee7058
	goto loc_82EE7058;
loc_82EE7040:
	// rlwinm r10,r9,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
loc_82EE7058:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee7030
	if (ctx.cr6.lt) goto loc_82EE7030;
loc_82EE7070:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82ee7024
	if (ctx.cr6.lt) goto loc_82EE7024;
	// b 0x82ee70d4
	goto loc_82EE70D4;
loc_82EE7080:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// rlwinm r24,r11,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee7094
	if (!ctx.cr6.gt) goto loc_82EE7094;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
loc_82EE7094:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ee70d4
	if (ctx.cr6.eq) goto loc_82EE70D4;
loc_82EE70A4:
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r9,r11,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// rlwinm r7,r11,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// lwzx r8,r7,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x82ee70a4
	if (ctx.cr6.lt) goto loc_82EE70A4;
loc_82EE70D4:
	// lhz r10,2(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 2);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82ee7158
	if (ctx.cr6.eq) goto loc_82EE7158;
	// lwz r11,52(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 52);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// beq cr6,0x82ee7120
	if (ctx.cr6.eq) goto loc_82EE7120;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82ee7158
	if (!ctx.cr6.eq) goto loc_82EE7158;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee7158
	if (ctx.cr6.eq) goto loc_82EE7158;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82EE7104:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82ee7104
	if (!ctx.cr0.eq) goto loc_82EE7104;
	// b 0x82ee7158
	goto loc_82EE7158;
loc_82EE7120:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee7158
	if (ctx.cr6.eq) goto loc_82EE7158;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82EE7134:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82ee7148
	if (!ctx.cr6.eq) goto loc_82EE7148;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EE7148:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82ee7134
	if (!ctx.cr0.eq) goto loc_82EE7134;
loc_82EE7158:
	// lhz r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r23.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82ee7258
	if (ctx.cr0.eq) goto loc_82EE7258;
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82ee717c
	if (ctx.cr6.eq) goto loc_82EE717C;
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// b 0x82ee7184
	goto loc_82EE7184;
loc_82EE717C:
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
loc_82EE7184:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82ee7258
	if (ctx.cr0.eq) goto loc_82EE7258;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82ee71a0
	if (!ctx.cr6.eq) goto loc_82EE71A0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r26,r9,6912
	ctx.r26.s64 = ctx.r9.s64 + 6912;
	// b 0x82ee71a8
	goto loc_82EE71A8;
loc_82EE71A0:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r26,r9,6896
	ctx.r26.s64 = ctx.r9.s64 + 6896;
loc_82EE71A8:
	// mullw. r9,r10,r24
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x82ee7258
	if (ctx.cr0.eq) goto loc_82EE7258;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r5,r10
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_82EE71E8:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r31.s64;
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r4,r27,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r27.s64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee7224
	if (!ctx.cr6.gt) goto loc_82EE7224;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EE7208:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// rlwinm r5,r8,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// lwzx r5,r5,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// bgt cr6,0x82ee7208
	if (ctx.cr6.gt) goto loc_82EE7208;
loc_82EE7224:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee7250
	if (ctx.cr6.eq) goto loc_82EE7250;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_82EE7238:
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// bne 0x82ee7238
	if (!ctx.cr0.eq) goto loc_82EE7238;
loc_82EE7250:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ee71e8
	if (!ctx.cr6.eq) goto loc_82EE71E8;
loc_82EE7258:
	// lwz r10,44(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// lhz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 12);
	// mullw r7,r10,r24
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee7270
	if (!ctx.cr6.gt) goto loc_82EE7270;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82EE7270:
	// lwz r10,28(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ee7288
	if (!ctx.cr6.eq) goto loc_82EE7288;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82ee72ac
	goto loc_82EE72AC;
loc_82EE7288:
	// lhz r11,10(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 10);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EE72A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee72ac
	if (ctx.cr0.lt) goto loc_82EE72AC;
loc_82EE72A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE72AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE72B4"))) PPC_WEAK_FUNC(sub_82EE72B4);
PPC_FUNC_IMPL(__imp__sub_82EE72B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE72B8"))) PPC_WEAK_FUNC(sub_82EE72B8);
PPC_FUNC_IMPL(__imp__sub_82EE72B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82EE72C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r25,24(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r6,32(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lhz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82ee76a0
	if (ctx.cr6.lt) goto loc_82EE76A0;
	// beq cr6,0x82ee7618
	if (ctx.cr6.eq) goto loc_82EE7618;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82ee74ac
	if (ctx.cr6.lt) goto loc_82EE74AC;
	// beq cr6,0x82ee73ec
	if (ctx.cr6.eq) goto loc_82EE73EC;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x82ee730c
	if (ctx.cr6.eq) goto loc_82EE730C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82ee78e0
	goto loc_82EE78E0;
loc_82EE730C:
	// lwz r10,52(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// divwu r27,r9,r10
	ctx.r27.u32 = ctx.r9.u32 / ctx.r10.u32;
	// twllei r10,0
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee732c
	if (!ctx.cr6.gt) goto loc_82EE732C;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82EE732C:
	// mullw. r9,r10,r27
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82ee7370
	if (ctx.cr0.eq) goto loc_82EE7370;
loc_82EE733C:
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r7,r11,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r4,r11,30,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x82ee733c
	if (ctx.cr6.lt) goto loc_82EE733C;
loc_82EE7370:
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ee78dc
	if (ctx.cr6.eq) goto loc_82EE78DC;
loc_82EE7380:
	// lhz r11,10(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 10);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee73dc
	if (ctx.cr0.eq) goto loc_82EE73DC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EE7394:
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82ee5f28
	ctx.lr = 0x82EE73B4;
	sub_82EE5F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee78e0
	if (ctx.cr0.lt) goto loc_82EE78E0;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lhz r10,10(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 10);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// blt cr6,0x82ee7394
	if (ctx.cr6.lt) goto loc_82EE7394;
loc_82EE73DC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82ee7380
	if (ctx.cr6.lt) goto loc_82EE7380;
	// b 0x82ee78dc
	goto loc_82EE78DC;
loc_82EE73EC:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee7400
	if (!ctx.cr6.gt) goto loc_82EE7400;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82EE7400:
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82ee7418
	if (!ctx.cr6.eq) goto loc_82EE7418;
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82ee76fc
	if (ctx.cr6.eq) goto loc_82EE76FC;
loc_82EE7418:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ee76f8
	if (ctx.cr6.eq) goto loc_82EE76F8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82EE742C:
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee749c
	if (ctx.cr0.eq) goto loc_82EE749C;
loc_82EE743C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee748c
	if (ctx.cr6.eq) goto loc_82EE748C;
loc_82EE7448:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82ee7470
	if (ctx.cr6.gt) goto loc_82EE7470;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x82ee7470
	if (ctx.cr6.gt) goto loc_82EE7470;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// b 0x82ee7474
	goto loc_82EE7474;
loc_82EE7470:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EE7474:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee7448
	if (ctx.cr6.lt) goto loc_82EE7448;
loc_82EE748C:
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee743c
	if (ctx.cr6.lt) goto loc_82EE743C;
loc_82EE749C:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82ee742c
	if (!ctx.cr0.eq) goto loc_82EE742C;
	// b 0x82ee76f8
	goto loc_82EE76F8;
loc_82EE74AC:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee74c0
	if (!ctx.cr6.gt) goto loc_82EE74C0;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82EE74C0:
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82ee7584
	if (!ctx.cr6.eq) goto loc_82EE7584;
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82ee7584
	if (!ctx.cr6.eq) goto loc_82EE7584;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ee76f8
	if (ctx.cr6.eq) goto loc_82EE76F8;
	// addi r10,r6,8
	ctx.r10.s64 = ctx.r6.s64 + 8;
	// addi r11,r5,32
	ctx.r11.s64 = ctx.r5.s64 + 32;
	// subf r8,r5,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r5.s64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82EE74F0:
	// lfs f0,-32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f0,-8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f0,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lfs f0,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lfs f0,-20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stfs f0,52(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bne 0x82ee74f0
	if (!ctx.cr0.eq) goto loc_82EE74F0;
	// b 0x82ee76f8
	goto loc_82EE76F8;
loc_82EE7584:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ee76f8
	if (ctx.cr6.eq) goto loc_82EE76F8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82EE7598:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee7608
	if (ctx.cr6.eq) goto loc_82EE7608;
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
loc_82EE75A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee75f8
	if (ctx.cr6.eq) goto loc_82EE75F8;
loc_82EE75B4:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x82ee75dc
	if (ctx.cr6.gt) goto loc_82EE75DC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82ee75dc
	if (ctx.cr6.gt) goto loc_82EE75DC;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// b 0x82ee75e0
	goto loc_82EE75E0;
loc_82EE75DC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EE75E0:
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee75b4
	if (ctx.cr6.lt) goto loc_82EE75B4;
loc_82EE75F8:
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee75a8
	if (ctx.cr6.lt) goto loc_82EE75A8;
loc_82EE7608:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82ee7598
	if (!ctx.cr0.eq) goto loc_82EE7598;
	// b 0x82ee76f8
	goto loc_82EE76F8;
loc_82EE7618:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee762c
	if (!ctx.cr6.gt) goto loc_82EE762C;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82EE762C:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ee76f8
	if (ctx.cr6.eq) goto loc_82EE76F8;
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
loc_82EE7640:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee7690
	if (ctx.cr6.eq) goto loc_82EE7690;
loc_82EE764C:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x82ee765c
	if (!ctx.cr6.gt) goto loc_82EE765C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82ee7678
	goto loc_82EE7678;
loc_82EE765C:
	// rlwinm r10,r8,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_82EE7678:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee764c
	if (ctx.cr6.lt) goto loc_82EE764C;
loc_82EE7690:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82ee7640
	if (ctx.cr6.lt) goto loc_82EE7640;
	// b 0x82ee76f8
	goto loc_82EE76F8;
loc_82EE76A0:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// rlwinm r26,r11,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee76b4
	if (!ctx.cr6.gt) goto loc_82EE76B4;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82EE76B4:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ee76f8
	if (ctx.cr6.eq) goto loc_82EE76F8;
loc_82EE76C4:
	// rlwinm r9,r11,30,2,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// clrlwi r7,r11,30
	ctx.r7.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r8,r11,30,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x82ee76c4
	if (ctx.cr6.lt) goto loc_82EE76C4;
loc_82EE76F8:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_82EE76FC:
	// lhz r11,2(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 2);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82ee778c
	if (ctx.cr6.eq) goto loc_82EE778C;
	// lwz r10,52(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// beq cr6,0x82ee774c
	if (ctx.cr6.eq) goto loc_82EE774C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ee7788
	if (!ctx.cr6.eq) goto loc_82EE7788;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee7788
	if (ctx.cr6.eq) goto loc_82EE7788;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r9,r6,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r6.s64;
loc_82EE7730:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee7730
	if (!ctx.cr0.eq) goto loc_82EE7730;
	// b 0x82ee7788
	goto loc_82EE7788;
loc_82EE774C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee7788
	if (ctx.cr6.eq) goto loc_82EE7788;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r8,r6,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r6.s64;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82EE7764:
	// lfsx f13,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82ee7778
	if (!ctx.cr6.eq) goto loc_82EE7778;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EE7778:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ee7764
	if (!ctx.cr0.eq) goto loc_82EE7764;
loc_82EE7788:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_82EE778C:
	// lhz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82ee7890
	if (ctx.cr0.eq) goto loc_82EE7890;
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82ee77b0
	if (ctx.cr6.eq) goto loc_82EE77B0;
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// b 0x82ee77b8
	goto loc_82EE77B8;
loc_82EE77B0:
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
loc_82EE77B8:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82ee7890
	if (ctx.cr0.eq) goto loc_82EE7890;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82ee77d4
	if (!ctx.cr6.eq) goto loc_82EE77D4;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r27,r9,6944
	ctx.r27.s64 = ctx.r9.s64 + 6944;
	// b 0x82ee77dc
	goto loc_82EE77DC;
loc_82EE77D4:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r27,r9,6928
	ctx.r27.s64 = ctx.r9.s64 + 6928;
loc_82EE77DC:
	// mullw. r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x82ee788c
	if (ctx.cr0.eq) goto loc_82EE788C;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mullw r4,r3,r11
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r8,r3,r10
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_82EE781C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subf r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r5,r28,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r28.s64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee7858
	if (!ctx.cr6.gt) goto loc_82EE7858;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82EE783C:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// rlwinm r30,r8,2,28,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// lwzx r30,r30,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bgt cr6,0x82ee783c
	if (ctx.cr6.gt) goto loc_82EE783C;
loc_82EE7858:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee7884
	if (ctx.cr6.eq) goto loc_82EE7884;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82EE786C:
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,0(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bne 0x82ee786c
	if (!ctx.cr0.eq) goto loc_82EE786C;
loc_82EE7884:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ee781c
	if (!ctx.cr6.eq) goto loc_82EE781C;
loc_82EE788C:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_82EE7890:
	// lwz r10,44(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 12);
	// mullw r7,r10,r26
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee78a8
	if (!ctx.cr6.gt) goto loc_82EE78A8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82EE78A8:
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ee78c0
	if (!ctx.cr6.eq) goto loc_82EE78C0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82ee78e0
	goto loc_82EE78E0;
loc_82EE78C0:
	// lhz r11,10(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 10);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EE78D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee78e0
	if (ctx.cr0.lt) goto loc_82EE78E0;
loc_82EE78DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE78E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE78E8"))) PPC_WEAK_FUNC(sub_82EE78E8);
PPC_FUNC_IMPL(__imp__sub_82EE78E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82EE78F0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r25,24(r23)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// lwz r6,32(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// lhz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82ee7bf8
	if (ctx.cr6.lt) goto loc_82EE7BF8;
	// beq cr6,0x82ee7b6c
	if (ctx.cr6.eq) goto loc_82EE7B6C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82ee7ac8
	if (ctx.cr6.lt) goto loc_82EE7AC8;
	// beq cr6,0x82ee7a1c
	if (ctx.cr6.eq) goto loc_82EE7A1C;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x82ee7940
	if (ctx.cr6.eq) goto loc_82EE7940;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82ee7e24
	goto loc_82EE7E24;
loc_82EE7940:
	// lwz r10,52(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 52);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// divwu r27,r9,r10
	ctx.r27.u32 = ctx.r9.u32 / ctx.r10.u32;
	// twllei r10,0
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee7960
	if (!ctx.cr6.gt) goto loc_82EE7960;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82EE7960:
	// mullw. r9,r10,r27
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82ee79a0
	if (ctx.cr0.eq) goto loc_82EE79A0;
loc_82EE7970:
	// rlwinm r7,r11,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r8,r11,30,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// rlwinm r5,r11,30,2,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwzx r7,r5,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x82ee7970
	if (ctx.cr6.lt) goto loc_82EE7970;
loc_82EE79A0:
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ee7e20
	if (ctx.cr6.eq) goto loc_82EE7E20;
loc_82EE79B0:
	// lhz r11,10(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 10);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee7a0c
	if (ctx.cr0.eq) goto loc_82EE7A0C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EE79C4:
	// lwz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82ee5f28
	ctx.lr = 0x82EE79E4;
	sub_82EE5F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee7e24
	if (ctx.cr0.lt) goto loc_82EE7E24;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lhz r10,10(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 10);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// blt cr6,0x82ee79c4
	if (ctx.cr6.lt) goto loc_82EE79C4;
loc_82EE7A0C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82ee79b0
	if (ctx.cr6.lt) goto loc_82EE79B0;
	// b 0x82ee7e20
	goto loc_82EE7E20;
loc_82EE7A1C:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee7a30
	if (!ctx.cr6.gt) goto loc_82EE7A30;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
loc_82EE7A30:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ee7c4c
	if (ctx.cr6.eq) goto loc_82EE7C4C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82EE7A40:
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee7ab8
	if (ctx.cr0.eq) goto loc_82EE7AB8;
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EE7A58:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee7aa4
	if (ctx.cr6.eq) goto loc_82EE7AA4;
loc_82EE7A64:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82ee7a88
	if (ctx.cr6.gt) goto loc_82EE7A88;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bgt cr6,0x82ee7a88
	if (ctx.cr6.gt) goto loc_82EE7A88;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// b 0x82ee7a8c
	goto loc_82EE7A8C;
loc_82EE7A88:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EE7A8C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee7a64
	if (ctx.cr6.lt) goto loc_82EE7A64;
loc_82EE7AA4:
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee7a58
	if (ctx.cr6.lt) goto loc_82EE7A58;
loc_82EE7AB8:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82ee7a40
	if (!ctx.cr0.eq) goto loc_82EE7A40;
	// b 0x82ee7c4c
	goto loc_82EE7C4C;
loc_82EE7AC8:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee7adc
	if (!ctx.cr6.gt) goto loc_82EE7ADC;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
loc_82EE7ADC:
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ee7c4c
	if (ctx.cr6.eq) goto loc_82EE7C4C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82EE7AEC:
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee7b5c
	if (ctx.cr0.eq) goto loc_82EE7B5C;
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
loc_82EE7B00:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee7b4c
	if (ctx.cr6.eq) goto loc_82EE7B4C;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EE7B10:
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bgt cr6,0x82ee7b2c
	if (ctx.cr6.gt) goto loc_82EE7B2C;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x82ee7b2c
	if (ctx.cr6.gt) goto loc_82EE7B2C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82ee7b30
	goto loc_82EE7B30;
loc_82EE7B2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EE7B30:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee7b10
	if (ctx.cr6.lt) goto loc_82EE7B10;
loc_82EE7B4C:
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee7b00
	if (ctx.cr6.lt) goto loc_82EE7B00;
loc_82EE7B5C:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82ee7aec
	if (!ctx.cr0.eq) goto loc_82EE7AEC;
	// b 0x82ee7c4c
	goto loc_82EE7C4C;
loc_82EE7B6C:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// rlwinm r24,r11,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee7b80
	if (!ctx.cr6.gt) goto loc_82EE7B80;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
loc_82EE7B80:
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ee7c4c
	if (ctx.cr6.eq) goto loc_82EE7C4C;
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
loc_82EE7B94:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee7be8
	if (ctx.cr6.eq) goto loc_82EE7BE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EE7BA4:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// ble cr6,0x82ee7bb4
	if (!ctx.cr6.gt) goto loc_82EE7BB4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82ee7bcc
	goto loc_82EE7BCC;
loc_82EE7BB4:
	// clrlwi r10,r7,30
	ctx.r10.u64 = ctx.r7.u32 & 0x3;
	// rlwinm r5,r7,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r4
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lwzx r10,r5,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
loc_82EE7BCC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee7ba4
	if (ctx.cr6.lt) goto loc_82EE7BA4;
loc_82EE7BE8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r24
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82ee7b94
	if (ctx.cr6.lt) goto loc_82EE7B94;
	// b 0x82ee7c4c
	goto loc_82EE7C4C;
loc_82EE7BF8:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// rlwinm r24,r11,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee7c0c
	if (!ctx.cr6.gt) goto loc_82EE7C0C;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
loc_82EE7C0C:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ee7c4c
	if (ctx.cr6.eq) goto loc_82EE7C4C;
loc_82EE7C1C:
	// rlwinm r8,r11,30,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r7,r11,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// lwzx r8,r7,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x82ee7c1c
	if (ctx.cr6.lt) goto loc_82EE7C1C;
loc_82EE7C4C:
	// lhz r10,2(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 2);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82ee7cd0
	if (ctx.cr6.eq) goto loc_82EE7CD0;
	// lwz r11,52(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 52);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// beq cr6,0x82ee7c98
	if (ctx.cr6.eq) goto loc_82EE7C98;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82ee7cd0
	if (!ctx.cr6.eq) goto loc_82EE7CD0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee7cd0
	if (ctx.cr6.eq) goto loc_82EE7CD0;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82EE7C7C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82ee7c7c
	if (!ctx.cr0.eq) goto loc_82EE7C7C;
	// b 0x82ee7cd0
	goto loc_82EE7CD0;
loc_82EE7C98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee7cd0
	if (ctx.cr6.eq) goto loc_82EE7CD0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82EE7CAC:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82ee7cc0
	if (!ctx.cr6.eq) goto loc_82EE7CC0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EE7CC0:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82ee7cac
	if (!ctx.cr0.eq) goto loc_82EE7CAC;
loc_82EE7CD0:
	// lhz r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r23.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82ee7dd0
	if (ctx.cr0.eq) goto loc_82EE7DD0;
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82ee7cf4
	if (ctx.cr6.eq) goto loc_82EE7CF4;
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// b 0x82ee7cfc
	goto loc_82EE7CFC;
loc_82EE7CF4:
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
loc_82EE7CFC:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82ee7dd0
	if (ctx.cr0.eq) goto loc_82EE7DD0;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82ee7d18
	if (!ctx.cr6.eq) goto loc_82EE7D18;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r26,r9,6976
	ctx.r26.s64 = ctx.r9.s64 + 6976;
	// b 0x82ee7d20
	goto loc_82EE7D20;
loc_82EE7D18:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r26,r9,6960
	ctx.r26.s64 = ctx.r9.s64 + 6960;
loc_82EE7D20:
	// mullw. r9,r10,r24
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x82ee7dd0
	if (ctx.cr0.eq) goto loc_82EE7DD0;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r4,r11,r5
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r8,r10,r5
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_82EE7D60:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r31.s64;
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r4,r27,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r27.s64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee7d9c
	if (!ctx.cr6.gt) goto loc_82EE7D9C;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EE7D80:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// rlwinm r5,r8,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// lwzx r5,r5,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// bgt cr6,0x82ee7d80
	if (ctx.cr6.gt) goto loc_82EE7D80;
loc_82EE7D9C:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee7dc8
	if (ctx.cr6.eq) goto loc_82EE7DC8;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_82EE7DB0:
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// bne 0x82ee7db0
	if (!ctx.cr0.eq) goto loc_82EE7DB0;
loc_82EE7DC8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ee7d60
	if (!ctx.cr6.eq) goto loc_82EE7D60;
loc_82EE7DD0:
	// lwz r10,44(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// lhz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 12);
	// mullw r7,r10,r24
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee7de8
	if (!ctx.cr6.gt) goto loc_82EE7DE8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82EE7DE8:
	// lwz r10,28(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ee7e00
	if (!ctx.cr6.eq) goto loc_82EE7E00;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82ee7e24
	goto loc_82EE7E24;
loc_82EE7E00:
	// lhz r11,10(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 10);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EE7E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee7e24
	if (ctx.cr0.lt) goto loc_82EE7E24;
loc_82EE7E20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE7E24:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE7E2C"))) PPC_WEAK_FUNC(sub_82EE7E2C);
PPC_FUNC_IMPL(__imp__sub_82EE7E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7E30"))) PPC_WEAK_FUNC(sub_82EE7E30);
PPC_FUNC_IMPL(__imp__sub_82EE7E30) {
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
	// bl 0x82ee48e8
	ctx.lr = 0x82EE7E50;
	sub_82EE48E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee7e64
	if (ctx.cr0.eq) goto loc_82EE7E64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EE7E64;
	sub_822996C0(ctx, base);
loc_82EE7E64:
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

__attribute__((alias("__imp__sub_82EE7E80"))) PPC_WEAK_FUNC(sub_82EE7E80);
PPC_FUNC_IMPL(__imp__sub_82EE7E80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7E84"))) PPC_WEAK_FUNC(sub_82EE7E84);
PPC_FUNC_IMPL(__imp__sub_82EE7E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7E88"))) PPC_WEAK_FUNC(sub_82EE7E88);
PPC_FUNC_IMPL(__imp__sub_82EE7E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EE7E90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,6992
	ctx.r11.s64 = ctx.r11.s64 + 6992;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee7f08
	if (ctx.cr6.eq) goto loc_82EE7F08;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82ee7efc
	if (!ctx.cr6.gt) goto loc_82EE7EFC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EE7EC4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r29,r11,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ee7ee8
	if (ctx.cr6.eq) goto loc_82EE7EE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ee48e8
	ctx.lr = 0x82EE7EDC;
	sub_82EE48E8(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EE7EE8;
	sub_822996C0(ctx, base);
loc_82EE7EE8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee7ec4
	if (ctx.cr6.lt) goto loc_82EE7EC4;
loc_82EE7EFC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822996c0
	ctx.lr = 0x82EE7F08;
	sub_822996C0(ctx, base);
loc_82EE7F08:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822996c0
	ctx.lr = 0x82EE7F14;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822996c0
	ctx.lr = 0x82EE7F20;
	sub_822996C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE7F28"))) PPC_WEAK_FUNC(sub_82EE7F28);
PPC_FUNC_IMPL(__imp__sub_82EE7F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EE7F30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// rlwinm r28,r7,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82ee7f54
	goto loc_82EE7F54;
loc_82EE7F48:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee7f78
	if (ctx.cr6.eq) goto loc_82EE7F78;
loc_82EE7F54:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee5468
	ctx.lr = 0x82EE7F6C;
	sub_82EE5468(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee7f48
	if (!ctx.cr0.lt) goto loc_82EE7F48;
	// b 0x82ee7f7c
	goto loc_82EE7F7C;
loc_82EE7F78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE7F7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE7F84"))) PPC_WEAK_FUNC(sub_82EE7F84);
PPC_FUNC_IMPL(__imp__sub_82EE7F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7F88"))) PPC_WEAK_FUNC(sub_82EE7F88);
PPC_FUNC_IMPL(__imp__sub_82EE7F88) {
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
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x82ee7fb8
	goto loc_82EE7FB8;
loc_82EE7FAC:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee7fdc
	if (ctx.cr6.eq) goto loc_82EE7FDC;
loc_82EE7FB8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee5798
	ctx.lr = 0x82EE7FD0;
	sub_82EE5798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee7fac
	if (!ctx.cr0.lt) goto loc_82EE7FAC;
	// b 0x82ee7fe0
	goto loc_82EE7FE0;
loc_82EE7FDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE7FE0:
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

__attribute__((alias("__imp__sub_82EE7FF8"))) PPC_WEAK_FUNC(sub_82EE7FF8);
PPC_FUNC_IMPL(__imp__sub_82EE7FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EE8000;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x82ee8024
	goto loc_82EE8024;
loc_82EE8018:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee8048
	if (ctx.cr6.eq) goto loc_82EE8048;
loc_82EE8024:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee5798
	ctx.lr = 0x82EE803C;
	sub_82EE5798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee8018
	if (!ctx.cr0.lt) goto loc_82EE8018;
	// b 0x82ee804c
	goto loc_82EE804C;
loc_82EE8048:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE804C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE8054"))) PPC_WEAK_FUNC(sub_82EE8054);
PPC_FUNC_IMPL(__imp__sub_82EE8054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE8058"))) PPC_WEAK_FUNC(sub_82EE8058);
PPC_FUNC_IMPL(__imp__sub_82EE8058) {
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
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x82ee8088
	goto loc_82EE8088;
loc_82EE807C:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee80ac
	if (ctx.cr6.eq) goto loc_82EE80AC;
loc_82EE8088:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee5b68
	ctx.lr = 0x82EE80A0;
	sub_82EE5B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee807c
	if (!ctx.cr0.lt) goto loc_82EE807C;
	// b 0x82ee80b0
	goto loc_82EE80B0;
loc_82EE80AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE80B0:
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

__attribute__((alias("__imp__sub_82EE80C8"))) PPC_WEAK_FUNC(sub_82EE80C8);
PPC_FUNC_IMPL(__imp__sub_82EE80C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EE80D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x82ee80f4
	goto loc_82EE80F4;
loc_82EE80E8:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee8118
	if (ctx.cr6.eq) goto loc_82EE8118;
loc_82EE80F4:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee5b68
	ctx.lr = 0x82EE810C;
	sub_82EE5B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee80e8
	if (!ctx.cr0.lt) goto loc_82EE80E8;
	// b 0x82ee811c
	goto loc_82EE811C;
loc_82EE8118:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE811C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE8124"))) PPC_WEAK_FUNC(sub_82EE8124);
PPC_FUNC_IMPL(__imp__sub_82EE8124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE8128"))) PPC_WEAK_FUNC(sub_82EE8128);
PPC_FUNC_IMPL(__imp__sub_82EE8128) {
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
	// stfs f1,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x82ee8158
	goto loc_82EE8158;
loc_82EE814C:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee817c
	if (ctx.cr6.eq) goto loc_82EE817C;
loc_82EE8158:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee5f28
	ctx.lr = 0x82EE8170;
	sub_82EE5F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee814c
	if (!ctx.cr0.lt) goto loc_82EE814C;
	// b 0x82ee8180
	goto loc_82EE8180;
loc_82EE817C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE8180:
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

__attribute__((alias("__imp__sub_82EE8198"))) PPC_WEAK_FUNC(sub_82EE8198);
PPC_FUNC_IMPL(__imp__sub_82EE8198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EE81A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x82ee81c4
	goto loc_82EE81C4;
loc_82EE81B8:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee81e8
	if (ctx.cr6.eq) goto loc_82EE81E8;
loc_82EE81C4:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee5f28
	ctx.lr = 0x82EE81DC;
	sub_82EE5F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee81b8
	if (!ctx.cr0.lt) goto loc_82EE81B8;
	// b 0x82ee81ec
	goto loc_82EE81EC;
loc_82EE81E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE81EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE81F4"))) PPC_WEAK_FUNC(sub_82EE81F4);
PPC_FUNC_IMPL(__imp__sub_82EE81F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE81F8"))) PPC_WEAK_FUNC(sub_82EE81F8);
PPC_FUNC_IMPL(__imp__sub_82EE81F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EE8200;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x82ee8220
	goto loc_82EE8220;
loc_82EE8214:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee8244
	if (ctx.cr6.eq) goto loc_82EE8244;
loc_82EE8220:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee62e8
	ctx.lr = 0x82EE8238;
	sub_82EE62E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee8214
	if (!ctx.cr0.lt) goto loc_82EE8214;
	// b 0x82ee8248
	goto loc_82EE8248;
loc_82EE8244:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE8248:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE8250"))) PPC_WEAK_FUNC(sub_82EE8250);
PPC_FUNC_IMPL(__imp__sub_82EE8250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EE8258;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x82ee827c
	goto loc_82EE827C;
loc_82EE8270:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee82a0
	if (ctx.cr6.eq) goto loc_82EE82A0;
loc_82EE827C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee62e8
	ctx.lr = 0x82EE8294;
	sub_82EE62E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee8270
	if (!ctx.cr0.lt) goto loc_82EE8270;
	// b 0x82ee82a4
	goto loc_82EE82A4;
loc_82EE82A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE82A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE82AC"))) PPC_WEAK_FUNC(sub_82EE82AC);
PPC_FUNC_IMPL(__imp__sub_82EE82AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE82B0"))) PPC_WEAK_FUNC(sub_82EE82B0);
PPC_FUNC_IMPL(__imp__sub_82EE82B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EE82B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x82ee82d8
	goto loc_82EE82D8;
loc_82EE82CC:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee82fc
	if (ctx.cr6.eq) goto loc_82EE82FC;
loc_82EE82D8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee67c0
	ctx.lr = 0x82EE82F0;
	sub_82EE67C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee82cc
	if (!ctx.cr0.lt) goto loc_82EE82CC;
	// b 0x82ee8300
	goto loc_82EE8300;
loc_82EE82FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE8300:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE8308"))) PPC_WEAK_FUNC(sub_82EE8308);
PPC_FUNC_IMPL(__imp__sub_82EE8308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EE8310;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x82ee8334
	goto loc_82EE8334;
loc_82EE8328:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee8358
	if (ctx.cr6.eq) goto loc_82EE8358;
loc_82EE8334:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee67c0
	ctx.lr = 0x82EE834C;
	sub_82EE67C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee8328
	if (!ctx.cr0.lt) goto loc_82EE8328;
	// b 0x82ee835c
	goto loc_82EE835C;
loc_82EE8358:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE835C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE8364"))) PPC_WEAK_FUNC(sub_82EE8364);
PPC_FUNC_IMPL(__imp__sub_82EE8364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE8368"))) PPC_WEAK_FUNC(sub_82EE8368);
PPC_FUNC_IMPL(__imp__sub_82EE8368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EE8370;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x82ee8394
	goto loc_82EE8394;
loc_82EE8388:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee83b8
	if (ctx.cr6.eq) goto loc_82EE83B8;
loc_82EE8394:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee6d78
	ctx.lr = 0x82EE83AC;
	sub_82EE6D78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee8388
	if (!ctx.cr0.lt) goto loc_82EE8388;
	// b 0x82ee83bc
	goto loc_82EE83BC;
loc_82EE83B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE83BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE83C4"))) PPC_WEAK_FUNC(sub_82EE83C4);
PPC_FUNC_IMPL(__imp__sub_82EE83C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE83C8"))) PPC_WEAK_FUNC(sub_82EE83C8);
PPC_FUNC_IMPL(__imp__sub_82EE83C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EE83D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x82ee83f0
	goto loc_82EE83F0;
loc_82EE83E4:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee8414
	if (ctx.cr6.eq) goto loc_82EE8414;
loc_82EE83F0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee72b8
	ctx.lr = 0x82EE8408;
	sub_82EE72B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee83e4
	if (!ctx.cr0.lt) goto loc_82EE83E4;
	// b 0x82ee8418
	goto loc_82EE8418;
loc_82EE8414:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE8418:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE8420"))) PPC_WEAK_FUNC(sub_82EE8420);
PPC_FUNC_IMPL(__imp__sub_82EE8420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EE8428;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x82ee844c
	goto loc_82EE844C;
loc_82EE8440:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee8470
	if (ctx.cr6.eq) goto loc_82EE8470;
loc_82EE844C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee72b8
	ctx.lr = 0x82EE8464;
	sub_82EE72B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee8440
	if (!ctx.cr0.lt) goto loc_82EE8440;
	// b 0x82ee8474
	goto loc_82EE8474;
loc_82EE8470:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE8474:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE847C"))) PPC_WEAK_FUNC(sub_82EE847C);
PPC_FUNC_IMPL(__imp__sub_82EE847C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE8480"))) PPC_WEAK_FUNC(sub_82EE8480);
PPC_FUNC_IMPL(__imp__sub_82EE8480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EE8488;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x82ee84ac
	goto loc_82EE84AC;
loc_82EE84A0:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee84d0
	if (ctx.cr6.eq) goto loc_82EE84D0;
loc_82EE84AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee78e8
	ctx.lr = 0x82EE84C4;
	sub_82EE78E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee84a0
	if (!ctx.cr0.lt) goto loc_82EE84A0;
	// b 0x82ee84d4
	goto loc_82EE84D4;
loc_82EE84D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE84D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE84DC"))) PPC_WEAK_FUNC(sub_82EE84DC);
PPC_FUNC_IMPL(__imp__sub_82EE84DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE84E0"))) PPC_WEAK_FUNC(sub_82EE84E0);
PPC_FUNC_IMPL(__imp__sub_82EE84E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82EE84E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lhz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// bne 0x82ee8760
	if (!ctx.cr0.eq) goto loc_82EE8760;
	// lis r10,21592
	ctx.r10.s64 = 1415053312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ee8708
	if (ctx.cr6.eq) goto loc_82EE8708;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ee862c
	if (ctx.cr6.eq) goto loc_82EE862C;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ee87d8
	if (!ctx.cr6.eq) goto loc_82EE87D8;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82ee85ec
	if (ctx.cr6.lt) goto loc_82EE85EC;
	// beq cr6,0x82ee85a0
	if (ctx.cr6.eq) goto loc_82EE85A0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82ee87d8
	if (!ctx.cr6.lt) goto loc_82EE87D8;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82ee8594
	if (ctx.cr6.lt) goto loc_82EE8594;
	// beq cr6,0x82ee8588
	if (ctx.cr6.eq) goto loc_82EE8588;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82ee857c
	if (ctx.cr6.lt) goto loc_82EE857C;
	// bne cr6,0x82ee87d8
	if (!ctx.cr6.eq) goto loc_82EE87D8;
loc_82EE8570:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,21112
	ctx.r31.s64 = ctx.r11.s64 + 21112;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE857C:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,20976
	ctx.r31.s64 = ctx.r11.s64 + 20976;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE8588:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,20824
	ctx.r31.s64 = ctx.r11.s64 + 20824;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE8594:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,20744
	ctx.r31.s64 = ctx.r11.s64 + 20744;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE85A0:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82ee85e0
	if (ctx.cr6.lt) goto loc_82EE85E0;
	// beq cr6,0x82ee85d4
	if (ctx.cr6.eq) goto loc_82EE85D4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82ee85c8
	if (ctx.cr6.lt) goto loc_82EE85C8;
	// bne cr6,0x82ee87d8
	if (!ctx.cr6.eq) goto loc_82EE87D8;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,20664
	ctx.r31.s64 = ctx.r11.s64 + 20664;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE85C8:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,20624
	ctx.r31.s64 = ctx.r11.s64 + 20624;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE85D4:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,20536
	ctx.r31.s64 = ctx.r11.s64 + 20536;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE85E0:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,20496
	ctx.r31.s64 = ctx.r11.s64 + 20496;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE85EC:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82ee8620
	if (ctx.cr6.lt) goto loc_82EE8620;
	// beq cr6,0x82ee8794
	if (ctx.cr6.eq) goto loc_82EE8794;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82ee8614
	if (ctx.cr6.lt) goto loc_82EE8614;
	// bne cr6,0x82ee87d8
	if (!ctx.cr6.eq) goto loc_82EE87D8;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,20392
	ctx.r31.s64 = ctx.r11.s64 + 20392;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE8614:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,20296
	ctx.r31.s64 = ctx.r11.s64 + 20296;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE8620:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE862C:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82ee86c8
	if (ctx.cr6.lt) goto loc_82EE86C8;
	// beq cr6,0x82ee8688
	if (ctx.cr6.eq) goto loc_82EE8688;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82ee87d8
	if (!ctx.cr6.lt) goto loc_82EE87D8;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82ee867c
	if (ctx.cr6.lt) goto loc_82EE867C;
	// beq cr6,0x82ee8670
	if (ctx.cr6.eq) goto loc_82EE8670;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82ee8664
	if (ctx.cr6.lt) goto loc_82EE8664;
	// bne cr6,0x82ee87d8
	if (!ctx.cr6.eq) goto loc_82EE87D8;
	// b 0x82ee87b8
	goto loc_82EE87B8;
loc_82EE8664:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,20000
	ctx.r31.s64 = ctx.r11.s64 + 20000;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE8670:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,19848
	ctx.r31.s64 = ctx.r11.s64 + 19848;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE867C:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,19768
	ctx.r31.s64 = ctx.r11.s64 + 19768;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE8688:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82ee86bc
	if (ctx.cr6.lt) goto loc_82EE86BC;
	// beq cr6,0x82ee86b0
	if (ctx.cr6.eq) goto loc_82EE86B0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82ee87c4
	if (ctx.cr6.lt) goto loc_82EE87C4;
	// bne cr6,0x82ee87d8
	if (!ctx.cr6.eq) goto loc_82EE87D8;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,19688
	ctx.r31.s64 = ctx.r11.s64 + 19688;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE86B0:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,19560
	ctx.r31.s64 = ctx.r11.s64 + 19560;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE86BC:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,19520
	ctx.r31.s64 = ctx.r11.s64 + 19520;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE86C8:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82ee86fc
	if (ctx.cr6.lt) goto loc_82EE86FC;
	// beq cr6,0x82ee87d0
	if (ctx.cr6.eq) goto loc_82EE87D0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82ee86f0
	if (ctx.cr6.lt) goto loc_82EE86F0;
	// bne cr6,0x82ee87d8
	if (!ctx.cr6.eq) goto loc_82EE87D8;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,19416
	ctx.r31.s64 = ctx.r11.s64 + 19416;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE86F0:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,19320
	ctx.r31.s64 = ctx.r11.s64 + 19320;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE86FC:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,19240
	ctx.r31.s64 = ctx.r11.s64 + 19240;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE8708:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82ee87d8
	if (!ctx.cr6.eq) goto loc_82EE87D8;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82ee8754
	if (ctx.cr6.lt) goto loc_82EE8754;
	// beq cr6,0x82ee8748
	if (ctx.cr6.eq) goto loc_82EE8748;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82ee873c
	if (ctx.cr6.lt) goto loc_82EE873C;
	// bne cr6,0x82ee87d8
	if (!ctx.cr6.eq) goto loc_82EE87D8;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,21536
	ctx.r31.s64 = ctx.r11.s64 + 21536;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE873C:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,21408
	ctx.r31.s64 = ctx.r11.s64 + 21408;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE8748:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,21264
	ctx.r31.s64 = ctx.r11.s64 + 21264;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE8754:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,21192
	ctx.r31.s64 = ctx.r11.s64 + 21192;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE8760:
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ee87a0
	if (ctx.cr6.eq) goto loc_82EE87A0;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ee87d8
	if (!ctx.cr6.eq) goto loc_82EE87D8;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82ee8794
	if (ctx.cr6.lt) goto loc_82EE8794;
	// beq cr6,0x82ee85c8
	if (ctx.cr6.eq) goto loc_82EE85C8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82ee87d8
	if (!ctx.cr6.lt) goto loc_82EE87D8;
	// b 0x82ee8570
	goto loc_82EE8570;
loc_82EE8794:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,20256
	ctx.r31.s64 = ctx.r11.s64 + 20256;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE87A0:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82ee87d0
	if (ctx.cr6.lt) goto loc_82EE87D0;
	// beq cr6,0x82ee87c4
	if (ctx.cr6.eq) goto loc_82EE87C4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82ee87d8
	if (!ctx.cr6.lt) goto loc_82EE87D8;
loc_82EE87B8:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,20136
	ctx.r31.s64 = ctx.r11.s64 + 20136;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE87C4:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,19648
	ctx.r31.s64 = ctx.r11.s64 + 19648;
	// b 0x82ee87d8
	goto loc_82EE87D8;
loc_82EE87D0:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r31,r11,19280
	ctx.r31.s64 = ctx.r11.s64 + 19280;
loc_82EE87D8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82299698
	ctx.lr = 0x82EE87E4;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ee880c
	if (ctx.cr0.eq) goto loc_82EE880C;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ee3d50
	ctx.lr = 0x82EE8804;
	sub_82EE3D50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ee8810
	goto loc_82EE8810;
loc_82EE880C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EE8810:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee883c
	if (ctx.cr6.eq) goto loc_82EE883C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee8848
	ctx.lr = 0x82EE8820;
	sub_82EE8848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge 0x82ee8840
	if (!ctx.cr0.lt) goto loc_82EE8840;
	// bl 0x82ee48e8
	ctx.lr = 0x82EE8830;
	sub_82EE48E8(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EE883C;
	sub_822996C0(ctx, base);
loc_82EE883C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE8840:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE8848"))) PPC_WEAK_FUNC(sub_82EE8848);
PPC_FUNC_IMPL(__imp__sub_82EE8848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82EE8850;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ee8a64
	if (ctx.cr0.eq) goto loc_82EE8A64;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x82299698
	ctx.lr = 0x82EE8878;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// bne 0x82ee8890
	if (!ctx.cr0.eq) goto loc_82EE8890;
loc_82EE8884:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ee8a68
	goto loc_82EE8A68;
loc_82EE8890:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x82cb16f0
	ctx.lr = 0x82EE88A4;
	sub_82CB16F0(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r25,32(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82EE88B8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82ee88b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EE88B8;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,10(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 10);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rotlwi r8,r10,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82ee88fc
	if (!ctx.cr6.gt) goto loc_82EE88FC;
loc_82EE88F0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82ee8a68
	goto loc_82EE8A68;
loc_82EE88FC:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// beq cr6,0x82ee8a64
	if (ctx.cr6.eq) goto loc_82EE8A64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82EE8918:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82ee88f0
	if (ctx.cr6.gt) goto loc_82EE88F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82ee3bd0
	ctx.lr = 0x82EE8958;
	sub_82EE3BD0(ctx, base);
	// lhz r9,10(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r11,102(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lhz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r9,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r9.u16);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82ee89a8
	if (!ctx.cr6.gt) goto loc_82EE89A8;
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82ee89a4
	if (!ctx.cr0.lt) goto loc_82EE89A4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82EE89A4:
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
loc_82EE89A8:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82ee84e0
	ctx.lr = 0x82EE89BC;
	sub_82EE84E0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stwx r3,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee8884
	if (ctx.cr6.eq) goto loc_82EE8884;
	// lhz r10,102(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r10,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r10.u16);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x82ee89f8
	if (ctx.cr0.eq) goto loc_82EE89F8;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82EE89F8:
	// lwzx r8,r28,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lhz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,44(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82ee8a2c
	if (ctx.cr6.eq) goto loc_82EE8A2C;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82EE8A2C:
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lhz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lhz r9,10(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 10);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// blt cr6,0x82ee8918
	if (ctx.cr6.lt) goto loc_82EE8918;
loc_82EE8A64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE8A68:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE8A70"))) PPC_WEAK_FUNC(sub_82EE8A70);
PPC_FUNC_IMPL(__imp__sub_82EE8A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EE8A78;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee8a9c
	if (ctx.cr6.lt) goto loc_82EE8A9C;
loc_82EE8A94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ee8c94
	goto loc_82EE8C94;
loc_82EE8A9C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82ee8aac
	if (!ctx.cr6.eq) goto loc_82EE8AAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ee8c94
	goto loc_82EE8C94;
loc_82EE8AAC:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ee8ae4
	if (!ctx.cr6.eq) goto loc_82EE8AE4;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EE8AC4;
	sub_82299698(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ee8a94
	if (ctx.cr0.eq) goto loc_82EE8A94;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x82cb16f0
	ctx.lr = 0x82EE8AE4;
	sub_82CB16F0(ctx, base);
loc_82EE8AE4:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee8c8c
	if (!ctx.cr6.eq) goto loc_82EE8C8C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee8b4c
	if (!ctx.cr6.eq) goto loc_82EE8B4C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82299698
	ctx.lr = 0x82EE8B10;
	sub_82299698(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ee8a94
	if (ctx.cr0.eq) goto loc_82EE8A94;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
loc_82EE8B4C:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82EE8B5C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82ee8b5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EE8B5C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// mullw r8,r11,r30
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lhz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// sth r8,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82ee8bb4
	if (!ctx.cr6.gt) goto loc_82EE8BB4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82ee8bb0
	if (!ctx.cr6.lt) goto loc_82EE8BB0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EE8BB0:
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
loc_82EE8BB4:
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x82ee8bc8
	if (ctx.cr0.eq) goto loc_82EE8BC8;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82EE8BC8:
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ee8be8
	if (ctx.cr6.eq) goto loc_82EE8BE8;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82EE8BE8:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,68
	ctx.r3.s64 = 68;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82299698
	ctx.lr = 0x82EE8C08;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ee8c2c
	if (ctx.cr0.eq) goto loc_82EE8C2C;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ee3d50
	ctx.lr = 0x82EE8C28;
	sub_82EE3D50(ctx, base);
	// b 0x82ee8c30
	goto loc_82EE8C30;
loc_82EE8C2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE8C30:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq cr6,0x82ee8a94
	if (ctx.cr6.eq) goto loc_82EE8A94;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82ee8848
	ctx.lr = 0x82EE8C4C;
	sub_82EE8848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee8c8c
	if (!ctx.cr0.lt) goto loc_82EE8C8C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ee8c78
	if (ctx.cr6.eq) goto loc_82EE8C78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ee48e8
	ctx.lr = 0x82EE8C6C;
	sub_82EE48E8(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EE8C78;
	sub_822996C0(ctx, base);
loc_82EE8C78:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x82ee8c94
	goto loc_82EE8C94;
loc_82EE8C8C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
loc_82EE8C94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE8C9C"))) PPC_WEAK_FUNC(sub_82EE8C9C);
PPC_FUNC_IMPL(__imp__sub_82EE8C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE8CA0"))) PPC_WEAK_FUNC(sub_82EE8CA0);
PPC_FUNC_IMPL(__imp__sub_82EE8CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,6992
	ctx.r10.s64 = ctx.r10.s64 + 6992;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8CD0"))) PPC_WEAK_FUNC(sub_82EE8CD0);
PPC_FUNC_IMPL(__imp__sub_82EE8CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82EE8CD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// bl 0x82299698
	ctx.lr = 0x82EE8CF8;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bne 0x82ee8d10
	if (!ctx.cr0.eq) goto loc_82EE8D10;
loc_82EE8D04:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ee8ef8
	goto loc_82EE8EF8;
loc_82EE8D10:
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee8d2c
	if (ctx.cr0.eq) goto loc_82EE8D2C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e6d560
	ctx.lr = 0x82EE8D28;
	sub_82E6D560(ctx, base);
	// b 0x82ee8d34
	goto loc_82EE8D34;
loc_82EE8D2C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EE8D34;
	sub_82CB1160(ctx, base);
loc_82EE8D34:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// bge cr6,0x82ee8d54
	if (!ctx.cr6.lt) goto loc_82EE8D54;
loc_82EE8D48:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82ee8ef8
	goto loc_82EE8EF8;
loc_82EE8D54:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82299698
	ctx.lr = 0x82EE8D64;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// beq 0x82ee8d04
	if (ctx.cr0.eq) goto loc_82EE8D04;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb16f0
	ctx.lr = 0x82EE8D84;
	sub_82CB16F0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82ee8d48
	if (ctx.cr6.gt) goto loc_82EE8D48;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82ee8e60
	if (!ctx.cr6.gt) goto loc_82EE8E60;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
loc_82EE8DD0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82ee8d48
	if (ctx.cr6.gt) goto loc_82EE8D48;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee84e0
	ctx.lr = 0x82EE8DFC;
	sub_82EE84E0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee8d04
	if (ctx.cr6.eq) goto loc_82EE8D04;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lhz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x82ee8e2c
	if (ctx.cr0.eq) goto loc_82EE8E2C;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82EE8E2C:
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lhz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// blt cr6,0x82ee8dd0
	if (ctx.cr6.lt) goto loc_82EE8DD0;
loc_82EE8E60:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82299698
	ctx.lr = 0x82EE8E6C;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// beq 0x82ee8d04
	if (ctx.cr0.eq) goto loc_82EE8D04;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82ee8ef4
	if (!ctx.cr6.gt) goto loc_82EE8EF4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
loc_82EE8E94:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82ee3e00
	ctx.lr = 0x82EE8EA8;
	sub_82EE3E00(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lhz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x82ee8ec4
	if (ctx.cr0.eq) goto loc_82EE8EC4;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82EE8EC4:
	// lwzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r9,44(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// lhz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 8);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// blt cr6,0x82ee8e94
	if (ctx.cr6.lt) goto loc_82EE8E94;
loc_82EE8EF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE8EF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE8F00"))) PPC_WEAK_FUNC(sub_82EE8F00);
PPC_FUNC_IMPL(__imp__sub_82EE8F00) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bne cr6,0x82ee8f3c
	if (!ctx.cr6.eq) goto loc_82EE8F3C;
	// bl 0x82ee7e88
	ctx.lr = 0x82EE8F30;
	sub_82EE7E88(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EE8F3C;
	sub_822996C0(ctx, base);
loc_82EE8F3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82EE8F58"))) PPC_WEAK_FUNC(sub_82EE8F58);
PPC_FUNC_IMPL(__imp__sub_82EE8F58) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// bl 0x82ee8a70
	ctx.lr = 0x82EE8F74;
	sub_82EE8A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ee8f80
	if (ctx.cr0.eq) goto loc_82EE8F80;
	// not r3,r3
	ctx.r3.u64 = ~ctx.r3.u64;
loc_82EE8F80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8F90"))) PPC_WEAK_FUNC(sub_82EE8F90);
PPC_FUNC_IMPL(__imp__sub_82EE8F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EE8F98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_82EE8FA4:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x82ee8fb8
	goto loc_82EE8FB8;
loc_82EE8FB0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
loc_82EE8FB8:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdde8
	ctx.lr = 0x82EE8FC0;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ee8fb0
	if (!ctx.cr0.eq) goto loc_82EE8FB0;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee91c0
	if (ctx.cr0.eq) goto loc_82EE91C0;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// bne cr6,0x82ee909c
	if (!ctx.cr6.eq) goto loc_82EE909C;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// b 0x82ee8ff0
	goto loc_82EE8FF0;
loc_82EE8FE8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
loc_82EE8FF0:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdde8
	ctx.lr = 0x82EE8FF8;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ee8fe8
	if (!ctx.cr0.eq) goto loc_82EE8FE8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdd38
	ctx.lr = 0x82EE900C;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ee91c8
	if (ctx.cr0.eq) goto loc_82EE91C8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// b 0x82ee9044
	goto loc_82EE9044;
loc_82EE9024:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mulli r11,r30,10
	ctx.r11.s64 = ctx.r30.s64 * 10;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,-48
	ctx.r30.s64 = ctx.r11.s64 + -48;
loc_82EE9044:
	// bl 0x82cbdd38
	ctx.lr = 0x82EE9048;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ee9024
	if (!ctx.cr0.eq) goto loc_82EE9024;
	// b 0x82ee9058
	goto loc_82EE9058;
loc_82EE9054:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82EE9058:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdde8
	ctx.lr = 0x82EE9064;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ee9054
	if (!ctx.cr0.eq) goto loc_82EE9054;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x82ee91c8
	if (!ctx.cr6.eq) goto loc_82EE91C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ee8a70
	ctx.lr = 0x82EE9084;
	sub_82EE8A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ee91c8
	if (ctx.cr0.eq) goto loc_82EE91C8;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82EE9094:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82ee8fa4
	goto loc_82EE8FA4;
loc_82EE909C:
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x82ee90b4
	if (ctx.cr6.eq) goto loc_82EE90B4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82ee91c8
	if (ctx.cr6.eq) goto loc_82EE91C8;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x82ee90b8
	if (!ctx.cr6.eq) goto loc_82EE90B8;
loc_82EE90B4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82EE90B8:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdde8
	ctx.lr = 0x82EE90C4;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ee90b4
	if (!ctx.cr0.eq) goto loc_82EE90B4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EE90D0:
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbde98
	ctx.lr = 0x82EE90DC;
	sub_82CBDE98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ee90f0
	if (!ctx.cr0.eq) goto loc_82EE90F0;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82ee90f8
	if (!ctx.cr6.eq) goto loc_82EE90F8;
loc_82EE90F0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82ee90d0
	goto loc_82EE90D0;
loc_82EE90F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee91c8
	if (ctx.cr6.eq) goto loc_82EE91C8;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,10(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
loc_82EE9110:
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82ee91c8
	if (!ctx.cr6.lt) goto loc_82EE91C8;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee918c
	if (ctx.cr6.eq) goto loc_82EE918C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82ee9178
	if (ctx.cr6.eq) goto loc_82EE9178;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r7,r30,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r30.s64;
loc_82EE914C:
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82ee918c
	if (ctx.cr6.lt) goto loc_82EE918C;
	// bgt cr6,0x82ee918c
	if (ctx.cr6.gt) goto loc_82EE918C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82ee914c
	if (ctx.cr6.lt) goto loc_82EE914C;
loc_82EE9178:
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82ee9198
	if (!ctx.cr6.eq) goto loc_82EE9198;
	// lbzx r11,r9,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee9198
	if (ctx.cr6.eq) goto loc_82EE9198;
loc_82EE918C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x82ee9110
	goto loc_82EE9110;
loc_82EE9198:
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82ee91c8
	if (!ctx.cr6.lt) goto loc_82EE91C8;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee91c8
	if (ctx.cr6.eq) goto loc_82EE91C8;
	// add r4,r31,r30
	ctx.r4.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x82ee9094
	goto loc_82EE9094;
loc_82EE91C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82ee91cc
	goto loc_82EE91CC;
loc_82EE91C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE91CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE91D4"))) PPC_WEAK_FUNC(sub_82EE91D4);
PPC_FUNC_IMPL(__imp__sub_82EE91D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE91D8"))) PPC_WEAK_FUNC(sub_82EE91D8);
PPC_FUNC_IMPL(__imp__sub_82EE91D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EE91E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ee9204
	if (!ctx.cr6.eq) goto loc_82EE9204;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82ee92e4
	goto loc_82EE92E4;
loc_82EE9204:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,4138
	ctx.r10.s64 = 271187968;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// rlwinm r11,r11,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ee92ec
	if (!ctx.cr6.eq) goto loc_82EE92EC;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee9314
	if (ctx.cr6.eq) goto loc_82EE9314;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82EE9250:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ee8cd0
	ctx.lr = 0x82EE9264;
	sub_82EE8CD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee92e4
	if (ctx.cr0.lt) goto loc_82EE92E4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ee92e0
	if (ctx.cr6.eq) goto loc_82EE92E0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x82ee92cc
	if (!ctx.cr6.gt) goto loc_82EE92CC;
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82EE929C:
	// lhz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82ee92c0
	if (!ctx.cr6.eq) goto loc_82EE92C0;
	// lhz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ee92c0
	if (!ctx.cr6.lt) goto loc_82EE92C0;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82EE92C0:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bne 0x82ee929c
	if (!ctx.cr0.eq) goto loc_82EE929C;
loc_82EE92CC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r3,r8,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82ee3af8
	ctx.lr = 0x82EE92D8;
	sub_82EE3AF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee92e4
	if (ctx.cr0.lt) goto loc_82EE92E4;
loc_82EE92E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE92E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82EE92EC:
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// lis r4,16961
	ctx.r4.s64 = 1111556096;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r4,r4,21571
	ctx.r4.u64 = ctx.r4.u64 | 21571;
	// bl 0x82ec9228
	ctx.lr = 0x82EE9304;
	sub_82EC9228(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee92e4
	if (ctx.cr0.lt) goto loc_82EE92E4;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82ee9250
	if (!ctx.cr6.eq) goto loc_82EE9250;
loc_82EE9314:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82ee92e4
	goto loc_82EE92E4;
}

__attribute__((alias("__imp__sub_82EE9320"))) PPC_WEAK_FUNC(sub_82EE9320);
PPC_FUNC_IMPL(__imp__sub_82EE9320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EE9328;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// b 0x82ee9348
	goto loc_82EE9348;
loc_82EE9340:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
loc_82EE9348:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdde8
	ctx.lr = 0x82EE9350;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ee9340
	if (!ctx.cr0.eq) goto loc_82EE9340;
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbde98
	ctx.lr = 0x82EE9364;
	sub_82CBDE98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ee9390
	if (!ctx.cr0.eq) goto loc_82EE9390;
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x82ee9390
	if (ctx.cr6.eq) goto loc_82EE9390;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// beq cr6,0x82ee9390
	if (ctx.cr6.eq) goto loc_82EE9390;
loc_82EE9384:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82ee9584
	goto loc_82EE9584;
loc_82EE9390:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82EE9394:
	// lbzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r26.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbde98
	ctx.lr = 0x82EE93A0;
	sub_82CBDE98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ee93b4
	if (!ctx.cr0.eq) goto loc_82EE93B4;
	// lbzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82ee93bc
	if (!ctx.cr6.eq) goto loc_82EE93BC;
loc_82EE93B4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82ee9394
	goto loc_82EE9394;
loc_82EE93BC:
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ee9454
	if (ctx.cr6.eq) goto loc_82EE9454;
loc_82EE93E0:
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r31,r11,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mulli r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 * 20;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x82ee9434
	if (ctx.cr6.eq) goto loc_82EE9434;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r4,r26,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r26.s64;
loc_82EE9408:
	// lbzx r8,r4,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82ee9578
	if (ctx.cr6.lt) goto loc_82EE9578;
	// bgt cr6,0x82ee9448
	if (ctx.cr6.gt) goto loc_82EE9448;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82ee9408
	if (ctx.cr6.lt) goto loc_82EE9408;
loc_82EE9434:
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82ee9454
	if (!ctx.cr6.eq) goto loc_82EE9454;
	// lbzx r11,r9,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee9454
	if (ctx.cr6.eq) goto loc_82EE9454;
loc_82EE9448:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82EE944C:
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ee93e0
	if (ctx.cr6.lt) goto loc_82EE93E0;
loc_82EE9454:
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ee9384
	if (ctx.cr6.eq) goto loc_82EE9384;
	// mulli r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 * 20;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r27,r10,r3
	ctx.r27.u64 = ctx.r10.u64 + ctx.r3.u64;
	// beq cr6,0x82ee94c4
	if (ctx.cr6.eq) goto loc_82EE94C4;
	// addi r8,r11,-20
	ctx.r8.s64 = ctx.r11.s64 + -20;
loc_82EE9478:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ee94b8
	if (ctx.cr6.eq) goto loc_82EE94B8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82EE948C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82ee94b0
	if (ctx.cr0.eq) goto loc_82EE94B0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ee948c
	if (ctx.cr6.eq) goto loc_82EE948C;
loc_82EE94B0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ee94c4
	if (!ctx.cr0.eq) goto loc_82EE94C4;
loc_82EE94B8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r8,r8,-20
	ctx.r8.s64 = ctx.r8.s64 + -20;
	// bne 0x82ee9478
	if (!ctx.cr0.eq) goto loc_82EE9478;
loc_82EE94C4:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82ee8f90
	ctx.lr = 0x82EE94E0;
	sub_82EE8F90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ee9384
	if (ctx.cr0.eq) goto loc_82EE9384;
	// mulli r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 * 20;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82EE94F0:
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r24,r3,36
	ctx.r24.s64 = ctx.r3.s64 + 36;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ee9580
	if (!ctx.cr6.lt) goto loc_82EE9580;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ee9558
	if (ctx.cr6.eq) goto loc_82EE9558;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82EE952C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82ee9550
	if (ctx.cr0.eq) goto loc_82EE9550;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ee952c
	if (ctx.cr6.eq) goto loc_82EE952C;
loc_82EE9550:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ee9580
	if (!ctx.cr0.eq) goto loc_82EE9580;
loc_82EE9558:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82ee8f90
	ctx.lr = 0x82EE956C;
	sub_82EE8F90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ee94f0
	if (!ctx.cr0.eq) goto loc_82EE94F0;
	// b 0x82ee9384
	goto loc_82EE9384;
loc_82EE9578:
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// b 0x82ee944c
	goto loc_82EE944C;
loc_82EE9580:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE9584:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE958C"))) PPC_WEAK_FUNC(sub_82EE958C);
PPC_FUNC_IMPL(__imp__sub_82EE958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9590"))) PPC_WEAK_FUNC(sub_82EE9590);
PPC_FUNC_IMPL(__imp__sub_82EE9590) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee95c4
	if (!ctx.cr6.eq) goto loc_82EE95C4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee9320
	ctx.lr = 0x82EE95B4;
	sub_82EE9320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ee95dc
	if (!ctx.cr0.lt) goto loc_82EE95DC;
loc_82EE95BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ee95e4
	goto loc_82EE95E4;
loc_82EE95C4:
	// li r5,1
	ctx.r5.s64 = 1;
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// bl 0x82ee8f90
	ctx.lr = 0x82EE95D0;
	sub_82EE8F90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ee95e0
	if (!ctx.cr0.eq) goto loc_82EE95E0;
	// b 0x82ee95bc
	goto loc_82EE95BC;
loc_82EE95DC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EE95E0:
	// not r3,r3
	ctx.r3.u64 = ~ctx.r3.u64;
loc_82EE95E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE95F4"))) PPC_WEAK_FUNC(sub_82EE95F4);
PPC_FUNC_IMPL(__imp__sub_82EE95F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE95F8"))) PPC_WEAK_FUNC(sub_82EE95F8);
PPC_FUNC_IMPL(__imp__sub_82EE95F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9628"))) PPC_WEAK_FUNC(sub_82EE9628);
PPC_FUNC_IMPL(__imp__sub_82EE9628) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82ee963c
	if (!ctx.cr6.gt) goto loc_82EE963C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82EE963C:
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9648"))) PPC_WEAK_FUNC(sub_82EE9648);
PPC_FUNC_IMPL(__imp__sub_82EE9648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EE9650;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ee96f4
	if (ctx.cr6.eq) goto loc_82EE96F4;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee9678
	if (!ctx.cr6.eq) goto loc_82EE9678;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82ee96f4
	goto loc_82EE96F4;
loc_82EE9678:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82ee3870
	ctx.lr = 0x82EE9684;
	sub_82EE3870(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ee96f8
	if (ctx.cr0.lt) goto loc_82EE96F8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE96A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// b 0x82ee96ec
	goto loc_82EE96EC;
loc_82EE96B8:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EE96C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ee96c0
	if (!ctx.cr6.eq) goto loc_82EE96C0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r30,r5,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r5.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EE96E8;
	sub_82CB1160(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82EE96EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ee96b8
	if (!ctx.cr6.eq) goto loc_82EE96B8;
loc_82EE96F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE96F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE9700"))) PPC_WEAK_FUNC(sub_82EE9700);
PPC_FUNC_IMPL(__imp__sub_82EE9700) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9708"))) PPC_WEAK_FUNC(sub_82EE9708);
PPC_FUNC_IMPL(__imp__sub_82EE9708) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9710"))) PPC_WEAK_FUNC(sub_82EE9710);
PPC_FUNC_IMPL(__imp__sub_82EE9710) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9738"))) PPC_WEAK_FUNC(sub_82EE9738);
PPC_FUNC_IMPL(__imp__sub_82EE9738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE973C"))) PPC_WEAK_FUNC(sub_82EE973C);
PPC_FUNC_IMPL(__imp__sub_82EE973C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9740"))) PPC_WEAK_FUNC(sub_82EE9740);
PPC_FUNC_IMPL(__imp__sub_82EE9740) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ee97c8
	if (ctx.cr6.eq) goto loc_82EE97C8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ee97c8
	if (ctx.cr6.eq) goto loc_82EE97C8;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82ee978c
	if (!ctx.cr6.eq) goto loc_82EE978C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ee9788
	if (ctx.cr6.eq) goto loc_82EE9788;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82EE9768:
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82ee9768
	if (!ctx.cr6.eq) goto loc_82EE9768;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x82ee978c
	goto loc_82EE978C;
loc_82EE9788:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82EE978C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ee979c
	if (!ctx.cr6.eq) goto loc_82EE979C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82ee97c8
	if (!ctx.cr6.eq) goto loc_82EE97C8;
loc_82EE979C:
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r5,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r5.u32);
	// blr 
	return;
loc_82EE97C8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE97D4"))) PPC_WEAK_FUNC(sub_82EE97D4);
PPC_FUNC_IMPL(__imp__sub_82EE97D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE97D8"))) PPC_WEAK_FUNC(sub_82EE97D8);
PPC_FUNC_IMPL(__imp__sub_82EE97D8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE97E0"))) PPC_WEAK_FUNC(sub_82EE97E0);
PPC_FUNC_IMPL(__imp__sub_82EE97E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ee97fc
	if (ctx.cr6.eq) goto loc_82EE97FC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_82EE97FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9804"))) PPC_WEAK_FUNC(sub_82EE9804);
PPC_FUNC_IMPL(__imp__sub_82EE9804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9808"))) PPC_WEAK_FUNC(sub_82EE9808);
PPC_FUNC_IMPL(__imp__sub_82EE9808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EE9810;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ee98b0
	if (!ctx.cr6.lt) goto loc_82EE98B0;
	// lbz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// bl 0x82cbdd38
	ctx.lr = 0x82EE983C;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ee98b0
	if (ctx.cr0.eq) goto loc_82EE98B0;
	// addi r30,r26,1
	ctx.r30.s64 = ctx.r26.s64 + 1;
	// b 0x82ee9860
	goto loc_82EE9860;
loc_82EE984C:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82cbdd38
	ctx.lr = 0x82EE9854;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ee986c
	if (ctx.cr0.eq) goto loc_82EE986C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82EE9860:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee984c
	if (ctx.cr6.lt) goto loc_82EE984C;
loc_82EE986C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ee9884
	if (!ctx.cr6.lt) goto loc_82EE9884;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x82ee98a0
	if (ctx.cr6.eq) goto loc_82EE98A0;
loc_82EE9884:
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82ee9904
	goto loc_82EE9904;
loc_82EE988C:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82cbdd38
	ctx.lr = 0x82EE9894;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ee9904
	if (ctx.cr0.eq) goto loc_82EE9904;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_82EE98A0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee988c
	if (ctx.cr6.lt) goto loc_82EE988C;
	// b 0x82ee9904
	goto loc_82EE9904;
loc_82EE98B0:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ee9aac
	if (!ctx.cr6.lt) goto loc_82EE9AAC;
	// lbz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x82ee9aac
	if (!ctx.cr6.eq) goto loc_82EE9AAC;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x82cbdd38
	ctx.lr = 0x82EE98D4;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ee9aac
	if (ctx.cr0.eq) goto loc_82EE9AAC;
	// addi r30,r26,2
	ctx.r30.s64 = ctx.r26.s64 + 2;
	// b 0x82ee98f8
	goto loc_82EE98F8;
loc_82EE98E4:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82cbdd38
	ctx.lr = 0x82EE98EC;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ee9904
	if (ctx.cr0.eq) goto loc_82EE9904;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82EE98F8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee98e4
	if (ctx.cr6.lt) goto loc_82EE98E4;
loc_82EE9904:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ee9960
	if (!ctx.cr6.lt) goto loc_82EE9960;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82cc8f70
	ctx.lr = 0x82EE991C;
	sub_82CC8F70(ctx, base);
	// cmpwi cr6,r3,101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 101, ctx.xer);
	// bne cr6,0x82ee9960
	if (!ctx.cr6.eq) goto loc_82EE9960;
	// lbz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x82cbdd38
	ctx.lr = 0x82EE992C;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ee9960
	if (ctx.cr0.eq) goto loc_82EE9960;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x82ee9950
	goto loc_82EE9950;
loc_82EE993C:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82cbdd38
	ctx.lr = 0x82EE9944;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ee9a48
	if (ctx.cr0.eq) goto loc_82EE9A48;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82EE9950:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee993c
	if (ctx.cr6.lt) goto loc_82EE993C;
	// b 0x82ee9a48
	goto loc_82EE9A48;
loc_82EE9960:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ee99d4
	if (!ctx.cr6.lt) goto loc_82EE99D4;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82cc8f70
	ctx.lr = 0x82EE9978;
	sub_82CC8F70(ctx, base);
	// cmpwi cr6,r3,101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 101, ctx.xer);
	// bne cr6,0x82ee99d4
	if (!ctx.cr6.eq) goto loc_82EE99D4;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82ee9998
	if (ctx.cr6.eq) goto loc_82EE9998;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82ee99d4
	if (!ctx.cr6.eq) goto loc_82EE99D4;
loc_82EE9998:
	// lbz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82cbdd38
	ctx.lr = 0x82EE99A0;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ee99d4
	if (ctx.cr0.eq) goto loc_82EE99D4;
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// b 0x82ee99c4
	goto loc_82EE99C4;
loc_82EE99B0:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82cbdd38
	ctx.lr = 0x82EE99B8;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ee9a48
	if (ctx.cr0.eq) goto loc_82EE9A48;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82EE99C4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee99b0
	if (ctx.cr6.lt) goto loc_82EE99B0;
	// b 0x82ee9a48
	goto loc_82EE9A48;
loc_82EE99D4:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bne cr6,0x82ee9a40
	if (!ctx.cr6.eq) goto loc_82EE9A40;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r27,r11,7136
	ctx.r27.s64 = ctx.r11.s64 + 7136;
loc_82EE99E8:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EE99F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ee99f0
	if (!ctx.cr6.eq) goto loc_82EE99F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 + ctx.r26.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ee9a30
	if (ctx.cr6.gt) goto loc_82EE9A30;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb80e0
	ctx.lr = 0x82EE9A28;
	sub_82CB80E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ee9a9c
	if (ctx.cr0.eq) goto loc_82EE9A9C;
loc_82EE9A30:
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee99e8
	if (!ctx.cr6.eq) goto loc_82EE99E8;
loc_82EE9A40:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82ee9aac
	if (!ctx.cr6.eq) goto loc_82EE9AAC;
loc_82EE9A48:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ee9a94
	if (ctx.cr6.eq) goto loc_82EE9A94;
	// subf r29,r26,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r26.s64;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82EE9A64;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EE9A80;
	sub_82CB1160(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stbx r11,r28,r29
	PPC_STORE_U8(ctx.r28.u32 + ctx.r29.u32, ctx.r11.u8);
	// bl 0x82cb6c40
	ctx.lr = 0x82EE9A90;
	sub_82CB6C40(ctx, base);
	// stfd f1,0(r24)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.f1.u64);
loc_82EE9A94:
	// subf r3,r26,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r26.s64;
	// b 0x82ee9ab0
	goto loc_82EE9AB0;
loc_82EE9A9C:
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfd f0,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.f0.u64);
	// b 0x82ee9ab0
	goto loc_82EE9AB0;
loc_82EE9AAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE9AB0:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE9AB8"))) PPC_WEAK_FUNC(sub_82EE9AB8);
PPC_FUNC_IMPL(__imp__sub_82EE9AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82EE9AC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ee9b24
	if (!ctx.cr6.lt) goto loc_82EE9B24;
	// lbz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// bl 0x82cbdc30
	ctx.lr = 0x82EE9AE8;
	sub_82CBDC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ee9b4c
	if (!ctx.cr0.eq) goto loc_82EE9B4C;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// beq cr6,0x82ee9b4c
	if (ctx.cr6.eq) goto loc_82EE9B4C;
	// lwz r10,52(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ee9b24
	if (ctx.cr6.eq) goto loc_82EE9B24;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ee9b24
	if (!ctx.cr0.eq) goto loc_82EE9B24;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82cbde98
	ctx.lr = 0x82EE9B1C;
	sub_82CBDE98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ee9b4c
	if (!ctx.cr0.eq) goto loc_82EE9B4C;
loc_82EE9B24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE9B28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82EE9B30:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82cbde98
	ctx.lr = 0x82EE9B38;
	sub_82CBDE98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ee9b4c
	if (!ctx.cr0.eq) goto loc_82EE9B4C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82ee9b5c
	if (!ctx.cr6.eq) goto loc_82EE9B5C;
loc_82EE9B4C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee9b30
	if (ctx.cr6.lt) goto loc_82EE9B30;
loc_82EE9B5C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ee9bb0
	if (!ctx.cr6.lt) goto loc_82EE9BB0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x82ee9bb0
	if (!ctx.cr6.eq) goto loc_82EE9BB0;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x82ee9bb0
	if (!ctx.cr6.eq) goto loc_82EE9BB0;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82cbde98
	ctx.lr = 0x82EE9B8C;
	sub_82CBDE98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ee9ba0
	if (!ctx.cr0.eq) goto loc_82EE9BA0;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82ee9bb0
	if (!ctx.cr6.eq) goto loc_82EE9BB0;
loc_82EE9BA0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee9b4c
	if (ctx.cr6.lt) goto loc_82EE9B4C;
loc_82EE9BB0:
	// subf r31,r28,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r28.s64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82ee9b24
	if (ctx.cr6.lt) goto loc_82EE9B24;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// bl 0x82f15fc0
	ctx.lr = 0x82EE9BCC;
	sub_82F15FC0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82ee9b24
	if (ctx.cr0.eq) goto loc_82EE9B24;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EE9BE4;
	sub_82CB1160(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r11,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u8);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// b 0x82ee9b28
	goto loc_82EE9B28;
}

__attribute__((alias("__imp__sub_82EE9BF8"))) PPC_WEAK_FUNC(sub_82EE9BF8);
PPC_FUNC_IMPL(__imp__sub_82EE9BF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82ee9cd4
	if (!ctx.cr6.lt) goto loc_82EE9CD4;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bne cr6,0x82ee9c4c
	if (!ctx.cr6.eq) goto loc_82EE9C4C;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,35
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 35, ctx.xer);
	// beq cr6,0x82ee9c40
	if (ctx.cr6.eq) goto loc_82EE9C40;
	// cmpwi cr6,r8,64
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 64, ctx.xer);
	// bne cr6,0x82ee9c4c
	if (!ctx.cr6.eq) goto loc_82EE9C4C;
loc_82EE9C40:
	// stb r9,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r9.u8);
loc_82EE9C44:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82EE9C4C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82ee9d08
	if (!ctx.cr6.eq) goto loc_82EE9D08;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// bgt cr6,0x82ee9cb4
	if (ctx.cr6.gt) goto loc_82EE9CB4;
	// beq cr6,0x82ee9c40
	if (ctx.cr6.eq) goto loc_82EE9C40;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// beq cr6,0x82ee9c40
	if (ctx.cr6.eq) goto loc_82EE9C40;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82ee9c40
	if (ctx.cr6.eq) goto loc_82EE9C40;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82ee9c40
	if (ctx.cr6.eq) goto loc_82EE9C40;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x82ee9cd4
	if (!ctx.cr6.eq) goto loc_82EE9CD4;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82ee9cd4
	if (!ctx.cr6.lt) goto loc_82EE9CD4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x82ee9cd4
	if (!ctx.cr6.eq) goto loc_82EE9CD4;
	// stb r9,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r9.u8);
	// li r3,3
	ctx.r3.s64 = 3;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r11.u8);
	// blr 
	return;
loc_82EE9CB4:
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// beq cr6,0x82ee9cdc
	if (ctx.cr6.eq) goto loc_82EE9CDC;
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// beq cr6,0x82ee9c40
	if (ctx.cr6.eq) goto loc_82EE9C40;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// beq cr6,0x82ee9cdc
	if (ctx.cr6.eq) goto loc_82EE9CDC;
loc_82EE9CCC:
	// cmpwi cr6,r11,124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 124, ctx.xer);
loc_82EE9CD0:
	// beq cr6,0x82ee9c40
	if (ctx.cr6.eq) goto loc_82EE9C40;
loc_82EE9CD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82EE9CDC:
	// stb r9,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r9.u8);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ee9c44
	if (!ctx.cr6.lt) goto loc_82EE9C44;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x82ee9c44
	if (!ctx.cr6.eq) goto loc_82EE9C44;
	// stb r11,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r11.u8);
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82EE9D08:
	// cmpwi cr6,r10,61
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 61, ctx.xer);
	// bne cr6,0x82ee9d6c
	if (!ctx.cr6.eq) goto loc_82EE9D6C;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// bgt cr6,0x82ee9d50
	if (ctx.cr6.gt) goto loc_82EE9D50;
	// beq cr6,0x82ee9c40
	if (ctx.cr6.eq) goto loc_82EE9C40;
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x82ee9c40
	if (ctx.cr6.eq) goto loc_82EE9C40;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// ble cr6,0x82ee9cd4
	if (!ctx.cr6.gt) goto loc_82EE9CD4;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// ble cr6,0x82ee9c40
	if (!ctx.cr6.gt) goto loc_82EE9C40;
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// ble cr6,0x82ee9cd4
	if (!ctx.cr6.gt) goto loc_82EE9CD4;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// ble cr6,0x82ee9c40
	if (!ctx.cr6.gt) goto loc_82EE9C40;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82ee9c40
	if (ctx.cr6.eq) goto loc_82EE9C40;
	// b 0x82ee9cd4
	goto loc_82EE9CD4;
loc_82EE9D50:
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// beq cr6,0x82ee9c40
	if (ctx.cr6.eq) goto loc_82EE9C40;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// beq cr6,0x82ee9c40
	if (ctx.cr6.eq) goto loc_82EE9C40;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x82ee9c40
	if (ctx.cr6.eq) goto loc_82EE9C40;
	// b 0x82ee9ccc
	goto loc_82EE9CCC;
loc_82EE9D6C:
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82ee9cd4
	if (!ctx.cr6.eq) goto loc_82EE9CD4;
	// cmpwi cr6,r10,62
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 62, ctx.xer);
	// b 0x82ee9cd0
	goto loc_82EE9CD0;
}

__attribute__((alias("__imp__sub_82EE9D7C"))) PPC_WEAK_FUNC(sub_82EE9D7C);
PPC_FUNC_IMPL(__imp__sub_82EE9D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9D80"))) PPC_WEAK_FUNC(sub_82EE9D80);
PPC_FUNC_IMPL(__imp__sub_82EE9D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EE9D88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r30,5
	ctx.r30.s64 = 5;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee9db0
	if (ctx.cr6.lt) goto loc_82EE9DB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ee9dec
	goto loc_82EE9DEC;
loc_82EE9DB0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cc8f70
	ctx.lr = 0x82EE9DBC;
	sub_82CC8F70(ctx, base);
	// cmpwi cr6,r3,102
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 102, ctx.xer);
	// beq cr6,0x82ee9dd4
	if (ctx.cr6.eq) goto loc_82EE9DD4;
	// cmpwi cr6,r3,104
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 104, ctx.xer);
	// bne cr6,0x82ee9ddc
	if (!ctx.cr6.eq) goto loc_82EE9DDC;
	// li r30,6
	ctx.r30.s64 = 6;
	// b 0x82ee9dd8
	goto loc_82EE9DD8;
loc_82EE9DD4:
	// li r30,7
	ctx.r30.s64 = 7;
loc_82EE9DD8:
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
loc_82EE9DDC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ee9de8
	if (ctx.cr6.eq) goto loc_82EE9DE8;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_82EE9DE8:
	// subf r3,r31,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_82EE9DEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE9DF4"))) PPC_WEAK_FUNC(sub_82EE9DF4);
PPC_FUNC_IMPL(__imp__sub_82EE9DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9DF8"))) PPC_WEAK_FUNC(sub_82EE9DF8);
PPC_FUNC_IMPL(__imp__sub_82EE9DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EE9E00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ee9e7c
	if (!ctx.cr6.lt) goto loc_82EE9E7C;
loc_82EE9E28:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82ee9e4c
	if (!ctx.cr6.eq) goto loc_82EE9E4C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cc8f70
	ctx.lr = 0x82EE9E3C;
	sub_82CC8F70(ctx, base);
	// cmpwi cr6,r3,117
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 117, ctx.xer);
	// bne cr6,0x82ee9e4c
	if (!ctx.cr6.eq) goto loc_82EE9E4C;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82ee9e6c
	goto loc_82EE9E6C;
loc_82EE9E4C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82ee9e7c
	if (!ctx.cr6.eq) goto loc_82EE9E7C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cc8f70
	ctx.lr = 0x82EE9E60;
	sub_82CC8F70(ctx, base);
	// cmpwi cr6,r3,108
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 108, ctx.xer);
	// bne cr6,0x82ee9e7c
	if (!ctx.cr6.eq) goto loc_82EE9E7C;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EE9E6C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ee9e28
	if (ctx.cr6.lt) goto loc_82EE9E28;
loc_82EE9E7C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ee9ea4
	if (ctx.cr6.eq) goto loc_82EE9EA4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82ee9e94
	if (ctx.cr6.eq) goto loc_82EE9E94;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82ee9ea0
	goto loc_82EE9EA0;
loc_82EE9E94:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82ee9ea4
	if (ctx.cr6.eq) goto loc_82EE9EA4;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82EE9EA0:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82EE9EA4:
	// subf r3,r30,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE9EB0"))) PPC_WEAK_FUNC(sub_82EE9EB0);
PPC_FUNC_IMPL(__imp__sub_82EE9EB0) {
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
	// b 0x82ee9edc
	goto loc_82EE9EDC;
loc_82EE9ECC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822996c0
	ctx.lr = 0x82EE9ED8;
	sub_822996C0(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_82EE9EDC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee9ecc
	if (!ctx.cr6.eq) goto loc_82EE9ECC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822996c0
	ctx.lr = 0x82EE9EF4;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822996c0
	ctx.lr = 0x82EE9F00;
	sub_822996C0(ctx, base);
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

__attribute__((alias("__imp__sub_82EE9F18"))) PPC_WEAK_FUNC(sub_82EE9F18);
PPC_FUNC_IMPL(__imp__sub_82EE9F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EE9F20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r29,r11,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ee9f88
	if (ctx.cr0.eq) goto loc_82EE9F88;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82EE9F50:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ee9f68
	if (!ctx.cr6.gt) goto loc_82EE9F68;
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// b 0x82ee9f70
	goto loc_82EE9F70;
loc_82EE9F68:
	// bge cr6,0x82ee9f80
	if (!ctx.cr6.lt) goto loc_82EE9F80;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82EE9F70:
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r29,r10,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// blt cr6,0x82ee9f50
	if (ctx.cr6.lt) goto loc_82EE9F50;
loc_82EE9F80:
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eea0a0
	if (ctx.cr6.lt) goto loc_82EEA0A0;
loc_82EE9F88:
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eea03c
	if (!ctx.cr6.eq) goto loc_82EEA03C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82ee9fac
	if (!ctx.cr6.eq) goto loc_82EE9FAC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EE9FAC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82299698
	ctx.lr = 0x82EE9FB8;
	sub_82299698(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82eea00c
	if (ctx.cr0.eq) goto loc_82EEA00C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x82EE9FD4;
	sub_82CB1160(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822996c0
	ctx.lr = 0x82EE9FE0;
	sub_822996C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82ee9ff8
	if (!ctx.cr6.eq) goto loc_82EE9FF8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EE9FF8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82299698
	ctx.lr = 0x82EEA004;
	sub_82299698(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82eea018
	if (!ctx.cr0.eq) goto loc_82EEA018;
loc_82EEA00C:
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// b 0x82eea0ac
	goto loc_82EEA0AC;
loc_82EEA018:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x82EEA02C;
	sub_82CB1160(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822996c0
	ctx.lr = 0x82EEA038;
	sub_822996C0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82EEA03C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82eea07c
	if (!ctx.cr6.gt) goto loc_82EEA07C;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
loc_82EEA050:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne 0x82eea050
	if (!ctx.cr0.eq) goto loc_82EEA050;
loc_82EEA07C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EEA0A0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eea0ac
	if (ctx.cr6.eq) goto loc_82EEA0AC;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
loc_82EEA0AC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822996c0
	ctx.lr = 0x82EEA0B8;
	sub_822996C0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEA0C4"))) PPC_WEAK_FUNC(sub_82EEA0C4);
PPC_FUNC_IMPL(__imp__sub_82EEA0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEA0C8"))) PPC_WEAK_FUNC(sub_82EEA0C8);
PPC_FUNC_IMPL(__imp__sub_82EEA0C8) {
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
	// b 0x82eea0f8
	goto loc_82EEA0F8;
loc_82EEA0E4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822996c0
	ctx.lr = 0x82EEA0F4;
	sub_822996C0(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_82EEA0F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eea0e4
	if (!ctx.cr6.eq) goto loc_82EEA0E4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// ble cr6,0x82eea148
	if (!ctx.cr6.gt) goto loc_82EEA148;
loc_82EEA120:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,0,27,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eea120
	if (ctx.cr6.lt) goto loc_82EEA120;
loc_82EEA148:
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

__attribute__((alias("__imp__sub_82EEA164"))) PPC_WEAK_FUNC(sub_82EEA164);
PPC_FUNC_IMPL(__imp__sub_82EEA164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEA168"))) PPC_WEAK_FUNC(sub_82EEA168);
PPC_FUNC_IMPL(__imp__sub_82EEA168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EEA170;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82EEA180:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eea180
	if (!ctx.cr6.eq) goto loc_82EEA180;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82299698
	ctx.lr = 0x82EEA1AC;
	sub_82299698(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eea1c0
	if (!ctx.cr0.eq) goto loc_82EEA1C0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eea1f0
	goto loc_82EEA1F0;
loc_82EEA1C0:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82EEA1EC;
	sub_82CB1160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEA1F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEA1F8"))) PPC_WEAK_FUNC(sub_82EEA1F8);
PPC_FUNC_IMPL(__imp__sub_82EEA1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eea234
	if (!ctx.cr6.gt) goto loc_82EEA234;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eea248
	goto loc_82EEA248;
loc_82EEA234:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eaad20
	ctx.lr = 0x82EEA248;
	sub_82EAAD20(ctx, base);
loc_82EEA248:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEA258"))) PPC_WEAK_FUNC(sub_82EEA258);
PPC_FUNC_IMPL(__imp__sub_82EEA258) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ee9f18
	ctx.lr = 0x82EEA27C;
	sub_82EE9F18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eea2ec
	if (ctx.cr0.lt) goto loc_82EEA2EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,255
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 255, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x82eea2b4
	if (!ctx.cr6.eq) goto loc_82EEA2B4;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// b 0x82eea2e8
	goto loc_82EEA2E8;
loc_82EEA2B4:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// bne cr6,0x82eea2cc
	if (!ctx.cr6.eq) goto loc_82EEA2CC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x82eea2ec
	goto loc_82EEA2EC;
loc_82EEA2CC:
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// rlwinm r8,r8,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
loc_82EEA2E8:
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82EEA2EC:
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

__attribute__((alias("__imp__sub_82EEA304"))) PPC_WEAK_FUNC(sub_82EEA304);
PPC_FUNC_IMPL(__imp__sub_82EEA304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEA308"))) PPC_WEAK_FUNC(sub_82EEA308);
PPC_FUNC_IMPL(__imp__sub_82EEA308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EEA310;
	__savegprlr_26(ctx, base);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4256(r1)
	ea = -4256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// li r30,4092
	ctx.r30.s64 = 4092;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eea404
	if (ctx.cr6.eq) goto loc_82EEA404;
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82eea3a8
	if (ctx.cr6.eq) goto loc_82EEA3A8;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r4,4092
	ctx.r4.s64 = 4092;
	// addi r5,r11,-18112
	ctx.r5.s64 = ctx.r11.s64 + -18112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eea1f8
	ctx.lr = 0x82EEA368;
	sub_82EEA1F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eea4c8
	if (ctx.cr0.lt) goto loc_82EEA4C8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EEA378:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eea378
	if (!ctx.cr6.eq) goto loc_82EEA378;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82eea39c
	if (!ctx.cr0.lt) goto loc_82EEA39C;
	// li r11,4092
	ctx.r11.s64 = 4092;
loc_82EEA39C:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// subfic r30,r11,4092
	ctx.xer.ca = ctx.r11.u32 <= 4092;
	ctx.r30.s64 = 4092 - ctx.r11.s64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EEA3A8:
	// lwz r6,20(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82eea3b8
	if (!ctx.cr6.eq) goto loc_82EEA3B8;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82EEA3B8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,7232
	ctx.r5.s64 = ctx.r11.s64 + 7232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eea1f8
	ctx.lr = 0x82EEA3CC;
	sub_82EEA1F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eea4c8
	if (ctx.cr0.lt) goto loc_82EEA4C8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82EEA3D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eea3d8
	if (!ctx.cr6.eq) goto loc_82EEA3D8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82eea3fc
	if (!ctx.cr0.lt) goto loc_82EEA3FC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EEA3FC:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_82EEA404:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eea45c
	if (ctx.cr6.eq) goto loc_82EEA45C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,7220
	ctx.r5.s64 = ctx.r11.s64 + 7220;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eea1f8
	ctx.lr = 0x82EEA424;
	sub_82EEA1F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eea4c8
	if (ctx.cr0.lt) goto loc_82EEA4C8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82EEA430:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eea430
	if (!ctx.cr6.eq) goto loc_82EEA430;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82eea454
	if (!ctx.cr0.lt) goto loc_82EEA454;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EEA454:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_82EEA45C:
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eea490
	if (ctx.cr6.eq) goto loc_82EEA490;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eea4c8
	if (ctx.cr0.lt) goto loc_82EEA4C8;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
loc_82EEA490:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r9,r1,4304
	ctx.r9.s64 = ctx.r1.s64 + 4304;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bgt cr6,0x82eea4c8
	if (ctx.cr6.gt) goto loc_82EEA4C8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaad20
	ctx.lr = 0x82EEA4C0;
	sub_82EAAD20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eea4d4
	if (!ctx.cr0.lt) goto loc_82EEA4D4;
loc_82EEA4C8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,7192
	ctx.r4.s64 = ctx.r10.s64 + 7192;
	// b 0x82eea514
	goto loc_82EEA514;
loc_82EEA4D4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82EEA4D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eea4d8
	if (!ctx.cr6.eq) goto loc_82EEA4D8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82eea4fc
	if (!ctx.cr0.lt) goto loc_82EEA4FC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EEA4FC:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_82EEA514:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
	// bl 0x82eea168
	ctx.lr = 0x82EEA528;
	sub_82EEA168(ctx, base);
	// addi r1,r1,4256
	ctx.r1.s64 = ctx.r1.s64 + 4256;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEA530"))) PPC_WEAK_FUNC(sub_82EEA530);
PPC_FUNC_IMPL(__imp__sub_82EEA530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EEA538;
	__savegprlr_24(ctx, base);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4272(r1)
	ea = -4272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// li r30,4094
	ctx.r30.s64 = 4094;
	// bl 0x82ee9f18
	ctx.lr = 0x82EEA574;
	sub_82EE9F18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eea7e8
	if (ctx.cr0.lt) goto loc_82EEA7E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// clrlwi r9,r7,28
	ctx.r9.u64 = ctx.r7.u32 & 0xF;
	// cmplwi cr6,r9,15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15, ctx.xer);
	// bne cr6,0x82eea5a8
	if (!ctx.cr6.eq) goto loc_82EEA5A8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r25,r28,24
	ctx.r25.s64 = ctx.r28.s64 + 24;
	// addi r27,r11,5548
	ctx.r27.s64 = ctx.r11.s64 + 5548;
	// b 0x82eea5f0
	goto loc_82EEA5F0;
loc_82EEA5A8:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r25,r28,28
	ctx.r25.s64 = ctx.r28.s64 + 28;
	// addi r27,r10,6012
	ctx.r27.s64 = ctx.r10.s64 + 6012;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eea7e4
	if (ctx.cr6.eq) goto loc_82EEA7E4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82eea7e4
	if (ctx.cr6.eq) goto loc_82EEA7E4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eea7e4
	if (ctx.cr6.lt) goto loc_82EEA7E4;
	// rlwinm. r11,r7,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eea5e0
	if (ctx.cr0.eq) goto loc_82EEA5E0;
	// rlwinm. r11,r7,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eea7e4
	if (!ctx.cr0.eq) goto loc_82EEA7E4;
loc_82EEA5E0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
loc_82EEA5F0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eea6b4
	if (ctx.cr6.eq) goto loc_82EEA6B4;
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82eea658
	if (ctx.cr6.eq) goto loc_82EEA658;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r4,4094
	ctx.r4.s64 = 4094;
	// addi r5,r11,-18112
	ctx.r5.s64 = ctx.r11.s64 + -18112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eea1f8
	ctx.lr = 0x82EEA618;
	sub_82EEA1F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eea780
	if (ctx.cr0.lt) goto loc_82EEA780;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EEA628:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eea628
	if (!ctx.cr6.eq) goto loc_82EEA628;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82eea64c
	if (!ctx.cr0.lt) goto loc_82EEA64C;
	// li r11,4094
	ctx.r11.s64 = 4094;
loc_82EEA64C:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// subfic r30,r11,4094
	ctx.xer.ca = ctx.r11.u32 <= 4094;
	ctx.r30.s64 = 4094 - ctx.r11.s64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EEA658:
	// lwz r6,20(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82eea668
	if (!ctx.cr6.eq) goto loc_82EEA668;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82EEA668:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,7232
	ctx.r5.s64 = ctx.r11.s64 + 7232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eea1f8
	ctx.lr = 0x82EEA67C;
	sub_82EEA1F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eea780
	if (ctx.cr0.lt) goto loc_82EEA780;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82EEA688:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eea688
	if (!ctx.cr6.eq) goto loc_82EEA688;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82eea6ac
	if (!ctx.cr0.lt) goto loc_82EEA6AC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EEA6AC:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_82EEA6B4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82eea710
	if (ctx.cr6.eq) goto loc_82EEA710;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r5,r11,7272
	ctx.r5.s64 = ctx.r11.s64 + 7272;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eea1f8
	ctx.lr = 0x82EEA6D8;
	sub_82EEA1F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eea780
	if (ctx.cr0.lt) goto loc_82EEA780;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82EEA6E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eea6e4
	if (!ctx.cr6.eq) goto loc_82EEA6E4;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82eea708
	if (!ctx.cr0.lt) goto loc_82EEA708;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EEA708:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_82EEA710:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eea748
	if (ctx.cr6.eq) goto loc_82EEA748;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eea780
	if (ctx.cr0.lt) goto loc_82EEA780;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
loc_82EEA748:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r9,r1,4320
	ctx.r9.s64 = ctx.r1.s64 + 4320;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bgt cr6,0x82eea780
	if (ctx.cr6.gt) goto loc_82EEA780;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaad20
	ctx.lr = 0x82EEA778;
	sub_82EAAD20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eea78c
	if (!ctx.cr0.lt) goto loc_82EEA78C;
loc_82EEA780:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,7240
	ctx.r4.s64 = ctx.r10.s64 + 7240;
	// b 0x82eea7cc
	goto loc_82EEA7CC;
loc_82EEA78C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82EEA790:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eea790
	if (!ctx.cr6.eq) goto loc_82EEA790;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82eea7b4
	if (!ctx.cr0.lt) goto loc_82EEA7B4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EEA7B4:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_82EEA7CC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bl 0x82eea168
	ctx.lr = 0x82EEA7E0;
	sub_82EEA168(ctx, base);
	// b 0x82eea7e8
	goto loc_82EEA7E8;
loc_82EEA7E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEA7E8:
	// addi r1,r1,4272
	ctx.r1.s64 = ctx.r1.s64 + 4272;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEA7F0"))) PPC_WEAK_FUNC(sub_82EEA7F0);
PPC_FUNC_IMPL(__imp__sub_82EEA7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EEA7F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82eea950
	if (ctx.cr6.gt) goto loc_82EEA950;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,7176
	ctx.r12.s64 = ctx.r12.s64 + 7176;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32017
	ctx.r12.s64 = -2098266112;
	// addi r12,r12,-22468
	ctx.r12.s64 = ctx.r12.s64 + -22468;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82EEA83C;
	case 1:
		goto loc_82EEA848;
	case 2:
		goto loc_82EEA864;
	case 3:
		goto loc_82EEA874;
	case 4:
		goto loc_82EEA884;
	case 5:
		goto loc_82EEA894;
	case 6:
		goto loc_82EEA8B8;
	case 7:
		goto loc_82EEA8DC;
	case 8:
		goto loc_82EEA900;
	case 9:
		goto loc_82EEA924;
	case 10:
		goto loc_82EEA92C;
	case 11:
		goto loc_82EEA950;
	case 12:
		goto loc_82EEA938;
	case 13:
		goto loc_82EEA944;
	default:
		__builtin_unreachable();
	}
loc_82EEA83C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,7472
	ctx.r5.s64 = ctx.r11.s64 + 7472;
	// b 0x82eea958
	goto loc_82EEA958;
loc_82EEA848:
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
loc_82EEA84C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,7460
	ctx.r5.s64 = ctx.r11.s64 + 7460;
loc_82EEA854:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eea1f8
	ctx.lr = 0x82EEA860;
	sub_82EEA1F8(ctx, base);
	// b 0x82eea964
	goto loc_82EEA964;
loc_82EEA864:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,7444
	ctx.r5.s64 = ctx.r11.s64 + 7444;
	// b 0x82eea854
	goto loc_82EEA854;
loc_82EEA874:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,7428
	ctx.r5.s64 = ctx.r11.s64 + 7428;
	// b 0x82eea854
	goto loc_82EEA854;
loc_82EEA884:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,7412
	ctx.r5.s64 = ctx.r11.s64 + 7412;
	// b 0x82eea854
	goto loc_82EEA854;
loc_82EEA894:
	// lfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r11,7400
	ctx.r5.s64 = ctx.r11.s64 + 7400;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eea1f8
	ctx.lr = 0x82EEA8B4;
	sub_82EEA1F8(ctx, base);
	// b 0x82eea964
	goto loc_82EEA964;
loc_82EEA8B8:
	// lfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,7388
	ctx.r5.s64 = ctx.r11.s64 + 7388;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eea1f8
	ctx.lr = 0x82EEA8D8;
	sub_82EEA1F8(ctx, base);
	// b 0x82eea964
	goto loc_82EEA964;
loc_82EEA8DC:
	// lfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,7376
	ctx.r5.s64 = ctx.r11.s64 + 7376;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82eea1f8
	ctx.lr = 0x82EEA8FC;
	sub_82EEA1F8(ctx, base);
	// b 0x82eea964
	goto loc_82EEA964;
loc_82EEA900:
	// lfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,7364
	ctx.r5.s64 = ctx.r11.s64 + 7364;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82eea1f8
	ctx.lr = 0x82EEA920;
	sub_82EEA1F8(ctx, base);
	// b 0x82eea964
	goto loc_82EEA964;
loc_82EEA924:
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82eea84c
	goto loc_82EEA84C;
loc_82EEA92C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,7348
	ctx.r5.s64 = ctx.r11.s64 + 7348;
	// b 0x82eea958
	goto loc_82EEA958;
loc_82EEA938:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,7336
	ctx.r5.s64 = ctx.r11.s64 + 7336;
	// b 0x82eea958
	goto loc_82EEA958;
loc_82EEA944:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,7324
	ctx.r5.s64 = ctx.r11.s64 + 7324;
	// b 0x82eea958
	goto loc_82EEA958;
loc_82EEA950:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,7316
	ctx.r5.s64 = ctx.r11.s64 + 7316;
loc_82EEA958:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eea1f8
	ctx.lr = 0x82EEA964;
	sub_82EEA1F8(ctx, base);
loc_82EEA964:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r11,7284
	ctx.r6.s64 = ctx.r11.s64 + 7284;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eea308
	ctx.lr = 0x82EEA980;
	sub_82EEA308(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEA988"))) PPC_WEAK_FUNC(sub_82EEA988);
PPC_FUNC_IMPL(__imp__sub_82EEA988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EEA990;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82eeaacc
	if (!ctx.cr6.lt) goto loc_82EEAACC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,7488
	ctx.r29.s64 = ctx.r11.s64 + 7488;
loc_82EEA9B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// beq cr6,0x82eeaad8
	if (ctx.cr6.eq) goto loc_82EEAAD8;
	// cmpwi cr6,r9,92
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 92, ctx.xer);
	// bne cr6,0x82eeaa7c
	if (!ctx.cr6.eq) goto loc_82EEAA7C;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82eeaa14
	if (!ctx.cr6.lt) goto loc_82EEAA14;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x82eeaa14
	if (!ctx.cr6.eq) goto loc_82EEAA14;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82eeaa08
	if (ctx.cr6.eq) goto loc_82EEAA08;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,1050
	ctx.r5.s64 = 1050;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// bl 0x82eea530
	ctx.lr = 0x82EEAA08;
	sub_82EEA530(ctx, base);
loc_82EEAA08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// b 0x82eeaa68
	goto loc_82EEAA68;
loc_82EEAA14:
	// cmpwi cr6,r9,92
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 92, ctx.xer);
	// bne cr6,0x82eeaa7c
	if (!ctx.cr6.eq) goto loc_82EEAA7C;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82eeaa7c
	if (!ctx.cr6.lt) goto loc_82EEAA7C;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r8,13
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 13, ctx.xer);
	// bne cr6,0x82eeaa7c
	if (!ctx.cr6.eq) goto loc_82EEAA7C;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x82eeaa7c
	if (!ctx.cr6.eq) goto loc_82EEAA7C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82eeaa60
	if (ctx.cr6.eq) goto loc_82EEAA60;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,1050
	ctx.r5.s64 = 1050;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// bl 0x82eea530
	ctx.lr = 0x82EEAA60;
	sub_82EEA530(ctx, base);
loc_82EEAA60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
loc_82EEAA68:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x82eeaabc
	goto loc_82EEAABC;
loc_82EEAA7C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82eeaab4
	if (!ctx.cr6.eq) goto loc_82EEAAB4;
	// cmpwi cr6,r9,47
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 47, ctx.xer);
	// bne cr6,0x82eeaab4
	if (!ctx.cr6.eq) goto loc_82EEAAB4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eeaab4
	if (!ctx.cr6.lt) goto loc_82EEAAB4;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x82eeaab4
	if (!ctx.cr6.eq) goto loc_82EEAAB4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82eeaab8
	goto loc_82EEAAB8;
loc_82EEAAB4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82EEAAB8:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EEAABC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eea9b4
	if (ctx.cr6.lt) goto loc_82EEA9B4;
loc_82EEAACC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEAAD0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82EEAAD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eeaad0
	goto loc_82EEAAD0;
}

__attribute__((alias("__imp__sub_82EEAAE0"))) PPC_WEAK_FUNC(sub_82EEAAE0);
PPC_FUNC_IMPL(__imp__sub_82EEAAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82EEAAE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r30,r28,2
	ctx.r30.s64 = ctx.r28.s64 + 2;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eeabc4
	if (!ctx.cr6.lt) goto loc_82EEABC4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82eeabc4
	if (!ctx.cr6.eq) goto loc_82EEABC4;
	// lbz r11,1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// bne cr6,0x82eeabc4
	if (!ctx.cr6.eq) goto loc_82EEABC4;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82cbdd90
	ctx.lr = 0x82EEAB28;
	sub_82CBDD90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eeabc4
	if (ctx.cr0.eq) goto loc_82EEABC4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82eeab80
	goto loc_82EEAB80;
loc_82EEAB38:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82cbdd90
	ctx.lr = 0x82EEAB40;
	sub_82CBDD90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eeab8c
	if (ctx.cr0.eq) goto loc_82EEAB8C;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x82eeab68
	if (ctx.cr6.lt) goto loc_82EEAB68;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-87
	ctx.r31.s64 = ctx.r11.s64 + -87;
	// b 0x82eeab7c
	goto loc_82EEAB7C;
loc_82EEAB68:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-55
	ctx.r31.s64 = ctx.r11.s64 + -55;
	// bge cr6,0x82eeab7c
	if (!ctx.cr6.lt) goto loc_82EEAB7C;
	// addi r31,r11,-48
	ctx.r31.s64 = ctx.r11.s64 + -48;
loc_82EEAB7C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82EEAB80:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eeab38
	if (ctx.cr6.lt) goto loc_82EEAB38;
loc_82EEAB8C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eeab98
	if (ctx.cr6.eq) goto loc_82EEAB98;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_82EEAB98:
	// subf r31,r28,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r28.s64;
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// ble cr6,0x82eeabbc
	if (!ctx.cr6.gt) goto loc_82EEABBC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// li r5,1002
	ctx.r5.s64 = 1002;
	// addi r6,r11,7588
	ctx.r6.s64 = ctx.r11.s64 + 7588;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// bl 0x82eea308
	ctx.lr = 0x82EEABBC;
	sub_82EEA308(ctx, base);
loc_82EEABBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82eeabc8
	goto loc_82EEABC8;
loc_82EEABC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEABC8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEABD0"))) PPC_WEAK_FUNC(sub_82EEABD0);
PPC_FUNC_IMPL(__imp__sub_82EEABD0) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82eeac84
	if (!ctx.cr6.lt) goto loc_82EEAC84;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82eeac84
	if (!ctx.cr6.eq) goto loc_82EEAC84;
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82eeac48
	goto loc_82EEAC48;
loc_82EEAC14:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,48
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 48, ctx.xer);
	// blt cr6,0x82eeac50
	if (ctx.cr6.lt) goto loc_82EEAC50;
	// cmpwi cr6,r9,55
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 55, ctx.xer);
	// bgt cr6,0x82eeac50
	if (ctx.cr6.gt) goto loc_82EEAC50;
	// rlwinm. r6,r11,0,0,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82eeac38
	if (ctx.cr0.eq) goto loc_82EEAC38;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82EEAC38:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_82EEAC48:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eeac14
	if (ctx.cr6.lt) goto loc_82EEAC14;
loc_82EEAC50:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eeac5c
	if (ctx.cr6.eq) goto loc_82EEAC5C;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82EEAC5C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eeac7c
	if (ctx.cr6.eq) goto loc_82EEAC7C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,48(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// li r5,1003
	ctx.r5.s64 = 1003;
	// addi r6,r11,7620
	ctx.r6.s64 = ctx.r11.s64 + 7620;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// bl 0x82eea308
	ctx.lr = 0x82EEAC7C;
	sub_82EEA308(ctx, base);
loc_82EEAC7C:
	// subf r3,r30,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r30.s64;
	// b 0x82eeac88
	goto loc_82EEAC88;
loc_82EEAC84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEAC88:
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

__attribute__((alias("__imp__sub_82EEACA0"))) PPC_WEAK_FUNC(sub_82EEACA0);
PPC_FUNC_IMPL(__imp__sub_82EEACA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EEACA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eead78
	if (!ctx.cr6.lt) goto loc_82EEAD78;
	// lbz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// bl 0x82cbdd38
	ctx.lr = 0x82EEACD0;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eead78
	if (ctx.cr0.eq) goto loc_82EEAD78;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eead44
	if (!ctx.cr6.lt) goto loc_82EEAD44;
loc_82EEACEC:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82cbdd38
	ctx.lr = 0x82EEACF4;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eead44
	if (ctx.cr0.eq) goto loc_82EEAD44;
	// lis r11,6553
	ctx.r11.s64 = 429457408;
	// ori r11,r11,39321
	ctx.r11.u64 = ctx.r11.u64 | 39321;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eead10
	if (!ctx.cr6.gt) goto loc_82EEAD10;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EEAD10:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mulli r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 * 10;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eead30
	if (!ctx.cr6.lt) goto loc_82EEAD30;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EEAD30:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eeacec
	if (ctx.cr6.lt) goto loc_82EEACEC;
loc_82EEAD44:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82eead50
	if (ctx.cr6.eq) goto loc_82EEAD50;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_82EEAD50:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82eead70
	if (ctx.cr6.eq) goto loc_82EEAD70;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// li r5,1004
	ctx.r5.s64 = 1004;
	// addi r6,r11,7652
	ctx.r6.s64 = ctx.r11.s64 + 7652;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// bl 0x82eea308
	ctx.lr = 0x82EEAD70;
	sub_82EEA308(ctx, base);
loc_82EEAD70:
	// subf r3,r28,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r28.s64;
	// b 0x82eead7c
	goto loc_82EEAD7C;
loc_82EEAD78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEAD7C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEAD84"))) PPC_WEAK_FUNC(sub_82EEAD84);
PPC_FUNC_IMPL(__imp__sub_82EEAD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEAD88"))) PPC_WEAK_FUNC(sub_82EEAD88);
PPC_FUNC_IMPL(__imp__sub_82EEAD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EEAD90;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eeadb4
	if (ctx.cr6.lt) goto loc_82EEADB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eeaf84
	goto loc_82EEAF84;
loc_82EEADB4:
	// lbz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// bne cr6,0x82eeaf78
	if (!ctx.cr6.eq) goto loc_82EEAF78;
	// lwz r9,40(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeaf78
	if (!ctx.cr0.eq) goto loc_82EEAF78;
	// addi r31,r26,1
	ctx.r31.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eeadf4
	if (ctx.cr6.lt) goto loc_82EEADF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// li r5,1007
	ctx.r5.s64 = 1007;
	// addi r6,r11,7688
	ctx.r6.s64 = ctx.r11.s64 + 7688;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// bl 0x82eea308
	ctx.lr = 0x82EEADF4;
	sub_82EEA308(ctx, base);
loc_82EEADF4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x82eeaf68
	if (ctx.cr6.eq) goto loc_82EEAF68;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x82eeaf60
	if (ctx.cr6.eq) goto loc_82EEAF60;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// beq cr6,0x82eeaf58
	if (ctx.cr6.eq) goto loc_82EEAF58;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x82eeaf50
	if (ctx.cr6.eq) goto loc_82EEAF50;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x82eeaf48
	if (ctx.cr6.eq) goto loc_82EEAF48;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// beq cr6,0x82eeaf40
	if (ctx.cr6.eq) goto loc_82EEAF40;
	// cmpwi cr6,r11,118
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 118, ctx.xer);
	// beq cr6,0x82eeaf38
	if (ctx.cr6.eq) goto loc_82EEAF38;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82eeae94
	if (ctx.cr6.lt) goto loc_82EEAE94;
	// cmpwi cr6,r11,55
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 55, ctx.xer);
	// bgt cr6,0x82eeae94
	if (ctx.cr6.gt) goto loc_82EEAE94;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r9,r31,3
	ctx.r9.s64 = ctx.r31.s64 + 3;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eeae58
	if (ctx.cr6.lt) goto loc_82EEAE58;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82EEAE58:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82eeae88
	goto loc_82EEAE88;
loc_82EEAE60:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x82eeaf70
	if (ctx.cr6.lt) goto loc_82EEAF70;
	// cmpwi cr6,r10,55
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 55, ctx.xer);
	// bgt cr6,0x82eeaf70
	if (ctx.cr6.gt) goto loc_82EEAF70;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_82EEAE88:
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eeae60
	if (ctx.cr6.lt) goto loc_82EEAE60;
	// b 0x82eeaf70
	goto loc_82EEAF70;
loc_82EEAE94:
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// bne cr6,0x82eeaf2c
	if (!ctx.cr6.eq) goto loc_82EEAF2C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eeaf2c
	if (!ctx.cr6.lt) goto loc_82EEAF2C;
	// lbz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x82cbdd90
	ctx.lr = 0x82EEAEB4;
	sub_82CBDD90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eeaf2c
	if (ctx.cr0.eq) goto loc_82EEAF2C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eeaf24
	if (!ctx.cr6.lt) goto loc_82EEAF24;
loc_82EEAED0:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82cbdd90
	ctx.lr = 0x82EEAED8;
	sub_82CBDD90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eeaf24
	if (ctx.cr0.eq) goto loc_82EEAF24;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x82eeaf00
	if (ctx.cr6.lt) goto loc_82EEAF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,-87
	ctx.r30.s64 = ctx.r11.s64 + -87;
	// b 0x82eeaf14
	goto loc_82EEAF14;
loc_82EEAF00:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,-55
	ctx.r30.s64 = ctx.r11.s64 + -55;
	// bge cr6,0x82eeaf14
	if (!ctx.cr6.lt) goto loc_82EEAF14;
	// addi r30,r11,-48
	ctx.r30.s64 = ctx.r11.s64 + -48;
loc_82EEAF14:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eeaed0
	if (ctx.cr6.lt) goto loc_82EEAED0;
loc_82EEAF24:
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// b 0x82eeaf80
	goto loc_82EEAF80;
loc_82EEAF2C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x82eeaf6c
	goto loc_82EEAF6C;
loc_82EEAF38:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82eeaf6c
	goto loc_82EEAF6C;
loc_82EEAF40:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82eeaf6c
	goto loc_82EEAF6C;
loc_82EEAF48:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82eeaf6c
	goto loc_82EEAF6C;
loc_82EEAF50:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82eeaf6c
	goto loc_82EEAF6C;
loc_82EEAF58:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82eeaf6c
	goto loc_82EEAF6C;
loc_82EEAF60:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82eeaf6c
	goto loc_82EEAF6C;
loc_82EEAF68:
	// li r11,7
	ctx.r11.s64 = 7;
loc_82EEAF6C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82EEAF70:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82eeaf80
	goto loc_82EEAF80;
loc_82EEAF78:
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r31,r26,1
	ctx.r31.s64 = ctx.r26.s64 + 1;
loc_82EEAF80:
	// subf r3,r26,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r26.s64;
loc_82EEAF84:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEAF8C"))) PPC_WEAK_FUNC(sub_82EEAF8C);
PPC_FUNC_IMPL(__imp__sub_82EEAF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEAF90"))) PPC_WEAK_FUNC(sub_82EEAF90);
PPC_FUNC_IMPL(__imp__sub_82EEAF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EEAF98;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eeb0e0
	if (ctx.cr0.eq) goto loc_82EEB0E0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eeb0e0
	if (!ctx.cr6.lt) goto loc_82EEB0E0;
	// lbz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x82cbdc30
	ctx.lr = 0x82EEAFCC;
	sub_82CBDC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eeb0e0
	if (ctx.cr0.eq) goto loc_82EEB0E0;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82cbdc30
	ctx.lr = 0x82EEAFDC;
	sub_82CBDC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eeb0e0
	if (ctx.cr0.eq) goto loc_82EEB0E0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82eeb0e0
	if (!ctx.cr6.lt) goto loc_82EEB0E0;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x82eeb0e0
	if (!ctx.cr6.eq) goto loc_82EEB0E0;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eeaca0
	ctx.lr = 0x82EEB014;
	sub_82EEACA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eeb0e0
	if (ctx.cr0.eq) goto loc_82EEB0E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x82eeb0e0
	if (ctx.cr6.gt) goto loc_82EEB0E0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82eeb0e0
	if (!ctx.cr6.lt) goto loc_82EEB0E0;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x82eeb0e0
	if (!ctx.cr6.eq) goto loc_82EEB0E0;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eeaca0
	ctx.lr = 0x82EEB058;
	sub_82EEACA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eeb080
	if (!ctx.cr0.eq) goto loc_82EEB080;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee9ab8
	ctx.lr = 0x82EEB070;
	sub_82EE9AB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eeb0e0
	if (ctx.cr0.eq) goto loc_82EEB0E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82eeb084
	goto loc_82EEB084;
loc_82EEB080:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EEB084:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x82eeb0e0
	if (ctx.cr6.gt) goto loc_82EEB0E0;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r31,r29,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x82eeb0e0
	if (!ctx.cr6.lt) goto loc_82EEB0E0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cb1160
	ctx.lr = 0x82EEB0AC;
	sub_82CB1160(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x82eaaad8
	ctx.lr = 0x82EEB0C8;
	sub_82EAAAD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eeb0e0
	if (ctx.cr0.lt) goto loc_82EEB0E0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82eeb0e4
	goto loc_82EEB0E4;
loc_82EEB0E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEB0E4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEB0EC"))) PPC_WEAK_FUNC(sub_82EEB0EC);
PPC_FUNC_IMPL(__imp__sub_82EEB0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEB0F0"))) PPC_WEAK_FUNC(sub_82EEB0F0);
PPC_FUNC_IMPL(__imp__sub_82EEB0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EEB0F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82eeb2f0
	if (!ctx.cr6.lt) goto loc_82EEB2F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,7728
	ctx.r29.s64 = ctx.r11.s64 + 7728;
loc_82EEB11C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bne cr6,0x82eeb13c
	if (!ctx.cr6.eq) goto loc_82EEB13C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82eeb2c4
	goto loc_82EEB2C4;
loc_82EEB13C:
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beq cr6,0x82eeb2d8
	if (ctx.cr6.eq) goto loc_82EEB2D8;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// blt cr6,0x82eeb154
	if (ctx.cr6.lt) goto loc_82EEB154;
	// cmpwi cr6,r8,13
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 13, ctx.xer);
	// ble cr6,0x82eeb2d8
	if (!ctx.cr6.gt) goto loc_82EEB2D8;
loc_82EEB154:
	// cmpwi cr6,r8,47
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 47, ctx.xer);
	// bne cr6,0x82eeb238
	if (!ctx.cr6.eq) goto loc_82EEB238;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eeb180
	if (!ctx.cr6.lt) goto loc_82EEB180;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x82eeb180
	if (!ctx.cr6.eq) goto loc_82EEB180;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82eeb250
	goto loc_82EEB250;
loc_82EEB180:
	// cmpwi cr6,r8,47
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 47, ctx.xer);
	// bne cr6,0x82eeb238
	if (!ctx.cr6.eq) goto loc_82EEB238;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eeb238
	if (!ctx.cr6.lt) goto loc_82EEB238;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,42
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 42, ctx.xer);
	// bne cr6,0x82eeb238
	if (!ctx.cr6.eq) goto loc_82EEB238;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eeb20c
	if (!ctx.cr6.lt) goto loc_82EEB20C;
loc_82EEB1B4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,42
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 42, ctx.xer);
	// bne cr6,0x82eeb1e0
	if (!ctx.cr6.eq) goto loc_82EEB1E0;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eeb1e0
	if (!ctx.cr6.lt) goto loc_82EEB1E0;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x82eeb20c
	if (ctx.cr6.eq) goto loc_82EEB20C;
loc_82EEB1E0:
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bne cr6,0x82eeb1f4
	if (!ctx.cr6.eq) goto loc_82EEB1F4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82EEB1F4:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eeb1b4
	if (ctx.cr6.lt) goto loc_82EEB1B4;
loc_82EEB20C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eeb220
	if (!ctx.cr6.lt) goto loc_82EEB220;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x82eeb2dc
	goto loc_82EEB2DC;
loc_82EEB220:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,1001
	ctx.r5.s64 = 1001;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// bl 0x82eea308
	ctx.lr = 0x82EEB234;
	sub_82EEA308(ctx, base);
	// b 0x82eeb2e0
	goto loc_82EEB2E0;
loc_82EEB238:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eeb25c
	if (ctx.cr0.eq) goto loc_82EEB25C;
	// cmpwi cr6,r8,59
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 59, ctx.xer);
	// bne cr6,0x82eeb25c
	if (!ctx.cr6.eq) goto loc_82EEB25C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82EEB250:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eea988
	ctx.lr = 0x82EEB258;
	sub_82EEA988(ctx, base);
	// b 0x82eeb2e0
	goto loc_82EEB2E0;
loc_82EEB25C:
	// cmpwi cr6,r8,92
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 92, ctx.xer);
	// bne cr6,0x82eeb2f0
	if (!ctx.cr6.eq) goto loc_82EEB2F0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eeb288
	if (!ctx.cr6.lt) goto loc_82EEB288;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x82eeb288
	if (!ctx.cr6.eq) goto loc_82EEB288;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// b 0x82eeb2c4
	goto loc_82EEB2C4;
loc_82EEB288:
	// cmpwi cr6,r8,92
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 92, ctx.xer);
	// bne cr6,0x82eeb2f0
	if (!ctx.cr6.eq) goto loc_82EEB2F0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82eeb2f0
	if (!ctx.cr6.lt) goto loc_82EEB2F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x82eeb2f0
	if (!ctx.cr6.eq) goto loc_82EEB2F0;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82eeb2f0
	if (!ctx.cr6.eq) goto loc_82EEB2F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
loc_82EEB2C4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x82eeb2e0
	goto loc_82EEB2E0;
loc_82EEB2D8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82EEB2DC:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EEB2E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eeb11c
	if (ctx.cr6.lt) goto loc_82EEB11C;
loc_82EEB2F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEB2FC"))) PPC_WEAK_FUNC(sub_82EEB2FC);
PPC_FUNC_IMPL(__imp__sub_82EEB2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEB300"))) PPC_WEAK_FUNC(sub_82EEB300);
PPC_FUNC_IMPL(__imp__sub_82EEB300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EEB308;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eeb368
	if (!ctx.cr6.lt) goto loc_82EEB368;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// bne cr6,0x82eeb368
	if (!ctx.cr6.eq) goto loc_82EEB368;
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82eead88
	ctx.lr = 0x82EEB338;
	sub_82EEAD88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eeb368
	if (ctx.cr0.eq) goto loc_82EEB368;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82eeb368
	if (!ctx.cr6.lt) goto loc_82EEB368;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,39
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 39, ctx.xer);
	// bne cr6,0x82eeb368
	if (!ctx.cr6.eq) goto loc_82EEB368;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x82eeb36c
	goto loc_82EEB36C;
loc_82EEB368:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEB36C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEB374"))) PPC_WEAK_FUNC(sub_82EEB374);
PPC_FUNC_IMPL(__imp__sub_82EEB374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEB378"))) PPC_WEAK_FUNC(sub_82EEB378);
PPC_FUNC_IMPL(__imp__sub_82EEB378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EEB380;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eeb584
	if (!ctx.cr6.lt) goto loc_82EEB584;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x82eeb3c4
	if (ctx.cr6.eq) goto loc_82EEB3C4;
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// bne cr6,0x82eeb584
	if (!ctx.cr6.eq) goto loc_82EEB584;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eeb584
	if (ctx.cr0.eq) goto loc_82EEB584;
	// li r11,62
	ctx.r11.s64 = 62;
loc_82EEB3C4:
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eeb46c
	if (!ctx.cr6.lt) goto loc_82EEB46C;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
loc_82EEB3DC:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82eeb46c
	if (ctx.cr6.eq) goto loc_82EEB46C;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x82eeb46c
	if (ctx.cr6.eq) goto loc_82EEB46C;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// bne cr6,0x82eeb458
	if (!ctx.cr6.eq) goto loc_82EEB458;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82eeb458
	if (!ctx.cr0.eq) goto loc_82EEB458;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eeb458
	if (!ctx.cr6.lt) goto loc_82EEB458;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x82eeb44c
	if (ctx.cr6.eq) goto loc_82EEB44C;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// bne cr6,0x82eeb458
	if (!ctx.cr6.eq) goto loc_82EEB458;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eeb458
	if (!ctx.cr6.lt) goto loc_82EEB458;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x82eeb458
	if (!ctx.cr6.eq) goto loc_82EEB458;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82EEB44C:
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r10.u32);
loc_82EEB458:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eeb3dc
	if (ctx.cr6.lt) goto loc_82EEB3DC;
loc_82EEB46C:
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eeb488
	if (ctx.cr6.lt) goto loc_82EEB488;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,1006
	ctx.r5.s64 = 1006;
	// addi r6,r11,7800
	ctx.r6.s64 = ctx.r11.s64 + 7800;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// b 0x82eeb4a0
	goto loc_82EEB4A0;
loc_82EEB488:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82eeb4ac
	if (!ctx.cr6.eq) goto loc_82EEB4AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,1005
	ctx.r5.s64 = 1005;
	// addi r6,r11,7764
	ctx.r6.s64 = ctx.r11.s64 + 7764;
loc_82EEB4A0:
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82eea308
	ctx.lr = 0x82EEB4AC;
	sub_82EEA308(ctx, base);
loc_82EEB4AC:
	// subf r27,r29,r31
	ctx.r27.s64 = ctx.r31.s64 - ctx.r29.s64;
	// lwz r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82f15fc0
	ctx.lr = 0x82EEB4C0;
	sub_82F15FC0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82eeb584
	if (ctx.cr0.eq) goto loc_82EEB584;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
loc_82EEB4CC:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82eeb544
	if (!ctx.cr6.lt) goto loc_82EEB544;
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
loc_82EEB4DC:
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r9,92
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 92, ctx.xer);
	// bne cr6,0x82eeb544
	if (!ctx.cr6.eq) goto loc_82EEB544;
	// lwz r9,40(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeb544
	if (!ctx.cr0.eq) goto loc_82EEB544;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// bne cr6,0x82eeb514
	if (!ctx.cr6.eq) goto loc_82EEB514;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x82eeb53c
	goto loc_82EEB53C;
loc_82EEB514:
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// bne cr6,0x82eeb544
	if (!ctx.cr6.eq) goto loc_82EEB544;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82eeb544
	if (!ctx.cr6.lt) goto loc_82EEB544;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x82eeb544
	if (!ctx.cr6.eq) goto loc_82EEB544;
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82EEB53C:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82eeb4dc
	if (ctx.cr6.lt) goto loc_82EEB4DC;
loc_82EEB544:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82eeb574
	if (!ctx.cr6.lt) goto loc_82EEB574;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eead88
	ctx.lr = 0x82EEB55C;
	sub_82EEAD88(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82eeb4cc
	goto loc_82EEB4CC;
loc_82EEB574:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r27,1
	ctx.r3.s64 = ctx.r27.s64 + 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// b 0x82eeb588
	goto loc_82EEB588;
loc_82EEB584:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEB588:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEB590"))) PPC_WEAK_FUNC(sub_82EEB590);
PPC_FUNC_IMPL(__imp__sub_82EEB590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EEB598;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x82eeb0f0
	ctx.lr = 0x82EEB5C0;
	sub_82EEB0F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eeb5d0
	if (ctx.cr0.eq) goto loc_82EEB5D0;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82eeb838
	goto loc_82EEB838;
loc_82EEB5D0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eeb5f8
	if (ctx.cr6.lt) goto loc_82EEB5F8;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82eeb838
	goto loc_82EEB838;
loc_82EEB5F8:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82eeb610
	if (ctx.cr6.lt) goto loc_82EEB610;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x82eeb618
	if (!ctx.cr6.gt) goto loc_82EEB618;
loc_82EEB610:
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x82eeb710
	if (!ctx.cr6.eq) goto loc_82EEB710;
loc_82EEB618:
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eeb630
	if (ctx.cr6.eq) goto loc_82EEB630;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eeb710
	if (ctx.cr0.eq) goto loc_82EEB710;
loc_82EEB630:
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82ee9808
	ctx.lr = 0x82EEB640;
	sub_82EE9808(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82eeb668
	if (ctx.cr0.eq) goto loc_82EEB668;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82ee9d80
	ctx.lr = 0x82EEB664;
	sub_82EE9D80(ctx, base);
	// b 0x82eeb6cc
	goto loc_82EEB6CC;
loc_82EEB668:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82eeaae0
	ctx.lr = 0x82EEB674;
	sub_82EEAAE0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82eeb684
	if (ctx.cr0.eq) goto loc_82EEB684;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82eeb6b4
	goto loc_82EEB6B4;
loc_82EEB684:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eeabd0
	ctx.lr = 0x82EEB694;
	sub_82EEABD0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82eeb6d4
	if (ctx.cr0.eq) goto loc_82EEB6D4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82eeb6b8
	if (!ctx.cr6.eq) goto loc_82EEB6B8;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82EEB6B4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82EEB6B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82ee9df8
	ctx.lr = 0x82EEB6CC;
	sub_82EE9DF8(ctx, base);
loc_82EEB6CC:
	// add r29,r3,r28
	ctx.r29.u64 = ctx.r3.u64 + ctx.r28.u64;
	// b 0x82eeb83c
	goto loc_82EEB83C;
loc_82EEB6D4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eeaca0
	ctx.lr = 0x82EEB6E4;
	sub_82EEACA0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82eeb820
	if (ctx.cr0.eq) goto loc_82EEB820;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82ee9df8
	ctx.lr = 0x82EEB708;
	sub_82EE9DF8(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// b 0x82eeb83c
	goto loc_82EEB83C;
loc_82EEB710:
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// bne cr6,0x82eeb734
	if (!ctx.cr6.eq) goto loc_82EEB734;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eeb300
	ctx.lr = 0x82EEB724;
	sub_82EEB300(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82eeb820
	if (ctx.cr0.eq) goto loc_82EEB820;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82eeb838
	goto loc_82EEB838;
loc_82EEB734:
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x82eeb758
	if (!ctx.cr6.eq) goto loc_82EEB758;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eeb378
	ctx.lr = 0x82EEB748;
	sub_82EEB378(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82eeb820
	if (ctx.cr0.eq) goto loc_82EEB820;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82eeb838
	goto loc_82EEB838;
loc_82EEB758:
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eeb788
	if (ctx.cr0.eq) goto loc_82EEB788;
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// bne cr6,0x82eeb788
	if (!ctx.cr6.eq) goto loc_82EEB788;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eeb378
	ctx.lr = 0x82EEB778;
	sub_82EEB378(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82eeb820
	if (ctx.cr0.eq) goto loc_82EEB820;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82eeb838
	goto loc_82EEB838;
loc_82EEB788:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82cbdc30
	ctx.lr = 0x82EEB790;
	sub_82CBDC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eeb7d4
	if (!ctx.cr0.eq) goto loc_82EEB7D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x82eeb7d4
	if (ctx.cr6.eq) goto loc_82EEB7D4;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eeb820
	if (ctx.cr6.eq) goto loc_82EEB820;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82eeb820
	if (!ctx.cr0.eq) goto loc_82EEB820;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82eeb820
	if (ctx.cr6.lt) goto loc_82EEB820;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82eeb820
	if (ctx.cr6.gt) goto loc_82EEB820;
loc_82EEB7D4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eeb800
	if (ctx.cr0.eq) goto loc_82EEB800;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eeaf90
	ctx.lr = 0x82EEB7F0;
	sub_82EEAF90(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82eeb800
	if (ctx.cr0.eq) goto loc_82EEB800;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82eeb838
	goto loc_82EEB838;
loc_82EEB800:
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee9ab8
	ctx.lr = 0x82EEB810;
	sub_82EE9AB8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82eeb820
	if (ctx.cr0.eq) goto loc_82EEB820;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82eeb838
	goto loc_82EEB838;
loc_82EEB820:
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee9bf8
	ctx.lr = 0x82EEB830;
	sub_82EE9BF8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82EEB838:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82EEB83C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEB860"))) PPC_WEAK_FUNC(sub_82EEB860);
PPC_FUNC_IMPL(__imp__sub_82EEB860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82EEB868;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// b 0x82eeb8a0
	goto loc_82EEB8A0;
loc_82EEB884:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdc30
	ctx.lr = 0x82EEB890;
	sub_82CBDC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eeb8a8
	if (ctx.cr0.eq) goto loc_82EEB8A8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
loc_82EEB8A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eeb884
	if (!ctx.cr6.eq) goto loc_82EEB884;
loc_82EEB8A8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eeb8c4
	if (ctx.cr6.eq) goto loc_82EEB8C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb6a70
	ctx.lr = 0x82EEB8C0;
	sub_82CB6A70(ctx, base);
	// b 0x82eeb8c8
	goto loc_82EEB8C8;
loc_82EEB8C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82EEB8C8:
	// clrlwi r27,r3,24
	ctx.r27.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r27,15
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 15, ctx.xer);
	// ble cr6,0x82eeb8f0
	if (!ctx.cr6.gt) goto loc_82EEB8F0;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r28,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r28.u8);
	// stb r11,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
loc_82EEB8E0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EEB8E8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82EEB8F0:
	// subf. r29,r30,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82eeb8e0
	if (ctx.cr0.eq) goto loc_82EEB8E0;
	// cmplwi cr6,r29,20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 20, ctx.xer);
	// bgt cr6,0x82eeb8e0
	if (ctx.cr6.gt) goto loc_82EEB8E0;
	// b 0x82eeb914
	goto loc_82EEB914;
loc_82EEB904:
	// bl 0x82cbdd38
	ctx.lr = 0x82EEB908;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eeb920
	if (ctx.cr0.eq) goto loc_82EEB920;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82EEB914:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eeb904
	if (!ctx.cr0.eq) goto loc_82EEB904;
loc_82EEB920:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eeb8e0
	if (!ctx.cr6.eq) goto loc_82EEB8E0;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eeb978
	if (ctx.cr6.eq) goto loc_82EEB978;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r30,r30,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_82EEB944:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdc30
	ctx.lr = 0x82EEB950;
	sub_82CBDC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eeb978
	if (ctx.cr0.eq) goto loc_82EEB978;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cb2710
	ctx.lr = 0x82EEB964;
	sub_82CB2710(ctx, base);
	// stbx r3,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eeb944
	if (!ctx.cr6.eq) goto loc_82EEB944;
loc_82EEB978:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19064
	ctx.r10.s64 = ctx.r10.s64 + 19064;
	// stbx r28,r29,r9
	PPC_STORE_U8(ctx.r29.u32 + ctx.r9.u32, ctx.r28.u8);
loc_82EEB98C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eeb9b0
	if (ctx.cr0.eq) goto loc_82EEB9B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eeb98c
	if (ctx.cr6.eq) goto loc_82EEB98C;
loc_82EEB9B0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeb9c0
	if (!ctx.cr0.eq) goto loc_82EEB9C0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEB9C0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19052
	ctx.r10.s64 = ctx.r10.s64 + 19052;
loc_82EEB9CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eeb9f0
	if (ctx.cr0.eq) goto loc_82EEB9F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eeb9cc
	if (ctx.cr6.eq) goto loc_82EEB9CC;
loc_82EEB9F0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeba00
	if (!ctx.cr0.eq) goto loc_82EEBA00;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBA00:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19036
	ctx.r10.s64 = ctx.r10.s64 + 19036;
loc_82EEBA0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eeba30
	if (ctx.cr0.eq) goto loc_82EEBA30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eeba0c
	if (ctx.cr6.eq) goto loc_82EEBA0C;
loc_82EEBA30:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeba40
	if (!ctx.cr0.eq) goto loc_82EEBA40;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBA40:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2168
	ctx.r10.s64 = ctx.r10.s64 + 2168;
loc_82EEBA4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eeba70
	if (ctx.cr0.eq) goto loc_82EEBA70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eeba4c
	if (ctx.cr6.eq) goto loc_82EEBA4C;
loc_82EEBA70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeba80
	if (!ctx.cr0.eq) goto loc_82EEBA80;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBA80:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19028
	ctx.r10.s64 = ctx.r10.s64 + 19028;
loc_82EEBA8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebab0
	if (ctx.cr0.eq) goto loc_82EEBAB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eeba8c
	if (ctx.cr6.eq) goto loc_82EEBA8C;
loc_82EEBAB0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebac0
	if (!ctx.cr0.eq) goto loc_82EEBAC0;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBAC0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19016
	ctx.r10.s64 = ctx.r10.s64 + 19016;
loc_82EEBACC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebaf0
	if (ctx.cr0.eq) goto loc_82EEBAF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebacc
	if (ctx.cr6.eq) goto loc_82EEBACC;
loc_82EEBAF0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebb00
	if (!ctx.cr0.eq) goto loc_82EEBB00;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBB00:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19008
	ctx.r10.s64 = ctx.r10.s64 + 19008;
loc_82EEBB0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebb30
	if (ctx.cr0.eq) goto loc_82EEBB30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebb0c
	if (ctx.cr6.eq) goto loc_82EEBB0C;
loc_82EEBB30:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebb40
	if (!ctx.cr0.eq) goto loc_82EEBB40;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBB40:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18996
	ctx.r10.s64 = ctx.r10.s64 + 18996;
loc_82EEBB4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebb70
	if (ctx.cr0.eq) goto loc_82EEBB70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebb4c
	if (ctx.cr6.eq) goto loc_82EEBB4C;
loc_82EEBB70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebb80
	if (!ctx.cr0.eq) goto loc_82EEBB80;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBB80:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18984
	ctx.r10.s64 = ctx.r10.s64 + 18984;
loc_82EEBB8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebbb0
	if (ctx.cr0.eq) goto loc_82EEBBB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebb8c
	if (ctx.cr6.eq) goto loc_82EEBB8C;
loc_82EEBBB0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebbc0
	if (!ctx.cr0.eq) goto loc_82EEBBC0;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBBC0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18972
	ctx.r10.s64 = ctx.r10.s64 + 18972;
loc_82EEBBCC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebbf0
	if (ctx.cr0.eq) goto loc_82EEBBF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebbcc
	if (ctx.cr6.eq) goto loc_82EEBBCC;
loc_82EEBBF0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebc00
	if (!ctx.cr0.eq) goto loc_82EEBC00;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBC00:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18964
	ctx.r10.s64 = ctx.r10.s64 + 18964;
loc_82EEBC0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebc30
	if (ctx.cr0.eq) goto loc_82EEBC30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebc0c
	if (ctx.cr6.eq) goto loc_82EEBC0C;
loc_82EEBC30:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eebdf4
	if (ctx.cr0.eq) goto loc_82EEBDF4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18960
	ctx.r10.s64 = ctx.r10.s64 + 18960;
loc_82EEBC44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebc68
	if (ctx.cr0.eq) goto loc_82EEBC68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebc44
	if (ctx.cr6.eq) goto loc_82EEBC44;
loc_82EEBC68:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebc78
	if (!ctx.cr0.eq) goto loc_82EEBC78;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBC78:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18952
	ctx.r10.s64 = ctx.r10.s64 + 18952;
loc_82EEBC84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebca8
	if (ctx.cr0.eq) goto loc_82EEBCA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebc84
	if (ctx.cr6.eq) goto loc_82EEBC84;
loc_82EEBCA8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebcb8
	if (!ctx.cr0.eq) goto loc_82EEBCB8;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBCB8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18944
	ctx.r10.s64 = ctx.r10.s64 + 18944;
loc_82EEBCC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebce8
	if (ctx.cr0.eq) goto loc_82EEBCE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebcc4
	if (ctx.cr6.eq) goto loc_82EEBCC4;
loc_82EEBCE8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebcf8
	if (!ctx.cr0.eq) goto loc_82EEBCF8;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBCF8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18936
	ctx.r10.s64 = ctx.r10.s64 + 18936;
loc_82EEBD04:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebd28
	if (ctx.cr0.eq) goto loc_82EEBD28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebd04
	if (ctx.cr6.eq) goto loc_82EEBD04;
loc_82EEBD28:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebd38
	if (!ctx.cr0.eq) goto loc_82EEBD38;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBD38:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18928
	ctx.r10.s64 = ctx.r10.s64 + 18928;
loc_82EEBD44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebd68
	if (ctx.cr0.eq) goto loc_82EEBD68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebd44
	if (ctx.cr6.eq) goto loc_82EEBD44;
loc_82EEBD68:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebd78
	if (!ctx.cr0.eq) goto loc_82EEBD78;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBD78:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18920
	ctx.r10.s64 = ctx.r10.s64 + 18920;
loc_82EEBD84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebda8
	if (ctx.cr0.eq) goto loc_82EEBDA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebd84
	if (ctx.cr6.eq) goto loc_82EEBD84;
loc_82EEBDA8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebdb8
	if (!ctx.cr0.eq) goto loc_82EEBDB8;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// b 0x82eebdf4
	goto loc_82EEBDF4;
loc_82EEBDB8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18908
	ctx.r10.s64 = ctx.r10.s64 + 18908;
loc_82EEBDC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebde8
	if (ctx.cr0.eq) goto loc_82EEBDE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebdc4
	if (ctx.cr6.eq) goto loc_82EEBDC4;
loc_82EEBDE8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeb8e0
	if (!ctx.cr0.eq) goto loc_82EEB8E0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EEBDF4:
	// li r11,10
	ctx.r11.s64 = 10;
loc_82EEBDF8:
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r27,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r27.u8);
	// b 0x82eeb8e8
	goto loc_82EEB8E8;
}

__attribute__((alias("__imp__sub_82EEB8E0"))) PPC_WEAK_FUNC(sub_82EEB8E0);
PPC_FUNC_IMPL(__imp__sub_82EEB8E0) {
	PPC_FUNC_PROLOGUE();
loc_82EEB8E0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
	// subf. r29,r30,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82eeb8e0
	if (ctx.cr0.eq) goto loc_82EEB8E0;
	// cmplwi cr6,r29,20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 20, ctx.xer);
}

__attribute__((alias("__imp__sub_82EEB8E8"))) PPC_WEAK_FUNC(sub_82EEB8E8);
PPC_FUNC_IMPL(__imp__sub_82EEB8E8) {
	PPC_FUNC_PROLOGUE();
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
	// subf. r29,r30,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82eeb8e0
	if (ctx.cr0.eq) {
		sub_82EEB8E0(ctx, base);
		return;
	}
	// cmplwi cr6,r29,20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 20, ctx.xer);
	// bgt cr6,0x82eeb8e0
	if (ctx.cr6.gt) {
		sub_82EEB8E0(ctx, base);
		return;
	}
	// b 0x82eeb914
	goto loc_82EEB914;
loc_82EEB904:
	// bl 0x82cbdd38
	ctx.lr = 0x82EEB908;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eeb920
	if (ctx.cr0.eq) goto loc_82EEB920;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82EEB914:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eeb904
	if (!ctx.cr0.eq) goto loc_82EEB904;
loc_82EEB920:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eeb8e0
	if (!ctx.cr6.eq) {
		sub_82EEB8E0(ctx, base);
		return;
	}
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eeb978
	if (ctx.cr6.eq) goto loc_82EEB978;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r30,r30,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_82EEB944:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdc30
	ctx.lr = 0x82EEB950;
	sub_82CBDC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eeb978
	if (ctx.cr0.eq) goto loc_82EEB978;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cb2710
	ctx.lr = 0x82EEB964;
	sub_82CB2710(ctx, base);
	// stbx r3,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eeb944
	if (!ctx.cr6.eq) goto loc_82EEB944;
loc_82EEB978:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19064
	ctx.r10.s64 = ctx.r10.s64 + 19064;
	// stbx r28,r29,r9
	PPC_STORE_U8(ctx.r29.u32 + ctx.r9.u32, ctx.r28.u8);
loc_82EEB98C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eeb9b0
	if (ctx.cr0.eq) goto loc_82EEB9B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eeb98c
	if (ctx.cr6.eq) goto loc_82EEB98C;
loc_82EEB9B0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeb9c0
	if (!ctx.cr0.eq) goto loc_82EEB9C0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEB9C0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19052
	ctx.r10.s64 = ctx.r10.s64 + 19052;
loc_82EEB9CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eeb9f0
	if (ctx.cr0.eq) goto loc_82EEB9F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eeb9cc
	if (ctx.cr6.eq) goto loc_82EEB9CC;
loc_82EEB9F0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeba00
	if (!ctx.cr0.eq) goto loc_82EEBA00;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBA00:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19036
	ctx.r10.s64 = ctx.r10.s64 + 19036;
loc_82EEBA0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eeba30
	if (ctx.cr0.eq) goto loc_82EEBA30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eeba0c
	if (ctx.cr6.eq) goto loc_82EEBA0C;
loc_82EEBA30:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeba40
	if (!ctx.cr0.eq) goto loc_82EEBA40;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBA40:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2168
	ctx.r10.s64 = ctx.r10.s64 + 2168;
loc_82EEBA4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eeba70
	if (ctx.cr0.eq) goto loc_82EEBA70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eeba4c
	if (ctx.cr6.eq) goto loc_82EEBA4C;
loc_82EEBA70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeba80
	if (!ctx.cr0.eq) goto loc_82EEBA80;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBA80:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19028
	ctx.r10.s64 = ctx.r10.s64 + 19028;
loc_82EEBA8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebab0
	if (ctx.cr0.eq) goto loc_82EEBAB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eeba8c
	if (ctx.cr6.eq) goto loc_82EEBA8C;
loc_82EEBAB0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebac0
	if (!ctx.cr0.eq) goto loc_82EEBAC0;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBAC0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19016
	ctx.r10.s64 = ctx.r10.s64 + 19016;
loc_82EEBACC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebaf0
	if (ctx.cr0.eq) goto loc_82EEBAF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebacc
	if (ctx.cr6.eq) goto loc_82EEBACC;
loc_82EEBAF0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebb00
	if (!ctx.cr0.eq) goto loc_82EEBB00;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBB00:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19008
	ctx.r10.s64 = ctx.r10.s64 + 19008;
loc_82EEBB0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebb30
	if (ctx.cr0.eq) goto loc_82EEBB30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebb0c
	if (ctx.cr6.eq) goto loc_82EEBB0C;
loc_82EEBB30:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebb40
	if (!ctx.cr0.eq) goto loc_82EEBB40;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBB40:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18996
	ctx.r10.s64 = ctx.r10.s64 + 18996;
loc_82EEBB4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebb70
	if (ctx.cr0.eq) goto loc_82EEBB70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebb4c
	if (ctx.cr6.eq) goto loc_82EEBB4C;
loc_82EEBB70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebb80
	if (!ctx.cr0.eq) goto loc_82EEBB80;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBB80:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18984
	ctx.r10.s64 = ctx.r10.s64 + 18984;
loc_82EEBB8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebbb0
	if (ctx.cr0.eq) goto loc_82EEBBB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebb8c
	if (ctx.cr6.eq) goto loc_82EEBB8C;
loc_82EEBBB0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebbc0
	if (!ctx.cr0.eq) goto loc_82EEBBC0;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBBC0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18972
	ctx.r10.s64 = ctx.r10.s64 + 18972;
loc_82EEBBCC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebbf0
	if (ctx.cr0.eq) goto loc_82EEBBF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebbcc
	if (ctx.cr6.eq) goto loc_82EEBBCC;
loc_82EEBBF0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebc00
	if (!ctx.cr0.eq) goto loc_82EEBC00;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBC00:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18964
	ctx.r10.s64 = ctx.r10.s64 + 18964;
loc_82EEBC0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebc30
	if (ctx.cr0.eq) goto loc_82EEBC30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebc0c
	if (ctx.cr6.eq) goto loc_82EEBC0C;
loc_82EEBC30:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eebdf4
	if (ctx.cr0.eq) goto loc_82EEBDF4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18960
	ctx.r10.s64 = ctx.r10.s64 + 18960;
loc_82EEBC44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebc68
	if (ctx.cr0.eq) goto loc_82EEBC68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebc44
	if (ctx.cr6.eq) goto loc_82EEBC44;
loc_82EEBC68:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebc78
	if (!ctx.cr0.eq) goto loc_82EEBC78;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBC78:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18952
	ctx.r10.s64 = ctx.r10.s64 + 18952;
loc_82EEBC84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebca8
	if (ctx.cr0.eq) goto loc_82EEBCA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebc84
	if (ctx.cr6.eq) goto loc_82EEBC84;
loc_82EEBCA8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebcb8
	if (!ctx.cr0.eq) goto loc_82EEBCB8;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBCB8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18944
	ctx.r10.s64 = ctx.r10.s64 + 18944;
loc_82EEBCC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebce8
	if (ctx.cr0.eq) goto loc_82EEBCE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebcc4
	if (ctx.cr6.eq) goto loc_82EEBCC4;
loc_82EEBCE8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebcf8
	if (!ctx.cr0.eq) goto loc_82EEBCF8;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBCF8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18936
	ctx.r10.s64 = ctx.r10.s64 + 18936;
loc_82EEBD04:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebd28
	if (ctx.cr0.eq) goto loc_82EEBD28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebd04
	if (ctx.cr6.eq) goto loc_82EEBD04;
loc_82EEBD28:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebd38
	if (!ctx.cr0.eq) goto loc_82EEBD38;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBD38:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18928
	ctx.r10.s64 = ctx.r10.s64 + 18928;
loc_82EEBD44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebd68
	if (ctx.cr0.eq) goto loc_82EEBD68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebd44
	if (ctx.cr6.eq) goto loc_82EEBD44;
loc_82EEBD68:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebd78
	if (!ctx.cr0.eq) goto loc_82EEBD78;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBD78:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18920
	ctx.r10.s64 = ctx.r10.s64 + 18920;
loc_82EEBD84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebda8
	if (ctx.cr0.eq) goto loc_82EEBDA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebd84
	if (ctx.cr6.eq) goto loc_82EEBD84;
loc_82EEBDA8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebdb8
	if (!ctx.cr0.eq) goto loc_82EEBDB8;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// b 0x82eebdf4
	goto loc_82EEBDF4;
loc_82EEBDB8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18908
	ctx.r10.s64 = ctx.r10.s64 + 18908;
loc_82EEBDC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebde8
	if (ctx.cr0.eq) goto loc_82EEBDE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebdc4
	if (ctx.cr6.eq) goto loc_82EEBDC4;
loc_82EEBDE8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeb8e0
	if (!ctx.cr0.eq) {
		sub_82EEB8E0(ctx, base);
		return;
	}
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EEBDF4:
	// li r11,10
	ctx.r11.s64 = 10;
loc_82EEBDF8:
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r27,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r27.u8);
}

__attribute__((alias("__imp__sub_82EEB8F0"))) PPC_WEAK_FUNC(sub_82EEB8F0);
PPC_FUNC_IMPL(__imp__sub_82EEB8F0) {
	PPC_FUNC_PROLOGUE();
	// subf. r29,r30,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82eeb8e0
	if (ctx.cr0.eq) {
		sub_82EEB8E0(ctx, base);
		return;
	}
	// cmplwi cr6,r29,20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 20, ctx.xer);
	// bgt cr6,0x82eeb8e0
	if (ctx.cr6.gt) {
		sub_82EEB8E0(ctx, base);
		return;
	}
	// b 0x82eeb914
	goto loc_82EEB914;
loc_82EEB904:
	// bl 0x82cbdd38
	ctx.lr = 0x82EEB908;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eeb920
	if (ctx.cr0.eq) goto loc_82EEB920;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82EEB914:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eeb904
	if (!ctx.cr0.eq) goto loc_82EEB904;
loc_82EEB920:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eeb8e0
	if (!ctx.cr6.eq) {
		sub_82EEB8E0(ctx, base);
		return;
	}
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eeb978
	if (ctx.cr6.eq) goto loc_82EEB978;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r30,r30,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_82EEB944:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdc30
	ctx.lr = 0x82EEB950;
	sub_82CBDC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eeb978
	if (ctx.cr0.eq) goto loc_82EEB978;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cb2710
	ctx.lr = 0x82EEB964;
	sub_82CB2710(ctx, base);
	// stbx r3,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eeb944
	if (!ctx.cr6.eq) goto loc_82EEB944;
loc_82EEB978:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19064
	ctx.r10.s64 = ctx.r10.s64 + 19064;
	// stbx r28,r29,r9
	PPC_STORE_U8(ctx.r29.u32 + ctx.r9.u32, ctx.r28.u8);
loc_82EEB98C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eeb9b0
	if (ctx.cr0.eq) goto loc_82EEB9B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eeb98c
	if (ctx.cr6.eq) goto loc_82EEB98C;
loc_82EEB9B0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeb9c0
	if (!ctx.cr0.eq) goto loc_82EEB9C0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEB9C0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19052
	ctx.r10.s64 = ctx.r10.s64 + 19052;
loc_82EEB9CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eeb9f0
	if (ctx.cr0.eq) goto loc_82EEB9F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eeb9cc
	if (ctx.cr6.eq) goto loc_82EEB9CC;
loc_82EEB9F0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeba00
	if (!ctx.cr0.eq) goto loc_82EEBA00;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBA00:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19036
	ctx.r10.s64 = ctx.r10.s64 + 19036;
loc_82EEBA0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eeba30
	if (ctx.cr0.eq) goto loc_82EEBA30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eeba0c
	if (ctx.cr6.eq) goto loc_82EEBA0C;
loc_82EEBA30:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeba40
	if (!ctx.cr0.eq) goto loc_82EEBA40;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBA40:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2168
	ctx.r10.s64 = ctx.r10.s64 + 2168;
loc_82EEBA4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eeba70
	if (ctx.cr0.eq) goto loc_82EEBA70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eeba4c
	if (ctx.cr6.eq) goto loc_82EEBA4C;
loc_82EEBA70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeba80
	if (!ctx.cr0.eq) goto loc_82EEBA80;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBA80:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19028
	ctx.r10.s64 = ctx.r10.s64 + 19028;
loc_82EEBA8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebab0
	if (ctx.cr0.eq) goto loc_82EEBAB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eeba8c
	if (ctx.cr6.eq) goto loc_82EEBA8C;
loc_82EEBAB0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebac0
	if (!ctx.cr0.eq) goto loc_82EEBAC0;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBAC0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19016
	ctx.r10.s64 = ctx.r10.s64 + 19016;
loc_82EEBACC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebaf0
	if (ctx.cr0.eq) goto loc_82EEBAF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebacc
	if (ctx.cr6.eq) goto loc_82EEBACC;
loc_82EEBAF0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebb00
	if (!ctx.cr0.eq) goto loc_82EEBB00;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBB00:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,19008
	ctx.r10.s64 = ctx.r10.s64 + 19008;
loc_82EEBB0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebb30
	if (ctx.cr0.eq) goto loc_82EEBB30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebb0c
	if (ctx.cr6.eq) goto loc_82EEBB0C;
loc_82EEBB30:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebb40
	if (!ctx.cr0.eq) goto loc_82EEBB40;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBB40:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18996
	ctx.r10.s64 = ctx.r10.s64 + 18996;
loc_82EEBB4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebb70
	if (ctx.cr0.eq) goto loc_82EEBB70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebb4c
	if (ctx.cr6.eq) goto loc_82EEBB4C;
loc_82EEBB70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebb80
	if (!ctx.cr0.eq) goto loc_82EEBB80;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBB80:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18984
	ctx.r10.s64 = ctx.r10.s64 + 18984;
loc_82EEBB8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebbb0
	if (ctx.cr0.eq) goto loc_82EEBBB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebb8c
	if (ctx.cr6.eq) goto loc_82EEBB8C;
loc_82EEBBB0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebbc0
	if (!ctx.cr0.eq) goto loc_82EEBBC0;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBBC0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18972
	ctx.r10.s64 = ctx.r10.s64 + 18972;
loc_82EEBBCC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebbf0
	if (ctx.cr0.eq) goto loc_82EEBBF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebbcc
	if (ctx.cr6.eq) goto loc_82EEBBCC;
loc_82EEBBF0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebc00
	if (!ctx.cr0.eq) goto loc_82EEBC00;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBC00:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18964
	ctx.r10.s64 = ctx.r10.s64 + 18964;
loc_82EEBC0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebc30
	if (ctx.cr0.eq) goto loc_82EEBC30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebc0c
	if (ctx.cr6.eq) goto loc_82EEBC0C;
loc_82EEBC30:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eebdf4
	if (ctx.cr0.eq) goto loc_82EEBDF4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18960
	ctx.r10.s64 = ctx.r10.s64 + 18960;
loc_82EEBC44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebc68
	if (ctx.cr0.eq) goto loc_82EEBC68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebc44
	if (ctx.cr6.eq) goto loc_82EEBC44;
loc_82EEBC68:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebc78
	if (!ctx.cr0.eq) goto loc_82EEBC78;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBC78:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18952
	ctx.r10.s64 = ctx.r10.s64 + 18952;
loc_82EEBC84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebca8
	if (ctx.cr0.eq) goto loc_82EEBCA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebc84
	if (ctx.cr6.eq) goto loc_82EEBC84;
loc_82EEBCA8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebcb8
	if (!ctx.cr0.eq) goto loc_82EEBCB8;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBCB8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18944
	ctx.r10.s64 = ctx.r10.s64 + 18944;
loc_82EEBCC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebce8
	if (ctx.cr0.eq) goto loc_82EEBCE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebcc4
	if (ctx.cr6.eq) goto loc_82EEBCC4;
loc_82EEBCE8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebcf8
	if (!ctx.cr0.eq) goto loc_82EEBCF8;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBCF8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18936
	ctx.r10.s64 = ctx.r10.s64 + 18936;
loc_82EEBD04:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebd28
	if (ctx.cr0.eq) goto loc_82EEBD28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebd04
	if (ctx.cr6.eq) goto loc_82EEBD04;
loc_82EEBD28:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebd38
	if (!ctx.cr0.eq) goto loc_82EEBD38;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBD38:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18928
	ctx.r10.s64 = ctx.r10.s64 + 18928;
loc_82EEBD44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebd68
	if (ctx.cr0.eq) goto loc_82EEBD68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebd44
	if (ctx.cr6.eq) goto loc_82EEBD44;
loc_82EEBD68:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebd78
	if (!ctx.cr0.eq) goto loc_82EEBD78;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82eebdf8
	goto loc_82EEBDF8;
loc_82EEBD78:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18920
	ctx.r10.s64 = ctx.r10.s64 + 18920;
loc_82EEBD84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebda8
	if (ctx.cr0.eq) goto loc_82EEBDA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebd84
	if (ctx.cr6.eq) goto loc_82EEBD84;
loc_82EEBDA8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eebdb8
	if (!ctx.cr0.eq) goto loc_82EEBDB8;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// b 0x82eebdf4
	goto loc_82EEBDF4;
loc_82EEBDB8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18908
	ctx.r10.s64 = ctx.r10.s64 + 18908;
loc_82EEBDC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eebde8
	if (ctx.cr0.eq) goto loc_82EEBDE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eebdc4
	if (ctx.cr6.eq) goto loc_82EEBDC4;
loc_82EEBDE8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eeb8e0
	if (!ctx.cr0.eq) {
		sub_82EEB8E0(ctx, base);
		return;
	}
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EEBDF4:
	// li r11,10
	ctx.r11.s64 = 10;
loc_82EEBDF8:
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r27,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r27.u8);
	// b 0x82eeb8e8
	sub_82EEB8E8(ctx, base);
	return;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x82eebefc
	if (ctx.cr6.gt) goto loc_82EEBEFC;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,18656
	ctx.r12.s64 = ctx.r12.s64 + 18656;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32017
	ctx.r12.s64 = -2098266112;
	// addi r12,r12,-16836
	ctx.r12.s64 = ctx.r12.s64 + -16836;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82EEBE3C;
	case 1:
		goto loc_82EEBE48;
	case 2:
		goto loc_82EEBE54;
	case 3:
		goto loc_82EEBE60;
	case 4:
		goto loc_82EEBE6C;
	case 5:
		goto loc_82EEBE78;
	case 6:
		goto loc_82EEBE84;
	case 7:
		goto loc_82EEBE90;
	case 8:
		goto loc_82EEBE9C;
	case 9:
		goto loc_82EEBEA8;
	case 10:
		goto loc_82EEBEB4;
	case 11:
		goto loc_82EEBECC;
	case 12:
		goto loc_82EEBEC0;
	case 13:
		goto loc_82EEBED8;
	case 14:
		goto loc_82EEBEF0;
	case 15:
		goto loc_82EEBEE4;
	default:
		__builtin_unreachable();
	}
loc_82EEBE3C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,19064
	ctx.r3.s64 = ctx.r11.s64 + 19064;
	// blr 
	return;
loc_82EEBE48:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,19052
	ctx.r3.s64 = ctx.r11.s64 + 19052;
	// blr 
	return;
loc_82EEBE54:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,19036
	ctx.r3.s64 = ctx.r11.s64 + 19036;
	// blr 
	return;
loc_82EEBE60:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,2168
	ctx.r3.s64 = ctx.r11.s64 + 2168;
	// blr 
	return;
loc_82EEBE6C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,19028
	ctx.r3.s64 = ctx.r11.s64 + 19028;
	// blr 
	return;
loc_82EEBE78:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,19016
	ctx.r3.s64 = ctx.r11.s64 + 19016;
	// blr 
	return;
loc_82EEBE84:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,19008
	ctx.r3.s64 = ctx.r11.s64 + 19008;
	// blr 
	return;
loc_82EEBE90:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18996
	ctx.r3.s64 = ctx.r11.s64 + 18996;
	// blr 
	return;
loc_82EEBE9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18984
	ctx.r3.s64 = ctx.r11.s64 + 18984;
	// blr 
	return;
loc_82EEBEA8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18972
	ctx.r3.s64 = ctx.r11.s64 + 18972;
	// blr 
	return;
loc_82EEBEB4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18964
	ctx.r3.s64 = ctx.r11.s64 + 18964;
	// blr 
	return;
loc_82EEBEC0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18952
	ctx.r3.s64 = ctx.r11.s64 + 18952;
	// blr 
	return;
loc_82EEBECC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18960
	ctx.r3.s64 = ctx.r11.s64 + 18960;
	// blr 
	return;
loc_82EEBED8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18944
	ctx.r3.s64 = ctx.r11.s64 + 18944;
	// blr 
	return;
loc_82EEBEE4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// blr 
	return;
loc_82EEBEF0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18936
	ctx.r3.s64 = ctx.r11.s64 + 18936;
	// blr 
	return;
loc_82EEBEFC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,19076
	ctx.r3.s64 = ctx.r11.s64 + 19076;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEBE08"))) PPC_WEAK_FUNC(sub_82EEBE08);
PPC_FUNC_IMPL(__imp__sub_82EEBE08) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x82eebefc
	if (ctx.cr6.gt) goto loc_82EEBEFC;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,18656
	ctx.r12.s64 = ctx.r12.s64 + 18656;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32017
	ctx.r12.s64 = -2098266112;
	// addi r12,r12,-16836
	ctx.r12.s64 = ctx.r12.s64 + -16836;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82EEBE3C;
	case 1:
		goto loc_82EEBE48;
	case 2:
		goto loc_82EEBE54;
	case 3:
		goto loc_82EEBE60;
	case 4:
		goto loc_82EEBE6C;
	case 5:
		goto loc_82EEBE78;
	case 6:
		goto loc_82EEBE84;
	case 7:
		goto loc_82EEBE90;
	case 8:
		goto loc_82EEBE9C;
	case 9:
		goto loc_82EEBEA8;
	case 10:
		goto loc_82EEBEB4;
	case 11:
		goto loc_82EEBECC;
	case 12:
		goto loc_82EEBEC0;
	case 13:
		goto loc_82EEBED8;
	case 14:
		goto loc_82EEBEF0;
	case 15:
		goto loc_82EEBEE4;
	default:
		__builtin_unreachable();
	}
loc_82EEBE3C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,19064
	ctx.r3.s64 = ctx.r11.s64 + 19064;
	// blr 
	return;
loc_82EEBE48:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,19052
	ctx.r3.s64 = ctx.r11.s64 + 19052;
	// blr 
	return;
loc_82EEBE54:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,19036
	ctx.r3.s64 = ctx.r11.s64 + 19036;
	// blr 
	return;
loc_82EEBE60:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,2168
	ctx.r3.s64 = ctx.r11.s64 + 2168;
	// blr 
	return;
loc_82EEBE6C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,19028
	ctx.r3.s64 = ctx.r11.s64 + 19028;
	// blr 
	return;
loc_82EEBE78:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,19016
	ctx.r3.s64 = ctx.r11.s64 + 19016;
	// blr 
	return;
loc_82EEBE84:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,19008
	ctx.r3.s64 = ctx.r11.s64 + 19008;
	// blr 
	return;
loc_82EEBE90:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18996
	ctx.r3.s64 = ctx.r11.s64 + 18996;
	// blr 
	return;
loc_82EEBE9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18984
	ctx.r3.s64 = ctx.r11.s64 + 18984;
	// blr 
	return;
loc_82EEBEA8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18972
	ctx.r3.s64 = ctx.r11.s64 + 18972;
	// blr 
	return;
loc_82EEBEB4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18964
	ctx.r3.s64 = ctx.r11.s64 + 18964;
	// blr 
	return;
loc_82EEBEC0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18952
	ctx.r3.s64 = ctx.r11.s64 + 18952;
	// blr 
	return;
loc_82EEBECC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18960
	ctx.r3.s64 = ctx.r11.s64 + 18960;
	// blr 
	return;
loc_82EEBED8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18944
	ctx.r3.s64 = ctx.r11.s64 + 18944;
	// blr 
	return;
loc_82EEBEE4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// blr 
	return;
loc_82EEBEF0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,18936
	ctx.r3.s64 = ctx.r11.s64 + 18936;
	// blr 
	return;
loc_82EEBEFC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,19076
	ctx.r3.s64 = ctx.r11.s64 + 19076;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEBF08"))) PPC_WEAK_FUNC(sub_82EEBF08);
PPC_FUNC_IMPL(__imp__sub_82EEBF08) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eebf6c
	if (ctx.cr6.eq) goto loc_82EEBF6C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eebf6c
	if (ctx.cr0.eq) goto loc_82EEBF6C;
loc_82EEBF38:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82cb2710
	ctx.lr = 0x82EEBF40;
	sub_82CB2710(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mulli r10,r30,19
	ctx.r10.s64 = ctx.r30.s64 * 19;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r30,r3,r10
	ctx.r30.u64 = ctx.r3.u64 + ctx.r10.u64;
	// bne 0x82eebf38
	if (!ctx.cr0.eq) goto loc_82EEBF38;
	// li r11,7
	ctx.r11.s64 = 7;
	// divwu r11,r30,r11
	ctx.r11.u32 = ctx.r30.u32 / ctx.r11.u32;
	// mulli r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 * 7;
	// subf r3,r11,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r11.s64;
	// b 0x82eebf70
	goto loc_82EEBF70;
loc_82EEBF6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEBF70:
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

__attribute__((alias("__imp__sub_82EEBF88"))) PPC_WEAK_FUNC(sub_82EEBF88);
PPC_FUNC_IMPL(__imp__sub_82EEBF88) {
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eebf08
	ctx.lr = 0x82EEBFAC;
	sub_82EEBF08(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x82eebfd0
	goto loc_82EEBFD0;
loc_82EEBFB8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82beae08
	ctx.lr = 0x82EEBFC4;
	sub_82BEAE08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eebff4
	if (ctx.cr0.eq) goto loc_82EEBFF4;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_82EEBFD0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82eebfb8
	if (!ctx.cr6.eq) goto loc_82EEBFB8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEBFDC:
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
loc_82EEBFF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82eebfdc
	goto loc_82EEBFDC;
}

__attribute__((alias("__imp__sub_82EEBFFC"))) PPC_WEAK_FUNC(sub_82EEBFFC);
PPC_FUNC_IMPL(__imp__sub_82EEBFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEC000"))) PPC_WEAK_FUNC(sub_82EEC000);
PPC_FUNC_IMPL(__imp__sub_82EEC000) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
loc_82EEC008:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eec034
	if (ctx.cr6.eq) goto loc_82EEC034;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82EEC01C:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eec01c
	if (!ctx.cr6.eq) goto loc_82EEC01C;
loc_82EEC034:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x82eec008
	if (!ctx.cr0.eq) goto loc_82EEC008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEC044"))) PPC_WEAK_FUNC(sub_82EEC044);
PPC_FUNC_IMPL(__imp__sub_82EEC044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEC048"))) PPC_WEAK_FUNC(sub_82EEC048);
PPC_FUNC_IMPL(__imp__sub_82EEC048) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEC074"))) PPC_WEAK_FUNC(sub_82EEC074);
PPC_FUNC_IMPL(__imp__sub_82EEC074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEC078"))) PPC_WEAK_FUNC(sub_82EEC078);
PPC_FUNC_IMPL(__imp__sub_82EEC078) {
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
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82eec0d8
	if (ctx.cr6.eq) goto loc_82EEC0D8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82eec0b4
	if (ctx.cr6.eq) goto loc_82EEC0B4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82eec0d8
	if (ctx.cr6.eq) goto loc_82EEC0D8;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82eec0f0
	if (!ctx.cr6.eq) goto loc_82EEC0F0;
loc_82EEC0B4:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r5,r10,5000
	ctx.r5.s64 = ctx.r10.s64 + 5000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,-18112
	ctx.r6.s64 = ctx.r11.s64 + -18112;
	// bl 0x82eea308
	ctx.lr = 0x82EEC0CC;
	sub_82EEA308(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x82eec0f0
	goto loc_82EEC0F0;
loc_82EEC0D8:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r5,r10,5000
	ctx.r5.s64 = ctx.r10.s64 + 5000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,-18112
	ctx.r6.s64 = ctx.r11.s64 + -18112;
	// bl 0x82eea530
	ctx.lr = 0x82EEC0F0;
	sub_82EEA530(ctx, base);
loc_82EEC0F0:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82EEC108"))) PPC_WEAK_FUNC(sub_82EEC108);
PPC_FUNC_IMPL(__imp__sub_82EEC108) {
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
	// beq cr6,0x82eec130
	if (ctx.cr6.eq) goto loc_82EEC130;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82eec164
	goto loc_82EEC164;
loc_82EEC130:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eec15c
	if (!ctx.cr6.eq) goto loc_82EEC15C;
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
	ctx.lr = 0x82EEC158;
	sub_82EEA308(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_82EEC15C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_82EEC164:
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

__attribute__((alias("__imp__sub_82EEC17C"))) PPC_WEAK_FUNC(sub_82EEC17C);
PPC_FUNC_IMPL(__imp__sub_82EEC17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEC180"))) PPC_WEAK_FUNC(sub_82EEC180);
PPC_FUNC_IMPL(__imp__sub_82EEC180) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82eec274
	if (ctx.cr6.eq) goto loc_82EEC274;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eec274
	if (ctx.cr0.eq) goto loc_82EEC274;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82EEC1B8:
	// cmpwi cr6,r11,119
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 119, ctx.xer);
	// bgt cr6,0x82eec220
	if (ctx.cr6.gt) goto loc_82EEC220;
	// beq cr6,0x82eec214
	if (ctx.cr6.eq) goto loc_82EEC214;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x82eec214
	if (ctx.cr6.eq) goto loc_82EEC214;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x82eec238
	if (ctx.cr6.eq) goto loc_82EEC238;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// beq cr6,0x82eec244
	if (ctx.cr6.eq) goto loc_82EEC244;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// bne cr6,0x82eec250
	if (!ctx.cr6.eq) goto loc_82EEC250;
loc_82EEC1E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// oris r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 65536;
loc_82EEC1EC:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82eec1fc
	if (ctx.cr6.eq) goto loc_82EEC1FC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82eec250
	if (!ctx.cr6.gt) goto loc_82EEC250;
loc_82EEC1FC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eec1b8
	if (!ctx.cr0.eq) goto loc_82EEC1B8;
	// b 0x82eec278
	goto loc_82EEC278;
loc_82EEC214:
	// li r11,3
	ctx.r11.s64 = 3;
	// oris r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 524288;
	// b 0x82eec1ec
	goto loc_82EEC1EC;
loc_82EEC220:
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82eec1e4
	if (ctx.cr6.eq) goto loc_82EEC1E4;
	// cmpwi cr6,r11,121
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 121, ctx.xer);
	// beq cr6,0x82eec244
	if (ctx.cr6.eq) goto loc_82EEC244;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bne cr6,0x82eec250
	if (!ctx.cr6.eq) goto loc_82EEC250;
loc_82EEC238:
	// li r11,2
	ctx.r11.s64 = 2;
	// oris r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 262144;
	// b 0x82eec1ec
	goto loc_82EEC1EC;
loc_82EEC244:
	// li r11,1
	ctx.r11.s64 = 1;
	// oris r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 131072;
	// b 0x82eec1ec
	goto loc_82EEC1EC;
loc_82EEC250:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2003
	ctx.r5.s64 = 2003;
	// addi r6,r11,19084
	ctx.r6.s64 = ctx.r11.s64 + 19084;
	// bl 0x82eea308
	ctx.lr = 0x82EEC264;
	sub_82EEA308(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x82eec278
	goto loc_82EEC278;
loc_82EEC274:
	// lis r3,15
	ctx.r3.s64 = 983040;
loc_82EEC278:
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

__attribute__((alias("__imp__sub_82EEC28C"))) PPC_WEAK_FUNC(sub_82EEC28C);
PPC_FUNC_IMPL(__imp__sub_82EEC28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEC290"))) PPC_WEAK_FUNC(sub_82EEC290);
PPC_FUNC_IMPL(__imp__sub_82EEC290) {
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
	// beq cr6,0x82eec380
	if (ctx.cr6.eq) goto loc_82EEC380;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eec380
	if (ctx.cr6.eq) goto loc_82EEC380;
	// li r9,16
	ctx.r9.s64 = 16;
loc_82EEC2CC:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eec30c
	if (ctx.cr0.eq) goto loc_82EEC30C;
	// cmpwi cr6,r11,119
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 119, ctx.xer);
	// bgt cr6,0x82eec358
	if (ctx.cr6.gt) goto loc_82EEC358;
	// beq cr6,0x82eec350
	if (ctx.cr6.eq) goto loc_82EEC350;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x82eec350
	if (ctx.cr6.eq) goto loc_82EEC350;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x82eec370
	if (ctx.cr6.eq) goto loc_82EEC370;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// beq cr6,0x82eec378
	if (ctx.cr6.eq) goto loc_82EEC378;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// bne cr6,0x82eec32c
	if (!ctx.cr6.eq) goto loc_82EEC32C;
loc_82EEC304:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EEC308:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82EEC30C:
	// slw r11,r10,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
	// cmplwi cr6,r9,24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24, ctx.xer);
	// blt cr6,0x82eec2cc
	if (ctx.cr6.lt) goto loc_82EEC2CC;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eec384
	if (ctx.cr6.eq) goto loc_82EEC384;
loc_82EEC32C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2004
	ctx.r5.s64 = 2004;
	// addi r6,r11,19104
	ctx.r6.s64 = ctx.r11.s64 + 19104;
	// bl 0x82eea308
	ctx.lr = 0x82EEC340;
	sub_82EEA308(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x82eec384
	goto loc_82EEC384;
loc_82EEC350:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82eec308
	goto loc_82EEC308;
loc_82EEC358:
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82eec304
	if (ctx.cr6.eq) goto loc_82EEC304;
	// cmpwi cr6,r11,121
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 121, ctx.xer);
	// beq cr6,0x82eec378
	if (ctx.cr6.eq) goto loc_82EEC378;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bne cr6,0x82eec32c
	if (!ctx.cr6.eq) goto loc_82EEC32C;
loc_82EEC370:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82eec308
	goto loc_82EEC308;
loc_82EEC378:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82eec308
	goto loc_82EEC308;
loc_82EEC380:
	// lis r3,228
	ctx.r3.s64 = 14942208;
loc_82EEC384:
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

__attribute__((alias("__imp__sub_82EEC398"))) PPC_WEAK_FUNC(sub_82EEC398);
PPC_FUNC_IMPL(__imp__sub_82EEC398) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eec414
	if (ctx.cr6.eq) goto loc_82EEC414;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eec414
	if (!ctx.cr6.lt) goto loc_82EEC414;
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEC3F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eec408
	if (!ctx.cr0.lt) goto loc_82EEC408;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_82EEC408:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x82eec418
	goto loc_82EEC418;
loc_82EEC414:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEC418:
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

__attribute__((alias("__imp__sub_82EEC42C"))) PPC_WEAK_FUNC(sub_82EEC42C);
PPC_FUNC_IMPL(__imp__sub_82EEC42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEC430"))) PPC_WEAK_FUNC(sub_82EEC430);
PPC_FUNC_IMPL(__imp__sub_82EEC430) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r11,19136
	ctx.r6.s64 = ctx.r11.s64 + 19136;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82EEC454:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eec474
	if (!ctx.cr0.eq) goto loc_82EEC474;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82eec454
	if (!ctx.cr6.eq) goto loc_82EEC454;
loc_82EEC474:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eec5fc
	if (ctx.cr0.eq) goto loc_82EEC5FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r4,r11,19132
	ctx.r4.s64 = ctx.r11.s64 + 19132;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
loc_82EEC490:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eec4b0
	if (!ctx.cr0.eq) goto loc_82EEC4B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82eec490
	if (!ctx.cr6.eq) goto loc_82EEC490;
loc_82EEC4B0:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eec5fc
	if (ctx.cr0.eq) goto loc_82EEC5FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r5,r11,19128
	ctx.r5.s64 = ctx.r11.s64 + 19128;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
loc_82EEC4CC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eec4ec
	if (!ctx.cr0.eq) goto loc_82EEC4EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82eec4cc
	if (!ctx.cr6.eq) goto loc_82EEC4CC;
loc_82EEC4EC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eec5fc
	if (ctx.cr0.eq) goto loc_82EEC5FC;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
loc_82EEC504:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eec524
	if (!ctx.cr0.eq) goto loc_82EEC524;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82eec504
	if (!ctx.cr6.eq) goto loc_82EEC504;
loc_82EEC524:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eec5fc
	if (ctx.cr0.eq) goto loc_82EEC5FC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
loc_82EEC538:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eec558
	if (!ctx.cr0.eq) goto loc_82EEC558;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eec538
	if (!ctx.cr6.eq) goto loc_82EEC538;
loc_82EEC558:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eec5fc
	if (ctx.cr0.eq) goto loc_82EEC5FC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
loc_82EEC56C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eec58c
	if (!ctx.cr0.eq) goto loc_82EEC58C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eec56c
	if (!ctx.cr6.eq) goto loc_82EEC56C;
loc_82EEC58C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eec5fc
	if (ctx.cr0.eq) goto loc_82EEC5FC;
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
loc_82EEC59C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eec5c0
	if (ctx.cr0.eq) goto loc_82EEC5C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eec59c
	if (ctx.cr6.eq) goto loc_82EEC59C;
loc_82EEC5C0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82eec628
	if (!ctx.cr0.eq) goto loc_82EEC628;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
loc_82EEC5D8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eec628
	if (!ctx.cr0.eq) goto loc_82EEC628;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82eec5d8
	if (!ctx.cr6.eq) goto loc_82EEC5D8;
	// b 0x82eec628
	goto loc_82EEC628;
loc_82EEC5FC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82EEC604:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eec628
	if (ctx.cr0.eq) goto loc_82EEC628;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82eec604
	if (ctx.cr6.eq) goto loc_82EEC604;
loc_82EEC628:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEC630"))) PPC_WEAK_FUNC(sub_82EEC630);
PPC_FUNC_IMPL(__imp__sub_82EEC630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EEC638;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82ee3af8
	ctx.lr = 0x82EEC650;
	sub_82EE3AF8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eec670
	if (ctx.cr0.lt) goto loc_82EEC670;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEC66C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82EEC670:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEC67C"))) PPC_WEAK_FUNC(sub_82EEC67C);
PPC_FUNC_IMPL(__imp__sub_82EEC67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEC680"))) PPC_WEAK_FUNC(sub_82EEC680);
PPC_FUNC_IMPL(__imp__sub_82EEC680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82EEC688;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// rlwinm. r11,r3,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eec6b8
	if (ctx.cr0.eq) goto loc_82EEC6B8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eec8e4
	goto loc_82EEC8E4;
loc_82EEC6B8:
	// li r23,0
	ctx.r23.s64 = 0;
	// rlwinm. r11,r3,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// beq 0x82eec6cc
	if (ctx.cr0.eq) goto loc_82EEC6CC;
	// li r28,8
	ctx.r28.s64 = 8;
loc_82EEC6CC:
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eec6d8
	if (ctx.cr0.eq) goto loc_82EEC6D8;
	// ori r28,r28,16
	ctx.r28.u64 = ctx.r28.u64 | 16;
loc_82EEC6D8:
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x82ee3af8
	ctx.lr = 0x82EEC6EC;
	sub_82EE3AF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eec8e4
	if (ctx.cr0.lt) goto loc_82EEC8E4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEC708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEC724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82EEC730;
	sub_82CB16F0(ctx, base);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eaaf70
	ctx.lr = 0x82EEC740;
	sub_82EAAF70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82eec758
	if (!ctx.cr0.lt) goto loc_82EEC758;
	// lis r11,-30602
	ctx.r11.s64 = -2005532672;
	// ori r11,r11,2905
	ctx.r11.u64 = ctx.r11.u64 | 2905;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82eec878
	if (!ctx.cr6.eq) goto loc_82EEC878;
loc_82EEC758:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82eec7a0
	if (ctx.cr6.eq) goto loc_82EEC7A0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eec798
	if (ctx.cr0.eq) goto loc_82EEC798;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lis r10,-32017
	ctx.r10.s64 = -2098266112;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r8,r24,12
	ctx.r8.s64 = ctx.r24.s64 + 12;
	// addi r10,r10,-14800
	ctx.r10.s64 = ctx.r10.s64 + -14800;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
loc_82EEC798:
	// lwz r31,16(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// b 0x82eec7a4
	goto loc_82EEC7A4;
loc_82EEC7A0:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82EEC7A4:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r21,r1,116
	ctx.r21.s64 = ctx.r1.s64 + 116;
	// lwz r20,120(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEC7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEC7DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// bl 0x83201740
	ctx.lr = 0x82EEC80C;
	sub_83201740(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// blt 0x82eec880
	if (ctx.cr0.lt) goto loc_82EEC880;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee3af8
	ctx.lr = 0x82EEC824;
	sub_82EE3AF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eec880
	if (ctx.cr0.lt) goto loc_82EEC880;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEC844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEC860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EEC86C;
	sub_82CB1160(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_82EEC878:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82eec8a8
	if (!ctx.cr6.lt) goto loc_82EEC8A8;
loc_82EEC880:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82eec8a8
	if (ctx.cr6.eq) goto loc_82EEC8A8;
	// lwz r3,12(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eec8a8
	if (ctx.cr6.eq) goto loc_82EEC8A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEC8A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r23.u32);
loc_82EEC8A8:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eec8c4
	if (ctx.cr6.eq) goto loc_82EEC8C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEC8C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EEC8C4:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eec8e0
	if (ctx.cr6.eq) goto loc_82EEC8E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEC8E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EEC8E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EEC8E4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEC8EC"))) PPC_WEAK_FUNC(sub_82EEC8EC);
PPC_FUNC_IMPL(__imp__sub_82EEC8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEC8F0"))) PPC_WEAK_FUNC(sub_82EEC8F0);
PPC_FUNC_IMPL(__imp__sub_82EEC8F0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,1100
	ctx.r5.s64 = ctx.r5.s64 + 1100;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,19140
	ctx.r6.s64 = ctx.r11.s64 + 19140;
	// beq cr6,0x82eec934
	if (ctx.cr6.eq) goto loc_82EEC934;
	// bl 0x82eea308
	ctx.lr = 0x82EEC928;
	sub_82EEA308(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x82eec938
	goto loc_82EEC938;
loc_82EEC934:
	// bl 0x82eea530
	ctx.lr = 0x82EEC938;
	sub_82EEA530(ctx, base);
loc_82EEC938:
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

__attribute__((alias("__imp__sub_82EEC94C"))) PPC_WEAK_FUNC(sub_82EEC94C);
PPC_FUNC_IMPL(__imp__sub_82EEC94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEC950"))) PPC_WEAK_FUNC(sub_82EEC950);
PPC_FUNC_IMPL(__imp__sub_82EEC950) {
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
	// beq cr6,0x82eec988
	if (ctx.cr6.eq) goto loc_82EEC988;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEC980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EEC988:
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

__attribute__((alias("__imp__sub_82EEC99C"))) PPC_WEAK_FUNC(sub_82EEC99C);
PPC_FUNC_IMPL(__imp__sub_82EEC99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEC9A0"))) PPC_WEAK_FUNC(sub_82EEC9A0);
PPC_FUNC_IMPL(__imp__sub_82EEC9A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEC9BC"))) PPC_WEAK_FUNC(sub_82EEC9BC);
PPC_FUNC_IMPL(__imp__sub_82EEC9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEC9C0"))) PPC_WEAK_FUNC(sub_82EEC9C0);
PPC_FUNC_IMPL(__imp__sub_82EEC9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEC9C8"))) PPC_WEAK_FUNC(sub_82EEC9C8);
PPC_FUNC_IMPL(__imp__sub_82EEC9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEC9D0"))) PPC_WEAK_FUNC(sub_82EEC9D0);
PPC_FUNC_IMPL(__imp__sub_82EEC9D0) {
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
	// bl 0x82eeefa0
	ctx.lr = 0x82EEC9F0;
	sub_82EEEFA0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eeca04
	if (ctx.cr0.eq) goto loc_82EECA04;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EECA04;
	sub_822996C0(ctx, base);
loc_82EECA04:
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

__attribute__((alias("__imp__sub_82EECA20"))) PPC_WEAK_FUNC(sub_82EECA20);
PPC_FUNC_IMPL(__imp__sub_82EECA20) {
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
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82EECA40;
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

__attribute__((alias("__imp__sub_82EECA58"))) PPC_WEAK_FUNC(sub_82EECA58);
PPC_FUNC_IMPL(__imp__sub_82EECA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EECA60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,7
	ctx.r29.s64 = 7;
loc_82EECA6C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eeca8c
	if (ctx.cr6.eq) goto loc_82EECA8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eeefa0
	ctx.lr = 0x82EECA80;
	sub_82EEEFA0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EECA8C;
	sub_822996C0(ctx, base);
loc_82EECA8C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82eeca6c
	if (!ctx.cr0.eq) goto loc_82EECA6C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EECAA0"))) PPC_WEAK_FUNC(sub_82EECAA0);
PPC_FUNC_IMPL(__imp__sub_82EECAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EECAA8"))) PPC_WEAK_FUNC(sub_82EECAA8);
PPC_FUNC_IMPL(__imp__sub_82EECAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EECAB0"))) PPC_WEAK_FUNC(sub_82EECAB0);
PPC_FUNC_IMPL(__imp__sub_82EECAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82EECAB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x82eebf08
	ctx.lr = 0x82EECAD4;
	sub_82EEBF08(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82EECADC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eecadc
	if (!ctx.cr6.eq) goto loc_82EECADC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82299698
	ctx.lr = 0x82EECB08;
	sub_82299698(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82eecb1c
	if (!ctx.cr0.eq) goto loc_82EECB1C;
loc_82EECB10:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eecb80
	goto loc_82EECB80;
loc_82EECB1C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EECB2C;
	sub_82CB1160(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82299698
	ctx.lr = 0x82EECB38;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eecb68
	if (ctx.cr0.eq) goto loc_82EECB68;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82eecb6c
	goto loc_82EECB6C;
loc_82EECB68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EECB6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eecb10
	if (ctx.cr6.eq) goto loc_82EECB10;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r11,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u32);
loc_82EECB80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EECB88"))) PPC_WEAK_FUNC(sub_82EECB88);
PPC_FUNC_IMPL(__imp__sub_82EECB88) {
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
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82EECBB0;
	sub_82CB16F0(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82cb16f0
	ctx.lr = 0x82EECBC0;
	sub_82CB16F0(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82cb16f0
	ctx.lr = 0x82EECBD0;
	sub_82CB16F0(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82cb16f0
	ctx.lr = 0x82EECBE0;
	sub_82CB16F0(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82cb16f0
	ctx.lr = 0x82EECBF0;
	sub_82CB16F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// blt cr6,0x82eecc38
	if (ctx.cr6.lt) goto loc_82EECC38;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// bgt cr6,0x82eecc38
	if (ctx.cr6.gt) goto loc_82EECC38;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
loc_82EECC38:
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

__attribute__((alias("__imp__sub_82EECC54"))) PPC_WEAK_FUNC(sub_82EECC54);
PPC_FUNC_IMPL(__imp__sub_82EECC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EECC58"))) PPC_WEAK_FUNC(sub_82EECC58);
PPC_FUNC_IMPL(__imp__sub_82EECC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EECC60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,7
	ctx.r29.s64 = 7;
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
loc_82EECC70:
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eecc90
	if (ctx.cr6.eq) goto loc_82EECC90;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eeefa0
	ctx.lr = 0x82EECC84;
	sub_82EEEFA0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EECC90;
	sub_822996C0(ctx, base);
loc_82EECC90:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82eecc70
	if (!ctx.cr0.eq) goto loc_82EECC70;
	// addi r30,r31,84
	ctx.r30.s64 = ctx.r31.s64 + 84;
	// li r29,7
	ctx.r29.s64 = 7;
loc_82EECCA4:
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eeccc4
	if (ctx.cr6.eq) goto loc_82EECCC4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eeefa0
	ctx.lr = 0x82EECCB8;
	sub_82EEEFA0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EECCC4;
	sub_822996C0(ctx, base);
loc_82EECCC4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82eecca4
	if (!ctx.cr0.eq) goto loc_82EECCA4;
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// li r29,7
	ctx.r29.s64 = 7;
loc_82EECCD8:
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eeccf8
	if (ctx.cr6.eq) goto loc_82EECCF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eeefa0
	ctx.lr = 0x82EECCEC;
	sub_82EEEFA0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EECCF8;
	sub_822996C0(ctx, base);
loc_82EECCF8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82eeccd8
	if (!ctx.cr0.eq) goto loc_82EECCD8;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// li r29,7
	ctx.r29.s64 = 7;
loc_82EECD0C:
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eecd2c
	if (ctx.cr6.eq) goto loc_82EECD2C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eeefa0
	ctx.lr = 0x82EECD20;
	sub_82EEEFA0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EECD2C;
	sub_822996C0(ctx, base);
loc_82EECD2C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82eecd0c
	if (!ctx.cr0.eq) goto loc_82EECD0C;
	// li r30,7
	ctx.r30.s64 = 7;
loc_82EECD3C:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eecd5c
	if (ctx.cr6.eq) goto loc_82EECD5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eeefa0
	ctx.lr = 0x82EECD50;
	sub_82EEEFA0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EECD5C;
	sub_822996C0(ctx, base);
loc_82EECD5C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82eecd3c
	if (!ctx.cr0.eq) goto loc_82EECD3C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EECD70"))) PPC_WEAK_FUNC(sub_82EECD70);
PPC_FUNC_IMPL(__imp__sub_82EECD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82EECD78;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82EECD9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eecd9c
	if (!ctx.cr6.eq) goto loc_82EECD9C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82eecde8
	if (ctx.cr6.gt) goto loc_82EECDE8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,19792
	ctx.r6.s64 = ctx.r11.s64 + 19792;
loc_82EECDC8:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r5,2005
	ctx.r5.s64 = 2005;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82eea308
	ctx.lr = 0x82EECDDC;
	sub_82EEA308(ctx, base);
loc_82EECDDC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eed33c
	goto loc_82EED33C;
loc_82EECDE8:
	// lwz r27,260(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r4,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r4.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r10,r9,19136
	ctx.r10.s64 = ctx.r9.s64 + 19136;
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// stw r4,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r4.u32);
loc_82EECE0C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eece2c
	if (!ctx.cr0.eq) goto loc_82EECE2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82eece0c
	if (!ctx.cr6.eq) goto loc_82EECE0C;
loc_82EECE2C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eecf24
	if (!ctx.cr0.eq) goto loc_82EECF24;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82eece98
	if (ctx.cr6.lt) goto loc_82EECE98;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bgt cr6,0x82eece98
	if (ctx.cr6.gt) goto loc_82EECE98;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x82eeb860
	ctx.lr = 0x82EECE58;
	sub_82EEB860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eecedc
	if (ctx.cr0.lt) goto loc_82EECEDC;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82eece7c
	if (!ctx.cr6.eq) goto loc_82EECE7C;
	// li r10,3
	ctx.r10.s64 = 3;
loc_82EECE70:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// b 0x82eed334
	goto loc_82EED334;
loc_82EECE7C:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82eece8c
	if (!ctx.cr6.eq) goto loc_82EECE8C;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82eece70
	goto loc_82EECE70;
loc_82EECE8C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,19740
	ctx.r6.s64 = ctx.r11.s64 + 19740;
	// b 0x82eecdc8
	goto loc_82EECDC8;
loc_82EECE98:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r29,28
	ctx.r30.s64 = ctx.r29.s64 + 28;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eebf88
	ctx.lr = 0x82EECEB0;
	sub_82EEBF88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eecec4
	if (ctx.cr0.eq) goto loc_82EECEC4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82eecf10
	goto loc_82EECF10;
loc_82EECEC4:
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x82eeb860
	ctx.lr = 0x82EECED4;
	sub_82EEB860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eecee8
	if (!ctx.cr0.lt) goto loc_82EECEE8;
loc_82EECEDC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,19700
	ctx.r6.s64 = ctx.r11.s64 + 19700;
	// b 0x82eecdc8
	goto loc_82EECDC8;
loc_82EECEE8:
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r5,156(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// bl 0x82eecab0
	ctx.lr = 0x82EECF04;
	sub_82EECAB0(ctx, base);
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 156, ctx.r11.u32);
loc_82EECF10:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82eed338
	if (ctx.cr6.eq) goto loc_82EED338;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,19636
	ctx.r6.s64 = ctx.r11.s64 + 19636;
	// b 0x82eecdc8
	goto loc_82EECDC8;
loc_82EECF24:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,19132
	ctx.r10.s64 = ctx.r10.s64 + 19132;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
loc_82EECF34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eecf54
	if (!ctx.cr0.eq) goto loc_82EECF54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eecf34
	if (!ctx.cr6.eq) goto loc_82EECF34;
loc_82EECF54:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eecfc0
	if (!ctx.cr0.eq) goto loc_82EECFC0;
	// stw r4,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r4.u32);
	// addi r30,r29,84
	ctx.r30.s64 = ctx.r29.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eebf88
	ctx.lr = 0x82EECF70;
	sub_82EEBF88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eecf84
	if (ctx.cr0.eq) goto loc_82EECF84;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82eecfac
	goto loc_82EECFAC;
loc_82EECF84:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r5,164(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// bl 0x82eecab0
	ctx.lr = 0x82EECFA0;
	sub_82EECAB0(ctx, base);
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 164, ctx.r11.u32);
loc_82EECFAC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82eed338
	if (ctx.cr6.eq) goto loc_82EED338;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,19572
	ctx.r6.s64 = ctx.r11.s64 + 19572;
	// b 0x82eecdc8
	goto loc_82EECDC8;
loc_82EECFC0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r10,19568
	ctx.r9.s64 = ctx.r10.s64 + 19568;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
loc_82EECFD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82eecff0
	if (!ctx.cr0.eq) goto loc_82EECFF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eecfd0
	if (!ctx.cr6.eq) goto loc_82EECFD0;
loc_82EECFF0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r11,19564
	ctx.r10.s64 = ctx.r11.s64 + 19564;
	// addi r9,r9,19560
	ctx.r9.s64 = ctx.r9.s64 + 19560;
	// addi r8,r8,19556
	ctx.r8.s64 = ctx.r8.s64 + 19556;
	// beq 0x82eed188
	if (ctx.cr0.eq) goto loc_82EED188;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 2;
loc_82EED01C:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// subf. r6,r3,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82eed03c
	if (!ctx.cr0.eq) goto loc_82EED03C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82eed01c
	if (!ctx.cr6.eq) goto loc_82EED01C;
loc_82EED03C:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82eed188
	if (ctx.cr0.eq) goto loc_82EED188;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 2;
loc_82EED050:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// subf. r6,r3,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82eed070
	if (!ctx.cr0.eq) goto loc_82EED070;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82eed050
	if (!ctx.cr6.eq) goto loc_82EED050;
loc_82EED070:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82eed188
	if (ctx.cr0.eq) goto loc_82EED188;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 2;
loc_82EED084:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// subf. r6,r3,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82eed0a4
	if (!ctx.cr0.eq) goto loc_82EED0A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82eed084
	if (!ctx.cr6.eq) goto loc_82EED084;
loc_82EED0A4:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82eed188
	if (ctx.cr0.eq) goto loc_82EED188;
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eed17c
	if (ctx.cr6.eq) goto loc_82EED17C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,19128
	ctx.r10.s64 = ctx.r10.s64 + 19128;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
loc_82EED0C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eed0e8
	if (!ctx.cr0.eq) goto loc_82EED0E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eed0c8
	if (!ctx.cr6.eq) goto loc_82EED0C8;
loc_82EED0E8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eed17c
	if (!ctx.cr0.eq) goto loc_82EED17C;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r30,r29,56
	ctx.r30.s64 = ctx.r29.s64 + 56;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eebf88
	ctx.lr = 0x82EED108;
	sub_82EEBF88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eed11c
	if (ctx.cr0.eq) goto loc_82EED11C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82eed168
	goto loc_82EED168;
loc_82EED11C:
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x82eeb860
	ctx.lr = 0x82EED12C;
	sub_82EEB860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eed140
	if (!ctx.cr0.lt) goto loc_82EED140;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,19516
	ctx.r6.s64 = ctx.r11.s64 + 19516;
	// b 0x82eecdc8
	goto loc_82EECDC8;
loc_82EED140:
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r5,160(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// bl 0x82eecab0
	ctx.lr = 0x82EED15C;
	sub_82EECAB0(ctx, base);
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r11.u32);
loc_82EED168:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82eed338
	if (ctx.cr6.eq) goto loc_82EED338;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,19452
	ctx.r6.s64 = ctx.r11.s64 + 19452;
	// b 0x82eecdc8
	goto loc_82EECDC8;
loc_82EED17C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,19312
	ctx.r6.s64 = ctx.r11.s64 + 19312;
	// b 0x82eecdc8
	goto loc_82EECDC8;
loc_82EED188:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r6,r31,2
	ctx.r6.s64 = ctx.r31.s64 + 2;
loc_82EED190:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// subf. r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82eed1b0
	if (!ctx.cr0.eq) goto loc_82EED1B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82eed190
	if (!ctx.cr6.eq) goto loc_82EED190;
loc_82EED1B0:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82eed1c4
	if (!ctx.cr0.eq) goto loc_82EED1C4;
	// li r11,14
	ctx.r11.s64 = 14;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x82eed244
	goto loc_82EED244;
loc_82EED1C4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r7,r31,2
	ctx.r7.s64 = ctx.r31.s64 + 2;
loc_82EED1CC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eed1ec
	if (!ctx.cr0.eq) goto loc_82EED1EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82eed1cc
	if (!ctx.cr6.eq) goto loc_82EED1CC;
loc_82EED1EC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eed200
	if (!ctx.cr0.eq) goto loc_82EED200;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82eed244
	goto loc_82EED244;
loc_82EED200:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
loc_82EED208:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eed228
	if (!ctx.cr0.eq) goto loc_82EED228;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eed208
	if (!ctx.cr6.eq) goto loc_82EED208;
loc_82EED228:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eed23c
	if (!ctx.cr0.eq) goto loc_82EED23C;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82eed244
	goto loc_82EED244;
loc_82EED23C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82EED244:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eebf88
	ctx.lr = 0x82EED254;
	sub_82EEBF88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eed270
	if (ctx.cr0.eq) goto loc_82EED270;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// b 0x82eed2f8
	goto loc_82EED2F8;
loc_82EED270:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f1a9f0
	ctx.lr = 0x82EED284;
	sub_82F1A9F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eed33c
	if (ctx.cr0.lt) goto loc_82EED33C;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82eed2bc
	if (!ctx.cr6.eq) goto loc_82EED2BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
	// addi r6,r11,19248
	ctx.r6.s64 = ctx.r11.s64 + 19248;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r5,2005
	ctx.r5.s64 = 2005;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82eea308
	ctx.lr = 0x82EED2B8;
	sub_82EEA308(ctx, base);
	// b 0x82eecddc
	goto loc_82EECDDC;
loc_82EED2BC:
	// addi r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 35;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwzx r5,r30,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// bl 0x82eecab0
	ctx.lr = 0x82EED2DC;
	sub_82EECAB0(ctx, base);
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r11,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u32);
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r11.u32);
loc_82EED2F8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82eed338
	if (ctx.cr6.eq) goto loc_82EED338;
	// lwz r9,24(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82eed32c
	if (!ctx.cr6.gt) goto loc_82EED32C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r11,19168
	ctx.r6.s64 = ctx.r11.s64 + 19168;
	// li r5,2005
	ctx.r5.s64 = 2005;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82eea308
	ctx.lr = 0x82EED328;
	sub_82EEA308(ctx, base);
	// b 0x82eecddc
	goto loc_82EECDDC;
loc_82EED32C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82EED334:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EED338:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EED33C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EED344"))) PPC_WEAK_FUNC(sub_82EED344);
PPC_FUNC_IMPL(__imp__sub_82EED344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EED348"))) PPC_WEAK_FUNC(sub_82EED348);
PPC_FUNC_IMPL(__imp__sub_82EED348) {
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
	// bl 0x82eecc58
	ctx.lr = 0x82EED368;
	sub_82EECC58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eed37c
	if (ctx.cr0.eq) goto loc_82EED37C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EED37C;
	sub_822996C0(ctx, base);
loc_82EED37C:
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

__attribute__((alias("__imp__sub_82EED398"))) PPC_WEAK_FUNC(sub_82EED398);
PPC_FUNC_IMPL(__imp__sub_82EED398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EED3A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,8(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r15,0
	ctx.r15.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r4,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// stw r15,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// beq cr6,0x82eed964
	if (ctx.cr6.eq) goto loc_82EED964;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// addi r26,r11,17056
	ctx.r26.s64 = ctx.r11.s64 + 17056;
	// addi r23,r10,8328
	ctx.r23.s64 = ctx.r10.s64 + 8328;
	// addi r22,r9,20108
	ctx.r22.s64 = ctx.r9.s64 + 20108;
	// addi r21,r8,20104
	ctx.r21.s64 = ctx.r8.s64 + 20104;
	// addi r20,r7,20100
	ctx.r20.s64 = ctx.r7.s64 + 20100;
	// addi r19,r6,20096
	ctx.r19.s64 = ctx.r6.s64 + 20096;
	// addi r18,r5,20092
	ctx.r18.s64 = ctx.r5.s64 + 20092;
	// addi r17,r4,20088
	ctx.r17.s64 = ctx.r4.s64 + 20088;
	// addi r16,r3,20080
	ctx.r16.s64 = ctx.r3.s64 + 20080;
	// b 0x82eed44c
	goto loc_82EED44C;
loc_82EED440:
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x82eed458
	if (ctx.cr6.eq) goto loc_82EED458;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_82EED44C:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eed440
	if (!ctx.cr0.eq) goto loc_82EED440;
loc_82EED458:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r31,r11,r24
	ctx.r31.s64 = ctx.r24.s64 - ctx.r11.s64;
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 15, ctx.xer);
	// bgt cr6,0x82eed9a8
	if (ctx.cr6.gt) goto loc_82EED9A8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82cb1160
	ctx.lr = 0x82EED478;
	sub_82CB1160(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lbz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r9,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// beq cr6,0x82eed494
	if (ctx.cr6.eq) goto loc_82EED494;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_82EED494:
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82eed754
	if (ctx.cr6.eq) goto loc_82EED754;
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eed4d4
	if (ctx.cr0.eq) goto loc_82EED4D4;
loc_82EED4B0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdc30
	ctx.lr = 0x82EED4BC;
	sub_82CBDC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eed4d4
	if (ctx.cr0.eq) goto loc_82EED4D4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eed4b0
	if (!ctx.cr6.eq) goto loc_82EED4B0;
loc_82EED4D4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eed4f0
	if (ctx.cr6.eq) goto loc_82EED4F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb6a70
	ctx.lr = 0x82EED4E8;
	sub_82CB6A70(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82eed4f4
	goto loc_82EED4F4;
loc_82EED4F0:
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82EED4F4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eed520
	if (ctx.cr6.eq) goto loc_82EED520;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82eed51c
	goto loc_82EED51C;
loc_82EED510:
	// bl 0x82cbdd38
	ctx.lr = 0x82EED514;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eed52c
	if (ctx.cr0.eq) goto loc_82EED52C;
loc_82EED51C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82EED520:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eed510
	if (!ctx.cr0.eq) goto loc_82EED510;
loc_82EED52C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eed9a8
	if (!ctx.cr6.eq) goto loc_82EED9A8;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82EED544:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82EED54C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq 0x82eed570
	if (ctx.cr0.eq) goto loc_82EED570;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eed54c
	if (ctx.cr6.eq) goto loc_82EED54C;
loc_82EED570:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eed58c
	if (ctx.cr0.eq) goto loc_82EED58C;
	// addi r7,r7,76
	ctx.r7.s64 = ctx.r7.s64 + 76;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,76
	ctx.r8.s64 = ctx.r8.s64 + 76;
	// cmplwi cr6,r7,1596
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1596, ctx.xer);
	// blt cr6,0x82eed544
	if (ctx.cr6.lt) goto loc_82EED544;
loc_82EED58C:
	// cmplwi cr6,r6,21
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 21, ctx.xer);
	// beq cr6,0x82eed9a8
	if (ctx.cr6.eq) goto loc_82EED9A8;
	// lwz r9,56(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 56);
	// mulli r11,r6,19
	ctx.r11.s64 = ctx.r6.s64 * 19;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r26,8
	ctx.r10.s64 = ctx.r26.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82eed9a8
	if (ctx.cr6.eq) goto loc_82EED9A8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82eed5fc
	if (!ctx.cr6.lt) goto loc_82EED5FC;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x82eed5dc
	if (!ctx.cr6.eq) goto loc_82EED5DC;
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eed9a8
	if (ctx.cr6.eq) goto loc_82EED9A8;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r27,24(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// b 0x82eed5f0
	goto loc_82EED5F0;
loc_82EED5DC:
	// lwz r8,340(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eed5f4
	if (ctx.cr6.eq) goto loc_82EED5F4;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
loc_82EED5F0:
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
loc_82EED5F4:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// b 0x82eed60c
	goto loc_82EED60C;
loc_82EED5FC:
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eed9a8
	if (!ctx.cr6.eq) goto loc_82EED9A8;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82EED60C:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x82eed628
	if (!ctx.cr6.eq) goto loc_82EED628;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eed9a8
	if (!ctx.cr6.eq) goto loc_82EED9A8;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// b 0x82eed644
	goto loc_82EED644;
loc_82EED628:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eed63c
	if (ctx.cr6.eq) goto loc_82EED63C;
	// lwz r10,40(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eed644
	if (!ctx.cr6.eq) goto loc_82EED644;
loc_82EED63C:
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eed9a8
	if (!ctx.cr6.lt) goto loc_82EED9A8;
loc_82EED644:
	// mulli r11,r6,76
	ctx.r11.s64 = ctx.r6.s64 * 76;
	// addi r10,r26,4
	ctx.r10.s64 = ctx.r26.s64 + 4;
	// addi r8,r26,72
	ctx.r8.s64 = ctx.r26.s64 + 72;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bne cr6,0x82eed6b4
	if (!ctx.cr6.eq) goto loc_82EED6B4;
	// clrlwi r11,r27,19
	ctx.r11.u64 = ctx.r27.u32 & 0x1FFF;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bge cr6,0x82eed67c
	if (!ctx.cr6.lt) goto loc_82EED67C;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82eed6a8
	goto loc_82EED6A8;
loc_82EED67C:
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x82eed68c
	if (!ctx.cr6.lt) goto loc_82EED68C;
	// li r30,11
	ctx.r30.s64 = 11;
	// b 0x82eed6a8
	goto loc_82EED6A8;
loc_82EED68C:
	// cmplwi cr6,r11,6144
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6144, ctx.xer);
	// bge cr6,0x82eed69c
	if (!ctx.cr6.lt) goto loc_82EED69C;
	// li r30,12
	ctx.r30.s64 = 12;
	// b 0x82eed6a8
	goto loc_82EED6A8;
loc_82EED69C:
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bge cr6,0x82eed6ac
	if (!ctx.cr6.lt) goto loc_82EED6AC;
	// li r30,13
	ctx.r30.s64 = 13;
loc_82EED6A8:
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_82EED6AC:
	// clrlwi r27,r11,21
	ctx.r27.u64 = ctx.r11.u32 & 0x7FF;
	// b 0x82eed710
	goto loc_82EED710;
loc_82EED6B4:
	// cmpwi cr6,r30,-3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -3, ctx.xer);
	// bne cr6,0x82eed6c8
	if (!ctx.cr6.eq) goto loc_82EED6C8;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82EED6C0:
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x82eed70c
	goto loc_82EED70C;
loc_82EED6C8:
	// cmpwi cr6,r30,-4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -4, ctx.xer);
	// bne cr6,0x82eed6dc
	if (!ctx.cr6.eq) goto loc_82EED6DC;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x82eed70c
	goto loc_82EED70C;
loc_82EED6DC:
	// cmpwi cr6,r30,-5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -5, ctx.xer);
	// bne cr6,0x82eed6ec
	if (!ctx.cr6.eq) goto loc_82EED6EC;
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x82eed708
	goto loc_82EED708;
loc_82EED6EC:
	// cmpwi cr6,r30,-6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -6, ctx.xer);
	// bne cr6,0x82eed6fc
	if (!ctx.cr6.eq) goto loc_82EED6FC;
	// li r30,17
	ctx.r30.s64 = 17;
	// b 0x82eed6c0
	goto loc_82EED6C0;
loc_82EED6FC:
	// cmpwi cr6,r30,-7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -7, ctx.xer);
	// bne cr6,0x82eed714
	if (!ctx.cr6.eq) goto loc_82EED714;
	// li r30,17
	ctx.r30.s64 = 17;
loc_82EED708:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EED70C:
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_82EED710:
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
loc_82EED714:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x82eed72c
	if (ctx.cr6.lt) goto loc_82EED72C;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bgt cr6,0x82eed72c
	if (ctx.cr6.gt) goto loc_82EED72C;
	// li r15,1
	ctx.r15.s64 = 1;
loc_82EED72C:
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82eed73c
	if (ctx.cr6.lt) goto loc_82EED73C;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// ble cr6,0x82eed74c
	if (!ctx.cr6.gt) goto loc_82EED74C;
loc_82EED73C:
	// cmpwi cr6,r9,14
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 14, ctx.xer);
	// blt cr6,0x82eed94c
	if (ctx.cr6.lt) goto loc_82EED94C;
	// cmpwi cr6,r9,15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 15, ctx.xer);
	// bgt cr6,0x82eed94c
	if (ctx.cr6.gt) goto loc_82EED94C;
loc_82EED74C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eed948
	goto loc_82EED948;
loc_82EED754:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x82eed8fc
	if (ctx.cr6.eq) goto loc_82EED8FC;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82EED764:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eed788
	if (ctx.cr0.eq) goto loc_82EED788;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eed764
	if (ctx.cr6.eq) goto loc_82EED764;
loc_82EED788:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eed798
	if (!ctx.cr0.eq) goto loc_82EED798;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// b 0x82eed8ec
	goto loc_82EED8EC;
loc_82EED798:
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82EED7A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eed7c4
	if (ctx.cr0.eq) goto loc_82EED7C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eed7a0
	if (ctx.cr6.eq) goto loc_82EED7A0;
loc_82EED7C4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eed7d4
	if (!ctx.cr0.eq) goto loc_82EED7D4;
	// lis r11,1024
	ctx.r11.s64 = 67108864;
	// b 0x82eed8ec
	goto loc_82EED8EC;
loc_82EED7D4:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82EED7DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eed800
	if (ctx.cr0.eq) goto loc_82EED800;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eed7dc
	if (ctx.cr6.eq) goto loc_82EED7DC;
loc_82EED800:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eed810
	if (!ctx.cr0.eq) goto loc_82EED810;
	// lis r11,1792
	ctx.r11.s64 = 117440512;
	// b 0x82eed8ec
	goto loc_82EED8EC;
loc_82EED810:
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82EED818:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eed83c
	if (ctx.cr0.eq) goto loc_82EED83C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eed818
	if (ctx.cr6.eq) goto loc_82EED818;
loc_82EED83C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eed84c
	if (!ctx.cr0.eq) goto loc_82EED84C;
loc_82EED844:
	// lis r11,2304
	ctx.r11.s64 = 150994944;
	// b 0x82eed8ec
	goto loc_82EED8EC;
loc_82EED84C:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82EED854:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eed878
	if (ctx.cr0.eq) goto loc_82EED878;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eed854
	if (ctx.cr6.eq) goto loc_82EED854;
loc_82EED878:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eed844
	if (ctx.cr0.eq) goto loc_82EED844;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82EED888:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eed8ac
	if (ctx.cr0.eq) goto loc_82EED8AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eed888
	if (ctx.cr6.eq) goto loc_82EED888;
loc_82EED8AC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eed8e8
	if (ctx.cr0.eq) goto loc_82EED8E8;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82EED8BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eed8e0
	if (ctx.cr0.eq) goto loc_82EED8E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eed8bc
	if (ctx.cr6.eq) goto loc_82EED8BC;
loc_82EED8E0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eed8fc
	if (!ctx.cr0.eq) goto loc_82EED8FC;
loc_82EED8E8:
	// lis r11,2560
	ctx.r11.s64 = 167772160;
loc_82EED8EC:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// li r15,0
	ctx.r15.s64 = 0;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// b 0x82eed94c
	goto loc_82EED94C;
loc_82EED8FC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eed9a8
	if (ctx.cr6.eq) goto loc_82EED9A8;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82EED910:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eed934
	if (ctx.cr0.eq) goto loc_82EED934;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eed910
	if (ctx.cr6.eq) goto loc_82EED910;
loc_82EED934:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eed9a8
	if (!ctx.cr0.eq) goto loc_82EED9A8;
	// lis r28,2816
	ctx.r28.s64 = 184549376;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
loc_82EED948:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82EED94C:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eed44c
	if (!ctx.cr6.eq) goto loc_82EED44C;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// li r15,0
	ctx.r15.s64 = 0;
	// lwz r31,340(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
loc_82EED964:
	// lwz r11,124(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eedb44
	if (ctx.cr6.eq) goto loc_82EEDB44;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eedab4
	if (ctx.cr6.eq) goto loc_82EEDAB4;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// beq cr6,0x82eedb44
	if (ctx.cr6.eq) goto loc_82EEDB44;
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// beq cr6,0x82eedb44
	if (ctx.cr6.eq) goto loc_82EEDB44;
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// beq cr6,0x82eedb44
	if (ctx.cr6.eq) goto loc_82EEDB44;
	// cmplwi cr6,r30,19
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 19, ctx.xer);
	// beq cr6,0x82eedb44
	if (ctx.cr6.eq) goto loc_82EEDB44;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,19992
	ctx.r6.s64 = ctx.r11.s64 + 19992;
	// b 0x82eedb04
	goto loc_82EEDB04;
loc_82EED9A8:
	// lwz r3,124(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eeda3c
	if (ctx.cr6.eq) goto loc_82EEDA3C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r5,128(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + 128);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r8,340(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r6,332(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82eecd70
	ctx.lr = 0x82EED9DC;
	sub_82EECD70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eedb10
	if (ctx.cr0.lt) goto loc_82EEDB10;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82f16108
	ctx.lr = 0x82EED9EC;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eeda10
	if (ctx.cr0.eq) goto loc_82EEDA10;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82f1b5a0
	ctx.lr = 0x82EEDA0C;
	sub_82F1B5A0(ctx, base);
	// b 0x82eeda14
	goto loc_82EEDA14;
loc_82EEDA10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEDA14:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eedb7c
	if (ctx.cr6.eq) goto loc_82EEDB7C;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eedb98
	if (ctx.cr6.eq) goto loc_82EEDB98;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// b 0x82eedb98
	goto loc_82EEDB98;
loc_82EEDA3C:
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eeda94
	if (ctx.cr6.eq) goto loc_82EEDA94;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eeda7c
	if (!ctx.cr6.eq) goto loc_82EEDA7C;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r3,0(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// addi r6,r10,19964
	ctx.r6.s64 = ctx.r10.s64 + 19964;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// li r5,2005
	ctx.r5.s64 = 2005;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82eea308
	ctx.lr = 0x82EEDA78;
	sub_82EEA308(ctx, base);
	// b 0x82eedb10
	goto loc_82EEDB10;
loc_82EEDA7C:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82eedb10
	if (ctx.cr6.eq) goto loc_82EEDB10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,19936
	ctx.r6.s64 = ctx.r11.s64 + 19936;
	// b 0x82eeda9c
	goto loc_82EEDA9C;
loc_82EEDA94:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,19912
	ctx.r6.s64 = ctx.r11.s64 + 19912;
loc_82EEDA9C:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// li r5,2005
	ctx.r5.s64 = 2005;
	// lwz r3,0(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// bl 0x82eea308
	ctx.lr = 0x82EEDAB0;
	sub_82EEA308(ctx, base);
	// b 0x82eedb10
	goto loc_82EEDB10;
loc_82EEDAB4:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// beq cr6,0x82eedb44
	if (ctx.cr6.eq) goto loc_82EEDB44;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// beq cr6,0x82eedb44
	if (ctx.cr6.eq) goto loc_82EEDB44;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// beq cr6,0x82eedb44
	if (ctx.cr6.eq) goto loc_82EEDB44;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// beq cr6,0x82eedb44
	if (ctx.cr6.eq) goto loc_82EEDB44;
	// cmplwi cr6,r30,9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 9, ctx.xer);
	// beq cr6,0x82eedb44
	if (ctx.cr6.eq) goto loc_82EEDB44;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// beq cr6,0x82eedb44
	if (ctx.cr6.eq) goto loc_82EEDB44;
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// beq cr6,0x82eedb44
	if (ctx.cr6.eq) goto loc_82EEDB44;
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// beq cr6,0x82eedb44
	if (ctx.cr6.eq) goto loc_82EEDB44;
	// cmplwi cr6,r30,19
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 19, ctx.xer);
	// beq cr6,0x82eedb44
	if (ctx.cr6.eq) goto loc_82EEDB44;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,19840
	ctx.r6.s64 = ctx.r11.s64 + 19840;
loc_82EEDB04:
	// li r5,2005
	ctx.r5.s64 = 2005;
	// lwz r3,0(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// bl 0x82eea308
	ctx.lr = 0x82EEDB10;
	sub_82EEA308(ctx, base);
loc_82EEDB10:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r11,76(r14)
	PPC_STORE_U32(ctx.r14.u32 + 76, ctx.r11.u32);
	// bl 0x82f16108
	ctx.lr = 0x82EEDB20;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eedb7c
	if (ctx.cr0.eq) goto loc_82EEDB7C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82f1b5a0
	ctx.lr = 0x82EEDB40;
	sub_82F1B5A0(ctx, base);
	// b 0x82eedb98
	goto loc_82EEDB98;
loc_82EEDB44:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82f16108
	ctx.lr = 0x82EEDB4C;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eedb70
	if (ctx.cr0.eq) goto loc_82EEDB70;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f1b5a0
	ctx.lr = 0x82EEDB6C;
	sub_82F1B5A0(ctx, base);
	// b 0x82eedb74
	goto loc_82EEDB74;
loc_82EEDB70:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_82EEDB74:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82eedb84
	if (!ctx.cr6.eq) goto loc_82EEDB84;
loc_82EEDB7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eedb98
	goto loc_82EEDB98;
loc_82EEDB84:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eedb98
	if (ctx.cr6.eq) goto loc_82EEDB98;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r15,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r15.u32);
loc_82EEDB98:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEDBA0"))) PPC_WEAK_FUNC(sub_82EEDBA0);
PPC_FUNC_IMPL(__imp__sub_82EEDBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EEDBA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eedc38
	if (!ctx.cr6.gt) goto loc_82EEDC38;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne cr6,0x82eedbd4
	if (!ctx.cr6.eq) goto loc_82EEDBD4;
	// li r30,256
	ctx.r30.s64 = 256;
loc_82EEDBD4:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82eedbf0
	if (!ctx.cr6.gt) goto loc_82EEDBF0;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
loc_82EEDBE4:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82eedbe4
	if (ctx.cr6.gt) goto loc_82EEDBE4;
loc_82EEDBF0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82299698
	ctx.lr = 0x82EEDBFC;
	sub_82299698(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82eedc10
	if (!ctx.cr0.eq) goto loc_82EEDC10;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eedc3c
	goto loc_82EEDC3C;
loc_82EEDC10:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x82EEDC24;
	sub_82CB1160(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x822996c0
	ctx.lr = 0x82EEDC30;
	sub_822996C0(ctx, base);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
loc_82EEDC38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEDC3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEDC44"))) PPC_WEAK_FUNC(sub_82EEDC44);
PPC_FUNC_IMPL(__imp__sub_82EEDC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEDC48"))) PPC_WEAK_FUNC(sub_82EEDC48);
PPC_FUNC_IMPL(__imp__sub_82EEDC48) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eedba0
	ctx.lr = 0x82EEDC6C;
	sub_82EEDBA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eedc94
	if (ctx.cr0.lt) goto loc_82EEDC94;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82EEDC94:
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

__attribute__((alias("__imp__sub_82EEDCAC"))) PPC_WEAK_FUNC(sub_82EEDCAC);
PPC_FUNC_IMPL(__imp__sub_82EEDCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEDCB0"))) PPC_WEAK_FUNC(sub_82EEDCB0);
PPC_FUNC_IMPL(__imp__sub_82EEDCB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82EEDCB8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// stw r10,88(r26)
	PPC_STORE_U32(ctx.r26.u32 + 88, ctx.r10.u32);
	// bne cr6,0x82eedcec
	if (!ctx.cr6.eq) goto loc_82EEDCEC;
	// li r25,2
	ctx.r25.s64 = 2;
loc_82EEDCEC:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eedd8c
	if (ctx.cr6.eq) goto loc_82EEDD8C;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// beq cr6,0x82eedd68
	if (ctx.cr6.eq) goto loc_82EEDD68;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// beq cr6,0x82eedd68
	if (ctx.cr6.eq) goto loc_82EEDD68;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// beq cr6,0x82eedd68
	if (ctx.cr6.eq) goto loc_82EEDD68;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x82eedd68
	if (ctx.cr6.eq) goto loc_82EEDD68;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x82eedd40
	if (ctx.cr6.eq) goto loc_82EEDD40;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// beq cr6,0x82eedd40
	if (ctx.cr6.eq) goto loc_82EEDD40;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x82eedd40
	if (ctx.cr6.eq) goto loc_82EEDD40;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x82eedd40
	if (ctx.cr6.eq) goto loc_82EEDD40;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x82eedd8c
	if (!ctx.cr6.eq) goto loc_82EEDD8C;
loc_82EEDD40:
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eedd8c
	if (ctx.cr6.eq) goto loc_82EEDD8C;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eedd8c
	if (!ctx.cr6.eq) goto loc_82EEDD8C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2026
	ctx.r5.s64 = 2026;
	// addi r6,r11,20760
	ctx.r6.s64 = ctx.r11.s64 + 20760;
	// b 0x82eedd74
	goto loc_82EEDD74;
loc_82EEDD68:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2025
	ctx.r5.s64 = 2025;
	// addi r6,r11,20680
	ctx.r6.s64 = ctx.r11.s64 + 20680;
loc_82EEDD74:
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82eea308
	ctx.lr = 0x82EEDD80;
	sub_82EEA308(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eee680
	goto loc_82EEE680;
loc_82EEDD8C:
	// lwz r30,60(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,20600
	ctx.r28.s64 = ctx.r11.s64 + 20600;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eede60
	if (ctx.cr6.eq) goto loc_82EEDE60;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x82eede60
	if (!ctx.cr6.eq) goto loc_82EEDE60;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82eeddc0
	if (!ctx.cr6.eq) goto loc_82EEDDC0;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_82EEDDC0:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eedde8
	if (ctx.cr6.eq) goto loc_82EEDDE8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2014
	ctx.r5.s64 = 2014;
	// addi r6,r11,20536
	ctx.r6.s64 = ctx.r11.s64 + 20536;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82EEDDE4;
	sub_82EEA308(ctx, base);
	// stw r22,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_82EEDDE8:
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eede60
	if (ctx.cr6.eq) goto loc_82EEDE60;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82eede44
	if (ctx.cr6.lt) goto loc_82EEDE44;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x82eede44
	if (ctx.cr6.gt) goto loc_82EEDE44;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82eede18
	if (!ctx.cr6.eq) goto loc_82EEDE18;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_82EEDE18:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eede3c
	if (ctx.cr6.eq) goto loc_82EEDE3C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2009
	ctx.r5.s64 = 2009;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82EEDE38;
	sub_82EEA308(ctx, base);
	// stw r22,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_82EEDE3C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x82eede60
	goto loc_82EEDE60;
loc_82EEDE44:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2008
	ctx.r5.s64 = 2008;
	// addi r6,r11,20448
	ctx.r6.s64 = ctx.r11.s64 + 20448;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82EEDE5C;
	sub_82EEA308(ctx, base);
	// stw r22,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_82EEDE60:
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// lis r27,3328
	ctx.r27.s64 = 218103808;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eedf2c
	if (ctx.cr6.eq) goto loc_82EEDF2C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x82eedf2c
	if (!ctx.cr6.eq) goto loc_82EEDF2C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82eede90
	if (ctx.cr6.lt) goto loc_82EEDE90;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82eedea0
	if (!ctx.cr6.gt) goto loc_82EEDEA0;
loc_82EEDE90:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82eedebc
	if (ctx.cr6.lt) goto loc_82EEDEBC;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x82eedebc
	if (ctx.cr6.gt) goto loc_82EEDEBC;
loc_82EEDEA0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2021
	ctx.r5.s64 = 2021;
	// addi r6,r11,20396
	ctx.r6.s64 = ctx.r11.s64 + 20396;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82EEDEB8;
	sub_82EEA308(ctx, base);
	// stw r22,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_82EEDEBC:
	// lwz r30,64(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82eeded4
	if (!ctx.cr6.eq) goto loc_82EEDED4;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_82EEDED4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eedf04
	if (ctx.cr6.eq) goto loc_82EEDF04;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82eedf04
	if (ctx.cr6.eq) goto loc_82EEDF04;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2019
	ctx.r5.s64 = 2019;
	// addi r6,r11,20348
	ctx.r6.s64 = ctx.r11.s64 + 20348;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82EEDF00;
	sub_82EEA308(ctx, base);
	// stw r22,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_82EEDF04:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eedf2c
	if (ctx.cr6.eq) goto loc_82EEDF2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2020
	ctx.r5.s64 = 2020;
	// addi r6,r11,20272
	ctx.r6.s64 = ctx.r11.s64 + 20272;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82EEDF28;
	sub_82EEA308(ctx, base);
	// stw r22,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_82EEDF2C:
	// addi r24,r26,68
	ctx.r24.s64 = ctx.r26.s64 + 68;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82EEDF38:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eedfd4
	if (ctx.cr6.eq) goto loc_82EEDFD4;
	// lwz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r11,81
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 81, ctx.xer);
	// beq cr6,0x82eedfc4
	if (ctx.cr6.eq) goto loc_82EEDFC4;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x82eedfc4
	if (ctx.cr6.eq) goto loc_82EEDFC4;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x82eedfc4
	if (ctx.cr6.eq) goto loc_82EEDFC4;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82eedf74
	if (!ctx.cr6.eq) goto loc_82EEDF74;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_82EEDF74:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eedfc4
	if (ctx.cr6.eq) goto loc_82EEDFC4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82eedf90
	if (!ctx.cr6.eq) goto loc_82EEDF90;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_82EEDF90:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eedfb4
	if (ctx.cr6.eq) goto loc_82EEDFB4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2009
	ctx.r5.s64 = 2009;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82EEDFB0;
	sub_82EEA308(ctx, base);
	// stw r22,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_82EEDFB4:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eedfc4
	if (ctx.cr6.eq) goto loc_82EEDFC4;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82EEDFC4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x82eedf38
	if (ctx.cr6.lt) goto loc_82EEDF38;
loc_82EEDFD4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eedba0
	ctx.lr = 0x82EEDFE0;
	sub_82EEDBA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eee680
	if (ctx.cr0.lt) goto loc_82EEE680;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r30,48(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// add r23,r25,r11
	ctx.r23.u64 = ctx.r25.u64 + ctx.r11.u64;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bne cr6,0x82eee128
	if (!ctx.cr6.eq) goto loc_82EEE128;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82eee010
	if (ctx.cr6.lt) goto loc_82EEE010;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82eee020
	if (!ctx.cr6.gt) goto loc_82EEE020;
loc_82EEE010:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82eee128
	if (ctx.cr6.lt) goto loc_82EEE128;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bgt cr6,0x82eee128
	if (ctx.cr6.gt) goto loc_82EEE128;
loc_82EEE020:
	// lwz r10,72(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// lis r9,1792
	ctx.r9.s64 = 117440512;
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82eee0d8
	if (ctx.cr6.gt) goto loc_82EEE0D8;
	// beq cr6,0x82eee0d0
	if (ctx.cr6.eq) goto loc_82EEE0D0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eee0c4
	if (ctx.cr6.eq) goto loc_82EEE0C4;
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eee0bc
	if (ctx.cr6.eq) goto loc_82EEE0BC;
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eee0b4
	if (ctx.cr6.eq) goto loc_82EEE0B4;
	// lis r8,768
	ctx.r8.s64 = 50331648;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82eee124
	if (ctx.cr6.eq) goto loc_82EEE124;
	// lis r9,1024
	ctx.r9.s64 = 67108864;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eee0ac
	if (ctx.cr6.eq) goto loc_82EEE0AC;
	// lis r8,1280
	ctx.r8.s64 = 83886080;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82eee124
	if (ctx.cr6.eq) goto loc_82EEE124;
	// lis r10,1536
	ctx.r10.s64 = 100663296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82EEE088:
	// bne cr6,0x82eee128
	if (!ctx.cr6.eq) goto loc_82EEE128;
loc_82EEE08C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2013
	ctx.r5.s64 = 2013;
	// addi r6,r11,20220
	ctx.r6.s64 = ctx.r11.s64 + 20220;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82EEE0A4;
	sub_82EEA308(ctx, base);
	// stw r22,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
	// b 0x82eee128
	goto loc_82EEE128;
loc_82EEE0AC:
	// lis r11,1280
	ctx.r11.s64 = 83886080;
	// b 0x82eee0c8
	goto loc_82EEE0C8;
loc_82EEE0B4:
	// lis r11,768
	ctx.r11.s64 = 50331648;
	// b 0x82eee0c8
	goto loc_82EEE0C8;
loc_82EEE0BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82eee0c8
	goto loc_82EEE0C8;
loc_82EEE0C4:
	// lis r11,256
	ctx.r11.s64 = 16777216;
loc_82EEE0C8:
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// b 0x82eee128
	goto loc_82EEE128;
loc_82EEE0D0:
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// b 0x82eee0c8
	goto loc_82EEE0C8;
loc_82EEE0D8:
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82eee124
	if (ctx.cr6.eq) goto loc_82EEE124;
	// lis r9,2304
	ctx.r9.s64 = 150994944;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eee08c
	if (ctx.cr6.eq) goto loc_82EEE08C;
	// lis r9,2560
	ctx.r9.s64 = 167772160;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eee08c
	if (ctx.cr6.eq) goto loc_82EEE08C;
	// lis r9,2816
	ctx.r9.s64 = 184549376;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eee11c
	if (ctx.cr6.eq) goto loc_82EEE11C;
	// lis r8,3072
	ctx.r8.s64 = 201326592;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82eee124
	if (ctx.cr6.eq) goto loc_82EEE124;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// b 0x82eee088
	goto loc_82EEE088;
loc_82EEE11C:
	// lis r11,3072
	ctx.r11.s64 = 201326592;
	// b 0x82eee0c8
	goto loc_82EEE0C8;
loc_82EEE124:
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
loc_82EEE128:
	// lwz r11,84(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eee138
	if (ctx.cr6.eq) goto loc_82EEE138;
	// oris r30,r30,16384
	ctx.r30.u64 = ctx.r30.u64 | 1073741824;
loc_82EEE138:
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eee148
	if (ctx.cr6.eq) goto loc_82EEE148;
	// oris r30,r30,4096
	ctx.r30.u64 = ctx.r30.u64 | 268435456;
loc_82EEE148:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82eee15c
	if (ctx.cr6.lt) goto loc_82EEE15C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82eee16c
	if (!ctx.cr6.gt) goto loc_82EEE16C;
loc_82EEE15C:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82eee178
	if (ctx.cr6.lt) goto loc_82EEE178;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bgt cr6,0x82eee178
	if (ctx.cr6.gt) goto loc_82EEE178;
loc_82EEE16C:
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
loc_82EEE178:
	// lwz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// beq cr6,0x82eee194
	if (ctx.cr6.eq) goto loc_82EEE194;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x82eee194
	if (ctx.cr6.eq) goto loc_82EEE194;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x82eee1a0
	if (!ctx.cr6.eq) goto loc_82EEE1A0;
loc_82EEE194:
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// rlwinm r11,r11,16,13,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x70000;
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
loc_82EEE1A0:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r10,48(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x82eee1e8
	if (!ctx.cr6.eq) goto loc_82EEE1E8;
	// lwz r10,56(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82EEE1E8:
	// lwz r10,60(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lis r27,-128
	ctx.r27.s64 = -8388608;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eee314
	if (ctx.cr6.eq) goto loc_82EEE314;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 25, ctx.xer);
	// bne cr6,0x82eee314
	if (!ctx.cr6.eq) goto loc_82EEE314;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eee24c
	if (!ctx.cr6.eq) goto loc_82EEE24C;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lis r9,15
	ctx.r9.s64 = 983040;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82eee24c
	if (!ctx.cr6.eq) goto loc_82EEE24C;
	// lwz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// beq cr6,0x82eee244
	if (ctx.cr6.eq) goto loc_82EEE244;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x82eee244
	if (ctx.cr6.eq) goto loc_82EEE244;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x82eee24c
	if (!ctx.cr6.eq) goto loc_82EEE24C;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// b 0x82eee248
	goto loc_82EEE248;
loc_82EEE244:
	// lis r11,7
	ctx.r11.s64 = 458752;
loc_82EEE248:
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
loc_82EEE24C:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r8,52(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// rlwimi r9,r11,20,9,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x700000) | (ctx.r9.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// lwz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r8,r8,0,4,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF00000;
	// lwz r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r9,r7,21
	ctx.r9.u64 = ctx.r7.u32 & 0x7FF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r6,0,12,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF0000;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// beq cr6,0x82eee298
	if (ctx.cr6.eq) goto loc_82EEE298;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
loc_82EEE298:
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eee314
	if (ctx.cr6.eq) goto loc_82EEE314;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,0,27,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r8,r9,20,9,11
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0x700000) | (ctx.r8.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r9,r7,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF000000;
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// clrlwi r6,r5,21
	ctx.r6.u64 = ctx.r5.u32 & 0x7FF;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82EEE314:
	// lwz r10,64(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eee380
	if (ctx.cr6.eq) goto loc_82EEE380;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 25, ctx.xer);
	// bne cr6,0x82eee380
	if (!ctx.cr6.eq) goto loc_82EEE380;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,0,27,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r8,r9,20,9,11
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0x700000) | (ctx.r8.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r9,r7,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF000000;
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// clrlwi r6,r5,21
	ctx.r6.u64 = ctx.r5.u32 & 0x7FF;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82EEE380:
	// lwz r10,48(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x82eee3ec
	if (!ctx.cr6.eq) goto loc_82EEE3EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82EEE394:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eee628
	if (ctx.cr6.eq) goto loc_82EEE628;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r7,r7,-5
	ctx.r7.s64 = ctx.r7.s64 + -5;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bgt cr6,0x82eee3cc
	if (ctx.cr6.gt) goto loc_82EEE3CC;
	// lfd f0,24(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
loc_82EEE3CC:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// blt cr6,0x82eee394
	if (ctx.cr6.lt) goto loc_82EEE394;
	// b 0x82eee628
	goto loc_82EEE628;
loc_82EEE3EC:
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x82eee44c
	if (!ctx.cr6.eq) goto loc_82EEE44C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82EEE3FC:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eee628
	if (ctx.cr6.eq) goto loc_82EEE628;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82eee41c
	if (ctx.cr6.eq) goto loc_82EEE41C;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x82eee42c
	if (!ctx.cr6.eq) goto loc_82EEE42C;
loc_82EEE41C:
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// stwx r8,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
loc_82EEE42C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// blt cr6,0x82eee3fc
	if (ctx.cr6.lt) goto loc_82EEE3FC;
	// b 0x82eee628
	goto loc_82EEE628;
loc_82EEE44C:
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x82eee484
	if (!ctx.cr6.eq) goto loc_82EEE484;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x82eee628
	goto loc_82EEE628;
loc_82EEE484:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r28,r11,20156
	ctx.r28.s64 = ctx.r11.s64 + 20156;
loc_82EEE494:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eee628
	if (ctx.cr6.eq) goto loc_82EEE628;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82eee4f8
	if (!ctx.cr6.eq) goto loc_82EEE4F8;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82eee4f8
	if (!ctx.cr6.eq) goto loc_82EEE4F8;
	// lwz r10,48(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x82eee4f0
	if (ctx.cr6.eq) goto loc_82EEE4F0;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x82eee4f0
	if (ctx.cr6.eq) goto loc_82EEE4F0;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// beq cr6,0x82eee4f0
	if (ctx.cr6.eq) goto loc_82EEE4F0;
	// cmplwi cr6,r10,78
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 78, ctx.xer);
	// beq cr6,0x82eee4f0
	if (ctx.cr6.eq) goto loc_82EEE4F0;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// beq cr6,0x82eee4f0
	if (ctx.cr6.eq) goto loc_82EEE4F0;
	// cmplwi cr6,r10,79
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 79, ctx.xer);
	// bne cr6,0x82eee4f8
	if (!ctx.cr6.eq) goto loc_82EEE4F8;
loc_82EEE4F0:
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_82EEE4F8:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r9,r10,20,9,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x700000) | (ctx.r9.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r10,r10,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r8,r8,0,4,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF000000;
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r9,r7,21
	ctx.r9.u64 = ctx.r7.u32 & 0x7FF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r6,0,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF0000;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// beq cr6,0x82eee544
	if (ctx.cr6.eq) goto loc_82EEE544;
	// ori r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 8192;
loc_82EEE544:
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eee618
	if (ctx.cr6.eq) goto loc_82EEE618;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82eee5c4
	if (!ctx.cr6.eq) goto loc_82EEE5C4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82eee5a8
	if (!ctx.cr6.eq) goto loc_82EEE5A8;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eee5a8
	if (!ctx.cr6.eq) goto loc_82EEE5A8;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eee5a8
	if (!ctx.cr6.eq) goto loc_82EEE5A8;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eee618
	if (ctx.cr6.eq) goto loc_82EEE618;
loc_82EEE5A8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2007
	ctx.r5.s64 = 2007;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82EEE5BC;
	sub_82EEA308(ctx, base);
	// stw r22,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
	// b 0x82eee618
	goto loc_82EEE618;
loc_82EEE5C4:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r8,r9,20,9,11
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0x700000) | (ctx.r8.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r9,r9,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r7,r7,0,4,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF000000;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r8,r6,21
	ctx.r8.u64 = ctx.r6.u32 & 0x7FF;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stwx r11,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82EEE618:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x82eee494
	if (ctx.cr6.lt) goto loc_82EEE494;
loc_82EEE628:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82eee650
	if (ctx.cr6.eq) goto loc_82EEE650;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,20112
	ctx.r6.s64 = ctx.r11.s64 + 20112;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82EEE64C;
	sub_82EEA308(ctx, base);
	// stw r22,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_82EEE650:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82eee664
	if (ctx.cr6.eq) goto loc_82EEE664;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x82eee67c
	goto loc_82EEE67C;
loc_82EEE664:
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eec398
	ctx.lr = 0x82EEE670;
	sub_82EEC398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eee67c
	if (!ctx.cr0.lt) goto loc_82EEE67C;
	// stw r22,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
loc_82EEE67C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEE680:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EEE688"))) PPC_WEAK_FUNC(sub_82EEE688);
PPC_FUNC_IMPL(__imp__sub_82EEE688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82EEE690;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,17998
	ctx.r4.s64 = 1179516928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// ori r4,r4,18758
	ctx.r4.u64 = ctx.r4.u64 | 18758;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// bl 0x82f1b6d8
	ctx.lr = 0x82EEE6B0;
	sub_82F1B6D8(ctx, base);
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// lwz r10,172(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 172);
	// lwz r11,168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 168);
	// lwz r9,164(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 164);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,160(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 160);
	// lwz r8,156(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 156);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eeea84
	if (ctx.cr0.eq) goto loc_82EEEA84;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82299698
	ctx.lr = 0x82EEE6F0;
	sub_82299698(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x82eee704
	if (!ctx.cr0.eq) goto loc_82EEE704;
loc_82EEE6F8:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82eeea84
	goto loc_82EEEA84;
loc_82EEE704:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// li r7,7
	ctx.r7.s64 = 7;
loc_82EEE710:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eee73c
	if (ctx.cr6.eq) goto loc_82EEE73C;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
loc_82EEE724:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,32(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82eee724
	if (!ctx.cr6.eq) goto loc_82EEE724;
loc_82EEE73C:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82eee710
	if (!ctx.cr0.eq) goto loc_82EEE710;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r7,r11,112
	ctx.r7.s64 = ctx.r11.s64 + 112;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
loc_82EEE75C:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eee78c
	if (ctx.cr6.eq) goto loc_82EEE78C;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_82EEE774:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,32(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82eee774
	if (!ctx.cr6.eq) goto loc_82EEE774;
loc_82EEE78C:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82eee75c
	if (!ctx.cr0.eq) goto loc_82EEE75C;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EEE7B0:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eee7e0
	if (ctx.cr6.eq) goto loc_82EEE7E0;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_82EEE7C8:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,32(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82eee7c8
	if (!ctx.cr6.eq) goto loc_82EEE7C8;
loc_82EEE7E0:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82eee7b0
	if (!ctx.cr0.eq) goto loc_82EEE7B0;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r7,r11,56
	ctx.r7.s64 = ctx.r11.s64 + 56;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EEE804:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eee834
	if (ctx.cr6.eq) goto loc_82EEE834;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_82EEE81C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,32(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82eee81c
	if (!ctx.cr6.eq) goto loc_82EEE81C;
loc_82EEE834:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82eee804
	if (!ctx.cr0.eq) goto loc_82EEE804;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r7,r11,84
	ctx.r7.s64 = ctx.r11.s64 + 84;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EEE858:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eee888
	if (ctx.cr6.eq) goto loc_82EEE888;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
loc_82EEE870:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,32(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82eee870
	if (!ctx.cr6.eq) goto loc_82EEE870;
loc_82EEE888:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82eee858
	if (!ctx.cr0.eq) goto loc_82EEE858;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lis r9,-32017
	ctx.r9.s64 = -2098266112;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r9,-15312
	ctx.r6.s64 = ctx.r9.s64 + -15312;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,164(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb3100
	ctx.lr = 0x82EEE8B8;
	sub_82CB3100(ctx, base);
	// mulli r28,r29,20
	ctx.r28.s64 = ctx.r29.s64 * 20;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82299698
	ctx.lr = 0x82EEE8C8;
	sub_82299698(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82eee6f8
	if (ctx.cr0.eq) goto loc_82EEE6F8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r9,28
	ctx.r9.s64 = 28;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r23,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r23.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// std r23,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r23.u64);
	// li r5,28
	ctx.r5.s64 = 28;
	// std r23,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r23.u64);
	// stw r23,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r23.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x82f1b9c0
	ctx.lr = 0x82EEE91C;
	sub_82F1B9C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eeea84
	if (ctx.cr0.lt) goto loc_82EEEA84;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82EEE934;
	sub_82CB16F0(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f1b9c0
	ctx.lr = 0x82EEE950;
	sub_82F1B9C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eeea84
	if (ctx.cr0.lt) goto loc_82EEEA84;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eee9ac
	if (ctx.cr6.eq) goto loc_82EEE9AC;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_82EEE96C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f1ad90
	ctx.lr = 0x82EEE990;
	sub_82F1AD90(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eeea84
	if (ctx.cr0.lt) goto loc_82EEEA84;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eee96c
	if (ctx.cr6.lt) goto loc_82EEE96C;
loc_82EEE9AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,20876
	ctx.r4.s64 = ctx.r11.s64 + 20876;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f1b9c0
	ctx.lr = 0x82EEE9CC;
	sub_82F1B9C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eeea84
	if (ctx.cr0.lt) goto loc_82EEEA84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f1b930
	ctx.lr = 0x82EEE9DC;
	sub_82F1B930(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,32768
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32768, ctx.xer);
	// bgt cr6,0x82eeea64
	if (ctx.cr6.gt) goto loc_82EEEA64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eedba0
	ctx.lr = 0x82EEE9F4;
	sub_82EEDBA0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eeea84
	if (ctx.cr0.lt) goto loc_82EEEA84;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82cb1fe0
	ctx.lr = 0x82EEEA20;
	sub_82CB1FE0(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82f1bca0
	ctx.lr = 0x82EEEA38;
	sub_82F1BCA0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eeea84
	if (ctx.cr0.lt) goto loc_82EEEA84;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x82eeea84
	goto loc_82EEEA84;
loc_82EEEA64:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2031
	ctx.r5.s64 = 2031;
	// addi r6,r11,20832
	ctx.r6.s64 = ctx.r11.s64 + 20832;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82EEEA7C;
	sub_82EEA308(ctx, base);
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_82EEEA84:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EEEA90;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EEEA9C;
	sub_822996C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f1b948
	ctx.lr = 0x82EEEAA4;
	sub_82F1B948(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

