#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83380130"))) PPC_WEAK_FUNC(sub_83380130);
PPC_FUNC_IMPL(__imp__sub_83380130) {
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
loc_83380160:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380160;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380170"))) PPC_WEAK_FUNC(sub_83380170);
PPC_FUNC_IMPL(__imp__sub_83380170) {
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
loc_833801A0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833801a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833801A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833801B0"))) PPC_WEAK_FUNC(sub_833801B0);
PPC_FUNC_IMPL(__imp__sub_833801B0) {
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
loc_833801E0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833801e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833801E0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833801F0"))) PPC_WEAK_FUNC(sub_833801F0);
PPC_FUNC_IMPL(__imp__sub_833801F0) {
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
loc_83380220:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380220;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380230"))) PPC_WEAK_FUNC(sub_83380230);
PPC_FUNC_IMPL(__imp__sub_83380230) {
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
loc_83380260:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380260
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380260;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380270"))) PPC_WEAK_FUNC(sub_83380270);
PPC_FUNC_IMPL(__imp__sub_83380270) {
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
loc_833802A0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833802a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833802A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833802B0"))) PPC_WEAK_FUNC(sub_833802B0);
PPC_FUNC_IMPL(__imp__sub_833802B0) {
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
loc_833802E0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833802e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833802E0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833802F0"))) PPC_WEAK_FUNC(sub_833802F0);
PPC_FUNC_IMPL(__imp__sub_833802F0) {
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
loc_83380320:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380330"))) PPC_WEAK_FUNC(sub_83380330);
PPC_FUNC_IMPL(__imp__sub_83380330) {
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
loc_83380360:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380360
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380370"))) PPC_WEAK_FUNC(sub_83380370);
PPC_FUNC_IMPL(__imp__sub_83380370) {
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
loc_833803A0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833803a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833803A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833803B0"))) PPC_WEAK_FUNC(sub_833803B0);
PPC_FUNC_IMPL(__imp__sub_833803B0) {
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
loc_833803E0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833803e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833803E0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833803F0"))) PPC_WEAK_FUNC(sub_833803F0);
PPC_FUNC_IMPL(__imp__sub_833803F0) {
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
loc_83380420:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380430"))) PPC_WEAK_FUNC(sub_83380430);
PPC_FUNC_IMPL(__imp__sub_83380430) {
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
loc_83380460:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380460;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380470"))) PPC_WEAK_FUNC(sub_83380470);
PPC_FUNC_IMPL(__imp__sub_83380470) {
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
loc_833804A0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833804a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833804A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833804B0"))) PPC_WEAK_FUNC(sub_833804B0);
PPC_FUNC_IMPL(__imp__sub_833804B0) {
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
loc_833804E0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833804e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833804E0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833804F0"))) PPC_WEAK_FUNC(sub_833804F0);
PPC_FUNC_IMPL(__imp__sub_833804F0) {
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
loc_83380520:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380530"))) PPC_WEAK_FUNC(sub_83380530);
PPC_FUNC_IMPL(__imp__sub_83380530) {
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
loc_83380560:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380560
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380560;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380570"))) PPC_WEAK_FUNC(sub_83380570);
PPC_FUNC_IMPL(__imp__sub_83380570) {
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
loc_833805A0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833805a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833805A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833805B0"))) PPC_WEAK_FUNC(sub_833805B0);
PPC_FUNC_IMPL(__imp__sub_833805B0) {
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
loc_833805E0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833805e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833805E0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833805F0"))) PPC_WEAK_FUNC(sub_833805F0);
PPC_FUNC_IMPL(__imp__sub_833805F0) {
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
loc_83380620:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380620;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380630"))) PPC_WEAK_FUNC(sub_83380630);
PPC_FUNC_IMPL(__imp__sub_83380630) {
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
loc_83380660:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380660
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380660;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380670"))) PPC_WEAK_FUNC(sub_83380670);
PPC_FUNC_IMPL(__imp__sub_83380670) {
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
loc_833806A0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833806a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833806A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833806B0"))) PPC_WEAK_FUNC(sub_833806B0);
PPC_FUNC_IMPL(__imp__sub_833806B0) {
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
loc_833806E0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833806e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833806E0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833806F0"))) PPC_WEAK_FUNC(sub_833806F0);
PPC_FUNC_IMPL(__imp__sub_833806F0) {
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
loc_83380720:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380730"))) PPC_WEAK_FUNC(sub_83380730);
PPC_FUNC_IMPL(__imp__sub_83380730) {
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
loc_83380760:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380760
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380760;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380770"))) PPC_WEAK_FUNC(sub_83380770);
PPC_FUNC_IMPL(__imp__sub_83380770) {
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
loc_833807A0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833807a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833807A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833807B0"))) PPC_WEAK_FUNC(sub_833807B0);
PPC_FUNC_IMPL(__imp__sub_833807B0) {
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
loc_833807E0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833807e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833807E0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833807F0"))) PPC_WEAK_FUNC(sub_833807F0);
PPC_FUNC_IMPL(__imp__sub_833807F0) {
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
loc_83380820:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380820
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380820;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380830"))) PPC_WEAK_FUNC(sub_83380830);
PPC_FUNC_IMPL(__imp__sub_83380830) {
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
loc_83380860:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380860
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380860;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380870"))) PPC_WEAK_FUNC(sub_83380870);
PPC_FUNC_IMPL(__imp__sub_83380870) {
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
loc_833808A0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833808a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833808A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833808B0"))) PPC_WEAK_FUNC(sub_833808B0);
PPC_FUNC_IMPL(__imp__sub_833808B0) {
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
loc_833808E0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833808e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833808E0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833808F0"))) PPC_WEAK_FUNC(sub_833808F0);
PPC_FUNC_IMPL(__imp__sub_833808F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-12000
	ctx.r3.s64 = ctx.r11.s64 + -12000;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833808FC"))) PPC_WEAK_FUNC(sub_833808FC);
PPC_FUNC_IMPL(__imp__sub_833808FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83380900"))) PPC_WEAK_FUNC(sub_83380900);
PPC_FUNC_IMPL(__imp__sub_83380900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-11920
	ctx.r3.s64 = ctx.r11.s64 + -11920;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338090C"))) PPC_WEAK_FUNC(sub_8338090C);
PPC_FUNC_IMPL(__imp__sub_8338090C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83380910"))) PPC_WEAK_FUNC(sub_83380910);
PPC_FUNC_IMPL(__imp__sub_83380910) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// addi r30,r31,-12524
	ctx.r30.s64 = ctx.r31.s64 + -12524;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-32652
	ctx.r5.s64 = ctx.r8.s64 + -32652;
	// addi r4,r7,-32600
	ctx.r4.s64 = ctx.r7.s64 + -32600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-11392
	ctx.r10.s64 = ctx.r10.s64 + -11392;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338096C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-11232
	ctx.r10.s64 = ctx.r10.s64 + -11232;
	// addi r9,r9,-11136
	ctx.r9.s64 = ctx.r9.s64 + -11136;
	// stw r11,-12524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12524, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-11904
	ctx.r3.s64 = ctx.r3.s64 + -11904;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338099C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833809B4"))) PPC_WEAK_FUNC(sub_833809B4);
PPC_FUNC_IMPL(__imp__sub_833809B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833809B8"))) PPC_WEAK_FUNC(sub_833809B8);
PPC_FUNC_IMPL(__imp__sub_833809B8) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// addi r30,r31,-12432
	ctx.r30.s64 = ctx.r31.s64 + -12432;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-32232
	ctx.r5.s64 = ctx.r8.s64 + -32232;
	// addi r4,r7,-32184
	ctx.r4.s64 = ctx.r7.s64 + -32184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-10720
	ctx.r10.s64 = ctx.r10.s64 + -10720;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83380A14;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-10648
	ctx.r10.s64 = ctx.r10.s64 + -10648;
	// addi r9,r9,-10552
	ctx.r9.s64 = ctx.r9.s64 + -10552;
	// stw r11,-12432(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12432, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-11816
	ctx.r3.s64 = ctx.r3.s64 + -11816;
	// bl 0x82cb0ae8
	ctx.lr = 0x83380A44;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83380A5C"))) PPC_WEAK_FUNC(sub_83380A5C);
PPC_FUNC_IMPL(__imp__sub_83380A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83380A60"))) PPC_WEAK_FUNC(sub_83380A60);
PPC_FUNC_IMPL(__imp__sub_83380A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-11728
	ctx.r3.s64 = ctx.r11.s64 + -11728;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83380A6C"))) PPC_WEAK_FUNC(sub_83380A6C);
PPC_FUNC_IMPL(__imp__sub_83380A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83380A70"))) PPC_WEAK_FUNC(sub_83380A70);
PPC_FUNC_IMPL(__imp__sub_83380A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-11568
	ctx.r3.s64 = ctx.r11.s64 + -11568;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83380A7C"))) PPC_WEAK_FUNC(sub_83380A7C);
PPC_FUNC_IMPL(__imp__sub_83380A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83380A80"))) PPC_WEAK_FUNC(sub_83380A80);
PPC_FUNC_IMPL(__imp__sub_83380A80) {
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
	// bne cr6,0x83380ac0
	if (!ctx.cr6.eq) goto loc_83380AC0;
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
loc_83380AB4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380ab4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380AB4;
loc_83380AC0:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,2112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2112);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83380af0
	if (ctx.cr6.eq) goto loc_83380AF0;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,528
	ctx.r11.s64 = 528;
	// lwz r10,19020(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19020);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,2112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2112, ctx.r10.u32);
	// blr 
	return;
loc_83380AF0:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,19020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19020);
	// stw r11,2112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380B00"))) PPC_WEAK_FUNC(sub_83380B00);
PPC_FUNC_IMPL(__imp__sub_83380B00) {
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
	// bne cr6,0x83380b40
	if (!ctx.cr6.eq) goto loc_83380B40;
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
loc_83380B34:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380b34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380B34;
loc_83380B40:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,2004(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2004);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83380b70
	if (ctx.cr6.eq) goto loc_83380B70;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,501
	ctx.r11.s64 = 501;
	// lwz r10,19024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19024);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,2004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2004, ctx.r10.u32);
	// blr 
	return;
loc_83380B70:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,19024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19024);
	// stw r11,2004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2004, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380B80"))) PPC_WEAK_FUNC(sub_83380B80);
PPC_FUNC_IMPL(__imp__sub_83380B80) {
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
	// bne cr6,0x83380bc0
	if (!ctx.cr6.eq) goto loc_83380BC0;
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
loc_83380BB4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380bb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380BB4;
loc_83380BC0:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,2012(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2012);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83380bf0
	if (ctx.cr6.eq) goto loc_83380BF0;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,503
	ctx.r11.s64 = 503;
	// lwz r10,19028(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19028);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,2012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2012, ctx.r10.u32);
	// blr 
	return;
loc_83380BF0:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,19028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19028);
	// stw r11,2012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2012, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380C00"))) PPC_WEAK_FUNC(sub_83380C00);
PPC_FUNC_IMPL(__imp__sub_83380C00) {
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
	// bne cr6,0x83380c40
	if (!ctx.cr6.eq) goto loc_83380C40;
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
loc_83380C34:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380c34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380C34;
loc_83380C40:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,2036(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2036);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83380c70
	if (ctx.cr6.eq) goto loc_83380C70;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,509
	ctx.r11.s64 = 509;
	// lwz r10,19032(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19032);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,2036(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2036, ctx.r10.u32);
	// blr 
	return;
loc_83380C70:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,19032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19032);
	// stw r11,2036(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2036, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380C80"))) PPC_WEAK_FUNC(sub_83380C80);
PPC_FUNC_IMPL(__imp__sub_83380C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-11552
	ctx.r3.s64 = ctx.r11.s64 + -11552;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83380C8C"))) PPC_WEAK_FUNC(sub_83380C8C);
PPC_FUNC_IMPL(__imp__sub_83380C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83380C90"))) PPC_WEAK_FUNC(sub_83380C90);
PPC_FUNC_IMPL(__imp__sub_83380C90) {
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
loc_83380CC0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380cc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380CC0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380CD0"))) PPC_WEAK_FUNC(sub_83380CD0);
PPC_FUNC_IMPL(__imp__sub_83380CD0) {
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
loc_83380D00:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380d00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380D00;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380D10"))) PPC_WEAK_FUNC(sub_83380D10);
PPC_FUNC_IMPL(__imp__sub_83380D10) {
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
loc_83380D40:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380d40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380D40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380D50"))) PPC_WEAK_FUNC(sub_83380D50);
PPC_FUNC_IMPL(__imp__sub_83380D50) {
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
loc_83380D80:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380d80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380D80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380D90"))) PPC_WEAK_FUNC(sub_83380D90);
PPC_FUNC_IMPL(__imp__sub_83380D90) {
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
loc_83380DC0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380dc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380DC0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380DD0"))) PPC_WEAK_FUNC(sub_83380DD0);
PPC_FUNC_IMPL(__imp__sub_83380DD0) {
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
loc_83380E00:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380e00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380E00;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380E10"))) PPC_WEAK_FUNC(sub_83380E10);
PPC_FUNC_IMPL(__imp__sub_83380E10) {
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
loc_83380E40:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380e40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380E40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380E50"))) PPC_WEAK_FUNC(sub_83380E50);
PPC_FUNC_IMPL(__imp__sub_83380E50) {
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
loc_83380E80:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380e80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380E80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380E90"))) PPC_WEAK_FUNC(sub_83380E90);
PPC_FUNC_IMPL(__imp__sub_83380E90) {
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
loc_83380EC0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380ec0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380EC0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380ED0"))) PPC_WEAK_FUNC(sub_83380ED0);
PPC_FUNC_IMPL(__imp__sub_83380ED0) {
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
loc_83380F00:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380f00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380F00;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380F10"))) PPC_WEAK_FUNC(sub_83380F10);
PPC_FUNC_IMPL(__imp__sub_83380F10) {
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
loc_83380F40:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380f40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380F40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380F50"))) PPC_WEAK_FUNC(sub_83380F50);
PPC_FUNC_IMPL(__imp__sub_83380F50) {
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
loc_83380F80:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380f80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380F80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380F90"))) PPC_WEAK_FUNC(sub_83380F90);
PPC_FUNC_IMPL(__imp__sub_83380F90) {
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
loc_83380FC0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380fc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380FC0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380FD0"))) PPC_WEAK_FUNC(sub_83380FD0);
PPC_FUNC_IMPL(__imp__sub_83380FD0) {
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
loc_83381000:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83381000
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83381000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83381010"))) PPC_WEAK_FUNC(sub_83381010);
PPC_FUNC_IMPL(__imp__sub_83381010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-11536
	ctx.r3.s64 = ctx.r11.s64 + -11536;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338101C"))) PPC_WEAK_FUNC(sub_8338101C);
PPC_FUNC_IMPL(__imp__sub_8338101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381020"))) PPC_WEAK_FUNC(sub_83381020);
PPC_FUNC_IMPL(__imp__sub_83381020) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,19904
	ctx.r4.s64 = ctx.r11.s64 + 19904;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r30,r31,-12184
	ctx.r30.s64 = ctx.r31.s64 + -12184;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,8140
	ctx.r5.s64 = ctx.r8.s64 + 8140;
	// addi r4,r7,8184
	ctx.r4.s64 = ctx.r7.s64 + 8184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,19616
	ctx.r10.s64 = ctx.r10.s64 + 19616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338107C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,19800
	ctx.r10.s64 = ctx.r10.s64 + 19800;
	// addi r9,r9,19896
	ctx.r9.s64 = ctx.r9.s64 + 19896;
	// stw r11,-12184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12184, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-11456
	ctx.r3.s64 = ctx.r3.s64 + -11456;
	// bl 0x82cb0ae8
	ctx.lr = 0x833810AC;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833810C4"))) PPC_WEAK_FUNC(sub_833810C4);
PPC_FUNC_IMPL(__imp__sub_833810C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833810C8"))) PPC_WEAK_FUNC(sub_833810C8);
PPC_FUNC_IMPL(__imp__sub_833810C8) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,20656
	ctx.r4.s64 = ctx.r11.s64 + 20656;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r30,r31,-12092
	ctx.r30.s64 = ctx.r31.s64 + -12092;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,8232
	ctx.r5.s64 = ctx.r8.s64 + 8232;
	// addi r4,r7,8280
	ctx.r4.s64 = ctx.r7.s64 + 8280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,20368
	ctx.r10.s64 = ctx.r10.s64 + 20368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83381124;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,20528
	ctx.r10.s64 = ctx.r10.s64 + 20528;
	// addi r9,r9,20648
	ctx.r9.s64 = ctx.r9.s64 + 20648;
	// stw r11,-12092(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12092, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-11368
	ctx.r3.s64 = ctx.r3.s64 + -11368;
	// bl 0x82cb0ae8
	ctx.lr = 0x83381154;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_8338116C"))) PPC_WEAK_FUNC(sub_8338116C);
PPC_FUNC_IMPL(__imp__sub_8338116C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381170"))) PPC_WEAK_FUNC(sub_83381170);
PPC_FUNC_IMPL(__imp__sub_83381170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-11280
	ctx.r3.s64 = ctx.r11.s64 + -11280;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338117C"))) PPC_WEAK_FUNC(sub_8338117C);
PPC_FUNC_IMPL(__imp__sub_8338117C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381180"))) PPC_WEAK_FUNC(sub_83381180);
PPC_FUNC_IMPL(__imp__sub_83381180) {
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
	// bne cr6,0x833811c0
	if (!ctx.cr6.eq) goto loc_833811C0;
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
loc_833811B4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833811b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833811B4;
loc_833811C0:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1540(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1540);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833811f0
	if (ctx.cr6.eq) goto loc_833811F0;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,385
	ctx.r11.s64 = 385;
	// lwz r10,18956(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18956);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1540(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1540, ctx.r10.u32);
	// blr 
	return;
loc_833811F0:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,18956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18956);
	// stw r11,1540(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1540, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83381200"))) PPC_WEAK_FUNC(sub_83381200);
PPC_FUNC_IMPL(__imp__sub_83381200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-11120
	ctx.r3.s64 = ctx.r11.s64 + -11120;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338120C"))) PPC_WEAK_FUNC(sub_8338120C);
PPC_FUNC_IMPL(__imp__sub_8338120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381210"))) PPC_WEAK_FUNC(sub_83381210);
PPC_FUNC_IMPL(__imp__sub_83381210) {
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
loc_83381240:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83381240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83381240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83381250"))) PPC_WEAK_FUNC(sub_83381250);
PPC_FUNC_IMPL(__imp__sub_83381250) {
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
loc_83381280:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83381280
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83381280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83381290"))) PPC_WEAK_FUNC(sub_83381290);
PPC_FUNC_IMPL(__imp__sub_83381290) {
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
loc_833812C0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833812c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833812C0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833812D0"))) PPC_WEAK_FUNC(sub_833812D0);
PPC_FUNC_IMPL(__imp__sub_833812D0) {
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
loc_83381300:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83381300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83381300;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83381310"))) PPC_WEAK_FUNC(sub_83381310);
PPC_FUNC_IMPL(__imp__sub_83381310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-18064
	ctx.r9.s64 = ctx.r11.s64 + -18064;
	// addi r8,r10,-11696
	ctx.r8.s64 = ctx.r10.s64 + -11696;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8338132C"))) PPC_WEAK_FUNC(sub_8338132C);
PPC_FUNC_IMPL(__imp__sub_8338132C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381330"))) PPC_WEAK_FUNC(sub_83381330);
PPC_FUNC_IMPL(__imp__sub_83381330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-11664
	ctx.r9.s64 = ctx.r11.s64 + -11664;
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
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83381360"))) PPC_WEAK_FUNC(sub_83381360);
PPC_FUNC_IMPL(__imp__sub_83381360) {
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
	// addi r5,r11,-11648
	ctx.r5.s64 = ctx.r11.s64 + -11648;
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
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833813A8"))) PPC_WEAK_FUNC(sub_833813A8);
PPC_FUNC_IMPL(__imp__sub_833813A8) {
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
	// addi r5,r11,-11680
	ctx.r5.s64 = ctx.r11.s64 + -11680;
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
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833813F0"))) PPC_WEAK_FUNC(sub_833813F0);
PPC_FUNC_IMPL(__imp__sub_833813F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-11024
	ctx.r3.s64 = ctx.r11.s64 + -11024;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833813FC"))) PPC_WEAK_FUNC(sub_833813FC);
PPC_FUNC_IMPL(__imp__sub_833813FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381400"))) PPC_WEAK_FUNC(sub_83381400);
PPC_FUNC_IMPL(__imp__sub_83381400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-10944
	ctx.r3.s64 = ctx.r11.s64 + -10944;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338140C"))) PPC_WEAK_FUNC(sub_8338140C);
PPC_FUNC_IMPL(__imp__sub_8338140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381410"))) PPC_WEAK_FUNC(sub_83381410);
PPC_FUNC_IMPL(__imp__sub_83381410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-18064
	ctx.r9.s64 = ctx.r11.s64 + -18064;
	// addi r8,r10,-11632
	ctx.r8.s64 = ctx.r10.s64 + -11632;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8338142C"))) PPC_WEAK_FUNC(sub_8338142C);
PPC_FUNC_IMPL(__imp__sub_8338142C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381430"))) PPC_WEAK_FUNC(sub_83381430);
PPC_FUNC_IMPL(__imp__sub_83381430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-11600
	ctx.r9.s64 = ctx.r11.s64 + -11600;
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
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83381460"))) PPC_WEAK_FUNC(sub_83381460);
PPC_FUNC_IMPL(__imp__sub_83381460) {
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
	// addi r5,r11,-11584
	ctx.r5.s64 = ctx.r11.s64 + -11584;
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
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833814A8"))) PPC_WEAK_FUNC(sub_833814A8);
PPC_FUNC_IMPL(__imp__sub_833814A8) {
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
	// addi r5,r11,-11616
	ctx.r5.s64 = ctx.r11.s64 + -11616;
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
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833814F0"))) PPC_WEAK_FUNC(sub_833814F0);
PPC_FUNC_IMPL(__imp__sub_833814F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-10864
	ctx.r3.s64 = ctx.r11.s64 + -10864;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833814FC"))) PPC_WEAK_FUNC(sub_833814FC);
PPC_FUNC_IMPL(__imp__sub_833814FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381500"))) PPC_WEAK_FUNC(sub_83381500);
PPC_FUNC_IMPL(__imp__sub_83381500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-10768
	ctx.r3.s64 = ctx.r11.s64 + -10768;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338150C"))) PPC_WEAK_FUNC(sub_8338150C);
PPC_FUNC_IMPL(__imp__sub_8338150C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381510"))) PPC_WEAK_FUNC(sub_83381510);
PPC_FUNC_IMPL(__imp__sub_83381510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-10752
	ctx.r3.s64 = ctx.r11.s64 + -10752;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338151C"))) PPC_WEAK_FUNC(sub_8338151C);
PPC_FUNC_IMPL(__imp__sub_8338151C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381520"))) PPC_WEAK_FUNC(sub_83381520);
PPC_FUNC_IMPL(__imp__sub_83381520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-10736
	ctx.r3.s64 = ctx.r11.s64 + -10736;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338152C"))) PPC_WEAK_FUNC(sub_8338152C);
PPC_FUNC_IMPL(__imp__sub_8338152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381530"))) PPC_WEAK_FUNC(sub_83381530);
PPC_FUNC_IMPL(__imp__sub_83381530) {
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
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,27864
	ctx.r4.s64 = ctx.r11.s64 + 27864;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// addi r30,r31,-15272
	ctx.r30.s64 = ctx.r31.s64 + -15272;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,27304
	ctx.r5.s64 = ctx.r8.s64 + 27304;
	// addi r4,r7,27352
	ctx.r4.s64 = ctx.r7.s64 + 27352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,27488
	ctx.r10.s64 = ctx.r10.s64 + 27488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338158C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// lis r9,-32143
	ctx.r9.s64 = -2106523648;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,27656
	ctx.r10.s64 = ctx.r10.s64 + 27656;
	// addi r9,r9,27752
	ctx.r9.s64 = ctx.r9.s64 + 27752;
	// stw r11,-15272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15272, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-10656
	ctx.r3.s64 = ctx.r3.s64 + -10656;
	// bl 0x82cb0ae8
	ctx.lr = 0x833815BC;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833815D4"))) PPC_WEAK_FUNC(sub_833815D4);
PPC_FUNC_IMPL(__imp__sub_833815D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833815D8"))) PPC_WEAK_FUNC(sub_833815D8);
PPC_FUNC_IMPL(__imp__sub_833815D8) {
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
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,28232
	ctx.r4.s64 = ctx.r11.s64 + 28232;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// addi r30,r31,-15364
	ctx.r30.s64 = ctx.r31.s64 + -15364;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,27472
	ctx.r5.s64 = ctx.r8.s64 + 27472;
	// addi r4,r7,27520
	ctx.r4.s64 = ctx.r7.s64 + 27520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,27952
	ctx.r10.s64 = ctx.r10.s64 + 27952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83381634;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// lis r9,-32143
	ctx.r9.s64 = -2106523648;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,28024
	ctx.r10.s64 = ctx.r10.s64 + 28024;
	// addi r9,r9,28120
	ctx.r9.s64 = ctx.r9.s64 + 28120;
	// stw r11,-15364(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15364, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-10568
	ctx.r3.s64 = ctx.r3.s64 + -10568;
	// bl 0x82cb0ae8
	ctx.lr = 0x83381664;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_8338167C"))) PPC_WEAK_FUNC(sub_8338167C);
PPC_FUNC_IMPL(__imp__sub_8338167C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381680"))) PPC_WEAK_FUNC(sub_83381680);
PPC_FUNC_IMPL(__imp__sub_83381680) {
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
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,28840
	ctx.r4.s64 = ctx.r11.s64 + 28840;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// addi r30,r31,-15456
	ctx.r30.s64 = ctx.r31.s64 + -15456;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,27304
	ctx.r5.s64 = ctx.r8.s64 + 27304;
	// addi r4,r7,27640
	ctx.r4.s64 = ctx.r7.s64 + 27640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,28424
	ctx.r10.s64 = ctx.r10.s64 + 28424;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833816DC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// lis r9,-32143
	ctx.r9.s64 = -2106523648;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,28600
	ctx.r10.s64 = ctx.r10.s64 + 28600;
	// addi r9,r9,28696
	ctx.r9.s64 = ctx.r9.s64 + 28696;
	// stw r11,-15456(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15456, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-10480
	ctx.r3.s64 = ctx.r3.s64 + -10480;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338170C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83381724"))) PPC_WEAK_FUNC(sub_83381724);
PPC_FUNC_IMPL(__imp__sub_83381724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381728"))) PPC_WEAK_FUNC(sub_83381728);
PPC_FUNC_IMPL(__imp__sub_83381728) {
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
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,29256
	ctx.r4.s64 = ctx.r11.s64 + 29256;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// addi r30,r31,-15548
	ctx.r30.s64 = ctx.r31.s64 + -15548;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,27472
	ctx.r5.s64 = ctx.r8.s64 + 27472;
	// addi r4,r7,27752
	ctx.r4.s64 = ctx.r7.s64 + 27752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,28944
	ctx.r10.s64 = ctx.r10.s64 + 28944;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83381784;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// lis r9,-32143
	ctx.r9.s64 = -2106523648;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,29016
	ctx.r10.s64 = ctx.r10.s64 + 29016;
	// addi r9,r9,29112
	ctx.r9.s64 = ctx.r9.s64 + 29112;
	// stw r11,-15548(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15548, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-10392
	ctx.r3.s64 = ctx.r3.s64 + -10392;
	// bl 0x82cb0ae8
	ctx.lr = 0x833817B4;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833817CC"))) PPC_WEAK_FUNC(sub_833817CC);
PPC_FUNC_IMPL(__imp__sub_833817CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833817D0"))) PPC_WEAK_FUNC(sub_833817D0);
PPC_FUNC_IMPL(__imp__sub_833817D0) {
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
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,29872
	ctx.r4.s64 = ctx.r11.s64 + 29872;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// addi r30,r31,-15640
	ctx.r30.s64 = ctx.r31.s64 + -15640;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,27304
	ctx.r5.s64 = ctx.r8.s64 + 27304;
	// addi r4,r7,27864
	ctx.r4.s64 = ctx.r7.s64 + 27864;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,29464
	ctx.r10.s64 = ctx.r10.s64 + 29464;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338182C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// lis r9,-32143
	ctx.r9.s64 = -2106523648;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,29632
	ctx.r10.s64 = ctx.r10.s64 + 29632;
	// addi r9,r9,29728
	ctx.r9.s64 = ctx.r9.s64 + 29728;
	// stw r11,-15640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15640, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-10304
	ctx.r3.s64 = ctx.r3.s64 + -10304;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338185C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83381874"))) PPC_WEAK_FUNC(sub_83381874);
PPC_FUNC_IMPL(__imp__sub_83381874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381878"))) PPC_WEAK_FUNC(sub_83381878);
PPC_FUNC_IMPL(__imp__sub_83381878) {
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
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,30272
	ctx.r4.s64 = ctx.r11.s64 + 30272;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// addi r30,r31,-15732
	ctx.r30.s64 = ctx.r31.s64 + -15732;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,27472
	ctx.r5.s64 = ctx.r8.s64 + 27472;
	// addi r4,r7,27992
	ctx.r4.s64 = ctx.r7.s64 + 27992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,29960
	ctx.r10.s64 = ctx.r10.s64 + 29960;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x833818D4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// lis r9,-32143
	ctx.r9.s64 = -2106523648;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,30032
	ctx.r10.s64 = ctx.r10.s64 + 30032;
	// addi r9,r9,30128
	ctx.r9.s64 = ctx.r9.s64 + 30128;
	// stw r11,-15732(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15732, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-10216
	ctx.r3.s64 = ctx.r3.s64 + -10216;
	// bl 0x82cb0ae8
	ctx.lr = 0x83381904;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_8338191C"))) PPC_WEAK_FUNC(sub_8338191C);
PPC_FUNC_IMPL(__imp__sub_8338191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381920"))) PPC_WEAK_FUNC(sub_83381920);
PPC_FUNC_IMPL(__imp__sub_83381920) {
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
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,30632
	ctx.r4.s64 = ctx.r11.s64 + 30632;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// addi r30,r31,-15824
	ctx.r30.s64 = ctx.r31.s64 + -15824;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,28112
	ctx.r5.s64 = ctx.r8.s64 + 28112;
	// addi r4,r7,28168
	ctx.r4.s64 = ctx.r7.s64 + 28168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,30464
	ctx.r10.s64 = ctx.r10.s64 + 30464;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338197C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// lis r9,-32108
	ctx.r9.s64 = -2104229888;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,30536
	ctx.r10.s64 = ctx.r10.s64 + 30536;
	// addi r9,r9,19864
	ctx.r9.s64 = ctx.r9.s64 + 19864;
	// stw r11,-15824(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15824, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-10128
	ctx.r3.s64 = ctx.r3.s64 + -10128;
	// bl 0x82cb0ae8
	ctx.lr = 0x833819AC;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833819C4"))) PPC_WEAK_FUNC(sub_833819C4);
PPC_FUNC_IMPL(__imp__sub_833819C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833819C8"))) PPC_WEAK_FUNC(sub_833819C8);
PPC_FUNC_IMPL(__imp__sub_833819C8) {
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
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,30976
	ctx.r4.s64 = ctx.r11.s64 + 30976;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// addi r30,r31,-15916
	ctx.r30.s64 = ctx.r31.s64 + -15916;
	// addi r6,r9,28260
	ctx.r6.s64 = ctx.r9.s64 + 28260;
	// addi r5,r8,28292
	ctx.r5.s64 = ctx.r8.s64 + 28292;
	// addi r4,r7,28360
	ctx.r4.s64 = ctx.r7.s64 + 28360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,30784
	ctx.r10.s64 = ctx.r10.s64 + 30784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83381A24;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// lis r9,-32143
	ctx.r9.s64 = -2106523648;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,30856
	ctx.r10.s64 = ctx.r10.s64 + 30856;
	// addi r9,r9,30952
	ctx.r9.s64 = ctx.r9.s64 + 30952;
	// stw r11,-15916(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15916, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-10040
	ctx.r3.s64 = ctx.r3.s64 + -10040;
	// bl 0x82cb0ae8
	ctx.lr = 0x83381A54;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83381A6C"))) PPC_WEAK_FUNC(sub_83381A6C);
PPC_FUNC_IMPL(__imp__sub_83381A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381A70"))) PPC_WEAK_FUNC(sub_83381A70);
PPC_FUNC_IMPL(__imp__sub_83381A70) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-31944
	ctx.r4.s64 = ctx.r11.s64 + -31944;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r30,r31,-16008
	ctx.r30.s64 = ctx.r31.s64 + -16008;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,28292
	ctx.r5.s64 = ctx.r8.s64 + 28292;
	// addi r4,r7,28488
	ctx.r4.s64 = ctx.r7.s64 + 28488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-32120
	ctx.r10.s64 = ctx.r10.s64 + -32120;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83381ACC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-32048
	ctx.r10.s64 = ctx.r10.s64 + -32048;
	// addi r9,r9,-31952
	ctx.r9.s64 = ctx.r9.s64 + -31952;
	// stw r11,-16008(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16008, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-9952
	ctx.r3.s64 = ctx.r3.s64 + -9952;
	// bl 0x82cb0ae8
	ctx.lr = 0x83381AFC;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83381B14"))) PPC_WEAK_FUNC(sub_83381B14);
PPC_FUNC_IMPL(__imp__sub_83381B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381B18"))) PPC_WEAK_FUNC(sub_83381B18);
PPC_FUNC_IMPL(__imp__sub_83381B18) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-29304
	ctx.r4.s64 = ctx.r11.s64 + -29304;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r30,r31,-16100
	ctx.r30.s64 = ctx.r31.s64 + -16100;
	// addi r6,r9,28260
	ctx.r6.s64 = ctx.r9.s64 + 28260;
	// addi r5,r8,28292
	ctx.r5.s64 = ctx.r8.s64 + 28292;
	// addi r4,r7,28624
	ctx.r4.s64 = ctx.r7.s64 + 28624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-29504
	ctx.r10.s64 = ctx.r10.s64 + -29504;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83381B74;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-29432
	ctx.r10.s64 = ctx.r10.s64 + -29432;
	// addi r9,r9,-29336
	ctx.r9.s64 = ctx.r9.s64 + -29336;
	// stw r11,-16100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16100, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-9864
	ctx.r3.s64 = ctx.r3.s64 + -9864;
	// bl 0x82cb0ae8
	ctx.lr = 0x83381BA4;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83381BBC"))) PPC_WEAK_FUNC(sub_83381BBC);
PPC_FUNC_IMPL(__imp__sub_83381BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381BC0"))) PPC_WEAK_FUNC(sub_83381BC0);
PPC_FUNC_IMPL(__imp__sub_83381BC0) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-26680
	ctx.r4.s64 = ctx.r11.s64 + -26680;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r30,r31,-16192
	ctx.r30.s64 = ctx.r31.s64 + -16192;
	// addi r6,r9,28752
	ctx.r6.s64 = ctx.r9.s64 + 28752;
	// addi r5,r8,28292
	ctx.r5.s64 = ctx.r8.s64 + 28292;
	// addi r4,r7,28776
	ctx.r4.s64 = ctx.r7.s64 + 28776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-26864
	ctx.r10.s64 = ctx.r10.s64 + -26864;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83381C1C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-26792
	ctx.r10.s64 = ctx.r10.s64 + -26792;
	// addi r9,r9,-26696
	ctx.r9.s64 = ctx.r9.s64 + -26696;
	// stw r11,-16192(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16192, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-9776
	ctx.r3.s64 = ctx.r3.s64 + -9776;
	// bl 0x82cb0ae8
	ctx.lr = 0x83381C4C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83381C64"))) PPC_WEAK_FUNC(sub_83381C64);
PPC_FUNC_IMPL(__imp__sub_83381C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381C68"))) PPC_WEAK_FUNC(sub_83381C68);
PPC_FUNC_IMPL(__imp__sub_83381C68) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-24048
	ctx.r4.s64 = ctx.r11.s64 + -24048;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r30,r31,-16284
	ctx.r30.s64 = ctx.r31.s64 + -16284;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,28292
	ctx.r5.s64 = ctx.r8.s64 + 28292;
	// addi r4,r7,28912
	ctx.r4.s64 = ctx.r7.s64 + 28912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-24240
	ctx.r10.s64 = ctx.r10.s64 + -24240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83381CC4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-24168
	ctx.r10.s64 = ctx.r10.s64 + -24168;
	// addi r9,r9,-24072
	ctx.r9.s64 = ctx.r9.s64 + -24072;
	// stw r11,-16284(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16284, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-9688
	ctx.r3.s64 = ctx.r3.s64 + -9688;
	// bl 0x82cb0ae8
	ctx.lr = 0x83381CF4;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83381D0C"))) PPC_WEAK_FUNC(sub_83381D0C);
PPC_FUNC_IMPL(__imp__sub_83381D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381D10"))) PPC_WEAK_FUNC(sub_83381D10);
PPC_FUNC_IMPL(__imp__sub_83381D10) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-21440
	ctx.r4.s64 = ctx.r11.s64 + -21440;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r30,r31,-16376
	ctx.r30.s64 = ctx.r31.s64 + -16376;
	// addi r6,r9,28260
	ctx.r6.s64 = ctx.r9.s64 + 28260;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,29128
	ctx.r4.s64 = ctx.r7.s64 + 29128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-21608
	ctx.r10.s64 = ctx.r10.s64 + -21608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83381D6C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-21536
	ctx.r10.s64 = ctx.r10.s64 + -21536;
	// addi r9,r9,-21328
	ctx.r9.s64 = ctx.r9.s64 + -21328;
	// stw r11,-16376(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16376, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-9600
	ctx.r3.s64 = ctx.r3.s64 + -9600;
	// bl 0x82cb0ae8
	ctx.lr = 0x83381D9C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83381DB4"))) PPC_WEAK_FUNC(sub_83381DB4);
PPC_FUNC_IMPL(__imp__sub_83381DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381DB8"))) PPC_WEAK_FUNC(sub_83381DB8);
PPC_FUNC_IMPL(__imp__sub_83381DB8) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-18360
	ctx.r4.s64 = ctx.r11.s64 + -18360;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r30,r31,-16468
	ctx.r30.s64 = ctx.r31.s64 + -16468;
	// addi r6,r9,28260
	ctx.r6.s64 = ctx.r9.s64 + 28260;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,29272
	ctx.r4.s64 = ctx.r7.s64 + 29272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-18528
	ctx.r10.s64 = ctx.r10.s64 + -18528;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83381E14;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-18456
	ctx.r10.s64 = ctx.r10.s64 + -18456;
	// addi r9,r9,-18248
	ctx.r9.s64 = ctx.r9.s64 + -18248;
	// stw r11,-16468(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16468, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-9512
	ctx.r3.s64 = ctx.r3.s64 + -9512;
	// bl 0x82cb0ae8
	ctx.lr = 0x83381E44;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83381E5C"))) PPC_WEAK_FUNC(sub_83381E5C);
PPC_FUNC_IMPL(__imp__sub_83381E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381E60"))) PPC_WEAK_FUNC(sub_83381E60);
PPC_FUNC_IMPL(__imp__sub_83381E60) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-15280
	ctx.r4.s64 = ctx.r11.s64 + -15280;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r30,r31,-16560
	ctx.r30.s64 = ctx.r31.s64 + -16560;
	// addi r6,r9,28260
	ctx.r6.s64 = ctx.r9.s64 + 28260;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,29424
	ctx.r4.s64 = ctx.r7.s64 + 29424;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-15448
	ctx.r10.s64 = ctx.r10.s64 + -15448;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83381EBC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-15376
	ctx.r10.s64 = ctx.r10.s64 + -15376;
	// addi r9,r9,-15168
	ctx.r9.s64 = ctx.r9.s64 + -15168;
	// stw r11,-16560(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16560, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-9424
	ctx.r3.s64 = ctx.r3.s64 + -9424;
	// bl 0x82cb0ae8
	ctx.lr = 0x83381EEC;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83381F04"))) PPC_WEAK_FUNC(sub_83381F04);
PPC_FUNC_IMPL(__imp__sub_83381F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381F08"))) PPC_WEAK_FUNC(sub_83381F08);
PPC_FUNC_IMPL(__imp__sub_83381F08) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-12200
	ctx.r4.s64 = ctx.r11.s64 + -12200;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r30,r31,-16652
	ctx.r30.s64 = ctx.r31.s64 + -16652;
	// addi r6,r9,28752
	ctx.r6.s64 = ctx.r9.s64 + 28752;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,29568
	ctx.r4.s64 = ctx.r7.s64 + 29568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-12368
	ctx.r10.s64 = ctx.r10.s64 + -12368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83381F64;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-12296
	ctx.r10.s64 = ctx.r10.s64 + -12296;
	// addi r9,r9,-12088
	ctx.r9.s64 = ctx.r9.s64 + -12088;
	// stw r11,-16652(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16652, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-9336
	ctx.r3.s64 = ctx.r3.s64 + -9336;
	// bl 0x82cb0ae8
	ctx.lr = 0x83381F94;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83381FAC"))) PPC_WEAK_FUNC(sub_83381FAC);
PPC_FUNC_IMPL(__imp__sub_83381FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83381FB0"))) PPC_WEAK_FUNC(sub_83381FB0);
PPC_FUNC_IMPL(__imp__sub_83381FB0) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-9136
	ctx.r4.s64 = ctx.r11.s64 + -9136;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r30,r31,-16744
	ctx.r30.s64 = ctx.r31.s64 + -16744;
	// addi r6,r9,28752
	ctx.r6.s64 = ctx.r9.s64 + 28752;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,29720
	ctx.r4.s64 = ctx.r7.s64 + 29720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-9304
	ctx.r10.s64 = ctx.r10.s64 + -9304;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338200C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-9232
	ctx.r10.s64 = ctx.r10.s64 + -9232;
	// addi r9,r9,-9024
	ctx.r9.s64 = ctx.r9.s64 + -9024;
	// stw r11,-16744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16744, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-9248
	ctx.r3.s64 = ctx.r3.s64 + -9248;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338203C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83382054"))) PPC_WEAK_FUNC(sub_83382054);
PPC_FUNC_IMPL(__imp__sub_83382054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382058"))) PPC_WEAK_FUNC(sub_83382058);
PPC_FUNC_IMPL(__imp__sub_83382058) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-6072
	ctx.r4.s64 = ctx.r11.s64 + -6072;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r30,r31,-16836
	ctx.r30.s64 = ctx.r31.s64 + -16836;
	// addi r6,r9,28752
	ctx.r6.s64 = ctx.r9.s64 + 28752;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,29880
	ctx.r4.s64 = ctx.r7.s64 + 29880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-6240
	ctx.r10.s64 = ctx.r10.s64 + -6240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x833820B4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-6168
	ctx.r10.s64 = ctx.r10.s64 + -6168;
	// addi r9,r9,-5960
	ctx.r9.s64 = ctx.r9.s64 + -5960;
	// stw r11,-16836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16836, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-9160
	ctx.r3.s64 = ctx.r3.s64 + -9160;
	// bl 0x82cb0ae8
	ctx.lr = 0x833820E4;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833820FC"))) PPC_WEAK_FUNC(sub_833820FC);
PPC_FUNC_IMPL(__imp__sub_833820FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382100"))) PPC_WEAK_FUNC(sub_83382100);
PPC_FUNC_IMPL(__imp__sub_83382100) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-3008
	ctx.r4.s64 = ctx.r11.s64 + -3008;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r30,r31,-16928
	ctx.r30.s64 = ctx.r31.s64 + -16928;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,30032
	ctx.r4.s64 = ctx.r7.s64 + 30032;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-3176
	ctx.r10.s64 = ctx.r10.s64 + -3176;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338215C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-3104
	ctx.r10.s64 = ctx.r10.s64 + -3104;
	// addi r9,r9,-2896
	ctx.r9.s64 = ctx.r9.s64 + -2896;
	// stw r11,-16928(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16928, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-9072
	ctx.r3.s64 = ctx.r3.s64 + -9072;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338218C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833821A4"))) PPC_WEAK_FUNC(sub_833821A4);
PPC_FUNC_IMPL(__imp__sub_833821A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833821A8"))) PPC_WEAK_FUNC(sub_833821A8);
PPC_FUNC_IMPL(__imp__sub_833821A8) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r30,r31,-17020
	ctx.r30.s64 = ctx.r31.s64 + -17020;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,30184
	ctx.r4.s64 = ctx.r7.s64 + 30184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-104
	ctx.r10.s64 = ctx.r10.s64 + -104;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83382204;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// addi r9,r9,176
	ctx.r9.s64 = ctx.r9.s64 + 176;
	// stw r11,-17020(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17020, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-8984
	ctx.r3.s64 = ctx.r3.s64 + -8984;
	// bl 0x82cb0ae8
	ctx.lr = 0x83382234;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_8338224C"))) PPC_WEAK_FUNC(sub_8338224C);
PPC_FUNC_IMPL(__imp__sub_8338224C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382250"))) PPC_WEAK_FUNC(sub_83382250);
PPC_FUNC_IMPL(__imp__sub_83382250) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,3136
	ctx.r4.s64 = ctx.r11.s64 + 3136;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r30,r31,-17112
	ctx.r30.s64 = ctx.r31.s64 + -17112;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,30344
	ctx.r4.s64 = ctx.r7.s64 + 30344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,2968
	ctx.r10.s64 = ctx.r10.s64 + 2968;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x833822AC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,3040
	ctx.r10.s64 = ctx.r10.s64 + 3040;
	// addi r9,r9,3248
	ctx.r9.s64 = ctx.r9.s64 + 3248;
	// stw r11,-17112(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17112, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-8896
	ctx.r3.s64 = ctx.r3.s64 + -8896;
	// bl 0x82cb0ae8
	ctx.lr = 0x833822DC;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833822F4"))) PPC_WEAK_FUNC(sub_833822F4);
PPC_FUNC_IMPL(__imp__sub_833822F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833822F8"))) PPC_WEAK_FUNC(sub_833822F8);
PPC_FUNC_IMPL(__imp__sub_833822F8) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,6208
	ctx.r4.s64 = ctx.r11.s64 + 6208;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r30,r31,-17204
	ctx.r30.s64 = ctx.r31.s64 + -17204;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,30496
	ctx.r5.s64 = ctx.r8.s64 + 30496;
	// addi r4,r7,30552
	ctx.r4.s64 = ctx.r7.s64 + 30552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,6040
	ctx.r10.s64 = ctx.r10.s64 + 6040;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83382354;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32108
	ctx.r9.s64 = -2104229888;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,6112
	ctx.r10.s64 = ctx.r10.s64 + 6112;
	// addi r9,r9,26232
	ctx.r9.s64 = ctx.r9.s64 + 26232;
	// stw r11,-17204(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17204, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-8808
	ctx.r3.s64 = ctx.r3.s64 + -8808;
	// bl 0x82cb0ae8
	ctx.lr = 0x83382384;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_8338239C"))) PPC_WEAK_FUNC(sub_8338239C);
PPC_FUNC_IMPL(__imp__sub_8338239C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833823A0"))) PPC_WEAK_FUNC(sub_833823A0);
PPC_FUNC_IMPL(__imp__sub_833823A0) {
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
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,-7384
	ctx.r4.s64 = ctx.r11.s64 + -7384;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r30,r31,-11532
	ctx.r30.s64 = ctx.r31.s64 + -11532;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-17264
	ctx.r5.s64 = ctx.r8.s64 + -17264;
	// addi r4,r7,-17200
	ctx.r4.s64 = ctx.r7.s64 + -17200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-7560
	ctx.r10.s64 = ctx.r10.s64 + -7560;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x833823FC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-7488
	ctx.r10.s64 = ctx.r10.s64 + -7488;
	// addi r9,r9,-7392
	ctx.r9.s64 = ctx.r9.s64 + -7392;
	// stw r11,-11532(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11532, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-8432
	ctx.r3.s64 = ctx.r3.s64 + -8432;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338242C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83382444"))) PPC_WEAK_FUNC(sub_83382444);
PPC_FUNC_IMPL(__imp__sub_83382444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382448"))) PPC_WEAK_FUNC(sub_83382448);
PPC_FUNC_IMPL(__imp__sub_83382448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-8344
	ctx.r3.s64 = ctx.r11.s64 + -8344;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83382454"))) PPC_WEAK_FUNC(sub_83382454);
PPC_FUNC_IMPL(__imp__sub_83382454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382458"))) PPC_WEAK_FUNC(sub_83382458);
PPC_FUNC_IMPL(__imp__sub_83382458) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,-16600
	ctx.r4.s64 = ctx.r11.s64 + -16600;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r30,r31,-11440
	ctx.r30.s64 = ctx.r31.s64 + -11440;
	// addi r6,r9,-19348
	ctx.r6.s64 = ctx.r9.s64 + -19348;
	// addi r5,r8,-4800
	ctx.r5.s64 = ctx.r8.s64 + -4800;
	// addi r4,r7,-4764
	ctx.r4.s64 = ctx.r7.s64 + -4764;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-17056
	ctx.r10.s64 = ctx.r10.s64 + -17056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833824B4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-16896
	ctx.r10.s64 = ctx.r10.s64 + -16896;
	// addi r9,r9,-16608
	ctx.r9.s64 = ctx.r9.s64 + -16608;
	// stw r11,-11440(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11440, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-8328
	ctx.r3.s64 = ctx.r3.s64 + -8328;
	// bl 0x82cb0ae8
	ctx.lr = 0x833824E4;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833824FC"))) PPC_WEAK_FUNC(sub_833824FC);
PPC_FUNC_IMPL(__imp__sub_833824FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382500"))) PPC_WEAK_FUNC(sub_83382500);
PPC_FUNC_IMPL(__imp__sub_83382500) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,-14848
	ctx.r4.s64 = ctx.r11.s64 + -14848;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r30,r31,-11348
	ctx.r30.s64 = ctx.r31.s64 + -11348;
	// addi r6,r9,-19236
	ctx.r6.s64 = ctx.r9.s64 + -19236;
	// addi r5,r8,-4800
	ctx.r5.s64 = ctx.r8.s64 + -4800;
	// addi r4,r7,-4540
	ctx.r4.s64 = ctx.r7.s64 + -4540;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-16504
	ctx.r10.s64 = ctx.r10.s64 + -16504;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338255C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-16432
	ctx.r10.s64 = ctx.r10.s64 + -16432;
	// addi r9,r9,-14856
	ctx.r9.s64 = ctx.r9.s64 + -14856;
	// stw r11,-11348(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11348, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-8240
	ctx.r3.s64 = ctx.r3.s64 + -8240;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338258C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833825A4"))) PPC_WEAK_FUNC(sub_833825A4);
PPC_FUNC_IMPL(__imp__sub_833825A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833825A8"))) PPC_WEAK_FUNC(sub_833825A8);
PPC_FUNC_IMPL(__imp__sub_833825A8) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,-14848
	ctx.r4.s64 = ctx.r11.s64 + -14848;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r30,r31,-11256
	ctx.r30.s64 = ctx.r31.s64 + -11256;
	// addi r6,r9,-4488
	ctx.r6.s64 = ctx.r9.s64 + -4488;
	// addi r5,r8,-4800
	ctx.r5.s64 = ctx.r8.s64 + -4800;
	// addi r4,r7,-4408
	ctx.r4.s64 = ctx.r7.s64 + -4408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-14752
	ctx.r10.s64 = ctx.r10.s64 + -14752;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83382604;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-14680
	ctx.r10.s64 = ctx.r10.s64 + -14680;
	// addi r9,r9,-14856
	ctx.r9.s64 = ctx.r9.s64 + -14856;
	// stw r11,-11256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11256, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-8152
	ctx.r3.s64 = ctx.r3.s64 + -8152;
	// bl 0x82cb0ae8
	ctx.lr = 0x83382634;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_8338264C"))) PPC_WEAK_FUNC(sub_8338264C);
PPC_FUNC_IMPL(__imp__sub_8338264C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382650"))) PPC_WEAK_FUNC(sub_83382650);
PPC_FUNC_IMPL(__imp__sub_83382650) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31887
	ctx.r10.s64 = -2089746432;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r9,r10,25536
	ctx.r9.s64 = ctx.r10.s64 + 25536;
	// addi r11,r11,-6368
	ctx.r11.s64 = ctx.r11.s64 + -6368;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83382668"))) PPC_WEAK_FUNC(sub_83382668);
PPC_FUNC_IMPL(__imp__sub_83382668) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,25768
	ctx.r4.s64 = ctx.r11.s64 + 25768;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r30,r31,-13248
	ctx.r30.s64 = ctx.r31.s64 + -13248;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-2984
	ctx.r5.s64 = ctx.r8.s64 + -2984;
	// addi r4,r7,-2920
	ctx.r4.s64 = ctx.r7.s64 + -2920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,25392
	ctx.r10.s64 = ctx.r10.s64 + 25392;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833826C4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,25560
	ctx.r10.s64 = ctx.r10.s64 + 25560;
	// addi r9,r9,25656
	ctx.r9.s64 = ctx.r9.s64 + 25656;
	// stw r11,-13248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13248, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-8032
	ctx.r3.s64 = ctx.r3.s64 + -8032;
	// bl 0x82cb0ae8
	ctx.lr = 0x833826F4;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_8338270C"))) PPC_WEAK_FUNC(sub_8338270C);
PPC_FUNC_IMPL(__imp__sub_8338270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382710"))) PPC_WEAK_FUNC(sub_83382710);
PPC_FUNC_IMPL(__imp__sub_83382710) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,26136
	ctx.r4.s64 = ctx.r11.s64 + 26136;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r30,r31,-13340
	ctx.r30.s64 = ctx.r31.s64 + -13340;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-2788
	ctx.r5.s64 = ctx.r8.s64 + -2788;
	// addi r4,r7,-2728
	ctx.r4.s64 = ctx.r7.s64 + -2728;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,25856
	ctx.r10.s64 = ctx.r10.s64 + 25856;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338276C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,25928
	ctx.r10.s64 = ctx.r10.s64 + 25928;
	// addi r9,r9,26024
	ctx.r9.s64 = ctx.r9.s64 + 26024;
	// stw r11,-13340(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13340, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-7944
	ctx.r3.s64 = ctx.r3.s64 + -7944;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338279C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833827B4"))) PPC_WEAK_FUNC(sub_833827B4);
PPC_FUNC_IMPL(__imp__sub_833827B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833827B8"))) PPC_WEAK_FUNC(sub_833827B8);
PPC_FUNC_IMPL(__imp__sub_833827B8) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,26744
	ctx.r4.s64 = ctx.r11.s64 + 26744;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r30,r31,-13432
	ctx.r30.s64 = ctx.r31.s64 + -13432;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-2984
	ctx.r5.s64 = ctx.r8.s64 + -2984;
	// addi r4,r7,-2592
	ctx.r4.s64 = ctx.r7.s64 + -2592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,26328
	ctx.r10.s64 = ctx.r10.s64 + 26328;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83382814;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,26504
	ctx.r10.s64 = ctx.r10.s64 + 26504;
	// addi r9,r9,26600
	ctx.r9.s64 = ctx.r9.s64 + 26600;
	// stw r11,-13432(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13432, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-7856
	ctx.r3.s64 = ctx.r3.s64 + -7856;
	// bl 0x82cb0ae8
	ctx.lr = 0x83382844;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_8338285C"))) PPC_WEAK_FUNC(sub_8338285C);
PPC_FUNC_IMPL(__imp__sub_8338285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382860"))) PPC_WEAK_FUNC(sub_83382860);
PPC_FUNC_IMPL(__imp__sub_83382860) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,27160
	ctx.r4.s64 = ctx.r11.s64 + 27160;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r30,r31,-13524
	ctx.r30.s64 = ctx.r31.s64 + -13524;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-2788
	ctx.r5.s64 = ctx.r8.s64 + -2788;
	// addi r4,r7,-2464
	ctx.r4.s64 = ctx.r7.s64 + -2464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,26848
	ctx.r10.s64 = ctx.r10.s64 + 26848;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x833828BC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,26920
	ctx.r10.s64 = ctx.r10.s64 + 26920;
	// addi r9,r9,27016
	ctx.r9.s64 = ctx.r9.s64 + 27016;
	// stw r11,-13524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13524, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-7768
	ctx.r3.s64 = ctx.r3.s64 + -7768;
	// bl 0x82cb0ae8
	ctx.lr = 0x833828EC;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83382904"))) PPC_WEAK_FUNC(sub_83382904);
PPC_FUNC_IMPL(__imp__sub_83382904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382908"))) PPC_WEAK_FUNC(sub_83382908);
PPC_FUNC_IMPL(__imp__sub_83382908) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,27776
	ctx.r4.s64 = ctx.r11.s64 + 27776;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r30,r31,-13616
	ctx.r30.s64 = ctx.r31.s64 + -13616;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-2984
	ctx.r5.s64 = ctx.r8.s64 + -2984;
	// addi r4,r7,-2336
	ctx.r4.s64 = ctx.r7.s64 + -2336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,27368
	ctx.r10.s64 = ctx.r10.s64 + 27368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83382964;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,27536
	ctx.r10.s64 = ctx.r10.s64 + 27536;
	// addi r9,r9,27632
	ctx.r9.s64 = ctx.r9.s64 + 27632;
	// stw r11,-13616(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13616, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-7680
	ctx.r3.s64 = ctx.r3.s64 + -7680;
	// bl 0x82cb0ae8
	ctx.lr = 0x83382994;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833829AC"))) PPC_WEAK_FUNC(sub_833829AC);
PPC_FUNC_IMPL(__imp__sub_833829AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833829B0"))) PPC_WEAK_FUNC(sub_833829B0);
PPC_FUNC_IMPL(__imp__sub_833829B0) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,28176
	ctx.r4.s64 = ctx.r11.s64 + 28176;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r30,r31,-13708
	ctx.r30.s64 = ctx.r31.s64 + -13708;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-2788
	ctx.r5.s64 = ctx.r8.s64 + -2788;
	// addi r4,r7,-2200
	ctx.r4.s64 = ctx.r7.s64 + -2200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,27864
	ctx.r10.s64 = ctx.r10.s64 + 27864;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83382A0C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,27936
	ctx.r10.s64 = ctx.r10.s64 + 27936;
	// addi r9,r9,28032
	ctx.r9.s64 = ctx.r9.s64 + 28032;
	// stw r11,-13708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13708, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-7592
	ctx.r3.s64 = ctx.r3.s64 + -7592;
	// bl 0x82cb0ae8
	ctx.lr = 0x83382A3C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83382A54"))) PPC_WEAK_FUNC(sub_83382A54);
PPC_FUNC_IMPL(__imp__sub_83382A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382A58"))) PPC_WEAK_FUNC(sub_83382A58);
PPC_FUNC_IMPL(__imp__sub_83382A58) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,28672
	ctx.r4.s64 = ctx.r11.s64 + 28672;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r30,r31,-13800
	ctx.r30.s64 = ctx.r31.s64 + -13800;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,28112
	ctx.r5.s64 = ctx.r8.s64 + 28112;
	// addi r4,r7,-2064
	ctx.r4.s64 = ctx.r7.s64 + -2064;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,28368
	ctx.r10.s64 = ctx.r10.s64 + 28368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83382AB4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32108
	ctx.r9.s64 = -2104229888;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,28552
	ctx.r10.s64 = ctx.r10.s64 + 28552;
	// addi r9,r9,19864
	ctx.r9.s64 = ctx.r9.s64 + 19864;
	// stw r11,-13800(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13800, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-7504
	ctx.r3.s64 = ctx.r3.s64 + -7504;
	// bl 0x82cb0ae8
	ctx.lr = 0x83382AE4;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83382AFC"))) PPC_WEAK_FUNC(sub_83382AFC);
PPC_FUNC_IMPL(__imp__sub_83382AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382B00"))) PPC_WEAK_FUNC(sub_83382B00);
PPC_FUNC_IMPL(__imp__sub_83382B00) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,28888
	ctx.r4.s64 = ctx.r11.s64 + 28888;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r30,r31,-13892
	ctx.r30.s64 = ctx.r31.s64 + -13892;
	// addi r6,r9,28260
	ctx.r6.s64 = ctx.r9.s64 + 28260;
	// addi r5,r8,28292
	ctx.r5.s64 = ctx.r8.s64 + 28292;
	// addi r4,r7,-1960
	ctx.r4.s64 = ctx.r7.s64 + -1960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,28696
	ctx.r10.s64 = ctx.r10.s64 + 28696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83382B5C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,28768
	ctx.r10.s64 = ctx.r10.s64 + 28768;
	// addi r9,r9,28864
	ctx.r9.s64 = ctx.r9.s64 + 28864;
	// stw r11,-13892(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13892, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-7416
	ctx.r3.s64 = ctx.r3.s64 + -7416;
	// bl 0x82cb0ae8
	ctx.lr = 0x83382B8C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83382BA4"))) PPC_WEAK_FUNC(sub_83382BA4);
PPC_FUNC_IMPL(__imp__sub_83382BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382BA8"))) PPC_WEAK_FUNC(sub_83382BA8);
PPC_FUNC_IMPL(__imp__sub_83382BA8) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,29856
	ctx.r4.s64 = ctx.r11.s64 + 29856;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r30,r31,-13984
	ctx.r30.s64 = ctx.r31.s64 + -13984;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,28292
	ctx.r5.s64 = ctx.r8.s64 + 28292;
	// addi r4,r7,-1824
	ctx.r4.s64 = ctx.r7.s64 + -1824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,29680
	ctx.r10.s64 = ctx.r10.s64 + 29680;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83382C04;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,29752
	ctx.r10.s64 = ctx.r10.s64 + 29752;
	// addi r9,r9,29848
	ctx.r9.s64 = ctx.r9.s64 + 29848;
	// stw r11,-13984(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13984, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-7328
	ctx.r3.s64 = ctx.r3.s64 + -7328;
	// bl 0x82cb0ae8
	ctx.lr = 0x83382C34;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83382C4C"))) PPC_WEAK_FUNC(sub_83382C4C);
PPC_FUNC_IMPL(__imp__sub_83382C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382C50"))) PPC_WEAK_FUNC(sub_83382C50);
PPC_FUNC_IMPL(__imp__sub_83382C50) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,30848
	ctx.r4.s64 = ctx.r11.s64 + 30848;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r30,r31,-14076
	ctx.r30.s64 = ctx.r31.s64 + -14076;
	// addi r6,r9,28260
	ctx.r6.s64 = ctx.r9.s64 + 28260;
	// addi r5,r8,28292
	ctx.r5.s64 = ctx.r8.s64 + 28292;
	// addi r4,r7,-1680
	ctx.r4.s64 = ctx.r7.s64 + -1680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,30648
	ctx.r10.s64 = ctx.r10.s64 + 30648;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83382CAC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,30720
	ctx.r10.s64 = ctx.r10.s64 + 30720;
	// addi r9,r9,30816
	ctx.r9.s64 = ctx.r9.s64 + 30816;
	// stw r11,-14076(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14076, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-7240
	ctx.r3.s64 = ctx.r3.s64 + -7240;
	// bl 0x82cb0ae8
	ctx.lr = 0x83382CDC;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83382CF4"))) PPC_WEAK_FUNC(sub_83382CF4);
PPC_FUNC_IMPL(__imp__sub_83382CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382CF8"))) PPC_WEAK_FUNC(sub_83382CF8);
PPC_FUNC_IMPL(__imp__sub_83382CF8) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,31824
	ctx.r4.s64 = ctx.r11.s64 + 31824;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r30,r31,-14168
	ctx.r30.s64 = ctx.r31.s64 + -14168;
	// addi r6,r9,28752
	ctx.r6.s64 = ctx.r9.s64 + 28752;
	// addi r5,r8,28292
	ctx.r5.s64 = ctx.r8.s64 + 28292;
	// addi r4,r7,-1536
	ctx.r4.s64 = ctx.r7.s64 + -1536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,31640
	ctx.r10.s64 = ctx.r10.s64 + 31640;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83382D54;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,31712
	ctx.r10.s64 = ctx.r10.s64 + 31712;
	// addi r9,r9,31808
	ctx.r9.s64 = ctx.r9.s64 + 31808;
	// stw r11,-14168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14168, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-7152
	ctx.r3.s64 = ctx.r3.s64 + -7152;
	// bl 0x82cb0ae8
	ctx.lr = 0x83382D84;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83382D9C"))) PPC_WEAK_FUNC(sub_83382D9C);
PPC_FUNC_IMPL(__imp__sub_83382D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382DA0"))) PPC_WEAK_FUNC(sub_83382DA0);
PPC_FUNC_IMPL(__imp__sub_83382DA0) {
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
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-32728
	ctx.r4.s64 = ctx.r11.s64 + -32728;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r30,r31,-14260
	ctx.r30.s64 = ctx.r31.s64 + -14260;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,28292
	ctx.r5.s64 = ctx.r8.s64 + 28292;
	// addi r4,r7,-1384
	ctx.r4.s64 = ctx.r7.s64 + -1384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,32616
	ctx.r10.s64 = ctx.r10.s64 + 32616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83382DFC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,32688
	ctx.r10.s64 = ctx.r10.s64 + 32688;
	// addi r9,r9,-32752
	ctx.r9.s64 = ctx.r9.s64 + -32752;
	// stw r11,-14260(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14260, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-7064
	ctx.r3.s64 = ctx.r3.s64 + -7064;
	// bl 0x82cb0ae8
	ctx.lr = 0x83382E2C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83382E44"))) PPC_WEAK_FUNC(sub_83382E44);
PPC_FUNC_IMPL(__imp__sub_83382E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382E48"))) PPC_WEAK_FUNC(sub_83382E48);
PPC_FUNC_IMPL(__imp__sub_83382E48) {
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
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-31744
	ctx.r4.s64 = ctx.r11.s64 + -31744;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r30,r31,-14352
	ctx.r30.s64 = ctx.r31.s64 + -14352;
	// addi r6,r9,28260
	ctx.r6.s64 = ctx.r9.s64 + 28260;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,-1232
	ctx.r4.s64 = ctx.r7.s64 + -1232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-31936
	ctx.r10.s64 = ctx.r10.s64 + -31936;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83382EA4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-31864
	ctx.r10.s64 = ctx.r10.s64 + -31864;
	// addi r9,r9,-31680
	ctx.r9.s64 = ctx.r9.s64 + -31680;
	// stw r11,-14352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14352, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-6976
	ctx.r3.s64 = ctx.r3.s64 + -6976;
	// bl 0x82cb0ae8
	ctx.lr = 0x83382ED4;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83382EEC"))) PPC_WEAK_FUNC(sub_83382EEC);
PPC_FUNC_IMPL(__imp__sub_83382EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382EF0"))) PPC_WEAK_FUNC(sub_83382EF0);
PPC_FUNC_IMPL(__imp__sub_83382EF0) {
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
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-31376
	ctx.r4.s64 = ctx.r11.s64 + -31376;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r30,r31,-14444
	ctx.r30.s64 = ctx.r31.s64 + -14444;
	// addi r6,r9,28260
	ctx.r6.s64 = ctx.r9.s64 + 28260;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,-1072
	ctx.r4.s64 = ctx.r7.s64 + -1072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-31568
	ctx.r10.s64 = ctx.r10.s64 + -31568;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83382F4C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-31496
	ctx.r10.s64 = ctx.r10.s64 + -31496;
	// addi r9,r9,-31312
	ctx.r9.s64 = ctx.r9.s64 + -31312;
	// stw r11,-14444(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14444, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-6888
	ctx.r3.s64 = ctx.r3.s64 + -6888;
	// bl 0x82cb0ae8
	ctx.lr = 0x83382F7C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83382F94"))) PPC_WEAK_FUNC(sub_83382F94);
PPC_FUNC_IMPL(__imp__sub_83382F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83382F98"))) PPC_WEAK_FUNC(sub_83382F98);
PPC_FUNC_IMPL(__imp__sub_83382F98) {
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
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-31008
	ctx.r4.s64 = ctx.r11.s64 + -31008;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r30,r31,-14536
	ctx.r30.s64 = ctx.r31.s64 + -14536;
	// addi r6,r9,28260
	ctx.r6.s64 = ctx.r9.s64 + 28260;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,-912
	ctx.r4.s64 = ctx.r7.s64 + -912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-31200
	ctx.r10.s64 = ctx.r10.s64 + -31200;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83382FF4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-31128
	ctx.r10.s64 = ctx.r10.s64 + -31128;
	// addi r9,r9,-30944
	ctx.r9.s64 = ctx.r9.s64 + -30944;
	// stw r11,-14536(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14536, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-6800
	ctx.r3.s64 = ctx.r3.s64 + -6800;
	// bl 0x82cb0ae8
	ctx.lr = 0x83383024;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_8338303C"))) PPC_WEAK_FUNC(sub_8338303C);
PPC_FUNC_IMPL(__imp__sub_8338303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383040"))) PPC_WEAK_FUNC(sub_83383040);
PPC_FUNC_IMPL(__imp__sub_83383040) {
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
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-30640
	ctx.r4.s64 = ctx.r11.s64 + -30640;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r30,r31,-14628
	ctx.r30.s64 = ctx.r31.s64 + -14628;
	// addi r6,r9,28752
	ctx.r6.s64 = ctx.r9.s64 + 28752;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,-752
	ctx.r4.s64 = ctx.r7.s64 + -752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-30832
	ctx.r10.s64 = ctx.r10.s64 + -30832;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338309C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-30760
	ctx.r10.s64 = ctx.r10.s64 + -30760;
	// addi r9,r9,-30576
	ctx.r9.s64 = ctx.r9.s64 + -30576;
	// stw r11,-14628(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14628, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-6712
	ctx.r3.s64 = ctx.r3.s64 + -6712;
	// bl 0x82cb0ae8
	ctx.lr = 0x833830CC;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833830E4"))) PPC_WEAK_FUNC(sub_833830E4);
PPC_FUNC_IMPL(__imp__sub_833830E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833830E8"))) PPC_WEAK_FUNC(sub_833830E8);
PPC_FUNC_IMPL(__imp__sub_833830E8) {
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
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-30288
	ctx.r4.s64 = ctx.r11.s64 + -30288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r30,r31,-14720
	ctx.r30.s64 = ctx.r31.s64 + -14720;
	// addi r6,r9,28752
	ctx.r6.s64 = ctx.r9.s64 + 28752;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,-584
	ctx.r4.s64 = ctx.r7.s64 + -584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-30480
	ctx.r10.s64 = ctx.r10.s64 + -30480;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83383144;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-30408
	ctx.r10.s64 = ctx.r10.s64 + -30408;
	// addi r9,r9,-30224
	ctx.r9.s64 = ctx.r9.s64 + -30224;
	// stw r11,-14720(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14720, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-6624
	ctx.r3.s64 = ctx.r3.s64 + -6624;
	// bl 0x82cb0ae8
	ctx.lr = 0x83383174;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_8338318C"))) PPC_WEAK_FUNC(sub_8338318C);
PPC_FUNC_IMPL(__imp__sub_8338318C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383190"))) PPC_WEAK_FUNC(sub_83383190);
PPC_FUNC_IMPL(__imp__sub_83383190) {
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
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-29936
	ctx.r4.s64 = ctx.r11.s64 + -29936;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r30,r31,-14812
	ctx.r30.s64 = ctx.r31.s64 + -14812;
	// addi r6,r9,28752
	ctx.r6.s64 = ctx.r9.s64 + 28752;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,-416
	ctx.r4.s64 = ctx.r7.s64 + -416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-30128
	ctx.r10.s64 = ctx.r10.s64 + -30128;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x833831EC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-30056
	ctx.r10.s64 = ctx.r10.s64 + -30056;
	// addi r9,r9,-29872
	ctx.r9.s64 = ctx.r9.s64 + -29872;
	// stw r11,-14812(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14812, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-6536
	ctx.r3.s64 = ctx.r3.s64 + -6536;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338321C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83383234"))) PPC_WEAK_FUNC(sub_83383234);
PPC_FUNC_IMPL(__imp__sub_83383234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383238"))) PPC_WEAK_FUNC(sub_83383238);
PPC_FUNC_IMPL(__imp__sub_83383238) {
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
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-29584
	ctx.r4.s64 = ctx.r11.s64 + -29584;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r30,r31,-14904
	ctx.r30.s64 = ctx.r31.s64 + -14904;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,-248
	ctx.r4.s64 = ctx.r7.s64 + -248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-29776
	ctx.r10.s64 = ctx.r10.s64 + -29776;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83383294;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-29704
	ctx.r10.s64 = ctx.r10.s64 + -29704;
	// addi r9,r9,-29520
	ctx.r9.s64 = ctx.r9.s64 + -29520;
	// stw r11,-14904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14904, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-6448
	ctx.r3.s64 = ctx.r3.s64 + -6448;
	// bl 0x82cb0ae8
	ctx.lr = 0x833832C4;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833832DC"))) PPC_WEAK_FUNC(sub_833832DC);
PPC_FUNC_IMPL(__imp__sub_833832DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833832E0"))) PPC_WEAK_FUNC(sub_833832E0);
PPC_FUNC_IMPL(__imp__sub_833832E0) {
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
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-29224
	ctx.r4.s64 = ctx.r11.s64 + -29224;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r30,r31,-14996
	ctx.r30.s64 = ctx.r31.s64 + -14996;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,-80
	ctx.r4.s64 = ctx.r7.s64 + -80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-29416
	ctx.r10.s64 = ctx.r10.s64 + -29416;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338333C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-29344
	ctx.r10.s64 = ctx.r10.s64 + -29344;
	// addi r9,r9,-29160
	ctx.r9.s64 = ctx.r9.s64 + -29160;
	// stw r11,-14996(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14996, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-6360
	ctx.r3.s64 = ctx.r3.s64 + -6360;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338336C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83383384"))) PPC_WEAK_FUNC(sub_83383384);
PPC_FUNC_IMPL(__imp__sub_83383384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383388"))) PPC_WEAK_FUNC(sub_83383388);
PPC_FUNC_IMPL(__imp__sub_83383388) {
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
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-28864
	ctx.r4.s64 = ctx.r11.s64 + -28864;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r30,r31,-15088
	ctx.r30.s64 = ctx.r31.s64 + -15088;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,29048
	ctx.r5.s64 = ctx.r8.s64 + 29048;
	// addi r4,r7,88
	ctx.r4.s64 = ctx.r7.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-29056
	ctx.r10.s64 = ctx.r10.s64 + -29056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x833833E4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-28984
	ctx.r10.s64 = ctx.r10.s64 + -28984;
	// addi r9,r9,-28800
	ctx.r9.s64 = ctx.r9.s64 + -28800;
	// stw r11,-15088(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15088, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-6272
	ctx.r3.s64 = ctx.r3.s64 + -6272;
	// bl 0x82cb0ae8
	ctx.lr = 0x83383414;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_8338342C"))) PPC_WEAK_FUNC(sub_8338342C);
PPC_FUNC_IMPL(__imp__sub_8338342C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383430"))) PPC_WEAK_FUNC(sub_83383430);
PPC_FUNC_IMPL(__imp__sub_83383430) {
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
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-28456
	ctx.r4.s64 = ctx.r11.s64 + -28456;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r30,r31,-15180
	ctx.r30.s64 = ctx.r31.s64 + -15180;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,30496
	ctx.r5.s64 = ctx.r8.s64 + 30496;
	// addi r4,r7,256
	ctx.r4.s64 = ctx.r7.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-28696
	ctx.r10.s64 = ctx.r10.s64 + -28696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338348C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r9,-32108
	ctx.r9.s64 = -2104229888;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-28576
	ctx.r10.s64 = ctx.r10.s64 + -28576;
	// addi r9,r9,26232
	ctx.r9.s64 = ctx.r9.s64 + 26232;
	// stw r11,-15180(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15180, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-6184
	ctx.r3.s64 = ctx.r3.s64 + -6184;
	// bl 0x82cb0ae8
	ctx.lr = 0x833834BC;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833834D4"))) PPC_WEAK_FUNC(sub_833834D4);
PPC_FUNC_IMPL(__imp__sub_833834D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833834D8"))) PPC_WEAK_FUNC(sub_833834D8);
PPC_FUNC_IMPL(__imp__sub_833834D8) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r30,r31,-11164
	ctx.r30.s64 = ctx.r31.s64 + -11164;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,2028
	ctx.r5.s64 = ctx.r8.s64 + 2028;
	// addi r4,r7,2072
	ctx.r4.s64 = ctx.r7.s64 + 2072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,16856
	ctx.r10.s64 = ctx.r10.s64 + 16856;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83383534;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,17016
	ctx.r10.s64 = ctx.r10.s64 + 17016;
	// addi r9,r9,17136
	ctx.r9.s64 = ctx.r9.s64 + 17136;
	// stw r11,-11164(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11164, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-6096
	ctx.r3.s64 = ctx.r3.s64 + -6096;
	// bl 0x82cb0ae8
	ctx.lr = 0x83383564;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_8338357C"))) PPC_WEAK_FUNC(sub_8338357C);
PPC_FUNC_IMPL(__imp__sub_8338357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383580"))) PPC_WEAK_FUNC(sub_83383580);
PPC_FUNC_IMPL(__imp__sub_83383580) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r30,r31,-11072
	ctx.r30.s64 = ctx.r31.s64 + -11072;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,2304
	ctx.r5.s64 = ctx.r8.s64 + 2304;
	// addi r4,r7,2344
	ctx.r4.s64 = ctx.r7.s64 + 2344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,17416
	ctx.r10.s64 = ctx.r10.s64 + 17416;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x833835DC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,17600
	ctx.r10.s64 = ctx.r10.s64 + 17600;
	// addi r9,r9,17696
	ctx.r9.s64 = ctx.r9.s64 + 17696;
	// stw r11,-11072(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11072, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-6008
	ctx.r3.s64 = ctx.r3.s64 + -6008;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338360C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83383624"))) PPC_WEAK_FUNC(sub_83383624);
PPC_FUNC_IMPL(__imp__sub_83383624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383628"))) PPC_WEAK_FUNC(sub_83383628);
PPC_FUNC_IMPL(__imp__sub_83383628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-5920
	ctx.r3.s64 = ctx.r11.s64 + -5920;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83383634"))) PPC_WEAK_FUNC(sub_83383634);
PPC_FUNC_IMPL(__imp__sub_83383634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383638"))) PPC_WEAK_FUNC(sub_83383638);
PPC_FUNC_IMPL(__imp__sub_83383638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,6840
	ctx.r4.s64 = ctx.r10.s64 + 6840;
	// addi r3,r9,-10972
	ctx.r3.s64 = ctx.r9.s64 + -10972;
	// addi r5,r11,-4680
	ctx.r5.s64 = ctx.r11.s64 + -4680;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83383654"))) PPC_WEAK_FUNC(sub_83383654);
PPC_FUNC_IMPL(__imp__sub_83383654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383658"))) PPC_WEAK_FUNC(sub_83383658);
PPC_FUNC_IMPL(__imp__sub_83383658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,6912
	ctx.r4.s64 = ctx.r10.s64 + 6912;
	// addi r3,r9,-10964
	ctx.r3.s64 = ctx.r9.s64 + -10964;
	// addi r5,r11,-4152
	ctx.r5.s64 = ctx.r11.s64 + -4152;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83383674"))) PPC_WEAK_FUNC(sub_83383674);
PPC_FUNC_IMPL(__imp__sub_83383674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383678"))) PPC_WEAK_FUNC(sub_83383678);
PPC_FUNC_IMPL(__imp__sub_83383678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,6980
	ctx.r4.s64 = ctx.r10.s64 + 6980;
	// addi r3,r9,-10956
	ctx.r3.s64 = ctx.r9.s64 + -10956;
	// addi r5,r11,-3664
	ctx.r5.s64 = ctx.r11.s64 + -3664;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83383694"))) PPC_WEAK_FUNC(sub_83383694);
PPC_FUNC_IMPL(__imp__sub_83383694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383698"))) PPC_WEAK_FUNC(sub_83383698);
PPC_FUNC_IMPL(__imp__sub_83383698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,7048
	ctx.r4.s64 = ctx.r10.s64 + 7048;
	// addi r3,r9,-10948
	ctx.r3.s64 = ctx.r9.s64 + -10948;
	// addi r5,r11,-3408
	ctx.r5.s64 = ctx.r11.s64 + -3408;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833836B4"))) PPC_WEAK_FUNC(sub_833836B4);
PPC_FUNC_IMPL(__imp__sub_833836B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833836B8"))) PPC_WEAK_FUNC(sub_833836B8);
PPC_FUNC_IMPL(__imp__sub_833836B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,7120
	ctx.r4.s64 = ctx.r10.s64 + 7120;
	// addi r3,r9,-10940
	ctx.r3.s64 = ctx.r9.s64 + -10940;
	// addi r5,r11,-3152
	ctx.r5.s64 = ctx.r11.s64 + -3152;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833836D4"))) PPC_WEAK_FUNC(sub_833836D4);
PPC_FUNC_IMPL(__imp__sub_833836D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833836D8"))) PPC_WEAK_FUNC(sub_833836D8);
PPC_FUNC_IMPL(__imp__sub_833836D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,7208
	ctx.r4.s64 = ctx.r10.s64 + 7208;
	// addi r3,r9,-10932
	ctx.r3.s64 = ctx.r9.s64 + -10932;
	// addi r5,r11,-2488
	ctx.r5.s64 = ctx.r11.s64 + -2488;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833836F4"))) PPC_WEAK_FUNC(sub_833836F4);
PPC_FUNC_IMPL(__imp__sub_833836F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833836F8"))) PPC_WEAK_FUNC(sub_833836F8);
PPC_FUNC_IMPL(__imp__sub_833836F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,7296
	ctx.r4.s64 = ctx.r10.s64 + 7296;
	// addi r3,r9,-10924
	ctx.r3.s64 = ctx.r9.s64 + -10924;
	// addi r5,r11,-1920
	ctx.r5.s64 = ctx.r11.s64 + -1920;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83383714"))) PPC_WEAK_FUNC(sub_83383714);
PPC_FUNC_IMPL(__imp__sub_83383714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383718"))) PPC_WEAK_FUNC(sub_83383718);
PPC_FUNC_IMPL(__imp__sub_83383718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,7400
	ctx.r4.s64 = ctx.r10.s64 + 7400;
	// addi r3,r9,-10916
	ctx.r3.s64 = ctx.r9.s64 + -10916;
	// addi r5,r11,-1128
	ctx.r5.s64 = ctx.r11.s64 + -1128;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83383734"))) PPC_WEAK_FUNC(sub_83383734);
PPC_FUNC_IMPL(__imp__sub_83383734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383738"))) PPC_WEAK_FUNC(sub_83383738);
PPC_FUNC_IMPL(__imp__sub_83383738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,7488
	ctx.r4.s64 = ctx.r10.s64 + 7488;
	// addi r3,r9,-10908
	ctx.r3.s64 = ctx.r9.s64 + -10908;
	// addi r5,r11,-464
	ctx.r5.s64 = ctx.r11.s64 + -464;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83383754"))) PPC_WEAK_FUNC(sub_83383754);
PPC_FUNC_IMPL(__imp__sub_83383754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383758"))) PPC_WEAK_FUNC(sub_83383758);
PPC_FUNC_IMPL(__imp__sub_83383758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,7592
	ctx.r4.s64 = ctx.r10.s64 + 7592;
	// addi r3,r9,-10900
	ctx.r3.s64 = ctx.r9.s64 + -10900;
	// addi r5,r11,-88
	ctx.r5.s64 = ctx.r11.s64 + -88;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83383774"))) PPC_WEAK_FUNC(sub_83383774);
PPC_FUNC_IMPL(__imp__sub_83383774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383778"))) PPC_WEAK_FUNC(sub_83383778);
PPC_FUNC_IMPL(__imp__sub_83383778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,7656
	ctx.r4.s64 = ctx.r10.s64 + 7656;
	// addi r3,r9,-10892
	ctx.r3.s64 = ctx.r9.s64 + -10892;
	// addi r5,r11,560
	ctx.r5.s64 = ctx.r11.s64 + 560;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83383794"))) PPC_WEAK_FUNC(sub_83383794);
PPC_FUNC_IMPL(__imp__sub_83383794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383798"))) PPC_WEAK_FUNC(sub_83383798);
PPC_FUNC_IMPL(__imp__sub_83383798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,7736
	ctx.r4.s64 = ctx.r10.s64 + 7736;
	// addi r3,r9,-10884
	ctx.r3.s64 = ctx.r9.s64 + -10884;
	// addi r5,r11,1080
	ctx.r5.s64 = ctx.r11.s64 + 1080;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833837B4"))) PPC_WEAK_FUNC(sub_833837B4);
PPC_FUNC_IMPL(__imp__sub_833837B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833837B8"))) PPC_WEAK_FUNC(sub_833837B8);
PPC_FUNC_IMPL(__imp__sub_833837B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,7816
	ctx.r4.s64 = ctx.r10.s64 + 7816;
	// addi r3,r9,-10876
	ctx.r3.s64 = ctx.r9.s64 + -10876;
	// addi r5,r11,2400
	ctx.r5.s64 = ctx.r11.s64 + 2400;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833837D4"))) PPC_WEAK_FUNC(sub_833837D4);
PPC_FUNC_IMPL(__imp__sub_833837D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833837D8"))) PPC_WEAK_FUNC(sub_833837D8);
PPC_FUNC_IMPL(__imp__sub_833837D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,7888
	ctx.r4.s64 = ctx.r10.s64 + 7888;
	// addi r3,r9,-10868
	ctx.r3.s64 = ctx.r9.s64 + -10868;
	// addi r5,r11,3128
	ctx.r5.s64 = ctx.r11.s64 + 3128;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833837F4"))) PPC_WEAK_FUNC(sub_833837F4);
PPC_FUNC_IMPL(__imp__sub_833837F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833837F8"))) PPC_WEAK_FUNC(sub_833837F8);
PPC_FUNC_IMPL(__imp__sub_833837F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,7968
	ctx.r4.s64 = ctx.r10.s64 + 7968;
	// addi r3,r9,-10860
	ctx.r3.s64 = ctx.r9.s64 + -10860;
	// addi r5,r11,4104
	ctx.r5.s64 = ctx.r11.s64 + 4104;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83383814"))) PPC_WEAK_FUNC(sub_83383814);
PPC_FUNC_IMPL(__imp__sub_83383814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383818"))) PPC_WEAK_FUNC(sub_83383818);
PPC_FUNC_IMPL(__imp__sub_83383818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,8028
	ctx.r4.s64 = ctx.r10.s64 + 8028;
	// addi r3,r9,-10852
	ctx.r3.s64 = ctx.r9.s64 + -10852;
	// addi r5,r11,5048
	ctx.r5.s64 = ctx.r11.s64 + 5048;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83383834"))) PPC_WEAK_FUNC(sub_83383834);
PPC_FUNC_IMPL(__imp__sub_83383834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383838"))) PPC_WEAK_FUNC(sub_83383838);
PPC_FUNC_IMPL(__imp__sub_83383838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,8088
	ctx.r4.s64 = ctx.r10.s64 + 8088;
	// addi r3,r9,-10844
	ctx.r3.s64 = ctx.r9.s64 + -10844;
	// addi r5,r11,5992
	ctx.r5.s64 = ctx.r11.s64 + 5992;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83383854"))) PPC_WEAK_FUNC(sub_83383854);
PPC_FUNC_IMPL(__imp__sub_83383854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383858"))) PPC_WEAK_FUNC(sub_83383858);
PPC_FUNC_IMPL(__imp__sub_83383858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,8152
	ctx.r4.s64 = ctx.r10.s64 + 8152;
	// addi r3,r9,-10836
	ctx.r3.s64 = ctx.r9.s64 + -10836;
	// addi r5,r11,7096
	ctx.r5.s64 = ctx.r11.s64 + 7096;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83383874"))) PPC_WEAK_FUNC(sub_83383874);
PPC_FUNC_IMPL(__imp__sub_83383874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383878"))) PPC_WEAK_FUNC(sub_83383878);
PPC_FUNC_IMPL(__imp__sub_83383878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,8216
	ctx.r4.s64 = ctx.r10.s64 + 8216;
	// addi r3,r9,-10828
	ctx.r3.s64 = ctx.r9.s64 + -10828;
	// addi r5,r11,7792
	ctx.r5.s64 = ctx.r11.s64 + 7792;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83383894"))) PPC_WEAK_FUNC(sub_83383894);
PPC_FUNC_IMPL(__imp__sub_83383894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383898"))) PPC_WEAK_FUNC(sub_83383898);
PPC_FUNC_IMPL(__imp__sub_83383898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,8280
	ctx.r4.s64 = ctx.r10.s64 + 8280;
	// addi r3,r9,-10820
	ctx.r3.s64 = ctx.r9.s64 + -10820;
	// addi r5,r11,8488
	ctx.r5.s64 = ctx.r11.s64 + 8488;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833838B4"))) PPC_WEAK_FUNC(sub_833838B4);
PPC_FUNC_IMPL(__imp__sub_833838B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833838B8"))) PPC_WEAK_FUNC(sub_833838B8);
PPC_FUNC_IMPL(__imp__sub_833838B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,8344
	ctx.r4.s64 = ctx.r10.s64 + 8344;
	// addi r3,r9,-10812
	ctx.r3.s64 = ctx.r9.s64 + -10812;
	// addi r5,r11,9216
	ctx.r5.s64 = ctx.r11.s64 + 9216;
	// b 0x8279e060
	sub_8279E060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833838D4"))) PPC_WEAK_FUNC(sub_833838D4);
PPC_FUNC_IMPL(__imp__sub_833838D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833838D8"))) PPC_WEAK_FUNC(sub_833838D8);
PPC_FUNC_IMPL(__imp__sub_833838D8) {
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
	// lis r11,-32133
	ctx.r11.s64 = -2105868288;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-5376
	ctx.r4.s64 = ctx.r11.s64 + -5376;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32133
	ctx.r10.s64 = -2105868288;
	// addi r30,r31,-11224
	ctx.r30.s64 = ctx.r31.s64 + -11224;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,16116
	ctx.r5.s64 = ctx.r8.s64 + 16116;
	// addi r4,r7,16160
	ctx.r4.s64 = ctx.r7.s64 + 16160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-5752
	ctx.r10.s64 = ctx.r10.s64 + -5752;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83383934;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32133
	ctx.r10.s64 = -2105868288;
	// lis r9,-32133
	ctx.r9.s64 = -2105868288;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-5584
	ctx.r10.s64 = ctx.r10.s64 + -5584;
	// addi r9,r9,-5488
	ctx.r9.s64 = ctx.r9.s64 + -5488;
	// stw r11,-11224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11224, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-5904
	ctx.r3.s64 = ctx.r3.s64 + -5904;
	// bl 0x82cb0ae8
	ctx.lr = 0x83383964;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_8338397C"))) PPC_WEAK_FUNC(sub_8338397C);
PPC_FUNC_IMPL(__imp__sub_8338397C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383980"))) PPC_WEAK_FUNC(sub_83383980);
PPC_FUNC_IMPL(__imp__sub_83383980) {
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
	// lis r11,-32133
	ctx.r11.s64 = -2105868288;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-5008
	ctx.r4.s64 = ctx.r11.s64 + -5008;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32133
	ctx.r10.s64 = -2105868288;
	// addi r30,r31,-11316
	ctx.r30.s64 = ctx.r31.s64 + -11316;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,16280
	ctx.r5.s64 = ctx.r8.s64 + 16280;
	// addi r4,r7,16328
	ctx.r4.s64 = ctx.r7.s64 + 16328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-5288
	ctx.r10.s64 = ctx.r10.s64 + -5288;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x833839DC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32133
	ctx.r10.s64 = -2105868288;
	// lis r9,-32133
	ctx.r9.s64 = -2105868288;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-5216
	ctx.r10.s64 = ctx.r10.s64 + -5216;
	// addi r9,r9,-5120
	ctx.r9.s64 = ctx.r9.s64 + -5120;
	// stw r11,-11316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11316, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-5816
	ctx.r3.s64 = ctx.r3.s64 + -5816;
	// bl 0x82cb0ae8
	ctx.lr = 0x83383A0C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83383A24"))) PPC_WEAK_FUNC(sub_83383A24);
PPC_FUNC_IMPL(__imp__sub_83383A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383A28"))) PPC_WEAK_FUNC(sub_83383A28);
PPC_FUNC_IMPL(__imp__sub_83383A28) {
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
	// lis r11,-32133
	ctx.r11.s64 = -2105868288;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-4392
	ctx.r4.s64 = ctx.r11.s64 + -4392;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32133
	ctx.r10.s64 = -2105868288;
	// addi r30,r31,-11408
	ctx.r30.s64 = ctx.r31.s64 + -11408;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,16116
	ctx.r5.s64 = ctx.r8.s64 + 16116;
	// addi r4,r7,16448
	ctx.r4.s64 = ctx.r7.s64 + 16448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-4808
	ctx.r10.s64 = ctx.r10.s64 + -4808;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83383A84;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32133
	ctx.r10.s64 = -2105868288;
	// lis r9,-32133
	ctx.r9.s64 = -2105868288;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-4632
	ctx.r10.s64 = ctx.r10.s64 + -4632;
	// addi r9,r9,-4536
	ctx.r9.s64 = ctx.r9.s64 + -4536;
	// stw r11,-11408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11408, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-5728
	ctx.r3.s64 = ctx.r3.s64 + -5728;
	// bl 0x82cb0ae8
	ctx.lr = 0x83383AB4;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83383ACC"))) PPC_WEAK_FUNC(sub_83383ACC);
PPC_FUNC_IMPL(__imp__sub_83383ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383AD0"))) PPC_WEAK_FUNC(sub_83383AD0);
PPC_FUNC_IMPL(__imp__sub_83383AD0) {
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
	// lis r11,-32133
	ctx.r11.s64 = -2105868288;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-3976
	ctx.r4.s64 = ctx.r11.s64 + -3976;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32133
	ctx.r10.s64 = -2105868288;
	// addi r30,r31,-11500
	ctx.r30.s64 = ctx.r31.s64 + -11500;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,16280
	ctx.r5.s64 = ctx.r8.s64 + 16280;
	// addi r4,r7,16560
	ctx.r4.s64 = ctx.r7.s64 + 16560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-4288
	ctx.r10.s64 = ctx.r10.s64 + -4288;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83383B2C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32133
	ctx.r10.s64 = -2105868288;
	// lis r9,-32133
	ctx.r9.s64 = -2105868288;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-4216
	ctx.r10.s64 = ctx.r10.s64 + -4216;
	// addi r9,r9,-4120
	ctx.r9.s64 = ctx.r9.s64 + -4120;
	// stw r11,-11500(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11500, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-5640
	ctx.r3.s64 = ctx.r3.s64 + -5640;
	// bl 0x82cb0ae8
	ctx.lr = 0x83383B5C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83383B74"))) PPC_WEAK_FUNC(sub_83383B74);
PPC_FUNC_IMPL(__imp__sub_83383B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83383B78"))) PPC_WEAK_FUNC(sub_83383B78);
PPC_FUNC_IMPL(__imp__sub_83383B78) {
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
	// lis r11,-32133
	ctx.r11.s64 = -2105868288;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-3360
	ctx.r4.s64 = ctx.r11.s64 + -3360;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r10,-32133
	ctx.r10.s64 = -2105868288;
	// addi r30,r31,-11592
	ctx.r30.s64 = ctx.r31.s64 + -11592;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,16116
	ctx.r5.s64 = ctx.r8.s64 + 16116;
	// addi r4,r7,16672
	ctx.r4.s64 = ctx.r7.s64 + 16672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-3768
	ctx.r10.s64 = ctx.r10.s64 + -3768;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83383BD4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32133
	ctx.r10.s64 = -2105868288;
	// lis r9,-32133
	ctx.r9.s64 = -2105868288;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-3600
	ctx.r10.s64 = ctx.r10.s64 + -3600;
	// addi r9,r9,-3504
	ctx.r9.s64 = ctx.r9.s64 + -3504;
	// stw r11,-11592(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11592, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-5552
	ctx.r3.s64 = ctx.r3.s64 + -5552;
	// bl 0x82cb0ae8
	ctx.lr = 0x83383C04;
	sub_82CB0AE8(ctx, base);
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

