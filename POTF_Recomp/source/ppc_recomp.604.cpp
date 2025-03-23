#include "ppc_recomp_shared.h"

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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

