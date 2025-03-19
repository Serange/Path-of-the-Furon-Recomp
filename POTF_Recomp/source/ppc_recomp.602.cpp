#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8336F420"))) PPC_WEAK_FUNC(sub_8336F420);
PPC_FUNC_IMPL(__imp__sub_8336F420) {
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
loc_8336F450:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F450;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F460"))) PPC_WEAK_FUNC(sub_8336F460);
PPC_FUNC_IMPL(__imp__sub_8336F460) {
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
loc_8336F490:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F490;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F4A0"))) PPC_WEAK_FUNC(sub_8336F4A0);
PPC_FUNC_IMPL(__imp__sub_8336F4A0) {
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
loc_8336F4D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f4d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F4D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F4E0"))) PPC_WEAK_FUNC(sub_8336F4E0);
PPC_FUNC_IMPL(__imp__sub_8336F4E0) {
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
loc_8336F510:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F510;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F520"))) PPC_WEAK_FUNC(sub_8336F520);
PPC_FUNC_IMPL(__imp__sub_8336F520) {
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
loc_8336F550:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F550;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F560"))) PPC_WEAK_FUNC(sub_8336F560);
PPC_FUNC_IMPL(__imp__sub_8336F560) {
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
loc_8336F590:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F590;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F5A0"))) PPC_WEAK_FUNC(sub_8336F5A0);
PPC_FUNC_IMPL(__imp__sub_8336F5A0) {
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
loc_8336F5D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f5d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F5D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F5E0"))) PPC_WEAK_FUNC(sub_8336F5E0);
PPC_FUNC_IMPL(__imp__sub_8336F5E0) {
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
loc_8336F610:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F610;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F620"))) PPC_WEAK_FUNC(sub_8336F620);
PPC_FUNC_IMPL(__imp__sub_8336F620) {
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
loc_8336F650:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F650;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F660"))) PPC_WEAK_FUNC(sub_8336F660);
PPC_FUNC_IMPL(__imp__sub_8336F660) {
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
loc_8336F690:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F690;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F6A0"))) PPC_WEAK_FUNC(sub_8336F6A0);
PPC_FUNC_IMPL(__imp__sub_8336F6A0) {
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
loc_8336F6D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f6d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F6D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F6E0"))) PPC_WEAK_FUNC(sub_8336F6E0);
PPC_FUNC_IMPL(__imp__sub_8336F6E0) {
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
loc_8336F710:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F710;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F720"))) PPC_WEAK_FUNC(sub_8336F720);
PPC_FUNC_IMPL(__imp__sub_8336F720) {
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
loc_8336F750:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F750;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F760"))) PPC_WEAK_FUNC(sub_8336F760);
PPC_FUNC_IMPL(__imp__sub_8336F760) {
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
loc_8336F790:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F790;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F7A0"))) PPC_WEAK_FUNC(sub_8336F7A0);
PPC_FUNC_IMPL(__imp__sub_8336F7A0) {
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
loc_8336F7D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f7d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F7D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F7E0"))) PPC_WEAK_FUNC(sub_8336F7E0);
PPC_FUNC_IMPL(__imp__sub_8336F7E0) {
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
loc_8336F810:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F810;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F820"))) PPC_WEAK_FUNC(sub_8336F820);
PPC_FUNC_IMPL(__imp__sub_8336F820) {
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
loc_8336F850:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F850;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F860"))) PPC_WEAK_FUNC(sub_8336F860);
PPC_FUNC_IMPL(__imp__sub_8336F860) {
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
loc_8336F890:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F890;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F8A0"))) PPC_WEAK_FUNC(sub_8336F8A0);
PPC_FUNC_IMPL(__imp__sub_8336F8A0) {
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
loc_8336F8D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f8d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F8D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F8E0"))) PPC_WEAK_FUNC(sub_8336F8E0);
PPC_FUNC_IMPL(__imp__sub_8336F8E0) {
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
loc_8336F910:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F910;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F920"))) PPC_WEAK_FUNC(sub_8336F920);
PPC_FUNC_IMPL(__imp__sub_8336F920) {
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
loc_8336F950:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F950;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F960"))) PPC_WEAK_FUNC(sub_8336F960);
PPC_FUNC_IMPL(__imp__sub_8336F960) {
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
loc_8336F990:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F990;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F9A0"))) PPC_WEAK_FUNC(sub_8336F9A0);
PPC_FUNC_IMPL(__imp__sub_8336F9A0) {
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
loc_8336F9D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f9d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F9D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F9E0"))) PPC_WEAK_FUNC(sub_8336F9E0);
PPC_FUNC_IMPL(__imp__sub_8336F9E0) {
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
loc_8336FA10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fa10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FA10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FA20"))) PPC_WEAK_FUNC(sub_8336FA20);
PPC_FUNC_IMPL(__imp__sub_8336FA20) {
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
loc_8336FA50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fa50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FA50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FA60"))) PPC_WEAK_FUNC(sub_8336FA60);
PPC_FUNC_IMPL(__imp__sub_8336FA60) {
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
loc_8336FA90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fa90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FA90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FAA0"))) PPC_WEAK_FUNC(sub_8336FAA0);
PPC_FUNC_IMPL(__imp__sub_8336FAA0) {
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
loc_8336FAD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FAD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FAE0"))) PPC_WEAK_FUNC(sub_8336FAE0);
PPC_FUNC_IMPL(__imp__sub_8336FAE0) {
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
loc_8336FB10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fb10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FB10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FB20"))) PPC_WEAK_FUNC(sub_8336FB20);
PPC_FUNC_IMPL(__imp__sub_8336FB20) {
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
loc_8336FB50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fb50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FB50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FB60"))) PPC_WEAK_FUNC(sub_8336FB60);
PPC_FUNC_IMPL(__imp__sub_8336FB60) {
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
loc_8336FB90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fb90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FB90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FBA0"))) PPC_WEAK_FUNC(sub_8336FBA0);
PPC_FUNC_IMPL(__imp__sub_8336FBA0) {
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
loc_8336FBD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fbd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FBD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FBE0"))) PPC_WEAK_FUNC(sub_8336FBE0);
PPC_FUNC_IMPL(__imp__sub_8336FBE0) {
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
loc_8336FC10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fc10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FC10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FC20"))) PPC_WEAK_FUNC(sub_8336FC20);
PPC_FUNC_IMPL(__imp__sub_8336FC20) {
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
loc_8336FC50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fc50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FC50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FC60"))) PPC_WEAK_FUNC(sub_8336FC60);
PPC_FUNC_IMPL(__imp__sub_8336FC60) {
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
loc_8336FC90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fc90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FC90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FCA0"))) PPC_WEAK_FUNC(sub_8336FCA0);
PPC_FUNC_IMPL(__imp__sub_8336FCA0) {
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
loc_8336FCD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fcd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FCD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FCE0"))) PPC_WEAK_FUNC(sub_8336FCE0);
PPC_FUNC_IMPL(__imp__sub_8336FCE0) {
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
loc_8336FD10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fd10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FD10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FD20"))) PPC_WEAK_FUNC(sub_8336FD20);
PPC_FUNC_IMPL(__imp__sub_8336FD20) {
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
loc_8336FD50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fd50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FD50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FD60"))) PPC_WEAK_FUNC(sub_8336FD60);
PPC_FUNC_IMPL(__imp__sub_8336FD60) {
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
loc_8336FD90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fd90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FD90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FDA0"))) PPC_WEAK_FUNC(sub_8336FDA0);
PPC_FUNC_IMPL(__imp__sub_8336FDA0) {
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
loc_8336FDD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fdd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FDD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FDE0"))) PPC_WEAK_FUNC(sub_8336FDE0);
PPC_FUNC_IMPL(__imp__sub_8336FDE0) {
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
loc_8336FE10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fe10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FE10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FE20"))) PPC_WEAK_FUNC(sub_8336FE20);
PPC_FUNC_IMPL(__imp__sub_8336FE20) {
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
loc_8336FE50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fe50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FE50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FE60"))) PPC_WEAK_FUNC(sub_8336FE60);
PPC_FUNC_IMPL(__imp__sub_8336FE60) {
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
loc_8336FE90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fe90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FE90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FEA0"))) PPC_WEAK_FUNC(sub_8336FEA0);
PPC_FUNC_IMPL(__imp__sub_8336FEA0) {
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
loc_8336FED0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336fed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FED0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FEE0"))) PPC_WEAK_FUNC(sub_8336FEE0);
PPC_FUNC_IMPL(__imp__sub_8336FEE0) {
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
loc_8336FF10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ff10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FF10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FF20"))) PPC_WEAK_FUNC(sub_8336FF20);
PPC_FUNC_IMPL(__imp__sub_8336FF20) {
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
loc_8336FF50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ff50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FF50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FF60"))) PPC_WEAK_FUNC(sub_8336FF60);
PPC_FUNC_IMPL(__imp__sub_8336FF60) {
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
loc_8336FF90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ff90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FF90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FFA0"))) PPC_WEAK_FUNC(sub_8336FFA0);
PPC_FUNC_IMPL(__imp__sub_8336FFA0) {
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
loc_8336FFD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ffd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336FFD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336FFE0"))) PPC_WEAK_FUNC(sub_8336FFE0);
PPC_FUNC_IMPL(__imp__sub_8336FFE0) {
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
loc_83370010:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370010;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370020"))) PPC_WEAK_FUNC(sub_83370020);
PPC_FUNC_IMPL(__imp__sub_83370020) {
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
loc_83370050:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370050;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370060"))) PPC_WEAK_FUNC(sub_83370060);
PPC_FUNC_IMPL(__imp__sub_83370060) {
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
loc_83370090:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370090;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833700A0"))) PPC_WEAK_FUNC(sub_833700A0);
PPC_FUNC_IMPL(__imp__sub_833700A0) {
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
loc_833700D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833700d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833700D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833700E0"))) PPC_WEAK_FUNC(sub_833700E0);
PPC_FUNC_IMPL(__imp__sub_833700E0) {
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
loc_83370110:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370110;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370120"))) PPC_WEAK_FUNC(sub_83370120);
PPC_FUNC_IMPL(__imp__sub_83370120) {
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
loc_83370150:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370150;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370160"))) PPC_WEAK_FUNC(sub_83370160);
PPC_FUNC_IMPL(__imp__sub_83370160) {
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
loc_83370190:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370190;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833701A0"))) PPC_WEAK_FUNC(sub_833701A0);
PPC_FUNC_IMPL(__imp__sub_833701A0) {
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
loc_833701D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833701d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833701D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833701E0"))) PPC_WEAK_FUNC(sub_833701E0);
PPC_FUNC_IMPL(__imp__sub_833701E0) {
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
loc_83370210:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370210;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370220"))) PPC_WEAK_FUNC(sub_83370220);
PPC_FUNC_IMPL(__imp__sub_83370220) {
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
loc_83370250:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370250;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370260"))) PPC_WEAK_FUNC(sub_83370260);
PPC_FUNC_IMPL(__imp__sub_83370260) {
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
loc_83370290:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370290;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833702A0"))) PPC_WEAK_FUNC(sub_833702A0);
PPC_FUNC_IMPL(__imp__sub_833702A0) {
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
loc_833702D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833702d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833702D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833702E0"))) PPC_WEAK_FUNC(sub_833702E0);
PPC_FUNC_IMPL(__imp__sub_833702E0) {
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
loc_83370310:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370310;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370320"))) PPC_WEAK_FUNC(sub_83370320);
PPC_FUNC_IMPL(__imp__sub_83370320) {
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
loc_83370350:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370350;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370360"))) PPC_WEAK_FUNC(sub_83370360);
PPC_FUNC_IMPL(__imp__sub_83370360) {
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
loc_83370390:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370390
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370390;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833703A0"))) PPC_WEAK_FUNC(sub_833703A0);
PPC_FUNC_IMPL(__imp__sub_833703A0) {
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
loc_833703D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833703d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833703D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833703E0"))) PPC_WEAK_FUNC(sub_833703E0);
PPC_FUNC_IMPL(__imp__sub_833703E0) {
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
loc_83370410:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370410;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370420"))) PPC_WEAK_FUNC(sub_83370420);
PPC_FUNC_IMPL(__imp__sub_83370420) {
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
loc_83370450:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370450;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370460"))) PPC_WEAK_FUNC(sub_83370460);
PPC_FUNC_IMPL(__imp__sub_83370460) {
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
loc_83370490:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370490;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833704A0"))) PPC_WEAK_FUNC(sub_833704A0);
PPC_FUNC_IMPL(__imp__sub_833704A0) {
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
loc_833704D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833704d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833704D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833704E0"))) PPC_WEAK_FUNC(sub_833704E0);
PPC_FUNC_IMPL(__imp__sub_833704E0) {
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
loc_83370510:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370510;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370520"))) PPC_WEAK_FUNC(sub_83370520);
PPC_FUNC_IMPL(__imp__sub_83370520) {
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
loc_83370550:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370550;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370560"))) PPC_WEAK_FUNC(sub_83370560);
PPC_FUNC_IMPL(__imp__sub_83370560) {
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
loc_83370590:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370590;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833705A0"))) PPC_WEAK_FUNC(sub_833705A0);
PPC_FUNC_IMPL(__imp__sub_833705A0) {
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
loc_833705D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833705d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833705D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833705E0"))) PPC_WEAK_FUNC(sub_833705E0);
PPC_FUNC_IMPL(__imp__sub_833705E0) {
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
loc_83370610:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370610;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370620"))) PPC_WEAK_FUNC(sub_83370620);
PPC_FUNC_IMPL(__imp__sub_83370620) {
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
loc_83370650:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370650;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370660"))) PPC_WEAK_FUNC(sub_83370660);
PPC_FUNC_IMPL(__imp__sub_83370660) {
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
loc_83370690:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370690;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833706A0"))) PPC_WEAK_FUNC(sub_833706A0);
PPC_FUNC_IMPL(__imp__sub_833706A0) {
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
loc_833706D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833706d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833706D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833706E0"))) PPC_WEAK_FUNC(sub_833706E0);
PPC_FUNC_IMPL(__imp__sub_833706E0) {
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
loc_83370710:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370710;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370720"))) PPC_WEAK_FUNC(sub_83370720);
PPC_FUNC_IMPL(__imp__sub_83370720) {
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
loc_83370750:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370750;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370760"))) PPC_WEAK_FUNC(sub_83370760);
PPC_FUNC_IMPL(__imp__sub_83370760) {
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
loc_83370790:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370790;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833707A0"))) PPC_WEAK_FUNC(sub_833707A0);
PPC_FUNC_IMPL(__imp__sub_833707A0) {
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
loc_833707D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833707d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833707D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833707E0"))) PPC_WEAK_FUNC(sub_833707E0);
PPC_FUNC_IMPL(__imp__sub_833707E0) {
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
loc_83370810:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370810;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370820"))) PPC_WEAK_FUNC(sub_83370820);
PPC_FUNC_IMPL(__imp__sub_83370820) {
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
loc_83370850:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370850;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370860"))) PPC_WEAK_FUNC(sub_83370860);
PPC_FUNC_IMPL(__imp__sub_83370860) {
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
loc_83370890:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370890;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833708A0"))) PPC_WEAK_FUNC(sub_833708A0);
PPC_FUNC_IMPL(__imp__sub_833708A0) {
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
loc_833708D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833708d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833708D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833708E0"))) PPC_WEAK_FUNC(sub_833708E0);
PPC_FUNC_IMPL(__imp__sub_833708E0) {
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
loc_83370910:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370910;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370920"))) PPC_WEAK_FUNC(sub_83370920);
PPC_FUNC_IMPL(__imp__sub_83370920) {
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
loc_83370950:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370950;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370960"))) PPC_WEAK_FUNC(sub_83370960);
PPC_FUNC_IMPL(__imp__sub_83370960) {
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
loc_83370990:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370990;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833709A0"))) PPC_WEAK_FUNC(sub_833709A0);
PPC_FUNC_IMPL(__imp__sub_833709A0) {
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
loc_833709D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833709d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833709D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833709E0"))) PPC_WEAK_FUNC(sub_833709E0);
PPC_FUNC_IMPL(__imp__sub_833709E0) {
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
loc_83370A10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370a10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370A10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370A20"))) PPC_WEAK_FUNC(sub_83370A20);
PPC_FUNC_IMPL(__imp__sub_83370A20) {
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
loc_83370A50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370a50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370A50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370A60"))) PPC_WEAK_FUNC(sub_83370A60);
PPC_FUNC_IMPL(__imp__sub_83370A60) {
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
loc_83370A90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370A90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370AA0"))) PPC_WEAK_FUNC(sub_83370AA0);
PPC_FUNC_IMPL(__imp__sub_83370AA0) {
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
loc_83370AD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370ad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370AD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370AE0"))) PPC_WEAK_FUNC(sub_83370AE0);
PPC_FUNC_IMPL(__imp__sub_83370AE0) {
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
loc_83370B10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370b10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370B10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370B20"))) PPC_WEAK_FUNC(sub_83370B20);
PPC_FUNC_IMPL(__imp__sub_83370B20) {
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
loc_83370B50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370B50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370B60"))) PPC_WEAK_FUNC(sub_83370B60);
PPC_FUNC_IMPL(__imp__sub_83370B60) {
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
loc_83370B90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83370b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83370B90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370BA0"))) PPC_WEAK_FUNC(sub_83370BA0);
PPC_FUNC_IMPL(__imp__sub_83370BA0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lis r7,-32205
	ctx.r7.s64 = -2110586880;
	// addi r5,r10,-13808
	ctx.r5.s64 = ctx.r10.s64 + -13808;
	// addi r10,r7,-14288
	ctx.r10.s64 = ctx.r7.s64 + -14288;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// stw r10,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r10.u32);
	// lis r6,-32205
	ctx.r6.s64 = -2110586880;
	// lis r7,-32205
	ctx.r7.s64 = -2110586880;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-13968
	ctx.r4.s64 = ctx.r9.s64 + -13968;
	// addi r3,r8,-14128
	ctx.r3.s64 = ctx.r8.s64 + -14128;
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// addi r9,r6,-14456
	ctx.r9.s64 = ctx.r6.s64 + -14456;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lis r8,-31904
	ctx.r8.s64 = -2090860544;
	// ld r5,-24(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// addi r30,r7,-13648
	ctx.r30.s64 = ctx.r7.s64 + -13648;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r31,r8,-21032
	ctx.r31.s64 = ctx.r8.s64 + -21032;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// stw r4,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r4.u32);
	// stw r3,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r3.u32);
	// stw r30,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r30.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r9,-56(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r7,-40(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r11,-24(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r5,76(r31)
	PPC_STORE_U64(ctx.r31.u32 + 76, ctx.r5.u64);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// std r9,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r9.u64);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// std r7,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r7.u64);
	// std r6,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// std r11,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370C60"))) PPC_WEAK_FUNC(sub_83370C60);
PPC_FUNC_IMPL(__imp__sub_83370C60) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r7,r9,20560
	ctx.r7.s64 = ctx.r9.s64 + 20560;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r8,r10,-20948
	ctx.r8.s64 = ctx.r10.s64 + -20948;
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

__attribute__((alias("__imp__sub_83370C98"))) PPC_WEAK_FUNC(sub_83370C98);
PPC_FUNC_IMPL(__imp__sub_83370C98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r7,-32206
	ctx.r7.s64 = -2110652416;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,7416
	ctx.r9.s64 = ctx.r10.s64 + 7416;
	// addi r5,r7,7704
	ctx.r5.s64 = ctx.r7.s64 + 7704;
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
	// addi r6,r8,-20924
	ctx.r6.s64 = ctx.r8.s64 + -20924;
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

__attribute__((alias("__imp__sub_83370CE8"))) PPC_WEAK_FUNC(sub_83370CE8);
PPC_FUNC_IMPL(__imp__sub_83370CE8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lis r31,-32206
	ctx.r31.s64 = -2110652416;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r10,r10,5216
	ctx.r10.s64 = ctx.r10.s64 + 5216;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// lis r9,-32206
	ctx.r9.s64 = -2110652416;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lis r8,-32206
	ctx.r8.s64 = -2110652416;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r7,-32206
	ctx.r7.s64 = -2110652416;
	// lis r6,-32206
	ctx.r6.s64 = -2110652416;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// lis r5,-32206
	ctx.r5.s64 = -2110652416;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// lis r4,-32206
	ctx.r4.s64 = -2110652416;
	// stw r10,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// addi r11,r31,3744
	ctx.r11.s64 = ctx.r31.s64 + 3744;
	// addi r9,r9,5040
	ctx.r9.s64 = ctx.r9.s64 + 5040;
	// ld r3,-80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r8,r8,4896
	ctx.r8.s64 = ctx.r8.s64 + 4896;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// addi r7,r7,4720
	ctx.r7.s64 = ctx.r7.s64 + 4720;
	// stw r9,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r9.u32);
	// addi r6,r6,4416
	ctx.r6.s64 = ctx.r6.s64 + 4416;
	// stw r8,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r8.u32);
	// addi r5,r5,4248
	ctx.r5.s64 = ctx.r5.s64 + 4248;
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// addi r4,r4,4136
	ctx.r4.s64 = ctx.r4.s64 + 4136;
	// stw r6,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r6.u32);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// stw r5,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r5.u32);
	// stw r4,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r4.u32);
	// addi r31,r10,-20888
	ctx.r31.s64 = ctx.r10.s64 + -20888;
	// ld r11,-72(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r9,-56(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r7,-40(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r5,-24(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r3,100(r31)
	PPC_STORE_U64(ctx.r31.u32 + 100, ctx.r3.u64);
	// std r11,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r11.u64);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// std r9,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r9.u64);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// std r7,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r7.u64);
	// std r6,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// std r5,76(r31)
	PPC_STORE_U64(ctx.r31.u32 + 76, ctx.r5.u64);
	// std r4,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r4.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370DD0"))) PPC_WEAK_FUNC(sub_83370DD0);
PPC_FUNC_IMPL(__imp__sub_83370DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// lis r8,-32207
	ctx.r8.s64 = -2110717952;
	// lis r3,-32207
	ctx.r3.s64 = -2110717952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,31312
	ctx.r7.s64 = ctx.r10.s64 + 31312;
	// addi r6,r9,31184
	ctx.r6.s64 = ctx.r9.s64 + 31184;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// addi r5,r8,31056
	ctx.r5.s64 = ctx.r8.s64 + 31056;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// addi r3,r3,31440
	ctx.r3.s64 = ctx.r3.s64 + 31440;
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
	// addi r4,r4,-20780
	ctx.r4.s64 = ctx.r4.s64 + -20780;
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

__attribute__((alias("__imp__sub_83370E50"))) PPC_WEAK_FUNC(sub_83370E50);
PPC_FUNC_IMPL(__imp__sub_83370E50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// lis r8,-32211
	ctx.r8.s64 = -2110980096;
	// lis r3,-32211
	ctx.r3.s64 = -2110980096;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,-22088
	ctx.r7.s64 = ctx.r10.s64 + -22088;
	// addi r6,r9,-22224
	ctx.r6.s64 = ctx.r9.s64 + -22224;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// addi r5,r8,-22392
	ctx.r5.s64 = ctx.r8.s64 + -22392;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// addi r3,r3,-21904
	ctx.r3.s64 = ctx.r3.s64 + -21904;
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
	// addi r4,r4,-20720
	ctx.r4.s64 = ctx.r4.s64 + -20720;
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

__attribute__((alias("__imp__sub_83370ED0"))) PPC_WEAK_FUNC(sub_83370ED0);
PPC_FUNC_IMPL(__imp__sub_83370ED0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// addi r9,r9,-20832
	ctx.r9.s64 = ctx.r9.s64 + -20832;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r10,r10,-20584
	ctx.r10.s64 = ctx.r10.s64 + -20584;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r8,-32211
	ctx.r8.s64 = -2110980096;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lis r7,-32211
	ctx.r7.s64 = -2110980096;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lis r6,-32211
	ctx.r6.s64 = -2110980096;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// lis r5,-32211
	ctx.r5.s64 = -2110980096;
	// stw r9,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r9.u32);
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// stw r11,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// lis r4,-32211
	ctx.r4.s64 = -2110980096;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// lis r3,-32211
	ctx.r3.s64 = -2110980096;
	// ld r31,-96(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// addi r8,r8,-21000
	ctx.r8.s64 = ctx.r8.s64 + -21000;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r7,r7,-21168
	ctx.r7.s64 = ctx.r7.s64 + -21168;
	// stw r10,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r10.u32);
	// addi r6,r6,-21336
	ctx.r6.s64 = ctx.r6.s64 + -21336;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// addi r11,r9,-20408
	ctx.r11.s64 = ctx.r9.s64 + -20408;
	// addi r5,r5,-21464
	ctx.r5.s64 = ctx.r5.s64 + -21464;
	// stw r8,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r8.u32);
	// addi r4,r4,-21592
	ctx.r4.s64 = ctx.r4.s64 + -21592;
	// stw r7,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r7.u32);
	// addi r3,r3,-21720
	ctx.r3.s64 = ctx.r3.s64 + -21720;
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// stw r5,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r5.u32);
	// stw r4,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r4.u32);
	// addi r30,r10,-20624
	ctx.r30.s64 = ctx.r10.s64 + -20624;
	// stw r3,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r3.u32);
	// stw r11,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// ld r10,-88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r9,-80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r8,-72(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r7,-64(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r6,-56(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r5,-48(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r4,-40(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r3,-32(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r11,-96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// std r31,112(r30)
	PPC_STORE_U64(ctx.r30.u32 + 112, ctx.r31.u64);
	// std r10,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r10.u64);
	// std r9,28(r30)
	PPC_STORE_U64(ctx.r30.u32 + 28, ctx.r9.u64);
	// std r8,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r8.u64);
	// std r7,52(r30)
	PPC_STORE_U64(ctx.r30.u32 + 52, ctx.r7.u64);
	// std r6,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r6.u64);
	// std r5,76(r30)
	PPC_STORE_U64(ctx.r30.u32 + 76, ctx.r5.u64);
	// std r4,88(r30)
	PPC_STORE_U64(ctx.r30.u32 + 88, ctx.r4.u64);
	// std r3,100(r30)
	PPC_STORE_U64(ctx.r30.u32 + 100, ctx.r3.u64);
	// std r11,4(r30)
	PPC_STORE_U64(ctx.r30.u32 + 4, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83370FD8"))) PPC_WEAK_FUNC(sub_83370FD8);
PPC_FUNC_IMPL(__imp__sub_83370FD8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r7,-32147
	ctx.r7.s64 = -2106785792;
	// lis r5,-32147
	ctx.r5.s64 = -2106785792;
	// addi r3,r9,-9176
	ctx.r3.s64 = ctx.r9.s64 + -9176;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r9,r7,-11072
	ctx.r9.s64 = ctx.r7.s64 + -11072;
	// stw r3,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r3.u32);
	// lis r8,-32147
	ctx.r8.s64 = -2106785792;
	// addi r7,r5,-11640
	ctx.r7.s64 = ctx.r5.s64 + -11640;
	// stw r9,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r9.u32);
	// lis r6,-32147
	ctx.r6.s64 = -2106785792;
	// addi r4,r10,-8936
	ctx.r4.s64 = ctx.r10.s64 + -8936;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r4.u32);
	// addi r10,r8,-10792
	ctx.r10.s64 = ctx.r8.s64 + -10792;
	// addi r8,r6,-11392
	ctx.r8.s64 = ctx.r6.s64 + -11392;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lis r6,-31904
	ctx.r6.s64 = -2090860544;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// addi r30,r5,-8648
	ctx.r30.s64 = ctx.r5.s64 + -8648;
	// ld r4,-32(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// addi r31,r6,-20504
	ctx.r31.s64 = ctx.r6.s64 + -20504;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// stw r8,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r8.u32);
	// stw r30,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r30.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r9,-72(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r8,-64(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r7,-56(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r6,-48(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r5,-40(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r4,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r4.u64);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// std r9,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r9.u64);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// std r7,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r7.u64);
	// std r6,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// std r5,76(r31)
	PPC_STORE_U64(ctx.r31.u32 + 76, ctx.r5.u64);
	// std r11,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833710B0"))) PPC_WEAK_FUNC(sub_833710B0);
PPC_FUNC_IMPL(__imp__sub_833710B0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r6,r10,11648
	ctx.r6.s64 = ctx.r10.s64 + 11648;
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r6,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r6.u32);
	// addi r4,r8,11280
	ctx.r4.s64 = ctx.r8.s64 + 11280;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// addi r3,r7,11136
	ctx.r3.s64 = ctx.r7.s64 + 11136;
	// stw r4,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r4.u32);
	// addi r8,r10,10944
	ctx.r8.s64 = ctx.r10.s64 + 10944;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// stw r3,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r3.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r8,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r8.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r5,r9,11408
	ctx.r5.s64 = ctx.r9.s64 + 11408;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// lis r9,-31904
	ctx.r9.s64 = -2090860544;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// addi r31,r9,-20408
	ctx.r31.s64 = ctx.r9.s64 + -20408;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// addi r9,r7,10632
	ctx.r9.s64 = ctx.r7.s64 + 10632;
	// stw r5,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r5.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r8,r6,10440
	ctx.r8.s64 = ctx.r6.s64 + 10440;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// addi r7,r5,10328
	ctx.r7.s64 = ctx.r5.s64 + 10328;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// lis r3,-32210
	ctx.r3.s64 = -2110914560;
	// stw r8,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r8.u32);
	// addi r6,r4,10184
	ctx.r6.s64 = ctx.r4.s64 + 10184;
	// stw r7,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r7.u32);
	// addi r5,r3,10072
	ctx.r5.s64 = ctx.r3.s64 + 10072;
	// stw r6,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r9,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r9.u32);
	// lis r3,-32210
	ctx.r3.s64 = -2110914560;
	// stw r5,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r5.u32);
	// addi r4,r10,9960
	ctx.r4.s64 = ctx.r10.s64 + 9960;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// addi r3,r3,10744
	ctx.r3.s64 = ctx.r3.s64 + 10744;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r4,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r4.u32);
	// ld r8,-88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// stw r3,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r3.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// ld r7,-80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r6,-104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// std r8,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r8.u64);
	// ld r8,-40(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r5,-24(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r7,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r7.u64);
	// std r6,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r6.u64);
	// ld r7,-32(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r10,-112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r9,-96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// ld r11,-64(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// std r10,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r10.u64);
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// ld r4,-72(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r9,-48(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r5,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r5.u64);
	// std r8,124(r31)
	PPC_STORE_U64(ctx.r31.u32 + 124, ctx.r8.u64);
	// std r4,76(r31)
	PPC_STORE_U64(ctx.r31.u32 + 76, ctx.r4.u64);
	// std r10,100(r31)
	PPC_STORE_U64(ctx.r31.u32 + 100, ctx.r10.u64);
	// std r9,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r9.u64);
	// std r7,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r7.u64);
	// std r6,148(r31)
	PPC_STORE_U64(ctx.r31.u32 + 148, ctx.r6.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833711F8"))) PPC_WEAK_FUNC(sub_833711F8);
PPC_FUNC_IMPL(__imp__sub_833711F8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lis r31,-32167
	ctx.r31.s64 = -2108096512;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r10,r10,-7216
	ctx.r10.s64 = ctx.r10.s64 + -7216;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lis r8,-32167
	ctx.r8.s64 = -2108096512;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// lis r4,-32167
	ctx.r4.s64 = -2108096512;
	// stw r10,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// addi r11,r31,1856
	ctx.r11.s64 = ctx.r31.s64 + 1856;
	// addi r9,r9,-7432
	ctx.r9.s64 = ctx.r9.s64 + -7432;
	// ld r3,-80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r8,r8,736
	ctx.r8.s64 = ctx.r8.s64 + 736;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// addi r7,r7,-7616
	ctx.r7.s64 = ctx.r7.s64 + -7616;
	// stw r9,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r9.u32);
	// addi r6,r6,-7840
	ctx.r6.s64 = ctx.r6.s64 + -7840;
	// stw r8,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r8.u32);
	// addi r5,r5,-8016
	ctx.r5.s64 = ctx.r5.s64 + -8016;
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// addi r4,r4,2224
	ctx.r4.s64 = ctx.r4.s64 + 2224;
	// stw r6,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r6.u32);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// stw r5,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r5.u32);
	// stw r4,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r4.u32);
	// addi r31,r10,-20248
	ctx.r31.s64 = ctx.r10.s64 + -20248;
	// ld r11,-72(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r9,-56(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r7,-40(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r5,-24(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r3,100(r31)
	PPC_STORE_U64(ctx.r31.u32 + 100, ctx.r3.u64);
	// std r11,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r11.u64);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// std r9,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r9.u64);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// std r7,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r7.u64);
	// std r6,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// std r5,76(r31)
	PPC_STORE_U64(ctx.r31.u32 + 76, ctx.r5.u64);
	// std r4,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r4.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833712E0"))) PPC_WEAK_FUNC(sub_833712E0);
PPC_FUNC_IMPL(__imp__sub_833712E0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r5,r9,12488
	ctx.r5.s64 = ctx.r9.s64 + 12488;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,12752
	ctx.r6.s64 = ctx.r10.s64 + 12752;
	// addi r4,r8,12160
	ctx.r4.s64 = ctx.r8.s64 + 12160;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// addi r3,r7,11976
	ctx.r3.s64 = ctx.r7.s64 + 11976;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// stw r6,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r6.u32);
	// addi r30,r9,12920
	ctx.r30.s64 = ctx.r9.s64 + 12920;
	// ld r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// addi r31,r10,-20136
	ctx.r31.s64 = ctx.r10.s64 + -20136;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r4,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r4.u32);
	// stw r3,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r3.u32);
	// stw r30,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r30.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r9,-56(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r7,-40(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r6,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// std r9,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r9.u64);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// std r7,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r7.u64);
	// std r11,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83371388"))) PPC_WEAK_FUNC(sub_83371388);
PPC_FUNC_IMPL(__imp__sub_83371388) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x83371390;
	__savegprlr_23(ctx, base);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-28016
	ctx.r9.s64 = ctx.r9.s64 + -28016;
	// addi r10,r10,-27808
	ctx.r10.s64 = ctx.r10.s64 + -27808;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// addi r8,r8,-28176
	ctx.r8.s64 = ctx.r8.s64 + -28176;
	// stw r9,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r9.u32);
	// addi r7,r7,-28288
	ctx.r7.s64 = ctx.r7.s64 + -28288;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// addi r6,r6,-28448
	ctx.r6.s64 = ctx.r6.s64 + -28448;
	// stw r8,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r8.u32);
	// addi r5,r5,-28608
	ctx.r5.s64 = ctx.r5.s64 + -28608;
	// stw r7,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// addi r4,r4,-28736
	ctx.r4.s64 = ctx.r4.s64 + -28736;
	// stw r6,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r6.u32);
	// addi r3,r3,-28944
	ctx.r3.s64 = ctx.r3.s64 + -28944;
	// stw r5,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r5.u32);
	// stw r4,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r4.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r3,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// stw r10,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r10.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// addi r29,r9,-29264
	ctx.r29.s64 = ctx.r9.s64 + -29264;
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// lis r9,-31904
	ctx.r9.s64 = -2090860544;
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// addi r30,r10,-29104
	ctx.r30.s64 = ctx.r10.s64 + -29104;
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// addi r28,r8,-29872
	ctx.r28.s64 = ctx.r8.s64 + -29872;
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// addi r27,r7,-30000
	ctx.r27.s64 = ctx.r7.s64 + -30000;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// addi r26,r6,-30256
	ctx.r26.s64 = ctx.r6.s64 + -30256;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// addi r25,r5,-30448
	ctx.r25.s64 = ctx.r5.s64 + -30448;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// addi r24,r4,-30704
	ctx.r24.s64 = ctx.r4.s64 + -30704;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// addi r31,r31,-29536
	ctx.r31.s64 = ctx.r31.s64 + -29536;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// addi r3,r3,-31000
	ctx.r3.s64 = ctx.r3.s64 + -31000;
	// stw r11,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r11.u32);
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// addi r23,r9,-20064
	ctx.r23.s64 = ctx.r9.s64 + -20064;
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// stw r30,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r30.u32);
	// ld r8,-192(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// ld r7,-112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r6,-176(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// ld r5,-128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r4,-160(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// ld r10,-96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r11,-208(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r29,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r29.u32);
	// stw r31,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r31.u32);
	// stw r28,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r28.u32);
	// stw r27,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r27.u32);
	// stw r26,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r26.u32);
	// stw r25,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r25.u32);
	// stw r24,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r24.u32);
	// stw r3,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r3.u32);
	// std r10,4(r23)
	PPC_STORE_U64(ctx.r23.u32 + 4, ctx.r10.u64);
	// std r11,16(r23)
	PPC_STORE_U64(ctx.r23.u32 + 16, ctx.r11.u64);
	// ld r3,-224(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// ld r31,-216(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// ld r30,-200(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// ld r29,-184(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// ld r28,-168(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// ld r27,-152(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// ld r26,-136(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r25,-120(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r11,-104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r10,-88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// std r9,28(r23)
	PPC_STORE_U64(ctx.r23.u32 + 28, ctx.r9.u64);
	// std r8,40(r23)
	PPC_STORE_U64(ctx.r23.u32 + 40, ctx.r8.u64);
	// std r7,52(r23)
	PPC_STORE_U64(ctx.r23.u32 + 52, ctx.r7.u64);
	// std r6,64(r23)
	PPC_STORE_U64(ctx.r23.u32 + 64, ctx.r6.u64);
	// std r5,76(r23)
	PPC_STORE_U64(ctx.r23.u32 + 76, ctx.r5.u64);
	// std r4,88(r23)
	PPC_STORE_U64(ctx.r23.u32 + 88, ctx.r4.u64);
	// std r3,100(r23)
	PPC_STORE_U64(ctx.r23.u32 + 100, ctx.r3.u64);
	// std r31,112(r23)
	PPC_STORE_U64(ctx.r23.u32 + 112, ctx.r31.u64);
	// std r30,124(r23)
	PPC_STORE_U64(ctx.r23.u32 + 124, ctx.r30.u64);
	// std r29,136(r23)
	PPC_STORE_U64(ctx.r23.u32 + 136, ctx.r29.u64);
	// std r28,148(r23)
	PPC_STORE_U64(ctx.r23.u32 + 148, ctx.r28.u64);
	// std r27,160(r23)
	PPC_STORE_U64(ctx.r23.u32 + 160, ctx.r27.u64);
	// std r26,172(r23)
	PPC_STORE_U64(ctx.r23.u32 + 172, ctx.r26.u64);
	// std r25,184(r23)
	PPC_STORE_U64(ctx.r23.u32 + 184, ctx.r25.u64);
	// std r11,196(r23)
	PPC_STORE_U64(ctx.r23.u32 + 196, ctx.r11.u64);
	// std r10,208(r23)
	PPC_STORE_U64(ctx.r23.u32 + 208, ctx.r10.u64);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83371548"))) PPC_WEAK_FUNC(sub_83371548);
PPC_FUNC_IMPL(__imp__sub_83371548) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83371550;
	__savegprlr_29(ctx, base);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r31,-32210
	ctx.r31.s64 = -2110914560;
	// addi r10,r10,-31600
	ctx.r10.s64 = ctx.r10.s64 + -31600;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r10,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-31720
	ctx.r9.s64 = ctx.r9.s64 + -31720;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// addi r10,r31,32736
	ctx.r10.s64 = ctx.r31.s64 + 32736;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// stw r9,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r9.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// addi r10,r9,-31328
	ctx.r10.s64 = ctx.r9.s64 + -31328;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r6,-32167
	ctx.r6.s64 = -2108096512;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r11,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// addi r8,r8,-31960
	ctx.r8.s64 = ctx.r8.s64 + -31960;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// addi r7,r7,-32248
	ctx.r7.s64 = ctx.r7.s64 + -32248;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// addi r6,r6,9272
	ctx.r6.s64 = ctx.r6.s64 + 9272;
	// stw r8,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r8.u32);
	// addi r5,r5,-32408
	ctx.r5.s64 = ctx.r5.s64 + -32408;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r4,r4,-32544
	ctx.r4.s64 = ctx.r4.s64 + -32544;
	// stw r7,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r7.u32);
	// addi r3,r3,-32672
	ctx.r3.s64 = ctx.r3.s64 + -32672;
	// stw r6,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r6.u32);
	// addi r9,r9,-31480
	ctx.r9.s64 = ctx.r9.s64 + -31480;
	// stw r5,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r5.u32);
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// lis r8,-31904
	ctx.r8.s64 = -2090860544;
	// stw r3,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r3.u32);
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r29,r8,-19848
	ctx.r29.s64 = ctx.r8.s64 + -19848;
	// stw r9,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r9.u32);
	// ld r7,-112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r6,-104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r5,-96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r4,-88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r3,-80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r31,-72(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r11,-64(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r9,-56(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// stw r10,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r10.u32);
	// ld r8,-120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r30,-128(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// std r30,112(r29)
	PPC_STORE_U64(ctx.r29.u32 + 112, ctx.r30.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r9,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r9.u64);
	// std r8,28(r29)
	PPC_STORE_U64(ctx.r29.u32 + 28, ctx.r8.u64);
	// std r7,40(r29)
	PPC_STORE_U64(ctx.r29.u32 + 40, ctx.r7.u64);
	// std r6,52(r29)
	PPC_STORE_U64(ctx.r29.u32 + 52, ctx.r6.u64);
	// std r10,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r5,64(r29)
	PPC_STORE_U64(ctx.r29.u32 + 64, ctx.r5.u64);
	// std r4,76(r29)
	PPC_STORE_U64(ctx.r29.u32 + 76, ctx.r4.u64);
	// std r3,88(r29)
	PPC_STORE_U64(ctx.r29.u32 + 88, ctx.r3.u64);
	// std r31,100(r29)
	PPC_STORE_U64(ctx.r29.u32 + 100, ctx.r31.u64);
	// std r11,124(r29)
	PPC_STORE_U64(ctx.r29.u32 + 124, ctx.r11.u64);
	// std r10,136(r29)
	PPC_STORE_U64(ctx.r29.u32 + 136, ctx.r10.u64);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83371678"))) PPC_WEAK_FUNC(sub_83371678);
PPC_FUNC_IMPL(__imp__sub_83371678) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// addi r3,r9,-26368
	ctx.r3.s64 = ctx.r9.s64 + -26368;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r9,r7,-26816
	ctx.r9.s64 = ctx.r7.s64 + -26816;
	// stw r3,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r3.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// addi r7,r5,-27368
	ctx.r7.s64 = ctx.r5.s64 + -27368;
	// stw r9,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r9.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// addi r4,r10,-26240
	ctx.r4.s64 = ctx.r10.s64 + -26240;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r4.u32);
	// addi r10,r8,-26624
	ctx.r10.s64 = ctx.r8.s64 + -26624;
	// addi r8,r6,-27072
	ctx.r8.s64 = ctx.r6.s64 + -27072;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lis r6,-31904
	ctx.r6.s64 = -2090860544;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// addi r30,r5,-25904
	ctx.r30.s64 = ctx.r5.s64 + -25904;
	// ld r4,-32(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// addi r31,r6,-19704
	ctx.r31.s64 = ctx.r6.s64 + -19704;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// stw r8,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r8.u32);
	// stw r30,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r30.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r9,-72(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r8,-64(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r7,-56(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r6,-48(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r5,-40(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r4,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r4.u64);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// std r9,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r9.u64);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// std r7,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r7.u64);
	// std r6,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// std r5,76(r31)
	PPC_STORE_U64(ctx.r31.u32 + 76, ctx.r5.u64);
	// std r11,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83371750"))) PPC_WEAK_FUNC(sub_83371750);
PPC_FUNC_IMPL(__imp__sub_83371750) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r5,r9,-22208
	ctx.r5.s64 = ctx.r9.s64 + -22208;
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,-22016
	ctx.r6.s64 = ctx.r10.s64 + -22016;
	// addi r4,r8,-22464
	ctx.r4.s64 = ctx.r8.s64 + -22464;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// addi r3,r7,-22760
	ctx.r3.s64 = ctx.r7.s64 + -22760;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// stw r6,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r6.u32);
	// addi r30,r9,-21760
	ctx.r30.s64 = ctx.r9.s64 + -21760;
	// ld r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// addi r31,r10,-19608
	ctx.r31.s64 = ctx.r10.s64 + -19608;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r4,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r4.u32);
	// stw r3,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r3.u32);
	// stw r30,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r30.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r9,-56(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r7,-40(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r6,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// std r9,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r9.u64);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// std r7,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r7.u64);
	// std r11,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833717F8"))) PPC_WEAK_FUNC(sub_833717F8);
PPC_FUNC_IMPL(__imp__sub_833717F8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83371800;
	__savegprlr_27(ctx, base);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,18720
	ctx.r8.s64 = ctx.r10.s64 + 18720;
	// addi r7,r9,18536
	ctx.r7.s64 = ctx.r9.s64 + 18536;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r8,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stw r7,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r7.u32);
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// addi r3,r6,18376
	ctx.r3.s64 = ctx.r6.s64 + 18376;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// addi r10,r5,18232
	ctx.r10.s64 = ctx.r5.s64 + 18232;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// lis r8,-31904
	ctx.r8.s64 = -2090860544;
	// stw r3,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r3.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// addi r9,r4,18088
	ctx.r9.s64 = ctx.r4.s64 + 18088;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// addi r27,r8,-19536
	ctx.r27.s64 = ctx.r8.s64 + -19536;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// addi r7,r7,17944
	ctx.r7.s64 = ctx.r7.s64 + 17944;
	// stw r9,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r9.u32);
	// addi r6,r6,17800
	ctx.r6.s64 = ctx.r6.s64 + 17800;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// addi r5,r5,17656
	ctx.r5.s64 = ctx.r5.s64 + 17656;
	// stw r7,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r7.u32);
	// lis r31,-32210
	ctx.r31.s64 = -2110914560;
	// stw r6,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r6.u32);
	// lis r30,-32210
	ctx.r30.s64 = -2110914560;
	// stw r5,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r5.u32);
	// lis r29,-32166
	ctx.r29.s64 = -2108030976;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// lis r3,-32210
	ctx.r3.s64 = -2110914560;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// addi r7,r31,16752
	ctx.r7.s64 = ctx.r31.s64 + 16752;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r6,r30,16592
	ctx.r6.s64 = ctx.r30.s64 + 16592;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// addi r5,r29,2352
	ctx.r5.s64 = ctx.r29.s64 + 2352;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r4,r4,17392
	ctx.r4.s64 = ctx.r4.s64 + 17392;
	// stw r7,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r7.u32);
	// addi r3,r3,17168
	ctx.r3.s64 = ctx.r3.s64 + 17168;
	// stw r6,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r6.u32);
	// addi r8,r8,16960
	ctx.r8.s64 = ctx.r8.s64 + 16960;
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

__attribute__((alias("__imp__sub_83371970"))) PPC_WEAK_FUNC(sub_83371970);
PPC_FUNC_IMPL(__imp__sub_83371970) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x83371978;
	__savegprlr_20(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r9,22304
	ctx.r7.s64 = ctx.r9.s64 + 22304;
	// addi r8,r10,22488
	ctx.r8.s64 = ctx.r10.s64 + 22488;
	// stw r11,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r11.u32);
	// stw r7,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r7.u32);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r8,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r8.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stw r11,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r11.u32);
	// addi r6,r6,22144
	ctx.r6.s64 = ctx.r6.s64 + 22144;
	// addi r5,r5,21888
	ctx.r5.s64 = ctx.r5.s64 + 21888;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// lis r4,-32166
	ctx.r4.s64 = -2108030976;
	// stw r6,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r6.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r5,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// lis r3,-32210
	ctx.r3.s64 = -2110914560;
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// addi r4,r4,10792
	ctx.r4.s64 = ctx.r4.s64 + 10792;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// addi r5,r8,21456
	ctx.r5.s64 = ctx.r8.s64 + 21456;
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// addi r3,r3,21744
	ctx.r3.s64 = ctx.r3.s64 + 21744;
	// stw r4,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// addi r6,r9,21600
	ctx.r6.s64 = ctx.r9.s64 + 21600;
	// stw r5,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r5.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stw r3,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r3.u32);
	// lis r30,-32210
	ctx.r30.s64 = -2110914560;
	// stw r6,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r6.u32);
	// lis r31,-32210
	ctx.r31.s64 = -2110914560;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// lis r29,-32210
	ctx.r29.s64 = -2110914560;
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// lis r28,-32210
	ctx.r28.s64 = -2110914560;
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r11.u32);
	// lis r27,-32210
	ctx.r27.s64 = -2110914560;
	// stw r11,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r11.u32);
	// addi r8,r7,21312
	ctx.r8.s64 = ctx.r7.s64 + 21312;
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// addi r4,r30,20928
	ctx.r4.s64 = ctx.r30.s64 + 20928;
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// addi r7,r31,21168
	ctx.r7.s64 = ctx.r31.s64 + 21168;
	// stw r8,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r8.u32);
	// addi r3,r29,20752
	ctx.r3.s64 = ctx.r29.s64 + 20752;
	// stw r4,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r4.u32);
	// addi r6,r28,20616
	ctx.r6.s64 = ctx.r28.s64 + 20616;
	// stw r7,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r7.u32);
	// addi r5,r27,20392
	ctx.r5.s64 = ctx.r27.s64 + 20392;
	// stw r3,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r3.u32);
	// lis r25,-32210
	ctx.r25.s64 = -2110914560;
	// stw r6,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r6.u32);
	// lis r26,-32210
	ctx.r26.s64 = -2110914560;
	// stw r5,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// lis r24,-32210
	ctx.r24.s64 = -2110914560;
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// lis r23,-32210
	ctx.r23.s64 = -2110914560;
	// ld r10,-256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// lis r22,-32210
	ctx.r22.s64 = -2110914560;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// addi r4,r25,20016
	ctx.r4.s64 = ctx.r25.s64 + 20016;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// addi r8,r26,20168
	ctx.r8.s64 = ctx.r26.s64 + 20168;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stw r4,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r4.u32);
	// addi r3,r24,19808
	ctx.r3.s64 = ctx.r24.s64 + 19808;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// addi r6,r23,19696
	ctx.r6.s64 = ctx.r23.s64 + 19696;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// addi r5,r22,19424
	ctx.r5.s64 = ctx.r22.s64 + 19424;
	// stw r8,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r8.u32);
	// stw r3,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r3.u32);
	// addi r4,r7,19200
	ctx.r4.s64 = ctx.r7.s64 + 19200;
	// stw r6,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r6.u32);
	// stw r5,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r5.u32);
	// stw r11,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r11.u32);
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// lis r3,-31904
	ctx.r3.s64 = -2090860544;
	// stw r11,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r11.u32);
	// stw r11,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r11.u32);
	// addi r20,r3,-19352
	ctx.r20.s64 = ctx.r3.s64 + -19352;
	// stw r4,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r4.u32);
	// ld r11,-120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r8,-168(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// ld r7,-216(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r10,4(r20)
	PPC_STORE_U64(ctx.r20.u32 + 4, ctx.r10.u64);
	// ld r6,-136(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r5,-200(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// ld r4,-152(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// ld r3,-184(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// ld r31,-240(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// ld r30,-232(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// ld r29,-224(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// ld r28,-208(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// ld r27,-192(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// ld r26,-176(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// ld r25,-160(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// ld r24,-144(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// ld r23,-128(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r22,-248(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// ld r10,-256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// ld r21,-112(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r9,16(r20)
	PPC_STORE_U64(ctx.r20.u32 + 16, ctx.r9.u64);
	// std r11,28(r20)
	PPC_STORE_U64(ctx.r20.u32 + 28, ctx.r11.u64);
	// std r8,40(r20)
	PPC_STORE_U64(ctx.r20.u32 + 40, ctx.r8.u64);
	// std r7,52(r20)
	PPC_STORE_U64(ctx.r20.u32 + 52, ctx.r7.u64);
	// std r6,64(r20)
	PPC_STORE_U64(ctx.r20.u32 + 64, ctx.r6.u64);
	// std r5,76(r20)
	PPC_STORE_U64(ctx.r20.u32 + 76, ctx.r5.u64);
	// std r4,88(r20)
	PPC_STORE_U64(ctx.r20.u32 + 88, ctx.r4.u64);
	// std r3,100(r20)
	PPC_STORE_U64(ctx.r20.u32 + 100, ctx.r3.u64);
	// std r31,112(r20)
	PPC_STORE_U64(ctx.r20.u32 + 112, ctx.r31.u64);
	// std r30,124(r20)
	PPC_STORE_U64(ctx.r20.u32 + 124, ctx.r30.u64);
	// std r29,136(r20)
	PPC_STORE_U64(ctx.r20.u32 + 136, ctx.r29.u64);
	// std r28,148(r20)
	PPC_STORE_U64(ctx.r20.u32 + 148, ctx.r28.u64);
	// std r27,160(r20)
	PPC_STORE_U64(ctx.r20.u32 + 160, ctx.r27.u64);
	// std r26,172(r20)
	PPC_STORE_U64(ctx.r20.u32 + 172, ctx.r26.u64);
	// std r25,184(r20)
	PPC_STORE_U64(ctx.r20.u32 + 184, ctx.r25.u64);
	// std r24,196(r20)
	PPC_STORE_U64(ctx.r20.u32 + 196, ctx.r24.u64);
	// std r23,208(r20)
	PPC_STORE_U64(ctx.r20.u32 + 208, ctx.r23.u64);
	// std r22,220(r20)
	PPC_STORE_U64(ctx.r20.u32 + 220, ctx.r22.u64);
	// std r21,232(r20)
	PPC_STORE_U64(ctx.r20.u32 + 232, ctx.r21.u64);
	// std r10,244(r20)
	PPC_STORE_U64(ctx.r20.u32 + 244, ctx.r10.u64);
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83371B78"))) PPC_WEAK_FUNC(sub_83371B78);
PPC_FUNC_IMPL(__imp__sub_83371B78) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r7,r9,27240
	ctx.r7.s64 = ctx.r9.s64 + 27240;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r8,r10,-19100
	ctx.r8.s64 = ctx.r10.s64 + -19100;
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

__attribute__((alias("__imp__sub_83371BB0"))) PPC_WEAK_FUNC(sub_83371BB0);
PPC_FUNC_IMPL(__imp__sub_83371BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r7,r9,27528
	ctx.r7.s64 = ctx.r9.s64 + 27528;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r8,r10,-19076
	ctx.r8.s64 = ctx.r10.s64 + -19076;
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

__attribute__((alias("__imp__sub_83371BE8"))) PPC_WEAK_FUNC(sub_83371BE8);
PPC_FUNC_IMPL(__imp__sub_83371BE8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// addi r9,r9,-17528
	ctx.r9.s64 = ctx.r9.s64 + -17528;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r10,r10,-17272
	ctx.r10.s64 = ctx.r10.s64 + -17272;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// stw r9,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r9.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r11,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// ld r31,-96(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// addi r8,r8,-17720
	ctx.r8.s64 = ctx.r8.s64 + -17720;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r7,r7,-17976
	ctx.r7.s64 = ctx.r7.s64 + -17976;
	// stw r10,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r10.u32);
	// addi r6,r6,-18272
	ctx.r6.s64 = ctx.r6.s64 + -18272;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// addi r11,r9,-17144
	ctx.r11.s64 = ctx.r9.s64 + -17144;
	// addi r5,r5,-18456
	ctx.r5.s64 = ctx.r5.s64 + -18456;
	// stw r8,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r8.u32);
	// addi r4,r4,-18752
	ctx.r4.s64 = ctx.r4.s64 + -18752;
	// stw r7,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r7.u32);
	// addi r3,r3,-19120
	ctx.r3.s64 = ctx.r3.s64 + -19120;
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// stw r5,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r5.u32);
	// stw r4,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r4.u32);
	// addi r30,r10,-19048
	ctx.r30.s64 = ctx.r10.s64 + -19048;
	// stw r3,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r3.u32);
	// stw r11,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// ld r10,-88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r9,-80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r8,-72(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r7,-64(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r6,-56(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r5,-48(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r4,-40(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r3,-32(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r11,-96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// std r31,112(r30)
	PPC_STORE_U64(ctx.r30.u32 + 112, ctx.r31.u64);
	// std r10,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r10.u64);
	// std r9,28(r30)
	PPC_STORE_U64(ctx.r30.u32 + 28, ctx.r9.u64);
	// std r8,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r8.u64);
	// std r7,52(r30)
	PPC_STORE_U64(ctx.r30.u32 + 52, ctx.r7.u64);
	// std r6,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r6.u64);
	// std r5,76(r30)
	PPC_STORE_U64(ctx.r30.u32 + 76, ctx.r5.u64);
	// std r4,88(r30)
	PPC_STORE_U64(ctx.r30.u32 + 88, ctx.r4.u64);
	// std r3,100(r30)
	PPC_STORE_U64(ctx.r30.u32 + 100, ctx.r3.u64);
	// std r11,4(r30)
	PPC_STORE_U64(ctx.r30.u32 + 4, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83371CF0"))) PPC_WEAK_FUNC(sub_83371CF0);
PPC_FUNC_IMPL(__imp__sub_83371CF0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// addi r5,r10,-14936
	ctx.r5.s64 = ctx.r10.s64 + -14936;
	// addi r10,r7,-15640
	ctx.r10.s64 = ctx.r7.s64 + -15640;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r10,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r10.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-15192
	ctx.r4.s64 = ctx.r9.s64 + -15192;
	// addi r3,r8,-15384
	ctx.r3.s64 = ctx.r8.s64 + -15384;
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// addi r9,r6,-15936
	ctx.r9.s64 = ctx.r6.s64 + -15936;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lis r8,-31904
	ctx.r8.s64 = -2090860544;
	// ld r5,-24(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// addi r30,r7,-14808
	ctx.r30.s64 = ctx.r7.s64 + -14808;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r31,r8,-18928
	ctx.r31.s64 = ctx.r8.s64 + -18928;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// stw r4,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r4.u32);
	// stw r3,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r3.u32);
	// stw r30,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r30.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r9,-56(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r7,-40(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r11,-24(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r5,76(r31)
	PPC_STORE_U64(ctx.r31.u32 + 76, ctx.r5.u64);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// std r9,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r9.u64);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// std r7,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r7.u64);
	// std r6,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// std r11,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83371DB0"))) PPC_WEAK_FUNC(sub_83371DB0);
PPC_FUNC_IMPL(__imp__sub_83371DB0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83371DB8;
	__savegprlr_29(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// addi r9,r9,-12792
	ctx.r9.s64 = ctx.r9.s64 + -12792;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r11,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r11.u32);
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// addi r8,r8,-13048
	ctx.r8.s64 = ctx.r8.s64 + -13048;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// addi r11,r31,-14392
	ctx.r11.s64 = ctx.r31.s64 + -14392;
	// stw r9,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r9.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r11,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r11.u32);
	// addi r7,r7,-13240
	ctx.r7.s64 = ctx.r7.s64 + -13240;
	// addi r11,r9,-12512
	ctx.r11.s64 = ctx.r9.s64 + -12512;
	// stw r8,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r8.u32);
	// addi r6,r6,-13496
	ctx.r6.s64 = ctx.r6.s64 + -13496;
	// stw r7,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r7.u32);
	// addi r5,r5,-13792
	ctx.r5.s64 = ctx.r5.s64 + -13792;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// addi r4,r4,-13960
	ctx.r4.s64 = ctx.r4.s64 + -13960;
	// stw r6,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r6.u32);
	// addi r3,r3,-14184
	ctx.r3.s64 = ctx.r3.s64 + -14184;
	// stw r5,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r5.u32);
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r3,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r3.u32);
	// ld r31,-56(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// addi r10,r10,-12664
	ctx.r10.s64 = ctx.r10.s64 + -12664;
	// ld r8,-104(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r7,-96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r6,-88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r5,-80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r4,-72(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r3,-64(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r11,-48(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// stw r10,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r10.u32);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// ld r30,-128(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// addi r29,r10,-18840
	ctx.r29.s64 = ctx.r10.s64 + -18840;
	// ld r10,-120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r9,-112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r10,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r10.u64);
	// std r11,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r11.u64);
	// std r9,28(r29)
	PPC_STORE_U64(ctx.r29.u32 + 28, ctx.r9.u64);
	// std r8,40(r29)
	PPC_STORE_U64(ctx.r29.u32 + 40, ctx.r8.u64);
	// std r7,52(r29)
	PPC_STORE_U64(ctx.r29.u32 + 52, ctx.r7.u64);
	// std r6,64(r29)
	PPC_STORE_U64(ctx.r29.u32 + 64, ctx.r6.u64);
	// std r5,76(r29)
	PPC_STORE_U64(ctx.r29.u32 + 76, ctx.r5.u64);
	// std r4,88(r29)
	PPC_STORE_U64(ctx.r29.u32 + 88, ctx.r4.u64);
	// std r3,100(r29)
	PPC_STORE_U64(ctx.r29.u32 + 100, ctx.r3.u64);
	// std r31,112(r29)
	PPC_STORE_U64(ctx.r29.u32 + 112, ctx.r31.u64);
	// std r30,124(r29)
	PPC_STORE_U64(ctx.r29.u32 + 124, ctx.r30.u64);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83371EC8"))) PPC_WEAK_FUNC(sub_83371EC8);
PPC_FUNC_IMPL(__imp__sub_83371EC8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r10,r10,-24000
	ctx.r10.s64 = ctx.r10.s64 + -24000;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r10,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// addi r11,r31,-25576
	ctx.r11.s64 = ctx.r31.s64 + -25576;
	// addi r9,r9,-24128
	ctx.r9.s64 = ctx.r9.s64 + -24128;
	// ld r3,-80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r8,r8,-24384
	ctx.r8.s64 = ctx.r8.s64 + -24384;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// addi r7,r7,-24576
	ctx.r7.s64 = ctx.r7.s64 + -24576;
	// stw r9,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r9.u32);
	// addi r6,r6,-24832
	ctx.r6.s64 = ctx.r6.s64 + -24832;
	// stw r8,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r8.u32);
	// addi r5,r5,-25128
	ctx.r5.s64 = ctx.r5.s64 + -25128;
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// addi r4,r4,-25352
	ctx.r4.s64 = ctx.r4.s64 + -25352;
	// stw r6,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r6.u32);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// stw r5,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r5.u32);
	// stw r4,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r4.u32);
	// addi r31,r10,-18704
	ctx.r31.s64 = ctx.r10.s64 + -18704;
	// ld r11,-72(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r9,-56(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r7,-40(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r5,-24(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r3,100(r31)
	PPC_STORE_U64(ctx.r31.u32 + 100, ctx.r3.u64);
	// std r11,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r11.u64);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// std r9,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r9.u64);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// std r7,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r7.u64);
	// std r6,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// std r5,76(r31)
	PPC_STORE_U64(ctx.r31.u32 + 76, ctx.r5.u64);
	// std r4,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r4.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83371FB0"))) PPC_WEAK_FUNC(sub_83371FB0);
PPC_FUNC_IMPL(__imp__sub_83371FB0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x83371FB8;
	__savegprlr_21(ctx, base);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r9,-7592
	ctx.r7.s64 = ctx.r9.s64 + -7592;
	// addi r8,r10,-7256
	ctx.r8.s64 = ctx.r10.s64 + -7256;
	// stw r11,-292(r1)
	PPC_STORE_U32(ctx.r1.u32 + -292, ctx.r11.u32);
	// stw r7,-296(r1)
	PPC_STORE_U32(ctx.r1.u32 + -296, ctx.r7.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stw r8,-304(r1)
	PPC_STORE_U32(ctx.r1.u32 + -304, ctx.r8.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// stw r11,-300(r1)
	PPC_STORE_U32(ctx.r1.u32 + -300, ctx.r11.u32);
	// addi r6,r6,-7720
	ctx.r6.s64 = ctx.r6.s64 + -7720;
	// addi r5,r5,-7976
	ctx.r5.s64 = ctx.r5.s64 + -7976;
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r6,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r6.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r5,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r5.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// stw r11,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r11.u32);
	// addi r4,r4,-8168
	ctx.r4.s64 = ctx.r4.s64 + -8168;
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// addi r5,r8,-8888
	ctx.r5.s64 = ctx.r8.s64 + -8888;
	// stw r11,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r11.u32);
	// addi r3,r3,-8424
	ctx.r3.s64 = ctx.r3.s64 + -8424;
	// stw r4,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r4.u32);
	// addi r6,r9,-8720
	ctx.r6.s64 = ctx.r9.s64 + -8720;
	// stw r5,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r5.u32);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r3,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r3.u32);
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// stw r6,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r6.u32);
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// lis r29,-32209
	ctx.r29.s64 = -2110849024;
	// stw r11,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r11.u32);
	// lis r28,-32209
	ctx.r28.s64 = -2110849024;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// addi r8,r7,-9056
	ctx.r8.s64 = ctx.r7.s64 + -9056;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// addi r4,r30,-9680
	ctx.r4.s64 = ctx.r30.s64 + -9680;
	// stw r11,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r11.u32);
	// addi r7,r31,-9328
	ctx.r7.s64 = ctx.r31.s64 + -9328;
	// stw r8,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r8.u32);
	// addi r3,r29,-9976
	ctx.r3.s64 = ctx.r29.s64 + -9976;
	// stw r4,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// addi r6,r28,-10144
	ctx.r6.s64 = ctx.r28.s64 + -10144;
	// stw r7,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// addi r5,r27,-10296
	ctx.r5.s64 = ctx.r27.s64 + -10296;
	// stw r3,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r3.u32);
	// lis r25,-32209
	ctx.r25.s64 = -2110849024;
	// stw r6,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r6.u32);
	// lis r26,-32149
	ctx.r26.s64 = -2106916864;
	// stw r5,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r5.u32);
	// lis r24,-32209
	ctx.r24.s64 = -2110849024;
	// ld r9,-296(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -296);
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// ld r10,-304(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -304);
	// lis r22,-32209
	ctx.r22.s64 = -2110849024;
	// stw r11,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r11.u32);
	// addi r4,r25,-10512
	ctx.r4.s64 = ctx.r25.s64 + -10512;
	// stw r11,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r11.u32);
	// addi r8,r26,-23264
	ctx.r8.s64 = ctx.r26.s64 + -23264;
	// stw r11,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r11.u32);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r4,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r4.u32);
	// addi r3,r24,-10672
	ctx.r3.s64 = ctx.r24.s64 + -10672;
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r11.u32);
	// addi r6,r23,-10864
	ctx.r6.s64 = ctx.r23.s64 + -10864;
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// addi r5,r22,-11048
	ctx.r5.s64 = ctx.r22.s64 + -11048;
	// stw r8,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r8.u32);
	// stw r3,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r3.u32);
	// addi r4,r7,-11176
	ctx.r4.s64 = ctx.r7.s64 + -11176;
	// stw r6,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r6.u32);
	// stw r5,-296(r1)
	PPC_STORE_U32(ctx.r1.u32 + -296, ctx.r5.u32);
	// stw r11,-292(r1)
	PPC_STORE_U32(ctx.r1.u32 + -292, ctx.r11.u32);
	// stw r4,-304(r1)
	PPC_STORE_U32(ctx.r1.u32 + -304, ctx.r4.u32);
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// stw r11,-300(r1)
	PPC_STORE_U32(ctx.r1.u32 + -300, ctx.r11.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// addi r3,r3,-11304
	ctx.r3.s64 = ctx.r3.s64 + -11304;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// addi r8,r8,-11504
	ctx.r8.s64 = ctx.r8.s64 + -11504;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// addi r7,r7,-11704
	ctx.r7.s64 = ctx.r7.s64 + -11704;
	// stw r3,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// addi r6,r6,-11848
	ctx.r6.s64 = ctx.r6.s64 + -11848;
	// stw r8,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// addi r5,r5,-11992
	ctx.r5.s64 = ctx.r5.s64 + -11992;
	// stw r7,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r7.u32);
	// addi r4,r4,-12256
	ctx.r4.s64 = ctx.r4.s64 + -12256;
	// stw r6,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r6.u32);
	// stw r5,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r5.u32);
	// lis r3,-31904
	ctx.r3.s64 = -2090860544;
	// stw r4,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r4.u32);
	// stw r11,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r11.u32);
	// addi r21,r3,-18592
	ctx.r21.s64 = ctx.r3.s64 + -18592;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// ld r8,-200(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// ld r7,-152(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// ld r6,-264(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r10,4(r21)
	PPC_STORE_U64(ctx.r21.u32 + 4, ctx.r10.u64);
	// std r9,16(r21)
	PPC_STORE_U64(ctx.r21.u32 + 16, ctx.r9.u64);
	// ld r10,-296(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -296);
	// ld r9,-304(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -304);
	// ld r5,-184(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r8,28(r21)
	PPC_STORE_U64(ctx.r21.u32 + 28, ctx.r8.u64);
	// std r7,40(r21)
	PPC_STORE_U64(ctx.r21.u32 + 40, ctx.r7.u64);
	// std r6,52(r21)
	PPC_STORE_U64(ctx.r21.u32 + 52, ctx.r6.u64);
	// std r10,220(r21)
	PPC_STORE_U64(ctx.r21.u32 + 220, ctx.r10.u64);
	// std r9,232(r21)
	PPC_STORE_U64(ctx.r21.u32 + 232, ctx.r9.u64);
	// ld r4,-248(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// ld r3,-120(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r31,-232(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// ld r30,-168(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// ld r29,-216(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// ld r28,-136(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r27,-288(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// ld r26,-280(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// ld r25,-272(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// ld r24,-256(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// ld r23,-240(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// ld r22,-224(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// ld r10,-208(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// ld r11,-192(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// ld r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// ld r7,-144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// ld r6,-128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// std r5,64(r21)
	PPC_STORE_U64(ctx.r21.u32 + 64, ctx.r5.u64);
	// ld r5,-112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r4,76(r21)
	PPC_STORE_U64(ctx.r21.u32 + 76, ctx.r4.u64);
	// std r3,88(r21)
	PPC_STORE_U64(ctx.r21.u32 + 88, ctx.r3.u64);
	// std r31,100(r21)
	PPC_STORE_U64(ctx.r21.u32 + 100, ctx.r31.u64);
	// std r30,112(r21)
	PPC_STORE_U64(ctx.r21.u32 + 112, ctx.r30.u64);
	// std r29,124(r21)
	PPC_STORE_U64(ctx.r21.u32 + 124, ctx.r29.u64);
	// std r28,136(r21)
	PPC_STORE_U64(ctx.r21.u32 + 136, ctx.r28.u64);
	// std r27,148(r21)
	PPC_STORE_U64(ctx.r21.u32 + 148, ctx.r27.u64);
	// std r26,160(r21)
	PPC_STORE_U64(ctx.r21.u32 + 160, ctx.r26.u64);
	// std r25,172(r21)
	PPC_STORE_U64(ctx.r21.u32 + 172, ctx.r25.u64);
	// std r24,184(r21)
	PPC_STORE_U64(ctx.r21.u32 + 184, ctx.r24.u64);
	// std r23,196(r21)
	PPC_STORE_U64(ctx.r21.u32 + 196, ctx.r23.u64);
	// std r22,208(r21)
	PPC_STORE_U64(ctx.r21.u32 + 208, ctx.r22.u64);
	// std r10,244(r21)
	PPC_STORE_U64(ctx.r21.u32 + 244, ctx.r10.u64);
	// std r11,256(r21)
	PPC_STORE_U64(ctx.r21.u32 + 256, ctx.r11.u64);
	// std r9,268(r21)
	PPC_STORE_U64(ctx.r21.u32 + 268, ctx.r9.u64);
	// std r8,280(r21)
	PPC_STORE_U64(ctx.r21.u32 + 280, ctx.r8.u64);
	// std r7,292(r21)
	PPC_STORE_U64(ctx.r21.u32 + 292, ctx.r7.u64);
	// std r6,304(r21)
	PPC_STORE_U64(ctx.r21.u32 + 304, ctx.r6.u64);
	// std r5,316(r21)
	PPC_STORE_U64(ctx.r21.u32 + 316, ctx.r5.u64);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83372248"))) PPC_WEAK_FUNC(sub_83372248);
PPC_FUNC_IMPL(__imp__sub_83372248) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// addi r3,r9,-17720
	ctx.r3.s64 = ctx.r9.s64 + -17720;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r9,r7,-16312
	ctx.r9.s64 = ctx.r7.s64 + -16312;
	// stw r3,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r3.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// addi r7,r5,-16728
	ctx.r7.s64 = ctx.r5.s64 + -16728;
	// stw r9,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r9.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// addi r4,r10,-17528
	ctx.r4.s64 = ctx.r10.s64 + -17528;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r4.u32);
	// addi r10,r8,-16144
	ctx.r10.s64 = ctx.r8.s64 + -16144;
	// addi r8,r6,-16520
	ctx.r8.s64 = ctx.r6.s64 + -16520;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lis r6,-31904
	ctx.r6.s64 = -2090860544;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// addi r30,r5,-17144
	ctx.r30.s64 = ctx.r5.s64 + -17144;
	// ld r4,-32(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// addi r31,r6,-18264
	ctx.r31.s64 = ctx.r6.s64 + -18264;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// stw r8,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r8.u32);
	// stw r30,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r30.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r9,-72(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r8,-64(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r7,-56(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r6,-48(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r5,-40(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r4,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r4.u64);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// std r9,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r9.u64);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// std r7,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r7.u64);
	// std r6,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// std r5,76(r31)
	PPC_STORE_U64(ctx.r31.u32 + 76, ctx.r5.u64);
	// std r11,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372320"))) PPC_WEAK_FUNC(sub_83372320);
PPC_FUNC_IMPL(__imp__sub_83372320) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r10,r10,-4904
	ctx.r10.s64 = ctx.r10.s64 + -4904;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r10,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// addi r11,r31,-6632
	ctx.r11.s64 = ctx.r31.s64 + -6632;
	// addi r9,r9,-5168
	ctx.r9.s64 = ctx.r9.s64 + -5168;
	// ld r3,-80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r8,r8,-5504
	ctx.r8.s64 = ctx.r8.s64 + -5504;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// addi r7,r7,-5632
	ctx.r7.s64 = ctx.r7.s64 + -5632;
	// stw r9,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r9.u32);
	// addi r6,r6,-5888
	ctx.r6.s64 = ctx.r6.s64 + -5888;
	// stw r8,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r8.u32);
	// addi r5,r5,-6080
	ctx.r5.s64 = ctx.r5.s64 + -6080;
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// addi r4,r4,-6336
	ctx.r4.s64 = ctx.r4.s64 + -6336;
	// stw r6,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r6.u32);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// stw r5,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r5.u32);
	// stw r4,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r4.u32);
	// addi r31,r10,-18168
	ctx.r31.s64 = ctx.r10.s64 + -18168;
	// ld r11,-72(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r9,-56(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r7,-40(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r5,-24(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r3,100(r31)
	PPC_STORE_U64(ctx.r31.u32 + 100, ctx.r3.u64);
	// std r11,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r11.u64);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// std r9,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r9.u64);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// std r7,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r7.u64);
	// std r6,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// std r5,76(r31)
	PPC_STORE_U64(ctx.r31.u32 + 76, ctx.r5.u64);
	// std r4,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r4.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372408"))) PPC_WEAK_FUNC(sub_83372408);
PPC_FUNC_IMPL(__imp__sub_83372408) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r10,r10,-536
	ctx.r10.s64 = ctx.r10.s64 + -536;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r10,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// addi r11,r31,-2264
	ctx.r11.s64 = ctx.r31.s64 + -2264;
	// addi r9,r9,-800
	ctx.r9.s64 = ctx.r9.s64 + -800;
	// ld r3,-80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r8,r8,-1136
	ctx.r8.s64 = ctx.r8.s64 + -1136;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// addi r7,r7,-1264
	ctx.r7.s64 = ctx.r7.s64 + -1264;
	// stw r9,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r9.u32);
	// addi r6,r6,-1520
	ctx.r6.s64 = ctx.r6.s64 + -1520;
	// stw r8,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r8.u32);
	// addi r5,r5,-1712
	ctx.r5.s64 = ctx.r5.s64 + -1712;
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// addi r4,r4,-1968
	ctx.r4.s64 = ctx.r4.s64 + -1968;
	// stw r6,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r6.u32);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// stw r5,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r5.u32);
	// stw r4,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r4.u32);
	// addi r31,r10,-18056
	ctx.r31.s64 = ctx.r10.s64 + -18056;
	// ld r11,-72(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r9,-56(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r7,-40(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r5,-24(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r3,100(r31)
	PPC_STORE_U64(ctx.r31.u32 + 100, ctx.r3.u64);
	// std r11,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r11.u64);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// std r9,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r9.u64);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// std r7,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r7.u64);
	// std r6,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// std r5,76(r31)
	PPC_STORE_U64(ctx.r31.u32 + 76, ctx.r5.u64);
	// std r4,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r4.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833724F0"))) PPC_WEAK_FUNC(sub_833724F0);
PPC_FUNC_IMPL(__imp__sub_833724F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-23584
	ctx.r9.s64 = ctx.r10.s64 + -23584;
	// addi r5,r7,22024
	ctx.r5.s64 = ctx.r7.s64 + 22024;
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
	// addi r6,r8,-20660
	ctx.r6.s64 = ctx.r8.s64 + -20660;
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

__attribute__((alias("__imp__sub_83372540"))) PPC_WEAK_FUNC(sub_83372540);
PPC_FUNC_IMPL(__imp__sub_83372540) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// addi r5,r10,-19584
	ctx.r5.s64 = ctx.r10.s64 + -19584;
	// addi r10,r7,-20328
	ctx.r10.s64 = ctx.r7.s64 + -20328;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r10,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r10.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-19776
	ctx.r4.s64 = ctx.r9.s64 + -19776;
	// addi r3,r8,-20032
	ctx.r3.s64 = ctx.r8.s64 + -20032;
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// addi r9,r6,-20456
	ctx.r9.s64 = ctx.r6.s64 + -20456;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lis r8,-31904
	ctx.r8.s64 = -2090860544;
	// ld r5,-24(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// addi r30,r7,-19328
	ctx.r30.s64 = ctx.r7.s64 + -19328;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r31,r8,-17944
	ctx.r31.s64 = ctx.r8.s64 + -17944;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// stw r4,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r4.u32);
	// stw r3,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r3.u32);
	// stw r30,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r30.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r9,-56(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r7,-40(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r11,-24(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r5,76(r31)
	PPC_STORE_U64(ctx.r31.u32 + 76, ctx.r5.u64);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// std r9,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r9.u64);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// std r7,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r7.u64);
	// std r6,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// std r11,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372600"))) PPC_WEAK_FUNC(sub_83372600);
PPC_FUNC_IMPL(__imp__sub_83372600) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// addi r5,r10,-24000
	ctx.r5.s64 = ctx.r10.s64 + -24000;
	// addi r10,r7,-24576
	ctx.r10.s64 = ctx.r7.s64 + -24576;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r10,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r10.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-24128
	ctx.r4.s64 = ctx.r9.s64 + -24128;
	// addi r3,r8,-24384
	ctx.r3.s64 = ctx.r8.s64 + -24384;
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// addi r9,r6,-25576
	ctx.r9.s64 = ctx.r6.s64 + -25576;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lis r8,-31904
	ctx.r8.s64 = -2090860544;
	// ld r5,-24(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// addi r30,r7,-23328
	ctx.r30.s64 = ctx.r7.s64 + -23328;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r31,r8,-17856
	ctx.r31.s64 = ctx.r8.s64 + -17856;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// stw r4,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r4.u32);
	// stw r3,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r3.u32);
	// stw r30,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r30.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r9,-56(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r7,-40(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r11,-24(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r5,76(r31)
	PPC_STORE_U64(ctx.r31.u32 + 76, ctx.r5.u64);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// std r9,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r9.u64);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// std r7,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r7.u64);
	// std r6,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// std r11,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833726C0"))) PPC_WEAK_FUNC(sub_833726C0);
PPC_FUNC_IMPL(__imp__sub_833726C0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r5,r9,4000
	ctx.r5.s64 = ctx.r9.s64 + 4000;
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,4064
	ctx.r6.s64 = ctx.r10.s64 + 4064;
	// addi r4,r8,3736
	ctx.r4.s64 = ctx.r8.s64 + 3736;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// addi r3,r7,3608
	ctx.r3.s64 = ctx.r7.s64 + 3608;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// stw r6,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r6.u32);
	// addi r30,r9,4232
	ctx.r30.s64 = ctx.r9.s64 + 4232;
	// ld r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// addi r31,r10,-17768
	ctx.r31.s64 = ctx.r10.s64 + -17768;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r4,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r4.u32);
	// stw r3,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r3.u32);
	// stw r30,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r30.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r9,-56(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r7,-40(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r6,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// std r9,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r9.u64);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// std r7,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r7.u64);
	// std r11,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372768"))) PPC_WEAK_FUNC(sub_83372768);
PPC_FUNC_IMPL(__imp__sub_83372768) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r7,r9,4568
	ctx.r7.s64 = ctx.r9.s64 + 4568;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r8,r10,-17696
	ctx.r8.s64 = ctx.r10.s64 + -17696;
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

__attribute__((alias("__imp__sub_833727A0"))) PPC_WEAK_FUNC(sub_833727A0);
PPC_FUNC_IMPL(__imp__sub_833727A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-18064
	ctx.r9.s64 = ctx.r11.s64 + -18064;
	// addi r8,r10,-16064
	ctx.r8.s64 = ctx.r10.s64 + -16064;
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833727BC"))) PPC_WEAK_FUNC(sub_833727BC);
PPC_FUNC_IMPL(__imp__sub_833727BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833727C0"))) PPC_WEAK_FUNC(sub_833727C0);
PPC_FUNC_IMPL(__imp__sub_833727C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-16016
	ctx.r9.s64 = ctx.r11.s64 + -16016;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833727F0"))) PPC_WEAK_FUNC(sub_833727F0);
PPC_FUNC_IMPL(__imp__sub_833727F0) {
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
	// addi r5,r11,-16000
	ctx.r5.s64 = ctx.r11.s64 + -16000;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372838"))) PPC_WEAK_FUNC(sub_83372838);
PPC_FUNC_IMPL(__imp__sub_83372838) {
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
	// addi r5,r11,-16048
	ctx.r5.s64 = ctx.r11.s64 + -16048;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372880"))) PPC_WEAK_FUNC(sub_83372880);
PPC_FUNC_IMPL(__imp__sub_83372880) {
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
loc_833728B0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833728b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833728B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833728C0"))) PPC_WEAK_FUNC(sub_833728C0);
PPC_FUNC_IMPL(__imp__sub_833728C0) {
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
loc_833728F0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833728f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833728F0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372900"))) PPC_WEAK_FUNC(sub_83372900);
PPC_FUNC_IMPL(__imp__sub_83372900) {
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
loc_83372930:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83372930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83372930;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372940"))) PPC_WEAK_FUNC(sub_83372940);
PPC_FUNC_IMPL(__imp__sub_83372940) {
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
loc_83372970:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83372970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83372970;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372980"))) PPC_WEAK_FUNC(sub_83372980);
PPC_FUNC_IMPL(__imp__sub_83372980) {
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
loc_833729B0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833729b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833729B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833729C0"))) PPC_WEAK_FUNC(sub_833729C0);
PPC_FUNC_IMPL(__imp__sub_833729C0) {
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
loc_833729F0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833729f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833729F0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372A00"))) PPC_WEAK_FUNC(sub_83372A00);
PPC_FUNC_IMPL(__imp__sub_83372A00) {
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
loc_83372A30:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83372a30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83372A30;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372A40"))) PPC_WEAK_FUNC(sub_83372A40);
PPC_FUNC_IMPL(__imp__sub_83372A40) {
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
loc_83372A70:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83372a70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83372A70;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372A80"))) PPC_WEAK_FUNC(sub_83372A80);
PPC_FUNC_IMPL(__imp__sub_83372A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15128
	ctx.r3.s64 = ctx.r11.s64 + -15128;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83372A8C"))) PPC_WEAK_FUNC(sub_83372A8C);
PPC_FUNC_IMPL(__imp__sub_83372A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83372A90"))) PPC_WEAK_FUNC(sub_83372A90);
PPC_FUNC_IMPL(__imp__sub_83372A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15112
	ctx.r3.s64 = ctx.r11.s64 + -15112;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83372A9C"))) PPC_WEAK_FUNC(sub_83372A9C);
PPC_FUNC_IMPL(__imp__sub_83372A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83372AA0"))) PPC_WEAK_FUNC(sub_83372AA0);
PPC_FUNC_IMPL(__imp__sub_83372AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-18064
	ctx.r9.s64 = ctx.r11.s64 + -18064;
	// addi r8,r10,-15584
	ctx.r8.s64 = ctx.r10.s64 + -15584;
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372ABC"))) PPC_WEAK_FUNC(sub_83372ABC);
PPC_FUNC_IMPL(__imp__sub_83372ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83372AC0"))) PPC_WEAK_FUNC(sub_83372AC0);
PPC_FUNC_IMPL(__imp__sub_83372AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-15552
	ctx.r9.s64 = ctx.r11.s64 + -15552;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372AF0"))) PPC_WEAK_FUNC(sub_83372AF0);
PPC_FUNC_IMPL(__imp__sub_83372AF0) {
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
	// addi r5,r11,-15536
	ctx.r5.s64 = ctx.r11.s64 + -15536;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372B38"))) PPC_WEAK_FUNC(sub_83372B38);
PPC_FUNC_IMPL(__imp__sub_83372B38) {
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
	// addi r5,r11,-15568
	ctx.r5.s64 = ctx.r11.s64 + -15568;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372B80"))) PPC_WEAK_FUNC(sub_83372B80);
PPC_FUNC_IMPL(__imp__sub_83372B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15096
	ctx.r3.s64 = ctx.r11.s64 + -15096;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83372B8C"))) PPC_WEAK_FUNC(sub_83372B8C);
PPC_FUNC_IMPL(__imp__sub_83372B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83372B90"))) PPC_WEAK_FUNC(sub_83372B90);
PPC_FUNC_IMPL(__imp__sub_83372B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-15920
	ctx.r3.s64 = ctx.r11.s64 + -15920;
	// b 0x823462f0
	sub_823462F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83372B9C"))) PPC_WEAK_FUNC(sub_83372B9C);
PPC_FUNC_IMPL(__imp__sub_83372B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83372BA0"))) PPC_WEAK_FUNC(sub_83372BA0);
PPC_FUNC_IMPL(__imp__sub_83372BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-18064
	ctx.r9.s64 = ctx.r11.s64 + -18064;
	// addi r8,r10,-15520
	ctx.r8.s64 = ctx.r10.s64 + -15520;
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372BBC"))) PPC_WEAK_FUNC(sub_83372BBC);
PPC_FUNC_IMPL(__imp__sub_83372BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83372BC0"))) PPC_WEAK_FUNC(sub_83372BC0);
PPC_FUNC_IMPL(__imp__sub_83372BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372BF0"))) PPC_WEAK_FUNC(sub_83372BF0);
PPC_FUNC_IMPL(__imp__sub_83372BF0) {
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
	// addi r5,r11,-15472
	ctx.r5.s64 = ctx.r11.s64 + -15472;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372C38"))) PPC_WEAK_FUNC(sub_83372C38);
PPC_FUNC_IMPL(__imp__sub_83372C38) {
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
	// addi r5,r11,-15504
	ctx.r5.s64 = ctx.r11.s64 + -15504;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372C80"))) PPC_WEAK_FUNC(sub_83372C80);
PPC_FUNC_IMPL(__imp__sub_83372C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-18064
	ctx.r9.s64 = ctx.r11.s64 + -18064;
	// addi r8,r10,-15248
	ctx.r8.s64 = ctx.r10.s64 + -15248;
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372C9C"))) PPC_WEAK_FUNC(sub_83372C9C);
PPC_FUNC_IMPL(__imp__sub_83372C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83372CA0"))) PPC_WEAK_FUNC(sub_83372CA0);
PPC_FUNC_IMPL(__imp__sub_83372CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-15168
	ctx.r9.s64 = ctx.r11.s64 + -15168;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372CD0"))) PPC_WEAK_FUNC(sub_83372CD0);
PPC_FUNC_IMPL(__imp__sub_83372CD0) {
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
	// addi r5,r11,-15120
	ctx.r5.s64 = ctx.r11.s64 + -15120;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372D18"))) PPC_WEAK_FUNC(sub_83372D18);
PPC_FUNC_IMPL(__imp__sub_83372D18) {
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
	// addi r5,r11,-15216
	ctx.r5.s64 = ctx.r11.s64 + -15216;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372D60"))) PPC_WEAK_FUNC(sub_83372D60);
PPC_FUNC_IMPL(__imp__sub_83372D60) {
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
loc_83372D90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83372d90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83372D90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372DA0"))) PPC_WEAK_FUNC(sub_83372DA0);
PPC_FUNC_IMPL(__imp__sub_83372DA0) {
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
loc_83372DD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83372dd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83372DD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372DE0"))) PPC_WEAK_FUNC(sub_83372DE0);
PPC_FUNC_IMPL(__imp__sub_83372DE0) {
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
loc_83372E10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83372e10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83372E10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372E20"))) PPC_WEAK_FUNC(sub_83372E20);
PPC_FUNC_IMPL(__imp__sub_83372E20) {
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
loc_83372E50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83372e50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83372E50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372E60"))) PPC_WEAK_FUNC(sub_83372E60);
PPC_FUNC_IMPL(__imp__sub_83372E60) {
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
loc_83372E90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83372e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83372E90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372EA0"))) PPC_WEAK_FUNC(sub_83372EA0);
PPC_FUNC_IMPL(__imp__sub_83372EA0) {
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
loc_83372ED0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83372ed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83372ED0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372EE0"))) PPC_WEAK_FUNC(sub_83372EE0);
PPC_FUNC_IMPL(__imp__sub_83372EE0) {
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
loc_83372F10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83372f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83372F10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372F20"))) PPC_WEAK_FUNC(sub_83372F20);
PPC_FUNC_IMPL(__imp__sub_83372F20) {
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
loc_83372F50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83372f50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83372F50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372F60"))) PPC_WEAK_FUNC(sub_83372F60);
PPC_FUNC_IMPL(__imp__sub_83372F60) {
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
loc_83372F90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83372f90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83372F90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372FA0"))) PPC_WEAK_FUNC(sub_83372FA0);
PPC_FUNC_IMPL(__imp__sub_83372FA0) {
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
loc_83372FD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83372fd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83372FD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83372FE0"))) PPC_WEAK_FUNC(sub_83372FE0);
PPC_FUNC_IMPL(__imp__sub_83372FE0) {
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
loc_83373010:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373010;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373020"))) PPC_WEAK_FUNC(sub_83373020);
PPC_FUNC_IMPL(__imp__sub_83373020) {
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
loc_83373050:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373050;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373060"))) PPC_WEAK_FUNC(sub_83373060);
PPC_FUNC_IMPL(__imp__sub_83373060) {
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
loc_83373090:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373090;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833730A0"))) PPC_WEAK_FUNC(sub_833730A0);
PPC_FUNC_IMPL(__imp__sub_833730A0) {
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
loc_833730D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833730d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833730D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833730E0"))) PPC_WEAK_FUNC(sub_833730E0);
PPC_FUNC_IMPL(__imp__sub_833730E0) {
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
loc_83373110:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373110;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373120"))) PPC_WEAK_FUNC(sub_83373120);
PPC_FUNC_IMPL(__imp__sub_83373120) {
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
loc_83373150:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373150;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373160"))) PPC_WEAK_FUNC(sub_83373160);
PPC_FUNC_IMPL(__imp__sub_83373160) {
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
loc_83373190:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373190;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833731A0"))) PPC_WEAK_FUNC(sub_833731A0);
PPC_FUNC_IMPL(__imp__sub_833731A0) {
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
loc_833731D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833731d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833731D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833731E0"))) PPC_WEAK_FUNC(sub_833731E0);
PPC_FUNC_IMPL(__imp__sub_833731E0) {
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
loc_83373210:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373210;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373220"))) PPC_WEAK_FUNC(sub_83373220);
PPC_FUNC_IMPL(__imp__sub_83373220) {
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
loc_83373250:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373250;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373260"))) PPC_WEAK_FUNC(sub_83373260);
PPC_FUNC_IMPL(__imp__sub_83373260) {
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
loc_83373290:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373290;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833732A0"))) PPC_WEAK_FUNC(sub_833732A0);
PPC_FUNC_IMPL(__imp__sub_833732A0) {
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
loc_833732D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833732d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833732D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833732E0"))) PPC_WEAK_FUNC(sub_833732E0);
PPC_FUNC_IMPL(__imp__sub_833732E0) {
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
loc_83373310:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373310;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373320"))) PPC_WEAK_FUNC(sub_83373320);
PPC_FUNC_IMPL(__imp__sub_83373320) {
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
loc_83373350:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373350;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373360"))) PPC_WEAK_FUNC(sub_83373360);
PPC_FUNC_IMPL(__imp__sub_83373360) {
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
loc_83373390:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373390
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373390;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833733A0"))) PPC_WEAK_FUNC(sub_833733A0);
PPC_FUNC_IMPL(__imp__sub_833733A0) {
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
loc_833733D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833733d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833733D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833733E0"))) PPC_WEAK_FUNC(sub_833733E0);
PPC_FUNC_IMPL(__imp__sub_833733E0) {
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
loc_83373410:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373410;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373420"))) PPC_WEAK_FUNC(sub_83373420);
PPC_FUNC_IMPL(__imp__sub_83373420) {
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
loc_83373450:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373450;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373460"))) PPC_WEAK_FUNC(sub_83373460);
PPC_FUNC_IMPL(__imp__sub_83373460) {
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
loc_83373490:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373490;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833734A0"))) PPC_WEAK_FUNC(sub_833734A0);
PPC_FUNC_IMPL(__imp__sub_833734A0) {
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
loc_833734D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833734d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833734D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833734E0"))) PPC_WEAK_FUNC(sub_833734E0);
PPC_FUNC_IMPL(__imp__sub_833734E0) {
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
loc_83373510:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373510;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373520"))) PPC_WEAK_FUNC(sub_83373520);
PPC_FUNC_IMPL(__imp__sub_83373520) {
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
loc_83373550:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373550;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373560"))) PPC_WEAK_FUNC(sub_83373560);
PPC_FUNC_IMPL(__imp__sub_83373560) {
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
loc_83373590:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373590;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833735A0"))) PPC_WEAK_FUNC(sub_833735A0);
PPC_FUNC_IMPL(__imp__sub_833735A0) {
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
loc_833735D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833735d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833735D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833735E0"))) PPC_WEAK_FUNC(sub_833735E0);
PPC_FUNC_IMPL(__imp__sub_833735E0) {
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
loc_83373610:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373610;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373620"))) PPC_WEAK_FUNC(sub_83373620);
PPC_FUNC_IMPL(__imp__sub_83373620) {
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
loc_83373650:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373650;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373660"))) PPC_WEAK_FUNC(sub_83373660);
PPC_FUNC_IMPL(__imp__sub_83373660) {
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
loc_83373690:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373690;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833736A0"))) PPC_WEAK_FUNC(sub_833736A0);
PPC_FUNC_IMPL(__imp__sub_833736A0) {
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
loc_833736D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833736d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833736D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833736E0"))) PPC_WEAK_FUNC(sub_833736E0);
PPC_FUNC_IMPL(__imp__sub_833736E0) {
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
loc_83373710:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373710;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373720"))) PPC_WEAK_FUNC(sub_83373720);
PPC_FUNC_IMPL(__imp__sub_83373720) {
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
loc_83373750:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373750;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373760"))) PPC_WEAK_FUNC(sub_83373760);
PPC_FUNC_IMPL(__imp__sub_83373760) {
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
loc_83373790:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373790;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833737A0"))) PPC_WEAK_FUNC(sub_833737A0);
PPC_FUNC_IMPL(__imp__sub_833737A0) {
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
loc_833737D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833737d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833737D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833737E0"))) PPC_WEAK_FUNC(sub_833737E0);
PPC_FUNC_IMPL(__imp__sub_833737E0) {
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
loc_83373810:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373810;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373820"))) PPC_WEAK_FUNC(sub_83373820);
PPC_FUNC_IMPL(__imp__sub_83373820) {
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
loc_83373850:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373850;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373860"))) PPC_WEAK_FUNC(sub_83373860);
PPC_FUNC_IMPL(__imp__sub_83373860) {
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
loc_83373890:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373890;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833738A0"))) PPC_WEAK_FUNC(sub_833738A0);
PPC_FUNC_IMPL(__imp__sub_833738A0) {
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
loc_833738D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833738d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833738D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833738E0"))) PPC_WEAK_FUNC(sub_833738E0);
PPC_FUNC_IMPL(__imp__sub_833738E0) {
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
loc_83373910:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373910;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373920"))) PPC_WEAK_FUNC(sub_83373920);
PPC_FUNC_IMPL(__imp__sub_83373920) {
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
loc_83373950:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373950;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373960"))) PPC_WEAK_FUNC(sub_83373960);
PPC_FUNC_IMPL(__imp__sub_83373960) {
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
loc_83373990:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373990;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833739A0"))) PPC_WEAK_FUNC(sub_833739A0);
PPC_FUNC_IMPL(__imp__sub_833739A0) {
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
loc_833739D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833739d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833739D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833739E0"))) PPC_WEAK_FUNC(sub_833739E0);
PPC_FUNC_IMPL(__imp__sub_833739E0) {
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
loc_83373A10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373a10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373A10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373A20"))) PPC_WEAK_FUNC(sub_83373A20);
PPC_FUNC_IMPL(__imp__sub_83373A20) {
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
loc_83373A50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373a50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373A50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373A60"))) PPC_WEAK_FUNC(sub_83373A60);
PPC_FUNC_IMPL(__imp__sub_83373A60) {
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
loc_83373A90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373A90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373AA0"))) PPC_WEAK_FUNC(sub_83373AA0);
PPC_FUNC_IMPL(__imp__sub_83373AA0) {
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
loc_83373AD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373ad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373AD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373AE0"))) PPC_WEAK_FUNC(sub_83373AE0);
PPC_FUNC_IMPL(__imp__sub_83373AE0) {
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
loc_83373B10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373b10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373B10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373B20"))) PPC_WEAK_FUNC(sub_83373B20);
PPC_FUNC_IMPL(__imp__sub_83373B20) {
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
loc_83373B50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373B50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373B60"))) PPC_WEAK_FUNC(sub_83373B60);
PPC_FUNC_IMPL(__imp__sub_83373B60) {
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
loc_83373B90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373B90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373BA0"))) PPC_WEAK_FUNC(sub_83373BA0);
PPC_FUNC_IMPL(__imp__sub_83373BA0) {
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
loc_83373BD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373BD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373BE0"))) PPC_WEAK_FUNC(sub_83373BE0);
PPC_FUNC_IMPL(__imp__sub_83373BE0) {
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
loc_83373C10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373c10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373C10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373C20"))) PPC_WEAK_FUNC(sub_83373C20);
PPC_FUNC_IMPL(__imp__sub_83373C20) {
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
loc_83373C50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373C50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373C60"))) PPC_WEAK_FUNC(sub_83373C60);
PPC_FUNC_IMPL(__imp__sub_83373C60) {
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
loc_83373C90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373c90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373C90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373CA0"))) PPC_WEAK_FUNC(sub_83373CA0);
PPC_FUNC_IMPL(__imp__sub_83373CA0) {
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
loc_83373CD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373cd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373CD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373CE0"))) PPC_WEAK_FUNC(sub_83373CE0);
PPC_FUNC_IMPL(__imp__sub_83373CE0) {
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
loc_83373D10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373D10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373D20"))) PPC_WEAK_FUNC(sub_83373D20);
PPC_FUNC_IMPL(__imp__sub_83373D20) {
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
loc_83373D50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373d50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373D50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373D60"))) PPC_WEAK_FUNC(sub_83373D60);
PPC_FUNC_IMPL(__imp__sub_83373D60) {
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
loc_83373D90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373d90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373D90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373DA0"))) PPC_WEAK_FUNC(sub_83373DA0);
PPC_FUNC_IMPL(__imp__sub_83373DA0) {
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
loc_83373DD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373dd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373DD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373DE0"))) PPC_WEAK_FUNC(sub_83373DE0);
PPC_FUNC_IMPL(__imp__sub_83373DE0) {
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
loc_83373E10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373e10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373E10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373E20"))) PPC_WEAK_FUNC(sub_83373E20);
PPC_FUNC_IMPL(__imp__sub_83373E20) {
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
loc_83373E50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373e50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373E50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373E60"))) PPC_WEAK_FUNC(sub_83373E60);
PPC_FUNC_IMPL(__imp__sub_83373E60) {
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
loc_83373E90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373E90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373EA0"))) PPC_WEAK_FUNC(sub_83373EA0);
PPC_FUNC_IMPL(__imp__sub_83373EA0) {
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
loc_83373ED0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373ed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373ED0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373EE0"))) PPC_WEAK_FUNC(sub_83373EE0);
PPC_FUNC_IMPL(__imp__sub_83373EE0) {
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
loc_83373F10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373F10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373F20"))) PPC_WEAK_FUNC(sub_83373F20);
PPC_FUNC_IMPL(__imp__sub_83373F20) {
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
loc_83373F50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373f50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373F50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373F60"))) PPC_WEAK_FUNC(sub_83373F60);
PPC_FUNC_IMPL(__imp__sub_83373F60) {
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
loc_83373F90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373f90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373F90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373FA0"))) PPC_WEAK_FUNC(sub_83373FA0);
PPC_FUNC_IMPL(__imp__sub_83373FA0) {
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
loc_83373FD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83373fd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83373FD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83373FE0"))) PPC_WEAK_FUNC(sub_83373FE0);
PPC_FUNC_IMPL(__imp__sub_83373FE0) {
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
loc_83374010:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83374010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83374010;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83374020"))) PPC_WEAK_FUNC(sub_83374020);
PPC_FUNC_IMPL(__imp__sub_83374020) {
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
loc_83374050:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83374050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83374050;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83374060"))) PPC_WEAK_FUNC(sub_83374060);
PPC_FUNC_IMPL(__imp__sub_83374060) {
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
loc_83374090:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83374090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83374090;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833740A0"))) PPC_WEAK_FUNC(sub_833740A0);
PPC_FUNC_IMPL(__imp__sub_833740A0) {
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
loc_833740D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833740d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833740D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833740E0"))) PPC_WEAK_FUNC(sub_833740E0);
PPC_FUNC_IMPL(__imp__sub_833740E0) {
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
loc_83374110:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83374110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83374110;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83374120"))) PPC_WEAK_FUNC(sub_83374120);
PPC_FUNC_IMPL(__imp__sub_83374120) {
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
loc_83374150:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83374150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83374150;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83374160"))) PPC_WEAK_FUNC(sub_83374160);
PPC_FUNC_IMPL(__imp__sub_83374160) {
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
loc_83374190:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83374190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83374190;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833741A0"))) PPC_WEAK_FUNC(sub_833741A0);
PPC_FUNC_IMPL(__imp__sub_833741A0) {
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
loc_833741D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833741d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833741D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833741E0"))) PPC_WEAK_FUNC(sub_833741E0);
PPC_FUNC_IMPL(__imp__sub_833741E0) {
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
loc_83374210:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83374210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83374210;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83374220"))) PPC_WEAK_FUNC(sub_83374220);
PPC_FUNC_IMPL(__imp__sub_83374220) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x83374228;
	__savegprlr_14(ctx, base);
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r9,-4168
	ctx.r7.s64 = ctx.r9.s64 + -4168;
	// addi r8,r10,-4024
	ctx.r8.s64 = ctx.r10.s64 + -4024;
	// stw r11,-316(r1)
	PPC_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// stw r7,-320(r1)
	PPC_STORE_U32(ctx.r1.u32 + -320, ctx.r7.u32);
	// lis r6,-32203
	ctx.r6.s64 = -2110455808;
	// stw r8,-312(r1)
	PPC_STORE_U32(ctx.r1.u32 + -312, ctx.r8.u32);
	// lis r5,-32203
	ctx.r5.s64 = -2110455808;
	// stw r11,-308(r1)
	PPC_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// addi r6,r6,-4392
	ctx.r6.s64 = ctx.r6.s64 + -4392;
	// addi r5,r5,-4560
	ctx.r5.s64 = ctx.r5.s64 + -4560;
	// stw r11,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r11.u32);
	// lis r4,-32203
	ctx.r4.s64 = -2110455808;
	// stw r6,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r6.u32);
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// stw r5,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r5.u32);
	// lis r8,-32203
	ctx.r8.s64 = -2110455808;
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// lis r3,-32203
	ctx.r3.s64 = -2110455808;
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// addi r4,r4,-4864
	ctx.r4.s64 = ctx.r4.s64 + -4864;
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// addi r5,r8,-5736
	ctx.r5.s64 = ctx.r8.s64 + -5736;
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// addi r3,r3,-5184
	ctx.r3.s64 = ctx.r3.s64 + -5184;
	// stw r4,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// addi r6,r9,-5416
	ctx.r6.s64 = ctx.r9.s64 + -5416;
	// stw r5,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// lis r7,-32203
	ctx.r7.s64 = -2110455808;
	// stw r3,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r3.u32);
	// lis r30,-32203
	ctx.r30.s64 = -2110455808;
	// stw r6,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r6.u32);
	// lis r31,-32203
	ctx.r31.s64 = -2110455808;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// lis r29,-32203
	ctx.r29.s64 = -2110455808;
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r11.u32);
	// lis r28,-32203
	ctx.r28.s64 = -2110455808;
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// lis r27,-32203
	ctx.r27.s64 = -2110455808;
	// stw r11,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r11.u32);
	// addi r8,r7,-6048
	ctx.r8.s64 = ctx.r7.s64 + -6048;
	// stw r11,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r11.u32);
	// addi r4,r30,-6400
	ctx.r4.s64 = ctx.r30.s64 + -6400;
	// stw r11,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r11.u32);
	// addi r7,r31,-6224
	ctx.r7.s64 = ctx.r31.s64 + -6224;
	// stw r8,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r8.u32);
	// addi r3,r29,-6568
	ctx.r3.s64 = ctx.r29.s64 + -6568;
	// stw r4,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r4.u32);
	// addi r6,r28,-6736
	ctx.r6.s64 = ctx.r28.s64 + -6736;
	// stw r7,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r7.u32);
	// addi r5,r27,-6960
	ctx.r5.s64 = ctx.r27.s64 + -6960;
	// stw r3,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r3.u32);
	// lis r25,-32203
	ctx.r25.s64 = -2110455808;
	// stw r6,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r6.u32);
	// lis r26,-32203
	ctx.r26.s64 = -2110455808;
	// stw r5,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r5.u32);
	// lis r24,-32203
	ctx.r24.s64 = -2110455808;
	// ld r9,-320(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -320);
	// lis r23,-32203
	ctx.r23.s64 = -2110455808;
	// ld r10,-312(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -312);
	// lis r22,-32203
	ctx.r22.s64 = -2110455808;
	// stw r11,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r11.u32);
	// addi r4,r25,-7464
	ctx.r4.s64 = ctx.r25.s64 + -7464;
	// stw r11,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r11.u32);
	// addi r8,r26,-7184
	ctx.r8.s64 = ctx.r26.s64 + -7184;
	// stw r11,-300(r1)
	PPC_STORE_U32(ctx.r1.u32 + -300, ctx.r11.u32);
	// lis r7,-32203
	ctx.r7.s64 = -2110455808;
	// stw r4,-304(r1)
	PPC_STORE_U32(ctx.r1.u32 + -304, ctx.r4.u32);
	// addi r3,r24,-7640
	ctx.r3.s64 = ctx.r24.s64 + -7640;
	// stw r11,-332(r1)
	PPC_STORE_U32(ctx.r1.u32 + -332, ctx.r11.u32);
	// addi r6,r23,-7808
	ctx.r6.s64 = ctx.r23.s64 + -7808;
	// stw r11,-324(r1)
	PPC_STORE_U32(ctx.r1.u32 + -324, ctx.r11.u32);
	// addi r5,r22,-7984
	ctx.r5.s64 = ctx.r22.s64 + -7984;
	// stw r8,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r8.u32);
	// stw r3,-336(r1)
	PPC_STORE_U32(ctx.r1.u32 + -336, ctx.r3.u32);
	// addi r4,r7,-8152
	ctx.r4.s64 = ctx.r7.s64 + -8152;
	// stw r6,-328(r1)
	PPC_STORE_U32(ctx.r1.u32 + -328, ctx.r6.u32);
	// stw r5,-320(r1)
	PPC_STORE_U32(ctx.r1.u32 + -320, ctx.r5.u32);
	// stw r11,-316(r1)
	PPC_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// lis r3,-31904
	ctx.r3.s64 = -2090860544;
	// stw r4,-312(r1)
	PPC_STORE_U32(ctx.r1.u32 + -312, ctx.r4.u32);
	// stw r11,-308(r1)
	PPC_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// lis r31,-32203
	ctx.r31.s64 = -2110455808;
	// addi r19,r3,-17672
	ctx.r19.s64 = ctx.r3.s64 + -17672;
	// ld r8,-232(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// ld r7,-184(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// lis r30,-32203
	ctx.r30.s64 = -2110455808;
	// ld r6,-216(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// lis r3,-32203
	ctx.r3.s64 = -2110455808;
	// ld r5,-200(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// lis r29,-32203
	ctx.r29.s64 = -2110455808;
	// ld r4,-208(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// lis r28,-32203
	ctx.r28.s64 = -2110455808;
	// std r10,4(r19)
	PPC_STORE_U64(ctx.r19.u32 + 4, ctx.r10.u64);
	// lis r27,-32203
	ctx.r27.s64 = -2110455808;
	// ld r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// addi r3,r3,-8496
	ctx.r3.s64 = ctx.r3.s64 + -8496;
	// std r9,16(r19)
	PPC_STORE_U64(ctx.r19.u32 + 16, ctx.r9.u64);
	// addi r9,r31,-8320
	ctx.r9.s64 = ctx.r31.s64 + -8320;
	// std r8,28(r19)
	PPC_STORE_U64(ctx.r19.u32 + 28, ctx.r8.u64);
	// addi r8,r30,-8672
	ctx.r8.s64 = ctx.r30.s64 + -8672;
	// std r7,40(r19)
	PPC_STORE_U64(ctx.r19.u32 + 40, ctx.r7.u64);
	// addi r7,r29,-8848
	ctx.r7.s64 = ctx.r29.s64 + -8848;
	// std r6,52(r19)
	PPC_STORE_U64(ctx.r19.u32 + 52, ctx.r6.u64);
	// addi r6,r28,-9160
	ctx.r6.s64 = ctx.r28.s64 + -9160;
	// std r10,88(r19)
	PPC_STORE_U64(ctx.r19.u32 + 88, ctx.r10.u64);
	// addi r31,r27,-9336
	ctx.r31.s64 = ctx.r27.s64 + -9336;
	// ld r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// lis r26,-32203
	ctx.r26.s64 = -2110455808;
	// stw r9,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r9.u32);
	// lis r30,-32203
	ctx.r30.s64 = -2110455808;
	// std r5,64(r19)
	PPC_STORE_U64(ctx.r19.u32 + 64, ctx.r5.u64);
	// lis r5,-32203
	ctx.r5.s64 = -2110455808;
	// std r4,76(r19)
	PPC_STORE_U64(ctx.r19.u32 + 76, ctx.r4.u64);
	// lis r4,-32203
	ctx.r4.s64 = -2110455808;
	// lis r29,-32203
	ctx.r29.s64 = -2110455808;
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r11.u32);
	// std r10,100(r19)
	PPC_STORE_U64(ctx.r19.u32 + 100, ctx.r10.u64);
	// lis r28,-32203
	ctx.r28.s64 = -2110455808;
	// ld r10,-224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// lis r27,-32203
	ctx.r27.s64 = -2110455808;
	// ld r9,-312(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -312);
	// lis r25,-32203
	ctx.r25.s64 = -2110455808;
	// stw r3,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r3.u32);
	// lis r24,-32203
	ctx.r24.s64 = -2110455808;
	// stw r8,-312(r1)
	PPC_STORE_U32(ctx.r1.u32 + -312, ctx.r8.u32);
	// lis r3,-32203
	ctx.r3.s64 = -2110455808;
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// lis r23,-32203
	ctx.r23.s64 = -2110455808;
	// std r10,112(r19)
	PPC_STORE_U64(ctx.r19.u32 + 112, ctx.r10.u64);
	// lis r8,-32203
	ctx.r8.s64 = -2110455808;
	// ld r10,-280(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// lis r22,-32203
	ctx.r22.s64 = -2110455808;
	// std r9,232(r19)
	PPC_STORE_U64(ctx.r19.u32 + 232, ctx.r9.u64);
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// stw r11,-308(r1)
	PPC_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// addi r26,r26,-9784
	ctx.r26.s64 = ctx.r26.s64 + -9784;
	// stw r7,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r7.u32);
	// stw r11,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r11.u32);
	// std r10,124(r19)
	PPC_STORE_U64(ctx.r19.u32 + 124, ctx.r10.u64);
	// ld r10,-248(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// stw r6,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r6.u32);
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// stw r31,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r31.u32);
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// std r10,136(r19)
	PPC_STORE_U64(ctx.r19.u32 + 136, ctx.r10.u64);
	// ld r10,-264(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r10,148(r19)
	PPC_STORE_U64(ctx.r19.u32 + 148, ctx.r10.u64);
	// ld r10,-256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r10,160(r19)
	PPC_STORE_U64(ctx.r19.u32 + 160, ctx.r10.u64);
	// ld r10,-272(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r10,172(r19)
	PPC_STORE_U64(ctx.r19.u32 + 172, ctx.r10.u64);
	// ld r10,-304(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -304);
	// std r10,184(r19)
	PPC_STORE_U64(ctx.r19.u32 + 184, ctx.r10.u64);
	// ld r10,-336(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -336);
	// std r10,196(r19)
	PPC_STORE_U64(ctx.r19.u32 + 196, ctx.r10.u64);
	// ld r10,-328(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -328);
	// std r10,208(r19)
	PPC_STORE_U64(ctx.r19.u32 + 208, ctx.r10.u64);
	// ld r10,-320(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -320);
	// std r10,220(r19)
	PPC_STORE_U64(ctx.r19.u32 + 220, ctx.r10.u64);
	// addi r6,r27,-10936
	ctx.r6.s64 = ctx.r27.s64 + -10936;
	// stw r11,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r11.u32);
	// addi r8,r8,-12192
	ctx.r8.s64 = ctx.r8.s64 + -12192;
	// stw r11,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r11.u32);
	// addi r7,r28,-10704
	ctx.r7.s64 = ctx.r28.s64 + -10704;
	// stw r6,-336(r1)
	PPC_STORE_U32(ctx.r1.u32 + -336, ctx.r6.u32);
	// addi r27,r22,-12368
	ctx.r27.s64 = ctx.r22.s64 + -12368;
	// stw r8,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r8.u32);
	// addi r10,r25,-11168
	ctx.r10.s64 = ctx.r25.s64 + -11168;
	// stw r7,-328(r1)
	PPC_STORE_U32(ctx.r1.u32 + -328, ctx.r7.u32);
	// addi r31,r24,-11344
	ctx.r31.s64 = ctx.r24.s64 + -11344;
	// stw r27,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r27.u32);
	// addi r3,r3,-11696
	ctx.r3.s64 = ctx.r3.s64 + -11696;
	// stw r10,-304(r1)
	PPC_STORE_U32(ctx.r1.u32 + -304, ctx.r10.u32);
	// addi r28,r23,-12016
	ctx.r28.s64 = ctx.r23.s64 + -12016;
	// stw r31,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r31.u32);
	// stw r3,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r3.u32);
	// addi r6,r5,-10272
	ctx.r6.s64 = ctx.r5.s64 + -10272;
	// stw r11,-324(r1)
	PPC_STORE_U32(ctx.r1.u32 + -324, ctx.r11.u32);
	// addi r5,r4,-10416
	ctx.r5.s64 = ctx.r4.s64 + -10416;
	// stw r11,-332(r1)
	PPC_STORE_U32(ctx.r1.u32 + -332, ctx.r11.u32);
	// addi r7,r30,-10096
	ctx.r7.s64 = ctx.r30.s64 + -10096;
	// stw r11,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r11.u32);
	// addi r4,r29,-10560
	ctx.r4.s64 = ctx.r29.s64 + -10560;
	// stw r11,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r11.u32);
	// addi r29,r9,-12672
	ctx.r29.s64 = ctx.r9.s64 + -12672;
	// stw r11,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r11.u32);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r28,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r28.u32);
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// stw r11,-300(r1)
	PPC_STORE_U32(ctx.r1.u32 + -300, ctx.r11.u32);
	// addi r25,r10,-13392
	ctx.r25.s64 = ctx.r10.s64 + -13392;
	// stw r11,-316(r1)
	PPC_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// lis r3,-32203
	ctx.r3.s64 = -2110455808;
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// lis r8,-32203
	ctx.r8.s64 = -2110455808;
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// lis r31,-32203
	ctx.r31.s64 = -2110455808;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// addi r28,r3,-13160
	ctx.r28.s64 = ctx.r3.s64 + -13160;
	// stw r11,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r11.u32);
	// addi r24,r8,-13888
	ctx.r24.s64 = ctx.r8.s64 + -13888;
	// stw r26,-320(r1)
	PPC_STORE_U32(ctx.r1.u32 + -320, ctx.r26.u32);
	// addi r26,r9,-13624
	ctx.r26.s64 = ctx.r9.s64 + -13624;
	// stw r7,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r7.u32);
	// addi r23,r31,-14056
	ctx.r23.s64 = ctx.r31.s64 + -14056;
	// stw r6,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r6.u32);
	// lis r27,-32203
	ctx.r27.s64 = -2110455808;
	// stw r5,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// lis r22,-32203
	ctx.r22.s64 = -2110455808;
	// stw r4,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r4.u32);
	// lis r21,-32203
	ctx.r21.s64 = -2110455808;
	// ld r10,-248(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// stw r11,-292(r1)
	PPC_STORE_U32(ctx.r1.u32 + -292, ctx.r11.u32);
	// ld r20,-328(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -328);
	// ld r18,-336(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -336);
	// ld r16,-272(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// ld r15,-256(r1)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r10,-328(r1)
	PPC_STORE_U64(ctx.r1.u32 + -328, ctx.r10.u64);
	// ld r14,-264(r1)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// ld r17,-304(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -304);
	// ld r10,-224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r9,-336(r1)
	PPC_STORE_U64(ctx.r1.u32 + -336, ctx.r9.u64);
	// ld r11,-240(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// ld r9,-312(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -312);
	// ld r8,-232(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// ld r7,-184(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// ld r6,-216(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// ld r5,-320(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -320);
	// ld r4,-200(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// ld r3,-208(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// ld r31,-192(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// ld r30,-288(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// stw r29,-296(r1)
	PPC_STORE_U32(ctx.r1.u32 + -296, ctx.r29.u32);
	// std r20,-272(r1)
	PPC_STORE_U64(ctx.r1.u32 + -272, ctx.r20.u64);
	// std r18,-256(r1)
	PPC_STORE_U64(ctx.r1.u32 + -256, ctx.r18.u64);
	// std r17,-264(r1)
	PPC_STORE_U64(ctx.r1.u32 + -264, ctx.r17.u64);
	// std r16,-248(r1)
	PPC_STORE_U64(ctx.r1.u32 + -248, ctx.r16.u64);
	// std r15,-280(r1)
	PPC_STORE_U64(ctx.r1.u32 + -280, ctx.r15.u64);
	// std r14,-224(r1)
	PPC_STORE_U64(ctx.r1.u32 + -224, ctx.r14.u64);
	// ld r29,-328(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -328);
	// lis r20,-32203
	ctx.r20.s64 = -2110455808;
	// std r11,244(r19)
	PPC_STORE_U64(ctx.r19.u32 + 244, ctx.r11.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r25,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r25.u32);
	// lis r18,-32203
	ctx.r18.s64 = -2110455808;
	// stw r26,-328(r1)
	PPC_STORE_U32(ctx.r1.u32 + -328, ctx.r26.u32);
	// lis r16,-32203
	ctx.r16.s64 = -2110455808;
	// stw r23,-304(r1)
	PPC_STORE_U32(ctx.r1.u32 + -304, ctx.r23.u32);
	// addi r23,r20,-15032
	ctx.r23.s64 = ctx.r20.s64 + -15032;
	// std r29,-240(r1)
	PPC_STORE_U64(ctx.r1.u32 + -240, ctx.r29.u64);
	// addi r20,r18,-15408
	ctx.r20.s64 = ctx.r18.s64 + -15408;
	// ld r29,-336(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -336);
	// lis r25,-32203
	ctx.r25.s64 = -2110455808;
	// stw r24,-336(r1)
	PPC_STORE_U32(ctx.r1.u32 + -336, ctx.r24.u32);
	// lis r14,-32203
	ctx.r14.s64 = -2110455808;
	// stw r11,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r11.u32);
	// addi r25,r25,-15584
	ctx.r25.s64 = ctx.r25.s64 + -15584;
	// stw r11,-324(r1)
	PPC_STORE_U32(ctx.r1.u32 + -324, ctx.r11.u32);
	// addi r24,r22,-14608
	ctx.r24.s64 = ctx.r22.s64 + -14608;
	// stw r11,-332(r1)
	PPC_STORE_U32(ctx.r1.u32 + -332, ctx.r11.u32);
	// addi r22,r21,-14904
	ctx.r22.s64 = ctx.r21.s64 + -14904;
	// std r29,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r29.u64);
	// lis r17,-32203
	ctx.r17.s64 = -2110455808;
	// ld r29,-296(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -296);
	// lis r26,-32203
	ctx.r26.s64 = -2110455808;
	// stw r28,-296(r1)
	PPC_STORE_U32(ctx.r1.u32 + -296, ctx.r28.u32);
	// lis r28,-32203
	ctx.r28.s64 = -2110455808;
	// stw r11,-292(r1)
	PPC_STORE_U32(ctx.r1.u32 + -292, ctx.r11.u32);
	// addi r27,r27,-14304
	ctx.r27.s64 = ctx.r27.s64 + -14304;
	// stw r11,-300(r1)
	PPC_STORE_U32(ctx.r1.u32 + -300, ctx.r11.u32);
	// addi r28,r28,-15264
	ctx.r28.s64 = ctx.r28.s64 + -15264;
	// stw r16,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r16.u32);
	// lis r16,-32203
	ctx.r16.s64 = -2110455808;
	// std r29,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r29.u64);
	// lis r29,-32203
	ctx.r29.s64 = -2110455808;
	// stw r20,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r20.u32);
	// lis r20,-32203
	ctx.r20.s64 = -2110455808;
	// stw r28,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r28.u32);
	// lis r28,-32203
	ctx.r28.s64 = -2110455808;
	// std r10,256(r19)
	PPC_STORE_U64(ctx.r19.u32 + 256, ctx.r10.u64);
	// addi r29,r29,-15816
	ctx.r29.s64 = ctx.r29.s64 + -15816;
	// stw r14,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r14.u32);
	// addi r17,r17,-15960
	ctx.r17.s64 = ctx.r17.s64 + -15960;
	// stw r16,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r16.u32);
	// addi r26,r26,-16136
	ctx.r26.s64 = ctx.r26.s64 + -16136;
	// stw r20,-320(r1)
	PPC_STORE_U32(ctx.r1.u32 + -320, ctx.r20.u32);
	// stw r28,-312(r1)
	PPC_STORE_U32(ctx.r1.u32 + -312, ctx.r28.u32);
	// stw r25,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r25.u32);
	// ld r21,-272(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// ld r18,-256(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// ld r15,-264(r1)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// ld r14,-248(r1)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// ld r16,-280(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// ld r20,-224(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// ld r28,-240(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// ld r25,-168(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,268(r19)
	PPC_STORE_U64(ctx.r19.u32 + 268, ctx.r9.u64);
	// std r8,280(r19)
	PPC_STORE_U64(ctx.r19.u32 + 280, ctx.r8.u64);
	// std r7,292(r19)
	PPC_STORE_U64(ctx.r19.u32 + 292, ctx.r7.u64);
	// ld r10,-176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// std r6,304(r19)
	PPC_STORE_U64(ctx.r19.u32 + 304, ctx.r6.u64);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// ld r8,-328(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -328);
	// ld r7,-336(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -336);
	// std r10,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r10.u64);
	// ld r10,-296(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -296);
	// ld r6,-304(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -304);
	// std r5,316(r19)
	PPC_STORE_U64(ctx.r19.u32 + 316, ctx.r5.u64);
	// std r4,328(r19)
	PPC_STORE_U64(ctx.r19.u32 + 328, ctx.r4.u64);
	// std r3,340(r19)
	PPC_STORE_U64(ctx.r19.u32 + 340, ctx.r3.u64);
	// std r31,352(r19)
	PPC_STORE_U64(ctx.r19.u32 + 352, ctx.r31.u64);
	// std r30,364(r19)
	PPC_STORE_U64(ctx.r19.u32 + 364, ctx.r30.u64);
	// std r21,376(r19)
	PPC_STORE_U64(ctx.r19.u32 + 376, ctx.r21.u64);
	// std r18,388(r19)
	PPC_STORE_U64(ctx.r19.u32 + 388, ctx.r18.u64);
	// std r15,400(r19)
	PPC_STORE_U64(ctx.r19.u32 + 400, ctx.r15.u64);
	// std r14,412(r19)
	PPC_STORE_U64(ctx.r19.u32 + 412, ctx.r14.u64);
	// std r16,424(r19)
	PPC_STORE_U64(ctx.r19.u32 + 424, ctx.r16.u64);
	// std r20,436(r19)
	PPC_STORE_U64(ctx.r19.u32 + 436, ctx.r20.u64);
	// std r28,448(r19)
	PPC_STORE_U64(ctx.r19.u32 + 448, ctx.r28.u64);
	// std r25,460(r19)
	PPC_STORE_U64(ctx.r19.u32 + 460, ctx.r25.u64);
	// ld r28,-176(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lis r25,-32203
	ctx.r25.s64 = -2110455808;
	// stw r27,-296(r1)
	PPC_STORE_U32(ctx.r1.u32 + -296, ctx.r27.u32);
	// lis r27,-32203
	ctx.r27.s64 = -2110455808;
	// stw r24,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r24.u32);
	// lis r24,-32203
	ctx.r24.s64 = -2110455808;
	// stw r23,-336(r1)
	PPC_STORE_U32(ctx.r1.u32 + -336, ctx.r23.u32);
	// lis r23,-32203
	ctx.r23.s64 = -2110455808;
	// stw r22,-328(r1)
	PPC_STORE_U32(ctx.r1.u32 + -328, ctx.r22.u32);
	// addi r27,r27,-18088
	ctx.r27.s64 = ctx.r27.s64 + -18088;
	// std r28,472(r19)
	PPC_STORE_U64(ctx.r19.u32 + 472, ctx.r28.u64);
	// lis r21,-32203
	ctx.r21.s64 = -2110455808;
	// lwz r28,-192(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r20,-32203
	ctx.r20.s64 = -2110455808;
	// stw r11,-292(r1)
	PPC_STORE_U32(ctx.r1.u32 + -292, ctx.r11.u32);
	// lis r18,-32203
	ctx.r18.s64 = -2110455808;
	// stw r11,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r11.u32);
	// addi r25,r25,-18488
	ctx.r25.s64 = ctx.r25.s64 + -18488;
	// stw r11,-324(r1)
	PPC_STORE_U32(ctx.r1.u32 + -324, ctx.r11.u32);
	// addi r24,r24,-18712
	ctx.r24.s64 = ctx.r24.s64 + -18712;
	// stw r11,-332(r1)
	PPC_STORE_U32(ctx.r1.u32 + -332, ctx.r11.u32);
	// addi r23,r23,-19024
	ctx.r23.s64 = ctx.r23.s64 + -19024;
	// stw r28,-304(r1)
	PPC_STORE_U32(ctx.r1.u32 + -304, ctx.r28.u32);
	// lwz r28,-208(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// stw r29,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r29.u32);
	// stw r17,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r17.u32);
	// lis r17,-32203
	ctx.r17.s64 = -2110455808;
	// stw r11,-300(r1)
	PPC_STORE_U32(ctx.r1.u32 + -300, ctx.r11.u32);
	// stw r11,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r11.u32);
	// stw r28,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r28.u32);
	// lwz r28,-200(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// stw r11,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r11.u32);
	// addi r5,r28,-16304
	ctx.r5.s64 = ctx.r28.s64 + -16304;
	// lwz r28,-216(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// stw r11,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r11.u32);
	// stw r11,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r11.u32);
	// lwz r29,-320(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -320);
	// stw r5,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r5.u32);
	// stw r28,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r28.u32);
	// addi r31,r29,-17288
	ctx.r31.s64 = ctx.r29.s64 + -17288;
	// lwz r28,-184(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r29,-312(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -312);
	// addi r4,r28,-16448
	ctx.r4.s64 = ctx.r28.s64 + -16448;
	// lwz r28,-232(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// stw r31,-320(r1)
	PPC_STORE_U32(ctx.r1.u32 + -320, ctx.r31.u32);
	// addi r30,r29,-17464
	ctx.r30.s64 = ctx.r29.s64 + -17464;
	// addi r3,r28,-17112
	ctx.r3.s64 = ctx.r28.s64 + -17112;
	// stw r4,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r4.u32);
	// ld r5,-296(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -296);
	// lis r29,-32203
	ctx.r29.s64 = -2110455808;
	// stw r3,-312(r1)
	PPC_STORE_U32(ctx.r1.u32 + -312, ctx.r3.u32);
	// lis r28,-32203
	ctx.r28.s64 = -2110455808;
	// ld r4,-288(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// addi r22,r29,-17640
	ctx.r22.s64 = ctx.r29.s64 + -17640;
	// ld r3,-328(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -328);
	// addi r28,r28,-17864
	ctx.r28.s64 = ctx.r28.s64 + -17864;
	// ld r31,-336(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -336);
	// stw r26,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r26.u32);
	// lis r26,-32203
	ctx.r26.s64 = -2110455808;
	// stw r30,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r30.u32);
	// std r10,484(r19)
	PPC_STORE_U64(ctx.r19.u32 + 484, ctx.r10.u64);
	// addi r26,r26,-18312
	ctx.r26.s64 = ctx.r26.s64 + -18312;
	// std r9,496(r19)
	PPC_STORE_U64(ctx.r19.u32 + 496, ctx.r9.u64);
	// std r8,508(r19)
	PPC_STORE_U64(ctx.r19.u32 + 508, ctx.r8.u64);
	// ld r30,-304(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -304);
	// ld r29,-272(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// ld r8,-248(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// ld r10,-256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// stw r11,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r11.u32);
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r11.u32);
	// stw r11,-308(r1)
	PPC_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// stw r11,-316(r1)
	PPC_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// stw r11,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r11.u32);
	// std r7,520(r19)
	PPC_STORE_U64(ctx.r19.u32 + 520, ctx.r7.u64);
	// std r6,532(r19)
	PPC_STORE_U64(ctx.r19.u32 + 532, ctx.r6.u64);
	// std r5,544(r19)
	PPC_STORE_U64(ctx.r19.u32 + 544, ctx.r5.u64);
	// std r4,556(r19)
	PPC_STORE_U64(ctx.r19.u32 + 556, ctx.r4.u64);
	// std r3,568(r19)
	PPC_STORE_U64(ctx.r19.u32 + 568, ctx.r3.u64);
	// std r31,580(r19)
	PPC_STORE_U64(ctx.r19.u32 + 580, ctx.r31.u64);
	// ld r7,-280(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// ld r6,-224(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// ld r5,-240(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// ld r4,-312(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -312);
	// ld r3,-320(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -320);
	// ld r31,-232(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r10,616(r19)
	PPC_STORE_U64(ctx.r19.u32 + 616, ctx.r10.u64);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// std r9,628(r19)
	PPC_STORE_U64(ctx.r19.u32 + 628, ctx.r9.u64);
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// std r30,592(r19)
	PPC_STORE_U64(ctx.r19.u32 + 592, ctx.r30.u64);
	// addi r30,r21,-19248
	ctx.r30.s64 = ctx.r21.s64 + -19248;
	// std r8,640(r19)
	PPC_STORE_U64(ctx.r19.u32 + 640, ctx.r8.u64);
	// addi r10,r10,-19952
	ctx.r10.s64 = ctx.r10.s64 + -19952;
	// std r7,652(r19)
	PPC_STORE_U64(ctx.r19.u32 + 652, ctx.r7.u64);
	// addi r9,r9,-20128
	ctx.r9.s64 = ctx.r9.s64 + -20128;
	// std r6,664(r19)
	PPC_STORE_U64(ctx.r19.u32 + 664, ctx.r6.u64);
	// lis r8,-32203
	ctx.r8.s64 = -2110455808;
	// std r5,676(r19)
	PPC_STORE_U64(ctx.r19.u32 + 676, ctx.r5.u64);
	// lis r7,-32203
	ctx.r7.s64 = -2110455808;
	// std r4,688(r19)
	PPC_STORE_U64(ctx.r19.u32 + 688, ctx.r4.u64);
	// lis r6,-32203
	ctx.r6.s64 = -2110455808;
	// std r3,700(r19)
	PPC_STORE_U64(ctx.r19.u32 + 700, ctx.r3.u64);
	// lis r5,-32203
	ctx.r5.s64 = -2110455808;
	// std r31,712(r19)
	PPC_STORE_U64(ctx.r19.u32 + 712, ctx.r31.u64);
	// lis r4,-32203
	ctx.r4.s64 = -2110455808;
	// lis r3,-32203
	ctx.r3.s64 = -2110455808;
	// std r29,604(r19)
	PPC_STORE_U64(ctx.r19.u32 + 604, ctx.r29.u64);
	// lis r31,-32203
	ctx.r31.s64 = -2110455808;
	// stw r28,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r28.u32);
	// stw r30,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r30.u32);
	// addi r28,r18,-19600
	ctx.r28.s64 = ctx.r18.s64 + -19600;
	// stw r10,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r10.u32);
	// addi r29,r20,-19424
	ctx.r29.s64 = ctx.r20.s64 + -19424;
	// stw r9,-312(r1)
	PPC_STORE_U32(ctx.r1.u32 + -312, ctx.r9.u32);
	// addi r30,r17,-19776
	ctx.r30.s64 = ctx.r17.s64 + -19776;
	// addi r8,r8,-20304
	ctx.r8.s64 = ctx.r8.s64 + -20304;
	// stw r22,-296(r1)
	PPC_STORE_U32(ctx.r1.u32 + -296, ctx.r22.u32);
	// addi r7,r7,-20712
	ctx.r7.s64 = ctx.r7.s64 + -20712;
	// stw r11,-292(r1)
	PPC_STORE_U32(ctx.r1.u32 + -292, ctx.r11.u32);
	// addi r6,r6,-20888
	ctx.r6.s64 = ctx.r6.s64 + -20888;
	// stw r11,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r11.u32);
	// addi r5,r5,-21016
	ctx.r5.s64 = ctx.r5.s64 + -21016;
	// stw r27,-328(r1)
	PPC_STORE_U32(ctx.r1.u32 + -328, ctx.r27.u32);
	// addi r4,r4,-21312
	ctx.r4.s64 = ctx.r4.s64 + -21312;
	// stw r11,-324(r1)
	PPC_STORE_U32(ctx.r1.u32 + -324, ctx.r11.u32);
	// addi r3,r3,-21544
	ctx.r3.s64 = ctx.r3.s64 + -21544;
	// stw r26,-336(r1)
	PPC_STORE_U32(ctx.r1.u32 + -336, ctx.r26.u32);
	// addi r10,r31,-21840
	ctx.r10.s64 = ctx.r31.s64 + -21840;
	// stw r11,-332(r1)
	PPC_STORE_U32(ctx.r1.u32 + -332, ctx.r11.u32);
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// stw r25,-304(r1)
	PPC_STORE_U32(ctx.r1.u32 + -304, ctx.r25.u32);
	// stw r11,-300(r1)
	PPC_STORE_U32(ctx.r1.u32 + -300, ctx.r11.u32);
	// stw r24,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r24.u32);
	// addi r18,r9,-22016
	ctx.r18.s64 = ctx.r9.s64 + -22016;
	// stw r11,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r11.u32);
	// stw r23,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r23.u32);
	// stw r11,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r11.u32);
	// stw r11,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r11.u32);
	// stw r11,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r11.u32);
	// stw r29,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r29.u32);
	// stw r28,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r28.u32);
	// stw r11,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r11.u32);
	// stw r30,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r30.u32);
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r11.u32);
	// stw r11,-308(r1)
	PPC_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// stw r8,-320(r1)
	PPC_STORE_U32(ctx.r1.u32 + -320, ctx.r8.u32);
	// stw r11,-316(r1)
	PPC_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// stw r7,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r7.u32);
	// stw r11,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r11.u32);
	// stw r6,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r6.u32);
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// stw r5,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r5.u32);
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// stw r4,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r4.u32);
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// stw r3,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// ld r10,-296(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -296);
	// lis r17,-32203
	ctx.r17.s64 = -2110455808;
	// stw r18,-296(r1)
	PPC_STORE_U32(ctx.r1.u32 + -296, ctx.r18.u32);
	// lis r18,-32203
	ctx.r18.s64 = -2110455808;
	// addi r17,r17,-22376
	ctx.r17.s64 = ctx.r17.s64 + -22376;
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// addi r18,r18,-22232
	ctx.r18.s64 = ctx.r18.s64 + -22232;
	// ld r8,-328(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -328);
	// ld r7,-336(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -336);
	// stw r11,-292(r1)
	PPC_STORE_U32(ctx.r1.u32 + -292, ctx.r11.u32);
	// stw r11,-332(r1)
	PPC_STORE_U32(ctx.r1.u32 + -332, ctx.r11.u32);
	// stw r11,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r11.u32);
	// stw r11,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r11.u32);
	// stw r11,-324(r1)
	PPC_STORE_U32(ctx.r1.u32 + -324, ctx.r11.u32);
	// stw r18,-328(r1)
	PPC_STORE_U32(ctx.r1.u32 + -328, ctx.r18.u32);
	// stw r17,-336(r1)
	PPC_STORE_U32(ctx.r1.u32 + -336, ctx.r17.u32);
	// std r10,724(r19)
	PPC_STORE_U64(ctx.r19.u32 + 724, ctx.r10.u64);
	// std r9,736(r19)
	PPC_STORE_U64(ctx.r19.u32 + 736, ctx.r9.u64);
	// std r8,748(r19)
	PPC_STORE_U64(ctx.r19.u32 + 748, ctx.r8.u64);
	// ld r6,-304(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -304);
	// ld r5,-272(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// ld r4,-256(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// ld r3,-264(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// ld r31,-248(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// ld r30,-280(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// ld r29,-224(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// ld r28,-240(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// ld r27,-312(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -312);
	// ld r26,-320(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -320);
	// ld r25,-232(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// ld r24,-184(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// ld r23,-216(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// ld r22,-200(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// ld r21,-208(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// ld r20,-192(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// ld r10,-296(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -296);
	// ld r8,-288(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// ld r11,-328(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -328);
	// ld r9,-336(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -336);
	// std r7,760(r19)
	PPC_STORE_U64(ctx.r19.u32 + 760, ctx.r7.u64);
	// std r6,772(r19)
	PPC_STORE_U64(ctx.r19.u32 + 772, ctx.r6.u64);
	// std r5,784(r19)
	PPC_STORE_U64(ctx.r19.u32 + 784, ctx.r5.u64);
	// std r4,796(r19)
	PPC_STORE_U64(ctx.r19.u32 + 796, ctx.r4.u64);
	// std r3,808(r19)
	PPC_STORE_U64(ctx.r19.u32 + 808, ctx.r3.u64);
	// std r31,820(r19)
	PPC_STORE_U64(ctx.r19.u32 + 820, ctx.r31.u64);
	// std r30,832(r19)
	PPC_STORE_U64(ctx.r19.u32 + 832, ctx.r30.u64);
	// std r29,844(r19)
	PPC_STORE_U64(ctx.r19.u32 + 844, ctx.r29.u64);
	// std r28,856(r19)
	PPC_STORE_U64(ctx.r19.u32 + 856, ctx.r28.u64);
	// std r27,868(r19)
	PPC_STORE_U64(ctx.r19.u32 + 868, ctx.r27.u64);
	// std r26,880(r19)
	PPC_STORE_U64(ctx.r19.u32 + 880, ctx.r26.u64);
	// std r25,892(r19)
	PPC_STORE_U64(ctx.r19.u32 + 892, ctx.r25.u64);
	// std r24,904(r19)
	PPC_STORE_U64(ctx.r19.u32 + 904, ctx.r24.u64);
	// std r23,916(r19)
	PPC_STORE_U64(ctx.r19.u32 + 916, ctx.r23.u64);
	// std r22,928(r19)
	PPC_STORE_U64(ctx.r19.u32 + 928, ctx.r22.u64);
	// std r21,940(r19)
	PPC_STORE_U64(ctx.r19.u32 + 940, ctx.r21.u64);
	// std r20,952(r19)
	PPC_STORE_U64(ctx.r19.u32 + 952, ctx.r20.u64);
	// std r10,964(r19)
	PPC_STORE_U64(ctx.r19.u32 + 964, ctx.r10.u64);
	// std r11,976(r19)
	PPC_STORE_U64(ctx.r19.u32 + 976, ctx.r11.u64);
	// std r9,988(r19)
	PPC_STORE_U64(ctx.r19.u32 + 988, ctx.r9.u64);
	// std r8,1000(r19)
	PPC_STORE_U64(ctx.r19.u32 + 1000, ctx.r8.u64);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83374AB4"))) PPC_WEAK_FUNC(sub_83374AB4);
PPC_FUNC_IMPL(__imp__sub_83374AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374AB8"))) PPC_WEAK_FUNC(sub_83374AB8);
PPC_FUNC_IMPL(__imp__sub_83374AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15088
	ctx.r3.s64 = ctx.r11.s64 + -15088;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83374AC4"))) PPC_WEAK_FUNC(sub_83374AC4);
PPC_FUNC_IMPL(__imp__sub_83374AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374AC8"))) PPC_WEAK_FUNC(sub_83374AC8);
PPC_FUNC_IMPL(__imp__sub_83374AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15072
	ctx.r3.s64 = ctx.r11.s64 + -15072;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83374AD4"))) PPC_WEAK_FUNC(sub_83374AD4);
PPC_FUNC_IMPL(__imp__sub_83374AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374AD8"))) PPC_WEAK_FUNC(sub_83374AD8);
PPC_FUNC_IMPL(__imp__sub_83374AD8) {
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
	// addi r3,r11,-15008
	ctx.r3.s64 = ctx.r11.s64 + -15008;
	// bl 0x82362f60
	ctx.lr = 0x83374AF0;
	sub_82362F60(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,-15056
	ctx.r3.s64 = ctx.r10.s64 + -15056;
	// bl 0x82cb0ae8
	ctx.lr = 0x83374AFC;
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

__attribute__((alias("__imp__sub_83374B0C"))) PPC_WEAK_FUNC(sub_83374B0C);
PPC_FUNC_IMPL(__imp__sub_83374B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374B10"))) PPC_WEAK_FUNC(sub_83374B10);
PPC_FUNC_IMPL(__imp__sub_83374B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15040
	ctx.r3.s64 = ctx.r11.s64 + -15040;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83374B1C"))) PPC_WEAK_FUNC(sub_83374B1C);
PPC_FUNC_IMPL(__imp__sub_83374B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374B20"))) PPC_WEAK_FUNC(sub_83374B20);
PPC_FUNC_IMPL(__imp__sub_83374B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15016
	ctx.r3.s64 = ctx.r11.s64 + -15016;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

