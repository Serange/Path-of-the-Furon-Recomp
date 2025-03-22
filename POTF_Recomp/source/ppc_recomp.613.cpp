#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_833A2688"))) PPC_WEAK_FUNC(sub_833A2688);
PPC_FUNC_IMPL(__imp__sub_833A2688) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A26B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a26b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A26B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A26C8"))) PPC_WEAK_FUNC(sub_833A26C8);
PPC_FUNC_IMPL(__imp__sub_833A26C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A26F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a26f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A26F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2708"))) PPC_WEAK_FUNC(sub_833A2708);
PPC_FUNC_IMPL(__imp__sub_833A2708) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2738:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2738;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2748"))) PPC_WEAK_FUNC(sub_833A2748);
PPC_FUNC_IMPL(__imp__sub_833A2748) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2778:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2778;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2788"))) PPC_WEAK_FUNC(sub_833A2788);
PPC_FUNC_IMPL(__imp__sub_833A2788) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A27B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a27b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A27B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A27C8"))) PPC_WEAK_FUNC(sub_833A27C8);
PPC_FUNC_IMPL(__imp__sub_833A27C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A27F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a27f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A27F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2808"))) PPC_WEAK_FUNC(sub_833A2808);
PPC_FUNC_IMPL(__imp__sub_833A2808) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2838:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2838;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2848"))) PPC_WEAK_FUNC(sub_833A2848);
PPC_FUNC_IMPL(__imp__sub_833A2848) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2878:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2878;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2888"))) PPC_WEAK_FUNC(sub_833A2888);
PPC_FUNC_IMPL(__imp__sub_833A2888) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A28B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a28b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A28B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A28C8"))) PPC_WEAK_FUNC(sub_833A28C8);
PPC_FUNC_IMPL(__imp__sub_833A28C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A28F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a28f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A28F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2908"))) PPC_WEAK_FUNC(sub_833A2908);
PPC_FUNC_IMPL(__imp__sub_833A2908) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2938:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2938;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2948"))) PPC_WEAK_FUNC(sub_833A2948);
PPC_FUNC_IMPL(__imp__sub_833A2948) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2978:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2978
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2978;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2988"))) PPC_WEAK_FUNC(sub_833A2988);
PPC_FUNC_IMPL(__imp__sub_833A2988) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A29B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a29b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A29B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A29C8"))) PPC_WEAK_FUNC(sub_833A29C8);
PPC_FUNC_IMPL(__imp__sub_833A29C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A29F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a29f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A29F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2A08"))) PPC_WEAK_FUNC(sub_833A2A08);
PPC_FUNC_IMPL(__imp__sub_833A2A08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2A38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2A38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2A48"))) PPC_WEAK_FUNC(sub_833A2A48);
PPC_FUNC_IMPL(__imp__sub_833A2A48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2A78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2a78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2A78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2A88"))) PPC_WEAK_FUNC(sub_833A2A88);
PPC_FUNC_IMPL(__imp__sub_833A2A88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2AB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2ab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2AB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2AC8"))) PPC_WEAK_FUNC(sub_833A2AC8);
PPC_FUNC_IMPL(__imp__sub_833A2AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2AF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2af8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2AF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2B08"))) PPC_WEAK_FUNC(sub_833A2B08);
PPC_FUNC_IMPL(__imp__sub_833A2B08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2B38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2b38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2B38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2B48"))) PPC_WEAK_FUNC(sub_833A2B48);
PPC_FUNC_IMPL(__imp__sub_833A2B48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2B78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2b78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2B78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2B88"))) PPC_WEAK_FUNC(sub_833A2B88);
PPC_FUNC_IMPL(__imp__sub_833A2B88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2BB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2bb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2BB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2BC8"))) PPC_WEAK_FUNC(sub_833A2BC8);
PPC_FUNC_IMPL(__imp__sub_833A2BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2BF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2bf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2BF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2C08"))) PPC_WEAK_FUNC(sub_833A2C08);
PPC_FUNC_IMPL(__imp__sub_833A2C08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2C38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2c38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2C38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2C48"))) PPC_WEAK_FUNC(sub_833A2C48);
PPC_FUNC_IMPL(__imp__sub_833A2C48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2C78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2c78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2C78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2C88"))) PPC_WEAK_FUNC(sub_833A2C88);
PPC_FUNC_IMPL(__imp__sub_833A2C88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2CB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2cb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2CB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2CC8"))) PPC_WEAK_FUNC(sub_833A2CC8);
PPC_FUNC_IMPL(__imp__sub_833A2CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2CF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2cf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2CF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2D08"))) PPC_WEAK_FUNC(sub_833A2D08);
PPC_FUNC_IMPL(__imp__sub_833A2D08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2D38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2d38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2D38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2D48"))) PPC_WEAK_FUNC(sub_833A2D48);
PPC_FUNC_IMPL(__imp__sub_833A2D48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2D78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2D78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2D88"))) PPC_WEAK_FUNC(sub_833A2D88);
PPC_FUNC_IMPL(__imp__sub_833A2D88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2DB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2db8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2DB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2DC8"))) PPC_WEAK_FUNC(sub_833A2DC8);
PPC_FUNC_IMPL(__imp__sub_833A2DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2DF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2df8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2DF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2E08"))) PPC_WEAK_FUNC(sub_833A2E08);
PPC_FUNC_IMPL(__imp__sub_833A2E08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2E38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2E38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2E48"))) PPC_WEAK_FUNC(sub_833A2E48);
PPC_FUNC_IMPL(__imp__sub_833A2E48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2E78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2e78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2E78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2E88"))) PPC_WEAK_FUNC(sub_833A2E88);
PPC_FUNC_IMPL(__imp__sub_833A2E88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2EB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2eb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2EB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2EC8"))) PPC_WEAK_FUNC(sub_833A2EC8);
PPC_FUNC_IMPL(__imp__sub_833A2EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2EF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2ef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2EF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2F08"))) PPC_WEAK_FUNC(sub_833A2F08);
PPC_FUNC_IMPL(__imp__sub_833A2F08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2F38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2f38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2F38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2F48"))) PPC_WEAK_FUNC(sub_833A2F48);
PPC_FUNC_IMPL(__imp__sub_833A2F48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2F78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2f78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2F78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2F88"))) PPC_WEAK_FUNC(sub_833A2F88);
PPC_FUNC_IMPL(__imp__sub_833A2F88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2FB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2fb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2FB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A2FC8"))) PPC_WEAK_FUNC(sub_833A2FC8);
PPC_FUNC_IMPL(__imp__sub_833A2FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A2FF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a2ff8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A2FF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3008"))) PPC_WEAK_FUNC(sub_833A3008);
PPC_FUNC_IMPL(__imp__sub_833A3008) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3038:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3038;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3048"))) PPC_WEAK_FUNC(sub_833A3048);
PPC_FUNC_IMPL(__imp__sub_833A3048) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3078:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3078;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3088"))) PPC_WEAK_FUNC(sub_833A3088);
PPC_FUNC_IMPL(__imp__sub_833A3088) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A30B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a30b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A30B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A30C8"))) PPC_WEAK_FUNC(sub_833A30C8);
PPC_FUNC_IMPL(__imp__sub_833A30C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A30F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a30f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A30F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3108"))) PPC_WEAK_FUNC(sub_833A3108);
PPC_FUNC_IMPL(__imp__sub_833A3108) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3138:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3138
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3138;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3148"))) PPC_WEAK_FUNC(sub_833A3148);
PPC_FUNC_IMPL(__imp__sub_833A3148) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3178:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3178;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3188"))) PPC_WEAK_FUNC(sub_833A3188);
PPC_FUNC_IMPL(__imp__sub_833A3188) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A31B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a31b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A31B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A31C8"))) PPC_WEAK_FUNC(sub_833A31C8);
PPC_FUNC_IMPL(__imp__sub_833A31C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A31F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a31f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A31F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3208"))) PPC_WEAK_FUNC(sub_833A3208);
PPC_FUNC_IMPL(__imp__sub_833A3208) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3238:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3238;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3248"))) PPC_WEAK_FUNC(sub_833A3248);
PPC_FUNC_IMPL(__imp__sub_833A3248) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3278:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3278;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3288"))) PPC_WEAK_FUNC(sub_833A3288);
PPC_FUNC_IMPL(__imp__sub_833A3288) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A32B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a32b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A32B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A32C8"))) PPC_WEAK_FUNC(sub_833A32C8);
PPC_FUNC_IMPL(__imp__sub_833A32C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A32F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a32f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A32F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3308"))) PPC_WEAK_FUNC(sub_833A3308);
PPC_FUNC_IMPL(__imp__sub_833A3308) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3338:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3338;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3348"))) PPC_WEAK_FUNC(sub_833A3348);
PPC_FUNC_IMPL(__imp__sub_833A3348) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3378:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3378
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3378;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3388"))) PPC_WEAK_FUNC(sub_833A3388);
PPC_FUNC_IMPL(__imp__sub_833A3388) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A33B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a33b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A33B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A33C8"))) PPC_WEAK_FUNC(sub_833A33C8);
PPC_FUNC_IMPL(__imp__sub_833A33C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A33F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a33f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A33F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3408"))) PPC_WEAK_FUNC(sub_833A3408);
PPC_FUNC_IMPL(__imp__sub_833A3408) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3438:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3438
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3438;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3448"))) PPC_WEAK_FUNC(sub_833A3448);
PPC_FUNC_IMPL(__imp__sub_833A3448) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3478:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3478;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3488"))) PPC_WEAK_FUNC(sub_833A3488);
PPC_FUNC_IMPL(__imp__sub_833A3488) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A34B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a34b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A34B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A34C8"))) PPC_WEAK_FUNC(sub_833A34C8);
PPC_FUNC_IMPL(__imp__sub_833A34C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A34F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a34f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A34F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3508"))) PPC_WEAK_FUNC(sub_833A3508);
PPC_FUNC_IMPL(__imp__sub_833A3508) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3538:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3538;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3548"))) PPC_WEAK_FUNC(sub_833A3548);
PPC_FUNC_IMPL(__imp__sub_833A3548) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3578:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3578;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3588"))) PPC_WEAK_FUNC(sub_833A3588);
PPC_FUNC_IMPL(__imp__sub_833A3588) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A35B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a35b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A35B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A35C8"))) PPC_WEAK_FUNC(sub_833A35C8);
PPC_FUNC_IMPL(__imp__sub_833A35C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A35F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a35f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A35F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3608"))) PPC_WEAK_FUNC(sub_833A3608);
PPC_FUNC_IMPL(__imp__sub_833A3608) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3638:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3638;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3648"))) PPC_WEAK_FUNC(sub_833A3648);
PPC_FUNC_IMPL(__imp__sub_833A3648) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3678:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3678;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3688"))) PPC_WEAK_FUNC(sub_833A3688);
PPC_FUNC_IMPL(__imp__sub_833A3688) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A36B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a36b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A36B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A36C8"))) PPC_WEAK_FUNC(sub_833A36C8);
PPC_FUNC_IMPL(__imp__sub_833A36C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A36F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a36f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A36F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3708"))) PPC_WEAK_FUNC(sub_833A3708);
PPC_FUNC_IMPL(__imp__sub_833A3708) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3738:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3738;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3748"))) PPC_WEAK_FUNC(sub_833A3748);
PPC_FUNC_IMPL(__imp__sub_833A3748) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3778:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3778;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3788"))) PPC_WEAK_FUNC(sub_833A3788);
PPC_FUNC_IMPL(__imp__sub_833A3788) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A37B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a37b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A37B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A37C8"))) PPC_WEAK_FUNC(sub_833A37C8);
PPC_FUNC_IMPL(__imp__sub_833A37C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A37F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a37f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A37F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3808"))) PPC_WEAK_FUNC(sub_833A3808);
PPC_FUNC_IMPL(__imp__sub_833A3808) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3838:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3838;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3848"))) PPC_WEAK_FUNC(sub_833A3848);
PPC_FUNC_IMPL(__imp__sub_833A3848) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3878:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3878;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3888"))) PPC_WEAK_FUNC(sub_833A3888);
PPC_FUNC_IMPL(__imp__sub_833A3888) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A38B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a38b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A38B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A38C8"))) PPC_WEAK_FUNC(sub_833A38C8);
PPC_FUNC_IMPL(__imp__sub_833A38C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A38F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a38f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A38F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3908"))) PPC_WEAK_FUNC(sub_833A3908);
PPC_FUNC_IMPL(__imp__sub_833A3908) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3938:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3938;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3948"))) PPC_WEAK_FUNC(sub_833A3948);
PPC_FUNC_IMPL(__imp__sub_833A3948) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3978:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3978
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3978;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3988"))) PPC_WEAK_FUNC(sub_833A3988);
PPC_FUNC_IMPL(__imp__sub_833A3988) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A39B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a39b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A39B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A39C8"))) PPC_WEAK_FUNC(sub_833A39C8);
PPC_FUNC_IMPL(__imp__sub_833A39C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A39F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a39f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A39F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3A08"))) PPC_WEAK_FUNC(sub_833A3A08);
PPC_FUNC_IMPL(__imp__sub_833A3A08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3A38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3A38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3A48"))) PPC_WEAK_FUNC(sub_833A3A48);
PPC_FUNC_IMPL(__imp__sub_833A3A48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3A78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3a78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3A78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3A88"))) PPC_WEAK_FUNC(sub_833A3A88);
PPC_FUNC_IMPL(__imp__sub_833A3A88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3AB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3ab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3AB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3AC8"))) PPC_WEAK_FUNC(sub_833A3AC8);
PPC_FUNC_IMPL(__imp__sub_833A3AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3AF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3af8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3AF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3B08"))) PPC_WEAK_FUNC(sub_833A3B08);
PPC_FUNC_IMPL(__imp__sub_833A3B08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3B38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3b38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3B38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3B48"))) PPC_WEAK_FUNC(sub_833A3B48);
PPC_FUNC_IMPL(__imp__sub_833A3B48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3B78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3b78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3B78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3B88"))) PPC_WEAK_FUNC(sub_833A3B88);
PPC_FUNC_IMPL(__imp__sub_833A3B88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3BB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3bb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3BB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3BC8"))) PPC_WEAK_FUNC(sub_833A3BC8);
PPC_FUNC_IMPL(__imp__sub_833A3BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3BF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3bf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3BF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3C08"))) PPC_WEAK_FUNC(sub_833A3C08);
PPC_FUNC_IMPL(__imp__sub_833A3C08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3C38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3c38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3C38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3C48"))) PPC_WEAK_FUNC(sub_833A3C48);
PPC_FUNC_IMPL(__imp__sub_833A3C48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3C78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3c78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3C78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3C88"))) PPC_WEAK_FUNC(sub_833A3C88);
PPC_FUNC_IMPL(__imp__sub_833A3C88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3CB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3cb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3CB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3CC8"))) PPC_WEAK_FUNC(sub_833A3CC8);
PPC_FUNC_IMPL(__imp__sub_833A3CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3CF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3cf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3CF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3D08"))) PPC_WEAK_FUNC(sub_833A3D08);
PPC_FUNC_IMPL(__imp__sub_833A3D08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3D38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3d38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3D38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3D48"))) PPC_WEAK_FUNC(sub_833A3D48);
PPC_FUNC_IMPL(__imp__sub_833A3D48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3D78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3D78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3D88"))) PPC_WEAK_FUNC(sub_833A3D88);
PPC_FUNC_IMPL(__imp__sub_833A3D88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3DB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3db8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3DB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3DC8"))) PPC_WEAK_FUNC(sub_833A3DC8);
PPC_FUNC_IMPL(__imp__sub_833A3DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3DF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3df8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3DF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3E08"))) PPC_WEAK_FUNC(sub_833A3E08);
PPC_FUNC_IMPL(__imp__sub_833A3E08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3E38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3E38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3E48"))) PPC_WEAK_FUNC(sub_833A3E48);
PPC_FUNC_IMPL(__imp__sub_833A3E48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3E78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3e78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3E78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3E88"))) PPC_WEAK_FUNC(sub_833A3E88);
PPC_FUNC_IMPL(__imp__sub_833A3E88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3EB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3eb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3EB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3EC8"))) PPC_WEAK_FUNC(sub_833A3EC8);
PPC_FUNC_IMPL(__imp__sub_833A3EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3EF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3ef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3EF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3F08"))) PPC_WEAK_FUNC(sub_833A3F08);
PPC_FUNC_IMPL(__imp__sub_833A3F08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3F38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3f38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3F38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3F48"))) PPC_WEAK_FUNC(sub_833A3F48);
PPC_FUNC_IMPL(__imp__sub_833A3F48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3F78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3f78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3F78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3F88"))) PPC_WEAK_FUNC(sub_833A3F88);
PPC_FUNC_IMPL(__imp__sub_833A3F88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3FB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3fb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3FB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A3FC8"))) PPC_WEAK_FUNC(sub_833A3FC8);
PPC_FUNC_IMPL(__imp__sub_833A3FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A3FF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a3ff8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A3FF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4008"))) PPC_WEAK_FUNC(sub_833A4008);
PPC_FUNC_IMPL(__imp__sub_833A4008) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4038:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4038;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4048"))) PPC_WEAK_FUNC(sub_833A4048);
PPC_FUNC_IMPL(__imp__sub_833A4048) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4078:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4078;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4088"))) PPC_WEAK_FUNC(sub_833A4088);
PPC_FUNC_IMPL(__imp__sub_833A4088) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A40B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a40b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A40B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A40C8"))) PPC_WEAK_FUNC(sub_833A40C8);
PPC_FUNC_IMPL(__imp__sub_833A40C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A40F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a40f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A40F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4108"))) PPC_WEAK_FUNC(sub_833A4108);
PPC_FUNC_IMPL(__imp__sub_833A4108) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4138:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4138
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4138;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4148"))) PPC_WEAK_FUNC(sub_833A4148);
PPC_FUNC_IMPL(__imp__sub_833A4148) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4178:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4178;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4188"))) PPC_WEAK_FUNC(sub_833A4188);
PPC_FUNC_IMPL(__imp__sub_833A4188) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A41B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a41b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A41B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A41C8"))) PPC_WEAK_FUNC(sub_833A41C8);
PPC_FUNC_IMPL(__imp__sub_833A41C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A41F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a41f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A41F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4208"))) PPC_WEAK_FUNC(sub_833A4208);
PPC_FUNC_IMPL(__imp__sub_833A4208) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4238:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4238;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4248"))) PPC_WEAK_FUNC(sub_833A4248);
PPC_FUNC_IMPL(__imp__sub_833A4248) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4278:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4278;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4288"))) PPC_WEAK_FUNC(sub_833A4288);
PPC_FUNC_IMPL(__imp__sub_833A4288) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A42B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a42b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A42B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A42C8"))) PPC_WEAK_FUNC(sub_833A42C8);
PPC_FUNC_IMPL(__imp__sub_833A42C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A42F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a42f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A42F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4308"))) PPC_WEAK_FUNC(sub_833A4308);
PPC_FUNC_IMPL(__imp__sub_833A4308) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4338:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4338;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4348"))) PPC_WEAK_FUNC(sub_833A4348);
PPC_FUNC_IMPL(__imp__sub_833A4348) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4378:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4378
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4378;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4388"))) PPC_WEAK_FUNC(sub_833A4388);
PPC_FUNC_IMPL(__imp__sub_833A4388) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A43B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a43b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A43B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A43C8"))) PPC_WEAK_FUNC(sub_833A43C8);
PPC_FUNC_IMPL(__imp__sub_833A43C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A43F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a43f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A43F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4408"))) PPC_WEAK_FUNC(sub_833A4408);
PPC_FUNC_IMPL(__imp__sub_833A4408) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4438:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4438
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4438;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4448"))) PPC_WEAK_FUNC(sub_833A4448);
PPC_FUNC_IMPL(__imp__sub_833A4448) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4478:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4478;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4488"))) PPC_WEAK_FUNC(sub_833A4488);
PPC_FUNC_IMPL(__imp__sub_833A4488) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A44B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a44b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A44B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A44C8"))) PPC_WEAK_FUNC(sub_833A44C8);
PPC_FUNC_IMPL(__imp__sub_833A44C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A44F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a44f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A44F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4508"))) PPC_WEAK_FUNC(sub_833A4508);
PPC_FUNC_IMPL(__imp__sub_833A4508) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4538:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4538;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4548"))) PPC_WEAK_FUNC(sub_833A4548);
PPC_FUNC_IMPL(__imp__sub_833A4548) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4578:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4578;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4588"))) PPC_WEAK_FUNC(sub_833A4588);
PPC_FUNC_IMPL(__imp__sub_833A4588) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A45B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a45b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A45B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A45C8"))) PPC_WEAK_FUNC(sub_833A45C8);
PPC_FUNC_IMPL(__imp__sub_833A45C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A45F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a45f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A45F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4608"))) PPC_WEAK_FUNC(sub_833A4608);
PPC_FUNC_IMPL(__imp__sub_833A4608) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4638:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4638;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4648"))) PPC_WEAK_FUNC(sub_833A4648);
PPC_FUNC_IMPL(__imp__sub_833A4648) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4678:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4678;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4688"))) PPC_WEAK_FUNC(sub_833A4688);
PPC_FUNC_IMPL(__imp__sub_833A4688) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A46B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a46b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A46B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A46C8"))) PPC_WEAK_FUNC(sub_833A46C8);
PPC_FUNC_IMPL(__imp__sub_833A46C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A46F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a46f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A46F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4708"))) PPC_WEAK_FUNC(sub_833A4708);
PPC_FUNC_IMPL(__imp__sub_833A4708) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4738:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4738;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4748"))) PPC_WEAK_FUNC(sub_833A4748);
PPC_FUNC_IMPL(__imp__sub_833A4748) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4778:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4778;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4788"))) PPC_WEAK_FUNC(sub_833A4788);
PPC_FUNC_IMPL(__imp__sub_833A4788) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A47B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a47b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A47B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A47C8"))) PPC_WEAK_FUNC(sub_833A47C8);
PPC_FUNC_IMPL(__imp__sub_833A47C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A47F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a47f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A47F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4808"))) PPC_WEAK_FUNC(sub_833A4808);
PPC_FUNC_IMPL(__imp__sub_833A4808) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4838:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4838;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4848"))) PPC_WEAK_FUNC(sub_833A4848);
PPC_FUNC_IMPL(__imp__sub_833A4848) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4878:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4878;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4888"))) PPC_WEAK_FUNC(sub_833A4888);
PPC_FUNC_IMPL(__imp__sub_833A4888) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A48B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a48b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A48B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A48C8"))) PPC_WEAK_FUNC(sub_833A48C8);
PPC_FUNC_IMPL(__imp__sub_833A48C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A48F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a48f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A48F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4908"))) PPC_WEAK_FUNC(sub_833A4908);
PPC_FUNC_IMPL(__imp__sub_833A4908) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4938:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4938;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4948"))) PPC_WEAK_FUNC(sub_833A4948);
PPC_FUNC_IMPL(__imp__sub_833A4948) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4978:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4978
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4978;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4988"))) PPC_WEAK_FUNC(sub_833A4988);
PPC_FUNC_IMPL(__imp__sub_833A4988) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A49B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a49b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A49B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A49C8"))) PPC_WEAK_FUNC(sub_833A49C8);
PPC_FUNC_IMPL(__imp__sub_833A49C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A49F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a49f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A49F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4A08"))) PPC_WEAK_FUNC(sub_833A4A08);
PPC_FUNC_IMPL(__imp__sub_833A4A08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4A38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4A38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4A48"))) PPC_WEAK_FUNC(sub_833A4A48);
PPC_FUNC_IMPL(__imp__sub_833A4A48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4A78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4a78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4A78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4A88"))) PPC_WEAK_FUNC(sub_833A4A88);
PPC_FUNC_IMPL(__imp__sub_833A4A88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4AB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4ab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4AB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4AC8"))) PPC_WEAK_FUNC(sub_833A4AC8);
PPC_FUNC_IMPL(__imp__sub_833A4AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4AF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4af8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4AF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4B08"))) PPC_WEAK_FUNC(sub_833A4B08);
PPC_FUNC_IMPL(__imp__sub_833A4B08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4B38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4b38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4B38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4B48"))) PPC_WEAK_FUNC(sub_833A4B48);
PPC_FUNC_IMPL(__imp__sub_833A4B48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4B78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4b78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4B78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4B88"))) PPC_WEAK_FUNC(sub_833A4B88);
PPC_FUNC_IMPL(__imp__sub_833A4B88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4BB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4bb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4BB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4BC8"))) PPC_WEAK_FUNC(sub_833A4BC8);
PPC_FUNC_IMPL(__imp__sub_833A4BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4BF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4bf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4BF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4C08"))) PPC_WEAK_FUNC(sub_833A4C08);
PPC_FUNC_IMPL(__imp__sub_833A4C08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4C38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4c38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4C38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4C48"))) PPC_WEAK_FUNC(sub_833A4C48);
PPC_FUNC_IMPL(__imp__sub_833A4C48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4C78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4c78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4C78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4C88"))) PPC_WEAK_FUNC(sub_833A4C88);
PPC_FUNC_IMPL(__imp__sub_833A4C88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4CB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4cb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4CB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4CC8"))) PPC_WEAK_FUNC(sub_833A4CC8);
PPC_FUNC_IMPL(__imp__sub_833A4CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4CF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4cf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4CF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4D08"))) PPC_WEAK_FUNC(sub_833A4D08);
PPC_FUNC_IMPL(__imp__sub_833A4D08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4D38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4d38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4D38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4D48"))) PPC_WEAK_FUNC(sub_833A4D48);
PPC_FUNC_IMPL(__imp__sub_833A4D48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4D78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4D78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4D88"))) PPC_WEAK_FUNC(sub_833A4D88);
PPC_FUNC_IMPL(__imp__sub_833A4D88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4DB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4db8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4DB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4DC8"))) PPC_WEAK_FUNC(sub_833A4DC8);
PPC_FUNC_IMPL(__imp__sub_833A4DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4DF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4df8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4DF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4E08"))) PPC_WEAK_FUNC(sub_833A4E08);
PPC_FUNC_IMPL(__imp__sub_833A4E08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4E38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4E38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4E48"))) PPC_WEAK_FUNC(sub_833A4E48);
PPC_FUNC_IMPL(__imp__sub_833A4E48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4E78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4e78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4E78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4E88"))) PPC_WEAK_FUNC(sub_833A4E88);
PPC_FUNC_IMPL(__imp__sub_833A4E88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4EB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4eb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4EB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4EC8"))) PPC_WEAK_FUNC(sub_833A4EC8);
PPC_FUNC_IMPL(__imp__sub_833A4EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4EF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4ef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4EF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4F08"))) PPC_WEAK_FUNC(sub_833A4F08);
PPC_FUNC_IMPL(__imp__sub_833A4F08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4F38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4f38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4F38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4F48"))) PPC_WEAK_FUNC(sub_833A4F48);
PPC_FUNC_IMPL(__imp__sub_833A4F48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4F78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4f78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4F78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4F88"))) PPC_WEAK_FUNC(sub_833A4F88);
PPC_FUNC_IMPL(__imp__sub_833A4F88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4FB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4fb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4FB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A4FC8"))) PPC_WEAK_FUNC(sub_833A4FC8);
PPC_FUNC_IMPL(__imp__sub_833A4FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A4FF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a4ff8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A4FF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A5008"))) PPC_WEAK_FUNC(sub_833A5008);
PPC_FUNC_IMPL(__imp__sub_833A5008) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833A5038:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a5038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A5038;
	// blr 
	return;
}

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

