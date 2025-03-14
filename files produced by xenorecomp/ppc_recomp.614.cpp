#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_833A5048"))) PPC_WEAK_FUNC(sub_833A5048);
PPC_FUNC_IMPL(__imp__sub_833A5048) {
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
loc_833A5078:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5078;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5088"))) PPC_WEAK_FUNC(sub_833A5088);
PPC_FUNC_IMPL(__imp__sub_833A5088) {
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
loc_833A50B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a50b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A50B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A50C8"))) PPC_WEAK_FUNC(sub_833A50C8);
PPC_FUNC_IMPL(__imp__sub_833A50C8) {
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
loc_833A50F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a50f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A50F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5108"))) PPC_WEAK_FUNC(sub_833A5108);
PPC_FUNC_IMPL(__imp__sub_833A5108) {
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
loc_833A5138:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5138
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5138;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5148"))) PPC_WEAK_FUNC(sub_833A5148);
PPC_FUNC_IMPL(__imp__sub_833A5148) {
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
loc_833A5178:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5178;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5188"))) PPC_WEAK_FUNC(sub_833A5188);
PPC_FUNC_IMPL(__imp__sub_833A5188) {
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
loc_833A51B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a51b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A51B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A51C8"))) PPC_WEAK_FUNC(sub_833A51C8);
PPC_FUNC_IMPL(__imp__sub_833A51C8) {
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
loc_833A51F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a51f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A51F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5208"))) PPC_WEAK_FUNC(sub_833A5208);
PPC_FUNC_IMPL(__imp__sub_833A5208) {
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
loc_833A5238:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5238;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5248"))) PPC_WEAK_FUNC(sub_833A5248);
PPC_FUNC_IMPL(__imp__sub_833A5248) {
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
loc_833A5278:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5278;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5288"))) PPC_WEAK_FUNC(sub_833A5288);
PPC_FUNC_IMPL(__imp__sub_833A5288) {
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
loc_833A52B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a52b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A52B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A52C8"))) PPC_WEAK_FUNC(sub_833A52C8);
PPC_FUNC_IMPL(__imp__sub_833A52C8) {
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
loc_833A52F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a52f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A52F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5308"))) PPC_WEAK_FUNC(sub_833A5308);
PPC_FUNC_IMPL(__imp__sub_833A5308) {
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
loc_833A5338:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5338;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5348"))) PPC_WEAK_FUNC(sub_833A5348);
PPC_FUNC_IMPL(__imp__sub_833A5348) {
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
loc_833A5378:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5378
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5378;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5388"))) PPC_WEAK_FUNC(sub_833A5388);
PPC_FUNC_IMPL(__imp__sub_833A5388) {
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
loc_833A53B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a53b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A53B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A53C8"))) PPC_WEAK_FUNC(sub_833A53C8);
PPC_FUNC_IMPL(__imp__sub_833A53C8) {
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
loc_833A53F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a53f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A53F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5408"))) PPC_WEAK_FUNC(sub_833A5408);
PPC_FUNC_IMPL(__imp__sub_833A5408) {
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
loc_833A5438:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5438
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5438;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5448"))) PPC_WEAK_FUNC(sub_833A5448);
PPC_FUNC_IMPL(__imp__sub_833A5448) {
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
loc_833A5478:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5478;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5488"))) PPC_WEAK_FUNC(sub_833A5488);
PPC_FUNC_IMPL(__imp__sub_833A5488) {
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
loc_833A54B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a54b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A54B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A54C8"))) PPC_WEAK_FUNC(sub_833A54C8);
PPC_FUNC_IMPL(__imp__sub_833A54C8) {
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
loc_833A54F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a54f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A54F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5508"))) PPC_WEAK_FUNC(sub_833A5508);
PPC_FUNC_IMPL(__imp__sub_833A5508) {
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
loc_833A5538:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5538;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5548"))) PPC_WEAK_FUNC(sub_833A5548);
PPC_FUNC_IMPL(__imp__sub_833A5548) {
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
loc_833A5578:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5578;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5588"))) PPC_WEAK_FUNC(sub_833A5588);
PPC_FUNC_IMPL(__imp__sub_833A5588) {
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
loc_833A55B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a55b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A55B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A55C8"))) PPC_WEAK_FUNC(sub_833A55C8);
PPC_FUNC_IMPL(__imp__sub_833A55C8) {
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
loc_833A55F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a55f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A55F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5608"))) PPC_WEAK_FUNC(sub_833A5608);
PPC_FUNC_IMPL(__imp__sub_833A5608) {
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
loc_833A5638:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5638;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5648"))) PPC_WEAK_FUNC(sub_833A5648);
PPC_FUNC_IMPL(__imp__sub_833A5648) {
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
loc_833A5678:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5678;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5688"))) PPC_WEAK_FUNC(sub_833A5688);
PPC_FUNC_IMPL(__imp__sub_833A5688) {
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
loc_833A56B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a56b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A56B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A56C8"))) PPC_WEAK_FUNC(sub_833A56C8);
PPC_FUNC_IMPL(__imp__sub_833A56C8) {
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
loc_833A56F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a56f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A56F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5708"))) PPC_WEAK_FUNC(sub_833A5708);
PPC_FUNC_IMPL(__imp__sub_833A5708) {
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
loc_833A5738:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5738;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5748"))) PPC_WEAK_FUNC(sub_833A5748);
PPC_FUNC_IMPL(__imp__sub_833A5748) {
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
loc_833A5778:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5778;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5788"))) PPC_WEAK_FUNC(sub_833A5788);
PPC_FUNC_IMPL(__imp__sub_833A5788) {
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
loc_833A57B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a57b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A57B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A57C8"))) PPC_WEAK_FUNC(sub_833A57C8);
PPC_FUNC_IMPL(__imp__sub_833A57C8) {
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
loc_833A57F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a57f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A57F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5808"))) PPC_WEAK_FUNC(sub_833A5808);
PPC_FUNC_IMPL(__imp__sub_833A5808) {
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
loc_833A5838:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5838;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5848"))) PPC_WEAK_FUNC(sub_833A5848);
PPC_FUNC_IMPL(__imp__sub_833A5848) {
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
loc_833A5878:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5878;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5888"))) PPC_WEAK_FUNC(sub_833A5888);
PPC_FUNC_IMPL(__imp__sub_833A5888) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32101
	ctx.r10.s64 = -2103771136;
	// lis r7,-32101
	ctx.r7.s64 = -2103771136;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-30936
	ctx.r9.s64 = ctx.r10.s64 + -30936;
	// addi r5,r7,-30752
	ctx.r5.s64 = ctx.r7.s64 + -30752;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r8,-31904
	ctx.r8.s64 = -2090860544;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// ld r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// addi r6,r8,-16304
	ctx.r6.s64 = ctx.r8.s64 + -16304;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r5,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r5.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r9,28(r6)
	PPC_STORE_U64(ctx.r6.u32 + 28, ctx.r9.u64);
	// std r10,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r10.u64);
	// std r11,4(r6)
	PPC_STORE_U64(ctx.r6.u32 + 4, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A58D8"))) PPC_WEAK_FUNC(sub_833A58D8);
PPC_FUNC_IMPL(__imp__sub_833A58D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32101
	ctx.r10.s64 = -2103771136;
	// lis r7,-32101
	ctx.r7.s64 = -2103771136;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-26000
	ctx.r9.s64 = ctx.r10.s64 + -26000;
	// addi r5,r7,-25872
	ctx.r5.s64 = ctx.r7.s64 + -25872;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r8,-31904
	ctx.r8.s64 = -2090860544;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// ld r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// addi r6,r8,-16208
	ctx.r6.s64 = ctx.r8.s64 + -16208;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r5,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r5.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r9,28(r6)
	PPC_STORE_U64(ctx.r6.u32 + 28, ctx.r9.u64);
	// std r10,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r10.u64);
	// std r11,4(r6)
	PPC_STORE_U64(ctx.r6.u32 + 4, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5928"))) PPC_WEAK_FUNC(sub_833A5928);
PPC_FUNC_IMPL(__imp__sub_833A5928) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32102
	ctx.r9.s64 = -2103836672;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r7,r9,-10608
	ctx.r7.s64 = ctx.r9.s64 + -10608;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r8,r10,-16436
	ctx.r8.s64 = ctx.r10.s64 + -16436;
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r10.u64);
	// std r11,4(r8)
	PPC_STORE_U64(ctx.r8.u32 + 4, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5960"))) PPC_WEAK_FUNC(sub_833A5960);
PPC_FUNC_IMPL(__imp__sub_833A5960) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32101
	ctx.r9.s64 = -2103771136;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r7,r9,-31176
	ctx.r7.s64 = ctx.r9.s64 + -31176;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r8,r10,-16328
	ctx.r8.s64 = ctx.r10.s64 + -16328;
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r10.u64);
	// std r11,4(r8)
	PPC_STORE_U64(ctx.r8.u32 + 4, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5998"))) PPC_WEAK_FUNC(sub_833A5998);
PPC_FUNC_IMPL(__imp__sub_833A5998) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32102
	ctx.r9.s64 = -2103836672;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r7,r9,22672
	ctx.r7.s64 = ctx.r9.s64 + 22672;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r8,r10,-16172
	ctx.r8.s64 = ctx.r10.s64 + -16172;
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r10.u64);
	// std r11,4(r8)
	PPC_STORE_U64(ctx.r8.u32 + 4, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A59D0"))) PPC_WEAK_FUNC(sub_833A59D0);
PPC_FUNC_IMPL(__imp__sub_833A59D0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x833A59D8;
	__savegprlr_27(ctx, base);
	// lis r10,-32102
	ctx.r10.s64 = -2103836672;
	// lis r9,-32102
	ctx.r9.s64 = -2103836672;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-1048
	ctx.r8.s64 = ctx.r10.s64 + -1048;
	// addi r7,r9,-1296
	ctx.r7.s64 = ctx.r9.s64 + -1296;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// lis r6,-32102
	ctx.r6.s64 = -2103836672;
	// stw r8,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// lis r5,-32102
	ctx.r5.s64 = -2103836672;
	// stw r7,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r7.u32);
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// lis r4,-32102
	ctx.r4.s64 = -2103836672;
	// addi r3,r6,22464
	ctx.r3.s64 = ctx.r6.s64 + 22464;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// addi r10,r5,22208
	ctx.r10.s64 = ctx.r5.s64 + 22208;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// lis r8,-31904
	ctx.r8.s64 = -2090860544;
	// stw r3,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r3.u32);
	// lis r7,-32102
	ctx.r7.s64 = -2103836672;
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// lis r6,-32102
	ctx.r6.s64 = -2103836672;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// lis r5,-32102
	ctx.r5.s64 = -2103836672;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// addi r9,r4,22016
	ctx.r9.s64 = ctx.r4.s64 + 22016;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// addi r27,r8,-16616
	ctx.r27.s64 = ctx.r8.s64 + -16616;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// addi r7,r7,21760
	ctx.r7.s64 = ctx.r7.s64 + 21760;
	// stw r9,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r9.u32);
	// addi r6,r6,21464
	ctx.r6.s64 = ctx.r6.s64 + 21464;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// addi r5,r5,21296
	ctx.r5.s64 = ctx.r5.s64 + 21296;
	// stw r7,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r7.u32);
	// lis r31,-32102
	ctx.r31.s64 = -2103836672;
	// stw r6,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r6.u32);
	// lis r30,-32102
	ctx.r30.s64 = -2103836672;
	// stw r5,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r5.u32);
	// lis r29,-32102
	ctx.r29.s64 = -2103836672;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// lis r4,-32102
	ctx.r4.s64 = -2103836672;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// lis r3,-32102
	ctx.r3.s64 = -2103836672;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// lis r8,-32102
	ctx.r8.s64 = -2103836672;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// addi r7,r31,20448
	ctx.r7.s64 = ctx.r31.s64 + 20448;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r6,r30,20224
	ctx.r6.s64 = ctx.r30.s64 + 20224;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// addi r5,r29,20024
	ctx.r5.s64 = ctx.r29.s64 + 20024;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r4,r4,21008
	ctx.r4.s64 = ctx.r4.s64 + 21008;
	// stw r7,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r7.u32);
	// addi r3,r3,20840
	ctx.r3.s64 = ctx.r3.s64 + 20840;
	// stw r6,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r6.u32);
	// addi r8,r8,20672
	ctx.r8.s64 = ctx.r8.s64 + 20672;
	// stw r4,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r4.u32);
	// stw r3,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r3.u32);
	// stw r8,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r8.u32);
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// ld r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// ld r11,-152(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// ld r28,-176(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// ld r8,-128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// std r10,4(r27)
	PPC_STORE_U64(ctx.r27.u32 + 4, ctx.r10.u64);
	// std r9,16(r27)
	PPC_STORE_U64(ctx.r27.u32 + 16, ctx.r9.u64);
	// ld r10,-144(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r7,-120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r6,-112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r11,28(r27)
	PPC_STORE_U64(ctx.r27.u32 + 28, ctx.r11.u64);
	// std r10,40(r27)
	PPC_STORE_U64(ctx.r27.u32 + 40, ctx.r10.u64);
	// std r9,52(r27)
	PPC_STORE_U64(ctx.r27.u32 + 52, ctx.r9.u64);
	// ld r31,-80(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r30,-72(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r5,-104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r4,-96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r3,-88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r29,-64(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// std r8,64(r27)
	PPC_STORE_U64(ctx.r27.u32 + 64, ctx.r8.u64);
	// std r7,76(r27)
	PPC_STORE_U64(ctx.r27.u32 + 76, ctx.r7.u64);
	// std r6,88(r27)
	PPC_STORE_U64(ctx.r27.u32 + 88, ctx.r6.u64);
	// std r5,100(r27)
	PPC_STORE_U64(ctx.r27.u32 + 100, ctx.r5.u64);
	// std r4,112(r27)
	PPC_STORE_U64(ctx.r27.u32 + 112, ctx.r4.u64);
	// std r3,124(r27)
	PPC_STORE_U64(ctx.r27.u32 + 124, ctx.r3.u64);
	// std r31,136(r27)
	PPC_STORE_U64(ctx.r27.u32 + 136, ctx.r31.u64);
	// std r30,148(r27)
	PPC_STORE_U64(ctx.r27.u32 + 148, ctx.r30.u64);
	// std r29,160(r27)
	PPC_STORE_U64(ctx.r27.u32 + 160, ctx.r29.u64);
	// std r28,172(r27)
	PPC_STORE_U64(ctx.r27.u32 + 172, ctx.r28.u64);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A5B48"))) PPC_WEAK_FUNC(sub_833A5B48);
PPC_FUNC_IMPL(__imp__sub_833A5B48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32102
	ctx.r10.s64 = -2103836672;
	// lis r9,-32102
	ctx.r9.s64 = -2103836672;
	// lis r8,-32102
	ctx.r8.s64 = -2103836672;
	// lis r3,-32102
	ctx.r3.s64 = -2103836672;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,22864
	ctx.r7.s64 = ctx.r10.s64 + 22864;
	// addi r6,r9,20672
	ctx.r6.s64 = ctx.r9.s64 + 20672;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// addi r5,r8,20448
	ctx.r5.s64 = ctx.r8.s64 + 20448;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// addi r3,r3,22016
	ctx.r3.s64 = ctx.r3.s64 + 22016;
	// stw r7,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r7.u32);
	// ld r7,-8(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lis r4,-31904
	ctx.r4.s64 = -2090860544;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// addi r4,r4,-16268
	ctx.r4.s64 = ctx.r4.s64 + -16268;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r6,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r6.u32);
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// stw r3,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r3.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r9,-24(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r7,52(r4)
	PPC_STORE_U64(ctx.r4.u32 + 52, ctx.r7.u64);
	// std r10,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r10.u64);
	// std r9,28(r4)
	PPC_STORE_U64(ctx.r4.u32 + 28, ctx.r9.u64);
	// std r8,40(r4)
	PPC_STORE_U64(ctx.r4.u32 + 40, ctx.r8.u64);
	// std r11,4(r4)
	PPC_STORE_U64(ctx.r4.u32 + 4, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5BC8"))) PPC_WEAK_FUNC(sub_833A5BC8);
PPC_FUNC_IMPL(__imp__sub_833A5BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32102
	ctx.r10.s64 = -2103836672;
	// lis r9,-32102
	ctx.r9.s64 = -2103836672;
	// lis r5,-32102
	ctx.r5.s64 = -2103836672;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-4600
	ctx.r8.s64 = ctx.r10.s64 + -4600;
	// addi r7,r9,-4776
	ctx.r7.s64 = ctx.r9.s64 + -4776;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// addi r3,r5,-4376
	ctx.r3.s64 = ctx.r5.s64 + -4376;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// lis r6,-31904
	ctx.r6.s64 = -2090860544;
	// ld r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// addi r4,r6,-16376
	ctx.r4.s64 = ctx.r6.s64 + -16376;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r7,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r7.u32);
	// stw r3,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r3.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r9,-24(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,40(r4)
	PPC_STORE_U64(ctx.r4.u32 + 40, ctx.r8.u64);
	// std r10,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r10.u64);
	// std r9,28(r4)
	PPC_STORE_U64(ctx.r4.u32 + 28, ctx.r9.u64);
	// std r11,4(r4)
	PPC_STORE_U64(ctx.r4.u32 + 4, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5C30"))) PPC_WEAK_FUNC(sub_833A5C30);
PPC_FUNC_IMPL(__imp__sub_833A5C30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32102
	ctx.r10.s64 = -2103836672;
	// lis r7,-32102
	ctx.r7.s64 = -2103836672;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-4128
	ctx.r9.s64 = ctx.r10.s64 + -4128;
	// addi r5,r7,-3936
	ctx.r5.s64 = ctx.r7.s64 + -3936;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r8,-31904
	ctx.r8.s64 = -2090860544;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// ld r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// addi r6,r8,-16412
	ctx.r6.s64 = ctx.r8.s64 + -16412;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r5,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r5.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r9,28(r6)
	PPC_STORE_U64(ctx.r6.u32 + 28, ctx.r9.u64);
	// std r10,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r10.u64);
	// std r11,4(r6)
	PPC_STORE_U64(ctx.r6.u32 + 4, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5C80"))) PPC_WEAK_FUNC(sub_833A5C80);
PPC_FUNC_IMPL(__imp__sub_833A5C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,19992
	ctx.r3.s64 = ctx.r11.s64 + 19992;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A5C8C"))) PPC_WEAK_FUNC(sub_833A5C8C);
PPC_FUNC_IMPL(__imp__sub_833A5C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A5C90"))) PPC_WEAK_FUNC(sub_833A5C90);
PPC_FUNC_IMPL(__imp__sub_833A5C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31904
	ctx.r9.s64 = -2090860544;
	// addi r11,r9,-25032
	ctx.r11.s64 = ctx.r9.s64 + -25032;
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5CC8"))) PPC_WEAK_FUNC(sub_833A5CC8);
PPC_FUNC_IMPL(__imp__sub_833A5CC8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r4,-28808(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28808);
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne cr6,0x833a5d18
	if (!ctx.cr6.eq) goto loc_833A5D18;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825ff3d0
	ctx.lr = 0x833A5D0C;
	sub_825FF3D0(ctx, base);
	// stw r3,-28808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28808, ctx.r3.u32);
	// bl 0x825ff490
	ctx.lr = 0x833A5D14;
	sub_825FF490(ctx, base);
	// lwz r4,-28808(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28808);
loc_833A5D18:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r10,1280
	ctx.r3.s64 = ctx.r10.s64 + 1280;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82b0f170
	ctx.lr = 0x833A5D34;
	sub_82B0F170(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_833A5D4C"))) PPC_WEAK_FUNC(sub_833A5D4C);
PPC_FUNC_IMPL(__imp__sub_833A5D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A5D50"))) PPC_WEAK_FUNC(sub_833A5D50);
PPC_FUNC_IMPL(__imp__sub_833A5D50) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,22144
	ctx.r4.s64 = ctx.r11.s64 + 22144;
	// addi r3,r10,1316
	ctx.r3.s64 = ctx.r10.s64 + 1316;
	// bl 0x82295680
	ctx.lr = 0x833A5D70;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,20008
	ctx.r3.s64 = ctx.r9.s64 + 20008;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A5D7C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5D8C"))) PPC_WEAK_FUNC(sub_833A5D8C);
PPC_FUNC_IMPL(__imp__sub_833A5D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A5D90"))) PPC_WEAK_FUNC(sub_833A5D90);
PPC_FUNC_IMPL(__imp__sub_833A5D90) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,22152
	ctx.r4.s64 = ctx.r11.s64 + 22152;
	// addi r3,r10,1328
	ctx.r3.s64 = ctx.r10.s64 + 1328;
	// bl 0x82295680
	ctx.lr = 0x833A5DB0;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,20104
	ctx.r3.s64 = ctx.r9.s64 + 20104;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A5DBC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5DCC"))) PPC_WEAK_FUNC(sub_833A5DCC);
PPC_FUNC_IMPL(__imp__sub_833A5DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A5DD0"))) PPC_WEAK_FUNC(sub_833A5DD0);
PPC_FUNC_IMPL(__imp__sub_833A5DD0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,22160
	ctx.r4.s64 = ctx.r11.s64 + 22160;
	// addi r3,r10,1340
	ctx.r3.s64 = ctx.r10.s64 + 1340;
	// bl 0x82295680
	ctx.lr = 0x833A5DF0;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,20200
	ctx.r3.s64 = ctx.r9.s64 + 20200;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A5DFC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5E0C"))) PPC_WEAK_FUNC(sub_833A5E0C);
PPC_FUNC_IMPL(__imp__sub_833A5E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A5E10"))) PPC_WEAK_FUNC(sub_833A5E10);
PPC_FUNC_IMPL(__imp__sub_833A5E10) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,22168
	ctx.r4.s64 = ctx.r11.s64 + 22168;
	// addi r3,r10,1352
	ctx.r3.s64 = ctx.r10.s64 + 1352;
	// bl 0x82295680
	ctx.lr = 0x833A5E30;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,20296
	ctx.r3.s64 = ctx.r9.s64 + 20296;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A5E3C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5E4C"))) PPC_WEAK_FUNC(sub_833A5E4C);
PPC_FUNC_IMPL(__imp__sub_833A5E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A5E50"))) PPC_WEAK_FUNC(sub_833A5E50);
PPC_FUNC_IMPL(__imp__sub_833A5E50) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,22176
	ctx.r4.s64 = ctx.r11.s64 + 22176;
	// addi r3,r10,1364
	ctx.r3.s64 = ctx.r10.s64 + 1364;
	// bl 0x82295680
	ctx.lr = 0x833A5E70;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,20392
	ctx.r3.s64 = ctx.r9.s64 + 20392;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A5E7C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5E8C"))) PPC_WEAK_FUNC(sub_833A5E8C);
PPC_FUNC_IMPL(__imp__sub_833A5E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A5E90"))) PPC_WEAK_FUNC(sub_833A5E90);
PPC_FUNC_IMPL(__imp__sub_833A5E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,20488
	ctx.r3.s64 = ctx.r11.s64 + 20488;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A5E9C"))) PPC_WEAK_FUNC(sub_833A5E9C);
PPC_FUNC_IMPL(__imp__sub_833A5E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A5EA0"))) PPC_WEAK_FUNC(sub_833A5EA0);
PPC_FUNC_IMPL(__imp__sub_833A5EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,15132
	ctx.r4.s64 = ctx.r11.s64 + 15132;
	// addi r3,r10,1388
	ctx.r3.s64 = ctx.r10.s64 + 1388;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8233e028
	sub_8233E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A5EC0"))) PPC_WEAK_FUNC(sub_833A5EC0);
PPC_FUNC_IMPL(__imp__sub_833A5EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,-14636
	ctx.r4.s64 = ctx.r11.s64 + -14636;
	// addi r3,r10,1396
	ctx.r3.s64 = ctx.r10.s64 + 1396;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8233e028
	sub_8233E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A5EE0"))) PPC_WEAK_FUNC(sub_833A5EE0);
PPC_FUNC_IMPL(__imp__sub_833A5EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,-14596
	ctx.r4.s64 = ctx.r11.s64 + -14596;
	// addi r3,r10,1404
	ctx.r3.s64 = ctx.r10.s64 + 1404;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8233e028
	sub_8233E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A5F00"))) PPC_WEAK_FUNC(sub_833A5F00);
PPC_FUNC_IMPL(__imp__sub_833A5F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,-14556
	ctx.r4.s64 = ctx.r11.s64 + -14556;
	// addi r3,r10,1412
	ctx.r3.s64 = ctx.r10.s64 + 1412;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8233e028
	sub_8233E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A5F20"))) PPC_WEAK_FUNC(sub_833A5F20);
PPC_FUNC_IMPL(__imp__sub_833A5F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,-14536
	ctx.r4.s64 = ctx.r11.s64 + -14536;
	// addi r3,r10,1420
	ctx.r3.s64 = ctx.r10.s64 + 1420;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8233e028
	sub_8233E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A5F40"))) PPC_WEAK_FUNC(sub_833A5F40);
PPC_FUNC_IMPL(__imp__sub_833A5F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,-14512
	ctx.r4.s64 = ctx.r11.s64 + -14512;
	// addi r3,r10,1428
	ctx.r3.s64 = ctx.r10.s64 + 1428;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8233e028
	sub_8233E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A5F60"))) PPC_WEAK_FUNC(sub_833A5F60);
PPC_FUNC_IMPL(__imp__sub_833A5F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,-14476
	ctx.r4.s64 = ctx.r11.s64 + -14476;
	// addi r3,r10,1436
	ctx.r3.s64 = ctx.r10.s64 + 1436;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8233e028
	sub_8233E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A5F80"))) PPC_WEAK_FUNC(sub_833A5F80);
PPC_FUNC_IMPL(__imp__sub_833A5F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,15168
	ctx.r4.s64 = ctx.r11.s64 + 15168;
	// addi r3,r10,1444
	ctx.r3.s64 = ctx.r10.s64 + 1444;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8233e028
	sub_8233E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A5FA0"))) PPC_WEAK_FUNC(sub_833A5FA0);
PPC_FUNC_IMPL(__imp__sub_833A5FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,15204
	ctx.r4.s64 = ctx.r11.s64 + 15204;
	// addi r3,r10,1452
	ctx.r3.s64 = ctx.r10.s64 + 1452;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8233e028
	sub_8233E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A5FC0"))) PPC_WEAK_FUNC(sub_833A5FC0);
PPC_FUNC_IMPL(__imp__sub_833A5FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,15240
	ctx.r4.s64 = ctx.r11.s64 + 15240;
	// addi r3,r10,1460
	ctx.r3.s64 = ctx.r10.s64 + 1460;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8233e028
	sub_8233E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A5FE0"))) PPC_WEAK_FUNC(sub_833A5FE0);
PPC_FUNC_IMPL(__imp__sub_833A5FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,15276
	ctx.r4.s64 = ctx.r11.s64 + 15276;
	// addi r3,r10,1468
	ctx.r3.s64 = ctx.r10.s64 + 1468;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8233e028
	sub_8233E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A6000"))) PPC_WEAK_FUNC(sub_833A6000);
PPC_FUNC_IMPL(__imp__sub_833A6000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,15312
	ctx.r4.s64 = ctx.r11.s64 + 15312;
	// addi r3,r10,1476
	ctx.r3.s64 = ctx.r10.s64 + 1476;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8233e028
	sub_8233E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A6020"))) PPC_WEAK_FUNC(sub_833A6020);
PPC_FUNC_IMPL(__imp__sub_833A6020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,15348
	ctx.r4.s64 = ctx.r11.s64 + 15348;
	// addi r3,r10,1484
	ctx.r3.s64 = ctx.r10.s64 + 1484;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8233e028
	sub_8233E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A6040"))) PPC_WEAK_FUNC(sub_833A6040);
PPC_FUNC_IMPL(__imp__sub_833A6040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,-14356
	ctx.r4.s64 = ctx.r11.s64 + -14356;
	// addi r3,r10,1492
	ctx.r3.s64 = ctx.r10.s64 + 1492;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8233e028
	sub_8233E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A6060"))) PPC_WEAK_FUNC(sub_833A6060);
PPC_FUNC_IMPL(__imp__sub_833A6060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,15384
	ctx.r4.s64 = ctx.r11.s64 + 15384;
	// addi r3,r10,1500
	ctx.r3.s64 = ctx.r10.s64 + 1500;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8233e028
	sub_8233E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A6080"))) PPC_WEAK_FUNC(sub_833A6080);
PPC_FUNC_IMPL(__imp__sub_833A6080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,28200
	ctx.r4.s64 = ctx.r11.s64 + 28200;
	// addi r3,r10,1508
	ctx.r3.s64 = ctx.r10.s64 + 1508;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8233e028
	sub_8233E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A60A0"))) PPC_WEAK_FUNC(sub_833A60A0);
PPC_FUNC_IMPL(__imp__sub_833A60A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,20504
	ctx.r3.s64 = ctx.r11.s64 + 20504;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A60AC"))) PPC_WEAK_FUNC(sub_833A60AC);
PPC_FUNC_IMPL(__imp__sub_833A60AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A60B0"))) PPC_WEAK_FUNC(sub_833A60B0);
PPC_FUNC_IMPL(__imp__sub_833A60B0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f4,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f3,31796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31796);
	ctx.f3.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f2,26252(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26252);
	ctx.f2.f64 = double(temp.f32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lfs f1,-32444(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r3,r7,1532
	ctx.r3.s64 = ctx.r7.s64 + 1532;
	// bl 0x823bbd30
	ctx.lr = 0x833A60E8;
	sub_823BBD30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A60F8"))) PPC_WEAK_FUNC(sub_833A60F8);
PPC_FUNC_IMPL(__imp__sub_833A60F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,22008
	ctx.r3.s64 = ctx.r11.s64 + 22008;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A6104"))) PPC_WEAK_FUNC(sub_833A6104);
PPC_FUNC_IMPL(__imp__sub_833A6104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6108"))) PPC_WEAK_FUNC(sub_833A6108);
PPC_FUNC_IMPL(__imp__sub_833A6108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,22032
	ctx.r3.s64 = ctx.r11.s64 + 22032;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A6114"))) PPC_WEAK_FUNC(sub_833A6114);
PPC_FUNC_IMPL(__imp__sub_833A6114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6118"))) PPC_WEAK_FUNC(sub_833A6118);
PPC_FUNC_IMPL(__imp__sub_833A6118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-2800(r1)
	ea = -2800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r11,-11820
	ctx.r4.s64 = ctx.r11.s64 + -11820;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,1608
	ctx.r3.s64 = ctx.r10.s64 + 1608;
	// bl 0x82295680
	ctx.lr = 0x833A6138;
	sub_82295680(ctx, base);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r4,r9,-23744
	ctx.r4.s64 = ctx.r9.s64 + -23744;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r7,r8,1608
	ctx.r7.s64 = ctx.r8.s64 + 1608;
	// addi r3,r7,12
	ctx.r3.s64 = ctx.r7.s64 + 12;
	// bl 0x82295680
	ctx.lr = 0x833A6150;
	sub_82295680(ctx, base);
	// lis r6,-32224
	ctx.r6.s64 = -2111832064;
	// addi r4,r6,-11836
	ctx.r4.s64 = ctx.r6.s64 + -11836;
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// addi r3,r5,1608
	ctx.r3.s64 = ctx.r5.s64 + 1608;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82295680
	ctx.lr = 0x833A6168;
	sub_82295680(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r11,-11852
	ctx.r4.s64 = ctx.r11.s64 + -11852;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,1608
	ctx.r9.s64 = ctx.r10.s64 + 1608;
	// addi r3,r9,36
	ctx.r3.s64 = ctx.r9.s64 + 36;
	// bl 0x82295680
	ctx.lr = 0x833A6180;
	sub_82295680(ctx, base);
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// addi r4,r8,-11868
	ctx.r4.s64 = ctx.r8.s64 + -11868;
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,1608
	ctx.r6.s64 = ctx.r7.s64 + 1608;
	// addi r3,r6,48
	ctx.r3.s64 = ctx.r6.s64 + 48;
	// bl 0x82295680
	ctx.lr = 0x833A6198;
	sub_82295680(ctx, base);
	// lis r5,-32224
	ctx.r5.s64 = -2111832064;
	// addi r4,r5,-11884
	ctx.r4.s64 = ctx.r5.s64 + -11884;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,1608
	ctx.r11.s64 = ctx.r3.s64 + 1608;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// bl 0x82295680
	ctx.lr = 0x833A61B0;
	sub_82295680(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r4,r10,-11900
	ctx.r4.s64 = ctx.r10.s64 + -11900;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,1608
	ctx.r8.s64 = ctx.r9.s64 + 1608;
	// addi r3,r8,72
	ctx.r3.s64 = ctx.r8.s64 + 72;
	// bl 0x82295680
	ctx.lr = 0x833A61C8;
	sub_82295680(ctx, base);
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// addi r4,r7,-11916
	ctx.r4.s64 = ctx.r7.s64 + -11916;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,1608
	ctx.r5.s64 = ctx.r6.s64 + 1608;
	// addi r3,r5,84
	ctx.r3.s64 = ctx.r5.s64 + 84;
	// bl 0x82295680
	ctx.lr = 0x833A61E0;
	sub_82295680(ctx, base);
	// lis r4,-32224
	ctx.r4.s64 = -2111832064;
	// addi r4,r4,-11928
	ctx.r4.s64 = ctx.r4.s64 + -11928;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,1608
	ctx.r11.s64 = ctx.r3.s64 + 1608;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82295680
	ctx.lr = 0x833A61F8;
	sub_82295680(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r4,r10,-11940
	ctx.r4.s64 = ctx.r10.s64 + -11940;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,1608
	ctx.r8.s64 = ctx.r9.s64 + 1608;
	// addi r3,r8,108
	ctx.r3.s64 = ctx.r8.s64 + 108;
	// bl 0x82295680
	ctx.lr = 0x833A6210;
	sub_82295680(ctx, base);
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// addi r4,r7,-11956
	ctx.r4.s64 = ctx.r7.s64 + -11956;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,1608
	ctx.r5.s64 = ctx.r6.s64 + 1608;
	// addi r3,r5,120
	ctx.r3.s64 = ctx.r5.s64 + 120;
	// bl 0x82295680
	ctx.lr = 0x833A6228;
	sub_82295680(ctx, base);
	// lis r4,-32224
	ctx.r4.s64 = -2111832064;
	// addi r4,r4,-11972
	ctx.r4.s64 = ctx.r4.s64 + -11972;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,1608
	ctx.r11.s64 = ctx.r3.s64 + 1608;
	// addi r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 + 132;
	// bl 0x82295680
	ctx.lr = 0x833A6240;
	sub_82295680(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r4,r10,-11988
	ctx.r4.s64 = ctx.r10.s64 + -11988;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,1608
	ctx.r8.s64 = ctx.r9.s64 + 1608;
	// addi r3,r8,144
	ctx.r3.s64 = ctx.r8.s64 + 144;
	// bl 0x82295680
	ctx.lr = 0x833A6258;
	sub_82295680(ctx, base);
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// addi r4,r7,-12000
	ctx.r4.s64 = ctx.r7.s64 + -12000;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,1608
	ctx.r5.s64 = ctx.r6.s64 + 1608;
	// addi r3,r5,156
	ctx.r3.s64 = ctx.r5.s64 + 156;
	// bl 0x82295680
	ctx.lr = 0x833A6270;
	sub_82295680(ctx, base);
	// lis r4,-32224
	ctx.r4.s64 = -2111832064;
	// addi r4,r4,-12016
	ctx.r4.s64 = ctx.r4.s64 + -12016;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,1608
	ctx.r11.s64 = ctx.r3.s64 + 1608;
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// bl 0x82295680
	ctx.lr = 0x833A6288;
	sub_82295680(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r4,r10,-12032
	ctx.r4.s64 = ctx.r10.s64 + -12032;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,1608
	ctx.r8.s64 = ctx.r9.s64 + 1608;
	// addi r3,r8,180
	ctx.r3.s64 = ctx.r8.s64 + 180;
	// bl 0x82295680
	ctx.lr = 0x833A62A0;
	sub_82295680(ctx, base);
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// addi r4,r7,-12044
	ctx.r4.s64 = ctx.r7.s64 + -12044;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,1608
	ctx.r5.s64 = ctx.r6.s64 + 1608;
	// addi r3,r5,192
	ctx.r3.s64 = ctx.r5.s64 + 192;
	// bl 0x82295680
	ctx.lr = 0x833A62B8;
	sub_82295680(ctx, base);
	// lis r4,-32224
	ctx.r4.s64 = -2111832064;
	// addi r4,r4,-12056
	ctx.r4.s64 = ctx.r4.s64 + -12056;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,1608
	ctx.r11.s64 = ctx.r3.s64 + 1608;
	// addi r3,r11,204
	ctx.r3.s64 = ctx.r11.s64 + 204;
	// bl 0x82295680
	ctx.lr = 0x833A62D0;
	sub_82295680(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r4,r10,-12072
	ctx.r4.s64 = ctx.r10.s64 + -12072;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,1608
	ctx.r8.s64 = ctx.r9.s64 + 1608;
	// addi r3,r8,216
	ctx.r3.s64 = ctx.r8.s64 + 216;
	// bl 0x82295680
	ctx.lr = 0x833A62E8;
	sub_82295680(ctx, base);
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// addi r4,r7,-12088
	ctx.r4.s64 = ctx.r7.s64 + -12088;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,1608
	ctx.r5.s64 = ctx.r6.s64 + 1608;
	// addi r3,r5,228
	ctx.r3.s64 = ctx.r5.s64 + 228;
	// bl 0x82295680
	ctx.lr = 0x833A6300;
	sub_82295680(ctx, base);
	// lis r4,-31941
	ctx.r4.s64 = -2093285376;
	// addi r3,r4,22624
	ctx.r3.s64 = ctx.r4.s64 + 22624;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A630C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,2800
	ctx.r1.s64 = ctx.r1.s64 + 2800;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A631C"))) PPC_WEAK_FUNC(sub_833A631C);
PPC_FUNC_IMPL(__imp__sub_833A631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6320"))) PPC_WEAK_FUNC(sub_833A6320);
PPC_FUNC_IMPL(__imp__sub_833A6320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,22680
	ctx.r3.s64 = ctx.r11.s64 + 22680;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A632C"))) PPC_WEAK_FUNC(sub_833A632C);
PPC_FUNC_IMPL(__imp__sub_833A632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6330"))) PPC_WEAK_FUNC(sub_833A6330);
PPC_FUNC_IMPL(__imp__sub_833A6330) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,21604
	ctx.r4.s64 = ctx.r11.s64 + 21604;
	// addi r3,r10,1848
	ctx.r3.s64 = ctx.r10.s64 + 1848;
	// bl 0x82295680
	ctx.lr = 0x833A6350;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,22760
	ctx.r3.s64 = ctx.r9.s64 + 22760;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A635C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A636C"))) PPC_WEAK_FUNC(sub_833A636C);
PPC_FUNC_IMPL(__imp__sub_833A636C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6370"))) PPC_WEAK_FUNC(sub_833A6370);
PPC_FUNC_IMPL(__imp__sub_833A6370) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,21624
	ctx.r4.s64 = ctx.r11.s64 + 21624;
	// addi r3,r10,1860
	ctx.r3.s64 = ctx.r10.s64 + 1860;
	// bl 0x82295680
	ctx.lr = 0x833A6390;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,22856
	ctx.r3.s64 = ctx.r9.s64 + 22856;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A639C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A63AC"))) PPC_WEAK_FUNC(sub_833A63AC);
PPC_FUNC_IMPL(__imp__sub_833A63AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A63B0"))) PPC_WEAK_FUNC(sub_833A63B0);
PPC_FUNC_IMPL(__imp__sub_833A63B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,22952
	ctx.r3.s64 = ctx.r11.s64 + 22952;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A63BC"))) PPC_WEAK_FUNC(sub_833A63BC);
PPC_FUNC_IMPL(__imp__sub_833A63BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A63C0"))) PPC_WEAK_FUNC(sub_833A63C0);
PPC_FUNC_IMPL(__imp__sub_833A63C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-29456
	ctx.r4.s64 = ctx.r11.s64 + -29456;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,2016
	ctx.r3.s64 = ctx.r10.s64 + 2016;
	// bl 0x82295680
	ctx.lr = 0x833A63E0;
	sub_82295680(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2016
	ctx.r8.s64 = ctx.r9.s64 + 2016;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r7,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// lis r6,-32223
	ctx.r6.s64 = -2111766528;
	// addi r4,r6,-29444
	ctx.r4.s64 = ctx.r6.s64 + -29444;
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// addi r3,r5,2016
	ctx.r3.s64 = ctx.r5.s64 + 2016;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82295680
	ctx.lr = 0x833A6408;
	sub_82295680(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,2016
	ctx.r10.s64 = ctx.r11.s64 + 2016;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// addi r4,r8,-29432
	ctx.r4.s64 = ctx.r8.s64 + -29432;
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2016
	ctx.r6.s64 = ctx.r7.s64 + 2016;
	// addi r3,r6,32
	ctx.r3.s64 = ctx.r6.s64 + 32;
	// bl 0x82295680
	ctx.lr = 0x833A6430;
	sub_82295680(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// addi r4,r5,2016
	ctx.r4.s64 = ctx.r5.s64 + 2016;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r3,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r3.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-29420
	ctx.r4.s64 = ctx.r11.s64 + -29420;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2016
	ctx.r9.s64 = ctx.r10.s64 + 2016;
	// addi r3,r9,48
	ctx.r3.s64 = ctx.r9.s64 + 48;
	// bl 0x82295680
	ctx.lr = 0x833A6458;
	sub_82295680(ctx, base);
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r7,r8,2016
	ctx.r7.s64 = ctx.r8.s64 + 2016;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r6,60(r7)
	PPC_STORE_U32(ctx.r7.u32 + 60, ctx.r6.u32);
	// lis r5,-31941
	ctx.r5.s64 = -2093285376;
	// addi r3,r5,22960
	ctx.r3.s64 = ctx.r5.s64 + 22960;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A6474;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6484"))) PPC_WEAK_FUNC(sub_833A6484);
PPC_FUNC_IMPL(__imp__sub_833A6484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6488"))) PPC_WEAK_FUNC(sub_833A6488);
PPC_FUNC_IMPL(__imp__sub_833A6488) {
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
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r6,r11,22400
	ctx.r6.s64 = ctx.r11.s64 + 22400;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,12
	ctx.r4.s64 = 12;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,2080
	ctx.r3.s64 = ctx.r10.s64 + 2080;
	// bl 0x82298ff8
	ctx.lr = 0x833A64B0;
	sub_82298FF8(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,23056
	ctx.r3.s64 = ctx.r9.s64 + 23056;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A64BC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A64CC"))) PPC_WEAK_FUNC(sub_833A64CC);
PPC_FUNC_IMPL(__imp__sub_833A64CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A64D0"))) PPC_WEAK_FUNC(sub_833A64D0);
PPC_FUNC_IMPL(__imp__sub_833A64D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6608(r1)
	ea = -6608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-27360
	ctx.r4.s64 = ctx.r11.s64 + -27360;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,2464
	ctx.r3.s64 = ctx.r10.s64 + 2464;
	// bl 0x82295680
	ctx.lr = 0x833A64F4;
	sub_82295680(ctx, base);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r4,r9,-27380
	ctx.r4.s64 = ctx.r9.s64 + -27380;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r7,r8,2464
	ctx.r7.s64 = ctx.r8.s64 + 2464;
	// addi r3,r7,12
	ctx.r3.s64 = ctx.r7.s64 + 12;
	// bl 0x82295680
	ctx.lr = 0x833A650C;
	sub_82295680(ctx, base);
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r4,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r4.u32);
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r7.u32);
	// lis r6,-32223
	ctx.r6.s64 = -2111766528;
	// addi r4,r6,-27384
	ctx.r4.s64 = ctx.r6.s64 + -27384;
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// addi r3,r5,2464
	ctx.r3.s64 = ctx.r5.s64 + 2464;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x82295680
	ctx.lr = 0x833A6554;
	sub_82295680(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-27404
	ctx.r4.s64 = ctx.r11.s64 + -27404;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// addi r3,r9,48
	ctx.r3.s64 = ctx.r9.s64 + 48;
	// bl 0x82295680
	ctx.lr = 0x833A656C;
	sub_82295680(ctx, base);
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r7,r8,2464
	ctx.r7.s64 = ctx.r8.s64 + 2464;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r6,60(r7)
	PPC_STORE_U32(ctx.r7.u32 + 60, ctx.r6.u32);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// addi r4,r5,2464
	ctx.r4.s64 = ctx.r5.s64 + 2464;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r3,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r3.u32);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,2464
	ctx.r10.s64 = ctx.r11.s64 + 2464;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r9.u32);
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// addi r4,r8,-27408
	ctx.r4.s64 = ctx.r8.s64 + -27408;
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// addi r3,r6,72
	ctx.r3.s64 = ctx.r6.s64 + 72;
	// bl 0x82295680
	ctx.lr = 0x833A65B4;
	sub_82295680(ctx, base);
	// lis r5,-32223
	ctx.r5.s64 = -2111766528;
	// addi r4,r5,-27432
	ctx.r4.s64 = ctx.r5.s64 + -27432;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x82295680
	ctx.lr = 0x833A65CC;
	sub_82295680(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r5,100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 100, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27436
	ctx.r4.s64 = ctx.r10.s64 + -27436;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,108
	ctx.r3.s64 = ctx.r8.s64 + 108;
	// bl 0x82295680
	ctx.lr = 0x833A6614;
	sub_82295680(ctx, base);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27460
	ctx.r4.s64 = ctx.r7.s64 + -27460;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,120
	ctx.r3.s64 = ctx.r5.s64 + 120;
	// bl 0x82295680
	ctx.lr = 0x833A662C;
	sub_82295680(ctx, base);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,136(r9)
	PPC_STORE_U32(ctx.r9.u32 + 136, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,140(r6)
	PPC_STORE_U32(ctx.r6.u32 + 140, ctx.r5.u32);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27464
	ctx.r4.s64 = ctx.r4.s64 + -27464;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x82295680
	ctx.lr = 0x833A6674;
	sub_82295680(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27484
	ctx.r4.s64 = ctx.r10.s64 + -27484;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,156
	ctx.r3.s64 = ctx.r8.s64 + 156;
	// bl 0x82295680
	ctx.lr = 0x833A668C;
	sub_82295680(ctx, base);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,168(r6)
	PPC_STORE_U32(ctx.r6.u32 + 168, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, ctx.r8.u32);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27488
	ctx.r4.s64 = ctx.r7.s64 + -27488;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,180
	ctx.r3.s64 = ctx.r5.s64 + 180;
	// bl 0x82295680
	ctx.lr = 0x833A66D4;
	sub_82295680(ctx, base);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27508
	ctx.r4.s64 = ctx.r4.s64 + -27508;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// bl 0x82295680
	ctx.lr = 0x833A66EC;
	sub_82295680(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 204, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r5,208(r6)
	PPC_STORE_U32(ctx.r6.u32 + 208, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27512
	ctx.r4.s64 = ctx.r10.s64 + -27512;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,216
	ctx.r3.s64 = ctx.r8.s64 + 216;
	// bl 0x82295680
	ctx.lr = 0x833A6734;
	sub_82295680(ctx, base);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27536
	ctx.r4.s64 = ctx.r7.s64 + -27536;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,228
	ctx.r3.s64 = ctx.r5.s64 + 228;
	// bl 0x82295680
	ctx.lr = 0x833A674C;
	sub_82295680(ctx, base);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,244(r9)
	PPC_STORE_U32(ctx.r9.u32 + 244, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,248(r6)
	PPC_STORE_U32(ctx.r6.u32 + 248, ctx.r5.u32);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27540
	ctx.r4.s64 = ctx.r4.s64 + -27540;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,252
	ctx.r3.s64 = ctx.r11.s64 + 252;
	// bl 0x82295680
	ctx.lr = 0x833A6794;
	sub_82295680(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27564
	ctx.r4.s64 = ctx.r10.s64 + -27564;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,264
	ctx.r3.s64 = ctx.r8.s64 + 264;
	// bl 0x82295680
	ctx.lr = 0x833A67AC;
	sub_82295680(ctx, base);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,276(r6)
	PPC_STORE_U32(ctx.r6.u32 + 276, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,284(r9)
	PPC_STORE_U32(ctx.r9.u32 + 284, ctx.r8.u32);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27568
	ctx.r4.s64 = ctx.r7.s64 + -27568;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,288
	ctx.r3.s64 = ctx.r5.s64 + 288;
	// bl 0x82295680
	ctx.lr = 0x833A67F4;
	sub_82295680(ctx, base);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27576
	ctx.r4.s64 = ctx.r4.s64 + -27576;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,300
	ctx.r3.s64 = ctx.r11.s64 + 300;
	// bl 0x82295680
	ctx.lr = 0x833A680C;
	sub_82295680(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,312(r9)
	PPC_STORE_U32(ctx.r9.u32 + 312, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,316(r6)
	PPC_STORE_U32(ctx.r6.u32 + 316, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27580
	ctx.r4.s64 = ctx.r10.s64 + -27580;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,324
	ctx.r3.s64 = ctx.r8.s64 + 324;
	// bl 0x82295680
	ctx.lr = 0x833A6854;
	sub_82295680(ctx, base);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27596
	ctx.r4.s64 = ctx.r7.s64 + -27596;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,336
	ctx.r3.s64 = ctx.r5.s64 + 336;
	// bl 0x82295680
	ctx.lr = 0x833A686C;
	sub_82295680(ctx, base);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,352(r9)
	PPC_STORE_U32(ctx.r9.u32 + 352, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,356(r6)
	PPC_STORE_U32(ctx.r6.u32 + 356, ctx.r5.u32);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27600
	ctx.r4.s64 = ctx.r4.s64 + -27600;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,360
	ctx.r3.s64 = ctx.r11.s64 + 360;
	// bl 0x82295680
	ctx.lr = 0x833A68B4;
	sub_82295680(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27620
	ctx.r4.s64 = ctx.r10.s64 + -27620;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,372
	ctx.r3.s64 = ctx.r8.s64 + 372;
	// bl 0x82295680
	ctx.lr = 0x833A68CC;
	sub_82295680(ctx, base);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,384(r6)
	PPC_STORE_U32(ctx.r6.u32 + 384, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,392(r9)
	PPC_STORE_U32(ctx.r9.u32 + 392, ctx.r8.u32);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27624
	ctx.r4.s64 = ctx.r7.s64 + -27624;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,396
	ctx.r3.s64 = ctx.r5.s64 + 396;
	// bl 0x82295680
	ctx.lr = 0x833A6914;
	sub_82295680(ctx, base);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27644
	ctx.r4.s64 = ctx.r4.s64 + -27644;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,408
	ctx.r3.s64 = ctx.r11.s64 + 408;
	// bl 0x82295680
	ctx.lr = 0x833A692C;
	sub_82295680(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,420(r9)
	PPC_STORE_U32(ctx.r9.u32 + 420, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,424(r6)
	PPC_STORE_U32(ctx.r6.u32 + 424, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27648
	ctx.r4.s64 = ctx.r10.s64 + -27648;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,432
	ctx.r3.s64 = ctx.r8.s64 + 432;
	// bl 0x82295680
	ctx.lr = 0x833A6974;
	sub_82295680(ctx, base);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27672
	ctx.r4.s64 = ctx.r7.s64 + -27672;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,444
	ctx.r3.s64 = ctx.r5.s64 + 444;
	// bl 0x82295680
	ctx.lr = 0x833A698C;
	sub_82295680(ctx, base);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 460, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,464(r6)
	PPC_STORE_U32(ctx.r6.u32 + 464, ctx.r5.u32);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27676
	ctx.r4.s64 = ctx.r4.s64 + -27676;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,468
	ctx.r3.s64 = ctx.r11.s64 + 468;
	// bl 0x82295680
	ctx.lr = 0x833A69D4;
	sub_82295680(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27696
	ctx.r4.s64 = ctx.r10.s64 + -27696;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,480
	ctx.r3.s64 = ctx.r8.s64 + 480;
	// bl 0x82295680
	ctx.lr = 0x833A69EC;
	sub_82295680(ctx, base);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,492(r6)
	PPC_STORE_U32(ctx.r6.u32 + 492, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 500, ctx.r8.u32);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27700
	ctx.r4.s64 = ctx.r7.s64 + -27700;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,504
	ctx.r3.s64 = ctx.r5.s64 + 504;
	// bl 0x82295680
	ctx.lr = 0x833A6A34;
	sub_82295680(ctx, base);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27716
	ctx.r4.s64 = ctx.r4.s64 + -27716;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,516
	ctx.r3.s64 = ctx.r11.s64 + 516;
	// bl 0x82295680
	ctx.lr = 0x833A6A4C;
	sub_82295680(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,528(r9)
	PPC_STORE_U32(ctx.r9.u32 + 528, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r5,532(r6)
	PPC_STORE_U32(ctx.r6.u32 + 532, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r11.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27720
	ctx.r4.s64 = ctx.r10.s64 + -27720;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,540
	ctx.r3.s64 = ctx.r8.s64 + 540;
	// bl 0x82295680
	ctx.lr = 0x833A6A94;
	sub_82295680(ctx, base);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27744
	ctx.r4.s64 = ctx.r7.s64 + -27744;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,552
	ctx.r3.s64 = ctx.r5.s64 + 552;
	// bl 0x82295680
	ctx.lr = 0x833A6AAC;
	sub_82295680(ctx, base);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,568(r9)
	PPC_STORE_U32(ctx.r9.u32 + 568, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,572(r6)
	PPC_STORE_U32(ctx.r6.u32 + 572, ctx.r5.u32);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27748
	ctx.r4.s64 = ctx.r4.s64 + -27748;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,576
	ctx.r3.s64 = ctx.r11.s64 + 576;
	// bl 0x82295680
	ctx.lr = 0x833A6AF4;
	sub_82295680(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27764
	ctx.r4.s64 = ctx.r10.s64 + -27764;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,588
	ctx.r3.s64 = ctx.r8.s64 + 588;
	// bl 0x82295680
	ctx.lr = 0x833A6B0C;
	sub_82295680(ctx, base);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,600(r6)
	PPC_STORE_U32(ctx.r6.u32 + 600, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 604, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,608(r9)
	PPC_STORE_U32(ctx.r9.u32 + 608, ctx.r8.u32);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23112
	ctx.r3.s64 = ctx.r7.s64 + 23112;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A6B48;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,6608
	ctx.r1.s64 = ctx.r1.s64 + 6608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6B58"))) PPC_WEAK_FUNC(sub_833A6B58);
PPC_FUNC_IMPL(__imp__sub_833A6B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-27356
	ctx.r4.s64 = ctx.r11.s64 + -27356;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,3076
	ctx.r3.s64 = ctx.r10.s64 + 3076;
	// bl 0x82295680
	ctx.lr = 0x833A6B78;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,23168
	ctx.r3.s64 = ctx.r9.s64 + 23168;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A6B84;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6B94"))) PPC_WEAK_FUNC(sub_833A6B94);
PPC_FUNC_IMPL(__imp__sub_833A6B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6B98"))) PPC_WEAK_FUNC(sub_833A6B98);
PPC_FUNC_IMPL(__imp__sub_833A6B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-27348
	ctx.r4.s64 = ctx.r11.s64 + -27348;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,3088
	ctx.r3.s64 = ctx.r10.s64 + 3088;
	// bl 0x82295680
	ctx.lr = 0x833A6BB8;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,23208
	ctx.r3.s64 = ctx.r9.s64 + 23208;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A6BC4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6BD4"))) PPC_WEAK_FUNC(sub_833A6BD4);
PPC_FUNC_IMPL(__imp__sub_833A6BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6BD8"))) PPC_WEAK_FUNC(sub_833A6BD8);
PPC_FUNC_IMPL(__imp__sub_833A6BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,3100
	ctx.r3.s64 = ctx.r10.s64 + 3100;
	// bl 0x82295680
	ctx.lr = 0x833A6BF8;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,23248
	ctx.r3.s64 = ctx.r9.s64 + 23248;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A6C04;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6C14"))) PPC_WEAK_FUNC(sub_833A6C14);
PPC_FUNC_IMPL(__imp__sub_833A6C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6C18"))) PPC_WEAK_FUNC(sub_833A6C18);
PPC_FUNC_IMPL(__imp__sub_833A6C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-27332
	ctx.r4.s64 = ctx.r11.s64 + -27332;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,3112
	ctx.r3.s64 = ctx.r10.s64 + 3112;
	// bl 0x82295680
	ctx.lr = 0x833A6C38;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,23288
	ctx.r3.s64 = ctx.r9.s64 + 23288;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A6C44;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6C54"))) PPC_WEAK_FUNC(sub_833A6C54);
PPC_FUNC_IMPL(__imp__sub_833A6C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6C58"))) PPC_WEAK_FUNC(sub_833A6C58);
PPC_FUNC_IMPL(__imp__sub_833A6C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-27320
	ctx.r4.s64 = ctx.r11.s64 + -27320;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,3124
	ctx.r3.s64 = ctx.r10.s64 + 3124;
	// bl 0x82295680
	ctx.lr = 0x833A6C78;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,23328
	ctx.r3.s64 = ctx.r9.s64 + 23328;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A6C84;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6C94"))) PPC_WEAK_FUNC(sub_833A6C94);
PPC_FUNC_IMPL(__imp__sub_833A6C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6C98"))) PPC_WEAK_FUNC(sub_833A6C98);
PPC_FUNC_IMPL(__imp__sub_833A6C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-27312
	ctx.r4.s64 = ctx.r11.s64 + -27312;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,3136
	ctx.r3.s64 = ctx.r10.s64 + 3136;
	// bl 0x82295680
	ctx.lr = 0x833A6CB8;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,23368
	ctx.r3.s64 = ctx.r9.s64 + 23368;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A6CC4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6CD4"))) PPC_WEAK_FUNC(sub_833A6CD4);
PPC_FUNC_IMPL(__imp__sub_833A6CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6CD8"))) PPC_WEAK_FUNC(sub_833A6CD8);
PPC_FUNC_IMPL(__imp__sub_833A6CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-18064
	ctx.r9.s64 = ctx.r11.s64 + -18064;
	// addi r8,r10,3184
	ctx.r8.s64 = ctx.r10.s64 + 3184;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6CF4"))) PPC_WEAK_FUNC(sub_833A6CF4);
PPC_FUNC_IMPL(__imp__sub_833A6CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6CF8"))) PPC_WEAK_FUNC(sub_833A6CF8);
PPC_FUNC_IMPL(__imp__sub_833A6CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,3232
	ctx.r9.s64 = ctx.r11.s64 + 3232;
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

__attribute__((alias("__imp__sub_833A6D28"))) PPC_WEAK_FUNC(sub_833A6D28);
PPC_FUNC_IMPL(__imp__sub_833A6D28) {
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
	// addi r5,r11,3248
	ctx.r5.s64 = ctx.r11.s64 + 3248;
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

__attribute__((alias("__imp__sub_833A6D70"))) PPC_WEAK_FUNC(sub_833A6D70);
PPC_FUNC_IMPL(__imp__sub_833A6D70) {
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
	// addi r5,r11,3200
	ctx.r5.s64 = ctx.r11.s64 + 3200;
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

__attribute__((alias("__imp__sub_833A6DB8"))) PPC_WEAK_FUNC(sub_833A6DB8);
PPC_FUNC_IMPL(__imp__sub_833A6DB8) {
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
loc_833A6DE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6de8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6DE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6DF8"))) PPC_WEAK_FUNC(sub_833A6DF8);
PPC_FUNC_IMPL(__imp__sub_833A6DF8) {
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
loc_833A6E28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6e28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6E28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6E38"))) PPC_WEAK_FUNC(sub_833A6E38);
PPC_FUNC_IMPL(__imp__sub_833A6E38) {
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
loc_833A6E68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6e68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6E68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6E78"))) PPC_WEAK_FUNC(sub_833A6E78);
PPC_FUNC_IMPL(__imp__sub_833A6E78) {
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
loc_833A6EA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6ea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6EA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6EB8"))) PPC_WEAK_FUNC(sub_833A6EB8);
PPC_FUNC_IMPL(__imp__sub_833A6EB8) {
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
loc_833A6EE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6ee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6EE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6EF8"))) PPC_WEAK_FUNC(sub_833A6EF8);
PPC_FUNC_IMPL(__imp__sub_833A6EF8) {
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
loc_833A6F28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6f28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6F28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6F38"))) PPC_WEAK_FUNC(sub_833A6F38);
PPC_FUNC_IMPL(__imp__sub_833A6F38) {
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
loc_833A6F68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6f68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6F68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6F78"))) PPC_WEAK_FUNC(sub_833A6F78);
PPC_FUNC_IMPL(__imp__sub_833A6F78) {
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
loc_833A6FA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6fa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6FA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6FB8"))) PPC_WEAK_FUNC(sub_833A6FB8);
PPC_FUNC_IMPL(__imp__sub_833A6FB8) {
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
loc_833A6FE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6fe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6FE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6FF8"))) PPC_WEAK_FUNC(sub_833A6FF8);
PPC_FUNC_IMPL(__imp__sub_833A6FF8) {
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
loc_833A7028:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7028;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7038"))) PPC_WEAK_FUNC(sub_833A7038);
PPC_FUNC_IMPL(__imp__sub_833A7038) {
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
loc_833A7068:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7068
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7068;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7078"))) PPC_WEAK_FUNC(sub_833A7078);
PPC_FUNC_IMPL(__imp__sub_833A7078) {
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
loc_833A70A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a70a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A70A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A70B8"))) PPC_WEAK_FUNC(sub_833A70B8);
PPC_FUNC_IMPL(__imp__sub_833A70B8) {
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
loc_833A70E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a70e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A70E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A70F8"))) PPC_WEAK_FUNC(sub_833A70F8);
PPC_FUNC_IMPL(__imp__sub_833A70F8) {
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
loc_833A7128:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7128
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7138"))) PPC_WEAK_FUNC(sub_833A7138);
PPC_FUNC_IMPL(__imp__sub_833A7138) {
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
loc_833A7168:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7168
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7178"))) PPC_WEAK_FUNC(sub_833A7178);
PPC_FUNC_IMPL(__imp__sub_833A7178) {
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
loc_833A71A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a71a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A71A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A71B8"))) PPC_WEAK_FUNC(sub_833A71B8);
PPC_FUNC_IMPL(__imp__sub_833A71B8) {
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
loc_833A71E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a71e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A71E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A71F8"))) PPC_WEAK_FUNC(sub_833A71F8);
PPC_FUNC_IMPL(__imp__sub_833A71F8) {
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
loc_833A7228:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7228;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7238"))) PPC_WEAK_FUNC(sub_833A7238);
PPC_FUNC_IMPL(__imp__sub_833A7238) {
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
loc_833A7268:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7268;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7278"))) PPC_WEAK_FUNC(sub_833A7278);
PPC_FUNC_IMPL(__imp__sub_833A7278) {
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
loc_833A72A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a72a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A72A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A72B8"))) PPC_WEAK_FUNC(sub_833A72B8);
PPC_FUNC_IMPL(__imp__sub_833A72B8) {
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
loc_833A72E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a72e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A72E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A72F8"))) PPC_WEAK_FUNC(sub_833A72F8);
PPC_FUNC_IMPL(__imp__sub_833A72F8) {
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
loc_833A7328:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7328
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7328;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7338"))) PPC_WEAK_FUNC(sub_833A7338);
PPC_FUNC_IMPL(__imp__sub_833A7338) {
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
loc_833A7368:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7378"))) PPC_WEAK_FUNC(sub_833A7378);
PPC_FUNC_IMPL(__imp__sub_833A7378) {
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
loc_833A73A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a73a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A73A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A73B8"))) PPC_WEAK_FUNC(sub_833A73B8);
PPC_FUNC_IMPL(__imp__sub_833A73B8) {
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
loc_833A73E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a73e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A73E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A73F8"))) PPC_WEAK_FUNC(sub_833A73F8);
PPC_FUNC_IMPL(__imp__sub_833A73F8) {
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
loc_833A7428:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7428
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7438"))) PPC_WEAK_FUNC(sub_833A7438);
PPC_FUNC_IMPL(__imp__sub_833A7438) {
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
loc_833A7468:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7468;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7478"))) PPC_WEAK_FUNC(sub_833A7478);
PPC_FUNC_IMPL(__imp__sub_833A7478) {
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
loc_833A74A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a74a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A74A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A74B8"))) PPC_WEAK_FUNC(sub_833A74B8);
PPC_FUNC_IMPL(__imp__sub_833A74B8) {
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
loc_833A74E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a74e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A74E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A74F8"))) PPC_WEAK_FUNC(sub_833A74F8);
PPC_FUNC_IMPL(__imp__sub_833A74F8) {
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
loc_833A7528:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7528;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7538"))) PPC_WEAK_FUNC(sub_833A7538);
PPC_FUNC_IMPL(__imp__sub_833A7538) {
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
loc_833A7568:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7568
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7578"))) PPC_WEAK_FUNC(sub_833A7578);
PPC_FUNC_IMPL(__imp__sub_833A7578) {
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
loc_833A75A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a75a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A75A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A75B8"))) PPC_WEAK_FUNC(sub_833A75B8);
PPC_FUNC_IMPL(__imp__sub_833A75B8) {
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
loc_833A75E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a75e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A75E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A75F8"))) PPC_WEAK_FUNC(sub_833A75F8);
PPC_FUNC_IMPL(__imp__sub_833A75F8) {
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
loc_833A7628:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7628
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7628;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7638"))) PPC_WEAK_FUNC(sub_833A7638);
PPC_FUNC_IMPL(__imp__sub_833A7638) {
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
loc_833A7668:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7668;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7678"))) PPC_WEAK_FUNC(sub_833A7678);
PPC_FUNC_IMPL(__imp__sub_833A7678) {
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
loc_833A76A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a76a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A76A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A76B8"))) PPC_WEAK_FUNC(sub_833A76B8);
PPC_FUNC_IMPL(__imp__sub_833A76B8) {
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
loc_833A76E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a76e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A76E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A76F8"))) PPC_WEAK_FUNC(sub_833A76F8);
PPC_FUNC_IMPL(__imp__sub_833A76F8) {
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
loc_833A7728:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7738"))) PPC_WEAK_FUNC(sub_833A7738);
PPC_FUNC_IMPL(__imp__sub_833A7738) {
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
loc_833A7768:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7778"))) PPC_WEAK_FUNC(sub_833A7778);
PPC_FUNC_IMPL(__imp__sub_833A7778) {
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
loc_833A77A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a77a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A77A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A77B8"))) PPC_WEAK_FUNC(sub_833A77B8);
PPC_FUNC_IMPL(__imp__sub_833A77B8) {
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
loc_833A77E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a77e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A77E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A77F8"))) PPC_WEAK_FUNC(sub_833A77F8);
PPC_FUNC_IMPL(__imp__sub_833A77F8) {
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
loc_833A7828:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7838"))) PPC_WEAK_FUNC(sub_833A7838);
PPC_FUNC_IMPL(__imp__sub_833A7838) {
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
loc_833A7868:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7868;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7878"))) PPC_WEAK_FUNC(sub_833A7878);
PPC_FUNC_IMPL(__imp__sub_833A7878) {
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
loc_833A78A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a78a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A78A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A78B8"))) PPC_WEAK_FUNC(sub_833A78B8);
PPC_FUNC_IMPL(__imp__sub_833A78B8) {
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
loc_833A78E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a78e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A78E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A78F8"))) PPC_WEAK_FUNC(sub_833A78F8);
PPC_FUNC_IMPL(__imp__sub_833A78F8) {
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
loc_833A7928:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7938"))) PPC_WEAK_FUNC(sub_833A7938);
PPC_FUNC_IMPL(__imp__sub_833A7938) {
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
loc_833A7968:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7978"))) PPC_WEAK_FUNC(sub_833A7978);
PPC_FUNC_IMPL(__imp__sub_833A7978) {
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
loc_833A79A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a79a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A79A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A79B8"))) PPC_WEAK_FUNC(sub_833A79B8);
PPC_FUNC_IMPL(__imp__sub_833A79B8) {
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
loc_833A79E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a79e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A79E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A79F8"))) PPC_WEAK_FUNC(sub_833A79F8);
PPC_FUNC_IMPL(__imp__sub_833A79F8) {
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
loc_833A7A28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7a28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7A28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7A38"))) PPC_WEAK_FUNC(sub_833A7A38);
PPC_FUNC_IMPL(__imp__sub_833A7A38) {
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
	// bne cr6,0x833a7a78
	if (!ctx.cr6.eq) goto loc_833A7A78;
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
loc_833A7A6C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7a6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7A6C;
loc_833A7A78:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,8000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8000);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833a7aa8
	if (ctx.cr6.eq) goto loc_833A7AA8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,2000
	ctx.r11.s64 = 2000;
	// lwz r10,-2168(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2168);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,8000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8000, ctx.r10.u32);
	// blr 
	return;
loc_833A7AA8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,-2168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2168);
	// stw r11,8000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8000, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7AB8"))) PPC_WEAK_FUNC(sub_833A7AB8);
PPC_FUNC_IMPL(__imp__sub_833A7AB8) {
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
	// bne cr6,0x833a7af8
	if (!ctx.cr6.eq) goto loc_833A7AF8;
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
loc_833A7AEC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7aec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7AEC;
loc_833A7AF8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,8004(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8004);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833a7b28
	if (ctx.cr6.eq) goto loc_833A7B28;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,2001
	ctx.r11.s64 = 2001;
	// lwz r10,-2164(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2164);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,8004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8004, ctx.r10.u32);
	// blr 
	return;
loc_833A7B28:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,-2164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2164);
	// stw r11,8004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8004, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7B38"))) PPC_WEAK_FUNC(sub_833A7B38);
PPC_FUNC_IMPL(__imp__sub_833A7B38) {
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
	// bne cr6,0x833a7b78
	if (!ctx.cr6.eq) goto loc_833A7B78;
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
loc_833A7B6C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7b6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7B6C;
loc_833A7B78:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,8008(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8008);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833a7ba8
	if (ctx.cr6.eq) goto loc_833A7BA8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,2002
	ctx.r11.s64 = 2002;
	// lwz r10,-2160(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2160);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,8008(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8008, ctx.r10.u32);
	// blr 
	return;
loc_833A7BA8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,-2160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2160);
	// stw r11,8008(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8008, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7BB8"))) PPC_WEAK_FUNC(sub_833A7BB8);
PPC_FUNC_IMPL(__imp__sub_833A7BB8) {
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
	// bne cr6,0x833a7bf8
	if (!ctx.cr6.eq) goto loc_833A7BF8;
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
loc_833A7BEC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7bec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7BEC;
loc_833A7BF8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,8012(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8012);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833a7c28
	if (ctx.cr6.eq) goto loc_833A7C28;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,2003
	ctx.r11.s64 = 2003;
	// lwz r10,-2156(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2156);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,8012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8012, ctx.r10.u32);
	// blr 
	return;
loc_833A7C28:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,-2156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2156);
	// stw r11,8012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8012, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7C38"))) PPC_WEAK_FUNC(sub_833A7C38);
PPC_FUNC_IMPL(__imp__sub_833A7C38) {
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
	// bne cr6,0x833a7c78
	if (!ctx.cr6.eq) goto loc_833A7C78;
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
loc_833A7C6C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7c6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7C6C;
loc_833A7C78:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,8016(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8016);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833a7ca8
	if (ctx.cr6.eq) goto loc_833A7CA8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,2004
	ctx.r11.s64 = 2004;
	// lwz r10,-2152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2152);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,8016(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8016, ctx.r10.u32);
	// blr 
	return;
loc_833A7CA8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,-2152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2152);
	// stw r11,8016(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8016, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7CB8"))) PPC_WEAK_FUNC(sub_833A7CB8);
PPC_FUNC_IMPL(__imp__sub_833A7CB8) {
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
	// bne cr6,0x833a7cf8
	if (!ctx.cr6.eq) goto loc_833A7CF8;
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
loc_833A7CEC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7cec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7CEC;
loc_833A7CF8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,8020(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8020);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833a7d28
	if (ctx.cr6.eq) goto loc_833A7D28;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,2005
	ctx.r11.s64 = 2005;
	// lwz r10,-2148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2148);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,8020(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8020, ctx.r10.u32);
	// blr 
	return;
loc_833A7D28:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,-2148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2148);
	// stw r11,8020(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8020, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7D38"))) PPC_WEAK_FUNC(sub_833A7D38);
PPC_FUNC_IMPL(__imp__sub_833A7D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,23432
	ctx.r3.s64 = ctx.r11.s64 + 23432;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A7D44"))) PPC_WEAK_FUNC(sub_833A7D44);
PPC_FUNC_IMPL(__imp__sub_833A7D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A7D48"))) PPC_WEAK_FUNC(sub_833A7D48);
PPC_FUNC_IMPL(__imp__sub_833A7D48) {
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
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,30448
	ctx.r6.s64 = ctx.r11.s64 + 30448;
	// addi r4,r9,28652
	ctx.r4.s64 = ctx.r9.s64 + 28652;
	// addi r3,r8,3292
	ctx.r3.s64 = ctx.r8.s64 + 3292;
	// addi r5,r10,-19752
	ctx.r5.s64 = ctx.r10.s64 + -19752;
	// bl 0x82c484a0
	ctx.lr = 0x833A7D78;
	sub_82C484A0(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23448
	ctx.r3.s64 = ctx.r7.s64 + 23448;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7D84;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7D94"))) PPC_WEAK_FUNC(sub_833A7D94);
PPC_FUNC_IMPL(__imp__sub_833A7D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A7D98"))) PPC_WEAK_FUNC(sub_833A7D98);
PPC_FUNC_IMPL(__imp__sub_833A7D98) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,15432
	ctx.r6.s64 = ctx.r11.s64 + 15432;
	// addi r4,r9,28772
	ctx.r4.s64 = ctx.r9.s64 + 28772;
	// addi r3,r8,3568
	ctx.r3.s64 = ctx.r8.s64 + 3568;
	// addi r5,r10,-18504
	ctx.r5.s64 = ctx.r10.s64 + -18504;
	// bl 0x82c38e48
	ctx.lr = 0x833A7DC8;
	sub_82C38E48(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23472
	ctx.r3.s64 = ctx.r7.s64 + 23472;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7DD4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7DE4"))) PPC_WEAK_FUNC(sub_833A7DE4);
PPC_FUNC_IMPL(__imp__sub_833A7DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A7DE8"))) PPC_WEAK_FUNC(sub_833A7DE8);
PPC_FUNC_IMPL(__imp__sub_833A7DE8) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,15708
	ctx.r6.s64 = ctx.r11.s64 + 15708;
	// addi r4,r9,28788
	ctx.r4.s64 = ctx.r9.s64 + 28788;
	// addi r3,r8,3844
	ctx.r3.s64 = ctx.r8.s64 + 3844;
	// addi r5,r10,-17944
	ctx.r5.s64 = ctx.r10.s64 + -17944;
	// bl 0x82c38e48
	ctx.lr = 0x833A7E18;
	sub_82C38E48(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23496
	ctx.r3.s64 = ctx.r7.s64 + 23496;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7E24;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7E34"))) PPC_WEAK_FUNC(sub_833A7E34);
PPC_FUNC_IMPL(__imp__sub_833A7E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A7E38"))) PPC_WEAK_FUNC(sub_833A7E38);
PPC_FUNC_IMPL(__imp__sub_833A7E38) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,28960
	ctx.r4.s64 = ctx.r10.s64 + 28960;
	// addi r3,r9,4120
	ctx.r3.s64 = ctx.r9.s64 + 4120;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16480
	ctx.r5.s64 = ctx.r11.s64 + -16480;
	// bl 0x82c4a3c0
	ctx.lr = 0x833A7E64;
	sub_82C4A3C0(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23520
	ctx.r3.s64 = ctx.r8.s64 + 23520;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7E70;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7E80"))) PPC_WEAK_FUNC(sub_833A7E80);
PPC_FUNC_IMPL(__imp__sub_833A7E80) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,15432
	ctx.r6.s64 = ctx.r11.s64 + 15432;
	// addi r4,r9,29080
	ctx.r4.s64 = ctx.r9.s64 + 29080;
	// addi r3,r8,4396
	ctx.r3.s64 = ctx.r8.s64 + 4396;
	// addi r5,r10,-13672
	ctx.r5.s64 = ctx.r10.s64 + -13672;
	// bl 0x82c38e48
	ctx.lr = 0x833A7EB0;
	sub_82C38E48(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23544
	ctx.r3.s64 = ctx.r7.s64 + 23544;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7EBC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7ECC"))) PPC_WEAK_FUNC(sub_833A7ECC);
PPC_FUNC_IMPL(__imp__sub_833A7ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A7ED0"))) PPC_WEAK_FUNC(sub_833A7ED0);
PPC_FUNC_IMPL(__imp__sub_833A7ED0) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,15708
	ctx.r6.s64 = ctx.r11.s64 + 15708;
	// addi r4,r9,29104
	ctx.r4.s64 = ctx.r9.s64 + 29104;
	// addi r3,r8,4672
	ctx.r3.s64 = ctx.r8.s64 + 4672;
	// addi r5,r10,-13576
	ctx.r5.s64 = ctx.r10.s64 + -13576;
	// bl 0x82c38e48
	ctx.lr = 0x833A7F00;
	sub_82C38E48(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23568
	ctx.r3.s64 = ctx.r7.s64 + 23568;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7F0C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7F1C"))) PPC_WEAK_FUNC(sub_833A7F1C);
PPC_FUNC_IMPL(__imp__sub_833A7F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A7F20"))) PPC_WEAK_FUNC(sub_833A7F20);
PPC_FUNC_IMPL(__imp__sub_833A7F20) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,9920
	ctx.r6.s64 = ctx.r11.s64 + 9920;
	// addi r4,r9,29284
	ctx.r4.s64 = ctx.r9.s64 + 29284;
	// addi r3,r8,4948
	ctx.r3.s64 = ctx.r8.s64 + 4948;
	// addi r5,r10,-11600
	ctx.r5.s64 = ctx.r10.s64 + -11600;
	// bl 0x82c38e48
	ctx.lr = 0x833A7F50;
	sub_82C38E48(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23592
	ctx.r3.s64 = ctx.r7.s64 + 23592;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7F5C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7F6C"))) PPC_WEAK_FUNC(sub_833A7F6C);
PPC_FUNC_IMPL(__imp__sub_833A7F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A7F70"))) PPC_WEAK_FUNC(sub_833A7F70);
PPC_FUNC_IMPL(__imp__sub_833A7F70) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,29308
	ctx.r4.s64 = ctx.r10.s64 + 29308;
	// addi r3,r9,5224
	ctx.r3.s64 = ctx.r9.s64 + 5224;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11512
	ctx.r5.s64 = ctx.r11.s64 + -11512;
	// bl 0x82c38e48
	ctx.lr = 0x833A7F9C;
	sub_82C38E48(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23616
	ctx.r3.s64 = ctx.r8.s64 + 23616;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7FA8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7FB8"))) PPC_WEAK_FUNC(sub_833A7FB8);
PPC_FUNC_IMPL(__imp__sub_833A7FB8) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,29396
	ctx.r4.s64 = ctx.r10.s64 + 29396;
	// addi r3,r9,5500
	ctx.r3.s64 = ctx.r9.s64 + 5500;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8096
	ctx.r5.s64 = ctx.r11.s64 + -8096;
	// bl 0x82c38ed8
	ctx.lr = 0x833A7FE4;
	sub_82C38ED8(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23640
	ctx.r3.s64 = ctx.r8.s64 + 23640;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7FF0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8000"))) PPC_WEAK_FUNC(sub_833A8000);
PPC_FUNC_IMPL(__imp__sub_833A8000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,23664
	ctx.r3.s64 = ctx.r11.s64 + 23664;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A800C"))) PPC_WEAK_FUNC(sub_833A800C);
PPC_FUNC_IMPL(__imp__sub_833A800C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8010"))) PPC_WEAK_FUNC(sub_833A8010);
PPC_FUNC_IMPL(__imp__sub_833A8010) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,8540
	ctx.r6.s64 = ctx.r11.s64 + 8540;
	// addi r4,r9,29484
	ctx.r4.s64 = ctx.r9.s64 + 29484;
	// addi r3,r8,5776
	ctx.r3.s64 = ctx.r8.s64 + 5776;
	// addi r5,r10,-5248
	ctx.r5.s64 = ctx.r10.s64 + -5248;
	// bl 0x82c4d7b8
	ctx.lr = 0x833A8040;
	sub_82C4D7B8(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23688
	ctx.r3.s64 = ctx.r7.s64 + 23688;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A804C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A805C"))) PPC_WEAK_FUNC(sub_833A805C);
PPC_FUNC_IMPL(__imp__sub_833A805C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8060"))) PPC_WEAK_FUNC(sub_833A8060);
PPC_FUNC_IMPL(__imp__sub_833A8060) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,29588
	ctx.r4.s64 = ctx.r10.s64 + 29588;
	// addi r3,r9,6052
	ctx.r3.s64 = ctx.r9.s64 + 6052;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,2560
	ctx.r5.s64 = ctx.r11.s64 + 2560;
	// bl 0x82c50c58
	ctx.lr = 0x833A808C;
	sub_82C50C58(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23712
	ctx.r3.s64 = ctx.r8.s64 + 23712;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8098;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A80A8"))) PPC_WEAK_FUNC(sub_833A80A8);
PPC_FUNC_IMPL(__imp__sub_833A80A8) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,5820
	ctx.r6.s64 = ctx.r11.s64 + 5820;
	// addi r4,r9,29708
	ctx.r4.s64 = ctx.r9.s64 + 29708;
	// addi r3,r8,6328
	ctx.r3.s64 = ctx.r8.s64 + 6328;
	// addi r5,r10,4760
	ctx.r5.s64 = ctx.r10.s64 + 4760;
	// bl 0x82c51d50
	ctx.lr = 0x833A80D8;
	sub_82C51D50(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23736
	ctx.r3.s64 = ctx.r7.s64 + 23736;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A80E4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A80F4"))) PPC_WEAK_FUNC(sub_833A80F4);
PPC_FUNC_IMPL(__imp__sub_833A80F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A80F8"))) PPC_WEAK_FUNC(sub_833A80F8);
PPC_FUNC_IMPL(__imp__sub_833A80F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r11,28104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833a8124
	if (ctx.cr6.eq) goto loc_833A8124;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lfs f0,31900(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31900);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,6604(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 6604, temp.u32);
	// blr 
	return;
loc_833A8124:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,31900
	ctx.r9.s64 = ctx.r11.s64 + 31900;
	// lfs f13,31900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31900);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1192(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1192);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,6604(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6604, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8144"))) PPC_WEAK_FUNC(sub_833A8144);
PPC_FUNC_IMPL(__imp__sub_833A8144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8148"))) PPC_WEAK_FUNC(sub_833A8148);
PPC_FUNC_IMPL(__imp__sub_833A8148) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,29824
	ctx.r4.s64 = ctx.r10.s64 + 29824;
	// addi r3,r9,6608
	ctx.r3.s64 = ctx.r9.s64 + 6608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9432
	ctx.r5.s64 = ctx.r11.s64 + 9432;
	// bl 0x82c484a0
	ctx.lr = 0x833A8174;
	sub_82C484A0(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23760
	ctx.r3.s64 = ctx.r8.s64 + 23760;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8180;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8190"))) PPC_WEAK_FUNC(sub_833A8190);
PPC_FUNC_IMPL(__imp__sub_833A8190) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,8540
	ctx.r6.s64 = ctx.r11.s64 + 8540;
	// addi r4,r9,29948
	ctx.r4.s64 = ctx.r9.s64 + 29948;
	// addi r3,r8,6884
	ctx.r3.s64 = ctx.r8.s64 + 6884;
	// addi r5,r10,10488
	ctx.r5.s64 = ctx.r10.s64 + 10488;
	// bl 0x82c4d7b8
	ctx.lr = 0x833A81C0;
	sub_82C4D7B8(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23784
	ctx.r3.s64 = ctx.r7.s64 + 23784;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A81CC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A81DC"))) PPC_WEAK_FUNC(sub_833A81DC);
PPC_FUNC_IMPL(__imp__sub_833A81DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A81E0"))) PPC_WEAK_FUNC(sub_833A81E0);
PPC_FUNC_IMPL(__imp__sub_833A81E0) {
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
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r3,r8,7160
	ctx.r3.s64 = ctx.r8.s64 + 7160;
	// addi r6,r11,14880
	ctx.r6.s64 = ctx.r11.s64 + 14880;
	// addi r4,r9,30056
	ctx.r4.s64 = ctx.r9.s64 + 30056;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,18456
	ctx.r5.s64 = ctx.r10.s64 + 18456;
	// bl 0x82c34238
	ctx.lr = 0x833A8218;
	sub_82C34238(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23808
	ctx.r3.s64 = ctx.r7.s64 + 23808;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8224;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8234"))) PPC_WEAK_FUNC(sub_833A8234);
PPC_FUNC_IMPL(__imp__sub_833A8234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8238"))) PPC_WEAK_FUNC(sub_833A8238);
PPC_FUNC_IMPL(__imp__sub_833A8238) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,30080
	ctx.r4.s64 = ctx.r10.s64 + 30080;
	// addi r3,r9,7436
	ctx.r3.s64 = ctx.r9.s64 + 7436;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,18560
	ctx.r5.s64 = ctx.r11.s64 + 18560;
	// bl 0x82c55768
	ctx.lr = 0x833A8264;
	sub_82C55768(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23832
	ctx.r3.s64 = ctx.r8.s64 + 23832;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8270;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8280"))) PPC_WEAK_FUNC(sub_833A8280);
PPC_FUNC_IMPL(__imp__sub_833A8280) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,30252
	ctx.r4.s64 = ctx.r10.s64 + 30252;
	// addi r3,r9,7712
	ctx.r3.s64 = ctx.r9.s64 + 7712;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26752
	ctx.r5.s64 = ctx.r11.s64 + 26752;
	// bl 0x82c56fc8
	ctx.lr = 0x833A82AC;
	sub_82C56FC8(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23856
	ctx.r3.s64 = ctx.r8.s64 + 23856;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A82B8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A82C8"))) PPC_WEAK_FUNC(sub_833A82C8);
PPC_FUNC_IMPL(__imp__sub_833A82C8) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,30276
	ctx.r4.s64 = ctx.r10.s64 + 30276;
	// addi r3,r9,7988
	ctx.r3.s64 = ctx.r9.s64 + 7988;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26824
	ctx.r5.s64 = ctx.r11.s64 + 26824;
	// bl 0x82c56fc8
	ctx.lr = 0x833A82F4;
	sub_82C56FC8(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23880
	ctx.r3.s64 = ctx.r8.s64 + 23880;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8300;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8310"))) PPC_WEAK_FUNC(sub_833A8310);
PPC_FUNC_IMPL(__imp__sub_833A8310) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,30300
	ctx.r4.s64 = ctx.r10.s64 + 30300;
	// addi r3,r9,8264
	ctx.r3.s64 = ctx.r9.s64 + 8264;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29944
	ctx.r5.s64 = ctx.r11.s64 + 29944;
	// bl 0x82c58ca8
	ctx.lr = 0x833A833C;
	sub_82C58CA8(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23904
	ctx.r3.s64 = ctx.r8.s64 + 23904;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8348;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8358"))) PPC_WEAK_FUNC(sub_833A8358);
PPC_FUNC_IMPL(__imp__sub_833A8358) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r6,r11,4716
	ctx.r6.s64 = ctx.r11.s64 + 4716;
	// addi r4,r10,30440
	ctx.r4.s64 = ctx.r10.s64 + 30440;
	// addi r3,r9,8540
	ctx.r3.s64 = ctx.r9.s64 + 8540;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82c4d7b8
	ctx.lr = 0x833A8384;
	sub_82C4D7B8(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23928
	ctx.r3.s64 = ctx.r8.s64 + 23928;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8390;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A83A0"))) PPC_WEAK_FUNC(sub_833A83A0);
PPC_FUNC_IMPL(__imp__sub_833A83A0) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,12796
	ctx.r6.s64 = ctx.r11.s64 + 12796;
	// addi r4,r9,30536
	ctx.r4.s64 = ctx.r9.s64 + 30536;
	// addi r3,r8,8816
	ctx.r3.s64 = ctx.r8.s64 + 8816;
	// addi r5,r10,-29888
	ctx.r5.s64 = ctx.r10.s64 + -29888;
	// bl 0x82c59ed8
	ctx.lr = 0x833A83D0;
	sub_82C59ED8(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23952
	ctx.r3.s64 = ctx.r7.s64 + 23952;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A83DC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A83EC"))) PPC_WEAK_FUNC(sub_833A83EC);
PPC_FUNC_IMPL(__imp__sub_833A83EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A83F0"))) PPC_WEAK_FUNC(sub_833A83F0);
PPC_FUNC_IMPL(__imp__sub_833A83F0) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,16516
	ctx.r6.s64 = ctx.r11.s64 + 16516;
	// addi r4,r9,30676
	ctx.r4.s64 = ctx.r9.s64 + 30676;
	// addi r3,r8,9092
	ctx.r3.s64 = ctx.r8.s64 + 9092;
	// addi r5,r10,-28256
	ctx.r5.s64 = ctx.r10.s64 + -28256;
	// bl 0x82c61438
	ctx.lr = 0x833A8420;
	sub_82C61438(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23976
	ctx.r3.s64 = ctx.r7.s64 + 23976;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A842C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A843C"))) PPC_WEAK_FUNC(sub_833A843C);
PPC_FUNC_IMPL(__imp__sub_833A843C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8440"))) PPC_WEAK_FUNC(sub_833A8440);
PPC_FUNC_IMPL(__imp__sub_833A8440) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,-28988
	ctx.r6.s64 = ctx.r11.s64 + -28988;
	// addi r4,r9,31176
	ctx.r4.s64 = ctx.r9.s64 + 31176;
	// addi r3,r8,9368
	ctx.r3.s64 = ctx.r8.s64 + 9368;
	// addi r5,r10,-23320
	ctx.r5.s64 = ctx.r10.s64 + -23320;
	// bl 0x82c62390
	ctx.lr = 0x833A8470;
	sub_82C62390(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24000
	ctx.r3.s64 = ctx.r7.s64 + 24000;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A847C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A848C"))) PPC_WEAK_FUNC(sub_833A848C);
PPC_FUNC_IMPL(__imp__sub_833A848C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8490"))) PPC_WEAK_FUNC(sub_833A8490);
PPC_FUNC_IMPL(__imp__sub_833A8490) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,31192
	ctx.r4.s64 = ctx.r10.s64 + 31192;
	// addi r3,r9,9644
	ctx.r3.s64 = ctx.r9.s64 + 9644;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22224
	ctx.r5.s64 = ctx.r11.s64 + -22224;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A84C4;
	sub_82C1E6A0(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24024
	ctx.r3.s64 = ctx.r8.s64 + 24024;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A84D0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A84E0"))) PPC_WEAK_FUNC(sub_833A84E0);
PPC_FUNC_IMPL(__imp__sub_833A84E0) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-19632
	ctx.r4.s64 = ctx.r10.s64 + -19632;
	// addi r3,r9,9920
	ctx.r3.s64 = ctx.r9.s64 + 9920;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-20048
	ctx.r5.s64 = ctx.r11.s64 + -20048;
	// bl 0x82c38e48
	ctx.lr = 0x833A850C;
	sub_82C38E48(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24048
	ctx.r3.s64 = ctx.r8.s64 + 24048;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8518;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8528"))) PPC_WEAK_FUNC(sub_833A8528);
PPC_FUNC_IMPL(__imp__sub_833A8528) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,31696
	ctx.r4.s64 = ctx.r10.s64 + 31696;
	// addi r3,r9,10196
	ctx.r3.s64 = ctx.r9.s64 + 10196;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17336
	ctx.r5.s64 = ctx.r11.s64 + -17336;
	// bl 0x82c38e48
	ctx.lr = 0x833A8554;
	sub_82C38E48(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24072
	ctx.r3.s64 = ctx.r8.s64 + 24072;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8560;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8570"))) PPC_WEAK_FUNC(sub_833A8570);
PPC_FUNC_IMPL(__imp__sub_833A8570) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,31748
	ctx.r4.s64 = ctx.r10.s64 + 31748;
	// addi r3,r9,10472
	ctx.r3.s64 = ctx.r9.s64 + 10472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-15080
	ctx.r5.s64 = ctx.r11.s64 + -15080;
	// bl 0x82c38e48
	ctx.lr = 0x833A859C;
	sub_82C38E48(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24096
	ctx.r3.s64 = ctx.r8.s64 + 24096;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A85A8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A85B8"))) PPC_WEAK_FUNC(sub_833A85B8);
PPC_FUNC_IMPL(__imp__sub_833A85B8) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,-28692
	ctx.r6.s64 = ctx.r11.s64 + -28692;
	// addi r4,r9,31804
	ctx.r4.s64 = ctx.r9.s64 + 31804;
	// addi r3,r8,10748
	ctx.r3.s64 = ctx.r8.s64 + 10748;
	// addi r5,r10,-12152
	ctx.r5.s64 = ctx.r10.s64 + -12152;
	// bl 0x82c38e48
	ctx.lr = 0x833A85E8;
	sub_82C38E48(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24120
	ctx.r3.s64 = ctx.r7.s64 + 24120;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A85F4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8604"))) PPC_WEAK_FUNC(sub_833A8604);
PPC_FUNC_IMPL(__imp__sub_833A8604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8608"))) PPC_WEAK_FUNC(sub_833A8608);
PPC_FUNC_IMPL(__imp__sub_833A8608) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,31960
	ctx.r4.s64 = ctx.r10.s64 + 31960;
	// addi r3,r9,11024
	ctx.r3.s64 = ctx.r9.s64 + 11024;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7120
	ctx.r5.s64 = ctx.r11.s64 + -7120;
	// bl 0x82c38e48
	ctx.lr = 0x833A8634;
	sub_82C38E48(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24144
	ctx.r3.s64 = ctx.r8.s64 + 24144;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8640;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8650"))) PPC_WEAK_FUNC(sub_833A8650);
PPC_FUNC_IMPL(__imp__sub_833A8650) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,32084
	ctx.r4.s64 = ctx.r10.s64 + 32084;
	// addi r3,r9,11300
	ctx.r3.s64 = ctx.r9.s64 + 11300;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6192
	ctx.r5.s64 = ctx.r11.s64 + -6192;
	// bl 0x82c56fc8
	ctx.lr = 0x833A867C;
	sub_82C56FC8(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24168
	ctx.r3.s64 = ctx.r8.s64 + 24168;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8688;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8698"))) PPC_WEAK_FUNC(sub_833A8698);
PPC_FUNC_IMPL(__imp__sub_833A8698) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-17392
	ctx.r4.s64 = ctx.r10.s64 + -17392;
	// addi r3,r9,11576
	ctx.r3.s64 = ctx.r9.s64 + 11576;
	// addi r5,r11,-4520
	ctx.r5.s64 = ctx.r11.s64 + -4520;
	// bl 0x82baef68
	ctx.lr = 0x833A86C0;
	sub_82BAEF68(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24192
	ctx.r3.s64 = ctx.r8.s64 + 24192;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A86CC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A86DC"))) PPC_WEAK_FUNC(sub_833A86DC);
PPC_FUNC_IMPL(__imp__sub_833A86DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A86E0"))) PPC_WEAK_FUNC(sub_833A86E0);
PPC_FUNC_IMPL(__imp__sub_833A86E0) {
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
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r3,r8,11844
	ctx.r3.s64 = ctx.r8.s64 + 11844;
	// addi r6,r11,4440
	ctx.r6.s64 = ctx.r11.s64 + 4440;
	// addi r4,r9,32124
	ctx.r4.s64 = ctx.r9.s64 + 32124;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-3512
	ctx.r5.s64 = ctx.r10.s64 + -3512;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A8718;
	sub_82C1E6A0(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24248
	ctx.r3.s64 = ctx.r7.s64 + 24248;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8724;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8734"))) PPC_WEAK_FUNC(sub_833A8734);
PPC_FUNC_IMPL(__imp__sub_833A8734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8738"))) PPC_WEAK_FUNC(sub_833A8738);
PPC_FUNC_IMPL(__imp__sub_833A8738) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,32188
	ctx.r4.s64 = ctx.r10.s64 + 32188;
	// addi r3,r9,12120
	ctx.r3.s64 = ctx.r9.s64 + 12120;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1680
	ctx.r5.s64 = ctx.r11.s64 + -1680;
	// bl 0x82c4a020
	ctx.lr = 0x833A876C;
	sub_82C4A020(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24272
	ctx.r3.s64 = ctx.r8.s64 + 24272;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8778;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8788"))) PPC_WEAK_FUNC(sub_833A8788);
PPC_FUNC_IMPL(__imp__sub_833A8788) {
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
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r3,r8,12396
	ctx.r3.s64 = ctx.r8.s64 + 12396;
	// addi r6,r11,16240
	ctx.r6.s64 = ctx.r11.s64 + 16240;
	// addi r4,r9,32264
	ctx.r4.s64 = ctx.r9.s64 + 32264;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,4304
	ctx.r5.s64 = ctx.r10.s64 + 4304;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A87C0;
	sub_82C1E6A0(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24296
	ctx.r3.s64 = ctx.r7.s64 + 24296;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A87CC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A87DC"))) PPC_WEAK_FUNC(sub_833A87DC);
PPC_FUNC_IMPL(__imp__sub_833A87DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A87E0"))) PPC_WEAK_FUNC(sub_833A87E0);
PPC_FUNC_IMPL(__imp__sub_833A87E0) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,32336
	ctx.r4.s64 = ctx.r10.s64 + 32336;
	// addi r3,r9,12672
	ctx.r3.s64 = ctx.r9.s64 + 12672;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9024
	ctx.r5.s64 = ctx.r11.s64 + 9024;
	// bl 0x82c484a0
	ctx.lr = 0x833A880C;
	sub_82C484A0(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24320
	ctx.r3.s64 = ctx.r8.s64 + 24320;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8818;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8828"))) PPC_WEAK_FUNC(sub_833A8828);
PPC_FUNC_IMPL(__imp__sub_833A8828) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,32364
	ctx.r4.s64 = ctx.r10.s64 + 32364;
	// addi r3,r9,12948
	ctx.r3.s64 = ctx.r9.s64 + 12948;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9112
	ctx.r5.s64 = ctx.r11.s64 + 9112;
	// bl 0x82c472b0
	ctx.lr = 0x833A8854;
	sub_82C472B0(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24344
	ctx.r3.s64 = ctx.r8.s64 + 24344;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8860;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8870"))) PPC_WEAK_FUNC(sub_833A8870);
PPC_FUNC_IMPL(__imp__sub_833A8870) {
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
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r3,r8,13224
	ctx.r3.s64 = ctx.r8.s64 + 13224;
	// addi r6,r11,-12904
	ctx.r6.s64 = ctx.r11.s64 + -12904;
	// addi r4,r9,32504
	ctx.r4.s64 = ctx.r9.s64 + 32504;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,12472
	ctx.r5.s64 = ctx.r10.s64 + 12472;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A88A8;
	sub_82C1E6A0(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24368
	ctx.r3.s64 = ctx.r7.s64 + 24368;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A88B4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A88C4"))) PPC_WEAK_FUNC(sub_833A88C4);
PPC_FUNC_IMPL(__imp__sub_833A88C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A88C8"))) PPC_WEAK_FUNC(sub_833A88C8);
PPC_FUNC_IMPL(__imp__sub_833A88C8) {
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
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r3,r8,13500
	ctx.r3.s64 = ctx.r8.s64 + 13500;
	// addi r6,r11,-28416
	ctx.r6.s64 = ctx.r11.s64 + -28416;
	// addi r4,r9,32576
	ctx.r4.s64 = ctx.r9.s64 + 32576;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,17080
	ctx.r5.s64 = ctx.r10.s64 + 17080;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A8900;
	sub_82C1E6A0(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24392
	ctx.r3.s64 = ctx.r7.s64 + 24392;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A890C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A891C"))) PPC_WEAK_FUNC(sub_833A891C);
PPC_FUNC_IMPL(__imp__sub_833A891C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8920"))) PPC_WEAK_FUNC(sub_833A8920);
PPC_FUNC_IMPL(__imp__sub_833A8920) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,6608
	ctx.r6.s64 = ctx.r11.s64 + 6608;
	// addi r4,r9,32640
	ctx.r4.s64 = ctx.r9.s64 + 32640;
	// addi r3,r8,13776
	ctx.r3.s64 = ctx.r8.s64 + 13776;
	// addi r5,r10,17392
	ctx.r5.s64 = ctx.r10.s64 + 17392;
	// bl 0x82c484a0
	ctx.lr = 0x833A8950;
	sub_82C484A0(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24416
	ctx.r3.s64 = ctx.r7.s64 + 24416;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A895C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A896C"))) PPC_WEAK_FUNC(sub_833A896C);
PPC_FUNC_IMPL(__imp__sub_833A896C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8970"))) PPC_WEAK_FUNC(sub_833A8970);
PPC_FUNC_IMPL(__imp__sub_833A8970) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,32748
	ctx.r4.s64 = ctx.r10.s64 + 32748;
	// addi r3,r9,14052
	ctx.r3.s64 = ctx.r9.s64 + 14052;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,17976
	ctx.r5.s64 = ctx.r11.s64 + 17976;
	// bl 0x82c34238
	ctx.lr = 0x833A89A4;
	sub_82C34238(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24440
	ctx.r3.s64 = ctx.r8.s64 + 24440;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A89B0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A89C0"))) PPC_WEAK_FUNC(sub_833A89C0);
PPC_FUNC_IMPL(__imp__sub_833A89C0) {
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
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r3,r8,14328
	ctx.r3.s64 = ctx.r8.s64 + 14328;
	// addi r6,r11,14052
	ctx.r6.s64 = ctx.r11.s64 + 14052;
	// addi r4,r9,-32768
	ctx.r4.s64 = ctx.r9.s64 + -32768;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,18248
	ctx.r5.s64 = ctx.r10.s64 + 18248;
	// bl 0x82c34238
	ctx.lr = 0x833A89F8;
	sub_82C34238(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24464
	ctx.r3.s64 = ctx.r7.s64 + 24464;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8A04;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8A14"))) PPC_WEAK_FUNC(sub_833A8A14);
PPC_FUNC_IMPL(__imp__sub_833A8A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8A18"))) PPC_WEAK_FUNC(sub_833A8A18);
PPC_FUNC_IMPL(__imp__sub_833A8A18) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-32536
	ctx.r4.s64 = ctx.r10.s64 + -32536;
	// addi r3,r9,14604
	ctx.r3.s64 = ctx.r9.s64 + 14604;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20696
	ctx.r5.s64 = ctx.r11.s64 + 20696;
	// bl 0x82c6d180
	ctx.lr = 0x833A8A44;
	sub_82C6D180(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24488
	ctx.r3.s64 = ctx.r8.s64 + 24488;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8A50;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8A60"))) PPC_WEAK_FUNC(sub_833A8A60);
PPC_FUNC_IMPL(__imp__sub_833A8A60) {
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
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r3,r8,14880
	ctx.r3.s64 = ctx.r8.s64 + 14880;
	// addi r6,r11,14052
	ctx.r6.s64 = ctx.r11.s64 + 14052;
	// addi r4,r9,-32416
	ctx.r4.s64 = ctx.r9.s64 + -32416;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,22616
	ctx.r5.s64 = ctx.r10.s64 + 22616;
	// bl 0x82c34238
	ctx.lr = 0x833A8A98;
	sub_82C34238(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24512
	ctx.r3.s64 = ctx.r7.s64 + 24512;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8AA4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8AB4"))) PPC_WEAK_FUNC(sub_833A8AB4);
PPC_FUNC_IMPL(__imp__sub_833A8AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8AB8"))) PPC_WEAK_FUNC(sub_833A8AB8);
PPC_FUNC_IMPL(__imp__sub_833A8AB8) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-32288
	ctx.r4.s64 = ctx.r10.s64 + -32288;
	// addi r3,r9,15156
	ctx.r3.s64 = ctx.r9.s64 + 15156;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25784
	ctx.r5.s64 = ctx.r11.s64 + 25784;
	// bl 0x82c4a020
	ctx.lr = 0x833A8AEC;
	sub_82C4A020(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24536
	ctx.r3.s64 = ctx.r8.s64 + 24536;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8AF8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8B08"))) PPC_WEAK_FUNC(sub_833A8B08);
PPC_FUNC_IMPL(__imp__sub_833A8B08) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-32196
	ctx.r4.s64 = ctx.r10.s64 + -32196;
	// addi r3,r9,15432
	ctx.r3.s64 = ctx.r9.s64 + 15432;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29288
	ctx.r5.s64 = ctx.r11.s64 + 29288;
	// bl 0x82c38e48
	ctx.lr = 0x833A8B34;
	sub_82C38E48(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24560
	ctx.r3.s64 = ctx.r8.s64 + 24560;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8B40;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8B50"))) PPC_WEAK_FUNC(sub_833A8B50);
PPC_FUNC_IMPL(__imp__sub_833A8B50) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,10748
	ctx.r6.s64 = ctx.r11.s64 + 10748;
	// addi r4,r9,-32172
	ctx.r4.s64 = ctx.r9.s64 + -32172;
	// addi r3,r8,15708
	ctx.r3.s64 = ctx.r8.s64 + 15708;
	// addi r5,r10,29376
	ctx.r5.s64 = ctx.r10.s64 + 29376;
	// bl 0x82c38e48
	ctx.lr = 0x833A8B80;
	sub_82C38E48(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24584
	ctx.r3.s64 = ctx.r7.s64 + 24584;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8B8C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8B9C"))) PPC_WEAK_FUNC(sub_833A8B9C);
PPC_FUNC_IMPL(__imp__sub_833A8B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8BA0"))) PPC_WEAK_FUNC(sub_833A8BA0);
PPC_FUNC_IMPL(__imp__sub_833A8BA0) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-31988
	ctx.r4.s64 = ctx.r10.s64 + -31988;
	// addi r3,r9,15984
	ctx.r3.s64 = ctx.r9.s64 + 15984;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28456
	ctx.r5.s64 = ctx.r11.s64 + -28456;
	// bl 0x82c4a020
	ctx.lr = 0x833A8BD4;
	sub_82C4A020(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24608
	ctx.r3.s64 = ctx.r8.s64 + 24608;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8BE0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8BF0"))) PPC_WEAK_FUNC(sub_833A8BF0);
PPC_FUNC_IMPL(__imp__sub_833A8BF0) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-31872
	ctx.r4.s64 = ctx.r10.s64 + -31872;
	// addi r3,r9,16260
	ctx.r3.s64 = ctx.r9.s64 + 16260;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17768
	ctx.r5.s64 = ctx.r11.s64 + -17768;
	// bl 0x82c4a020
	ctx.lr = 0x833A8C24;
	sub_82C4A020(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24632
	ctx.r3.s64 = ctx.r8.s64 + 24632;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8C30;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8C40"))) PPC_WEAK_FUNC(sub_833A8C40);
PPC_FUNC_IMPL(__imp__sub_833A8C40) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-31804
	ctx.r4.s64 = ctx.r10.s64 + -31804;
	// addi r3,r9,16536
	ctx.r3.s64 = ctx.r9.s64 + 16536;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9240
	ctx.r5.s64 = ctx.r11.s64 + -9240;
	// bl 0x82c4a020
	ctx.lr = 0x833A8C74;
	sub_82C4A020(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24656
	ctx.r3.s64 = ctx.r8.s64 + 24656;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8C80;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8C90"))) PPC_WEAK_FUNC(sub_833A8C90);
PPC_FUNC_IMPL(__imp__sub_833A8C90) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,9828
	ctx.r6.s64 = ctx.r11.s64 + 9828;
	// addi r4,r9,-31736
	ctx.r4.s64 = ctx.r9.s64 + -31736;
	// addi r3,r8,16812
	ctx.r3.s64 = ctx.r8.s64 + 16812;
	// addi r5,r10,-8296
	ctx.r5.s64 = ctx.r10.s64 + -8296;
	// bl 0x82c7b190
	ctx.lr = 0x833A8CC0;
	sub_82C7B190(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24680
	ctx.r3.s64 = ctx.r7.s64 + 24680;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8CCC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8CDC"))) PPC_WEAK_FUNC(sub_833A8CDC);
PPC_FUNC_IMPL(__imp__sub_833A8CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8CE0"))) PPC_WEAK_FUNC(sub_833A8CE0);
PPC_FUNC_IMPL(__imp__sub_833A8CE0) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-31584
	ctx.r4.s64 = ctx.r10.s64 + -31584;
	// addi r3,r9,17088
	ctx.r3.s64 = ctx.r9.s64 + 17088;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6672
	ctx.r5.s64 = ctx.r11.s64 + -6672;
	// bl 0x82c38ed8
	ctx.lr = 0x833A8D0C;
	sub_82C38ED8(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24704
	ctx.r3.s64 = ctx.r8.s64 + 24704;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8D18;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8D28"))) PPC_WEAK_FUNC(sub_833A8D28);
PPC_FUNC_IMPL(__imp__sub_833A8D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,24728
	ctx.r3.s64 = ctx.r11.s64 + 24728;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A8D34"))) PPC_WEAK_FUNC(sub_833A8D34);
PPC_FUNC_IMPL(__imp__sub_833A8D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8D38"))) PPC_WEAK_FUNC(sub_833A8D38);
PPC_FUNC_IMPL(__imp__sub_833A8D38) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// addi r4,r10,6348
	ctx.r4.s64 = ctx.r10.s64 + 6348;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12904
	ctx.r3.s64 = ctx.r10.s64 + -12904;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-32088
	ctx.r5.s64 = ctx.r11.s64 + -32088;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A8D6C;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,24808
	ctx.r3.s64 = ctx.r11.s64 + 24808;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8D78;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8D88"))) PPC_WEAK_FUNC(sub_833A8D88);
PPC_FUNC_IMPL(__imp__sub_833A8D88) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,6488
	ctx.r4.s64 = ctx.r11.s64 + 6488;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,26312
	ctx.r3.s64 = ctx.r11.s64 + 26312;
	// bl 0x82c279b8
	ctx.lr = 0x833A8DB0;
	sub_82C279B8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,24936
	ctx.r3.s64 = ctx.r11.s64 + 24936;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8DBC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8DCC"))) PPC_WEAK_FUNC(sub_833A8DCC);
PPC_FUNC_IMPL(__imp__sub_833A8DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

