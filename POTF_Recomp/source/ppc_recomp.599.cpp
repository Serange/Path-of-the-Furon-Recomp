#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83364920"))) PPC_WEAK_FUNC(sub_83364920);
PPC_FUNC_IMPL(__imp__sub_83364920) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364950:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364950;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364960"))) PPC_WEAK_FUNC(sub_83364960);
PPC_FUNC_IMPL(__imp__sub_83364960) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364990:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364990;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833649A0"))) PPC_WEAK_FUNC(sub_833649A0);
PPC_FUNC_IMPL(__imp__sub_833649A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833649D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833649d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833649D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833649E0"))) PPC_WEAK_FUNC(sub_833649E0);
PPC_FUNC_IMPL(__imp__sub_833649E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364A10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364a10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364A10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364A20"))) PPC_WEAK_FUNC(sub_83364A20);
PPC_FUNC_IMPL(__imp__sub_83364A20) {
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
	// bne cr6,0x83364a60
	if (!ctx.cr6.eq) goto loc_83364A60;
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
loc_83364A54:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364a54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364A54;
loc_83364A60:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,2184(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2184);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83364a90
	if (ctx.cr6.eq) goto loc_83364A90;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,546
	ctx.r11.s64 = 546;
	// lwz r10,26748(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26748);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,2184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2184, ctx.r10.u32);
	// blr 
	return;
loc_83364A90:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,26748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26748);
	// stw r11,2184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364AA0"))) PPC_WEAK_FUNC(sub_83364AA0);
PPC_FUNC_IMPL(__imp__sub_83364AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364AD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364ad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364AD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364AE0"))) PPC_WEAK_FUNC(sub_83364AE0);
PPC_FUNC_IMPL(__imp__sub_83364AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364B10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364b10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364B10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364B20"))) PPC_WEAK_FUNC(sub_83364B20);
PPC_FUNC_IMPL(__imp__sub_83364B20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364B50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364B50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364B60"))) PPC_WEAK_FUNC(sub_83364B60);
PPC_FUNC_IMPL(__imp__sub_83364B60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364B90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364B90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364BA0"))) PPC_WEAK_FUNC(sub_83364BA0);
PPC_FUNC_IMPL(__imp__sub_83364BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364BD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364BD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364BE0"))) PPC_WEAK_FUNC(sub_83364BE0);
PPC_FUNC_IMPL(__imp__sub_83364BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364C10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364c10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364C10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364C20"))) PPC_WEAK_FUNC(sub_83364C20);
PPC_FUNC_IMPL(__imp__sub_83364C20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364C50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364C50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364C60"))) PPC_WEAK_FUNC(sub_83364C60);
PPC_FUNC_IMPL(__imp__sub_83364C60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364C90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364c90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364C90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364CA0"))) PPC_WEAK_FUNC(sub_83364CA0);
PPC_FUNC_IMPL(__imp__sub_83364CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364CD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364cd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364CD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364CE0"))) PPC_WEAK_FUNC(sub_83364CE0);
PPC_FUNC_IMPL(__imp__sub_83364CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364D10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364D10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364D20"))) PPC_WEAK_FUNC(sub_83364D20);
PPC_FUNC_IMPL(__imp__sub_83364D20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364D50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364d50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364D50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364D60"))) PPC_WEAK_FUNC(sub_83364D60);
PPC_FUNC_IMPL(__imp__sub_83364D60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364D90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364d90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364D90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364DA0"))) PPC_WEAK_FUNC(sub_83364DA0);
PPC_FUNC_IMPL(__imp__sub_83364DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364DD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364dd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364DD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364DE0"))) PPC_WEAK_FUNC(sub_83364DE0);
PPC_FUNC_IMPL(__imp__sub_83364DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364E10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364e10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364E10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364E20"))) PPC_WEAK_FUNC(sub_83364E20);
PPC_FUNC_IMPL(__imp__sub_83364E20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364E50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364e50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364E50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364E60"))) PPC_WEAK_FUNC(sub_83364E60);
PPC_FUNC_IMPL(__imp__sub_83364E60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364E90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364E90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364EA0"))) PPC_WEAK_FUNC(sub_83364EA0);
PPC_FUNC_IMPL(__imp__sub_83364EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364ED0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364ed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364ED0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364EE0"))) PPC_WEAK_FUNC(sub_83364EE0);
PPC_FUNC_IMPL(__imp__sub_83364EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364F10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364F10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364F20"))) PPC_WEAK_FUNC(sub_83364F20);
PPC_FUNC_IMPL(__imp__sub_83364F20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364F50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364f50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364F50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364F60"))) PPC_WEAK_FUNC(sub_83364F60);
PPC_FUNC_IMPL(__imp__sub_83364F60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364F90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364f90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364F90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364FA0"))) PPC_WEAK_FUNC(sub_83364FA0);
PPC_FUNC_IMPL(__imp__sub_83364FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83364FD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83364fd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83364FD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83364FE0"))) PPC_WEAK_FUNC(sub_83364FE0);
PPC_FUNC_IMPL(__imp__sub_83364FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365010:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365010;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365020"))) PPC_WEAK_FUNC(sub_83365020);
PPC_FUNC_IMPL(__imp__sub_83365020) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365050:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365050;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365060"))) PPC_WEAK_FUNC(sub_83365060);
PPC_FUNC_IMPL(__imp__sub_83365060) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365090:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365090;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833650A0"))) PPC_WEAK_FUNC(sub_833650A0);
PPC_FUNC_IMPL(__imp__sub_833650A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833650D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833650d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833650D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833650E0"))) PPC_WEAK_FUNC(sub_833650E0);
PPC_FUNC_IMPL(__imp__sub_833650E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365110:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365110;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365120"))) PPC_WEAK_FUNC(sub_83365120);
PPC_FUNC_IMPL(__imp__sub_83365120) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365150:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365150;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365160"))) PPC_WEAK_FUNC(sub_83365160);
PPC_FUNC_IMPL(__imp__sub_83365160) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365190:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365190;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833651A0"))) PPC_WEAK_FUNC(sub_833651A0);
PPC_FUNC_IMPL(__imp__sub_833651A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833651D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833651d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833651D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833651E0"))) PPC_WEAK_FUNC(sub_833651E0);
PPC_FUNC_IMPL(__imp__sub_833651E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365210:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365210;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365220"))) PPC_WEAK_FUNC(sub_83365220);
PPC_FUNC_IMPL(__imp__sub_83365220) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365250:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365250;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365260"))) PPC_WEAK_FUNC(sub_83365260);
PPC_FUNC_IMPL(__imp__sub_83365260) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365290:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365290;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833652A0"))) PPC_WEAK_FUNC(sub_833652A0);
PPC_FUNC_IMPL(__imp__sub_833652A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833652D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833652d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833652D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833652E0"))) PPC_WEAK_FUNC(sub_833652E0);
PPC_FUNC_IMPL(__imp__sub_833652E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365310:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365310;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365320"))) PPC_WEAK_FUNC(sub_83365320);
PPC_FUNC_IMPL(__imp__sub_83365320) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365350:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365350;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365360"))) PPC_WEAK_FUNC(sub_83365360);
PPC_FUNC_IMPL(__imp__sub_83365360) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365390:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365390
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365390;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833653A0"))) PPC_WEAK_FUNC(sub_833653A0);
PPC_FUNC_IMPL(__imp__sub_833653A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833653D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833653d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833653D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833653E0"))) PPC_WEAK_FUNC(sub_833653E0);
PPC_FUNC_IMPL(__imp__sub_833653E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365410:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365410;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365420"))) PPC_WEAK_FUNC(sub_83365420);
PPC_FUNC_IMPL(__imp__sub_83365420) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365450:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365450;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365460"))) PPC_WEAK_FUNC(sub_83365460);
PPC_FUNC_IMPL(__imp__sub_83365460) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365490:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365490;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833654A0"))) PPC_WEAK_FUNC(sub_833654A0);
PPC_FUNC_IMPL(__imp__sub_833654A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833654D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833654d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833654D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833654E0"))) PPC_WEAK_FUNC(sub_833654E0);
PPC_FUNC_IMPL(__imp__sub_833654E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365510:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365510;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365520"))) PPC_WEAK_FUNC(sub_83365520);
PPC_FUNC_IMPL(__imp__sub_83365520) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365550:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365550;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365560"))) PPC_WEAK_FUNC(sub_83365560);
PPC_FUNC_IMPL(__imp__sub_83365560) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365590:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365590;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833655A0"))) PPC_WEAK_FUNC(sub_833655A0);
PPC_FUNC_IMPL(__imp__sub_833655A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833655D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833655d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833655D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833655E0"))) PPC_WEAK_FUNC(sub_833655E0);
PPC_FUNC_IMPL(__imp__sub_833655E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365610:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365610;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365620"))) PPC_WEAK_FUNC(sub_83365620);
PPC_FUNC_IMPL(__imp__sub_83365620) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365650:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365650;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365660"))) PPC_WEAK_FUNC(sub_83365660);
PPC_FUNC_IMPL(__imp__sub_83365660) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365690:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365690;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833656A0"))) PPC_WEAK_FUNC(sub_833656A0);
PPC_FUNC_IMPL(__imp__sub_833656A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833656D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833656d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833656D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833656E0"))) PPC_WEAK_FUNC(sub_833656E0);
PPC_FUNC_IMPL(__imp__sub_833656E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365710:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365710;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365720"))) PPC_WEAK_FUNC(sub_83365720);
PPC_FUNC_IMPL(__imp__sub_83365720) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365750:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365750;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365760"))) PPC_WEAK_FUNC(sub_83365760);
PPC_FUNC_IMPL(__imp__sub_83365760) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365790:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365790;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833657A0"))) PPC_WEAK_FUNC(sub_833657A0);
PPC_FUNC_IMPL(__imp__sub_833657A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833657D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833657d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833657D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833657E0"))) PPC_WEAK_FUNC(sub_833657E0);
PPC_FUNC_IMPL(__imp__sub_833657E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365810:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365810;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365820"))) PPC_WEAK_FUNC(sub_83365820);
PPC_FUNC_IMPL(__imp__sub_83365820) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365850:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365850;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365860"))) PPC_WEAK_FUNC(sub_83365860);
PPC_FUNC_IMPL(__imp__sub_83365860) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365890:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365890;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833658A0"))) PPC_WEAK_FUNC(sub_833658A0);
PPC_FUNC_IMPL(__imp__sub_833658A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833658D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833658d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833658D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833658E0"))) PPC_WEAK_FUNC(sub_833658E0);
PPC_FUNC_IMPL(__imp__sub_833658E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365910:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365910;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365920"))) PPC_WEAK_FUNC(sub_83365920);
PPC_FUNC_IMPL(__imp__sub_83365920) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365950:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365950;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365960"))) PPC_WEAK_FUNC(sub_83365960);
PPC_FUNC_IMPL(__imp__sub_83365960) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365990:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365990;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833659A0"))) PPC_WEAK_FUNC(sub_833659A0);
PPC_FUNC_IMPL(__imp__sub_833659A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833659D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833659d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833659D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833659E0"))) PPC_WEAK_FUNC(sub_833659E0);
PPC_FUNC_IMPL(__imp__sub_833659E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365A10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365a10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365A10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365A20"))) PPC_WEAK_FUNC(sub_83365A20);
PPC_FUNC_IMPL(__imp__sub_83365A20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365A50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365a50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365A50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365A60"))) PPC_WEAK_FUNC(sub_83365A60);
PPC_FUNC_IMPL(__imp__sub_83365A60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365A90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365A90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365AA0"))) PPC_WEAK_FUNC(sub_83365AA0);
PPC_FUNC_IMPL(__imp__sub_83365AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365AD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365ad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365AD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365AE0"))) PPC_WEAK_FUNC(sub_83365AE0);
PPC_FUNC_IMPL(__imp__sub_83365AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365B10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365b10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365B10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365B20"))) PPC_WEAK_FUNC(sub_83365B20);
PPC_FUNC_IMPL(__imp__sub_83365B20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365B50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365B50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365B60"))) PPC_WEAK_FUNC(sub_83365B60);
PPC_FUNC_IMPL(__imp__sub_83365B60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365B90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365B90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365BA0"))) PPC_WEAK_FUNC(sub_83365BA0);
PPC_FUNC_IMPL(__imp__sub_83365BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365BD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365BD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365BE0"))) PPC_WEAK_FUNC(sub_83365BE0);
PPC_FUNC_IMPL(__imp__sub_83365BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365C10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365c10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365C10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365C20"))) PPC_WEAK_FUNC(sub_83365C20);
PPC_FUNC_IMPL(__imp__sub_83365C20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365C50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365C50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365C60"))) PPC_WEAK_FUNC(sub_83365C60);
PPC_FUNC_IMPL(__imp__sub_83365C60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365C90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365c90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365C90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365CA0"))) PPC_WEAK_FUNC(sub_83365CA0);
PPC_FUNC_IMPL(__imp__sub_83365CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365CD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365cd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365CD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365CE0"))) PPC_WEAK_FUNC(sub_83365CE0);
PPC_FUNC_IMPL(__imp__sub_83365CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365D10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365D10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365D20"))) PPC_WEAK_FUNC(sub_83365D20);
PPC_FUNC_IMPL(__imp__sub_83365D20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365D50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365d50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365D50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365D60"))) PPC_WEAK_FUNC(sub_83365D60);
PPC_FUNC_IMPL(__imp__sub_83365D60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365D90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365d90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365D90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365DA0"))) PPC_WEAK_FUNC(sub_83365DA0);
PPC_FUNC_IMPL(__imp__sub_83365DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365DD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365dd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365DD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365DE0"))) PPC_WEAK_FUNC(sub_83365DE0);
PPC_FUNC_IMPL(__imp__sub_83365DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365E10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365e10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365E10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365E20"))) PPC_WEAK_FUNC(sub_83365E20);
PPC_FUNC_IMPL(__imp__sub_83365E20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365E50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365e50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365E50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365E60"))) PPC_WEAK_FUNC(sub_83365E60);
PPC_FUNC_IMPL(__imp__sub_83365E60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365E90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365E90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365EA0"))) PPC_WEAK_FUNC(sub_83365EA0);
PPC_FUNC_IMPL(__imp__sub_83365EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365ED0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365ed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365ED0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365EE0"))) PPC_WEAK_FUNC(sub_83365EE0);
PPC_FUNC_IMPL(__imp__sub_83365EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365F10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365F10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365F20"))) PPC_WEAK_FUNC(sub_83365F20);
PPC_FUNC_IMPL(__imp__sub_83365F20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365F50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365f50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365F50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365F60"))) PPC_WEAK_FUNC(sub_83365F60);
PPC_FUNC_IMPL(__imp__sub_83365F60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365F90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365f90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365F90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365FA0"))) PPC_WEAK_FUNC(sub_83365FA0);
PPC_FUNC_IMPL(__imp__sub_83365FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83365FD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83365fd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83365FD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83365FE0"))) PPC_WEAK_FUNC(sub_83365FE0);
PPC_FUNC_IMPL(__imp__sub_83365FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366010:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366010;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366020"))) PPC_WEAK_FUNC(sub_83366020);
PPC_FUNC_IMPL(__imp__sub_83366020) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366050:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366050;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366060"))) PPC_WEAK_FUNC(sub_83366060);
PPC_FUNC_IMPL(__imp__sub_83366060) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366090:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366090;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833660A0"))) PPC_WEAK_FUNC(sub_833660A0);
PPC_FUNC_IMPL(__imp__sub_833660A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833660D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833660d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833660D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833660E0"))) PPC_WEAK_FUNC(sub_833660E0);
PPC_FUNC_IMPL(__imp__sub_833660E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366110:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366110;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366120"))) PPC_WEAK_FUNC(sub_83366120);
PPC_FUNC_IMPL(__imp__sub_83366120) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366150:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366150;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366160"))) PPC_WEAK_FUNC(sub_83366160);
PPC_FUNC_IMPL(__imp__sub_83366160) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366190:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366190;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833661A0"))) PPC_WEAK_FUNC(sub_833661A0);
PPC_FUNC_IMPL(__imp__sub_833661A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833661D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833661d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833661D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833661E0"))) PPC_WEAK_FUNC(sub_833661E0);
PPC_FUNC_IMPL(__imp__sub_833661E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366210:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366210;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366220"))) PPC_WEAK_FUNC(sub_83366220);
PPC_FUNC_IMPL(__imp__sub_83366220) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366250:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366250;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366260"))) PPC_WEAK_FUNC(sub_83366260);
PPC_FUNC_IMPL(__imp__sub_83366260) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366290:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366290;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833662A0"))) PPC_WEAK_FUNC(sub_833662A0);
PPC_FUNC_IMPL(__imp__sub_833662A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833662D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833662d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833662D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833662E0"))) PPC_WEAK_FUNC(sub_833662E0);
PPC_FUNC_IMPL(__imp__sub_833662E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366310:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366310;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366320"))) PPC_WEAK_FUNC(sub_83366320);
PPC_FUNC_IMPL(__imp__sub_83366320) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366350:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366350;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366360"))) PPC_WEAK_FUNC(sub_83366360);
PPC_FUNC_IMPL(__imp__sub_83366360) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366390:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366390
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366390;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833663A0"))) PPC_WEAK_FUNC(sub_833663A0);
PPC_FUNC_IMPL(__imp__sub_833663A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833663D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833663d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833663D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833663E0"))) PPC_WEAK_FUNC(sub_833663E0);
PPC_FUNC_IMPL(__imp__sub_833663E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366410:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366410;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366420"))) PPC_WEAK_FUNC(sub_83366420);
PPC_FUNC_IMPL(__imp__sub_83366420) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366450:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366450;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366460"))) PPC_WEAK_FUNC(sub_83366460);
PPC_FUNC_IMPL(__imp__sub_83366460) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366490:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366490;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833664A0"))) PPC_WEAK_FUNC(sub_833664A0);
PPC_FUNC_IMPL(__imp__sub_833664A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833664D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833664d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833664D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833664E0"))) PPC_WEAK_FUNC(sub_833664E0);
PPC_FUNC_IMPL(__imp__sub_833664E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366510:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366510;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366520"))) PPC_WEAK_FUNC(sub_83366520);
PPC_FUNC_IMPL(__imp__sub_83366520) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366550:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366550;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366560"))) PPC_WEAK_FUNC(sub_83366560);
PPC_FUNC_IMPL(__imp__sub_83366560) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366590:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366590;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833665A0"))) PPC_WEAK_FUNC(sub_833665A0);
PPC_FUNC_IMPL(__imp__sub_833665A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833665D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833665d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833665D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833665E0"))) PPC_WEAK_FUNC(sub_833665E0);
PPC_FUNC_IMPL(__imp__sub_833665E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366610:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366610;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366620"))) PPC_WEAK_FUNC(sub_83366620);
PPC_FUNC_IMPL(__imp__sub_83366620) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366650:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366650;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366660"))) PPC_WEAK_FUNC(sub_83366660);
PPC_FUNC_IMPL(__imp__sub_83366660) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366690:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366690;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833666A0"))) PPC_WEAK_FUNC(sub_833666A0);
PPC_FUNC_IMPL(__imp__sub_833666A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833666D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833666d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833666D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833666E0"))) PPC_WEAK_FUNC(sub_833666E0);
PPC_FUNC_IMPL(__imp__sub_833666E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366710:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366710;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366720"))) PPC_WEAK_FUNC(sub_83366720);
PPC_FUNC_IMPL(__imp__sub_83366720) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366750:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366750;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366760"))) PPC_WEAK_FUNC(sub_83366760);
PPC_FUNC_IMPL(__imp__sub_83366760) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366790:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366790;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833667A0"))) PPC_WEAK_FUNC(sub_833667A0);
PPC_FUNC_IMPL(__imp__sub_833667A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833667D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833667d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833667D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833667E0"))) PPC_WEAK_FUNC(sub_833667E0);
PPC_FUNC_IMPL(__imp__sub_833667E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366810:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366810;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366820"))) PPC_WEAK_FUNC(sub_83366820);
PPC_FUNC_IMPL(__imp__sub_83366820) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366850:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366850;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366860"))) PPC_WEAK_FUNC(sub_83366860);
PPC_FUNC_IMPL(__imp__sub_83366860) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366890:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366890;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833668A0"))) PPC_WEAK_FUNC(sub_833668A0);
PPC_FUNC_IMPL(__imp__sub_833668A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833668D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833668d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833668D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833668E0"))) PPC_WEAK_FUNC(sub_833668E0);
PPC_FUNC_IMPL(__imp__sub_833668E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366910:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366910;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366920"))) PPC_WEAK_FUNC(sub_83366920);
PPC_FUNC_IMPL(__imp__sub_83366920) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366950:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366950;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366960"))) PPC_WEAK_FUNC(sub_83366960);
PPC_FUNC_IMPL(__imp__sub_83366960) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366990:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366990;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833669A0"))) PPC_WEAK_FUNC(sub_833669A0);
PPC_FUNC_IMPL(__imp__sub_833669A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833669D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833669d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833669D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833669E0"))) PPC_WEAK_FUNC(sub_833669E0);
PPC_FUNC_IMPL(__imp__sub_833669E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366A10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366a10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366A10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366A20"))) PPC_WEAK_FUNC(sub_83366A20);
PPC_FUNC_IMPL(__imp__sub_83366A20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366A50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366a50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366A50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366A60"))) PPC_WEAK_FUNC(sub_83366A60);
PPC_FUNC_IMPL(__imp__sub_83366A60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366A90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366A90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366AA0"))) PPC_WEAK_FUNC(sub_83366AA0);
PPC_FUNC_IMPL(__imp__sub_83366AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366AD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366ad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366AD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366AE0"))) PPC_WEAK_FUNC(sub_83366AE0);
PPC_FUNC_IMPL(__imp__sub_83366AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366B10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366b10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366B10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366B20"))) PPC_WEAK_FUNC(sub_83366B20);
PPC_FUNC_IMPL(__imp__sub_83366B20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366B50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366B50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366B60"))) PPC_WEAK_FUNC(sub_83366B60);
PPC_FUNC_IMPL(__imp__sub_83366B60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366B90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366B90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366BA0"))) PPC_WEAK_FUNC(sub_83366BA0);
PPC_FUNC_IMPL(__imp__sub_83366BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366BD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366BD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366BE0"))) PPC_WEAK_FUNC(sub_83366BE0);
PPC_FUNC_IMPL(__imp__sub_83366BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366C10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366c10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366C10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366C20"))) PPC_WEAK_FUNC(sub_83366C20);
PPC_FUNC_IMPL(__imp__sub_83366C20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366C50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366C50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366C60"))) PPC_WEAK_FUNC(sub_83366C60);
PPC_FUNC_IMPL(__imp__sub_83366C60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366C90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366c90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366C90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366CA0"))) PPC_WEAK_FUNC(sub_83366CA0);
PPC_FUNC_IMPL(__imp__sub_83366CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366CD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366cd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366CD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366CE0"))) PPC_WEAK_FUNC(sub_83366CE0);
PPC_FUNC_IMPL(__imp__sub_83366CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366D10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366D10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366D20"))) PPC_WEAK_FUNC(sub_83366D20);
PPC_FUNC_IMPL(__imp__sub_83366D20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366D50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366d50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366D50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366D60"))) PPC_WEAK_FUNC(sub_83366D60);
PPC_FUNC_IMPL(__imp__sub_83366D60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366D90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366d90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366D90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366DA0"))) PPC_WEAK_FUNC(sub_83366DA0);
PPC_FUNC_IMPL(__imp__sub_83366DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366DD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366dd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366DD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366DE0"))) PPC_WEAK_FUNC(sub_83366DE0);
PPC_FUNC_IMPL(__imp__sub_83366DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366E10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366e10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366E10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366E20"))) PPC_WEAK_FUNC(sub_83366E20);
PPC_FUNC_IMPL(__imp__sub_83366E20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366E50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366e50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366E50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366E60"))) PPC_WEAK_FUNC(sub_83366E60);
PPC_FUNC_IMPL(__imp__sub_83366E60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366E90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366E90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366EA0"))) PPC_WEAK_FUNC(sub_83366EA0);
PPC_FUNC_IMPL(__imp__sub_83366EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366ED0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366ed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366ED0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366EE0"))) PPC_WEAK_FUNC(sub_83366EE0);
PPC_FUNC_IMPL(__imp__sub_83366EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366F10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366F10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366F20"))) PPC_WEAK_FUNC(sub_83366F20);
PPC_FUNC_IMPL(__imp__sub_83366F20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366F50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366f50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366F50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366F60"))) PPC_WEAK_FUNC(sub_83366F60);
PPC_FUNC_IMPL(__imp__sub_83366F60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366F90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366f90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366F90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366FA0"))) PPC_WEAK_FUNC(sub_83366FA0);
PPC_FUNC_IMPL(__imp__sub_83366FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83366FD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83366fd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83366FD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83366FE0"))) PPC_WEAK_FUNC(sub_83366FE0);
PPC_FUNC_IMPL(__imp__sub_83366FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367010:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367010;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367020"))) PPC_WEAK_FUNC(sub_83367020);
PPC_FUNC_IMPL(__imp__sub_83367020) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367050:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367050;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367060"))) PPC_WEAK_FUNC(sub_83367060);
PPC_FUNC_IMPL(__imp__sub_83367060) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367090:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367090;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833670A0"))) PPC_WEAK_FUNC(sub_833670A0);
PPC_FUNC_IMPL(__imp__sub_833670A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833670D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833670d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833670D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833670E0"))) PPC_WEAK_FUNC(sub_833670E0);
PPC_FUNC_IMPL(__imp__sub_833670E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367110:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367110;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367120"))) PPC_WEAK_FUNC(sub_83367120);
PPC_FUNC_IMPL(__imp__sub_83367120) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367150:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367150;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367160"))) PPC_WEAK_FUNC(sub_83367160);
PPC_FUNC_IMPL(__imp__sub_83367160) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367190:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367190;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833671A0"))) PPC_WEAK_FUNC(sub_833671A0);
PPC_FUNC_IMPL(__imp__sub_833671A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833671D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833671d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833671D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833671E0"))) PPC_WEAK_FUNC(sub_833671E0);
PPC_FUNC_IMPL(__imp__sub_833671E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367210:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367210;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367220"))) PPC_WEAK_FUNC(sub_83367220);
PPC_FUNC_IMPL(__imp__sub_83367220) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367250:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367250;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367260"))) PPC_WEAK_FUNC(sub_83367260);
PPC_FUNC_IMPL(__imp__sub_83367260) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367290:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367290;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833672A0"))) PPC_WEAK_FUNC(sub_833672A0);
PPC_FUNC_IMPL(__imp__sub_833672A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833672D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833672d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833672D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833672E0"))) PPC_WEAK_FUNC(sub_833672E0);
PPC_FUNC_IMPL(__imp__sub_833672E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367310:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367310;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367320"))) PPC_WEAK_FUNC(sub_83367320);
PPC_FUNC_IMPL(__imp__sub_83367320) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367350:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367350;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367360"))) PPC_WEAK_FUNC(sub_83367360);
PPC_FUNC_IMPL(__imp__sub_83367360) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367390:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367390
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367390;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833673A0"))) PPC_WEAK_FUNC(sub_833673A0);
PPC_FUNC_IMPL(__imp__sub_833673A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833673D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833673d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833673D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833673E0"))) PPC_WEAK_FUNC(sub_833673E0);
PPC_FUNC_IMPL(__imp__sub_833673E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367410:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367410;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367420"))) PPC_WEAK_FUNC(sub_83367420);
PPC_FUNC_IMPL(__imp__sub_83367420) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367450:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367450;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367460"))) PPC_WEAK_FUNC(sub_83367460);
PPC_FUNC_IMPL(__imp__sub_83367460) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367490:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367490;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833674A0"))) PPC_WEAK_FUNC(sub_833674A0);
PPC_FUNC_IMPL(__imp__sub_833674A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833674D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833674d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833674D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833674E0"))) PPC_WEAK_FUNC(sub_833674E0);
PPC_FUNC_IMPL(__imp__sub_833674E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367510:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367510;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367520"))) PPC_WEAK_FUNC(sub_83367520);
PPC_FUNC_IMPL(__imp__sub_83367520) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367550:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367550;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367560"))) PPC_WEAK_FUNC(sub_83367560);
PPC_FUNC_IMPL(__imp__sub_83367560) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367590:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367590;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833675A0"))) PPC_WEAK_FUNC(sub_833675A0);
PPC_FUNC_IMPL(__imp__sub_833675A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833675D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833675d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833675D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833675E0"))) PPC_WEAK_FUNC(sub_833675E0);
PPC_FUNC_IMPL(__imp__sub_833675E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367610:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367610;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367620"))) PPC_WEAK_FUNC(sub_83367620);
PPC_FUNC_IMPL(__imp__sub_83367620) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367650:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367650;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367660"))) PPC_WEAK_FUNC(sub_83367660);
PPC_FUNC_IMPL(__imp__sub_83367660) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367690:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367690;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833676A0"))) PPC_WEAK_FUNC(sub_833676A0);
PPC_FUNC_IMPL(__imp__sub_833676A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833676D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833676d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833676D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833676E0"))) PPC_WEAK_FUNC(sub_833676E0);
PPC_FUNC_IMPL(__imp__sub_833676E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367710:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367710;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367720"))) PPC_WEAK_FUNC(sub_83367720);
PPC_FUNC_IMPL(__imp__sub_83367720) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367750:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367750;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367760"))) PPC_WEAK_FUNC(sub_83367760);
PPC_FUNC_IMPL(__imp__sub_83367760) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367790:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367790;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833677A0"))) PPC_WEAK_FUNC(sub_833677A0);
PPC_FUNC_IMPL(__imp__sub_833677A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833677D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833677d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833677D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833677E0"))) PPC_WEAK_FUNC(sub_833677E0);
PPC_FUNC_IMPL(__imp__sub_833677E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367810:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367810;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367820"))) PPC_WEAK_FUNC(sub_83367820);
PPC_FUNC_IMPL(__imp__sub_83367820) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367850:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367850;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367860"))) PPC_WEAK_FUNC(sub_83367860);
PPC_FUNC_IMPL(__imp__sub_83367860) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367890:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367890;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833678A0"))) PPC_WEAK_FUNC(sub_833678A0);
PPC_FUNC_IMPL(__imp__sub_833678A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833678D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833678d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833678D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833678E0"))) PPC_WEAK_FUNC(sub_833678E0);
PPC_FUNC_IMPL(__imp__sub_833678E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367910:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367910;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367920"))) PPC_WEAK_FUNC(sub_83367920);
PPC_FUNC_IMPL(__imp__sub_83367920) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367950:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367950;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367960"))) PPC_WEAK_FUNC(sub_83367960);
PPC_FUNC_IMPL(__imp__sub_83367960) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367990:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367990;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833679A0"))) PPC_WEAK_FUNC(sub_833679A0);
PPC_FUNC_IMPL(__imp__sub_833679A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833679D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833679d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833679D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833679E0"))) PPC_WEAK_FUNC(sub_833679E0);
PPC_FUNC_IMPL(__imp__sub_833679E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367A10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367a10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367A10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367A20"))) PPC_WEAK_FUNC(sub_83367A20);
PPC_FUNC_IMPL(__imp__sub_83367A20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367A50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367a50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367A50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367A60"))) PPC_WEAK_FUNC(sub_83367A60);
PPC_FUNC_IMPL(__imp__sub_83367A60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367A90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367A90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367AA0"))) PPC_WEAK_FUNC(sub_83367AA0);
PPC_FUNC_IMPL(__imp__sub_83367AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367AD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367ad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367AD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367AE0"))) PPC_WEAK_FUNC(sub_83367AE0);
PPC_FUNC_IMPL(__imp__sub_83367AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367B10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367b10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367B10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367B20"))) PPC_WEAK_FUNC(sub_83367B20);
PPC_FUNC_IMPL(__imp__sub_83367B20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367B50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367B50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367B60"))) PPC_WEAK_FUNC(sub_83367B60);
PPC_FUNC_IMPL(__imp__sub_83367B60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367B90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367B90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367BA0"))) PPC_WEAK_FUNC(sub_83367BA0);
PPC_FUNC_IMPL(__imp__sub_83367BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367BD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367BD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367BE0"))) PPC_WEAK_FUNC(sub_83367BE0);
PPC_FUNC_IMPL(__imp__sub_83367BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367C10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367c10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367C10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367C20"))) PPC_WEAK_FUNC(sub_83367C20);
PPC_FUNC_IMPL(__imp__sub_83367C20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367C50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367C50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367C60"))) PPC_WEAK_FUNC(sub_83367C60);
PPC_FUNC_IMPL(__imp__sub_83367C60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367C90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367c90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367C90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367CA0"))) PPC_WEAK_FUNC(sub_83367CA0);
PPC_FUNC_IMPL(__imp__sub_83367CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367CD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367cd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367CD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367CE0"))) PPC_WEAK_FUNC(sub_83367CE0);
PPC_FUNC_IMPL(__imp__sub_83367CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367D10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367D10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367D20"))) PPC_WEAK_FUNC(sub_83367D20);
PPC_FUNC_IMPL(__imp__sub_83367D20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367D50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367d50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367D50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367D60"))) PPC_WEAK_FUNC(sub_83367D60);
PPC_FUNC_IMPL(__imp__sub_83367D60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367D90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367d90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367D90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367DA0"))) PPC_WEAK_FUNC(sub_83367DA0);
PPC_FUNC_IMPL(__imp__sub_83367DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367DD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367dd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367DD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367DE0"))) PPC_WEAK_FUNC(sub_83367DE0);
PPC_FUNC_IMPL(__imp__sub_83367DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367E10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367e10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367E10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367E20"))) PPC_WEAK_FUNC(sub_83367E20);
PPC_FUNC_IMPL(__imp__sub_83367E20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367E50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367e50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367E50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367E60"))) PPC_WEAK_FUNC(sub_83367E60);
PPC_FUNC_IMPL(__imp__sub_83367E60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367E90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367E90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367EA0"))) PPC_WEAK_FUNC(sub_83367EA0);
PPC_FUNC_IMPL(__imp__sub_83367EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367ED0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367ed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367ED0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367EE0"))) PPC_WEAK_FUNC(sub_83367EE0);
PPC_FUNC_IMPL(__imp__sub_83367EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367F10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367F10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367F20"))) PPC_WEAK_FUNC(sub_83367F20);
PPC_FUNC_IMPL(__imp__sub_83367F20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367F50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367f50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367F50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367F60"))) PPC_WEAK_FUNC(sub_83367F60);
PPC_FUNC_IMPL(__imp__sub_83367F60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367F90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367f90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367F90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367FA0"))) PPC_WEAK_FUNC(sub_83367FA0);
PPC_FUNC_IMPL(__imp__sub_83367FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83367FD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83367fd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83367FD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83367FE0"))) PPC_WEAK_FUNC(sub_83367FE0);
PPC_FUNC_IMPL(__imp__sub_83367FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368010:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368010;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368020"))) PPC_WEAK_FUNC(sub_83368020);
PPC_FUNC_IMPL(__imp__sub_83368020) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368050:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368050;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368060"))) PPC_WEAK_FUNC(sub_83368060);
PPC_FUNC_IMPL(__imp__sub_83368060) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368090:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368090;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833680A0"))) PPC_WEAK_FUNC(sub_833680A0);
PPC_FUNC_IMPL(__imp__sub_833680A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833680D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833680d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833680D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833680E0"))) PPC_WEAK_FUNC(sub_833680E0);
PPC_FUNC_IMPL(__imp__sub_833680E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368110:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368110;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368120"))) PPC_WEAK_FUNC(sub_83368120);
PPC_FUNC_IMPL(__imp__sub_83368120) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368150:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368150;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368160"))) PPC_WEAK_FUNC(sub_83368160);
PPC_FUNC_IMPL(__imp__sub_83368160) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368190:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368190;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833681A0"))) PPC_WEAK_FUNC(sub_833681A0);
PPC_FUNC_IMPL(__imp__sub_833681A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833681D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833681d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833681D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833681E0"))) PPC_WEAK_FUNC(sub_833681E0);
PPC_FUNC_IMPL(__imp__sub_833681E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368210:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368210;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368220"))) PPC_WEAK_FUNC(sub_83368220);
PPC_FUNC_IMPL(__imp__sub_83368220) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368250:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368250;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368260"))) PPC_WEAK_FUNC(sub_83368260);
PPC_FUNC_IMPL(__imp__sub_83368260) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368290:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368290;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833682A0"))) PPC_WEAK_FUNC(sub_833682A0);
PPC_FUNC_IMPL(__imp__sub_833682A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833682D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833682d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833682D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833682E0"))) PPC_WEAK_FUNC(sub_833682E0);
PPC_FUNC_IMPL(__imp__sub_833682E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368310:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368310;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368320"))) PPC_WEAK_FUNC(sub_83368320);
PPC_FUNC_IMPL(__imp__sub_83368320) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368350:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368350;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368360"))) PPC_WEAK_FUNC(sub_83368360);
PPC_FUNC_IMPL(__imp__sub_83368360) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368390:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368390
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368390;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833683A0"))) PPC_WEAK_FUNC(sub_833683A0);
PPC_FUNC_IMPL(__imp__sub_833683A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833683D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833683d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833683D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833683E0"))) PPC_WEAK_FUNC(sub_833683E0);
PPC_FUNC_IMPL(__imp__sub_833683E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368410:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368410;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368420"))) PPC_WEAK_FUNC(sub_83368420);
PPC_FUNC_IMPL(__imp__sub_83368420) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368450:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368450;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368460"))) PPC_WEAK_FUNC(sub_83368460);
PPC_FUNC_IMPL(__imp__sub_83368460) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368490:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368490;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833684A0"))) PPC_WEAK_FUNC(sub_833684A0);
PPC_FUNC_IMPL(__imp__sub_833684A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833684D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833684d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833684D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833684E0"))) PPC_WEAK_FUNC(sub_833684E0);
PPC_FUNC_IMPL(__imp__sub_833684E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368510:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368510;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368520"))) PPC_WEAK_FUNC(sub_83368520);
PPC_FUNC_IMPL(__imp__sub_83368520) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368550:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368550;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368560"))) PPC_WEAK_FUNC(sub_83368560);
PPC_FUNC_IMPL(__imp__sub_83368560) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368590:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368590;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833685A0"))) PPC_WEAK_FUNC(sub_833685A0);
PPC_FUNC_IMPL(__imp__sub_833685A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833685D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833685d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833685D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833685E0"))) PPC_WEAK_FUNC(sub_833685E0);
PPC_FUNC_IMPL(__imp__sub_833685E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368610:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368610;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368620"))) PPC_WEAK_FUNC(sub_83368620);
PPC_FUNC_IMPL(__imp__sub_83368620) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368650:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368650;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368660"))) PPC_WEAK_FUNC(sub_83368660);
PPC_FUNC_IMPL(__imp__sub_83368660) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368690:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368690;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833686A0"))) PPC_WEAK_FUNC(sub_833686A0);
PPC_FUNC_IMPL(__imp__sub_833686A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833686D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833686d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833686D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833686E0"))) PPC_WEAK_FUNC(sub_833686E0);
PPC_FUNC_IMPL(__imp__sub_833686E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368710:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368710;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368720"))) PPC_WEAK_FUNC(sub_83368720);
PPC_FUNC_IMPL(__imp__sub_83368720) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368750:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368750;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368760"))) PPC_WEAK_FUNC(sub_83368760);
PPC_FUNC_IMPL(__imp__sub_83368760) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368790:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368790;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833687A0"))) PPC_WEAK_FUNC(sub_833687A0);
PPC_FUNC_IMPL(__imp__sub_833687A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833687D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833687d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833687D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833687E0"))) PPC_WEAK_FUNC(sub_833687E0);
PPC_FUNC_IMPL(__imp__sub_833687E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368810:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368810;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368820"))) PPC_WEAK_FUNC(sub_83368820);
PPC_FUNC_IMPL(__imp__sub_83368820) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368850:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368850;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368860"))) PPC_WEAK_FUNC(sub_83368860);
PPC_FUNC_IMPL(__imp__sub_83368860) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368890:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368890;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833688A0"))) PPC_WEAK_FUNC(sub_833688A0);
PPC_FUNC_IMPL(__imp__sub_833688A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833688D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833688d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833688D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833688E0"))) PPC_WEAK_FUNC(sub_833688E0);
PPC_FUNC_IMPL(__imp__sub_833688E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368910:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368910;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83368920"))) PPC_WEAK_FUNC(sub_83368920);
PPC_FUNC_IMPL(__imp__sub_83368920) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83368950:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83368950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83368950;
	// blr 
	return;
}

