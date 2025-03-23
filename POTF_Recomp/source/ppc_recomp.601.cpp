#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8336C960"))) PPC_WEAK_FUNC(sub_8336C960);
PPC_FUNC_IMPL(__imp__sub_8336C960) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336C990:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336c990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336C990;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336C9A0"))) PPC_WEAK_FUNC(sub_8336C9A0);
PPC_FUNC_IMPL(__imp__sub_8336C9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336C9D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336c9d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336C9D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336C9E0"))) PPC_WEAK_FUNC(sub_8336C9E0);
PPC_FUNC_IMPL(__imp__sub_8336C9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CA10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ca10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CA10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CA20"))) PPC_WEAK_FUNC(sub_8336CA20);
PPC_FUNC_IMPL(__imp__sub_8336CA20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CA50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ca50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CA50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CA60"))) PPC_WEAK_FUNC(sub_8336CA60);
PPC_FUNC_IMPL(__imp__sub_8336CA60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CA90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ca90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CA90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CAA0"))) PPC_WEAK_FUNC(sub_8336CAA0);
PPC_FUNC_IMPL(__imp__sub_8336CAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CAD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336cad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CAD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CAE0"))) PPC_WEAK_FUNC(sub_8336CAE0);
PPC_FUNC_IMPL(__imp__sub_8336CAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CB10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336cb10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CB10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CB20"))) PPC_WEAK_FUNC(sub_8336CB20);
PPC_FUNC_IMPL(__imp__sub_8336CB20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CB50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336cb50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CB50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CB60"))) PPC_WEAK_FUNC(sub_8336CB60);
PPC_FUNC_IMPL(__imp__sub_8336CB60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CB90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336cb90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CB90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CBA0"))) PPC_WEAK_FUNC(sub_8336CBA0);
PPC_FUNC_IMPL(__imp__sub_8336CBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CBD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336cbd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CBD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CBE0"))) PPC_WEAK_FUNC(sub_8336CBE0);
PPC_FUNC_IMPL(__imp__sub_8336CBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CC10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336cc10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CC10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CC20"))) PPC_WEAK_FUNC(sub_8336CC20);
PPC_FUNC_IMPL(__imp__sub_8336CC20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CC50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336cc50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CC50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CC60"))) PPC_WEAK_FUNC(sub_8336CC60);
PPC_FUNC_IMPL(__imp__sub_8336CC60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CC90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336cc90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CC90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CCA0"))) PPC_WEAK_FUNC(sub_8336CCA0);
PPC_FUNC_IMPL(__imp__sub_8336CCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CCD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ccd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CCD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CCE0"))) PPC_WEAK_FUNC(sub_8336CCE0);
PPC_FUNC_IMPL(__imp__sub_8336CCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CD10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336cd10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CD10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CD20"))) PPC_WEAK_FUNC(sub_8336CD20);
PPC_FUNC_IMPL(__imp__sub_8336CD20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CD50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336cd50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CD50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CD60"))) PPC_WEAK_FUNC(sub_8336CD60);
PPC_FUNC_IMPL(__imp__sub_8336CD60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CD90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336cd90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CD90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CDA0"))) PPC_WEAK_FUNC(sub_8336CDA0);
PPC_FUNC_IMPL(__imp__sub_8336CDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CDD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336cdd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CDD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CDE0"))) PPC_WEAK_FUNC(sub_8336CDE0);
PPC_FUNC_IMPL(__imp__sub_8336CDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CE10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ce10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CE10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CE20"))) PPC_WEAK_FUNC(sub_8336CE20);
PPC_FUNC_IMPL(__imp__sub_8336CE20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CE50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ce50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CE50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CE60"))) PPC_WEAK_FUNC(sub_8336CE60);
PPC_FUNC_IMPL(__imp__sub_8336CE60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CE90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ce90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CE90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CEA0"))) PPC_WEAK_FUNC(sub_8336CEA0);
PPC_FUNC_IMPL(__imp__sub_8336CEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CED0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ced0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CED0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CEE0"))) PPC_WEAK_FUNC(sub_8336CEE0);
PPC_FUNC_IMPL(__imp__sub_8336CEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CF10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336cf10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CF10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CF20"))) PPC_WEAK_FUNC(sub_8336CF20);
PPC_FUNC_IMPL(__imp__sub_8336CF20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CF50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336cf50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CF50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CF60"))) PPC_WEAK_FUNC(sub_8336CF60);
PPC_FUNC_IMPL(__imp__sub_8336CF60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CF90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336cf90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CF90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CFA0"))) PPC_WEAK_FUNC(sub_8336CFA0);
PPC_FUNC_IMPL(__imp__sub_8336CFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336CFD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336cfd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336CFD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336CFE0"))) PPC_WEAK_FUNC(sub_8336CFE0);
PPC_FUNC_IMPL(__imp__sub_8336CFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D010:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D010;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D020"))) PPC_WEAK_FUNC(sub_8336D020);
PPC_FUNC_IMPL(__imp__sub_8336D020) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D050:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D050;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D060"))) PPC_WEAK_FUNC(sub_8336D060);
PPC_FUNC_IMPL(__imp__sub_8336D060) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D090:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D090;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D0A0"))) PPC_WEAK_FUNC(sub_8336D0A0);
PPC_FUNC_IMPL(__imp__sub_8336D0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D0D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d0d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D0D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D0E0"))) PPC_WEAK_FUNC(sub_8336D0E0);
PPC_FUNC_IMPL(__imp__sub_8336D0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D110:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D110;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D120"))) PPC_WEAK_FUNC(sub_8336D120);
PPC_FUNC_IMPL(__imp__sub_8336D120) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D150:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D150;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D160"))) PPC_WEAK_FUNC(sub_8336D160);
PPC_FUNC_IMPL(__imp__sub_8336D160) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D190:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D190;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D1A0"))) PPC_WEAK_FUNC(sub_8336D1A0);
PPC_FUNC_IMPL(__imp__sub_8336D1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D1D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d1d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D1D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D1E0"))) PPC_WEAK_FUNC(sub_8336D1E0);
PPC_FUNC_IMPL(__imp__sub_8336D1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D210:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D210;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D220"))) PPC_WEAK_FUNC(sub_8336D220);
PPC_FUNC_IMPL(__imp__sub_8336D220) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D250:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D250;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D260"))) PPC_WEAK_FUNC(sub_8336D260);
PPC_FUNC_IMPL(__imp__sub_8336D260) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D290:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D290;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D2A0"))) PPC_WEAK_FUNC(sub_8336D2A0);
PPC_FUNC_IMPL(__imp__sub_8336D2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D2D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d2d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D2D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D2E0"))) PPC_WEAK_FUNC(sub_8336D2E0);
PPC_FUNC_IMPL(__imp__sub_8336D2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D310:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D310;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D320"))) PPC_WEAK_FUNC(sub_8336D320);
PPC_FUNC_IMPL(__imp__sub_8336D320) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D350:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D350;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D360"))) PPC_WEAK_FUNC(sub_8336D360);
PPC_FUNC_IMPL(__imp__sub_8336D360) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D390:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d390
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D390;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D3A0"))) PPC_WEAK_FUNC(sub_8336D3A0);
PPC_FUNC_IMPL(__imp__sub_8336D3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D3D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d3d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D3D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D3E0"))) PPC_WEAK_FUNC(sub_8336D3E0);
PPC_FUNC_IMPL(__imp__sub_8336D3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D410:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D410;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D420"))) PPC_WEAK_FUNC(sub_8336D420);
PPC_FUNC_IMPL(__imp__sub_8336D420) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D450:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D450;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D460"))) PPC_WEAK_FUNC(sub_8336D460);
PPC_FUNC_IMPL(__imp__sub_8336D460) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D490:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D490;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D4A0"))) PPC_WEAK_FUNC(sub_8336D4A0);
PPC_FUNC_IMPL(__imp__sub_8336D4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D4D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d4d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D4D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D4E0"))) PPC_WEAK_FUNC(sub_8336D4E0);
PPC_FUNC_IMPL(__imp__sub_8336D4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D510:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D510;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D520"))) PPC_WEAK_FUNC(sub_8336D520);
PPC_FUNC_IMPL(__imp__sub_8336D520) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D550:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D550;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D560"))) PPC_WEAK_FUNC(sub_8336D560);
PPC_FUNC_IMPL(__imp__sub_8336D560) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D590:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D590;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D5A0"))) PPC_WEAK_FUNC(sub_8336D5A0);
PPC_FUNC_IMPL(__imp__sub_8336D5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D5D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d5d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D5D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D5E0"))) PPC_WEAK_FUNC(sub_8336D5E0);
PPC_FUNC_IMPL(__imp__sub_8336D5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D610:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D610;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D620"))) PPC_WEAK_FUNC(sub_8336D620);
PPC_FUNC_IMPL(__imp__sub_8336D620) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D650:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D650;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D660"))) PPC_WEAK_FUNC(sub_8336D660);
PPC_FUNC_IMPL(__imp__sub_8336D660) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D690:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D690;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D6A0"))) PPC_WEAK_FUNC(sub_8336D6A0);
PPC_FUNC_IMPL(__imp__sub_8336D6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D6D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d6d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D6D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D6E0"))) PPC_WEAK_FUNC(sub_8336D6E0);
PPC_FUNC_IMPL(__imp__sub_8336D6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D710:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D710;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D720"))) PPC_WEAK_FUNC(sub_8336D720);
PPC_FUNC_IMPL(__imp__sub_8336D720) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D750:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D750;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D760"))) PPC_WEAK_FUNC(sub_8336D760);
PPC_FUNC_IMPL(__imp__sub_8336D760) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D790:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D790;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D7A0"))) PPC_WEAK_FUNC(sub_8336D7A0);
PPC_FUNC_IMPL(__imp__sub_8336D7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D7D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d7d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D7D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D7E0"))) PPC_WEAK_FUNC(sub_8336D7E0);
PPC_FUNC_IMPL(__imp__sub_8336D7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D810:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D810;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D820"))) PPC_WEAK_FUNC(sub_8336D820);
PPC_FUNC_IMPL(__imp__sub_8336D820) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D850:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D850;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D860"))) PPC_WEAK_FUNC(sub_8336D860);
PPC_FUNC_IMPL(__imp__sub_8336D860) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D890:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D890;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D8A0"))) PPC_WEAK_FUNC(sub_8336D8A0);
PPC_FUNC_IMPL(__imp__sub_8336D8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D8D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d8d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D8D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D8E0"))) PPC_WEAK_FUNC(sub_8336D8E0);
PPC_FUNC_IMPL(__imp__sub_8336D8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D910:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D910;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D920"))) PPC_WEAK_FUNC(sub_8336D920);
PPC_FUNC_IMPL(__imp__sub_8336D920) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D950:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D950;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D960"))) PPC_WEAK_FUNC(sub_8336D960);
PPC_FUNC_IMPL(__imp__sub_8336D960) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D990:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D990;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D9A0"))) PPC_WEAK_FUNC(sub_8336D9A0);
PPC_FUNC_IMPL(__imp__sub_8336D9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336D9D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336d9d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336D9D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336D9E0"))) PPC_WEAK_FUNC(sub_8336D9E0);
PPC_FUNC_IMPL(__imp__sub_8336D9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DA10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336da10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DA10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DA20"))) PPC_WEAK_FUNC(sub_8336DA20);
PPC_FUNC_IMPL(__imp__sub_8336DA20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DA50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336da50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DA50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DA60"))) PPC_WEAK_FUNC(sub_8336DA60);
PPC_FUNC_IMPL(__imp__sub_8336DA60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DA90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336da90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DA90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DAA0"))) PPC_WEAK_FUNC(sub_8336DAA0);
PPC_FUNC_IMPL(__imp__sub_8336DAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DAD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336dad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DAD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DAE0"))) PPC_WEAK_FUNC(sub_8336DAE0);
PPC_FUNC_IMPL(__imp__sub_8336DAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DB10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336db10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DB10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DB20"))) PPC_WEAK_FUNC(sub_8336DB20);
PPC_FUNC_IMPL(__imp__sub_8336DB20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DB50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336db50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DB50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DB60"))) PPC_WEAK_FUNC(sub_8336DB60);
PPC_FUNC_IMPL(__imp__sub_8336DB60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DB90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336db90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DB90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DBA0"))) PPC_WEAK_FUNC(sub_8336DBA0);
PPC_FUNC_IMPL(__imp__sub_8336DBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DBD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336dbd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DBD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DBE0"))) PPC_WEAK_FUNC(sub_8336DBE0);
PPC_FUNC_IMPL(__imp__sub_8336DBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DC10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336dc10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DC10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DC20"))) PPC_WEAK_FUNC(sub_8336DC20);
PPC_FUNC_IMPL(__imp__sub_8336DC20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DC50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336dc50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DC50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DC60"))) PPC_WEAK_FUNC(sub_8336DC60);
PPC_FUNC_IMPL(__imp__sub_8336DC60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DC90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336dc90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DC90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DCA0"))) PPC_WEAK_FUNC(sub_8336DCA0);
PPC_FUNC_IMPL(__imp__sub_8336DCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DCD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336dcd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DCD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DCE0"))) PPC_WEAK_FUNC(sub_8336DCE0);
PPC_FUNC_IMPL(__imp__sub_8336DCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DD10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336dd10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DD10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DD20"))) PPC_WEAK_FUNC(sub_8336DD20);
PPC_FUNC_IMPL(__imp__sub_8336DD20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DD50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336dd50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DD50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DD60"))) PPC_WEAK_FUNC(sub_8336DD60);
PPC_FUNC_IMPL(__imp__sub_8336DD60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DD90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336dd90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DD90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DDA0"))) PPC_WEAK_FUNC(sub_8336DDA0);
PPC_FUNC_IMPL(__imp__sub_8336DDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DDD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ddd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DDD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DDE0"))) PPC_WEAK_FUNC(sub_8336DDE0);
PPC_FUNC_IMPL(__imp__sub_8336DDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DE10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336de10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DE10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DE20"))) PPC_WEAK_FUNC(sub_8336DE20);
PPC_FUNC_IMPL(__imp__sub_8336DE20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DE50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336de50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DE50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DE60"))) PPC_WEAK_FUNC(sub_8336DE60);
PPC_FUNC_IMPL(__imp__sub_8336DE60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DE90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336de90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DE90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DEA0"))) PPC_WEAK_FUNC(sub_8336DEA0);
PPC_FUNC_IMPL(__imp__sub_8336DEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DED0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ded0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DED0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DEE0"))) PPC_WEAK_FUNC(sub_8336DEE0);
PPC_FUNC_IMPL(__imp__sub_8336DEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DF10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336df10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DF10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DF20"))) PPC_WEAK_FUNC(sub_8336DF20);
PPC_FUNC_IMPL(__imp__sub_8336DF20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DF50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336df50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DF50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DF60"))) PPC_WEAK_FUNC(sub_8336DF60);
PPC_FUNC_IMPL(__imp__sub_8336DF60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DF90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336df90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DF90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DFA0"))) PPC_WEAK_FUNC(sub_8336DFA0);
PPC_FUNC_IMPL(__imp__sub_8336DFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336DFD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336dfd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336DFD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336DFE0"))) PPC_WEAK_FUNC(sub_8336DFE0);
PPC_FUNC_IMPL(__imp__sub_8336DFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E010:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E010;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E020"))) PPC_WEAK_FUNC(sub_8336E020);
PPC_FUNC_IMPL(__imp__sub_8336E020) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E050:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E050;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E060"))) PPC_WEAK_FUNC(sub_8336E060);
PPC_FUNC_IMPL(__imp__sub_8336E060) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E090:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E090;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E0A0"))) PPC_WEAK_FUNC(sub_8336E0A0);
PPC_FUNC_IMPL(__imp__sub_8336E0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E0D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e0d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E0D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E0E0"))) PPC_WEAK_FUNC(sub_8336E0E0);
PPC_FUNC_IMPL(__imp__sub_8336E0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E110:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E110;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E120"))) PPC_WEAK_FUNC(sub_8336E120);
PPC_FUNC_IMPL(__imp__sub_8336E120) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E150:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E150;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E160"))) PPC_WEAK_FUNC(sub_8336E160);
PPC_FUNC_IMPL(__imp__sub_8336E160) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E190:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E190;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E1A0"))) PPC_WEAK_FUNC(sub_8336E1A0);
PPC_FUNC_IMPL(__imp__sub_8336E1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E1D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e1d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E1D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E1E0"))) PPC_WEAK_FUNC(sub_8336E1E0);
PPC_FUNC_IMPL(__imp__sub_8336E1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E210:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E210;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E220"))) PPC_WEAK_FUNC(sub_8336E220);
PPC_FUNC_IMPL(__imp__sub_8336E220) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E250:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E250;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E260"))) PPC_WEAK_FUNC(sub_8336E260);
PPC_FUNC_IMPL(__imp__sub_8336E260) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E290:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E290;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E2A0"))) PPC_WEAK_FUNC(sub_8336E2A0);
PPC_FUNC_IMPL(__imp__sub_8336E2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E2D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e2d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E2D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E2E0"))) PPC_WEAK_FUNC(sub_8336E2E0);
PPC_FUNC_IMPL(__imp__sub_8336E2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E310:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E310;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E320"))) PPC_WEAK_FUNC(sub_8336E320);
PPC_FUNC_IMPL(__imp__sub_8336E320) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E350:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E350;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E360"))) PPC_WEAK_FUNC(sub_8336E360);
PPC_FUNC_IMPL(__imp__sub_8336E360) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E390:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e390
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E390;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E3A0"))) PPC_WEAK_FUNC(sub_8336E3A0);
PPC_FUNC_IMPL(__imp__sub_8336E3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E3D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e3d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E3D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E3E0"))) PPC_WEAK_FUNC(sub_8336E3E0);
PPC_FUNC_IMPL(__imp__sub_8336E3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E410:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E410;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E420"))) PPC_WEAK_FUNC(sub_8336E420);
PPC_FUNC_IMPL(__imp__sub_8336E420) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E450:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E450;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E460"))) PPC_WEAK_FUNC(sub_8336E460);
PPC_FUNC_IMPL(__imp__sub_8336E460) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E490:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E490;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E4A0"))) PPC_WEAK_FUNC(sub_8336E4A0);
PPC_FUNC_IMPL(__imp__sub_8336E4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E4D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e4d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E4D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E4E0"))) PPC_WEAK_FUNC(sub_8336E4E0);
PPC_FUNC_IMPL(__imp__sub_8336E4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E510:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E510;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E520"))) PPC_WEAK_FUNC(sub_8336E520);
PPC_FUNC_IMPL(__imp__sub_8336E520) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E550:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E550;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E560"))) PPC_WEAK_FUNC(sub_8336E560);
PPC_FUNC_IMPL(__imp__sub_8336E560) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E590:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E590;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E5A0"))) PPC_WEAK_FUNC(sub_8336E5A0);
PPC_FUNC_IMPL(__imp__sub_8336E5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E5D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e5d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E5D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E5E0"))) PPC_WEAK_FUNC(sub_8336E5E0);
PPC_FUNC_IMPL(__imp__sub_8336E5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E610:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E610;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E620"))) PPC_WEAK_FUNC(sub_8336E620);
PPC_FUNC_IMPL(__imp__sub_8336E620) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E650:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E650;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E660"))) PPC_WEAK_FUNC(sub_8336E660);
PPC_FUNC_IMPL(__imp__sub_8336E660) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E690:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E690;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E6A0"))) PPC_WEAK_FUNC(sub_8336E6A0);
PPC_FUNC_IMPL(__imp__sub_8336E6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E6D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e6d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E6D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E6E0"))) PPC_WEAK_FUNC(sub_8336E6E0);
PPC_FUNC_IMPL(__imp__sub_8336E6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E710:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E710;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E720"))) PPC_WEAK_FUNC(sub_8336E720);
PPC_FUNC_IMPL(__imp__sub_8336E720) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E750:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E750;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E760"))) PPC_WEAK_FUNC(sub_8336E760);
PPC_FUNC_IMPL(__imp__sub_8336E760) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E790:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E790;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E7A0"))) PPC_WEAK_FUNC(sub_8336E7A0);
PPC_FUNC_IMPL(__imp__sub_8336E7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E7D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e7d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E7D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E7E0"))) PPC_WEAK_FUNC(sub_8336E7E0);
PPC_FUNC_IMPL(__imp__sub_8336E7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E810:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E810;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E820"))) PPC_WEAK_FUNC(sub_8336E820);
PPC_FUNC_IMPL(__imp__sub_8336E820) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E850:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E850;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E860"))) PPC_WEAK_FUNC(sub_8336E860);
PPC_FUNC_IMPL(__imp__sub_8336E860) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E890:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E890;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E8A0"))) PPC_WEAK_FUNC(sub_8336E8A0);
PPC_FUNC_IMPL(__imp__sub_8336E8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E8D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e8d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E8D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E8E0"))) PPC_WEAK_FUNC(sub_8336E8E0);
PPC_FUNC_IMPL(__imp__sub_8336E8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E910:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E910;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E920"))) PPC_WEAK_FUNC(sub_8336E920);
PPC_FUNC_IMPL(__imp__sub_8336E920) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E950:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E950;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E960"))) PPC_WEAK_FUNC(sub_8336E960);
PPC_FUNC_IMPL(__imp__sub_8336E960) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E990:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E990;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E9A0"))) PPC_WEAK_FUNC(sub_8336E9A0);
PPC_FUNC_IMPL(__imp__sub_8336E9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336E9D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336e9d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336E9D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336E9E0"))) PPC_WEAK_FUNC(sub_8336E9E0);
PPC_FUNC_IMPL(__imp__sub_8336E9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EA10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ea10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EA10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EA20"))) PPC_WEAK_FUNC(sub_8336EA20);
PPC_FUNC_IMPL(__imp__sub_8336EA20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EA50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ea50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EA50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EA60"))) PPC_WEAK_FUNC(sub_8336EA60);
PPC_FUNC_IMPL(__imp__sub_8336EA60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EA90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ea90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EA90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EAA0"))) PPC_WEAK_FUNC(sub_8336EAA0);
PPC_FUNC_IMPL(__imp__sub_8336EAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EAD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ead0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EAD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EAE0"))) PPC_WEAK_FUNC(sub_8336EAE0);
PPC_FUNC_IMPL(__imp__sub_8336EAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EB10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336eb10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EB10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EB20"))) PPC_WEAK_FUNC(sub_8336EB20);
PPC_FUNC_IMPL(__imp__sub_8336EB20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EB50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336eb50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EB50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EB60"))) PPC_WEAK_FUNC(sub_8336EB60);
PPC_FUNC_IMPL(__imp__sub_8336EB60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EB90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336eb90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EB90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EBA0"))) PPC_WEAK_FUNC(sub_8336EBA0);
PPC_FUNC_IMPL(__imp__sub_8336EBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EBD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ebd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EBD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EBE0"))) PPC_WEAK_FUNC(sub_8336EBE0);
PPC_FUNC_IMPL(__imp__sub_8336EBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EC10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ec10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EC10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EC20"))) PPC_WEAK_FUNC(sub_8336EC20);
PPC_FUNC_IMPL(__imp__sub_8336EC20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EC50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ec50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EC50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EC60"))) PPC_WEAK_FUNC(sub_8336EC60);
PPC_FUNC_IMPL(__imp__sub_8336EC60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EC90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ec90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EC90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336ECA0"))) PPC_WEAK_FUNC(sub_8336ECA0);
PPC_FUNC_IMPL(__imp__sub_8336ECA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336ECD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ecd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336ECD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336ECE0"))) PPC_WEAK_FUNC(sub_8336ECE0);
PPC_FUNC_IMPL(__imp__sub_8336ECE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336ED10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ed10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336ED10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336ED20"))) PPC_WEAK_FUNC(sub_8336ED20);
PPC_FUNC_IMPL(__imp__sub_8336ED20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336ED50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ed50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336ED50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336ED60"))) PPC_WEAK_FUNC(sub_8336ED60);
PPC_FUNC_IMPL(__imp__sub_8336ED60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336ED90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ed90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336ED90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EDA0"))) PPC_WEAK_FUNC(sub_8336EDA0);
PPC_FUNC_IMPL(__imp__sub_8336EDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EDD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336edd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EDD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EDE0"))) PPC_WEAK_FUNC(sub_8336EDE0);
PPC_FUNC_IMPL(__imp__sub_8336EDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EE10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ee10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EE10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EE20"))) PPC_WEAK_FUNC(sub_8336EE20);
PPC_FUNC_IMPL(__imp__sub_8336EE20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EE50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ee50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EE50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EE60"))) PPC_WEAK_FUNC(sub_8336EE60);
PPC_FUNC_IMPL(__imp__sub_8336EE60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EE90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ee90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EE90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EEA0"))) PPC_WEAK_FUNC(sub_8336EEA0);
PPC_FUNC_IMPL(__imp__sub_8336EEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EED0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336eed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EED0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EEE0"))) PPC_WEAK_FUNC(sub_8336EEE0);
PPC_FUNC_IMPL(__imp__sub_8336EEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EF10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ef10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EF10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EF20"))) PPC_WEAK_FUNC(sub_8336EF20);
PPC_FUNC_IMPL(__imp__sub_8336EF20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EF50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ef50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EF50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EF60"))) PPC_WEAK_FUNC(sub_8336EF60);
PPC_FUNC_IMPL(__imp__sub_8336EF60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EF90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336ef90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EF90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EFA0"))) PPC_WEAK_FUNC(sub_8336EFA0);
PPC_FUNC_IMPL(__imp__sub_8336EFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336EFD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336efd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336EFD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336EFE0"))) PPC_WEAK_FUNC(sub_8336EFE0);
PPC_FUNC_IMPL(__imp__sub_8336EFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F010:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F010;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F020"))) PPC_WEAK_FUNC(sub_8336F020);
PPC_FUNC_IMPL(__imp__sub_8336F020) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F050:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F050;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F060"))) PPC_WEAK_FUNC(sub_8336F060);
PPC_FUNC_IMPL(__imp__sub_8336F060) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F090:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F090;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F0A0"))) PPC_WEAK_FUNC(sub_8336F0A0);
PPC_FUNC_IMPL(__imp__sub_8336F0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F0D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f0d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F0D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F0E0"))) PPC_WEAK_FUNC(sub_8336F0E0);
PPC_FUNC_IMPL(__imp__sub_8336F0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F110:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F110;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F120"))) PPC_WEAK_FUNC(sub_8336F120);
PPC_FUNC_IMPL(__imp__sub_8336F120) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F150:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F150;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F160"))) PPC_WEAK_FUNC(sub_8336F160);
PPC_FUNC_IMPL(__imp__sub_8336F160) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F190:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F190;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F1A0"))) PPC_WEAK_FUNC(sub_8336F1A0);
PPC_FUNC_IMPL(__imp__sub_8336F1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F1D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f1d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F1D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F1E0"))) PPC_WEAK_FUNC(sub_8336F1E0);
PPC_FUNC_IMPL(__imp__sub_8336F1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F210:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F210;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F220"))) PPC_WEAK_FUNC(sub_8336F220);
PPC_FUNC_IMPL(__imp__sub_8336F220) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F250:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F250;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F260"))) PPC_WEAK_FUNC(sub_8336F260);
PPC_FUNC_IMPL(__imp__sub_8336F260) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F290:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F290;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F2A0"))) PPC_WEAK_FUNC(sub_8336F2A0);
PPC_FUNC_IMPL(__imp__sub_8336F2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F2D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f2d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F2D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F2E0"))) PPC_WEAK_FUNC(sub_8336F2E0);
PPC_FUNC_IMPL(__imp__sub_8336F2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F310:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F310;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F320"))) PPC_WEAK_FUNC(sub_8336F320);
PPC_FUNC_IMPL(__imp__sub_8336F320) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F350:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F350;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F360"))) PPC_WEAK_FUNC(sub_8336F360);
PPC_FUNC_IMPL(__imp__sub_8336F360) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F390:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f390
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F390;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F3A0"))) PPC_WEAK_FUNC(sub_8336F3A0);
PPC_FUNC_IMPL(__imp__sub_8336F3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F3D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f3d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F3D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8336F3E0"))) PPC_WEAK_FUNC(sub_8336F3E0);
PPC_FUNC_IMPL(__imp__sub_8336F3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8336F410:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8336f410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8336F410;
	// blr 
	return;
}

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

