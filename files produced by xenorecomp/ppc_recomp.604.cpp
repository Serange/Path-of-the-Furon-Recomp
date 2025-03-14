#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8337AAE8"))) PPC_WEAK_FUNC(sub_8337AAE8);
PPC_FUNC_IMPL(__imp__sub_8337AAE8) {
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
	// bne cr6,0x8337ab28
	if (!ctx.cr6.eq) goto loc_8337AB28;
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
loc_8337AB1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ab1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337AB1C;
loc_8337AB28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,776(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 776);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337ab58
	if (ctx.cr6.eq) goto loc_8337AB58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,194
	ctx.r11.s64 = 194;
	// lwz r10,21300(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21300);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,776(r8)
	PPC_STORE_U32(ctx.r8.u32 + 776, ctx.r10.u32);
	// blr 
	return;
loc_8337AB58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21300);
	// stw r11,776(r8)
	PPC_STORE_U32(ctx.r8.u32 + 776, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337AB68"))) PPC_WEAK_FUNC(sub_8337AB68);
PPC_FUNC_IMPL(__imp__sub_8337AB68) {
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
	// bne cr6,0x8337aba8
	if (!ctx.cr6.eq) goto loc_8337ABA8;
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
loc_8337AB9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ab9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337AB9C;
loc_8337ABA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,780(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 780);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337abd8
	if (ctx.cr6.eq) goto loc_8337ABD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,195
	ctx.r11.s64 = 195;
	// lwz r10,21304(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21304);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,780(r8)
	PPC_STORE_U32(ctx.r8.u32 + 780, ctx.r10.u32);
	// blr 
	return;
loc_8337ABD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21304);
	// stw r11,780(r8)
	PPC_STORE_U32(ctx.r8.u32 + 780, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337ABE8"))) PPC_WEAK_FUNC(sub_8337ABE8);
PPC_FUNC_IMPL(__imp__sub_8337ABE8) {
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
	// bne cr6,0x8337ac28
	if (!ctx.cr6.eq) goto loc_8337AC28;
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
loc_8337AC1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ac1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337AC1C;
loc_8337AC28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,976(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 976);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337ac58
	if (ctx.cr6.eq) goto loc_8337AC58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,244
	ctx.r11.s64 = 244;
	// lwz r10,21308(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21308);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,976(r8)
	PPC_STORE_U32(ctx.r8.u32 + 976, ctx.r10.u32);
	// blr 
	return;
loc_8337AC58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21308);
	// stw r11,976(r8)
	PPC_STORE_U32(ctx.r8.u32 + 976, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337AC68"))) PPC_WEAK_FUNC(sub_8337AC68);
PPC_FUNC_IMPL(__imp__sub_8337AC68) {
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
	// bne cr6,0x8337aca8
	if (!ctx.cr6.eq) goto loc_8337ACA8;
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
loc_8337AC9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ac9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337AC9C;
loc_8337ACA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,980(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 980);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337acd8
	if (ctx.cr6.eq) goto loc_8337ACD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,245
	ctx.r11.s64 = 245;
	// lwz r10,21312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21312);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,980(r8)
	PPC_STORE_U32(ctx.r8.u32 + 980, ctx.r10.u32);
	// blr 
	return;
loc_8337ACD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21312);
	// stw r11,980(r8)
	PPC_STORE_U32(ctx.r8.u32 + 980, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337ACE8"))) PPC_WEAK_FUNC(sub_8337ACE8);
PPC_FUNC_IMPL(__imp__sub_8337ACE8) {
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
	// bne cr6,0x8337ad28
	if (!ctx.cr6.eq) goto loc_8337AD28;
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
loc_8337AD1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ad1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337AD1C;
loc_8337AD28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,984(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 984);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337ad58
	if (ctx.cr6.eq) goto loc_8337AD58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,246
	ctx.r11.s64 = 246;
	// lwz r10,21316(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21316);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,984(r8)
	PPC_STORE_U32(ctx.r8.u32 + 984, ctx.r10.u32);
	// blr 
	return;
loc_8337AD58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21316);
	// stw r11,984(r8)
	PPC_STORE_U32(ctx.r8.u32 + 984, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337AD68"))) PPC_WEAK_FUNC(sub_8337AD68);
PPC_FUNC_IMPL(__imp__sub_8337AD68) {
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
	// bne cr6,0x8337ada8
	if (!ctx.cr6.eq) goto loc_8337ADA8;
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
loc_8337AD9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ad9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337AD9C;
loc_8337ADA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,988(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 988);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337add8
	if (ctx.cr6.eq) goto loc_8337ADD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,247
	ctx.r11.s64 = 247;
	// lwz r10,21320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21320);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,988(r8)
	PPC_STORE_U32(ctx.r8.u32 + 988, ctx.r10.u32);
	// blr 
	return;
loc_8337ADD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21320);
	// stw r11,988(r8)
	PPC_STORE_U32(ctx.r8.u32 + 988, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337ADE8"))) PPC_WEAK_FUNC(sub_8337ADE8);
PPC_FUNC_IMPL(__imp__sub_8337ADE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337AE18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ae18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337AE18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337AE28"))) PPC_WEAK_FUNC(sub_8337AE28);
PPC_FUNC_IMPL(__imp__sub_8337AE28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337AE58:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ae58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337AE58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337AE68"))) PPC_WEAK_FUNC(sub_8337AE68);
PPC_FUNC_IMPL(__imp__sub_8337AE68) {
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
	// bne cr6,0x8337aea8
	if (!ctx.cr6.eq) goto loc_8337AEA8;
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
loc_8337AE9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ae9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337AE9C;
loc_8337AEA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 136);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337aed8
	if (ctx.cr6.eq) goto loc_8337AED8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,34
	ctx.r11.s64 = 34;
	// lwz r10,21332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21332);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 136, ctx.r10.u32);
	// blr 
	return;
loc_8337AED8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21332);
	// stw r11,136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337AEE8"))) PPC_WEAK_FUNC(sub_8337AEE8);
PPC_FUNC_IMPL(__imp__sub_8337AEE8) {
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
	// bne cr6,0x8337af28
	if (!ctx.cr6.eq) goto loc_8337AF28;
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
loc_8337AF1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337af1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337AF1C;
loc_8337AF28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,140(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337af58
	if (ctx.cr6.eq) goto loc_8337AF58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,35
	ctx.r11.s64 = 35;
	// lwz r10,21336(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21336);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 140, ctx.r10.u32);
	// blr 
	return;
loc_8337AF58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21336);
	// stw r11,140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 140, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337AF68"))) PPC_WEAK_FUNC(sub_8337AF68);
PPC_FUNC_IMPL(__imp__sub_8337AF68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337AF98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337af98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337AF98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337AFA8"))) PPC_WEAK_FUNC(sub_8337AFA8);
PPC_FUNC_IMPL(__imp__sub_8337AFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337AFD8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337afd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337AFD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337AFE8"))) PPC_WEAK_FUNC(sub_8337AFE8);
PPC_FUNC_IMPL(__imp__sub_8337AFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B018:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B018;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B028"))) PPC_WEAK_FUNC(sub_8337B028);
PPC_FUNC_IMPL(__imp__sub_8337B028) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B058:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b058
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B058;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B068"))) PPC_WEAK_FUNC(sub_8337B068);
PPC_FUNC_IMPL(__imp__sub_8337B068) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B098:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B098;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B0A8"))) PPC_WEAK_FUNC(sub_8337B0A8);
PPC_FUNC_IMPL(__imp__sub_8337B0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337b0e8
	if (!ctx.cr6.eq) goto loc_8337B0E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B0DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b0dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B0DC;
loc_8337B0E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,308(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 308);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337b118
	if (ctx.cr6.eq) goto loc_8337B118;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,77
	ctx.r11.s64 = 77;
	// lwz r10,21356(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21356);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,308(r8)
	PPC_STORE_U32(ctx.r8.u32 + 308, ctx.r10.u32);
	// blr 
	return;
loc_8337B118:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21356);
	// stw r11,308(r8)
	PPC_STORE_U32(ctx.r8.u32 + 308, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B128"))) PPC_WEAK_FUNC(sub_8337B128);
PPC_FUNC_IMPL(__imp__sub_8337B128) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B158:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B158;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B168"))) PPC_WEAK_FUNC(sub_8337B168);
PPC_FUNC_IMPL(__imp__sub_8337B168) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337b1a8
	if (!ctx.cr6.eq) goto loc_8337B1A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B19C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b19c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B19C;
loc_8337B1A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,312(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 312);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337b1d8
	if (ctx.cr6.eq) goto loc_8337B1D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,78
	ctx.r11.s64 = 78;
	// lwz r10,21360(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21360);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,312(r8)
	PPC_STORE_U32(ctx.r8.u32 + 312, ctx.r10.u32);
	// blr 
	return;
loc_8337B1D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21360);
	// stw r11,312(r8)
	PPC_STORE_U32(ctx.r8.u32 + 312, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B1E8"))) PPC_WEAK_FUNC(sub_8337B1E8);
PPC_FUNC_IMPL(__imp__sub_8337B1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B218:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B218;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B228"))) PPC_WEAK_FUNC(sub_8337B228);
PPC_FUNC_IMPL(__imp__sub_8337B228) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337b268
	if (!ctx.cr6.eq) goto loc_8337B268;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B25C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b25c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B25C;
loc_8337B268:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,316(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 316);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337b298
	if (ctx.cr6.eq) goto loc_8337B298;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,79
	ctx.r11.s64 = 79;
	// lwz r10,21364(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21364);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,316(r8)
	PPC_STORE_U32(ctx.r8.u32 + 316, ctx.r10.u32);
	// blr 
	return;
loc_8337B298:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21364);
	// stw r11,316(r8)
	PPC_STORE_U32(ctx.r8.u32 + 316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B2A8"))) PPC_WEAK_FUNC(sub_8337B2A8);
PPC_FUNC_IMPL(__imp__sub_8337B2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B2D8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b2d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B2D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B2E8"))) PPC_WEAK_FUNC(sub_8337B2E8);
PPC_FUNC_IMPL(__imp__sub_8337B2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337b328
	if (!ctx.cr6.eq) goto loc_8337B328;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B31C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b31c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B31C;
loc_8337B328:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,352(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 352);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337b358
	if (ctx.cr6.eq) goto loc_8337B358;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,88
	ctx.r11.s64 = 88;
	// lwz r10,21368(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21368);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,352(r8)
	PPC_STORE_U32(ctx.r8.u32 + 352, ctx.r10.u32);
	// blr 
	return;
loc_8337B358:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21368);
	// stw r11,352(r8)
	PPC_STORE_U32(ctx.r8.u32 + 352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B368"))) PPC_WEAK_FUNC(sub_8337B368);
PPC_FUNC_IMPL(__imp__sub_8337B368) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B398:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B398;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B3A8"))) PPC_WEAK_FUNC(sub_8337B3A8);
PPC_FUNC_IMPL(__imp__sub_8337B3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337b3e8
	if (!ctx.cr6.eq) goto loc_8337B3E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B3DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b3dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B3DC;
loc_8337B3E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,320(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 320);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337b418
	if (ctx.cr6.eq) goto loc_8337B418;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,80
	ctx.r11.s64 = 80;
	// lwz r10,21372(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21372);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 320, ctx.r10.u32);
	// blr 
	return;
loc_8337B418:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21372);
	// stw r11,320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B428"))) PPC_WEAK_FUNC(sub_8337B428);
PPC_FUNC_IMPL(__imp__sub_8337B428) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B458:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b458
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B458;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B468"))) PPC_WEAK_FUNC(sub_8337B468);
PPC_FUNC_IMPL(__imp__sub_8337B468) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337b4a8
	if (!ctx.cr6.eq) goto loc_8337B4A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B49C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b49c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B49C;
loc_8337B4A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,324(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 324);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337b4d8
	if (ctx.cr6.eq) goto loc_8337B4D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,81
	ctx.r11.s64 = 81;
	// lwz r10,21376(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21376);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 324, ctx.r10.u32);
	// blr 
	return;
loc_8337B4D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21376);
	// stw r11,324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B4E8"))) PPC_WEAK_FUNC(sub_8337B4E8);
PPC_FUNC_IMPL(__imp__sub_8337B4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B518:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B518;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B528"))) PPC_WEAK_FUNC(sub_8337B528);
PPC_FUNC_IMPL(__imp__sub_8337B528) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337b568
	if (!ctx.cr6.eq) goto loc_8337B568;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B55C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b55c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B55C;
loc_8337B568:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,228(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 228);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337b598
	if (ctx.cr6.eq) goto loc_8337B598;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,57
	ctx.r11.s64 = 57;
	// lwz r10,21380(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21380);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 228, ctx.r10.u32);
	// blr 
	return;
loc_8337B598:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21380);
	// stw r11,228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 228, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B5A8"))) PPC_WEAK_FUNC(sub_8337B5A8);
PPC_FUNC_IMPL(__imp__sub_8337B5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B5D8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b5d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B5D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B5E8"))) PPC_WEAK_FUNC(sub_8337B5E8);
PPC_FUNC_IMPL(__imp__sub_8337B5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337b628
	if (!ctx.cr6.eq) goto loc_8337B628;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337B61C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b61c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B61C;
loc_8337B628:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,356(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 356);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337b658
	if (ctx.cr6.eq) goto loc_8337B658;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,89
	ctx.r11.s64 = 89;
	// lwz r10,21384(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21384);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,356(r8)
	PPC_STORE_U32(ctx.r8.u32 + 356, ctx.r10.u32);
	// blr 
	return;
loc_8337B658:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21384);
	// stw r11,356(r8)
	PPC_STORE_U32(ctx.r8.u32 + 356, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B668"))) PPC_WEAK_FUNC(sub_8337B668);
PPC_FUNC_IMPL(__imp__sub_8337B668) {
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
	// bne cr6,0x8337b6a8
	if (!ctx.cr6.eq) goto loc_8337B6A8;
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
loc_8337B69C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b69c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B69C;
loc_8337B6A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,844(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 844);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337b6d8
	if (ctx.cr6.eq) goto loc_8337B6D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,211
	ctx.r11.s64 = 211;
	// lwz r10,21388(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21388);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,844(r8)
	PPC_STORE_U32(ctx.r8.u32 + 844, ctx.r10.u32);
	// blr 
	return;
loc_8337B6D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21388);
	// stw r11,844(r8)
	PPC_STORE_U32(ctx.r8.u32 + 844, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B6E8"))) PPC_WEAK_FUNC(sub_8337B6E8);
PPC_FUNC_IMPL(__imp__sub_8337B6E8) {
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
	// bne cr6,0x8337b728
	if (!ctx.cr6.eq) goto loc_8337B728;
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
loc_8337B71C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b71c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B71C;
loc_8337B728:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,848(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 848);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337b758
	if (ctx.cr6.eq) goto loc_8337B758;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,212
	ctx.r11.s64 = 212;
	// lwz r10,21392(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21392);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,848(r8)
	PPC_STORE_U32(ctx.r8.u32 + 848, ctx.r10.u32);
	// blr 
	return;
loc_8337B758:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21392);
	// stw r11,848(r8)
	PPC_STORE_U32(ctx.r8.u32 + 848, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B768"))) PPC_WEAK_FUNC(sub_8337B768);
PPC_FUNC_IMPL(__imp__sub_8337B768) {
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
	// bne cr6,0x8337b7a8
	if (!ctx.cr6.eq) goto loc_8337B7A8;
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
loc_8337B79C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b79c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B79C;
loc_8337B7A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,852(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 852);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337b7d8
	if (ctx.cr6.eq) goto loc_8337B7D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,213
	ctx.r11.s64 = 213;
	// lwz r10,21396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21396);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,852(r8)
	PPC_STORE_U32(ctx.r8.u32 + 852, ctx.r10.u32);
	// blr 
	return;
loc_8337B7D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21396);
	// stw r11,852(r8)
	PPC_STORE_U32(ctx.r8.u32 + 852, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B7E8"))) PPC_WEAK_FUNC(sub_8337B7E8);
PPC_FUNC_IMPL(__imp__sub_8337B7E8) {
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
	// bne cr6,0x8337b828
	if (!ctx.cr6.eq) goto loc_8337B828;
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
loc_8337B81C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b81c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B81C;
loc_8337B828:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1184(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1184);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337b858
	if (ctx.cr6.eq) goto loc_8337B858;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,296
	ctx.r11.s64 = 296;
	// lwz r10,21400(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21400);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1184, ctx.r10.u32);
	// blr 
	return;
loc_8337B858:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21400);
	// stw r11,1184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B868"))) PPC_WEAK_FUNC(sub_8337B868);
PPC_FUNC_IMPL(__imp__sub_8337B868) {
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
	// bne cr6,0x8337b8a8
	if (!ctx.cr6.eq) goto loc_8337B8A8;
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
loc_8337B89C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b89c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B89C;
loc_8337B8A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,856(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 856);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337b8d8
	if (ctx.cr6.eq) goto loc_8337B8D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,214
	ctx.r11.s64 = 214;
	// lwz r10,21404(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21404);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,856(r8)
	PPC_STORE_U32(ctx.r8.u32 + 856, ctx.r10.u32);
	// blr 
	return;
loc_8337B8D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21404);
	// stw r11,856(r8)
	PPC_STORE_U32(ctx.r8.u32 + 856, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B8E8"))) PPC_WEAK_FUNC(sub_8337B8E8);
PPC_FUNC_IMPL(__imp__sub_8337B8E8) {
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
	// bne cr6,0x8337b928
	if (!ctx.cr6.eq) goto loc_8337B928;
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
loc_8337B91C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b91c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B91C;
loc_8337B928:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,860(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 860);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337b958
	if (ctx.cr6.eq) goto loc_8337B958;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,215
	ctx.r11.s64 = 215;
	// lwz r10,21408(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21408);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,860(r8)
	PPC_STORE_U32(ctx.r8.u32 + 860, ctx.r10.u32);
	// blr 
	return;
loc_8337B958:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21408);
	// stw r11,860(r8)
	PPC_STORE_U32(ctx.r8.u32 + 860, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B968"))) PPC_WEAK_FUNC(sub_8337B968);
PPC_FUNC_IMPL(__imp__sub_8337B968) {
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
	// bne cr6,0x8337b9a8
	if (!ctx.cr6.eq) goto loc_8337B9A8;
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
loc_8337B99C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337b99c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337B99C;
loc_8337B9A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,864(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 864);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337b9d8
	if (ctx.cr6.eq) goto loc_8337B9D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,216
	ctx.r11.s64 = 216;
	// lwz r10,21412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21412);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,864(r8)
	PPC_STORE_U32(ctx.r8.u32 + 864, ctx.r10.u32);
	// blr 
	return;
loc_8337B9D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21412);
	// stw r11,864(r8)
	PPC_STORE_U32(ctx.r8.u32 + 864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337B9E8"))) PPC_WEAK_FUNC(sub_8337B9E8);
PPC_FUNC_IMPL(__imp__sub_8337B9E8) {
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
	// bne cr6,0x8337ba28
	if (!ctx.cr6.eq) goto loc_8337BA28;
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
loc_8337BA1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ba1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337BA1C;
loc_8337BA28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1100(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1100);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337ba58
	if (ctx.cr6.eq) goto loc_8337BA58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,275
	ctx.r11.s64 = 275;
	// lwz r10,21416(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21416);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1100, ctx.r10.u32);
	// blr 
	return;
loc_8337BA58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21416);
	// stw r11,1100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337BA68"))) PPC_WEAK_FUNC(sub_8337BA68);
PPC_FUNC_IMPL(__imp__sub_8337BA68) {
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
	// bne cr6,0x8337baa8
	if (!ctx.cr6.eq) goto loc_8337BAA8;
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
loc_8337BA9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ba9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337BA9C;
loc_8337BAA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1104);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337bad8
	if (ctx.cr6.eq) goto loc_8337BAD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,276
	ctx.r11.s64 = 276;
	// lwz r10,21420(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21420);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1104, ctx.r10.u32);
	// blr 
	return;
loc_8337BAD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21420);
	// stw r11,1104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337BAE8"))) PPC_WEAK_FUNC(sub_8337BAE8);
PPC_FUNC_IMPL(__imp__sub_8337BAE8) {
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
	// bne cr6,0x8337bb28
	if (!ctx.cr6.eq) goto loc_8337BB28;
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
loc_8337BB1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337bb1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337BB1C;
loc_8337BB28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,868(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 868);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337bb58
	if (ctx.cr6.eq) goto loc_8337BB58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,217
	ctx.r11.s64 = 217;
	// lwz r10,21424(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21424);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,868(r8)
	PPC_STORE_U32(ctx.r8.u32 + 868, ctx.r10.u32);
	// blr 
	return;
loc_8337BB58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21424);
	// stw r11,868(r8)
	PPC_STORE_U32(ctx.r8.u32 + 868, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337BB68"))) PPC_WEAK_FUNC(sub_8337BB68);
PPC_FUNC_IMPL(__imp__sub_8337BB68) {
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
	// bne cr6,0x8337bba8
	if (!ctx.cr6.eq) goto loc_8337BBA8;
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
loc_8337BB9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337bb9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337BB9C;
loc_8337BBA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 872);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337bbd8
	if (ctx.cr6.eq) goto loc_8337BBD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,218
	ctx.r11.s64 = 218;
	// lwz r10,21428(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21428);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,872(r8)
	PPC_STORE_U32(ctx.r8.u32 + 872, ctx.r10.u32);
	// blr 
	return;
loc_8337BBD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21428);
	// stw r11,872(r8)
	PPC_STORE_U32(ctx.r8.u32 + 872, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337BBE8"))) PPC_WEAK_FUNC(sub_8337BBE8);
PPC_FUNC_IMPL(__imp__sub_8337BBE8) {
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
	// bne cr6,0x8337bc28
	if (!ctx.cr6.eq) goto loc_8337BC28;
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
loc_8337BC1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337bc1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337BC1C;
loc_8337BC28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,876(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 876);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337bc58
	if (ctx.cr6.eq) goto loc_8337BC58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,219
	ctx.r11.s64 = 219;
	// lwz r10,21432(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21432);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,876(r8)
	PPC_STORE_U32(ctx.r8.u32 + 876, ctx.r10.u32);
	// blr 
	return;
loc_8337BC58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21432);
	// stw r11,876(r8)
	PPC_STORE_U32(ctx.r8.u32 + 876, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337BC68"))) PPC_WEAK_FUNC(sub_8337BC68);
PPC_FUNC_IMPL(__imp__sub_8337BC68) {
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
	// bne cr6,0x8337bca8
	if (!ctx.cr6.eq) goto loc_8337BCA8;
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
loc_8337BC9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337bc9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337BC9C;
loc_8337BCA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,880(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 880);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337bcd8
	if (ctx.cr6.eq) goto loc_8337BCD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,220
	ctx.r11.s64 = 220;
	// lwz r10,21436(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21436);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,880(r8)
	PPC_STORE_U32(ctx.r8.u32 + 880, ctx.r10.u32);
	// blr 
	return;
loc_8337BCD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21436);
	// stw r11,880(r8)
	PPC_STORE_U32(ctx.r8.u32 + 880, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337BCE8"))) PPC_WEAK_FUNC(sub_8337BCE8);
PPC_FUNC_IMPL(__imp__sub_8337BCE8) {
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
	// bne cr6,0x8337bd28
	if (!ctx.cr6.eq) goto loc_8337BD28;
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
loc_8337BD1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337bd1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337BD1C;
loc_8337BD28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,884(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 884);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337bd58
	if (ctx.cr6.eq) goto loc_8337BD58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,221
	ctx.r11.s64 = 221;
	// lwz r10,21440(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21440);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,884(r8)
	PPC_STORE_U32(ctx.r8.u32 + 884, ctx.r10.u32);
	// blr 
	return;
loc_8337BD58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21440);
	// stw r11,884(r8)
	PPC_STORE_U32(ctx.r8.u32 + 884, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337BD68"))) PPC_WEAK_FUNC(sub_8337BD68);
PPC_FUNC_IMPL(__imp__sub_8337BD68) {
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
	// bne cr6,0x8337bda8
	if (!ctx.cr6.eq) goto loc_8337BDA8;
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
loc_8337BD9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337bd9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337BD9C;
loc_8337BDA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1188(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1188);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337bdd8
	if (ctx.cr6.eq) goto loc_8337BDD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,297
	ctx.r11.s64 = 297;
	// lwz r10,21444(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21444);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1188, ctx.r10.u32);
	// blr 
	return;
loc_8337BDD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21444);
	// stw r11,1188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1188, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337BDE8"))) PPC_WEAK_FUNC(sub_8337BDE8);
PPC_FUNC_IMPL(__imp__sub_8337BDE8) {
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
	// bne cr6,0x8337be28
	if (!ctx.cr6.eq) goto loc_8337BE28;
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
loc_8337BE1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337be1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337BE1C;
loc_8337BE28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,888(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 888);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337be58
	if (ctx.cr6.eq) goto loc_8337BE58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,222
	ctx.r11.s64 = 222;
	// lwz r10,21448(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21448);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,888(r8)
	PPC_STORE_U32(ctx.r8.u32 + 888, ctx.r10.u32);
	// blr 
	return;
loc_8337BE58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21448);
	// stw r11,888(r8)
	PPC_STORE_U32(ctx.r8.u32 + 888, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337BE68"))) PPC_WEAK_FUNC(sub_8337BE68);
PPC_FUNC_IMPL(__imp__sub_8337BE68) {
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
	// bne cr6,0x8337bea8
	if (!ctx.cr6.eq) goto loc_8337BEA8;
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
loc_8337BE9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337be9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337BE9C;
loc_8337BEA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,892(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 892);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337bed8
	if (ctx.cr6.eq) goto loc_8337BED8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,223
	ctx.r11.s64 = 223;
	// lwz r10,21452(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21452);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,892(r8)
	PPC_STORE_U32(ctx.r8.u32 + 892, ctx.r10.u32);
	// blr 
	return;
loc_8337BED8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21452);
	// stw r11,892(r8)
	PPC_STORE_U32(ctx.r8.u32 + 892, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337BEE8"))) PPC_WEAK_FUNC(sub_8337BEE8);
PPC_FUNC_IMPL(__imp__sub_8337BEE8) {
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
	// bne cr6,0x8337bf28
	if (!ctx.cr6.eq) goto loc_8337BF28;
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
loc_8337BF1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337bf1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337BF1C;
loc_8337BF28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,896(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 896);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337bf58
	if (ctx.cr6.eq) goto loc_8337BF58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,224
	ctx.r11.s64 = 224;
	// lwz r10,21456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21456);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,896(r8)
	PPC_STORE_U32(ctx.r8.u32 + 896, ctx.r10.u32);
	// blr 
	return;
loc_8337BF58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21456);
	// stw r11,896(r8)
	PPC_STORE_U32(ctx.r8.u32 + 896, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337BF68"))) PPC_WEAK_FUNC(sub_8337BF68);
PPC_FUNC_IMPL(__imp__sub_8337BF68) {
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
	// bne cr6,0x8337bfa8
	if (!ctx.cr6.eq) goto loc_8337BFA8;
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
loc_8337BF9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337bf9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337BF9C;
loc_8337BFA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,900(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 900);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337bfd8
	if (ctx.cr6.eq) goto loc_8337BFD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,225
	ctx.r11.s64 = 225;
	// lwz r10,21460(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21460);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,900(r8)
	PPC_STORE_U32(ctx.r8.u32 + 900, ctx.r10.u32);
	// blr 
	return;
loc_8337BFD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21460);
	// stw r11,900(r8)
	PPC_STORE_U32(ctx.r8.u32 + 900, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337BFE8"))) PPC_WEAK_FUNC(sub_8337BFE8);
PPC_FUNC_IMPL(__imp__sub_8337BFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337C018:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C018;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C028"))) PPC_WEAK_FUNC(sub_8337C028);
PPC_FUNC_IMPL(__imp__sub_8337C028) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337C058:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c058
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C058;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C068"))) PPC_WEAK_FUNC(sub_8337C068);
PPC_FUNC_IMPL(__imp__sub_8337C068) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337C098:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C098;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C0A8"))) PPC_WEAK_FUNC(sub_8337C0A8);
PPC_FUNC_IMPL(__imp__sub_8337C0A8) {
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
	// bne cr6,0x8337c0e8
	if (!ctx.cr6.eq) goto loc_8337C0E8;
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
loc_8337C0DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c0dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C0DC;
loc_8337C0E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,904(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c118
	if (ctx.cr6.eq) goto loc_8337C118;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,226
	ctx.r11.s64 = 226;
	// lwz r10,21476(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21476);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,904(r8)
	PPC_STORE_U32(ctx.r8.u32 + 904, ctx.r10.u32);
	// blr 
	return;
loc_8337C118:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21476);
	// stw r11,904(r8)
	PPC_STORE_U32(ctx.r8.u32 + 904, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C128"))) PPC_WEAK_FUNC(sub_8337C128);
PPC_FUNC_IMPL(__imp__sub_8337C128) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337C158:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C158;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C168"))) PPC_WEAK_FUNC(sub_8337C168);
PPC_FUNC_IMPL(__imp__sub_8337C168) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337C198:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C198;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C1A8"))) PPC_WEAK_FUNC(sub_8337C1A8);
PPC_FUNC_IMPL(__imp__sub_8337C1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337C1D8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c1d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C1D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C1E8"))) PPC_WEAK_FUNC(sub_8337C1E8);
PPC_FUNC_IMPL(__imp__sub_8337C1E8) {
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
	// bne cr6,0x8337c228
	if (!ctx.cr6.eq) goto loc_8337C228;
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
loc_8337C21C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c21c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C21C;
loc_8337C228:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1008(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1008);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c258
	if (ctx.cr6.eq) goto loc_8337C258;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,252
	ctx.r11.s64 = 252;
	// lwz r10,21492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21492);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1008(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1008, ctx.r10.u32);
	// blr 
	return;
loc_8337C258:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21492);
	// stw r11,1008(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1008, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C268"))) PPC_WEAK_FUNC(sub_8337C268);
PPC_FUNC_IMPL(__imp__sub_8337C268) {
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
	// bne cr6,0x8337c2a8
	if (!ctx.cr6.eq) goto loc_8337C2A8;
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
loc_8337C29C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c29c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C29C;
loc_8337C2A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1280(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1280);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c2d8
	if (ctx.cr6.eq) goto loc_8337C2D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,320
	ctx.r11.s64 = 320;
	// lwz r10,21496(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21496);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1280, ctx.r10.u32);
	// blr 
	return;
loc_8337C2D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21496);
	// stw r11,1280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C2E8"))) PPC_WEAK_FUNC(sub_8337C2E8);
PPC_FUNC_IMPL(__imp__sub_8337C2E8) {
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
	// bne cr6,0x8337c328
	if (!ctx.cr6.eq) goto loc_8337C328;
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
loc_8337C31C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c31c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C31C;
loc_8337C328:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1200(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1200);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c358
	if (ctx.cr6.eq) goto loc_8337C358;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,300
	ctx.r11.s64 = 300;
	// lwz r10,21500(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21500);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1200(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1200, ctx.r10.u32);
	// blr 
	return;
loc_8337C358:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21500);
	// stw r11,1200(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C368"))) PPC_WEAK_FUNC(sub_8337C368);
PPC_FUNC_IMPL(__imp__sub_8337C368) {
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
	// bne cr6,0x8337c3a8
	if (!ctx.cr6.eq) goto loc_8337C3A8;
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
loc_8337C39C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c39c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C39C;
loc_8337C3A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,6000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6000);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c3d8
	if (ctx.cr6.eq) goto loc_8337C3D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,1500
	ctx.r11.s64 = 1500;
	// lwz r10,21504(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21504);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,6000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6000, ctx.r10.u32);
	// blr 
	return;
loc_8337C3D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21504);
	// stw r11,6000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6000, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C3E8"))) PPC_WEAK_FUNC(sub_8337C3E8);
PPC_FUNC_IMPL(__imp__sub_8337C3E8) {
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
	// bne cr6,0x8337c428
	if (!ctx.cr6.eq) goto loc_8337C428;
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
loc_8337C41C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c41c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C41C;
loc_8337C428:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,6004(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6004);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c458
	if (ctx.cr6.eq) goto loc_8337C458;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,1501
	ctx.r11.s64 = 1501;
	// lwz r10,21508(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21508);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,6004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6004, ctx.r10.u32);
	// blr 
	return;
loc_8337C458:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21508);
	// stw r11,6004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6004, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C468"))) PPC_WEAK_FUNC(sub_8337C468);
PPC_FUNC_IMPL(__imp__sub_8337C468) {
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
	// bne cr6,0x8337c4a8
	if (!ctx.cr6.eq) goto loc_8337C4A8;
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
loc_8337C49C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c49c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C49C;
loc_8337C4A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 568);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c4d8
	if (ctx.cr6.eq) goto loc_8337C4D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,142
	ctx.r11.s64 = 142;
	// lwz r10,21512(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21512);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 568, ctx.r10.u32);
	// blr 
	return;
loc_8337C4D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21512);
	// stw r11,568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C4E8"))) PPC_WEAK_FUNC(sub_8337C4E8);
PPC_FUNC_IMPL(__imp__sub_8337C4E8) {
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
	// bne cr6,0x8337c528
	if (!ctx.cr6.eq) goto loc_8337C528;
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
loc_8337C51C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c51c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C51C;
loc_8337C528:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,812(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 812);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c558
	if (ctx.cr6.eq) goto loc_8337C558;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,203
	ctx.r11.s64 = 203;
	// lwz r10,21516(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21516);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,812(r8)
	PPC_STORE_U32(ctx.r8.u32 + 812, ctx.r10.u32);
	// blr 
	return;
loc_8337C558:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21516);
	// stw r11,812(r8)
	PPC_STORE_U32(ctx.r8.u32 + 812, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C568"))) PPC_WEAK_FUNC(sub_8337C568);
PPC_FUNC_IMPL(__imp__sub_8337C568) {
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
	// bne cr6,0x8337c5a8
	if (!ctx.cr6.eq) goto loc_8337C5A8;
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
loc_8337C59C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C59C;
loc_8337C5A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1148(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1148);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c5d8
	if (ctx.cr6.eq) goto loc_8337C5D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,287
	ctx.r11.s64 = 287;
	// lwz r10,21520(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21520);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1148, ctx.r10.u32);
	// blr 
	return;
loc_8337C5D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21520);
	// stw r11,1148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1148, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C5E8"))) PPC_WEAK_FUNC(sub_8337C5E8);
PPC_FUNC_IMPL(__imp__sub_8337C5E8) {
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
	// bne cr6,0x8337c628
	if (!ctx.cr6.eq) goto loc_8337C628;
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
loc_8337C61C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c61c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C61C;
loc_8337C628:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1152);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c658
	if (ctx.cr6.eq) goto loc_8337C658;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,288
	ctx.r11.s64 = 288;
	// lwz r10,21524(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21524);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1152, ctx.r10.u32);
	// blr 
	return;
loc_8337C658:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21524);
	// stw r11,1152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C668"))) PPC_WEAK_FUNC(sub_8337C668);
PPC_FUNC_IMPL(__imp__sub_8337C668) {
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
	// bne cr6,0x8337c6a8
	if (!ctx.cr6.eq) goto loc_8337C6A8;
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
loc_8337C69C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c69c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C69C;
loc_8337C6A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1156(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1156);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c6d8
	if (ctx.cr6.eq) goto loc_8337C6D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,289
	ctx.r11.s64 = 289;
	// lwz r10,21528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21528);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1156, ctx.r10.u32);
	// blr 
	return;
loc_8337C6D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21528);
	// stw r11,1156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C6E8"))) PPC_WEAK_FUNC(sub_8337C6E8);
PPC_FUNC_IMPL(__imp__sub_8337C6E8) {
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
	// bne cr6,0x8337c728
	if (!ctx.cr6.eq) goto loc_8337C728;
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
loc_8337C71C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c71c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C71C;
loc_8337C728:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1160(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1160);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c758
	if (ctx.cr6.eq) goto loc_8337C758;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,290
	ctx.r11.s64 = 290;
	// lwz r10,21532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21532);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1160, ctx.r10.u32);
	// blr 
	return;
loc_8337C758:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21532);
	// stw r11,1160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1160, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C768"))) PPC_WEAK_FUNC(sub_8337C768);
PPC_FUNC_IMPL(__imp__sub_8337C768) {
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
	// bne cr6,0x8337c7a8
	if (!ctx.cr6.eq) goto loc_8337C7A8;
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
loc_8337C79C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c79c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C79C;
loc_8337C7A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1164(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1164);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c7d8
	if (ctx.cr6.eq) goto loc_8337C7D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,291
	ctx.r11.s64 = 291;
	// lwz r10,21536(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21536);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1164(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1164, ctx.r10.u32);
	// blr 
	return;
loc_8337C7D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21536);
	// stw r11,1164(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1164, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C7E8"))) PPC_WEAK_FUNC(sub_8337C7E8);
PPC_FUNC_IMPL(__imp__sub_8337C7E8) {
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
	// bne cr6,0x8337c828
	if (!ctx.cr6.eq) goto loc_8337C828;
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
loc_8337C81C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c81c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C81C;
loc_8337C828:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1264(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1264);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c858
	if (ctx.cr6.eq) goto loc_8337C858;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,316
	ctx.r11.s64 = 316;
	// lwz r10,21540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21540);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1264, ctx.r10.u32);
	// blr 
	return;
loc_8337C858:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21540);
	// stw r11,1264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C868"))) PPC_WEAK_FUNC(sub_8337C868);
PPC_FUNC_IMPL(__imp__sub_8337C868) {
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
	// bne cr6,0x8337c8a8
	if (!ctx.cr6.eq) goto loc_8337C8A8;
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
loc_8337C89C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c89c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C89C;
loc_8337C8A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1268(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1268);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c8d8
	if (ctx.cr6.eq) goto loc_8337C8D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,317
	ctx.r11.s64 = 317;
	// lwz r10,21544(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21544);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1268(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1268, ctx.r10.u32);
	// blr 
	return;
loc_8337C8D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21544);
	// stw r11,1268(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C8E8"))) PPC_WEAK_FUNC(sub_8337C8E8);
PPC_FUNC_IMPL(__imp__sub_8337C8E8) {
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
	// bne cr6,0x8337c928
	if (!ctx.cr6.eq) goto loc_8337C928;
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
loc_8337C91C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c91c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C91C;
loc_8337C928:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1272);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c958
	if (ctx.cr6.eq) goto loc_8337C958;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,318
	ctx.r11.s64 = 318;
	// lwz r10,21548(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21548);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1272, ctx.r10.u32);
	// blr 
	return;
loc_8337C958:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21548);
	// stw r11,1272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C968"))) PPC_WEAK_FUNC(sub_8337C968);
PPC_FUNC_IMPL(__imp__sub_8337C968) {
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
	// bne cr6,0x8337c9a8
	if (!ctx.cr6.eq) goto loc_8337C9A8;
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
loc_8337C99C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337c99c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337C99C;
loc_8337C9A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1276(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1276);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337c9d8
	if (ctx.cr6.eq) goto loc_8337C9D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,319
	ctx.r11.s64 = 319;
	// lwz r10,21552(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21552);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1276, ctx.r10.u32);
	// blr 
	return;
loc_8337C9D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21552);
	// stw r11,1276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337C9E8"))) PPC_WEAK_FUNC(sub_8337C9E8);
PPC_FUNC_IMPL(__imp__sub_8337C9E8) {
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
	// bne cr6,0x8337ca28
	if (!ctx.cr6.eq) goto loc_8337CA28;
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
loc_8337CA1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ca1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CA1C;
loc_8337CA28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,916(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 916);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337ca58
	if (ctx.cr6.eq) goto loc_8337CA58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,229
	ctx.r11.s64 = 229;
	// lwz r10,21556(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21556);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,916(r8)
	PPC_STORE_U32(ctx.r8.u32 + 916, ctx.r10.u32);
	// blr 
	return;
loc_8337CA58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21556);
	// stw r11,916(r8)
	PPC_STORE_U32(ctx.r8.u32 + 916, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CA68"))) PPC_WEAK_FUNC(sub_8337CA68);
PPC_FUNC_IMPL(__imp__sub_8337CA68) {
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
	// bne cr6,0x8337caa8
	if (!ctx.cr6.eq) goto loc_8337CAA8;
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
loc_8337CA9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ca9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CA9C;
loc_8337CAA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,920(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 920);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337cad8
	if (ctx.cr6.eq) goto loc_8337CAD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,230
	ctx.r11.s64 = 230;
	// lwz r10,21560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21560);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,920(r8)
	PPC_STORE_U32(ctx.r8.u32 + 920, ctx.r10.u32);
	// blr 
	return;
loc_8337CAD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21560);
	// stw r11,920(r8)
	PPC_STORE_U32(ctx.r8.u32 + 920, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CAE8"))) PPC_WEAK_FUNC(sub_8337CAE8);
PPC_FUNC_IMPL(__imp__sub_8337CAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CB18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337cb18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CB18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CB28"))) PPC_WEAK_FUNC(sub_8337CB28);
PPC_FUNC_IMPL(__imp__sub_8337CB28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CB58:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337cb58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CB58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CB68"))) PPC_WEAK_FUNC(sub_8337CB68);
PPC_FUNC_IMPL(__imp__sub_8337CB68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CB98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337cb98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CB98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CBA8"))) PPC_WEAK_FUNC(sub_8337CBA8);
PPC_FUNC_IMPL(__imp__sub_8337CBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CBD8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337cbd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CBD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CBE8"))) PPC_WEAK_FUNC(sub_8337CBE8);
PPC_FUNC_IMPL(__imp__sub_8337CBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CC18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337cc18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CC18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CC28"))) PPC_WEAK_FUNC(sub_8337CC28);
PPC_FUNC_IMPL(__imp__sub_8337CC28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CC58:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337cc58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CC58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CC68"))) PPC_WEAK_FUNC(sub_8337CC68);
PPC_FUNC_IMPL(__imp__sub_8337CC68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CC98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337cc98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CC98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CCA8"))) PPC_WEAK_FUNC(sub_8337CCA8);
PPC_FUNC_IMPL(__imp__sub_8337CCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CCD8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ccd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CCD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CCE8"))) PPC_WEAK_FUNC(sub_8337CCE8);
PPC_FUNC_IMPL(__imp__sub_8337CCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CD18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337cd18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CD18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CD28"))) PPC_WEAK_FUNC(sub_8337CD28);
PPC_FUNC_IMPL(__imp__sub_8337CD28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CD58:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337cd58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CD58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CD68"))) PPC_WEAK_FUNC(sub_8337CD68);
PPC_FUNC_IMPL(__imp__sub_8337CD68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CD98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337cd98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CD98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CDA8"))) PPC_WEAK_FUNC(sub_8337CDA8);
PPC_FUNC_IMPL(__imp__sub_8337CDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CDD8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337cdd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CDD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CDE8"))) PPC_WEAK_FUNC(sub_8337CDE8);
PPC_FUNC_IMPL(__imp__sub_8337CDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CE18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ce18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CE18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CE28"))) PPC_WEAK_FUNC(sub_8337CE28);
PPC_FUNC_IMPL(__imp__sub_8337CE28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CE58:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ce58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CE58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CE68"))) PPC_WEAK_FUNC(sub_8337CE68);
PPC_FUNC_IMPL(__imp__sub_8337CE68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CE98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ce98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CE98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CEA8"))) PPC_WEAK_FUNC(sub_8337CEA8);
PPC_FUNC_IMPL(__imp__sub_8337CEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CED8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ced8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CED8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CEE8"))) PPC_WEAK_FUNC(sub_8337CEE8);
PPC_FUNC_IMPL(__imp__sub_8337CEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337CF18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337cf18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CF18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CF28"))) PPC_WEAK_FUNC(sub_8337CF28);
PPC_FUNC_IMPL(__imp__sub_8337CF28) {
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
	// bne cr6,0x8337cf68
	if (!ctx.cr6.eq) goto loc_8337CF68;
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
loc_8337CF5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337cf5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CF5C;
loc_8337CF68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1080(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1080);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337cf98
	if (ctx.cr6.eq) goto loc_8337CF98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,270
	ctx.r11.s64 = 270;
	// lwz r10,21632(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21632);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1080(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1080, ctx.r10.u32);
	// blr 
	return;
loc_8337CF98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21632);
	// stw r11,1080(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1080, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337CFA8"))) PPC_WEAK_FUNC(sub_8337CFA8);
PPC_FUNC_IMPL(__imp__sub_8337CFA8) {
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
	// bne cr6,0x8337cfe8
	if (!ctx.cr6.eq) goto loc_8337CFE8;
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
loc_8337CFDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337cfdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337CFDC;
loc_8337CFE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1084(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1084);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d018
	if (ctx.cr6.eq) goto loc_8337D018;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,271
	ctx.r11.s64 = 271;
	// lwz r10,21636(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21636);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1084(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1084, ctx.r10.u32);
	// blr 
	return;
loc_8337D018:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21636);
	// stw r11,1084(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1084, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D028"))) PPC_WEAK_FUNC(sub_8337D028);
PPC_FUNC_IMPL(__imp__sub_8337D028) {
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
	// bne cr6,0x8337d068
	if (!ctx.cr6.eq) goto loc_8337D068;
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
loc_8337D05C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d05c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D05C;
loc_8337D068:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,56(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d098
	if (ctx.cr6.eq) goto loc_8337D098;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,14
	ctx.r11.s64 = 14;
	// lwz r10,21640(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21640);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r10.u32);
	// blr 
	return;
loc_8337D098:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21640);
	// stw r11,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D0A8"))) PPC_WEAK_FUNC(sub_8337D0A8);
PPC_FUNC_IMPL(__imp__sub_8337D0A8) {
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
	// bne cr6,0x8337d0e8
	if (!ctx.cr6.eq) goto loc_8337D0E8;
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
loc_8337D0DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d0dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D0DC;
loc_8337D0E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 448);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d118
	if (ctx.cr6.eq) goto loc_8337D118;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,112
	ctx.r11.s64 = 112;
	// lwz r10,21644(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21644);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,448(r8)
	PPC_STORE_U32(ctx.r8.u32 + 448, ctx.r10.u32);
	// blr 
	return;
loc_8337D118:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21644);
	// stw r11,448(r8)
	PPC_STORE_U32(ctx.r8.u32 + 448, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D128"))) PPC_WEAK_FUNC(sub_8337D128);
PPC_FUNC_IMPL(__imp__sub_8337D128) {
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
	// bne cr6,0x8337d168
	if (!ctx.cr6.eq) goto loc_8337D168;
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
loc_8337D15C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d15c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D15C;
loc_8337D168:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 672);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d198
	if (ctx.cr6.eq) goto loc_8337D198;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,168
	ctx.r11.s64 = 168;
	// lwz r10,21648(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21648);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,672(r8)
	PPC_STORE_U32(ctx.r8.u32 + 672, ctx.r10.u32);
	// blr 
	return;
loc_8337D198:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21648);
	// stw r11,672(r8)
	PPC_STORE_U32(ctx.r8.u32 + 672, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D1A8"))) PPC_WEAK_FUNC(sub_8337D1A8);
PPC_FUNC_IMPL(__imp__sub_8337D1A8) {
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
	// bne cr6,0x8337d1e8
	if (!ctx.cr6.eq) goto loc_8337D1E8;
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
loc_8337D1DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d1dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D1DC;
loc_8337D1E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,460(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 460);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d218
	if (ctx.cr6.eq) goto loc_8337D218;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,115
	ctx.r11.s64 = 115;
	// lwz r10,21652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21652);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,460(r8)
	PPC_STORE_U32(ctx.r8.u32 + 460, ctx.r10.u32);
	// blr 
	return;
loc_8337D218:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21652);
	// stw r11,460(r8)
	PPC_STORE_U32(ctx.r8.u32 + 460, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D228"))) PPC_WEAK_FUNC(sub_8337D228);
PPC_FUNC_IMPL(__imp__sub_8337D228) {
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
	// bne cr6,0x8337d268
	if (!ctx.cr6.eq) goto loc_8337D268;
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
loc_8337D25C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d25c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D25C;
loc_8337D268:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,464(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 464);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d298
	if (ctx.cr6.eq) goto loc_8337D298;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,116
	ctx.r11.s64 = 116;
	// lwz r10,21656(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21656);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 464, ctx.r10.u32);
	// blr 
	return;
loc_8337D298:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21656);
	// stw r11,464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 464, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D2A8"))) PPC_WEAK_FUNC(sub_8337D2A8);
PPC_FUNC_IMPL(__imp__sub_8337D2A8) {
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
	// bne cr6,0x8337d2e8
	if (!ctx.cr6.eq) goto loc_8337D2E8;
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
loc_8337D2DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d2dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D2DC;
loc_8337D2E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 480);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d318
	if (ctx.cr6.eq) goto loc_8337D318;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,120
	ctx.r11.s64 = 120;
	// lwz r10,21660(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21660);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,480(r8)
	PPC_STORE_U32(ctx.r8.u32 + 480, ctx.r10.u32);
	// blr 
	return;
loc_8337D318:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21660);
	// stw r11,480(r8)
	PPC_STORE_U32(ctx.r8.u32 + 480, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D328"))) PPC_WEAK_FUNC(sub_8337D328);
PPC_FUNC_IMPL(__imp__sub_8337D328) {
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
	// bne cr6,0x8337d368
	if (!ctx.cr6.eq) goto loc_8337D368;
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
loc_8337D35C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d35c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D35C;
loc_8337D368:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,484(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 484);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d398
	if (ctx.cr6.eq) goto loc_8337D398;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,121
	ctx.r11.s64 = 121;
	// lwz r10,21664(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21664);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,484(r8)
	PPC_STORE_U32(ctx.r8.u32 + 484, ctx.r10.u32);
	// blr 
	return;
loc_8337D398:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21664);
	// stw r11,484(r8)
	PPC_STORE_U32(ctx.r8.u32 + 484, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D3A8"))) PPC_WEAK_FUNC(sub_8337D3A8);
PPC_FUNC_IMPL(__imp__sub_8337D3A8) {
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
	// bne cr6,0x8337d3e8
	if (!ctx.cr6.eq) goto loc_8337D3E8;
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
loc_8337D3DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d3dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D3DC;
loc_8337D3E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,488(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 488);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d418
	if (ctx.cr6.eq) goto loc_8337D418;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,122
	ctx.r11.s64 = 122;
	// lwz r10,21668(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21668);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,488(r8)
	PPC_STORE_U32(ctx.r8.u32 + 488, ctx.r10.u32);
	// blr 
	return;
loc_8337D418:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21668);
	// stw r11,488(r8)
	PPC_STORE_U32(ctx.r8.u32 + 488, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D428"))) PPC_WEAK_FUNC(sub_8337D428);
PPC_FUNC_IMPL(__imp__sub_8337D428) {
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
	// bne cr6,0x8337d468
	if (!ctx.cr6.eq) goto loc_8337D468;
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
loc_8337D45C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d45c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D45C;
loc_8337D468:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,492(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 492);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d498
	if (ctx.cr6.eq) goto loc_8337D498;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,123
	ctx.r11.s64 = 123;
	// lwz r10,21672(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21672);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 492, ctx.r10.u32);
	// blr 
	return;
loc_8337D498:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21672);
	// stw r11,492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 492, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D4A8"))) PPC_WEAK_FUNC(sub_8337D4A8);
PPC_FUNC_IMPL(__imp__sub_8337D4A8) {
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
	// bne cr6,0x8337d4e8
	if (!ctx.cr6.eq) goto loc_8337D4E8;
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
loc_8337D4DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d4dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D4DC;
loc_8337D4E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,496(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 496);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d518
	if (ctx.cr6.eq) goto loc_8337D518;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,124
	ctx.r11.s64 = 124;
	// lwz r10,21676(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21676);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,496(r8)
	PPC_STORE_U32(ctx.r8.u32 + 496, ctx.r10.u32);
	// blr 
	return;
loc_8337D518:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21676);
	// stw r11,496(r8)
	PPC_STORE_U32(ctx.r8.u32 + 496, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D528"))) PPC_WEAK_FUNC(sub_8337D528);
PPC_FUNC_IMPL(__imp__sub_8337D528) {
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
	// bne cr6,0x8337d568
	if (!ctx.cr6.eq) goto loc_8337D568;
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
loc_8337D55C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d55c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D55C;
loc_8337D568:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1288(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1288);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d598
	if (ctx.cr6.eq) goto loc_8337D598;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,322
	ctx.r11.s64 = 322;
	// lwz r10,21680(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21680);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1288(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1288, ctx.r10.u32);
	// blr 
	return;
loc_8337D598:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21680);
	// stw r11,1288(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1288, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D5A8"))) PPC_WEAK_FUNC(sub_8337D5A8);
PPC_FUNC_IMPL(__imp__sub_8337D5A8) {
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
	// bne cr6,0x8337d5e8
	if (!ctx.cr6.eq) goto loc_8337D5E8;
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
loc_8337D5DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d5dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D5DC;
loc_8337D5E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1292(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1292);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d618
	if (ctx.cr6.eq) goto loc_8337D618;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,323
	ctx.r11.s64 = 323;
	// lwz r10,21684(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21684);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1292, ctx.r10.u32);
	// blr 
	return;
loc_8337D618:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21684);
	// stw r11,1292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D628"))) PPC_WEAK_FUNC(sub_8337D628);
PPC_FUNC_IMPL(__imp__sub_8337D628) {
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
	// bne cr6,0x8337d668
	if (!ctx.cr6.eq) goto loc_8337D668;
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
loc_8337D65C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d65c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D65C;
loc_8337D668:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1296(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1296);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d698
	if (ctx.cr6.eq) goto loc_8337D698;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,324
	ctx.r11.s64 = 324;
	// lwz r10,21688(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21688);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1296, ctx.r10.u32);
	// blr 
	return;
loc_8337D698:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21688);
	// stw r11,1296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D6A8"))) PPC_WEAK_FUNC(sub_8337D6A8);
PPC_FUNC_IMPL(__imp__sub_8337D6A8) {
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
	// bne cr6,0x8337d6e8
	if (!ctx.cr6.eq) goto loc_8337D6E8;
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
loc_8337D6DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d6dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D6DC;
loc_8337D6E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 500);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d718
	if (ctx.cr6.eq) goto loc_8337D718;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,125
	ctx.r11.s64 = 125;
	// lwz r10,21692(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21692);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,500(r8)
	PPC_STORE_U32(ctx.r8.u32 + 500, ctx.r10.u32);
	// blr 
	return;
loc_8337D718:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21692);
	// stw r11,500(r8)
	PPC_STORE_U32(ctx.r8.u32 + 500, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D728"))) PPC_WEAK_FUNC(sub_8337D728);
PPC_FUNC_IMPL(__imp__sub_8337D728) {
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
	// bne cr6,0x8337d768
	if (!ctx.cr6.eq) goto loc_8337D768;
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
loc_8337D75C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d75c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D75C;
loc_8337D768:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 504);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d798
	if (ctx.cr6.eq) goto loc_8337D798;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,126
	ctx.r11.s64 = 126;
	// lwz r10,21696(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21696);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,504(r8)
	PPC_STORE_U32(ctx.r8.u32 + 504, ctx.r10.u32);
	// blr 
	return;
loc_8337D798:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21696(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21696);
	// stw r11,504(r8)
	PPC_STORE_U32(ctx.r8.u32 + 504, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D7A8"))) PPC_WEAK_FUNC(sub_8337D7A8);
PPC_FUNC_IMPL(__imp__sub_8337D7A8) {
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
	// bne cr6,0x8337d7e8
	if (!ctx.cr6.eq) goto loc_8337D7E8;
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
loc_8337D7DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d7dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D7DC;
loc_8337D7E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,508(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 508);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d818
	if (ctx.cr6.eq) goto loc_8337D818;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,127
	ctx.r11.s64 = 127;
	// lwz r10,21700(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21700);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,508(r8)
	PPC_STORE_U32(ctx.r8.u32 + 508, ctx.r10.u32);
	// blr 
	return;
loc_8337D818:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21700);
	// stw r11,508(r8)
	PPC_STORE_U32(ctx.r8.u32 + 508, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D828"))) PPC_WEAK_FUNC(sub_8337D828);
PPC_FUNC_IMPL(__imp__sub_8337D828) {
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
	// bne cr6,0x8337d868
	if (!ctx.cr6.eq) goto loc_8337D868;
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
loc_8337D85C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d85c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D85C;
loc_8337D868:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,512(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 512);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d898
	if (ctx.cr6.eq) goto loc_8337D898;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,128
	ctx.r11.s64 = 128;
	// lwz r10,21704(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21704);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,512(r8)
	PPC_STORE_U32(ctx.r8.u32 + 512, ctx.r10.u32);
	// blr 
	return;
loc_8337D898:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21704);
	// stw r11,512(r8)
	PPC_STORE_U32(ctx.r8.u32 + 512, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D8A8"))) PPC_WEAK_FUNC(sub_8337D8A8);
PPC_FUNC_IMPL(__imp__sub_8337D8A8) {
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
	// bne cr6,0x8337d8e8
	if (!ctx.cr6.eq) goto loc_8337D8E8;
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
loc_8337D8DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d8dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D8DC;
loc_8337D8E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 936);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d918
	if (ctx.cr6.eq) goto loc_8337D918;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,234
	ctx.r11.s64 = 234;
	// lwz r10,21708(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21708);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,936(r8)
	PPC_STORE_U32(ctx.r8.u32 + 936, ctx.r10.u32);
	// blr 
	return;
loc_8337D918:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	// stw r11,936(r8)
	PPC_STORE_U32(ctx.r8.u32 + 936, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D928"))) PPC_WEAK_FUNC(sub_8337D928);
PPC_FUNC_IMPL(__imp__sub_8337D928) {
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
	// bne cr6,0x8337d968
	if (!ctx.cr6.eq) goto loc_8337D968;
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
loc_8337D95C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d95c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D95C;
loc_8337D968:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,940(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 940);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337d998
	if (ctx.cr6.eq) goto loc_8337D998;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,235
	ctx.r11.s64 = 235;
	// lwz r10,21712(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21712);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 940, ctx.r10.u32);
	// blr 
	return;
loc_8337D998:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	// stw r11,940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 940, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337D9A8"))) PPC_WEAK_FUNC(sub_8337D9A8);
PPC_FUNC_IMPL(__imp__sub_8337D9A8) {
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
	// bne cr6,0x8337d9e8
	if (!ctx.cr6.eq) goto loc_8337D9E8;
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
loc_8337D9DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337d9dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337D9DC;
loc_8337D9E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,952(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 952);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337da18
	if (ctx.cr6.eq) goto loc_8337DA18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,238
	ctx.r11.s64 = 238;
	// lwz r10,21716(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21716);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,952(r8)
	PPC_STORE_U32(ctx.r8.u32 + 952, ctx.r10.u32);
	// blr 
	return;
loc_8337DA18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21716);
	// stw r11,952(r8)
	PPC_STORE_U32(ctx.r8.u32 + 952, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337DA28"))) PPC_WEAK_FUNC(sub_8337DA28);
PPC_FUNC_IMPL(__imp__sub_8337DA28) {
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
	// bne cr6,0x8337da68
	if (!ctx.cr6.eq) goto loc_8337DA68;
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
loc_8337DA5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337da5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337DA5C;
loc_8337DA68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,944(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 944);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337da98
	if (ctx.cr6.eq) goto loc_8337DA98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,236
	ctx.r11.s64 = 236;
	// lwz r10,21720(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21720);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,944(r8)
	PPC_STORE_U32(ctx.r8.u32 + 944, ctx.r10.u32);
	// blr 
	return;
loc_8337DA98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21720);
	// stw r11,944(r8)
	PPC_STORE_U32(ctx.r8.u32 + 944, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337DAA8"))) PPC_WEAK_FUNC(sub_8337DAA8);
PPC_FUNC_IMPL(__imp__sub_8337DAA8) {
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
	// bne cr6,0x8337dae8
	if (!ctx.cr6.eq) goto loc_8337DAE8;
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
loc_8337DADC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337dadc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337DADC;
loc_8337DAE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,948(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 948);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337db18
	if (ctx.cr6.eq) goto loc_8337DB18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,237
	ctx.r11.s64 = 237;
	// lwz r10,21724(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21724);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,948(r8)
	PPC_STORE_U32(ctx.r8.u32 + 948, ctx.r10.u32);
	// blr 
	return;
loc_8337DB18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21724);
	// stw r11,948(r8)
	PPC_STORE_U32(ctx.r8.u32 + 948, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337DB28"))) PPC_WEAK_FUNC(sub_8337DB28);
PPC_FUNC_IMPL(__imp__sub_8337DB28) {
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
	// bne cr6,0x8337db68
	if (!ctx.cr6.eq) goto loc_8337DB68;
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
loc_8337DB5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337db5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337DB5C;
loc_8337DB68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,804(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 804);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337db98
	if (ctx.cr6.eq) goto loc_8337DB98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,201
	ctx.r11.s64 = 201;
	// lwz r10,21728(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21728);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,804(r8)
	PPC_STORE_U32(ctx.r8.u32 + 804, ctx.r10.u32);
	// blr 
	return;
loc_8337DB98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21728);
	// stw r11,804(r8)
	PPC_STORE_U32(ctx.r8.u32 + 804, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337DBA8"))) PPC_WEAK_FUNC(sub_8337DBA8);
PPC_FUNC_IMPL(__imp__sub_8337DBA8) {
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
	// bne cr6,0x8337dbe8
	if (!ctx.cr6.eq) goto loc_8337DBE8;
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
loc_8337DBDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337dbdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337DBDC;
loc_8337DBE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1016(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1016);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337dc18
	if (ctx.cr6.eq) goto loc_8337DC18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,254
	ctx.r11.s64 = 254;
	// lwz r10,21732(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21732);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1016(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1016, ctx.r10.u32);
	// blr 
	return;
loc_8337DC18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21732);
	// stw r11,1016(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1016, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337DC28"))) PPC_WEAK_FUNC(sub_8337DC28);
PPC_FUNC_IMPL(__imp__sub_8337DC28) {
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
	// bne cr6,0x8337dc68
	if (!ctx.cr6.eq) goto loc_8337DC68;
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
loc_8337DC5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337dc5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337DC5C;
loc_8337DC68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1020(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1020);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337dc98
	if (ctx.cr6.eq) goto loc_8337DC98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,255
	ctx.r11.s64 = 255;
	// lwz r10,21736(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21736);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1020(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1020, ctx.r10.u32);
	// blr 
	return;
loc_8337DC98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21736);
	// stw r11,1020(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1020, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337DCA8"))) PPC_WEAK_FUNC(sub_8337DCA8);
PPC_FUNC_IMPL(__imp__sub_8337DCA8) {
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
	// bne cr6,0x8337dce8
	if (!ctx.cr6.eq) goto loc_8337DCE8;
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
loc_8337DCDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337dcdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337DCDC;
loc_8337DCE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 456);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337dd18
	if (ctx.cr6.eq) goto loc_8337DD18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,114
	ctx.r11.s64 = 114;
	// lwz r10,21740(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21740);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,456(r8)
	PPC_STORE_U32(ctx.r8.u32 + 456, ctx.r10.u32);
	// blr 
	return;
loc_8337DD18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21740);
	// stw r11,456(r8)
	PPC_STORE_U32(ctx.r8.u32 + 456, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337DD28"))) PPC_WEAK_FUNC(sub_8337DD28);
PPC_FUNC_IMPL(__imp__sub_8337DD28) {
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
	// bne cr6,0x8337dd68
	if (!ctx.cr6.eq) goto loc_8337DD68;
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
loc_8337DD5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337dd5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337DD5C;
loc_8337DD68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,476(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 476);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337dd98
	if (ctx.cr6.eq) goto loc_8337DD98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,119
	ctx.r11.s64 = 119;
	// lwz r10,21744(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21744);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,476(r8)
	PPC_STORE_U32(ctx.r8.u32 + 476, ctx.r10.u32);
	// blr 
	return;
loc_8337DD98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21744);
	// stw r11,476(r8)
	PPC_STORE_U32(ctx.r8.u32 + 476, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337DDA8"))) PPC_WEAK_FUNC(sub_8337DDA8);
PPC_FUNC_IMPL(__imp__sub_8337DDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337DDD8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ddd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337DDD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337DDE8"))) PPC_WEAK_FUNC(sub_8337DDE8);
PPC_FUNC_IMPL(__imp__sub_8337DDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337DE18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337de18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337DE18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337DE28"))) PPC_WEAK_FUNC(sub_8337DE28);
PPC_FUNC_IMPL(__imp__sub_8337DE28) {
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
	// bne cr6,0x8337de68
	if (!ctx.cr6.eq) goto loc_8337DE68;
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
loc_8337DE5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337de5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337DE5C;
loc_8337DE68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,924(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 924);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337de98
	if (ctx.cr6.eq) goto loc_8337DE98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,231
	ctx.r11.s64 = 231;
	// lwz r10,21756(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21756);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,924(r8)
	PPC_STORE_U32(ctx.r8.u32 + 924, ctx.r10.u32);
	// blr 
	return;
loc_8337DE98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21756);
	// stw r11,924(r8)
	PPC_STORE_U32(ctx.r8.u32 + 924, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337DEA8"))) PPC_WEAK_FUNC(sub_8337DEA8);
PPC_FUNC_IMPL(__imp__sub_8337DEA8) {
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
	// bne cr6,0x8337dee8
	if (!ctx.cr6.eq) goto loc_8337DEE8;
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
loc_8337DEDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337dedc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337DEDC;
loc_8337DEE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,928(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 928);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337df18
	if (ctx.cr6.eq) goto loc_8337DF18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,232
	ctx.r11.s64 = 232;
	// lwz r10,21760(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21760);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,928(r8)
	PPC_STORE_U32(ctx.r8.u32 + 928, ctx.r10.u32);
	// blr 
	return;
loc_8337DF18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21760);
	// stw r11,928(r8)
	PPC_STORE_U32(ctx.r8.u32 + 928, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337DF28"))) PPC_WEAK_FUNC(sub_8337DF28);
PPC_FUNC_IMPL(__imp__sub_8337DF28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337DF58:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337df58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337DF58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337DF68"))) PPC_WEAK_FUNC(sub_8337DF68);
PPC_FUNC_IMPL(__imp__sub_8337DF68) {
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
	// bne cr6,0x8337dfa8
	if (!ctx.cr6.eq) goto loc_8337DFA8;
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
loc_8337DF9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337df9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337DF9C;
loc_8337DFA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 384);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337dfd8
	if (ctx.cr6.eq) goto loc_8337DFD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,96
	ctx.r11.s64 = 96;
	// lwz r10,21768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21768);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,384(r8)
	PPC_STORE_U32(ctx.r8.u32 + 384, ctx.r10.u32);
	// blr 
	return;
loc_8337DFD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21768);
	// stw r11,384(r8)
	PPC_STORE_U32(ctx.r8.u32 + 384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337DFE8"))) PPC_WEAK_FUNC(sub_8337DFE8);
PPC_FUNC_IMPL(__imp__sub_8337DFE8) {
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
	// bne cr6,0x8337e028
	if (!ctx.cr6.eq) goto loc_8337E028;
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
loc_8337E01C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e01c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E01C;
loc_8337E028:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,388(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 388);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e058
	if (ctx.cr6.eq) goto loc_8337E058;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,97
	ctx.r11.s64 = 97;
	// lwz r10,21772(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21772);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 388, ctx.r10.u32);
	// blr 
	return;
loc_8337E058:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21772);
	// stw r11,388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 388, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E068"))) PPC_WEAK_FUNC(sub_8337E068);
PPC_FUNC_IMPL(__imp__sub_8337E068) {
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
	// bne cr6,0x8337e0a8
	if (!ctx.cr6.eq) goto loc_8337E0A8;
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
loc_8337E09C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e09c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E09C;
loc_8337E0A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 392);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e0d8
	if (ctx.cr6.eq) goto loc_8337E0D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,98
	ctx.r11.s64 = 98;
	// lwz r10,21776(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21776);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 392, ctx.r10.u32);
	// blr 
	return;
loc_8337E0D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21776);
	// stw r11,392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 392, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E0E8"))) PPC_WEAK_FUNC(sub_8337E0E8);
PPC_FUNC_IMPL(__imp__sub_8337E0E8) {
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
	// bne cr6,0x8337e128
	if (!ctx.cr6.eq) goto loc_8337E128;
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
loc_8337E11C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e11c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E11C;
loc_8337E128:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,396(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 396);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e158
	if (ctx.cr6.eq) goto loc_8337E158;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,99
	ctx.r11.s64 = 99;
	// lwz r10,21780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21780);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,396(r8)
	PPC_STORE_U32(ctx.r8.u32 + 396, ctx.r10.u32);
	// blr 
	return;
loc_8337E158:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21780);
	// stw r11,396(r8)
	PPC_STORE_U32(ctx.r8.u32 + 396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E168"))) PPC_WEAK_FUNC(sub_8337E168);
PPC_FUNC_IMPL(__imp__sub_8337E168) {
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
	// bne cr6,0x8337e1a8
	if (!ctx.cr6.eq) goto loc_8337E1A8;
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
loc_8337E19C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e19c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E19C;
loc_8337E1A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 400);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e1d8
	if (ctx.cr6.eq) goto loc_8337E1D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,100
	ctx.r11.s64 = 100;
	// lwz r10,21784(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21784);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 400, ctx.r10.u32);
	// blr 
	return;
loc_8337E1D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21784);
	// stw r11,400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 400, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E1E8"))) PPC_WEAK_FUNC(sub_8337E1E8);
PPC_FUNC_IMPL(__imp__sub_8337E1E8) {
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
	// bne cr6,0x8337e228
	if (!ctx.cr6.eq) goto loc_8337E228;
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
loc_8337E21C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e21c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E21C;
loc_8337E228:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,404(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 404);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e258
	if (ctx.cr6.eq) goto loc_8337E258;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,101
	ctx.r11.s64 = 101;
	// lwz r10,21788(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21788);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,404(r8)
	PPC_STORE_U32(ctx.r8.u32 + 404, ctx.r10.u32);
	// blr 
	return;
loc_8337E258:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21788);
	// stw r11,404(r8)
	PPC_STORE_U32(ctx.r8.u32 + 404, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E268"))) PPC_WEAK_FUNC(sub_8337E268);
PPC_FUNC_IMPL(__imp__sub_8337E268) {
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
	// bne cr6,0x8337e2a8
	if (!ctx.cr6.eq) goto loc_8337E2A8;
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
loc_8337E29C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e29c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E29C;
loc_8337E2A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 408);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e2d8
	if (ctx.cr6.eq) goto loc_8337E2D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,102
	ctx.r11.s64 = 102;
	// lwz r10,21792(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21792);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,408(r8)
	PPC_STORE_U32(ctx.r8.u32 + 408, ctx.r10.u32);
	// blr 
	return;
loc_8337E2D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21792);
	// stw r11,408(r8)
	PPC_STORE_U32(ctx.r8.u32 + 408, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E2E8"))) PPC_WEAK_FUNC(sub_8337E2E8);
PPC_FUNC_IMPL(__imp__sub_8337E2E8) {
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
	// bne cr6,0x8337e328
	if (!ctx.cr6.eq) goto loc_8337E328;
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
loc_8337E31C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e31c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E31C;
loc_8337E328:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,412(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 412);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e358
	if (ctx.cr6.eq) goto loc_8337E358;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,103
	ctx.r11.s64 = 103;
	// lwz r10,21796(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21796);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 412, ctx.r10.u32);
	// blr 
	return;
loc_8337E358:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21796);
	// stw r11,412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E368"))) PPC_WEAK_FUNC(sub_8337E368);
PPC_FUNC_IMPL(__imp__sub_8337E368) {
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
	// bne cr6,0x8337e3a8
	if (!ctx.cr6.eq) goto loc_8337E3A8;
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
loc_8337E39C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e39c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E39C;
loc_8337E3A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,416(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 416);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e3d8
	if (ctx.cr6.eq) goto loc_8337E3D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,104
	ctx.r11.s64 = 104;
	// lwz r10,21800(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21800);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,416(r8)
	PPC_STORE_U32(ctx.r8.u32 + 416, ctx.r10.u32);
	// blr 
	return;
loc_8337E3D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21800);
	// stw r11,416(r8)
	PPC_STORE_U32(ctx.r8.u32 + 416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E3E8"))) PPC_WEAK_FUNC(sub_8337E3E8);
PPC_FUNC_IMPL(__imp__sub_8337E3E8) {
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
	// bne cr6,0x8337e428
	if (!ctx.cr6.eq) goto loc_8337E428;
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
loc_8337E41C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e41c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E41C;
loc_8337E428:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,420(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 420);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e458
	if (ctx.cr6.eq) goto loc_8337E458;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,105
	ctx.r11.s64 = 105;
	// lwz r10,21804(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21804);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,420(r8)
	PPC_STORE_U32(ctx.r8.u32 + 420, ctx.r10.u32);
	// blr 
	return;
loc_8337E458:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21804);
	// stw r11,420(r8)
	PPC_STORE_U32(ctx.r8.u32 + 420, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E468"))) PPC_WEAK_FUNC(sub_8337E468);
PPC_FUNC_IMPL(__imp__sub_8337E468) {
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
	// bne cr6,0x8337e4a8
	if (!ctx.cr6.eq) goto loc_8337E4A8;
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
loc_8337E49C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e49c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E49C;
loc_8337E4A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,424(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 424);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e4d8
	if (ctx.cr6.eq) goto loc_8337E4D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,106
	ctx.r11.s64 = 106;
	// lwz r10,21808(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21808);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,424(r8)
	PPC_STORE_U32(ctx.r8.u32 + 424, ctx.r10.u32);
	// blr 
	return;
loc_8337E4D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21808(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21808);
	// stw r11,424(r8)
	PPC_STORE_U32(ctx.r8.u32 + 424, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E4E8"))) PPC_WEAK_FUNC(sub_8337E4E8);
PPC_FUNC_IMPL(__imp__sub_8337E4E8) {
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
	// bne cr6,0x8337e528
	if (!ctx.cr6.eq) goto loc_8337E528;
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
loc_8337E51C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e51c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E51C;
loc_8337E528:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,428(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 428);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e558
	if (ctx.cr6.eq) goto loc_8337E558;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,107
	ctx.r11.s64 = 107;
	// lwz r10,21812(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21812);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,428(r8)
	PPC_STORE_U32(ctx.r8.u32 + 428, ctx.r10.u32);
	// blr 
	return;
loc_8337E558:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21812);
	// stw r11,428(r8)
	PPC_STORE_U32(ctx.r8.u32 + 428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E568"))) PPC_WEAK_FUNC(sub_8337E568);
PPC_FUNC_IMPL(__imp__sub_8337E568) {
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
	// bne cr6,0x8337e5a8
	if (!ctx.cr6.eq) goto loc_8337E5A8;
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
loc_8337E59C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E59C;
loc_8337E5A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,432(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 432);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e5d8
	if (ctx.cr6.eq) goto loc_8337E5D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,108
	ctx.r11.s64 = 108;
	// lwz r10,21816(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21816);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,432(r8)
	PPC_STORE_U32(ctx.r8.u32 + 432, ctx.r10.u32);
	// blr 
	return;
loc_8337E5D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21816);
	// stw r11,432(r8)
	PPC_STORE_U32(ctx.r8.u32 + 432, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E5E8"))) PPC_WEAK_FUNC(sub_8337E5E8);
PPC_FUNC_IMPL(__imp__sub_8337E5E8) {
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
	// bne cr6,0x8337e628
	if (!ctx.cr6.eq) goto loc_8337E628;
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
loc_8337E61C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e61c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E61C;
loc_8337E628:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,436(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 436);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e658
	if (ctx.cr6.eq) goto loc_8337E658;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,109
	ctx.r11.s64 = 109;
	// lwz r10,21820(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21820);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,436(r8)
	PPC_STORE_U32(ctx.r8.u32 + 436, ctx.r10.u32);
	// blr 
	return;
loc_8337E658:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21820(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21820);
	// stw r11,436(r8)
	PPC_STORE_U32(ctx.r8.u32 + 436, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E668"))) PPC_WEAK_FUNC(sub_8337E668);
PPC_FUNC_IMPL(__imp__sub_8337E668) {
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
	// bne cr6,0x8337e6a8
	if (!ctx.cr6.eq) goto loc_8337E6A8;
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
loc_8337E69C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e69c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E69C;
loc_8337E6A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,440(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 440);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e6d8
	if (ctx.cr6.eq) goto loc_8337E6D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,110
	ctx.r11.s64 = 110;
	// lwz r10,21824(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21824);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,440(r8)
	PPC_STORE_U32(ctx.r8.u32 + 440, ctx.r10.u32);
	// blr 
	return;
loc_8337E6D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21824);
	// stw r11,440(r8)
	PPC_STORE_U32(ctx.r8.u32 + 440, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E6E8"))) PPC_WEAK_FUNC(sub_8337E6E8);
PPC_FUNC_IMPL(__imp__sub_8337E6E8) {
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
	// bne cr6,0x8337e728
	if (!ctx.cr6.eq) goto loc_8337E728;
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
loc_8337E71C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e71c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E71C;
loc_8337E728:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,444(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 444);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e758
	if (ctx.cr6.eq) goto loc_8337E758;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,111
	ctx.r11.s64 = 111;
	// lwz r10,21828(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21828);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,444(r8)
	PPC_STORE_U32(ctx.r8.u32 + 444, ctx.r10.u32);
	// blr 
	return;
loc_8337E758:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21828);
	// stw r11,444(r8)
	PPC_STORE_U32(ctx.r8.u32 + 444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E768"))) PPC_WEAK_FUNC(sub_8337E768);
PPC_FUNC_IMPL(__imp__sub_8337E768) {
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
	// bne cr6,0x8337e7a8
	if (!ctx.cr6.eq) goto loc_8337E7A8;
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
loc_8337E79C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e79c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E79C;
loc_8337E7A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,68(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e7d8
	if (ctx.cr6.eq) goto loc_8337E7D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,17
	ctx.r11.s64 = 17;
	// lwz r10,21832(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21832);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,68(r8)
	PPC_STORE_U32(ctx.r8.u32 + 68, ctx.r10.u32);
	// blr 
	return;
loc_8337E7D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21832);
	// stw r11,68(r8)
	PPC_STORE_U32(ctx.r8.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E7E8"))) PPC_WEAK_FUNC(sub_8337E7E8);
PPC_FUNC_IMPL(__imp__sub_8337E7E8) {
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
	// bne cr6,0x8337e828
	if (!ctx.cr6.eq) goto loc_8337E828;
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
loc_8337E81C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e81c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E81C;
loc_8337E828:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1032);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e858
	if (ctx.cr6.eq) goto loc_8337E858;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,258
	ctx.r11.s64 = 258;
	// lwz r10,21836(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21836);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1032(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1032, ctx.r10.u32);
	// blr 
	return;
loc_8337E858:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21836);
	// stw r11,1032(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1032, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E868"))) PPC_WEAK_FUNC(sub_8337E868);
PPC_FUNC_IMPL(__imp__sub_8337E868) {
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
	// bne cr6,0x8337e8a8
	if (!ctx.cr6.eq) goto loc_8337E8A8;
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
loc_8337E89C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e89c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E89C;
loc_8337E8A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,452(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 452);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337e8d8
	if (ctx.cr6.eq) goto loc_8337E8D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,113
	ctx.r11.s64 = 113;
	// lwz r10,21840(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21840);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,452(r8)
	PPC_STORE_U32(ctx.r8.u32 + 452, ctx.r10.u32);
	// blr 
	return;
loc_8337E8D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21840);
	// stw r11,452(r8)
	PPC_STORE_U32(ctx.r8.u32 + 452, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E8E8"))) PPC_WEAK_FUNC(sub_8337E8E8);
PPC_FUNC_IMPL(__imp__sub_8337E8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337E918:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e918
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E918;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E928"))) PPC_WEAK_FUNC(sub_8337E928);
PPC_FUNC_IMPL(__imp__sub_8337E928) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337E958:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E958;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E968"))) PPC_WEAK_FUNC(sub_8337E968);
PPC_FUNC_IMPL(__imp__sub_8337E968) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337E998:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E998;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E9A8"))) PPC_WEAK_FUNC(sub_8337E9A8);
PPC_FUNC_IMPL(__imp__sub_8337E9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337E9D8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337e9d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337E9D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337E9E8"))) PPC_WEAK_FUNC(sub_8337E9E8);
PPC_FUNC_IMPL(__imp__sub_8337E9E8) {
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
	// bne cr6,0x8337ea28
	if (!ctx.cr6.eq) goto loc_8337EA28;
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
loc_8337EA1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ea1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337EA1C;
loc_8337EA28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,468(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 468);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337ea58
	if (ctx.cr6.eq) goto loc_8337EA58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,117
	ctx.r11.s64 = 117;
	// lwz r10,21860(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21860);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,468(r8)
	PPC_STORE_U32(ctx.r8.u32 + 468, ctx.r10.u32);
	// blr 
	return;
loc_8337EA58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21860(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21860);
	// stw r11,468(r8)
	PPC_STORE_U32(ctx.r8.u32 + 468, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337EA68"))) PPC_WEAK_FUNC(sub_8337EA68);
PPC_FUNC_IMPL(__imp__sub_8337EA68) {
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
	// bne cr6,0x8337eaa8
	if (!ctx.cr6.eq) goto loc_8337EAA8;
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
loc_8337EA9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ea9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337EA9C;
loc_8337EAA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,472(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 472);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337ead8
	if (ctx.cr6.eq) goto loc_8337EAD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,118
	ctx.r11.s64 = 118;
	// lwz r10,21864(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21864);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,472(r8)
	PPC_STORE_U32(ctx.r8.u32 + 472, ctx.r10.u32);
	// blr 
	return;
loc_8337EAD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21864(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21864);
	// stw r11,472(r8)
	PPC_STORE_U32(ctx.r8.u32 + 472, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337EAE8"))) PPC_WEAK_FUNC(sub_8337EAE8);
PPC_FUNC_IMPL(__imp__sub_8337EAE8) {
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
	// bne cr6,0x8337eb28
	if (!ctx.cr6.eq) goto loc_8337EB28;
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
loc_8337EB1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337eb1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337EB1C;
loc_8337EB28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,2144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337eb58
	if (ctx.cr6.eq) goto loc_8337EB58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,536
	ctx.r11.s64 = 536;
	// lwz r10,21868(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21868);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,2144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2144, ctx.r10.u32);
	// blr 
	return;
loc_8337EB58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21868);
	// stw r11,2144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337EB68"))) PPC_WEAK_FUNC(sub_8337EB68);
PPC_FUNC_IMPL(__imp__sub_8337EB68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337EB98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337eb98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337EB98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337EBA8"))) PPC_WEAK_FUNC(sub_8337EBA8);
PPC_FUNC_IMPL(__imp__sub_8337EBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337EBD8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ebd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337EBD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337EBE8"))) PPC_WEAK_FUNC(sub_8337EBE8);
PPC_FUNC_IMPL(__imp__sub_8337EBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337EC18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ec18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337EC18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337EC28"))) PPC_WEAK_FUNC(sub_8337EC28);
PPC_FUNC_IMPL(__imp__sub_8337EC28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337EC58:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ec58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337EC58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337EC68"))) PPC_WEAK_FUNC(sub_8337EC68);
PPC_FUNC_IMPL(__imp__sub_8337EC68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337EC98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ec98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337EC98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337ECA8"))) PPC_WEAK_FUNC(sub_8337ECA8);
PPC_FUNC_IMPL(__imp__sub_8337ECA8) {
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
	// bne cr6,0x8337ece8
	if (!ctx.cr6.eq) goto loc_8337ECE8;
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
loc_8337ECDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ecdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337ECDC;
loc_8337ECE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1124(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1124);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337ed18
	if (ctx.cr6.eq) goto loc_8337ED18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,281
	ctx.r11.s64 = 281;
	// lwz r10,21892(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21892);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1124, ctx.r10.u32);
	// blr 
	return;
loc_8337ED18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21892);
	// stw r11,1124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337ED28"))) PPC_WEAK_FUNC(sub_8337ED28);
PPC_FUNC_IMPL(__imp__sub_8337ED28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337ED58:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ed58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337ED58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337ED68"))) PPC_WEAK_FUNC(sub_8337ED68);
PPC_FUNC_IMPL(__imp__sub_8337ED68) {
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
	// bne cr6,0x8337eda8
	if (!ctx.cr6.eq) goto loc_8337EDA8;
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
loc_8337ED9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ed9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337ED9C;
loc_8337EDA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1136);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337edd8
	if (ctx.cr6.eq) goto loc_8337EDD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,284
	ctx.r11.s64 = 284;
	// lwz r10,21900(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21900);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1136, ctx.r10.u32);
	// blr 
	return;
loc_8337EDD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21900);
	// stw r11,1136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337EDE8"))) PPC_WEAK_FUNC(sub_8337EDE8);
PPC_FUNC_IMPL(__imp__sub_8337EDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337EE18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ee18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337EE18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337EE28"))) PPC_WEAK_FUNC(sub_8337EE28);
PPC_FUNC_IMPL(__imp__sub_8337EE28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337EE58:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ee58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337EE58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337EE68"))) PPC_WEAK_FUNC(sub_8337EE68);
PPC_FUNC_IMPL(__imp__sub_8337EE68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337EE98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ee98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337EE98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337EEA8"))) PPC_WEAK_FUNC(sub_8337EEA8);
PPC_FUNC_IMPL(__imp__sub_8337EEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337EED8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337eed8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337EED8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337EEE8"))) PPC_WEAK_FUNC(sub_8337EEE8);
PPC_FUNC_IMPL(__imp__sub_8337EEE8) {
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
	// bne cr6,0x8337ef28
	if (!ctx.cr6.eq) goto loc_8337EF28;
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
loc_8337EF1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ef1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337EF1C;
loc_8337EF28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,788(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 788);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337ef58
	if (ctx.cr6.eq) goto loc_8337EF58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,197
	ctx.r11.s64 = 197;
	// lwz r10,21920(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21920);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,788(r8)
	PPC_STORE_U32(ctx.r8.u32 + 788, ctx.r10.u32);
	// blr 
	return;
loc_8337EF58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21920);
	// stw r11,788(r8)
	PPC_STORE_U32(ctx.r8.u32 + 788, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337EF68"))) PPC_WEAK_FUNC(sub_8337EF68);
PPC_FUNC_IMPL(__imp__sub_8337EF68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337EF98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ef98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337EF98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337EFA8"))) PPC_WEAK_FUNC(sub_8337EFA8);
PPC_FUNC_IMPL(__imp__sub_8337EFA8) {
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
	// bne cr6,0x8337efe8
	if (!ctx.cr6.eq) goto loc_8337EFE8;
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
loc_8337EFDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337efdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337EFDC;
loc_8337EFE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,188(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337f018
	if (ctx.cr6.eq) goto loc_8337F018;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,47
	ctx.r11.s64 = 47;
	// lwz r10,21928(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21928);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 188, ctx.r10.u32);
	// blr 
	return;
loc_8337F018:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21928);
	// stw r11,188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 188, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F028"))) PPC_WEAK_FUNC(sub_8337F028);
PPC_FUNC_IMPL(__imp__sub_8337F028) {
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
	// bne cr6,0x8337f068
	if (!ctx.cr6.eq) goto loc_8337F068;
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
loc_8337F05C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f05c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F05C;
loc_8337F068:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,352(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 352);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337f098
	if (ctx.cr6.eq) goto loc_8337F098;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,88
	ctx.r11.s64 = 88;
	// lwz r10,21932(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21932);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,352(r8)
	PPC_STORE_U32(ctx.r8.u32 + 352, ctx.r10.u32);
	// blr 
	return;
loc_8337F098:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21932);
	// stw r11,352(r8)
	PPC_STORE_U32(ctx.r8.u32 + 352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F0A8"))) PPC_WEAK_FUNC(sub_8337F0A8);
PPC_FUNC_IMPL(__imp__sub_8337F0A8) {
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
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lfs f1,-17760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17760);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb4940
	ctx.lr = 0x8337F0C0;
	sub_82CB4940(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,-13604(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -13604, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F0E0"))) PPC_WEAK_FUNC(sub_8337F0E0);
PPC_FUNC_IMPL(__imp__sub_8337F0E0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// addi r3,r10,-13600
	ctx.r3.s64 = ctx.r10.s64 + -13600;
	// bl 0x822960c0
	ctx.lr = 0x8337F100;
	sub_822960C0(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,-12768
	ctx.r3.s64 = ctx.r9.s64 + -12768;
	// bl 0x82cb0ae8
	ctx.lr = 0x8337F10C;
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

__attribute__((alias("__imp__sub_8337F11C"))) PPC_WEAK_FUNC(sub_8337F11C);
PPC_FUNC_IMPL(__imp__sub_8337F11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337F120"))) PPC_WEAK_FUNC(sub_8337F120);
PPC_FUNC_IMPL(__imp__sub_8337F120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-18064
	ctx.r9.s64 = ctx.r11.s64 + -18064;
	// addi r8,r10,-13584
	ctx.r8.s64 = ctx.r10.s64 + -13584;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F13C"))) PPC_WEAK_FUNC(sub_8337F13C);
PPC_FUNC_IMPL(__imp__sub_8337F13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337F140"))) PPC_WEAK_FUNC(sub_8337F140);
PPC_FUNC_IMPL(__imp__sub_8337F140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-13552
	ctx.r9.s64 = ctx.r11.s64 + -13552;
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

__attribute__((alias("__imp__sub_8337F170"))) PPC_WEAK_FUNC(sub_8337F170);
PPC_FUNC_IMPL(__imp__sub_8337F170) {
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
	// addi r5,r11,-13536
	ctx.r5.s64 = ctx.r11.s64 + -13536;
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

__attribute__((alias("__imp__sub_8337F1B8"))) PPC_WEAK_FUNC(sub_8337F1B8);
PPC_FUNC_IMPL(__imp__sub_8337F1B8) {
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
	// addi r5,r11,-13568
	ctx.r5.s64 = ctx.r11.s64 + -13568;
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

__attribute__((alias("__imp__sub_8337F200"))) PPC_WEAK_FUNC(sub_8337F200);
PPC_FUNC_IMPL(__imp__sub_8337F200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-12672
	ctx.r3.s64 = ctx.r11.s64 + -12672;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8337F20C"))) PPC_WEAK_FUNC(sub_8337F20C);
PPC_FUNC_IMPL(__imp__sub_8337F20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337F210"))) PPC_WEAK_FUNC(sub_8337F210);
PPC_FUNC_IMPL(__imp__sub_8337F210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-12656
	ctx.r3.s64 = ctx.r11.s64 + -12656;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8337F21C"))) PPC_WEAK_FUNC(sub_8337F21C);
PPC_FUNC_IMPL(__imp__sub_8337F21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337F220"))) PPC_WEAK_FUNC(sub_8337F220);
PPC_FUNC_IMPL(__imp__sub_8337F220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-12640
	ctx.r3.s64 = ctx.r11.s64 + -12640;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8337F22C"))) PPC_WEAK_FUNC(sub_8337F22C);
PPC_FUNC_IMPL(__imp__sub_8337F22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337F230"))) PPC_WEAK_FUNC(sub_8337F230);
PPC_FUNC_IMPL(__imp__sub_8337F230) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r8,-13448
	ctx.r6.s64 = ctx.r8.s64 + -13448;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-13448(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13448, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r5,-31941
	ctx.r5.s64 = -2093285376;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// addi r3,r5,-12560
	ctx.r3.s64 = ctx.r5.s64 + -12560;
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8337F270"))) PPC_WEAK_FUNC(sub_8337F270);
PPC_FUNC_IMPL(__imp__sub_8337F270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-12440
	ctx.r3.s64 = ctx.r11.s64 + -12440;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8337F27C"))) PPC_WEAK_FUNC(sub_8337F27C);
PPC_FUNC_IMPL(__imp__sub_8337F27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337F280"))) PPC_WEAK_FUNC(sub_8337F280);
PPC_FUNC_IMPL(__imp__sub_8337F280) {
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
	// addi r5,r11,-13408
	ctx.r5.s64 = ctx.r11.s64 + -13408;
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

__attribute__((alias("__imp__sub_8337F2C8"))) PPC_WEAK_FUNC(sub_8337F2C8);
PPC_FUNC_IMPL(__imp__sub_8337F2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-12424
	ctx.r3.s64 = ctx.r11.s64 + -12424;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8337F2D4"))) PPC_WEAK_FUNC(sub_8337F2D4);
PPC_FUNC_IMPL(__imp__sub_8337F2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337F2D8"))) PPC_WEAK_FUNC(sub_8337F2D8);
PPC_FUNC_IMPL(__imp__sub_8337F2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337F308:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f308
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F308;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F318"))) PPC_WEAK_FUNC(sub_8337F318);
PPC_FUNC_IMPL(__imp__sub_8337F318) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337F348:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f348
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F348;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F358"))) PPC_WEAK_FUNC(sub_8337F358);
PPC_FUNC_IMPL(__imp__sub_8337F358) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337F388:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f388
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F388;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F398"))) PPC_WEAK_FUNC(sub_8337F398);
PPC_FUNC_IMPL(__imp__sub_8337F398) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337F3C8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f3c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F3C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F3D8"))) PPC_WEAK_FUNC(sub_8337F3D8);
PPC_FUNC_IMPL(__imp__sub_8337F3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337F408:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f408
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F408;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F418"))) PPC_WEAK_FUNC(sub_8337F418);
PPC_FUNC_IMPL(__imp__sub_8337F418) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337F448:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F448;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F458"))) PPC_WEAK_FUNC(sub_8337F458);
PPC_FUNC_IMPL(__imp__sub_8337F458) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337F488:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F498"))) PPC_WEAK_FUNC(sub_8337F498);
PPC_FUNC_IMPL(__imp__sub_8337F498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-12360
	ctx.r3.s64 = ctx.r11.s64 + -12360;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8337F4A4"))) PPC_WEAK_FUNC(sub_8337F4A4);
PPC_FUNC_IMPL(__imp__sub_8337F4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337F4A8"))) PPC_WEAK_FUNC(sub_8337F4A8);
PPC_FUNC_IMPL(__imp__sub_8337F4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-12344
	ctx.r3.s64 = ctx.r11.s64 + -12344;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8337F4B4"))) PPC_WEAK_FUNC(sub_8337F4B4);
PPC_FUNC_IMPL(__imp__sub_8337F4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337F4B8"))) PPC_WEAK_FUNC(sub_8337F4B8);
PPC_FUNC_IMPL(__imp__sub_8337F4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31887
	ctx.r10.s64 = -2089746432;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r10,25576
	ctx.r9.s64 = ctx.r10.s64 + 25576;
	// addi r11,r11,-5376
	ctx.r11.s64 = ctx.r11.s64 + -5376;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F4D0"))) PPC_WEAK_FUNC(sub_8337F4D0);
PPC_FUNC_IMPL(__imp__sub_8337F4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lis r10,-31887
	ctx.r10.s64 = -2089746432;
	// addi r11,r11,-4784
	ctx.r11.s64 = ctx.r11.s64 + -4784;
	// stw r11,25536(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25536, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F4E4"))) PPC_WEAK_FUNC(sub_8337F4E4);
PPC_FUNC_IMPL(__imp__sub_8337F4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337F4E8"))) PPC_WEAK_FUNC(sub_8337F4E8);
PPC_FUNC_IMPL(__imp__sub_8337F4E8) {
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
	// addi r3,r11,-13352
	ctx.r3.s64 = ctx.r11.s64 + -13352;
	// bl 0x82427268
	ctx.lr = 0x8337F500;
	sub_82427268(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,-12328
	ctx.r3.s64 = ctx.r10.s64 + -12328;
	// bl 0x82cb0ae8
	ctx.lr = 0x8337F50C;
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

__attribute__((alias("__imp__sub_8337F51C"))) PPC_WEAK_FUNC(sub_8337F51C);
PPC_FUNC_IMPL(__imp__sub_8337F51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337F520"))) PPC_WEAK_FUNC(sub_8337F520);
PPC_FUNC_IMPL(__imp__sub_8337F520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-12312
	ctx.r3.s64 = ctx.r11.s64 + -12312;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8337F52C"))) PPC_WEAK_FUNC(sub_8337F52C);
PPC_FUNC_IMPL(__imp__sub_8337F52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337F530"))) PPC_WEAK_FUNC(sub_8337F530);
PPC_FUNC_IMPL(__imp__sub_8337F530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-18064
	ctx.r9.s64 = ctx.r11.s64 + -18064;
	// addi r8,r10,-13264
	ctx.r8.s64 = ctx.r10.s64 + -13264;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F54C"))) PPC_WEAK_FUNC(sub_8337F54C);
PPC_FUNC_IMPL(__imp__sub_8337F54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337F550"))) PPC_WEAK_FUNC(sub_8337F550);
PPC_FUNC_IMPL(__imp__sub_8337F550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-13232
	ctx.r9.s64 = ctx.r11.s64 + -13232;
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

__attribute__((alias("__imp__sub_8337F580"))) PPC_WEAK_FUNC(sub_8337F580);
PPC_FUNC_IMPL(__imp__sub_8337F580) {
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
	// addi r5,r11,-13216
	ctx.r5.s64 = ctx.r11.s64 + -13216;
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

__attribute__((alias("__imp__sub_8337F5C8"))) PPC_WEAK_FUNC(sub_8337F5C8);
PPC_FUNC_IMPL(__imp__sub_8337F5C8) {
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
	// addi r5,r11,-13248
	ctx.r5.s64 = ctx.r11.s64 + -13248;
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

__attribute__((alias("__imp__sub_8337F610"))) PPC_WEAK_FUNC(sub_8337F610);
PPC_FUNC_IMPL(__imp__sub_8337F610) {
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
	// bne cr6,0x8337f650
	if (!ctx.cr6.eq) goto loc_8337F650;
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
loc_8337F644:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f644
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F644;
loc_8337F650:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1864(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1864);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337f680
	if (ctx.cr6.eq) goto loc_8337F680;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,466
	ctx.r11.s64 = 466;
	// lwz r10,20308(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20308);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1864(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1864, ctx.r10.u32);
	// blr 
	return;
loc_8337F680:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20308);
	// stw r11,1864(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F690"))) PPC_WEAK_FUNC(sub_8337F690);
PPC_FUNC_IMPL(__imp__sub_8337F690) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337F6C0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f6c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F6C0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F6D0"))) PPC_WEAK_FUNC(sub_8337F6D0);
PPC_FUNC_IMPL(__imp__sub_8337F6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337F700:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F700;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F710"))) PPC_WEAK_FUNC(sub_8337F710);
PPC_FUNC_IMPL(__imp__sub_8337F710) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337F740:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f740
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F740;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F750"))) PPC_WEAK_FUNC(sub_8337F750);
PPC_FUNC_IMPL(__imp__sub_8337F750) {
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
	// bne cr6,0x8337f790
	if (!ctx.cr6.eq) goto loc_8337F790;
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
loc_8337F784:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F784;
loc_8337F790:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1860(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1860);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337f7c0
	if (ctx.cr6.eq) goto loc_8337F7C0;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,465
	ctx.r11.s64 = 465;
	// lwz r10,20324(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20324);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1860(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1860, ctx.r10.u32);
	// blr 
	return;
loc_8337F7C0:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20324);
	// stw r11,1860(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1860, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F7D0"))) PPC_WEAK_FUNC(sub_8337F7D0);
PPC_FUNC_IMPL(__imp__sub_8337F7D0) {
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
	// bne cr6,0x8337f810
	if (!ctx.cr6.eq) goto loc_8337F810;
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
loc_8337F804:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F804;
loc_8337F810:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1876(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1876);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337f840
	if (ctx.cr6.eq) goto loc_8337F840;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,469
	ctx.r11.s64 = 469;
	// lwz r10,20328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20328);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1876(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1876, ctx.r10.u32);
	// blr 
	return;
loc_8337F840:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20328);
	// stw r11,1876(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1876, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F850"))) PPC_WEAK_FUNC(sub_8337F850);
PPC_FUNC_IMPL(__imp__sub_8337F850) {
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
	// bne cr6,0x8337f890
	if (!ctx.cr6.eq) goto loc_8337F890;
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
loc_8337F884:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f884
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F884;
loc_8337F890:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1856(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1856);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337f8c0
	if (ctx.cr6.eq) goto loc_8337F8C0;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,464
	ctx.r11.s64 = 464;
	// lwz r10,20332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20332);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1856(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1856, ctx.r10.u32);
	// blr 
	return;
loc_8337F8C0:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20332);
	// stw r11,1856(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1856, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F8D0"))) PPC_WEAK_FUNC(sub_8337F8D0);
PPC_FUNC_IMPL(__imp__sub_8337F8D0) {
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
	// bne cr6,0x8337f910
	if (!ctx.cr6.eq) goto loc_8337F910;
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
loc_8337F904:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F904;
loc_8337F910:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1880(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1880);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337f940
	if (ctx.cr6.eq) goto loc_8337F940;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,470
	ctx.r11.s64 = 470;
	// lwz r10,20336(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20336);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1880(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1880, ctx.r10.u32);
	// blr 
	return;
loc_8337F940:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20336);
	// stw r11,1880(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1880, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F950"))) PPC_WEAK_FUNC(sub_8337F950);
PPC_FUNC_IMPL(__imp__sub_8337F950) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337F980:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F980;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F990"))) PPC_WEAK_FUNC(sub_8337F990);
PPC_FUNC_IMPL(__imp__sub_8337F990) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337F9C0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337f9c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337F9C0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337F9D0"))) PPC_WEAK_FUNC(sub_8337F9D0);
PPC_FUNC_IMPL(__imp__sub_8337F9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FA00:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337fa00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FA00;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FA10"))) PPC_WEAK_FUNC(sub_8337FA10);
PPC_FUNC_IMPL(__imp__sub_8337FA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-12296
	ctx.r3.s64 = ctx.r11.s64 + -12296;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8337FA1C"))) PPC_WEAK_FUNC(sub_8337FA1C);
PPC_FUNC_IMPL(__imp__sub_8337FA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337FA20"))) PPC_WEAK_FUNC(sub_8337FA20);
PPC_FUNC_IMPL(__imp__sub_8337FA20) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// addi r3,r10,-13176
	ctx.r3.s64 = ctx.r10.s64 + -13176;
	// bl 0x822960c0
	ctx.lr = 0x8337FA40;
	sub_822960C0(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,-12200
	ctx.r3.s64 = ctx.r9.s64 + -12200;
	// bl 0x82cb0ae8
	ctx.lr = 0x8337FA4C;
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

__attribute__((alias("__imp__sub_8337FA5C"))) PPC_WEAK_FUNC(sub_8337FA5C);
PPC_FUNC_IMPL(__imp__sub_8337FA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337FA60"))) PPC_WEAK_FUNC(sub_8337FA60);
PPC_FUNC_IMPL(__imp__sub_8337FA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-12104
	ctx.r3.s64 = ctx.r11.s64 + -12104;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8337FA6C"))) PPC_WEAK_FUNC(sub_8337FA6C);
PPC_FUNC_IMPL(__imp__sub_8337FA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337FA70"))) PPC_WEAK_FUNC(sub_8337FA70);
PPC_FUNC_IMPL(__imp__sub_8337FA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r11,-13152
	ctx.r3.s64 = ctx.r11.s64 + -13152;
	// b 0x8246a960
	sub_8246A960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8337FA80"))) PPC_WEAK_FUNC(sub_8337FA80);
PPC_FUNC_IMPL(__imp__sub_8337FA80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FAB0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337fab0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FAB0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FAC0"))) PPC_WEAK_FUNC(sub_8337FAC0);
PPC_FUNC_IMPL(__imp__sub_8337FAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FAF0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337faf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FAF0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FB00"))) PPC_WEAK_FUNC(sub_8337FB00);
PPC_FUNC_IMPL(__imp__sub_8337FB00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FB30:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337fb30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FB30;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FB40"))) PPC_WEAK_FUNC(sub_8337FB40);
PPC_FUNC_IMPL(__imp__sub_8337FB40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FB70:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337fb70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FB70;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FB80"))) PPC_WEAK_FUNC(sub_8337FB80);
PPC_FUNC_IMPL(__imp__sub_8337FB80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FBB0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337fbb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FBB0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FBC0"))) PPC_WEAK_FUNC(sub_8337FBC0);
PPC_FUNC_IMPL(__imp__sub_8337FBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FBF0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337fbf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FBF0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FC00"))) PPC_WEAK_FUNC(sub_8337FC00);
PPC_FUNC_IMPL(__imp__sub_8337FC00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FC30:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337fc30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FC30;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FC40"))) PPC_WEAK_FUNC(sub_8337FC40);
PPC_FUNC_IMPL(__imp__sub_8337FC40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FC70:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337fc70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FC70;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FC80"))) PPC_WEAK_FUNC(sub_8337FC80);
PPC_FUNC_IMPL(__imp__sub_8337FC80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FCB0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337fcb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FCB0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FCC0"))) PPC_WEAK_FUNC(sub_8337FCC0);
PPC_FUNC_IMPL(__imp__sub_8337FCC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FCF0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337fcf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FCF0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FD00"))) PPC_WEAK_FUNC(sub_8337FD00);
PPC_FUNC_IMPL(__imp__sub_8337FD00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FD30:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337fd30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FD30;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FD40"))) PPC_WEAK_FUNC(sub_8337FD40);
PPC_FUNC_IMPL(__imp__sub_8337FD40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FD70:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337fd70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FD70;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FD80"))) PPC_WEAK_FUNC(sub_8337FD80);
PPC_FUNC_IMPL(__imp__sub_8337FD80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FDB0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337fdb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FDB0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FDC0"))) PPC_WEAK_FUNC(sub_8337FDC0);
PPC_FUNC_IMPL(__imp__sub_8337FDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FDF0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337fdf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FDF0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FE00"))) PPC_WEAK_FUNC(sub_8337FE00);
PPC_FUNC_IMPL(__imp__sub_8337FE00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FE30:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337fe30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FE30;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FE40"))) PPC_WEAK_FUNC(sub_8337FE40);
PPC_FUNC_IMPL(__imp__sub_8337FE40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FE70:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337fe70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FE70;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FE80"))) PPC_WEAK_FUNC(sub_8337FE80);
PPC_FUNC_IMPL(__imp__sub_8337FE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-12088
	ctx.r3.s64 = ctx.r11.s64 + -12088;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8337FE8C"))) PPC_WEAK_FUNC(sub_8337FE8C);
PPC_FUNC_IMPL(__imp__sub_8337FE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337FE90"))) PPC_WEAK_FUNC(sub_8337FE90);
PPC_FUNC_IMPL(__imp__sub_8337FE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,-13824
	ctx.r11.s64 = ctx.r11.s64 + -13824;
	// addi r3,r10,-12072
	ctx.r3.s64 = ctx.r10.s64 + -12072;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8337FEB4"))) PPC_WEAK_FUNC(sub_8337FEB4);
PPC_FUNC_IMPL(__imp__sub_8337FEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8337FEB8"))) PPC_WEAK_FUNC(sub_8337FEB8);
PPC_FUNC_IMPL(__imp__sub_8337FEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r8,-13736
	ctx.r7.s64 = ctx.r8.s64 + -13736;
	// lfs f13,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lwz r3,-32(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r11,-28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// lwz r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// stw r4,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r3,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r3.u32);
	// stw r11,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
	// stw r10,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r10.u32);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FF30"))) PPC_WEAK_FUNC(sub_8337FF30);
PPC_FUNC_IMPL(__imp__sub_8337FF30) {
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
	// bne cr6,0x8337ff70
	if (!ctx.cr6.eq) goto loc_8337FF70;
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
loc_8337FF64:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ff64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FF64;
loc_8337FF70:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1536(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1536);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337ffa0
	if (ctx.cr6.eq) goto loc_8337FFA0;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,384
	ctx.r11.s64 = 384;
	// lwz r10,19196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19196);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1536(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1536, ctx.r10.u32);
	// blr 
	return;
loc_8337FFA0:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,19196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19196);
	// stw r11,1536(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1536, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FFB0"))) PPC_WEAK_FUNC(sub_8337FFB0);
PPC_FUNC_IMPL(__imp__sub_8337FFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337FFE0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337ffe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337FFE0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337FFF0"))) PPC_WEAK_FUNC(sub_8337FFF0);
PPC_FUNC_IMPL(__imp__sub_8337FFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83380020:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380020
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380020;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380030"))) PPC_WEAK_FUNC(sub_83380030);
PPC_FUNC_IMPL(__imp__sub_83380030) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83380060:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380060
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380060;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83380070"))) PPC_WEAK_FUNC(sub_83380070);
PPC_FUNC_IMPL(__imp__sub_83380070) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833800A0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833800a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833800A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833800B0"))) PPC_WEAK_FUNC(sub_833800B0);
PPC_FUNC_IMPL(__imp__sub_833800B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833800E0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833800e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833800E0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833800F0"))) PPC_WEAK_FUNC(sub_833800F0);
PPC_FUNC_IMPL(__imp__sub_833800F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83380120:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83380120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83380120;
	// blr 
	return;
}

