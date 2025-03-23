#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_833536D0"))) PPC_WEAK_FUNC(sub_833536D0);
PPC_FUNC_IMPL(__imp__sub_833536D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833536EC"))) PPC_WEAK_FUNC(sub_833536EC);
PPC_FUNC_IMPL(__imp__sub_833536EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833536F0"))) PPC_WEAK_FUNC(sub_833536F0);
PPC_FUNC_IMPL(__imp__sub_833536F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8335374c
	if (ctx.cr6.eq) goto loc_8335374C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_83353700:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_83353714:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83353754
	if (!ctx.cr6.eq) goto loc_83353754;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// blt cr6,0x83353714
	if (ctx.cr6.lt) goto loc_83353714;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83353738:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83353700
	if (!ctx.cr6.eq) goto loc_83353700;
loc_8335374C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83353754:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83353738
	goto loc_83353738;
}

__attribute__((alias("__imp__sub_8335375C"))) PPC_WEAK_FUNC(sub_8335375C);
PPC_FUNC_IMPL(__imp__sub_8335375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83353760"))) PPC_WEAK_FUNC(sub_83353760);
PPC_FUNC_IMPL(__imp__sub_83353760) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83353790
	if (!ctx.cr6.eq) goto loc_83353790;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83353814
	goto loc_83353814;
loc_83353790:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 * 12;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x833537a8
	if (!ctx.cr6.gt) goto loc_833537A8;
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
loc_833537A8:
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x833536f0
	ctx.lr = 0x833537B0;
	sub_833536F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83353814
	if (ctx.cr0.eq) goto loc_83353814;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 * 12;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_833537E0:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8335382c
	if (!ctx.cr6.eq) goto loc_8335382C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// blt cr6,0x833537e0
	if (ctx.cr6.lt) goto loc_833537E0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83353804:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_83353814:
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
loc_8335382C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83353804
	goto loc_83353804;
}

__attribute__((alias("__imp__sub_83353834"))) PPC_WEAK_FUNC(sub_83353834);
PPC_FUNC_IMPL(__imp__sub_83353834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83353838"))) PPC_WEAK_FUNC(sub_83353838);
PPC_FUNC_IMPL(__imp__sub_83353838) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x833538d8
	if (ctx.cr6.gt) goto loc_833538D8;
	// mulli r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 * 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x833536f0
	ctx.lr = 0x83353874;
	sub_833536F0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r6,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r6.s64;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x833538d8
	if (ctx.cr6.gt) goto loc_833538D8;
loc_8335388C:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x833538b8
	if (ctx.cr6.gt) goto loc_833538B8;
	// mulli r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 * 12;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x833536f0
	ctx.lr = 0x833538B8;
	sub_833536F0(ctx, base);
loc_833538B8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8335388c
	if (!ctx.cr6.gt) goto loc_8335388C;
loc_833538D8:
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

__attribute__((alias("__imp__sub_833538F0"))) PPC_WEAK_FUNC(sub_833538F0);
PPC_FUNC_IMPL(__imp__sub_833538F0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e7248
	ctx.lr = 0x83353910;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_83353930"))) PPC_WEAK_FUNC(sub_83353930);
PPC_FUNC_IMPL(__imp__sub_83353930) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e7248
	ctx.lr = 0x83353950;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_83353970"))) PPC_WEAK_FUNC(sub_83353970);
PPC_FUNC_IMPL(__imp__sub_83353970) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e7248
	ctx.lr = 0x83353990;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_833539B0"))) PPC_WEAK_FUNC(sub_833539B0);
PPC_FUNC_IMPL(__imp__sub_833539B0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e7248
	ctx.lr = 0x833539D0;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_833539F0"))) PPC_WEAK_FUNC(sub_833539F0);
PPC_FUNC_IMPL(__imp__sub_833539F0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e7248
	ctx.lr = 0x83353A10;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_83353A30"))) PPC_WEAK_FUNC(sub_83353A30);
PPC_FUNC_IMPL(__imp__sub_83353A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83353A38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x83353a58
	if (!ctx.cr6.gt) goto loc_83353A58;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x83353b58
	goto loc_83353B58;
loc_83353A58:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwz r31,20(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_83353A70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_83353A84:
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83353abc
	if (!ctx.cr6.eq) goto loc_83353ABC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// blt cr6,0x83353a84
	if (ctx.cr6.lt) goto loc_83353A84;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83353AA8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83353ac4
	if (!ctx.cr0.eq) goto loc_83353AC4;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x83353a70
	goto loc_83353A70;
loc_83353ABC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x83353aa8
	goto loc_83353AA8;
loc_83353AC4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r26,1456(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832e7248
	ctx.lr = 0x83353ADC;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// beq 0x83353b04
	if (ctx.cr0.eq) goto loc_83353B04;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r28.u32);
	// b 0x83353b08
	goto loc_83353B08;
loc_83353B04:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83353B08:
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// bne cr6,0x83353b54
	if (!ctx.cr6.eq) goto loc_83353B54;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// b 0x83353b58
	goto loc_83353B58;
loc_83353B54:
	// stw r3,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r3.u32);
loc_83353B58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83353B60"))) PPC_WEAK_FUNC(sub_83353B60);
PPC_FUNC_IMPL(__imp__sub_83353B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x83353B68;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// bl 0x83353760
	ctx.lr = 0x83353B90;
	sub_83353760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83353c68
	if (!ctx.cr0.eq) goto loc_83353C68;
loc_83353B98:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83353a30
	ctx.lr = 0x83353BA4;
	sub_83353A30(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r24,1456(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832e7248
	ctx.lr = 0x83353BBC;
	sub_832E7248(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// beq 0x83353be0
	if (ctx.cr0.eq) goto loc_83353BE0;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r28.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r28,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r28.u32);
	// b 0x83353be4
	goto loc_83353BE4;
loc_83353BE0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83353BE4:
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r28,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// beq cr6,0x83353c08
	if (ctx.cr6.eq) goto loc_83353C08;
	// stw r30,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r30.u32);
loc_83353C08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83353c3c
	if (!ctx.cr6.eq) goto loc_83353C3C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x83353c3c
	if (ctx.cr6.gt) goto loc_83353C3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83353C3C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83353838
	ctx.lr = 0x83353C48;
	sub_83353838(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83353760
	ctx.lr = 0x83353C58;
	sub_83353760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83353b98
	if (ctx.cr0.eq) goto loc_83353B98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_83353C68:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83353C70"))) PPC_WEAK_FUNC(sub_83353C70);
PPC_FUNC_IMPL(__imp__sub_83353C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83353C78;
	__savegprlr_26(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,380
	ctx.r5.s64 = 380;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82cb16f0
	ctx.lr = 0x83353CA0;
	sub_82CB16F0(ctx, base);
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82cb1160
	ctx.lr = 0x83353CB4;
	sub_82CB1160(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r26,1456(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1456);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832e7248
	ctx.lr = 0x83353CC4;
	sub_832E7248(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// beq 0x83353ce8
	if (ctx.cr0.eq) goto loc_83353CE8;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// b 0x83353cec
	goto loc_83353CEC;
loc_83353CE8:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_83353CEC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addic. r29,r29,1
	ctx.xer.ca = ctx.r29.u32 > 4294967294;
	ctx.r29.s64 = ctx.r29.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ble 0x83353d70
	if (!ctx.cr0.gt) goto loc_83353D70;
loc_83353D20:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83353d3c
	if (!ctx.cr6.eq) goto loc_83353D3C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_83353D3C:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83353838
	ctx.lr = 0x83353D50;
	sub_83353838(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83353b60
	ctx.lr = 0x83353D64;
	sub_83353B60(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x83353d20
	if (ctx.cr6.lt) goto loc_83353D20;
loc_83353D70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83353D7C"))) PPC_WEAK_FUNC(sub_83353D7C);
PPC_FUNC_IMPL(__imp__sub_83353D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83353D80"))) PPC_WEAK_FUNC(sub_83353D80);
PPC_FUNC_IMPL(__imp__sub_83353D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83353D88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83353da4
	if (!ctx.cr6.eq) goto loc_83353DA4;
loc_83353D9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83353de8
	goto loc_83353DE8;
loc_83353DA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83353de4
	if (ctx.cr6.eq) goto loc_83353DE4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x83353d9c
	if (ctx.cr6.eq) goto loc_83353D9C;
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x83353ddc
	goto loc_83353DDC;
loc_83353DBC:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83353DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83353d9c
	if (!ctx.cr0.eq) goto loc_83353D9C;
loc_83353DDC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83353dbc
	if (!ctx.cr6.eq) goto loc_83353DBC;
loc_83353DE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83353DE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83353DF0"))) PPC_WEAK_FUNC(sub_83353DF0);
PPC_FUNC_IMPL(__imp__sub_83353DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83353DF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83353e54
	if (ctx.cr6.eq) goto loc_83353E54;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83353e1c
	if (!ctx.cr6.eq) goto loc_83353E1C;
loc_83353E14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83353e58
	goto loc_83353E58;
loc_83353E1C:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83353e54
	if (ctx.cr6.eq) goto loc_83353E54;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x83353e4c
	goto loc_83353E4C;
loc_83353E2C:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83353E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83353e14
	if (!ctx.cr0.eq) goto loc_83353E14;
loc_83353E4C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83353e2c
	if (!ctx.cr6.eq) goto loc_83353E2C;
loc_83353E54:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83353E58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83353E60"))) PPC_WEAK_FUNC(sub_83353E60);
PPC_FUNC_IMPL(__imp__sub_83353E60) {
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
	// bl 0x83314848
	ctx.lr = 0x83353E78;
	sub_83314848(ctx, base);
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

__attribute__((alias("__imp__sub_83353E90"))) PPC_WEAK_FUNC(sub_83353E90);
PPC_FUNC_IMPL(__imp__sub_83353E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83353eac
	if (!ctx.cr6.lt) goto loc_83353EAC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_83353EAC:
	// b 0x8333cef8
	sub_8333CEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83353EB0"))) PPC_WEAK_FUNC(sub_83353EB0);
PPC_FUNC_IMPL(__imp__sub_83353EB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83353EB8"))) PPC_WEAK_FUNC(sub_83353EB8);
PPC_FUNC_IMPL(__imp__sub_83353EB8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x83353ED4;
	sub_8333CEF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83353EF0"))) PPC_WEAK_FUNC(sub_83353EF0);
PPC_FUNC_IMPL(__imp__sub_83353EF0) {
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
	// bl 0x83314848
	ctx.lr = 0x83353F08;
	sub_83314848(ctx, base);
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

__attribute__((alias("__imp__sub_83353F20"))) PPC_WEAK_FUNC(sub_83353F20);
PPC_FUNC_IMPL(__imp__sub_83353F20) {
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
	// bl 0x83314848
	ctx.lr = 0x83353F38;
	sub_83314848(ctx, base);
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

__attribute__((alias("__imp__sub_83353F50"))) PPC_WEAK_FUNC(sub_83353F50);
PPC_FUNC_IMPL(__imp__sub_83353F50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83353f6c
	if (!ctx.cr6.lt) goto loc_83353F6C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_83353F6C:
	// b 0x8333cef8
	sub_8333CEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83353F70"))) PPC_WEAK_FUNC(sub_83353F70);
PPC_FUNC_IMPL(__imp__sub_83353F70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83353F78"))) PPC_WEAK_FUNC(sub_83353F78);
PPC_FUNC_IMPL(__imp__sub_83353F78) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x83353F94;
	sub_8333CEF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83353FB0"))) PPC_WEAK_FUNC(sub_83353FB0);
PPC_FUNC_IMPL(__imp__sub_83353FB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83353FB8"))) PPC_WEAK_FUNC(sub_83353FB8);
PPC_FUNC_IMPL(__imp__sub_83353FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83353FC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r28,1456(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832e7248
	ctx.lr = 0x83353FE4;
	sub_832E7248(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x83354000
	if (ctx.cr0.eq) goto loc_83354000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1456(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// bl 0x83314848
	ctx.lr = 0x83353FFC;
	sub_83314848(ctx, base);
	// b 0x83354004
	goto loc_83354004;
loc_83354000:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83354004:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83354014"))) PPC_WEAK_FUNC(sub_83354014);
PPC_FUNC_IMPL(__imp__sub_83354014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83354018"))) PPC_WEAK_FUNC(sub_83354018);
PPC_FUNC_IMPL(__imp__sub_83354018) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83354048
	if (ctx.cr6.eq) goto loc_83354048;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x83354040;
	sub_8333CEF8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_83354048:
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

__attribute__((alias("__imp__sub_8335405C"))) PPC_WEAK_FUNC(sub_8335405C);
PPC_FUNC_IMPL(__imp__sub_8335405C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83354060"))) PPC_WEAK_FUNC(sub_83354060);
PPC_FUNC_IMPL(__imp__sub_83354060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x83354068;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,96(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x83354230
	if (!ctx.cr0.gt) goto loc_83354230;
	// li r25,0
	ctx.r25.s64 = 0;
loc_83354088:
	// addi r24,r27,1
	ctx.r24.s64 = ctx.r27.s64 + 1;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83354220
	if (!ctx.cr6.lt) goto loc_83354220;
	// addi r26,r25,4
	ctx.r26.s64 = ctx.r25.s64 + 4;
loc_8335409C:
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x833540b0
	if (!ctx.cr6.lt) goto loc_833540B0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x833540bc
	goto loc_833540BC;
loc_833540B0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8333cef8
	ctx.lr = 0x833540BC;
	sub_8333CEF8(ctx, base);
loc_833540BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bge cr6,0x833540e0
	if (!ctx.cr6.lt) goto loc_833540E0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x833540ec
	goto loc_833540EC;
loc_833540E0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8333cef8
	ctx.lr = 0x833540EC;
	sub_8333CEF8(ctx, base);
loc_833540EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r29,r11,r30
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// bge cr6,0x83354114
	if (!ctx.cr6.lt) goto loc_83354114;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x83354120
	goto loc_83354120;
loc_83354114:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8333cef8
	ctx.lr = 0x83354120;
	sub_8333CEF8(ctx, base);
loc_83354120:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bge cr6,0x83354144
	if (!ctx.cr6.lt) goto loc_83354144;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x83354150
	goto loc_83354150;
loc_83354144:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8333cef8
	ctx.lr = 0x83354150;
	sub_8333CEF8(ctx, base);
loc_83354150:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8335420c
	if (!ctx.cr6.lt) goto loc_8335420C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83354180
	if (!ctx.cr6.lt) goto loc_83354180;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x8335418c
	goto loc_8335418C;
loc_83354180:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8333cef8
	ctx.lr = 0x8335418C;
	sub_8333CEF8(ctx, base);
loc_8335418C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x833541a8
	if (!ctx.cr6.lt) goto loc_833541A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x833541b8
	goto loc_833541B8;
loc_833541A8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8333cef8
	ctx.lr = 0x833541B4;
	sub_8333CEF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_833541B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x833541d0
	if (!ctx.cr6.lt) goto loc_833541D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x833541dc
	goto loc_833541DC;
loc_833541D0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8333cef8
	ctx.lr = 0x833541DC;
	sub_8333CEF8(ctx, base);
loc_833541DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x833541fc
	if (!ctx.cr6.lt) goto loc_833541FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x83354208
	goto loc_83354208;
loc_833541FC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8333cef8
	ctx.lr = 0x83354208;
	sub_8333CEF8(ctx, base);
loc_83354208:
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
loc_8335420C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8335409c
	if (ctx.cr6.lt) goto loc_8335409C;
loc_83354220:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x83354088
	if (ctx.cr6.lt) goto loc_83354088;
loc_83354230:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83354238"))) PPC_WEAK_FUNC(sub_83354238);
PPC_FUNC_IMPL(__imp__sub_83354238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83354248"))) PPC_WEAK_FUNC(sub_83354248);
PPC_FUNC_IMPL(__imp__sub_83354248) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x83354264;
	sub_8333CEF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8335427C"))) PPC_WEAK_FUNC(sub_8335427C);
PPC_FUNC_IMPL(__imp__sub_8335427C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83354280"))) PPC_WEAK_FUNC(sub_83354280);
PPC_FUNC_IMPL(__imp__sub_83354280) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x833542b0
	if (!ctx.cr6.lt) goto loc_833542B0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x833542b4
	goto loc_833542B4;
loc_833542B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_833542B4:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x8333cd18
	ctx.lr = 0x833542C4;
	sub_8333CD18(ctx, base);
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

__attribute__((alias("__imp__sub_833542DC"))) PPC_WEAK_FUNC(sub_833542DC);
PPC_FUNC_IMPL(__imp__sub_833542DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833542E0"))) PPC_WEAK_FUNC(sub_833542E0);
PPC_FUNC_IMPL(__imp__sub_833542E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x833542E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,1456(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832e7248
	ctx.lr = 0x83354308;
	sub_832E7248(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x8335432c
	if (ctx.cr0.eq) goto loc_8335432C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1456(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1456);
	// bl 0x83314848
	ctx.lr = 0x83354324;
	sub_83314848(ctx, base);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// b 0x83354330
	goto loc_83354330;
loc_8335432C:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_83354330:
	// stw r24,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r24.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,1456(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// bl 0x832e7248
	ctx.lr = 0x83354348;
	sub_832E7248(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x83354368
	if (ctx.cr0.eq) goto loc_83354368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1456(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1456);
	// bl 0x83314848
	ctx.lr = 0x83354360;
	sub_83314848(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// b 0x8335436c
	goto loc_8335436C;
loc_83354368:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_8335436C:
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_83354374:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335440c
	if (!ctx.cr0.eq) goto loc_8335440C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833543e0
	if (ctx.cr6.eq) goto loc_833543E0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x833543a4
	if (!ctx.cr0.lt) goto loc_833543A4;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
loc_833543A4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x833543C0;
	sub_8333CEF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x833543D0;
	sub_8333CEF8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x83354374
	goto loc_83354374;
loc_833543E0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833543fc
	if (!ctx.cr6.eq) goto loc_833543FC;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
loc_833543FC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83354408
	if (ctx.cr6.eq) goto loc_83354408;
	// stw r31,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r31.u32);
loc_83354408:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8335440C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83354374
	if (!ctx.cr6.eq) goto loc_83354374;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83354440
	if (!ctx.cr6.eq) goto loc_83354440;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8335443c
	if (ctx.cr6.eq) goto loc_8335443C;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_8335443C:
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_83354440:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8335448c
	if (ctx.cr6.eq) goto loc_8335448C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x83354280
	ctx.lr = 0x83354458;
	sub_83354280(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83354374
	if (!ctx.cr6.eq) goto loc_83354374;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83354480
	if (ctx.cr6.eq) goto loc_83354480;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x83354484
	goto loc_83354484;
loc_83354480:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83354484:
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x83354374
	goto loc_83354374;
loc_8335448C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83354564
	if (ctx.cr6.eq) goto loc_83354564;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x833544b4
	if (!ctx.cr6.lt) goto loc_833544B4;
loc_833544A8:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x833544c0
	goto loc_833544C0;
loc_833544B4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8333cef8
	ctx.lr = 0x833544C0;
	sub_8333CEF8(ctx, base);
loc_833544C0:
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x83354550
	if (!ctx.cr6.gt) goto loc_83354550;
	// lwz r31,1456(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1456);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e7248
	ctx.lr = 0x833544E0;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x83354500
	if (ctx.cr0.eq) goto loc_83354500;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83353fb8
	ctx.lr = 0x833544F8;
	sub_83353FB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83354504
	goto loc_83354504;
loc_83354500:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_83354504:
	// lwz r3,96(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x83354510;
	sub_8333CEF8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
loc_83354520:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8335453c
	if (ctx.cr6.eq) goto loc_8335453C;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x83354534;
	sub_8333CEF8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8335453C:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83354550
	if (ctx.cr6.eq) goto loc_83354550;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// b 0x83354520
	goto loc_83354520;
loc_83354550:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x833544a8
	if (ctx.cr6.lt) goto loc_833544A8;
loc_83354564:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335456C"))) PPC_WEAK_FUNC(sub_8335456C);
PPC_FUNC_IMPL(__imp__sub_8335456C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83354570"))) PPC_WEAK_FUNC(sub_83354570);
PPC_FUNC_IMPL(__imp__sub_83354570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x83354578;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83353c70
	ctx.lr = 0x8335459C;
	sub_83353C70(ctx, base);
	// lwz r27,1456(r21)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1456);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832e7248
	ctx.lr = 0x833545B0;
	sub_832E7248(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x833545d0
	if (ctx.cr0.eq) goto loc_833545D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1456(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1456);
	// bl 0x83314848
	ctx.lr = 0x833545CC;
	sub_83314848(ctx, base);
	// b 0x833545d4
	goto loc_833545D4;
loc_833545D0:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_833545D4:
	// stw r30,96(r20)
	PPC_STORE_U32(ctx.r20.u32 + 96, ctx.r30.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833542e0
	ctx.lr = 0x833545F0;
	sub_833542E0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83354060
	ctx.lr = 0x833545F8;
	sub_83354060(ctx, base);
	// rlwinm r4,r31,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x832e7ce8
	ctx.lr = 0x83354604;
	sub_832E7CE8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x83354630
	if (!ctx.cr6.gt) goto loc_83354630;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_83354618:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r19,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r19.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x83354618
	if (ctx.cr6.lt) goto loc_83354618;
loc_83354630:
	// lwz r11,96(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// li r17,-1
	ctx.r17.s64 = -1;
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83354a28
	if (!ctx.cr6.gt) goto loc_83354A28;
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
loc_8335464C:
	// lwz r3,96(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83354668
	if (!ctx.cr6.lt) goto loc_83354668;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// b 0x83354670
	goto loc_83354670;
loc_83354668:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8333cef8
	ctx.lr = 0x83354670;
	sub_8333CEF8(ctx, base);
loc_83354670:
	// lwz r22,0(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r23,0(r22)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83354714
	if (!ctx.cr6.gt) goto loc_83354714;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_83354694:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x833546ac
	if (!ctx.cr6.lt) goto loc_833546AC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x833546b4
	goto loc_833546B4;
loc_833546AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8333cef8
	ctx.lr = 0x833546B4;
	sub_8333CEF8(ctx, base);
loc_833546B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x833546fc
	if (!ctx.cr6.gt) goto loc_833546FC;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_833546D0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x833546f8
	if (!ctx.cr6.eq) goto loc_833546F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x833546d0
	if (ctx.cr6.lt) goto loc_833546D0;
	// b 0x833546fc
	goto loc_833546FC;
loc_833546F8:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_833546FC:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83354694
	if (ctx.cr6.lt) goto loc_83354694;
loc_83354714:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x833547ac
	if (!ctx.cr0.eq) goto loc_833547AC;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// ble cr6,0x83354a10
	if (!ctx.cr6.gt) goto loc_83354A10;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_83354734:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8335474c
	if (!ctx.cr6.lt) goto loc_8335474C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x83354754
	goto loc_83354754;
loc_8335474C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8333cef8
	ctx.lr = 0x83354754;
	sub_8333CEF8(ctx, base);
loc_83354754:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x83354790
	if (!ctx.cr6.gt) goto loc_83354790;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_83354770:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x83354790
	if (!ctx.cr6.eq) goto loc_83354790;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x83354770
	if (ctx.cr6.lt) goto loc_83354770;
loc_83354790:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83354734
	if (ctx.cr6.lt) goto loc_83354734;
	// b 0x83354a10
	goto loc_83354A10;
loc_833547AC:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// ble cr6,0x83354a10
	if (!ctx.cr6.gt) goto loc_83354A10;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
loc_833547BC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x833547d4
	if (!ctx.cr6.lt) goto loc_833547D4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x833547dc
	goto loc_833547DC;
loc_833547D4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8333cef8
	ctx.lr = 0x833547DC;
	sub_8333CEF8(ctx, base);
loc_833547DC:
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x833549f8
	if (!ctx.cr6.gt) goto loc_833549F8;
	// addi r25,r23,-1
	ctx.r25.s64 = ctx.r23.s64 + -1;
loc_833547F0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x833548dc
	if (!ctx.cr6.eq) goto loc_833548DC;
	// lwz r11,52(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83354858
	if (ctx.cr6.eq) goto loc_83354858;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83354854
	if (ctx.cr6.eq) goto loc_83354854;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83354858
	if (ctx.cr6.eq) goto loc_83354858;
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8335484c
	goto loc_8335484C;
loc_8335482C:
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83354844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83354858
	if (!ctx.cr0.eq) goto loc_83354858;
loc_8335484C:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8335482c
	if (!ctx.cr6.eq) goto loc_8335482C;
loc_83354854:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_83354858:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x833548a0
	if (!ctx.cr6.eq) goto loc_833548A0;
	// bl 0x832e7248
	ctx.lr = 0x8335487C;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x833548c8
	if (ctx.cr0.eq) goto loc_833548C8;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x833437f8
	ctx.lr = 0x8335489C;
	sub_833437F8(ctx, base);
	// b 0x833548cc
	goto loc_833548CC;
loc_833548A0:
	// bl 0x832e7248
	ctx.lr = 0x833548A4;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x833548c8
	if (ctx.cr0.eq) goto loc_833548C8;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x83343740
	ctx.lr = 0x833548C4;
	sub_83343740(ctx, base);
	// b 0x833548cc
	goto loc_833548CC;
loc_833548C8:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_833548CC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83345350
	ctx.lr = 0x833548DC;
	sub_83345350(ctx, base);
loc_833548DC:
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x833549bc
	if (!ctx.cr6.eq) goto loc_833549BC;
	// add r10,r28,r27
	ctx.r10.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lwz r11,52(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83354944
	if (ctx.cr6.eq) goto loc_83354944;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83354948
	if (ctx.cr6.eq) goto loc_83354948;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83354944
	if (ctx.cr6.eq) goto loc_83354944;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8335493c
	goto loc_8335493C;
loc_8335491C:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83354934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83354948
	if (!ctx.cr0.eq) goto loc_83354948;
loc_8335493C:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8335491c
	if (!ctx.cr6.eq) goto loc_8335491C;
loc_83354944:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_83354948:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83354988
	if (!ctx.cr6.eq) goto loc_83354988;
	// bl 0x832e7248
	ctx.lr = 0x8335496C;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x833549a8
	if (ctx.cr0.eq) goto loc_833549A8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x83343968
	ctx.lr = 0x83354984;
	sub_83343968(ctx, base);
	// b 0x833549ac
	goto loc_833549AC;
loc_83354988:
	// bl 0x832e7248
	ctx.lr = 0x8335498C;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x833549a8
	if (ctx.cr0.eq) goto loc_833549A8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x833438b0
	ctx.lr = 0x833549A4;
	sub_833438B0(ctx, base);
	// b 0x833549ac
	goto loc_833549AC;
loc_833549A8:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_833549AC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x833452f0
	ctx.lr = 0x833549BC;
	sub_833452F0(ctx, base);
loc_833549BC:
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// add r9,r11,r18
	ctx.r9.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// blt cr6,0x833547f0
	if (ctx.cr6.lt) goto loc_833547F0;
loc_833549F8:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x833547bc
	if (ctx.cr6.lt) goto loc_833547BC;
loc_83354A10:
	// lwz r11,96(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r15,r15,4
	ctx.r15.s64 = ctx.r15.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8335464c
	if (ctx.cr6.lt) goto loc_8335464C;
loc_83354A28:
	// addi r5,r17,1
	ctx.r5.s64 = ctx.r17.s64 + 1;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r5,1532(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1532, ctx.r5.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,7692
	ctx.r4.s64 = ctx.r11.s64 + 7692;
	// bl 0x832e7968
	ctx.lr = 0x83354A40;
	sub_832E7968(ctx, base);
	// lwz r3,1444(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1444);
	// lwz r11,1436(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1436);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83354A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83354A5C"))) PPC_WEAK_FUNC(sub_83354A5C);
PPC_FUNC_IMPL(__imp__sub_83354A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83354A60"))) PPC_WEAK_FUNC(sub_83354A60);
PPC_FUNC_IMPL(__imp__sub_83354A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83354A68;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83354a90
	if (ctx.cr6.lt) goto loc_83354A90;
	// li r27,43
	ctx.r27.s64 = 43;
	// b 0x83354a98
	goto loc_83354A98;
loc_83354A90:
	// li r27,45
	ctx.r27.s64 = 45;
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_83354A98:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f30,6404(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6404);
	ctx.f30.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,24704
	ctx.r29.s64 = ctx.r11.s64 + 24704;
	// fsubs f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fctiwz f0,f31
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83354ADC:
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fctiwz f0,f31
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82cb61f0
	ctx.lr = 0x83354B18;
	sub_82CB61F0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// blt cr6,0x83354adc
	if (ctx.cr6.lt) goto loc_83354ADC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,7732
	ctx.r4.s64 = ctx.r10.s64 + 7732;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// extsb r5,r27
	ctx.r5.s64 = ctx.r27.s8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb61f0
	ctx.lr = 0x83354B48;
	sub_82CB61F0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83354B58"))) PPC_WEAK_FUNC(sub_83354B58);
PPC_FUNC_IMPL(__imp__sub_83354B58) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bge cr6,0x83354b68
	if (!ctx.cr6.lt) goto loc_83354B68;
	// neg r11,r4
	ctx.r11.s64 = -ctx.r4.s64;
loc_83354B68:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f13,-18352(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18352);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83354B74:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83354b80
	if (ctx.cr0.eq) goto loc_83354B80;
	// fmul f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 * ctx.f1.f64;
loc_83354B80:
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83354b90
	if (ctx.cr0.eq) goto loc_83354B90;
	// fmul f1,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 * ctx.f1.f64;
	// b 0x83354b74
	goto loc_83354B74;
loc_83354B90:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x83354b9c
	if (!ctx.cr6.lt) goto loc_83354B9C;
	// fdiv f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
loc_83354B9C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83354BA4"))) PPC_WEAK_FUNC(sub_83354BA4);
PPC_FUNC_IMPL(__imp__sub_83354BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83354BA8"))) PPC_WEAK_FUNC(sub_83354BA8);
PPC_FUNC_IMPL(__imp__sub_83354BA8) {
	PPC_FUNC_PROLOGUE();
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bge cr6,0x83354bbc
	if (!ctx.cr6.lt) goto loc_83354BBC;
	// neg r11,r4
	ctx.r11.s64 = -ctx.r4.s64;
loc_83354BBC:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f12,-18352(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18352);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_83354BC8:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83354bd4
	if (ctx.cr0.eq) goto loc_83354BD4;
	// fmul f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
loc_83354BD4:
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83354be4
	if (ctx.cr0.eq) goto loc_83354BE4;
	// fmul f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 * ctx.f13.f64;
	// b 0x83354bc8
	goto loc_83354BC8;
loc_83354BE4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x83354bf0
	if (!ctx.cr6.lt) goto loc_83354BF0;
	// fdiv f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64 / ctx.f0.f64;
loc_83354BF0:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83354BF8"))) PPC_WEAK_FUNC(sub_83354BF8);
PPC_FUNC_IMPL(__imp__sub_83354BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x83354C00;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6ae8
	ctx.lr = 0x83354C08;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r25,-8
	ctx.r30.s64 = ctx.r25.s64 + -8;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r28,r25,-5
	ctx.r28.s64 = ctx.r25.s64 + -5;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// addi r24,r11,-21168
	ctx.r24.s64 = ctx.r11.s64 + -21168;
	// addi r23,r10,7816
	ctx.r23.s64 = ctx.r10.s64 + 7816;
	// bge cr6,0x83354c54
	if (!ctx.cr6.lt) goto loc_83354C54;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,7796
	ctx.r5.s64 = ctx.r11.s64 + 7796;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,82
	ctx.r7.s64 = 82;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83354C54;
	sub_8320CF10(ctx, base);
loc_83354C54:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bne cr6,0x83354cd0
	if (!ctx.cr6.eq) goto loc_83354CD0;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// li r10,46
	ctx.r10.s64 = 46;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// ble cr6,0x83354ca8
	if (!ctx.cr6.gt) goto loc_83354CA8;
	// addic. r11,r28,-3
	ctx.xer.ca = ctx.r28.u32 > 2;
	ctx.r11.s64 = ctx.r28.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 3;
	// beq 0x83354ca4
	if (ctx.cr0.eq) goto loc_83354CA4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83354C98:
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83354c98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83354C98;
loc_83354CA4:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_83354CA8:
	// li r10,69
	ctx.r10.s64 = 69;
	// li r8,43
	ctx.r8.s64 = 43;
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r8,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r9,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r9,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// b 0x83354e74
	goto loc_83354E74;
loc_83354CD0:
	// li r27,45
	ctx.r27.s64 = 45;
	// fcmpu cr6,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// li r26,43
	ctx.r26.s64 = 43;
	// blt cr6,0x83354ce8
	if (ctx.cr6.lt) goto loc_83354CE8;
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// b 0x83354cf0
	goto loc_83354CF0;
loc_83354CE8:
	// fneg f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
loc_83354CF0:
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r10,r11,23
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 23;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r29,255
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 255, ctx.xer);
	// bne cr6,0x83354d2c
	if (!ctx.cr6.eq) goto loc_83354D2C;
	// clrlwi. r11,r11,9
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83354d2c
	if (ctx.cr0.eq) goto loc_83354D2C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,7768
	ctx.r5.s64 = ctx.r11.s64 + 7768;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,108
	ctx.r7.s64 = 108;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83354D2C;
	sub_8320CF10(ctx, base);
loc_83354D2C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r29,-127
	ctx.r4.s64 = ctx.r29.s64 + -127;
	// lfd f1,-18376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18376);
	// bl 0x83354ba8
	ctx.lr = 0x83354D3C;
	sub_83354BA8(ctx, base);
	// bl 0x82cb4db8
	ctx.lr = 0x83354D40;
	sub_82CB4DB8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfd f31,-16744(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16744);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4db8
	ctx.lr = 0x83354D54;
	sub_82CB4DB8(ctx, base);
	// fdiv f1,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64 / ctx.f1.f64;
	// bl 0x82cb2298
	ctx.lr = 0x83354D5C;
	sub_82CB2298(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83354ba8
	ctx.lr = 0x83354D74;
	sub_83354BA8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfd f0,-18360(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18360);
	// fdiv f28,f0,f1
	ctx.f28.f64 = ctx.f0.f64 / ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83354ba8
	ctx.lr = 0x83354D8C;
	sub_83354BA8(ctx, base);
	// fdiv f0,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64 / ctx.f1.f64;
	// fadd f30,f0,f28
	ctx.f30.f64 = ctx.f0.f64 + ctx.f28.f64;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// blt cr6,0x83354db4
	if (ctx.cr6.lt) goto loc_83354DB4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83354ba8
	ctx.lr = 0x83354DAC;
	sub_83354BA8(ctx, base);
	// fdiv f0,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64 / ctx.f1.f64;
	// fadd f30,f0,f28
	ctx.f30.f64 = ctx.f0.f64 + ctx.f28.f64;
loc_83354DB4:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82cb2298
	ctx.lr = 0x83354DBC;
	sub_82CB2298(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// li r9,46
	ctx.r9.s64 = 46;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// li r29,3
	ctx.r29.s64 = 3;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// stb r9,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r9.u8);
	// ble cr6,0x83354e24
	if (!ctx.cr6.gt) goto loc_83354E24;
loc_83354DE4:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fsub f0,f30,f0
	ctx.f0.f64 = ctx.f30.f64 - ctx.f0.f64;
	// fmul f30,f0,f31
	ctx.f30.f64 = ctx.f0.f64 * ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82cb2298
	ctx.lr = 0x83354E04;
	sub_82CB2298(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stbx r10,r29,r31
	PPC_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x83354de4
	if (ctx.cr6.lt) goto loc_83354DE4;
loc_83354E24:
	// li r11,69
	ctx.r11.s64 = 69;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stbx r11,r29,r31
	PPC_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// blt cr6,0x83354e40
	if (ctx.cr6.lt) goto loc_83354E40;
	// stbx r26,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r26.u8);
	// b 0x83354e48
	goto loc_83354E48;
loc_83354E40:
	// stbx r27,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u8);
	// neg r30,r30
	ctx.r30.s64 = -ctx.r30.s64;
loc_83354E48:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divw r10,r30,r9
	ctx.r10.s32 = ctx.r30.s32 / ctx.r9.s32;
	// divw r9,r30,r9
	ctx.r9.s32 = ctx.r30.s32 / ctx.r9.s32;
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// mulli r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 * 10;
	// stbx r8,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u8);
	// subf r10,r9,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r9.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
loc_83354E74:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83354ea0
	if (ctx.cr6.eq) goto loc_83354EA0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,7744
	ctx.r5.s64 = ctx.r11.s64 + 7744;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,143
	ctx.r7.s64 = 143;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83354EA0;
	sub_8320CF10(ctx, base);
loc_83354EA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6b34
	ctx.lr = 0x83354EB4;
	__restfpr_28(ctx, base);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83354EB8"))) PPC_WEAK_FUNC(sub_83354EB8);
PPC_FUNC_IMPL(__imp__sub_83354EB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83354ecc
	if (ctx.cr0.eq) goto loc_83354ECC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83354ECC:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// addi r10,r10,-11080
	ctx.r10.s64 = ctx.r10.s64 + -11080;
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83354EE8"))) PPC_WEAK_FUNC(sub_83354EE8);
PPC_FUNC_IMPL(__imp__sub_83354EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83354EF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-11080
	ctx.r29.s64 = ctx.r11.s64 + -11080;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83354f1c
	if (ctx.cr0.eq) goto loc_83354F1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83354f2c
	goto loc_83354F2C;
loc_83354F1C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
loc_83354F2C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83354f44
	if (!ctx.cr0.eq) goto loc_83354F44;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,7912
	ctx.r11.s64 = ctx.r11.s64 + 7912;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x83354f88
	goto loc_83354F88;
loc_83354F44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83354F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83354f94
	if (!ctx.cr0.eq) goto loc_83354F94;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,7912
	ctx.r11.s64 = ctx.r11.s64 + 7912;
	// beq 0x83354f84
	if (ctx.cr0.eq) goto loc_83354F84;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x83354f88
	goto loc_83354F88;
loc_83354F84:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_83354F88:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_83354F94:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83354FAC"))) PPC_WEAK_FUNC(sub_83354FAC);
PPC_FUNC_IMPL(__imp__sub_83354FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83354FB0"))) PPC_WEAK_FUNC(sub_83354FB0);
PPC_FUNC_IMPL(__imp__sub_83354FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83354FB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-11080
	ctx.r29.s64 = ctx.r11.s64 + -11080;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83354fe0
	if (ctx.cr0.eq) goto loc_83354FE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83354ff0
	goto loc_83354FF0;
loc_83354FE0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
loc_83354FF0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83355008
	if (!ctx.cr0.eq) goto loc_83355008;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,7912
	ctx.r11.s64 = ctx.r11.s64 + 7912;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x8335504c
	goto loc_8335504C;
loc_83355008:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8335501C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335505c
	if (!ctx.cr0.eq) goto loc_8335505C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,7912
	ctx.r11.s64 = ctx.r11.s64 + 7912;
	// beq 0x83355048
	if (ctx.cr0.eq) goto loc_83355048;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8335504c
	goto loc_8335504C;
loc_83355048:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8335504C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8335505C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8335508c
	if (!ctx.cr6.eq) goto loc_8335508C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,8232
	ctx.r6.s64 = ctx.r11.s64 + 8232;
	// addi r5,r10,8216
	ctx.r5.s64 = ctx.r10.s64 + 8216;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8335508C;
	sub_8320CF10(ctx, base);
loc_8335508C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83355094"))) PPC_WEAK_FUNC(sub_83355094);
PPC_FUNC_IMPL(__imp__sub_83355094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83355098"))) PPC_WEAK_FUNC(sub_83355098);
PPC_FUNC_IMPL(__imp__sub_83355098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x833550A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833550C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r27,r10,7976
	ctx.r27.s64 = ctx.r10.s64 + 7976;
	// addi r29,r11,6768
	ctx.r29.s64 = ctx.r11.s64 + 6768;
	// ble 0x83355120
	if (!ctx.cr0.gt) goto loc_83355120;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r10,r29,6
	ctx.r10.s64 = ctx.r29.s64 + 6;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83355110
	if (ctx.cr0.eq) goto loc_83355110;
	// lbz r10,159(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 159);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83355110
	if (ctx.cr0.eq) goto loc_83355110;
	// li r25,1
	ctx.r25.s64 = 1;
loc_83355110:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8335525c
	if (ctx.cr6.eq) goto loc_8335525C;
loc_83355120:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r11,-11080
	ctx.r28.s64 = ctx.r11.s64 + -11080;
	// mulli r11,r10,52
	ctx.r11.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833551e4
	if (ctx.cr0.eq) goto loc_833551E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83355150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bgt cr6,0x83355174
	if (ctx.cr6.gt) goto loc_83355174;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8335516C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833551e4
	if (ctx.cr0.eq) goto loc_833551E4;
loc_83355174:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83355188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r29,6
	ctx.r10.s64 = ctx.r29.s64 + 6;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r11,58
	ctx.r9.s64 = ctx.r11.s64 + 58;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwz r9,80(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x833551d4
	if (ctx.cr0.eq) goto loc_833551D4;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lbz r11,158(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 158);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x833551d4
	if (ctx.cr0.eq) goto loc_833551D4;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_833551D4:
	// mulli r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 * 5;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
loc_833551E4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8335525c
	if (ctx.cr6.eq) goto loc_8335525C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335525c
	if (ctx.cr0.eq) goto loc_8335525C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83355214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x8335525c
	if (!ctx.cr6.gt) goto loc_8335525C;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r10,r29,6
	ctx.r10.s64 = ctx.r29.s64 + 6;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8335524c
	if (ctx.cr0.eq) goto loc_8335524C;
	// lbz r11,161(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 161);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335524c
	if (ctx.cr0.eq) goto loc_8335524C;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8335524C:
	// mulli r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 * 5;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
loc_8335525C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8335526c
	if (ctx.cr6.gt) goto loc_8335526C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8335526C:
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83355284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355294
	if (ctx.cr0.eq) goto loc_83355294;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bgt cr6,0x833552a8
	if (ctx.cr6.gt) goto loc_833552A8;
loc_83355294:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x833552ac
	if (ctx.cr0.eq) goto loc_833552AC;
	// cmpw cr6,r25,r26
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x833552ac
	if (!ctx.cr6.lt) goto loc_833552AC;
loc_833552A8:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_833552AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833552B8"))) PPC_WEAK_FUNC(sub_833552B8);
PPC_FUNC_IMPL(__imp__sub_833552B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x833552C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833552E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833552f0
	if (ctx.cr0.eq) goto loc_833552F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83355400
	goto loc_83355400;
loc_833552F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83355098
	ctx.lr = 0x833552FC;
	sub_83355098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,8232
	ctx.r28.s64 = ctx.r10.s64 + 8232;
	// bne cr6,0x83355334
	if (!ctx.cr6.eq) goto loc_83355334;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8360
	ctx.r5.s64 = ctx.r11.s64 + 8360;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,169
	ctx.r7.s64 = 169;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83355334;
	sub_8320CF10(ctx, base);
loc_83355334:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83355360
	if (ctx.cr6.eq) goto loc_83355360;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x83355360
	if (ctx.cr6.eq) goto loc_83355360;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83355360
	if (ctx.cr6.eq) goto loc_83355360;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83355400
	goto loc_83355400;
loc_83355360:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r9,-31906
	ctx.r9.s64 = -2090991616;
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// addi r9,r9,-11080
	ctx.r9.s64 = ctx.r9.s64 + -11080;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x833553b0
	if (ctx.cr0.eq) goto loc_833553B0;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// ble cr6,0x833553a0
	if (!ctx.cr6.gt) goto loc_833553A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8340
	ctx.r5.s64 = ctx.r11.s64 + 8340;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,182
	ctx.r7.s64 = 182;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833553A0;
	sub_8320CF10(ctx, base);
loc_833553A0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mulli r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 * 5;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x833553e0
	goto loc_833553E0;
loc_833553B0:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x833553d4
	if (!ctx.cr6.gt) goto loc_833553D4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8320
	ctx.r5.s64 = ctx.r11.s64 + 8320;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,185
	ctx.r7.s64 = 185;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833553D4;
	sub_8320CF10(ctx, base);
loc_833553D4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mulli r10,r31,5
	ctx.r10.s64 = ctx.r31.s64 * 5;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_833553E0:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,7976
	ctx.r10.s64 = ctx.r10.s64 + 7976;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_83355400:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83355408"))) PPC_WEAK_FUNC(sub_83355408);
PPC_FUNC_IMPL(__imp__sub_83355408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83355410;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83355430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83355588
	if (!ctx.cr0.eq) goto loc_83355588;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83355098
	ctx.lr = 0x83355444;
	sub_83355098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,8232
	ctx.r27.s64 = ctx.r10.s64 + 8232;
	// bne cr6,0x8335547c
	if (!ctx.cr6.eq) goto loc_8335547C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,8360
	ctx.r5.s64 = ctx.r11.s64 + 8360;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,202
	ctx.r7.s64 = 202;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8335547C;
	sub_8320CF10(ctx, base);
loc_8335547C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83355494
	if (!ctx.cr6.eq) goto loc_83355494;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r11.u8);
	// b 0x833554c8
	goto loc_833554C8;
loc_83355494:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x833554c8
	if (ctx.cr6.eq) goto loc_833554C8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x833554c8
	if (ctx.cr6.eq) goto loc_833554C8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,8380
	ctx.r5.s64 = ctx.r11.s64 + 8380;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,207
	ctx.r7.s64 = 207;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833554C8;
	sub_8320CF10(ctx, base);
loc_833554C8:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// addi r10,r10,-11080
	ctx.r10.s64 = ctx.r10.s64 + -11080;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355518
	if (ctx.cr0.eq) goto loc_83355518;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// ble cr6,0x83355508
	if (!ctx.cr6.gt) goto loc_83355508;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,8340
	ctx.r5.s64 = ctx.r11.s64 + 8340;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,211
	ctx.r7.s64 = 211;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83355508;
	sub_8320CF10(ctx, base);
loc_83355508:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 * 5;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x8335554c
	goto loc_8335554C;
loc_83355518:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x83355540
	if (!ctx.cr6.gt) goto loc_83355540;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,8320
	ctx.r5.s64 = ctx.r11.s64 + 8320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,214
	ctx.r7.s64 = 214;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83355540;
	sub_8320CF10(ctx, base);
loc_83355540:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r10,r31,5
	ctx.r10.s64 = ctx.r31.s64 * 5;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8335554C:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,7976
	ctx.r10.s64 = ctx.r10.s64 + 7976;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83355588
	if (!ctx.cr6.eq) goto loc_83355588;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,8216
	ctx.r5.s64 = ctx.r11.s64 + 8216;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,218
	ctx.r7.s64 = 218;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83355588;
	sub_8320CF10(ctx, base);
loc_83355588:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83355590"))) PPC_WEAK_FUNC(sub_83355590);
PPC_FUNC_IMPL(__imp__sub_83355590) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,228(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-11080
	ctx.r11.s64 = ctx.r11.s64 + -11080;
	// beq 0x833555ac
	if (ctx.cr0.eq) goto loc_833555AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x833555bc
	goto loc_833555BC;
loc_833555AC:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_833555BC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x833555d4
	if (!ctx.cr0.eq) goto loc_833555D4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_833555D4:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x833555f8
	if (ctx.cr0.eq) goto loc_833555F8;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_833555F8:
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355610"))) PPC_WEAK_FUNC(sub_83355610);
PPC_FUNC_IMPL(__imp__sub_83355610) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,228(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-11080
	ctx.r11.s64 = ctx.r11.s64 + -11080;
	// beq 0x8335562c
	if (ctx.cr0.eq) goto loc_8335562C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8335563c
	goto loc_8335563C;
loc_8335562C:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_8335563C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83355654
	if (!ctx.cr0.eq) goto loc_83355654;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_83355654:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83355678
	if (ctx.cr0.eq) goto loc_83355678;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_83355678:
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355690"))) PPC_WEAK_FUNC(sub_83355690);
PPC_FUNC_IMPL(__imp__sub_83355690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x833556bc
	if (!ctx.cr6.gt) goto loc_833556BC;
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x833556b4
	if (!ctx.cr0.eq) goto loc_833556B4;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x833556bc
	if (!ctx.cr6.eq) goto loc_833556BC;
loc_833556B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_833556BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833556C4"))) PPC_WEAK_FUNC(sub_833556C4);
PPC_FUNC_IMPL(__imp__sub_833556C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833556C8"))) PPC_WEAK_FUNC(sub_833556C8);
PPC_FUNC_IMPL(__imp__sub_833556C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 104, ctx.xer);
	// beq cr6,0x83355718
	if (ctx.cr6.eq) goto loc_83355718;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x83355718
	if (ctx.cr6.eq) goto loc_83355718;
	// cmpwi cr6,r11,106
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 106, ctx.xer);
	// beq cr6,0x83355718
	if (ctx.cr6.eq) goto loc_83355718;
	// cmpwi cr6,r11,107
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 107, ctx.xer);
	// beq cr6,0x83355718
	if (ctx.cr6.eq) goto loc_83355718;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// beq cr6,0x83355718
	if (ctx.cr6.eq) goto loc_83355718;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// beq cr6,0x83355718
	if (ctx.cr6.eq) goto loc_83355718;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x83355718
	if (ctx.cr6.eq) goto loc_83355718;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x83355718
	if (ctx.cr6.eq) goto loc_83355718;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8335571c
	if (!ctx.cr6.eq) goto loc_8335571C;
loc_83355718:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8335571C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355724"))) PPC_WEAK_FUNC(sub_83355724);
PPC_FUNC_IMPL(__imp__sub_83355724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83355728"))) PPC_WEAK_FUNC(sub_83355728);
PPC_FUNC_IMPL(__imp__sub_83355728) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x83355750
	if (ctx.cr6.eq) goto loc_83355750;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x83355750
	if (ctx.cr6.eq) goto loc_83355750;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x83355750
	if (ctx.cr6.eq) goto loc_83355750;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83355754
	if (!ctx.cr6.eq) goto loc_83355754;
loc_83355750:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83355754:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335575C"))) PPC_WEAK_FUNC(sub_8335575C);
PPC_FUNC_IMPL(__imp__sub_8335575C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83355760"))) PPC_WEAK_FUNC(sub_83355760);
PPC_FUNC_IMPL(__imp__sub_83355760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x83355790
	if (ctx.cr6.eq) goto loc_83355790;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x83355790
	if (ctx.cr6.eq) goto loc_83355790;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x83355790
	if (ctx.cr6.eq) goto loc_83355790;
	// cmpwi cr6,r11,142
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 142, ctx.xer);
	// beq cr6,0x83355790
	if (ctx.cr6.eq) goto loc_83355790;
	// cmpwi cr6,r11,143
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 143, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83355794
	if (!ctx.cr6.eq) goto loc_83355794;
loc_83355790:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83355794:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335579C"))) PPC_WEAK_FUNC(sub_8335579C);
PPC_FUNC_IMPL(__imp__sub_8335579C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833557A0"))) PPC_WEAK_FUNC(sub_833557A0);
PPC_FUNC_IMPL(__imp__sub_833557A0) {
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
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x83355880
	if (!ctx.cr6.eq) goto loc_83355880;
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833557f0
	if (ctx.cr0.eq) goto loc_833557F0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x833557f0
	if (!ctx.cr6.eq) goto loc_833557F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833401d8
	ctx.lr = 0x833557E8;
	sub_833401D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335588c
	if (!ctx.cr0.eq) goto loc_8335588C;
loc_833557F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83355804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355878
	if (ctx.cr0.eq) goto loc_83355878;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83355820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355834
	if (ctx.cr0.eq) goto loc_83355834;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8335588c
	if (ctx.cr6.eq) goto loc_8335588C;
loc_83355834:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83355848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355878
	if (ctx.cr0.eq) goto loc_83355878;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83355864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355878
	if (ctx.cr0.eq) goto loc_83355878;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8335588c
	if (ctx.cr6.eq) goto loc_8335588C;
loc_83355878:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83355890
	goto loc_83355890;
loc_83355880:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x83355890
	if (ctx.cr6.eq) goto loc_83355890;
loc_8335588C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83355890:
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

__attribute__((alias("__imp__sub_833558A8"))) PPC_WEAK_FUNC(sub_833558A8);
PPC_FUNC_IMPL(__imp__sub_833558A8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x833558d8
	if (ctx.cr6.eq) goto loc_833558D8;
loc_833558C0:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x833558c0
	if (!ctx.cr6.eq) goto loc_833558C0;
loc_833558D8:
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x833558fc
	if (ctx.cr6.eq) goto loc_833558FC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_833558E4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bne cr6,0x833558e4
	if (!ctx.cr6.eq) goto loc_833558E4;
loc_833558FC:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355908"))) PPC_WEAK_FUNC(sub_83355908);
PPC_FUNC_IMPL(__imp__sub_83355908) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355914"))) PPC_WEAK_FUNC(sub_83355914);
PPC_FUNC_IMPL(__imp__sub_83355914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83355918"))) PPC_WEAK_FUNC(sub_83355918);
PPC_FUNC_IMPL(__imp__sub_83355918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,8588
	ctx.r3.s64 = ctx.r11.s64 + 8588;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355924"))) PPC_WEAK_FUNC(sub_83355924);
PPC_FUNC_IMPL(__imp__sub_83355924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83355928"))) PPC_WEAK_FUNC(sub_83355928);
PPC_FUNC_IMPL(__imp__sub_83355928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mullw r8,r31,r9
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// stw r31,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r31.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// cmplwi cr6,r7,18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 18, ctx.xer);
	// bgt cr6,0x8335596c
	if (ctx.cr6.gt) goto loc_8335596C;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x83355980
	goto loc_83355980;
loc_8335596C:
	// addi r9,r10,-16
	ctx.r9.s64 = ctx.r10.s64 + -16;
	// subfic r9,r9,3
	ctx.xer.ca = ctx.r9.u32 <= 3;
	ctx.r9.s64 = 3 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_83355980:
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r10,-12
	ctx.r6.s64 = ctx.r10.s64 + -12;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// mullw r9,r8,r5
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// ble cr6,0x833559a0
	if (!ctx.cr6.gt) goto loc_833559A0;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_833559A0:
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x833559bc
	if (ctx.cr6.gt) goto loc_833559BC;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x833559c4
	goto loc_833559C4;
loc_833559BC:
	// addi r10,r5,63
	ctx.r10.s64 = ctx.r5.s64 + 63;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
loc_833559C4:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833559E4"))) PPC_WEAK_FUNC(sub_833559E4);
PPC_FUNC_IMPL(__imp__sub_833559E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833559E8"))) PPC_WEAK_FUNC(sub_833559E8);
PPC_FUNC_IMPL(__imp__sub_833559E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// stw r3,-3316(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3316, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833559F4"))) PPC_WEAK_FUNC(sub_833559F4);
PPC_FUNC_IMPL(__imp__sub_833559F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833559F8"))) PPC_WEAK_FUNC(sub_833559F8);
PPC_FUNC_IMPL(__imp__sub_833559F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// beq cr6,0x83355a1c
	if (ctx.cr6.eq) goto loc_83355A1C;
	// mullw r11,r5,r6
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
loc_83355A1C:
	// cmpwi cr6,r8,22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 22, ctx.xer);
	// blt cr6,0x83355a8c
	if (ctx.cr6.lt) goto loc_83355A8C;
	// addi r31,r8,-32
	ctx.r31.s64 = ctx.r8.s64 + -32;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bgt cr6,0x83355a54
	if (ctx.cr6.gt) goto loc_83355A54;
	// cmpwi cr6,r4,64
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 64, ctx.xer);
	// bne cr6,0x83355a44
	if (!ctx.cr6.eq) goto loc_83355A44;
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x83355a54
	goto loc_83355A54;
loc_83355A44:
	// cmpwi cr6,r4,128
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 128, ctx.xer);
	// bne cr6,0x83355a54
	if (!ctx.cr6.eq) goto loc_83355A54;
	// addi r11,r11,2047
	ctx.r11.s64 = ctx.r11.s64 + 2047;
	// rlwinm r11,r11,0,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
loc_83355A54:
	// lis r31,-31906
	ctx.r31.s64 = -2090991616;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r11,-3316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3316);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83355928
	ctx.lr = 0x83355A88;
	sub_83355928(ctx, base);
	// b 0x83355af0
	goto loc_83355AF0;
loc_83355A8C:
	// addi r31,r8,-8
	ctx.r31.s64 = ctx.r8.s64 + -8;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bgt cr6,0x83355abc
	if (ctx.cr6.gt) goto loc_83355ABC;
	// cmpwi cr6,r4,64
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 64, ctx.xer);
	// bne cr6,0x83355aac
	if (!ctx.cr6.eq) goto loc_83355AAC;
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x83355abc
	goto loc_83355ABC;
loc_83355AAC:
	// cmpwi cr6,r4,128
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 128, ctx.xer);
	// bne cr6,0x83355abc
	if (!ctx.cr6.eq) goto loc_83355ABC;
	// addi r11,r11,2047
	ctx.r11.s64 = ctx.r11.s64 + 2047;
	// rlwinm r11,r11,0,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
loc_83355ABC:
	// lis r31,-31906
	ctx.r31.s64 = -2090991616;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r11,-3316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3316);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83355928
	ctx.lr = 0x83355AF0;
	sub_83355928(ctx, base);
loc_83355AF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355B04"))) PPC_WEAK_FUNC(sub_83355B04);
PPC_FUNC_IMPL(__imp__sub_83355B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83355B08"))) PPC_WEAK_FUNC(sub_83355B08);
PPC_FUNC_IMPL(__imp__sub_83355B08) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x83355b1c
	if (!ctx.cr6.lt) goto loc_83355B1C;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x83355b28
	goto loc_83355B28;
loc_83355B1C:
	// li r11,4
	ctx.r11.s64 = 4;
	// bgt cr6,0x83355b28
	if (ctx.cr6.gt) goto loc_83355B28;
	// li r11,2
	ctx.r11.s64 = 2;
loc_83355B28:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x833559f8
	sub_833559F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83355B38"))) PPC_WEAK_FUNC(sub_83355B38);
PPC_FUNC_IMPL(__imp__sub_83355B38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// blt cr6,0x83355b5c
	if (ctx.cr6.lt) goto loc_83355B5C;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x83355b5c
	if (ctx.cr6.gt) goto loc_83355B5C;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// b 0x83355b6c
	goto loc_83355B6C;
loc_83355B5C:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83355b78
	if (ctx.cr6.lt) goto loc_83355B78;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bgt cr6,0x83355b78
	if (ctx.cr6.gt) goto loc_83355B78;
loc_83355B6C:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// b 0x83355b7c
	goto loc_83355B7C;
loc_83355B78:
	// li r8,0
	ctx.r8.s64 = 0;
loc_83355B7C:
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x833559f8
	sub_833559F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83355B90"))) PPC_WEAK_FUNC(sub_83355B90);
PPC_FUNC_IMPL(__imp__sub_83355B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r3,4
	ctx.r3.s64 = 4;
	// bge cr6,0x83355bbc
	if (!ctx.cr6.lt) goto loc_83355BBC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r8,21
	ctx.r8.s64 = 21;
	// li r4,256
	ctx.r4.s64 = 256;
	// b 0x833559f8
	sub_833559F8(ctx, base);
	return;
loc_83355BBC:
	// subfic r11,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r6.s64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r8,20
	ctx.r8.s64 = 20;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r11,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x833559f8
	sub_833559F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83355BDC"))) PPC_WEAK_FUNC(sub_83355BDC);
PPC_FUNC_IMPL(__imp__sub_83355BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83355BE0"))) PPC_WEAK_FUNC(sub_83355BE0);
PPC_FUNC_IMPL(__imp__sub_83355BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r3,-3316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3316);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355BEC"))) PPC_WEAK_FUNC(sub_83355BEC);
PPC_FUNC_IMPL(__imp__sub_83355BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83355BF0"))) PPC_WEAK_FUNC(sub_83355BF0);
PPC_FUNC_IMPL(__imp__sub_83355BF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355BF8"))) PPC_WEAK_FUNC(sub_83355BF8);
PPC_FUNC_IMPL(__imp__sub_83355BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355C00"))) PPC_WEAK_FUNC(sub_83355C00);
PPC_FUNC_IMPL(__imp__sub_83355C00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x83355c38
	if (ctx.cr6.lt) goto loc_83355C38;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bgt cr6,0x83355c38
	if (ctx.cr6.gt) goto loc_83355C38;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r3,r10,r9
	ctx.r3.s32 = ctx.r10.s32 / ctx.r9.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r9,0
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	// blr 
	return;
loc_83355C38:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355C40"))) PPC_WEAK_FUNC(sub_83355C40);
PPC_FUNC_IMPL(__imp__sub_83355C40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355C48"))) PPC_WEAK_FUNC(sub_83355C48);
PPC_FUNC_IMPL(__imp__sub_83355C48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355C50"))) PPC_WEAK_FUNC(sub_83355C50);
PPC_FUNC_IMPL(__imp__sub_83355C50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355C58"))) PPC_WEAK_FUNC(sub_83355C58);
PPC_FUNC_IMPL(__imp__sub_83355C58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355C60"))) PPC_WEAK_FUNC(sub_83355C60);
PPC_FUNC_IMPL(__imp__sub_83355C60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355C68"))) PPC_WEAK_FUNC(sub_83355C68);
PPC_FUNC_IMPL(__imp__sub_83355C68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355C70"))) PPC_WEAK_FUNC(sub_83355C70);
PPC_FUNC_IMPL(__imp__sub_83355C70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355C78"))) PPC_WEAK_FUNC(sub_83355C78);
PPC_FUNC_IMPL(__imp__sub_83355C78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355C80"))) PPC_WEAK_FUNC(sub_83355C80);
PPC_FUNC_IMPL(__imp__sub_83355C80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355C88"))) PPC_WEAK_FUNC(sub_83355C88);
PPC_FUNC_IMPL(__imp__sub_83355C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355CA0"))) PPC_WEAK_FUNC(sub_83355CA0);
PPC_FUNC_IMPL(__imp__sub_83355CA0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355CA8"))) PPC_WEAK_FUNC(sub_83355CA8);
PPC_FUNC_IMPL(__imp__sub_83355CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x83355fe8
	if (ctx.cr6.lt) goto loc_83355FE8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x83355fe8
	if (ctx.cr6.gt) goto loc_83355FE8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83355fe8
	if (!ctx.cr0.eq) goto loc_83355FE8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x83355cf4
	if (ctx.cr6.eq) goto loc_83355CF4;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x83355cf4
	if (ctx.cr6.eq) goto loc_83355CF4;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x83355cf4
	if (ctx.cr6.eq) goto loc_83355CF4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9936
	ctx.r3.s64 = ctx.r11.s64 + 9936;
	// blr 
	return;
loc_83355CF4:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x83355d0c
	if (ctx.cr6.gt) goto loc_83355D0C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9876
	ctx.r3.s64 = ctx.r11.s64 + 9876;
	// blr 
	return;
loc_83355D0C:
	// cmpwi cr6,r9,4096
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4096, ctx.xer);
	// ble cr6,0x83355d20
	if (!ctx.cr6.gt) goto loc_83355D20;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9828
	ctx.r3.s64 = ctx.r11.s64 + 9828;
	// blr 
	return;
loc_83355D20:
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x83355d30
	if (ctx.cr6.lt) goto loc_83355D30;
	// cmpwi cr6,r8,19
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 19, ctx.xer);
	// ble cr6,0x83355d50
	if (!ctx.cr6.gt) goto loc_83355D50;
loc_83355D30:
	// srawi r11,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 5;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf. r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355d50
	if (ctx.cr0.eq) goto loc_83355D50;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9760
	ctx.r3.s64 = ctx.r11.s64 + 9760;
	// blr 
	return;
loc_83355D50:
	// addi r11,r8,-16
	ctx.r11.s64 = ctx.r8.s64 + -16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x83355d70
	if (ctx.cr6.gt) goto loc_83355D70;
	// cmpwi cr6,r9,192
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 192, ctx.xer);
	// ble cr6,0x83355d70
	if (!ctx.cr6.gt) goto loc_83355D70;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9704
	ctx.r3.s64 = ctx.r11.s64 + 9704;
	// blr 
	return;
loc_83355D70:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x83355d88
	if (!ctx.cr6.lt) goto loc_83355D88;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9644
	ctx.r3.s64 = ctx.r11.s64 + 9644;
	// blr 
	return;
loc_83355D88:
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// ble cr6,0x83355d9c
	if (!ctx.cr6.gt) goto loc_83355D9C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9592
	ctx.r3.s64 = ctx.r11.s64 + 9592;
	// blr 
	return;
loc_83355D9C:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x83355db4
	if (!ctx.cr6.lt) goto loc_83355DB4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9548
	ctx.r3.s64 = ctx.r11.s64 + 9548;
	// blr 
	return;
loc_83355DB4:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83355dcc
	if (!ctx.cr6.gt) goto loc_83355DCC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9488
	ctx.r3.s64 = ctx.r11.s64 + 9488;
	// blr 
	return;
loc_83355DCC:
	// cmpwi cr6,r8,20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 20, ctx.xer);
	// beq cr6,0x83355e8c
	if (ctx.cr6.eq) goto loc_83355E8C;
	// cmpwi cr6,r8,21
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 21, ctx.xer);
	// beq cr6,0x83355e8c
	if (ctx.cr6.eq) goto loc_83355E8C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// clrlwi. r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355df4
	if (ctx.cr0.eq) goto loc_83355DF4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9428
	ctx.r3.s64 = ctx.r11.s64 + 9428;
	// blr 
	return;
loc_83355DF4:
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// ble cr6,0x83355e04
	if (!ctx.cr6.gt) goto loc_83355E04;
	// cmpwi cr6,r8,22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 22, ctx.xer);
	// bne cr6,0x83355e2c
	if (!ctx.cr6.eq) goto loc_83355E2C;
loc_83355E04:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// srawi r10,r11,14
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 14;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355e2c
	if (ctx.cr0.eq) goto loc_83355E2C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9360
	ctx.r3.s64 = ctx.r11.s64 + 9360;
	// blr 
	return;
loc_83355E2C:
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// ble cr6,0x83355fd4
	if (!ctx.cr6.gt) goto loc_83355FD4;
	// cmpwi cr6,r8,22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 22, ctx.xer);
	// bge cr6,0x83355e64
	if (!ctx.cr6.lt) goto loc_83355E64;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355e60
	if (ctx.cr0.eq) goto loc_83355E60;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9296
	ctx.r3.s64 = ctx.r11.s64 + 9296;
	// blr 
	return;
loc_83355E60:
	// cmpwi cr6,r8,22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 22, ctx.xer);
loc_83355E64:
	// beq cr6,0x83355fd4
	if (ctx.cr6.eq) goto loc_83355FD4;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355fd4
	if (ctx.cr0.eq) goto loc_83355FD4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9240
	ctx.r3.s64 = ctx.r11.s64 + 9240;
	// blr 
	return;
loc_83355E8C:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x83355f04
	if (!ctx.cr6.eq) goto loc_83355F04;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,5120
	ctx.r10.s64 = 5120;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,5120
	ctx.r10.s64 = ctx.r10.s64 * 5120;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355ebc
	if (ctx.cr0.eq) goto loc_83355EBC;
loc_83355EB0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9180
	ctx.r3.s64 = ctx.r11.s64 + 9180;
	// blr 
	return;
loc_83355EBC:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355ee0
	if (ctx.cr0.eq) goto loc_83355EE0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9112
	ctx.r3.s64 = ctx.r11.s64 + 9112;
	// blr 
	return;
loc_83355EE0:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,20
	ctx.r10.s64 = 20;
	// divw r10,r11,r10
	ctx.r10.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355fd4
	if (ctx.cr0.eq) goto loc_83355FD4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9040
	ctx.r3.s64 = ctx.r11.s64 + 9040;
	// blr 
	return;
loc_83355F04:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83355f6c
	if (!ctx.cr6.eq) goto loc_83355F6C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,5120
	ctx.r10.s64 = 5120;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,5120
	ctx.r10.s64 = ctx.r10.s64 * 5120;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83355eb0
	if (!ctx.cr0.eq) goto loc_83355EB0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355f48
	if (ctx.cr0.eq) goto loc_83355F48;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,8968
	ctx.r3.s64 = ctx.r11.s64 + 8968;
	// blr 
	return;
loc_83355F48:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,20
	ctx.r10.s64 = 20;
	// divw r10,r11,r10
	ctx.r10.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355fd4
	if (ctx.cr0.eq) goto loc_83355FD4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,8896
	ctx.r3.s64 = ctx.r11.s64 + 8896;
	// blr 
	return;
loc_83355F6C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83355fdc
	if (!ctx.cr6.eq) goto loc_83355FDC;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,5120
	ctx.r10.s64 = 5120;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,5120
	ctx.r10.s64 = ctx.r10.s64 * 5120;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83355eb0
	if (!ctx.cr0.eq) goto loc_83355EB0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355fb0
	if (ctx.cr0.eq) goto loc_83355FB0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,8824
	ctx.r3.s64 = ctx.r11.s64 + 8824;
	// blr 
	return;
loc_83355FB0:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,40
	ctx.r10.s64 = 40;
	// divw r10,r11,r10
	ctx.r10.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mulli r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 * 40;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83355fd4
	if (ctx.cr0.eq) goto loc_83355FD4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,8752
	ctx.r3.s64 = ctx.r11.s64 + 8752;
	// blr 
	return;
loc_83355FD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83355FDC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,8692
	ctx.r3.s64 = ctx.r11.s64 + 8692;
	// blr 
	return;
loc_83355FE8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,8644
	ctx.r3.s64 = ctx.r11.s64 + 8644;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83355FF4"))) PPC_WEAK_FUNC(sub_83355FF4);
PPC_FUNC_IMPL(__imp__sub_83355FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83355FF8"))) PPC_WEAK_FUNC(sub_83355FF8);
PPC_FUNC_IMPL(__imp__sub_83355FF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lwa r8,16(r4)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 16));
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// sld r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// divdu r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 / ctx.r9.u64;
	// tdllei r9,0
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335602C"))) PPC_WEAK_FUNC(sub_8335602C);
PPC_FUNC_IMPL(__imp__sub_8335602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83356030"))) PPC_WEAK_FUNC(sub_83356030);
PPC_FUNC_IMPL(__imp__sub_83356030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83356038;
	__savegprlr_29(ctx, base);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,2048
	ctx.r10.s64 = 2048;
	// srawi r9,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 1;
	// lwz r31,4(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mullw r8,r11,r3
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// divw r5,r10,r11
	ctx.r5.s32 = ctx.r10.s32 / ctx.r11.s32;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r10,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 11;
	// divw r30,r5,r31
	ctx.r30.s32 = ctx.r5.s32 / ctx.r31.s32;
	// divw r29,r3,r31
	ctx.r29.s32 = ctx.r3.s32 / ctx.r31.s32;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// divw r8,r29,r30
	ctx.r8.s32 = ctx.r29.s32 / ctx.r30.s32;
	// srawi r7,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 1;
	// mullw r8,r8,r30
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// subf r8,r8,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r8.s64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r7,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r7.s64;
	// twllei r11,0
	// rotlwi r10,r3,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// rotlwi r11,r29,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// divw r6,r3,r31
	ctx.r6.s32 = ctx.r3.s32 / ctx.r31.s32;
	// rotlwi r5,r5,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// rotlwi r9,r3,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r7,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// mullw r11,r8,r31
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// addi r8,r5,-1
	ctx.r8.s64 = ctx.r5.s64 + -1;
	// mullw r7,r6,r31
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// andc r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 & ~ctx.r8.u64;
	// andc r6,r31,r4
	ctx.r6.u64 = ctx.r31.u64 & ~ctx.r4.u64;
	// andc r5,r30,r29
	ctx.r5.u64 = ctx.r30.u64 & ~ctx.r29.u64;
	// andc r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 & ~ctx.r9.u64;
	// subf r10,r7,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r7.s64;
	// twllei r31,0
	// twllei r31,0
	// twllei r30,0
	// twllei r31,0
	// twlgei r8,-1
	// twlgei r6,-1
	// twlgei r5,-1
	// twlgei r9,-1
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83356104"))) PPC_WEAK_FUNC(sub_83356104);
PPC_FUNC_IMPL(__imp__sub_83356104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83356108"))) PPC_WEAK_FUNC(sub_83356108);
PPC_FUNC_IMPL(__imp__sub_83356108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lwa r8,16(r4)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 16));
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mulld r9,r8,r9
	ctx.r9.s64 = ctx.r8.s64 * ctx.r9.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// srd r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r11.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83356134"))) PPC_WEAK_FUNC(sub_83356134);
PPC_FUNC_IMPL(__imp__sub_83356134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83356138"))) PPC_WEAK_FUNC(sub_83356138);
PPC_FUNC_IMPL(__imp__sub_83356138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lis r9,-31906
	ctx.r9.s64 = -2090991616;
	// lwz r11,56(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,16(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// addi r9,r9,-3312
	ctx.r9.s64 = ctx.r9.s64 + -3312;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfic r11,r10,3
	ctx.xer.ca = ctx.r10.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r10.s64;
	// srawi r10,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 6;
	// cmplwi cr6,r8,34
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 34, ctx.xer);
	// lwzx r9,r5,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// bgt cr6,0x833561d8
	if (ctx.cr6.gt) goto loc_833561D8;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,8512
	ctx.r12.s64 = ctx.r12.s64 + 8512;
	// lbzx r0,r12,r8
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r8.u32);
	// lis r12,-31947
	ctx.r12.s64 = -2093678592;
	// addi r12,r12,24976
	ctx.r12.s64 = ctx.r12.s64 + 24976;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r8.u64) {
	case 0:
		goto loc_83356190;
	case 1:
		goto loc_83356190;
	case 2:
		goto loc_833561D8;
	case 3:
		goto loc_83356190;
	case 4:
		goto loc_83356190;
	case 5:
		goto loc_83356190;
	case 6:
		goto loc_83356190;
	case 7:
		goto loc_83356190;
	case 8:
		goto loc_83356190;
	case 9:
		goto loc_83356190;
	case 10:
		goto loc_83356190;
	case 11:
		goto loc_833561C4;
	case 12:
		goto loc_833561C4;
	case 13:
		goto loc_833561C4;
	case 14:
		goto loc_833561C4;
	case 15:
		goto loc_833561A0;
	case 16:
		goto loc_833561A0;
	case 17:
		goto loc_833561A0;
	case 18:
		goto loc_833561A0;
	case 19:
		goto loc_833561D0;
	case 20:
		goto loc_833561D0;
	case 21:
		goto loc_83356190;
	case 22:
		goto loc_83356190;
	case 23:
		goto loc_83356190;
	case 24:
		goto loc_83356190;
	case 25:
		goto loc_83356190;
	case 26:
		goto loc_83356190;
	case 27:
		goto loc_83356190;
	case 28:
		goto loc_83356190;
	case 29:
		goto loc_83356190;
	case 30:
		goto loc_83356190;
	case 31:
		goto loc_83356190;
	case 32:
		goto loc_83356190;
	case 33:
		goto loc_83356190;
	case 34:
		goto loc_83356190;
	default:
		__builtin_unreachable();
	}
loc_83356190:
	// mullw r10,r10,r3
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
loc_83356194:
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// slw r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// blr 
	return;
loc_833561A0:
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// sraw r8,r3,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r8.s64 = ctx.r3.s32 >> temp.u32;
	// srawi r7,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 3;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// b 0x83356194
	goto loc_83356194;
loc_833561C4:
	// lwz r8,44(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// b 0x83356190
	goto loc_83356190;
loc_833561D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_833561D8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,29,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFE;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,29,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFE;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r3,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0x1;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// twllei r10,0
	// divwu r10,r3,r10
	ctx.r10.u32 = ctx.r3.u32 / ctx.r10.u32;
	// twllei r9,0
	// divwu r8,r10,r9
	ctx.r8.u32 = ctx.r10.u32 / ctx.r9.u32;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lwa r8,16(r4)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 16));
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mulld r9,r8,r9
	ctx.r9.s64 = ctx.r8.s64 * ctx.r9.s64;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// twllei r7,0
	// srd r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r11.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// twllei r6,0
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divwu r9,r11,r7
	ctx.r9.u32 = ctx.r11.u32 / ctx.r7.u32;
	// rlwinm r10,r11,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// divwu r11,r9,r6
	ctx.r11.u32 = ctx.r9.u32 / ctx.r6.u32;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833562C8"))) PPC_WEAK_FUNC(sub_833562C8);
PPC_FUNC_IMPL(__imp__sub_833562C8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r11,r3,21
	ctx.r11.u64 = ctx.r3.u32 & 0x7FF;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r7,r3,31,1,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFF800;
	// divw r6,r11,r9
	ctx.r6.s32 = ctx.r11.s32 / ctx.r9.s32;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r6,r6,r8
	ctx.r6.s32 = ctx.r6.s32 / ctx.r8.s32;
	// divwu r5,r3,r9
	ctx.r5.u32 = ctx.r3.u32 / ctx.r9.u32;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// divwu r11,r7,r8
	ctx.r11.u32 = ctx.r7.u32 / ctx.r8.u32;
	// mullw r7,r5,r9
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r9,0
	// twllei r8,0
	// twllei r9,0
	// twllei r8,0
	// andc r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r4.u64;
	// andc r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r31.u64;
	// subf r10,r7,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r7.s64;
	// twlgei r9,-1
	// twlgei r8,-1
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83356338"))) PPC_WEAK_FUNC(sub_83356338);
PPC_FUNC_IMPL(__imp__sub_83356338) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lwa r8,16(r4)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 16));
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mulld r9,r8,r9
	ctx.r9.s64 = ctx.r8.s64 * ctx.r9.s64;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// twllei r7,0
	// srd r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r11.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// twllei r7,0
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r6,0
	// clrlwi r10,r11,21
	ctx.r10.u64 = ctx.r11.u32 & 0x7FF;
	// rlwinm r8,r11,31,1,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFF800;
	// divw r5,r10,r7
	ctx.r5.s32 = ctx.r10.s32 / ctx.r7.s32;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divwu r4,r11,r7
	ctx.r4.u32 = ctx.r11.u32 / ctx.r7.u32;
	// divw r5,r5,r6
	ctx.r5.s32 = ctx.r5.s32 / ctx.r6.s32;
	// addi r31,r9,-1
	ctx.r31.s64 = ctx.r9.s64 + -1;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// divwu r9,r8,r6
	ctx.r9.u32 = ctx.r8.u32 / ctx.r6.u32;
	// mullw r10,r5,r7
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// mullw r8,r4,r7
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// twllei r6,0
	// andc r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// andc r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r31.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// twlgei r7,-1
	// twlgei r6,-1
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833563D0"))) PPC_WEAK_FUNC(sub_833563D0);
PPC_FUNC_IMPL(__imp__sub_833563D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x833563D8;
	__savegprlr_23(ctx, base);
	// lwz r30,8(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r31,0
	ctx.r31.s64 = 0;
	// sraw r10,r11,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x83356414
	if (!ctx.cr6.gt) goto loc_83356414;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r9,48(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// mullw r8,r11,r5
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r31,r8,r9
	ctx.r31.s32 = ctx.r8.s32 / ctx.r9.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r9,0
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
loc_83356414:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// srawi r5,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 3;
	// lwz r9,32(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// clrlwi r7,r3,29
	ctx.r7.u64 = ctx.r3.u32 & 0x7;
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// lwz r28,20(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// srawi r26,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r26.s64 = ctx.r9.s32 >> 5;
	// lwz r27,16(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// rlwinm r8,r4,2,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x18;
	// lwz r25,28(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// srawi r24,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r24.s64 = ctx.r4.s32 >> 5;
	// lwz r9,24(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cntlzw r29,r29
	ctx.r29.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// srawi r6,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 5;
	// mullw r7,r26,r24
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r24.s32);
	// rlwinm r23,r3,29,30,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x3;
	// rlwinm r3,r29,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// mullw r8,r8,r27
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// clrlwi r7,r5,31
	ctx.r7.u64 = ctx.r5.u32 & 0x1;
	// xori r5,r3,1
	ctx.r5.u64 = ctx.r3.u64 ^ 1;
	// divwu r29,r23,r11
	ctx.r29.u32 = ctx.r23.u32 / ctx.r11.u32;
	// add r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 + ctx.r31.u64;
	// and r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 & ctx.r5.u64;
	// rlwinm r7,r29,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r6,r6,r28
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r28.s32);
	// addi r5,r30,6
	ctx.r5.s64 = ctx.r30.s64 + 6;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r6,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// srw r5,r3,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r5.u8 & 0x3F));
	// divwu r7,r7,r11
	ctx.r7.u32 = ctx.r7.u32 / ctx.r11.u32;
	// mullw r8,r8,r28
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// rlwinm r3,r25,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r6,r5,r10
	ctx.r6.u32 = ctx.r5.u32 / ctx.r10.u32;
	// twllei r11,0
	// twllei r11,0
	// twllei r11,0
	// divwu r11,r3,r11
	ctx.r11.u32 = ctx.r3.u32 / ctx.r11.u32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r7,r6,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r6.s64;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// twllei r10,0
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833564E4"))) PPC_WEAK_FUNC(sub_833564E4);
PPC_FUNC_IMPL(__imp__sub_833564E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833564E8"))) PPC_WEAK_FUNC(sub_833564E8);
PPC_FUNC_IMPL(__imp__sub_833564E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x833564F0;
	__savegprlr_26(ctx, base);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r9,16
	ctx.r9.s64 = 16;
	// clrlwi r10,r3,29
	ctx.r10.u64 = ctx.r3.u32 & 0x7;
	// lwz r8,16(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// sraw r11,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// lwz r31,36(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// srawi r9,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 1;
	// lwz r29,0(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r28,20(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// clrlwi r7,r5,30
	ctx.r7.u64 = ctx.r5.u32 & 0x3;
	// rlwinm r9,r9,3,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x18;
	// lwz r30,32(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r27,28(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// clrlwi r26,r4,31
	ctx.r26.u64 = ctx.r4.u32 & 0x1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,24(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// rlwinm r27,r27,31,1,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// srawi r6,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r31.s32 >> 4;
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// mullw r6,r6,r5
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// srawi r4,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 5;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// srawi r5,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 5;
	// srawi r6,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 3;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// divw r5,r6,r29
	ctx.r5.s32 = ctx.r6.s32 / ctx.r29.s32;
	// mullw r4,r8,r28
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// divwu r8,r5,r29
	ctx.r8.u32 = ctx.r5.u32 / ctx.r29.u32;
	// mullw r7,r7,r28
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r28.s32);
	// divwu r5,r10,r11
	ctx.r5.u32 = ctx.r10.u32 / ctx.r11.u32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// divwu r7,r27,r29
	ctx.r7.u32 = ctx.r27.u32 / ctx.r29.u32;
	// subf r5,r5,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r5.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// twllei r11,0
	// mullw r11,r26,r11
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r11.s32);
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// rotlwi r7,r6,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// andc r8,r29,r7
	ctx.r8.u64 = ctx.r29.u64 & ~ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r29,0
	// twllei r29,0
	// twllei r29,0
	// twlgei r8,-1
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833565D8"))) PPC_WEAK_FUNC(sub_833565D8);
PPC_FUNC_IMPL(__imp__sub_833565D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,56(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// twllei r8,0
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 3;
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// divwu r7,r11,r8
	ctx.r7.u32 = ctx.r11.u32 / ctx.r8.u32;
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83356628"))) PPC_WEAK_FUNC(sub_83356628);
PPC_FUNC_IMPL(__imp__sub_83356628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r10,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// twllei r8,0
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 3;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// divwu r9,r10,r8
	ctx.r9.u32 = ctx.r10.u32 / ctx.r8.u32;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83356674"))) PPC_WEAK_FUNC(sub_83356674);
PPC_FUNC_IMPL(__imp__sub_83356674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83356678"))) PPC_WEAK_FUNC(sub_83356678);
PPC_FUNC_IMPL(__imp__sub_83356678) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// blt cr6,0x833566b8
	if (ctx.cr6.lt) goto loc_833566B8;
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x833566b8
	if (!ctx.cr6.lt) goto loc_833566B8;
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr 
	if (ctx.cr0.eq) return;
loc_833566B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833566C0"))) PPC_WEAK_FUNC(sub_833566C0);
PPC_FUNC_IMPL(__imp__sub_833566C0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83356030
	ctx.lr = 0x833566D8;
	sub_83356030(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83356678
	ctx.lr = 0x833566E0;
	sub_83356678(ctx, base);
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

__attribute__((alias("__imp__sub_833566F4"))) PPC_WEAK_FUNC(sub_833566F4);
PPC_FUNC_IMPL(__imp__sub_833566F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833566F8"))) PPC_WEAK_FUNC(sub_833566F8);
PPC_FUNC_IMPL(__imp__sub_833566F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,24(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r8,20(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// twllei r10,0
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r8,0
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divwu r10,r11,r8
	ctx.r10.u32 = ctx.r11.u32 / ctx.r8.u32;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83356738"))) PPC_WEAK_FUNC(sub_83356738);
PPC_FUNC_IMPL(__imp__sub_83356738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// srawi r10,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335675C"))) PPC_WEAK_FUNC(sub_8335675C);
PPC_FUNC_IMPL(__imp__sub_8335675C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83356760"))) PPC_WEAK_FUNC(sub_83356760);
PPC_FUNC_IMPL(__imp__sub_83356760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,56(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x83356790
	if (!ctx.cr6.gt) goto loc_83356790;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x83356790
	if (ctx.cr6.eq) goto loc_83356790;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// clrlwi r10,r3,29
	ctx.r10.u64 = ctx.r3.u32 & 0x7;
	// rlwinm r11,r11,3,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x18;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// b 0x83356798
	goto loc_83356798;
loc_83356790:
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
loc_83356798:
	// srawi r10,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833567B4"))) PPC_WEAK_FUNC(sub_833567B4);
PPC_FUNC_IMPL(__imp__sub_833567B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833567B8"))) PPC_WEAK_FUNC(sub_833567B8);
PPC_FUNC_IMPL(__imp__sub_833567B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,56(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x833567e8
	if (!ctx.cr6.gt) goto loc_833567E8;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x833567e8
	if (ctx.cr6.eq) goto loc_833567E8;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// lwz r9,16(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// clrlwi r10,r3,29
	ctx.r10.u64 = ctx.r3.u32 & 0x7;
	// rlwinm r11,r11,3,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x18;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// b 0x833567f0
	goto loc_833567F0;
loc_833567E8:
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
loc_833567F0:
	// srawi r10,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335680C"))) PPC_WEAK_FUNC(sub_8335680C);
PPC_FUNC_IMPL(__imp__sub_8335680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83356810"))) PPC_WEAK_FUNC(sub_83356810);
PPC_FUNC_IMPL(__imp__sub_83356810) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x83356820
	if (!ctx.cr6.eq) goto loc_83356820;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x83356760
	sub_83356760(ctx, base);
	return;
loc_83356820:
	// b 0x833567b8
	sub_833567B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83356824"))) PPC_WEAK_FUNC(sub_83356824);
PPC_FUNC_IMPL(__imp__sub_83356824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83356828"))) PPC_WEAK_FUNC(sub_83356828);
PPC_FUNC_IMPL(__imp__sub_83356828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8432
	ctx.r11.s64 = ctx.r11.s64 + 8432;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// divwu r9,r5,r8
	ctx.r9.u32 = ctx.r5.u32 / ctx.r8.u32;
	// divwu r10,r3,r8
	ctx.r10.u32 = ctx.r3.u32 / ctx.r8.u32;
	// twllei r8,0
	// twllei r8,0
	// divwu r8,r4,r11
	ctx.r8.u32 = ctx.r4.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// divwu r10,r4,r11
	ctx.r10.u32 = ctx.r4.u32 / ctx.r11.u32;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// twllei r11,0
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83356890"))) PPC_WEAK_FUNC(sub_83356890);
PPC_FUNC_IMPL(__imp__sub_83356890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83356898;
	__savegprlr_28(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8432
	ctx.r11.s64 = ctx.r11.s64 + 8432;
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// addi r31,r11,60
	ctx.r31.s64 = ctx.r11.s64 + 60;
	// addi r30,r11,40
	ctx.r30.s64 = ctx.r11.s64 + 40;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r10,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// divwu r29,r3,r11
	ctx.r29.u32 = ctx.r3.u32 / ctx.r11.u32;
	// twllei r11,0
	// lwzx r31,r10,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// divwu r28,r4,r7
	ctx.r28.u32 = ctx.r4.u32 / ctx.r7.u32;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// twllei r7,0
	// mullw r7,r28,r7
	ctx.r7.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// mullw r11,r29,r11
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// subf r7,r7,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r7.s64;
	// subf r4,r11,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r11.s64;
	// divwu r11,r7,r31
	ctx.r11.u32 = ctx.r7.u32 / ctx.r31.u32;
	// divwu r7,r4,r10
	ctx.r7.u32 = ctx.r4.u32 / ctx.r10.u32;
	// subfic r4,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r4.s64 = 4 - ctx.r11.s64;
	// twllei r10,0
	// subfe r4,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// twllei r31,0
	// clrlwi r4,r4,31
	ctx.r4.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// li r4,5
	ctx.r4.s64 = 5;
	// divwu r4,r11,r4
	ctx.r4.u32 = ctx.r11.u32 / ctx.r4.u32;
	// mulli r4,r4,5
	ctx.r4.s64 = ctx.r4.s64 * 5;
	// subf r4,r4,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r4.s64;
	// beq cr6,0x8335692c
	if (ctx.cr6.eq) goto loc_8335692C;
	// not r3,r10
	ctx.r3.u64 = ~ctx.r10.u64;
	// rlwimi r3,r4,2,0,29
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0xFFFFFFFC) | (ctx.r3.u64 & 0xFFFFFFFF00000003);
	// rlwimi r3,r10,0,31,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// b 0x83356934
	goto loc_83356934;
loc_8335692C:
	// rlwimi r10,r4,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_83356934:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x83356960
	if (!ctx.cr6.eq) goto loc_83356960;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x83356960
	if (!ctx.cr6.eq) goto loc_83356960;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83356968
	if (ctx.cr0.eq) goto loc_83356968;
loc_8335694C:
	// not r11,r7
	ctx.r11.u64 = ~ctx.r7.u64;
	// rlwimi r11,r7,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
loc_83356958:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_83356960:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335694c
	if (ctx.cr0.eq) goto loc_8335694C;
loc_83356968:
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// b 0x83356958
	goto loc_83356958;
}

__attribute__((alias("__imp__sub_83356970"))) PPC_WEAK_FUNC(sub_83356970);
PPC_FUNC_IMPL(__imp__sub_83356970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8492
	ctx.r11.s64 = ctx.r11.s64 + 8492;
	// addi r9,r11,-20
	ctx.r9.s64 = ctx.r11.s64 + -20;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// divwu r9,r4,r11
	ctx.r9.u32 = ctx.r4.u32 / ctx.r11.u32;
	// twllei r11,0
	// divwu r8,r3,r10
	ctx.r8.u32 = ctx.r3.u32 / ctx.r10.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// twllei r10,0
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r9,r10,31,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// rlwimi r8,r11,1,30,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFD);
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// rlwinm r11,r8,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833569D0"))) PPC_WEAK_FUNC(sub_833569D0);
PPC_FUNC_IMPL(__imp__sub_833569D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x833569D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,244(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r7,260(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x83356828
	ctx.lr = 0x83356A0C;
	sub_83356828(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r9,268(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r8,252(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83356890
	ctx.lr = 0x83356A2C;
	sub_83356890(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8492
	ctx.r11.s64 = ctx.r11.s64 + 8492;
	// addi r9,r11,-20
	ctx.r9.s64 = ctx.r11.s64 + -20;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// divwu r9,r28,r11
	ctx.r9.u32 = ctx.r28.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// divwu r8,r29,r10
	ctx.r8.u32 = ctx.r29.u32 / ctx.r10.u32;
	// twllei r10,0
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r9,r10,31,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// rlwimi r8,r11,1,30,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFD);
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// rlwinm r11,r8,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83356A94"))) PPC_WEAK_FUNC(sub_83356A94);
PPC_FUNC_IMPL(__imp__sub_83356A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83356A98"))) PPC_WEAK_FUNC(sub_83356A98);
PPC_FUNC_IMPL(__imp__sub_83356A98) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 * 20;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83356AAC"))) PPC_WEAK_FUNC(sub_83356AAC);
PPC_FUNC_IMPL(__imp__sub_83356AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83356AB0"))) PPC_WEAK_FUNC(sub_83356AB0);
PPC_FUNC_IMPL(__imp__sub_83356AB0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83356ACC"))) PPC_WEAK_FUNC(sub_83356ACC);
PPC_FUNC_IMPL(__imp__sub_83356ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83356AD0"))) PPC_WEAK_FUNC(sub_83356AD0);
PPC_FUNC_IMPL(__imp__sub_83356AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// bl 0x833569d0
	ctx.lr = 0x83356B18;
	sub_833569D0(ctx, base);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83356B54"))) PPC_WEAK_FUNC(sub_83356B54);
PPC_FUNC_IMPL(__imp__sub_83356B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83356B58"))) PPC_WEAK_FUNC(sub_83356B58);
PPC_FUNC_IMPL(__imp__sub_83356B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83356B60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,56(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x83356c0c
	if (!ctx.cr6.gt) goto loc_83356C0C;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x83356c0c
	if (ctx.cr6.eq) goto loc_83356C0C;
	// lwz r31,4(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi r11,r3,21
	ctx.r11.u64 = ctx.r3.u32 & 0x7FF;
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r3,31,1,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFF800;
	// divwu r9,r3,r31
	ctx.r9.u32 = ctx.r3.u32 / ctx.r31.u32;
	// divw r8,r11,r31
	ctx.r8.s32 = ctx.r11.s32 / ctx.r31.s32;
	// divwu r7,r9,r30
	ctx.r7.u32 = ctx.r9.u32 / ctx.r30.u32;
	// divw r4,r8,r30
	ctx.r4.s32 = ctx.r8.s32 / ctx.r30.s32;
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// divwu r29,r3,r31
	ctx.r29.u32 = ctx.r3.u32 / ctx.r31.u32;
	// rotlwi r7,r11,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divwu r10,r10,r30
	ctx.r10.u32 = ctx.r10.u32 / ctx.r30.u32;
	// mullw r11,r4,r31
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// mullw r29,r29,r31
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// rlwinm r8,r3,21,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// subf r10,r29,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r29.s64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// andc r9,r31,r7
	ctx.r9.u64 = ctx.r31.u64 & ~ctx.r7.u64;
	// andc r8,r30,r6
	ctx.r8.u64 = ctx.r30.u64 & ~ctx.r6.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r31,0
	// twllei r31,0
	// twllei r30,0
	// twllei r30,0
	// twllei r31,0
	// twllei r30,0
	// twlgei r9,-1
	// twlgei r8,-1
	// bl 0x83356ef8
	ctx.lr = 0x83356C08;
	sub_83356EF8(ctx, base);
	// b 0x83356c5c
	goto loc_83356C5C;
loc_83356C0C:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r9,28(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lwa r8,16(r5)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r5.u32 + 16));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// tdllei r8,0
	// sld r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// divdu r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 / ctx.r8.u64;
	// twllei r9,0
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r8,r10,r9
	ctx.r8.s32 = ctx.r10.s32 / ctx.r9.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// subf r3,r8,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r8.s64;
	// twlgei r11,-1
loc_83356C5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83356C64"))) PPC_WEAK_FUNC(sub_83356C64);
PPC_FUNC_IMPL(__imp__sub_83356C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83356C68"))) PPC_WEAK_FUNC(sub_83356C68);
PPC_FUNC_IMPL(__imp__sub_83356C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83356C70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,56(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x83356d1c
	if (!ctx.cr6.gt) goto loc_83356D1C;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x83356d1c
	if (ctx.cr6.eq) goto loc_83356D1C;
	// lwz r31,4(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi r11,r3,21
	ctx.r11.u64 = ctx.r3.u32 & 0x7FF;
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r3,31,1,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFF800;
	// divwu r9,r3,r31
	ctx.r9.u32 = ctx.r3.u32 / ctx.r31.u32;
	// divw r8,r11,r31
	ctx.r8.s32 = ctx.r11.s32 / ctx.r31.s32;
	// divwu r7,r9,r30
	ctx.r7.u32 = ctx.r9.u32 / ctx.r30.u32;
	// divw r4,r8,r30
	ctx.r4.s32 = ctx.r8.s32 / ctx.r30.s32;
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// divwu r29,r3,r31
	ctx.r29.u32 = ctx.r3.u32 / ctx.r31.u32;
	// rotlwi r7,r11,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divwu r10,r10,r30
	ctx.r10.u32 = ctx.r10.u32 / ctx.r30.u32;
	// mullw r11,r4,r31
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// mullw r29,r29,r31
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// rlwinm r8,r3,21,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// subf r10,r29,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r29.s64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// andc r9,r31,r7
	ctx.r9.u64 = ctx.r31.u64 & ~ctx.r7.u64;
	// andc r8,r30,r6
	ctx.r8.u64 = ctx.r30.u64 & ~ctx.r6.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r31,0
	// twllei r31,0
	// twllei r30,0
	// twllei r30,0
	// twllei r31,0
	// twllei r30,0
	// twlgei r9,-1
	// twlgei r8,-1
	// bl 0x83357040
	ctx.lr = 0x83356D18;
	sub_83357040(ctx, base);
	// b 0x83356d88
	goto loc_83356D88;
loc_83356D1C:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r9,28(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lwa r8,16(r5)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r5.u32 + 16));
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r7,36(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// tdllei r8,0
	// sld r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// divdu r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 / ctx.r8.u64;
	// twllei r9,0
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// twllei r7,0
	// divw r8,r11,r9
	ctx.r8.s32 = ctx.r11.s32 / ctx.r9.s32;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r6,r8,r7
	ctx.r6.s32 = ctx.r8.s32 / ctx.r7.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// andc r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// twlgei r10,-1
	// twlgei r11,-1
	// subf r3,r9,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_83356D88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83356D90"))) PPC_WEAK_FUNC(sub_83356D90);
PPC_FUNC_IMPL(__imp__sub_83356D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83356D98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,56(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x83356e44
	if (!ctx.cr6.gt) goto loc_83356E44;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x83356e44
	if (ctx.cr6.eq) goto loc_83356E44;
	// lwz r31,4(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi r11,r3,21
	ctx.r11.u64 = ctx.r3.u32 & 0x7FF;
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r3,31,1,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFF800;
	// divwu r9,r3,r31
	ctx.r9.u32 = ctx.r3.u32 / ctx.r31.u32;
	// divw r8,r11,r31
	ctx.r8.s32 = ctx.r11.s32 / ctx.r31.s32;
	// divwu r7,r9,r30
	ctx.r7.u32 = ctx.r9.u32 / ctx.r30.u32;
	// divw r4,r8,r30
	ctx.r4.s32 = ctx.r8.s32 / ctx.r30.s32;
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// divwu r29,r3,r31
	ctx.r29.u32 = ctx.r3.u32 / ctx.r31.u32;
	// rotlwi r7,r11,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divwu r10,r10,r30
	ctx.r10.u32 = ctx.r10.u32 / ctx.r30.u32;
	// mullw r11,r4,r31
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// mullw r29,r29,r31
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// rlwinm r8,r3,21,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// subf r10,r29,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r29.s64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// andc r9,r31,r7
	ctx.r9.u64 = ctx.r31.u64 & ~ctx.r7.u64;
	// andc r8,r30,r6
	ctx.r8.u64 = ctx.r30.u64 & ~ctx.r6.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r31,0
	// twllei r31,0
	// twllei r30,0
	// twllei r30,0
	// twllei r31,0
	// twllei r30,0
	// twlgei r9,-1
	// twlgei r8,-1
	// bl 0x83357150
	ctx.lr = 0x83356E40;
	sub_83357150(ctx, base);
	// b 0x83356e8c
	goto loc_83356E8C;
loc_83356E44:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r9,28(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lwa r8,16(r5)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r5.u32 + 16));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r9,60(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// tdllei r8,0
	// sld r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// divdu r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 / ctx.r8.u64;
	// twllei r9,0
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r3,r10,r9
	ctx.r3.s32 = ctx.r10.s32 / ctx.r9.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
loc_83356E8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83356E94"))) PPC_WEAK_FUNC(sub_83356E94);
PPC_FUNC_IMPL(__imp__sub_83356E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83356E98"))) PPC_WEAK_FUNC(sub_83356E98);
PPC_FUNC_IMPL(__imp__sub_83356E98) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83356030
	ctx.lr = 0x83356EB0;
	sub_83356030(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lwa r8,16(r31)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 16));
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// sld r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// divdu r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 / ctx.r9.u64;
	// tdllei r9,0
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

__attribute__((alias("__imp__sub_83356EF4"))) PPC_WEAK_FUNC(sub_83356EF4);
PPC_FUNC_IMPL(__imp__sub_83356EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83356EF8"))) PPC_WEAK_FUNC(sub_83356EF8);
PPC_FUNC_IMPL(__imp__sub_83356EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83356F00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x83357024
	if (!ctx.cr6.gt) goto loc_83357024;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x83357024
	if (ctx.cr6.eq) goto loc_83357024;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// divwu r5,r9,r8
	ctx.r5.u32 = ctx.r9.u32 / ctx.r8.u32;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// divwu r9,r11,r8
	ctx.r9.u32 = ctx.r11.u32 / ctx.r8.u32;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r3,r9,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r9.s64;
	// srawi r6,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 5;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r31,r3,r7
	ctx.r31.u32 = ctx.r3.u32 / ctx.r7.u32;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// mullw r4,r8,r3
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// divwu r29,r31,r5
	ctx.r29.u32 = ctx.r31.u32 / ctx.r5.u32;
	// rlwinm r9,r4,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// twllei r5,0
	// mullw r5,r29,r5
	ctx.r5.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r5.s32);
	// divwu r4,r9,r7
	ctx.r4.u32 = ctx.r9.u32 / ctx.r7.u32;
	// divwu r9,r3,r7
	ctx.r9.u32 = ctx.r3.u32 / ctx.r7.u32;
	// divwu r29,r10,r8
	ctx.r29.u32 = ctx.r10.u32 / ctx.r8.u32;
	// subf r5,r5,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r5.s64;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// twllei r7,0
	// twllei r7,0
	// twllei r7,0
	// divwu r7,r4,r6
	ctx.r7.u32 = ctx.r4.u32 / ctx.r6.u32;
	// mullw r31,r29,r8
	ctx.r31.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r8.s32);
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r3,r9,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r9.s64;
	// mullw r7,r7,r6
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mullw r9,r5,r8
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// twllei r8,0
	// twllei r8,0
	// twllei r8,0
	// twllei r6,0
	// subf r8,r30,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r30.s64;
	// subf r7,r7,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r7.s64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x83356fe0
	if (!ctx.cr6.lt) goto loc_83356FE0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83357004
	goto loc_83357004;
loc_83356FE0:
	// clrlwi r9,r8,28
	ctx.r9.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r10,r8,31,1,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFF0;
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// divwu r8,r10,r9
	ctx.r8.u32 = ctx.r10.u32 / ctx.r9.u32;
	// twllei r9,0
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_83357004:
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// divwu r10,r9,r11
	ctx.r10.u32 = ctx.r9.u32 / ctx.r11.u32;
	// twllei r11,0
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83357034
	goto loc_83357034;
loc_83357024:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83356030
	ctx.lr = 0x8335702C;
	sub_83356030(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83356b58
	ctx.lr = 0x83357034;
	sub_83356B58(ctx, base);
loc_83357034:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335703C"))) PPC_WEAK_FUNC(sub_8335703C);
PPC_FUNC_IMPL(__imp__sub_8335703C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83357040"))) PPC_WEAK_FUNC(sub_83357040);
PPC_FUNC_IMPL(__imp__sub_83357040) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x83357128
	if (!ctx.cr6.gt) goto loc_83357128;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x83357128
	if (ctx.cr6.eq) goto loc_83357128;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// twllei r10,0
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// twllei r9,0
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// divwu r31,r11,r9
	ctx.r31.u32 = ctx.r11.u32 / ctx.r9.u32;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// twllei r9,0
	// mullw r9,r31,r9
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// twllei r8,0
	// divwu r8,r10,r8
	ctx.r8.u32 = ctx.r10.u32 / ctx.r8.u32;
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divwu r9,r8,r7
	ctx.r9.u32 = ctx.r8.u32 / ctx.r7.u32;
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// subf r6,r6,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r6.s64;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// twllei r7,0
	// divwu r7,r10,r5
	ctx.r7.u32 = ctx.r10.u32 / ctx.r5.u32;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// rlwinm r10,r6,31,1,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFF0;
	// clrlwi r11,r6,28
	ctx.r11.u64 = ctx.r6.u32 & 0xF;
	// xor r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// divwu r9,r11,r3
	ctx.r9.u32 = ctx.r11.u32 / ctx.r3.u32;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// twllei r3,0
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// twllei r5,0
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83357138
	goto loc_83357138;
loc_83357128:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83356030
	ctx.lr = 0x83357130;
	sub_83356030(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83356c68
	ctx.lr = 0x83357138;
	sub_83356C68(ctx, base);
loc_83357138:
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

__attribute__((alias("__imp__sub_8335714C"))) PPC_WEAK_FUNC(sub_8335714C);
PPC_FUNC_IMPL(__imp__sub_8335714C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83357150"))) PPC_WEAK_FUNC(sub_83357150);
PPC_FUNC_IMPL(__imp__sub_83357150) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x833571e8
	if (!ctx.cr6.gt) goto loc_833571E8;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x833571e8
	if (ctx.cr6.eq) goto loc_833571E8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// twllei r9,0
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// divwu r11,r11,r8
	ctx.r11.u32 = ctx.r11.u32 / ctx.r8.u32;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// divwu r6,r11,r10
	ctx.r6.u32 = ctx.r11.u32 / ctx.r10.u32;
	// divwu r9,r9,r8
	ctx.r9.u32 = ctx.r9.u32 / ctx.r8.u32;
	// twllei r10,0
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r9,r9,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divwu r10,r9,r7
	ctx.r10.u32 = ctx.r9.u32 / ctx.r7.u32;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// twllei r8,0
	// twllei r8,0
	// twllei r7,0
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x833571f8
	goto loc_833571F8;
loc_833571E8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83356030
	ctx.lr = 0x833571F0;
	sub_83356030(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83356d90
	ctx.lr = 0x833571F8;
	sub_83356D90(ctx, base);
loc_833571F8:
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

__attribute__((alias("__imp__sub_8335720C"))) PPC_WEAK_FUNC(sub_8335720C);
PPC_FUNC_IMPL(__imp__sub_8335720C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83357210"))) PPC_WEAK_FUNC(sub_83357210);
PPC_FUNC_IMPL(__imp__sub_83357210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83357218;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi r8,r3,21
	ctx.r8.u64 = ctx.r3.u32 & 0x7FF;
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// divwu r30,r3,r4
	ctx.r30.u32 = ctx.r3.u32 / ctx.r4.u32;
	// divw r7,r8,r4
	ctx.r7.s32 = ctx.r8.s32 / ctx.r4.s32;
	// rlwinm r11,r3,31,1,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFF800;
	// divw r9,r7,r31
	ctx.r9.s32 = ctx.r7.s32 / ctx.r31.s32;
	// divwu r6,r30,r31
	ctx.r6.u32 = ctx.r30.u32 / ctx.r31.u32;
	// divwu r29,r3,r4
	ctx.r29.u32 = ctx.r3.u32 / ctx.r4.u32;
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// mullw r28,r6,r31
	ctx.r28.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// divwu r11,r11,r31
	ctx.r11.u32 = ctx.r11.u32 / ctx.r31.u32;
	// mullw r6,r29,r4
	ctx.r6.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r4.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// subf r6,r6,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r6.s64;
	// subf r9,r28,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r28.s64;
	// addi r30,r8,-1
	ctx.r30.s64 = ctx.r8.s64 + -1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwinm r8,r3,21,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0x1;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// andc r6,r4,r30
	ctx.r6.u64 = ctx.r4.u64 & ~ctx.r30.u64;
	// twllei r4,0
	// twllei r4,0
	// twllei r4,0
	// andc r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 & ~ctx.r7.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r31,0
	// twllei r31,0
	// twllei r31,0
	// twlgei r6,-1
	// twlgei r7,-1
	// bl 0x83356030
	ctx.lr = 0x833572B0;
	sub_83356030(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833572B8"))) PPC_WEAK_FUNC(sub_833572B8);
PPC_FUNC_IMPL(__imp__sub_833572B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8335732c
	if (!ctx.cr6.gt) goto loc_8335732C;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x8335732c
	if (ctx.cr6.eq) goto loc_8335732C;
	// srawi r10,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// twllei r8,0
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mullw r10,r7,r11
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// divwu r9,r10,r8
	ctx.r9.u32 = ctx.r10.u32 / ctx.r8.u32;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83357360
	goto loc_83357360;
loc_8335732C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x83357a00
	ctx.lr = 0x83357334;
	sub_83357A00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0x1;
	// twllei r11,0
	// divwu r11,r3,r11
	ctx.r11.u32 = ctx.r3.u32 / ctx.r11.u32;
	// twllei r9,0
	// divwu r8,r11,r9
	ctx.r8.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83357360:
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

__attribute__((alias("__imp__sub_83357374"))) PPC_WEAK_FUNC(sub_83357374);
PPC_FUNC_IMPL(__imp__sub_83357374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83357378"))) PPC_WEAK_FUNC(sub_83357378);
PPC_FUNC_IMPL(__imp__sub_83357378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x833573cc
	if (ctx.cr6.lt) goto loc_833573CC;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bgt cr6,0x833573cc
	if (ctx.cr6.gt) goto loc_833573CC;
	// lwz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,24(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r8,20(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// twllei r10,0
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r8,0
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divwu r10,r11,r8
	ctx.r10.u32 = ctx.r11.u32 / ctx.r8.u32;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_833573CC:
	// lwz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lis r10,31
	ctx.r10.s64 = 2031616;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r8,20(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// twllei r9,0
	// lwa r7,32(r5)
	ctx.r7.s64 = int32_t(PPC_LOAD_U32(ctx.r5.u32 + 32));
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// lwz r6,24(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// twllei r8,0
	// divwu r4,r11,r8
	ctx.r4.u32 = ctx.r11.u32 / ctx.r8.u32;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// mullw r8,r4,r8
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// mulld r9,r7,r9
	ctx.r9.s64 = ctx.r7.s64 * ctx.r9.s64;
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// mulld r9,r9,r10
	ctx.r9.s64 = ctx.r9.s64 * ctx.r10.s64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf r10,r6,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r6.s64;
	// cmpd cr6,r11,r9
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, ctx.xer);
	// bge cr6,0x83357458
	if (!ctx.cr6.lt) goto loc_83357458;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83357458
	if (!ctx.cr6.lt) goto loc_83357458;
	// rlwinm r9,r10,31,1,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFF0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// twllei r11,0
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_83357458:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83357460"))) PPC_WEAK_FUNC(sub_83357460);
PPC_FUNC_IMPL(__imp__sub_83357460) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x833574b4
	if (ctx.cr6.lt) goto loc_833574B4;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bgt cr6,0x833574b4
	if (ctx.cr6.gt) goto loc_833574B4;
	// lwz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,24(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r8,20(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// twllei r10,0
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r8,0
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divwu r10,r11,r8
	ctx.r10.u32 = ctx.r11.u32 / ctx.r8.u32;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_833574B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833574BC"))) PPC_WEAK_FUNC(sub_833574BC);
PPC_FUNC_IMPL(__imp__sub_833574BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833574C0"))) PPC_WEAK_FUNC(sub_833574C0);
PPC_FUNC_IMPL(__imp__sub_833574C0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r7,r3,21
	ctx.r7.u64 = ctx.r3.u32 & 0x7FF;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r3,31,1,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFF800;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// divw r5,r7,r8
	ctx.r5.s32 = ctx.r7.s32 / ctx.r8.s32;
	// divwu r9,r3,r8
	ctx.r9.u32 = ctx.r3.u32 / ctx.r8.u32;
	// lwz r31,24(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// divw r30,r5,r6
	ctx.r30.s32 = ctx.r5.s32 / ctx.r6.s32;
	// divwu r10,r10,r6
	ctx.r10.u32 = ctx.r10.u32 / ctx.r6.u32;
	// mullw r30,r30,r8
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// divwu r11,r11,r6
	ctx.r11.u32 = ctx.r11.u32 / ctx.r6.u32;
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// mullw r30,r9,r8
	ctx.r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r30,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r30.s64;
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rotlwi r11,r5,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r7,r9,r4
	ctx.r7.u32 = ctx.r9.u32 / ctx.r4.u32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r7,r7,r4
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// andc r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// twllei r8,0
	// twllei r8,0
	// twllei r6,0
	// twllei r6,0
	// twllei r6,0
	// twllei r4,0
	// twlgei r10,-1
	// twlgei r11,-1
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83357570"))) PPC_WEAK_FUNC(sub_83357570);
PPC_FUNC_IMPL(__imp__sub_83357570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83357578;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,56(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8335763c
	if (!ctx.cr6.gt) goto loc_8335763C;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x8335763c
	if (ctx.cr6.eq) goto loc_8335763C;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// blt cr6,0x833575ac
	if (ctx.cr6.lt) goto loc_833575AC;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x833575ac
	if (ctx.cr6.gt) goto loc_833575AC;
	// bl 0x83356b58
	ctx.lr = 0x833575A8;
	sub_83356B58(ctx, base);
	// b 0x8335768c
	goto loc_8335768C;
loc_833575AC:
	// lwz r31,4(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi r11,r3,21
	ctx.r11.u64 = ctx.r3.u32 & 0x7FF;
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r3,31,1,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFF800;
	// divwu r9,r3,r31
	ctx.r9.u32 = ctx.r3.u32 / ctx.r31.u32;
	// divw r8,r11,r31
	ctx.r8.s32 = ctx.r11.s32 / ctx.r31.s32;
	// divwu r7,r9,r30
	ctx.r7.u32 = ctx.r9.u32 / ctx.r30.u32;
	// divw r4,r8,r30
	ctx.r4.s32 = ctx.r8.s32 / ctx.r30.s32;
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// divwu r29,r3,r31
	ctx.r29.u32 = ctx.r3.u32 / ctx.r31.u32;
	// rotlwi r7,r11,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divwu r10,r10,r30
	ctx.r10.u32 = ctx.r10.u32 / ctx.r30.u32;
	// mullw r11,r4,r31
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// mullw r29,r29,r31
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// rlwinm r8,r3,21,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// subf r10,r29,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r29.s64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// andc r9,r31,r7
	ctx.r9.u64 = ctx.r31.u64 & ~ctx.r7.u64;
	// andc r8,r30,r6
	ctx.r8.u64 = ctx.r30.u64 & ~ctx.r6.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r31,0
	// twllei r31,0
	// twllei r30,0
	// twllei r30,0
	// twllei r31,0
	// twllei r30,0
	// twlgei r9,-1
	// twlgei r8,-1
	// bl 0x833577b8
	ctx.lr = 0x83357638;
	sub_833577B8(ctx, base);
	// b 0x8335768c
	goto loc_8335768C;
loc_8335763C:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r9,28(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lwa r8,16(r5)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r5.u32 + 16));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// tdllei r8,0
	// sld r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// divdu r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 / ctx.r8.u64;
	// twllei r9,0
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r8,r10,r9
	ctx.r8.s32 = ctx.r10.s32 / ctx.r9.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// subf r3,r8,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r8.s64;
	// twlgei r11,-1
loc_8335768C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83357694"))) PPC_WEAK_FUNC(sub_83357694);
PPC_FUNC_IMPL(__imp__sub_83357694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83357698"))) PPC_WEAK_FUNC(sub_83357698);
PPC_FUNC_IMPL(__imp__sub_83357698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x833576A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,56(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x83357764
	if (!ctx.cr6.gt) goto loc_83357764;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x83357764
	if (ctx.cr6.eq) goto loc_83357764;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// blt cr6,0x833576d4
	if (ctx.cr6.lt) goto loc_833576D4;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x833576d4
	if (ctx.cr6.gt) goto loc_833576D4;
	// bl 0x83356c68
	ctx.lr = 0x833576D0;
	sub_83356C68(ctx, base);
	// b 0x833577ac
	goto loc_833577AC;
loc_833576D4:
	// lwz r31,4(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi r11,r3,21
	ctx.r11.u64 = ctx.r3.u32 & 0x7FF;
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r3,31,1,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFF800;
	// divwu r9,r3,r31
	ctx.r9.u32 = ctx.r3.u32 / ctx.r31.u32;
	// divw r8,r11,r31
	ctx.r8.s32 = ctx.r11.s32 / ctx.r31.s32;
	// divwu r7,r9,r30
	ctx.r7.u32 = ctx.r9.u32 / ctx.r30.u32;
	// divw r4,r8,r30
	ctx.r4.s32 = ctx.r8.s32 / ctx.r30.s32;
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// divwu r29,r3,r31
	ctx.r29.u32 = ctx.r3.u32 / ctx.r31.u32;
	// rotlwi r7,r11,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divwu r10,r10,r30
	ctx.r10.u32 = ctx.r10.u32 / ctx.r30.u32;
	// mullw r11,r4,r31
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// mullw r29,r29,r31
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// rlwinm r8,r3,21,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// subf r10,r29,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r29.s64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// andc r9,r31,r7
	ctx.r9.u64 = ctx.r31.u64 & ~ctx.r7.u64;
	// andc r8,r30,r6
	ctx.r8.u64 = ctx.r30.u64 & ~ctx.r6.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r31,0
	// twllei r31,0
	// twllei r30,0
	// twllei r30,0
	// twllei r31,0
	// twllei r30,0
	// twlgei r9,-1
	// twlgei r8,-1
	// bl 0x83357908
	ctx.lr = 0x83357760;
	sub_83357908(ctx, base);
	// b 0x833577ac
	goto loc_833577AC;
loc_83357764:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r9,28(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lwa r8,16(r5)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r5.u32 + 16));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// tdllei r8,0
	// sld r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// divdu r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 / ctx.r8.u64;
	// twllei r9,0
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r3,r10,r9
	ctx.r3.s32 = ctx.r10.s32 / ctx.r9.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
loc_833577AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833577B4"))) PPC_WEAK_FUNC(sub_833577B4);
PPC_FUNC_IMPL(__imp__sub_833577B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833577B8"))) PPC_WEAK_FUNC(sub_833577B8);
PPC_FUNC_IMPL(__imp__sub_833577B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x833577C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x833578ec
	if (!ctx.cr6.gt) goto loc_833578EC;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x833578ec
	if (ctx.cr6.eq) goto loc_833578EC;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// divwu r5,r9,r7
	ctx.r5.u32 = ctx.r9.u32 / ctx.r7.u32;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// divwu r9,r10,r7
	ctx.r9.u32 = ctx.r10.u32 / ctx.r7.u32;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// srawi r29,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 5;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r3,r9,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r9.s64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// divwu r11,r3,r6
	ctx.r11.u32 = ctx.r3.u32 / ctx.r6.u32;
	// mullw r31,r7,r3
	ctx.r31.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divwu r28,r11,r5
	ctx.r28.u32 = ctx.r11.u32 / ctx.r5.u32;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// srawi r9,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 1;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r4,r31,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r28,r5
	ctx.r8.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r5.s32);
	// twllei r5,0
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divwu r5,r4,r6
	ctx.r5.u32 = ctx.r4.u32 / ctx.r6.u32;
	// divwu r8,r3,r6
	ctx.r8.u32 = ctx.r3.u32 / ctx.r6.u32;
	// divwu r4,r9,r7
	ctx.r4.u32 = ctx.r9.u32 / ctx.r7.u32;
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// twllei r6,0
	// twllei r6,0
	// twllei r6,0
	// mullw r4,r4,r7
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// rlwinm r31,r11,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r6,r5,r29
	ctx.r6.u32 = ctx.r5.u32 / ctx.r29.u32;
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// mullw r9,r31,r7
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// subf r8,r8,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r8.s64;
	// mullw r6,r6,r29
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// twllei r7,0
	// twllei r7,0
	// twllei r7,0
	// twllei r29,0
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// subf r7,r6,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r6.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bge cr6,0x833578a8
	if (!ctx.cr6.lt) goto loc_833578A8;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x833578cc
	goto loc_833578CC;
loc_833578A8:
	// rlwinm r9,r8,31,1,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFF0;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srawi r6,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 3;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// divwu r6,r9,r8
	ctx.r6.u32 = ctx.r9.u32 / ctx.r8.u32;
	// twllei r8,0
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
loc_833578CC:
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// twllei r10,0
	// divwu r10,r8,r10
	ctx.r10.u32 = ctx.r8.u32 / ctx.r10.u32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x833578fc
	goto loc_833578FC;
loc_833578EC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83356030
	ctx.lr = 0x833578F4;
	sub_83356030(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83357570
	ctx.lr = 0x833578FC;
	sub_83357570(ctx, base);
loc_833578FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83357904"))) PPC_WEAK_FUNC(sub_83357904);
PPC_FUNC_IMPL(__imp__sub_83357904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83357908"))) PPC_WEAK_FUNC(sub_83357908);
PPC_FUNC_IMPL(__imp__sub_83357908) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x833579dc
	if (!ctx.cr6.gt) goto loc_833579DC;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x833579dc
	if (ctx.cr6.eq) goto loc_833579DC;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// twllei r9,0
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// srawi r7,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 5;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r4,r10,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r10.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mullw r10,r4,r9
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// divwu r9,r4,r8
	ctx.r9.u32 = ctx.r4.u32 / ctx.r8.u32;
	// divwu r10,r10,r8
	ctx.r10.u32 = ctx.r10.u32 / ctx.r8.u32;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// divwu r10,r10,r7
	ctx.r10.u32 = ctx.r10.u32 / ctx.r7.u32;
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// twllei r7,0
	// subf r7,r6,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r6.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divwu r10,r4,r8
	ctx.r10.u32 = ctx.r4.u32 / ctx.r8.u32;
	// twllei r8,0
	// twllei r8,0
	// twllei r8,0
	// clrlwi r9,r7,28
	ctx.r9.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r8,r7,31,1,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFF0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r9,r10,r5
	ctx.r9.u32 = ctx.r10.u32 / ctx.r5.u32;
	// rlwinm r10,r7,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// twllei r5,0
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x833579ec
	goto loc_833579EC;
loc_833579DC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83356030
	ctx.lr = 0x833579E4;
	sub_83356030(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83357698
	ctx.lr = 0x833579EC;
	sub_83357698(ctx, base);
loc_833579EC:
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

__attribute__((alias("__imp__sub_83357A00"))) PPC_WEAK_FUNC(sub_83357A00);
PPC_FUNC_IMPL(__imp__sub_83357A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83357A08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x83357a60
	if (!ctx.cr6.gt) goto loc_83357A60;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x83357a60
	if (ctx.cr6.eq) goto loc_83357A60;
	// bl 0x83357ab0
	ctx.lr = 0x83357A34;
	sub_83357AB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833572b8
	ctx.lr = 0x83357A4C;
	sub_833572B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83356030
	ctx.lr = 0x83357A5C;
	sub_83356030(ctx, base);
	// b 0x83357aa4
	goto loc_83357AA4;
loc_83357A60:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mullw r8,r11,r29
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwa r7,16(r31)
	ctx.r7.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 16));
	// mullw r9,r9,r28
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mulld r9,r9,r8
	ctx.r9.s64 = ctx.r9.s64 * ctx.r8.s64;
	// srad r11,r9,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r11.s64 = ctx.r9.s64 >> temp.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83357AA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83357AAC"))) PPC_WEAK_FUNC(sub_83357AAC);
PPC_FUNC_IMPL(__imp__sub_83357AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83357AB0"))) PPC_WEAK_FUNC(sub_83357AB0);
PPC_FUNC_IMPL(__imp__sub_83357AB0) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x83357ae0
	if (!ctx.cr6.gt) goto loc_83357AE0;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x83357ae0
	if (ctx.cr6.eq) goto loc_83357AE0;
	// bl 0x833564e8
	ctx.lr = 0x83357ADC;
	sub_833564E8(ctx, base);
	// b 0x83357b4c
	goto loc_83357B4C;
loc_83357AE0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x83357a00
	ctx.lr = 0x83357AE8;
	sub_83357A00(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r3,21
	ctx.r11.u64 = ctx.r3.u32 & 0x7FF;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r3,31,1,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFF800;
	// divw r6,r11,r9
	ctx.r6.s32 = ctx.r11.s32 / ctx.r9.s32;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r6,r6,r8
	ctx.r6.s32 = ctx.r6.s32 / ctx.r8.s32;
	// divwu r5,r3,r9
	ctx.r5.u32 = ctx.r3.u32 / ctx.r9.u32;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
	// divwu r10,r7,r8
	ctx.r10.u32 = ctx.r7.u32 / ctx.r8.u32;
	// mullw r11,r6,r9
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r5,r9
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r9,0
	// twllei r8,0
	// twllei r9,0
	// twllei r8,0
	// andc r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r4.u64;
	// andc r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r31.u64;
	// subf r10,r7,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r7.s64;
	// twlgei r9,-1
	// twlgei r8,-1
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83357B4C:
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

__attribute__((alias("__imp__sub_83357B60"))) PPC_WEAK_FUNC(sub_83357B60);
PPC_FUNC_IMPL(__imp__sub_83357B60) {
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
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r11,r3,21
	ctx.r11.u64 = ctx.r3.u32 & 0x7FF;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r3,31,1,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFF800;
	// divw r10,r11,r7
	ctx.r10.s32 = ctx.r11.s32 / ctx.r7.s32;
	// divwu r5,r3,r7
	ctx.r5.u32 = ctx.r3.u32 / ctx.r7.u32;
	// divw r8,r10,r6
	ctx.r8.s32 = ctx.r10.s32 / ctx.r6.s32;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// divwu r9,r9,r6
	ctx.r9.u32 = ctx.r9.u32 / ctx.r6.u32;
	// mullw r5,r5,r7
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r10,r5,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r5.s64;
	// andc r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r31.u64;
	// andc r8,r6,r30
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r30.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r7,0
	// twllei r7,0
	// twllei r6,0
	// twllei r6,0
	// twlgei r9,-1
	// twlgei r8,-1
	// bl 0x83357378
	ctx.lr = 0x83357BE4;
	sub_83357378(ctx, base);
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

__attribute__((alias("__imp__sub_83357BFC"))) PPC_WEAK_FUNC(sub_83357BFC);
PPC_FUNC_IMPL(__imp__sub_83357BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83357C00"))) PPC_WEAK_FUNC(sub_83357C00);
PPC_FUNC_IMPL(__imp__sub_83357C00) {
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
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r11,r3,21
	ctx.r11.u64 = ctx.r3.u32 & 0x7FF;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r3,31,1,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFF800;
	// divw r10,r11,r7
	ctx.r10.s32 = ctx.r11.s32 / ctx.r7.s32;
	// divwu r5,r3,r7
	ctx.r5.u32 = ctx.r3.u32 / ctx.r7.u32;
	// divw r8,r10,r6
	ctx.r8.s32 = ctx.r10.s32 / ctx.r6.s32;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// divwu r9,r9,r6
	ctx.r9.u32 = ctx.r9.u32 / ctx.r6.u32;
	// mullw r5,r5,r7
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r10,r5,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r5.s64;
	// andc r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r31.u64;
	// andc r8,r6,r30
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r30.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r7,0
	// twllei r7,0
	// twllei r6,0
	// twllei r6,0
	// twlgei r9,-1
	// twlgei r8,-1
	// bl 0x83357460
	ctx.lr = 0x83357C84;
	sub_83357460(ctx, base);
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

__attribute__((alias("__imp__sub_83357C9C"))) PPC_WEAK_FUNC(sub_83357C9C);
PPC_FUNC_IMPL(__imp__sub_83357C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83357CA0"))) PPC_WEAK_FUNC(sub_83357CA0);
PPC_FUNC_IMPL(__imp__sub_83357CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83357CA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x83357d74
	if (!ctx.cr6.gt) goto loc_83357D74;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x83357d74
	if (ctx.cr6.eq) goto loc_83357D74;
	// addi r10,r11,-24
	ctx.r10.s64 = ctx.r11.s64 + -24;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bgt cr6,0x83357d14
	if (ctx.cr6.gt) goto loc_83357D14;
	// addi r28,r11,-24
	ctx.r28.s64 = ctx.r11.s64 + -24;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x83357ab0
	ctx.lr = 0x83357CE8;
	sub_83357AB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833572b8
	ctx.lr = 0x83357D00;
	sub_833572B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_83357D08:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83356030
	ctx.lr = 0x83357D10;
	sub_83356030(ctx, base);
	// b 0x83357db0
	goto loc_83357DB0;
loc_83357D14:
	// srawi r10,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 2;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// srawi r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// srawi r10,r29,3
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 3;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r9,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 4;
	// divwu r7,r10,r8
	ctx.r7.u32 = ctx.r10.u32 / ctx.r8.u32;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// twllei r8,0
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x833563d0
	ctx.lr = 0x83357D6C;
	sub_833563D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x83357d08
	goto loc_83357D08;
loc_83357D74:
	// lwa r7,32(r31)
	ctx.r7.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 32));
	// extsw r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulld r9,r7,r9
	ctx.r9.s64 = ctx.r7.s64 * ctx.r9.s64;
	// lwa r6,16(r31)
	ctx.r6.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 16));
	// extsw r8,r29
	ctx.r8.s64 = ctx.r29.s32;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mulld r9,r9,r7
	ctx.r9.s64 = ctx.r9.s64 * ctx.r7.s64;
	// srad r11,r9,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r11.s64 = ctx.r9.s64 >> temp.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83357DB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83357DB8"))) PPC_WEAK_FUNC(sub_83357DB8);
PPC_FUNC_IMPL(__imp__sub_83357DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83357DC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// bgt cr6,0x833580f8
	if (ctx.cr6.gt) goto loc_833580F8;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,8552
	ctx.r12.s64 = ctx.r12.s64 + 8552;
	// lbzx r0,r12,r10
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31947
	ctx.r12.s64 = -2093678592;
	// addi r12,r12,32268
	ctx.r12.s64 = ctx.r12.s64 + 32268;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_83357E0C;
	case 1:
		goto loc_83357E38;
	case 2:
		goto loc_833580F8;
	case 3:
		goto loc_83357E88;
	case 4:
		goto loc_83357E88;
	case 5:
		goto loc_83357E88;
	case 6:
		goto loc_83357E88;
	case 7:
		goto loc_83357EF4;
	case 8:
		goto loc_83357EF4;
	case 9:
		goto loc_83357EF4;
	case 10:
		goto loc_83357EF4;
	case 11:
		goto loc_83357F7C;
	case 12:
		goto loc_83357F7C;
	case 13:
		goto loc_83357F7C;
	case 14:
		goto loc_83357F7C;
	case 15:
		goto loc_83357E80;
	case 16:
		goto loc_83357E80;
	case 17:
		goto loc_83357E80;
	case 18:
		goto loc_83357E80;
	case 19:
		goto loc_83358054;
	case 20:
		goto loc_833580D4;
	case 21:
		goto loc_83357E38;
	case 22:
		goto loc_83357F88;
	case 23:
		goto loc_83357F84;
	case 24:
		goto loc_83357F84;
	case 25:
		goto loc_83357F84;
	case 26:
		goto loc_83357F84;
	case 27:
		goto loc_83357F84;
	case 28:
		goto loc_83357F84;
	case 29:
		goto loc_83357F84;
	case 30:
		goto loc_83357F84;
	case 31:
		goto loc_83357FC0;
	case 32:
		goto loc_83357FC0;
	case 33:
		goto loc_83357FC0;
	case 34:
		goto loc_83357FC0;
	default:
		__builtin_unreachable();
	}
loc_83357E0C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r9,r29
	ctx.r9.s64 = ctx.r29.s32;
	// lwa r8,16(r31)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 16));
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulld r9,r8,r9
	ctx.r9.s64 = ctx.r8.s64 * ctx.r9.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// srd r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r11.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x833580fc
	goto loc_833580FC;
loc_83357E38:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwa r6,16(r31)
	ctx.r6.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 16));
	// mullw r11,r7,r28
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r28.s32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// mulld r11,r11,r10
	ctx.r11.s64 = ctx.r11.s64 * ctx.r10.s64;
	// srad r11,r11,r9
	temp.u64 = ctx.r9.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r11.s64 < 0) & (((ctx.r11.s64 >> temp.u64) << temp.u64) != ctx.r11.s64);
	ctx.r11.s64 = ctx.r11.s64 >> temp.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x833580fc
	goto loc_833580FC;
loc_83357E80:
	// rlwinm r29,r29,0,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r30,r30,0,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFF8;
loc_83357E88:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83357E8C:
	// srawi r10,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 2;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// srawi r9,r29,3
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 3;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 4;
	// divwu r7,r10,r8
	ctx.r7.u32 = ctx.r10.u32 / ctx.r8.u32;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// twllei r8,0
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x833563d0
	ctx.lr = 0x83357EE4;
	sub_833563D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83357EE8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83356030
	ctx.lr = 0x83357EF0;
	sub_83356030(ctx, base);
	// b 0x833580fc
	goto loc_833580FC;
loc_83357EF4:
	// srawi r10,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 2;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// srawi r9,r29,3
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 3;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 4;
	// divwu r7,r10,r8
	ctx.r7.u32 = ctx.r10.u32 / ctx.r8.u32;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// twllei r8,0
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x833563d0
	ctx.lr = 0x83357F50;
	sub_833563D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83356030
	ctx.lr = 0x83357F5C;
	sub_83356030(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
loc_83357F74:
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// b 0x833580fc
	goto loc_833580FC;
loc_83357F7C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x83357e8c
	goto loc_83357E8C;
loc_83357F84:
	// addi r28,r11,-24
	ctx.r28.s64 = ctx.r11.s64 + -24;
loc_83357F88:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83357ab0
	ctx.lr = 0x83357F9C;
	sub_83357AB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833572b8
	ctx.lr = 0x83357FB4;
	sub_833572B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x83357ee8
	goto loc_83357EE8;
loc_83357FC0:
	// srawi r10,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 2;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// srawi r9,r29,3
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 3;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 4;
	// divwu r7,r10,r8
	ctx.r7.u32 = ctx.r10.u32 / ctx.r8.u32;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// twllei r8,0
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x833563d0
	ctx.lr = 0x8335801C;
	sub_833563D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83356030
	ctx.lr = 0x83358028;
	sub_83356030(ctx, base);
	// lwa r10,60(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 60));
	// lwa r9,16(r31)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 16));
	// extsw r8,r28
	ctx.r8.s64 = ctx.r28.s32;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulld r10,r10,r9
	ctx.r10.s64 = ctx.r10.s64 * ctx.r9.s64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulld r10,r10,r8
	ctx.r10.s64 = ctx.r10.s64 * ctx.r8.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// srad r11,r10,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r10.s64 < 0) & (((ctx.r10.s64 >> temp.u64) << temp.u64) != ctx.r10.s64);
	ctx.r11.s64 = ctx.r10.s64 >> temp.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83357f74
	goto loc_83357F74;
loc_83358054:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bne cr6,0x8335808c
	if (!ctx.cr6.eq) goto loc_8335808C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_8335807C:
	// li r8,0
	ctx.r8.s64 = 0;
loc_83358080:
	// bl 0x83356ad0
	ctx.lr = 0x83358084;
	sub_83356AD0(ctx, base);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x833580fc
	goto loc_833580FC;
loc_8335808C:
	// rotlwi r10,r28,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// rotlwi r11,r28,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// divw r9,r28,r7
	ctx.r9.s32 = ctx.r28.s32 / ctx.r7.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r8,r28,r7
	ctx.r8.s32 = ctx.r28.s32 / ctx.r7.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// andc r31,r7,r10
	ctx.r31.u64 = ctx.r7.u64 & ~ctx.r10.u64;
	// mullw r5,r8,r7
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// andc r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// twllei r7,0
	// twllei r7,0
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r5,r5,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r5.s64;
	// twlgei r31,-1
	// twlgei r11,-1
	// b 0x8335807c
	goto loc_8335807C;
loc_833580D4:
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x83358080
	goto loc_83358080;
loc_833580F8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_833580FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83358104"))) PPC_WEAK_FUNC(sub_83358104);
PPC_FUNC_IMPL(__imp__sub_83358104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83358108"))) PPC_WEAK_FUNC(sub_83358108);
PPC_FUNC_IMPL(__imp__sub_83358108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x83358110;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// srawi r21,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r21.s64 = ctx.r11.s32 >> 6;
	// bl 0x83357db8
	ctx.lr = 0x8335813C;
	sub_83357DB8(ctx, base);
	// lwz r22,56(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,20
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 20, ctx.xer);
	// bne cr6,0x833581ac
	if (!ctx.cr6.eq) goto loc_833581AC;
	// cmpwi cr6,r21,8
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 8, ctx.xer);
	// bne cr6,0x833581ac
	if (!ctx.cr6.eq) goto loc_833581AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r31,r23
	ctx.r10.u64 = ctx.r31.u64 + ctx.r23.u64;
loc_8335815C:
	// lbzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8335815c
	if (ctx.cr6.lt) goto loc_8335815C;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83357db8
	ctx.lr = 0x83358188;
	sub_83357DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
	// add r9,r3,r23
	ctx.r9.u64 = ctx.r3.u64 + ctx.r23.u64;
loc_83358194:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83358194
	if (ctx.cr6.lt) goto loc_83358194;
	// b 0x8335830c
	goto loc_8335830C;
loc_833581AC:
	// lwz r26,8(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x83358284
	if (ctx.cr6.eq) goto loc_83358284;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83356138
	ctx.lr = 0x833581CC;
	sub_83356138(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-3296
	ctx.r9.s64 = ctx.r11.s64 + -3296;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// ble cr6,0x8335830c
	if (!ctx.cr6.gt) goto loc_8335830C;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_833581F0:
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r5,r31,r23
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r23.u32);
	// slw r4,r8,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r3.u8 & 0x3F));
	// srw r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// andc r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 & ~ctx.r4.u64;
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stbx r10,r31,r23
	PPC_STORE_U8(ctx.r31.u32 + ctx.r23.u32, ctx.r10.u8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subfic r10,r10,3
	ctx.xer.ca = ctx.r10.u32 <= 3;
	ctx.r10.s64 = 3 - ctx.r10.s64;
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x8335823c
	if (ctx.cr6.lt) goto loc_8335823C;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8335823C:
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// blt cr6,0x83358278
	if (ctx.cr6.lt) goto loc_83358278;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// ble cr6,0x83358278
	if (!ctx.cr6.gt) goto loc_83358278;
	// cmpwi cr6,r22,22
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 22, ctx.xer);
	// beq cr6,0x83358278
	if (ctx.cr6.eq) goto loc_83358278;
	// xor r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r31.u64;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// blt cr6,0x83358278
	if (ctx.cr6.lt) goto loc_83358278;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
loc_83358278:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x833581f0
	if (!ctx.cr0.eq) goto loc_833581F0;
	// b 0x8335830c
	goto loc_8335830C;
loc_83358284:
	// addi r11,r21,-1
	ctx.r11.s64 = ctx.r21.s64 + -1;
	// and. r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 & ctx.r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833582e4
	if (ctx.cr0.eq) goto loc_833582E4;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// ble cr6,0x833582e4
	if (!ctx.cr6.gt) goto loc_833582E4;
	// cmpwi cr6,r22,22
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 22, ctx.xer);
	// beq cr6,0x833582e4
	if (ctx.cr6.eq) goto loc_833582E4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x8335830c
	if (!ctx.cr6.gt) goto loc_8335830C;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
loc_833582B0:
	// lbzx r9,r10,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r25.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r9,r31,r23
	PPC_STORE_U8(ctx.r31.u32 + ctx.r23.u32, ctx.r9.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// xor r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// blt cr6,0x833582d4
	if (ctx.cr6.lt) goto loc_833582D4;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
loc_833582D4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x833582b0
	if (ctx.cr6.lt) goto loc_833582B0;
	// b 0x8335830c
	goto loc_8335830C;
loc_833582E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x8335830c
	if (!ctx.cr6.gt) goto loc_8335830C;
loc_833582F0:
	// xor r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r24.u64;
	// lbzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// stbx r9,r10,r23
	PPC_STORE_U8(ctx.r10.u32 + ctx.r23.u32, ctx.r9.u8);
	// blt cr6,0x833582f0
	if (ctx.cr6.lt) goto loc_833582F0;
loc_8335830C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83358318"))) PPC_WEAK_FUNC(sub_83358318);
PPC_FUNC_IMPL(__imp__sub_83358318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x83358320;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r21,12(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x83357db8
	ctx.lr = 0x83358348;
	sub_83357DB8(ctx, base);
	// lwz r22,56(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,20
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 20, ctx.xer);
	// bne cr6,0x833583b8
	if (!ctx.cr6.eq) goto loc_833583B8;
	// cmpwi cr6,r21,8
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 8, ctx.xer);
	// bne cr6,0x833583b8
	if (!ctx.cr6.eq) goto loc_833583B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r30,r23
	ctx.r10.u64 = ctx.r30.u64 + ctx.r23.u64;
loc_83358368:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r11,r25
	PPC_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83358368
	if (ctx.cr6.lt) goto loc_83358368;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83357db8
	ctx.lr = 0x83358394;
	sub_83357DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r3,r23
	ctx.r10.u64 = ctx.r3.u64 + ctx.r23.u64;
	// addi r9,r25,4
	ctx.r9.s64 = ctx.r25.s64 + 4;
loc_833583A0:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x833583a0
	if (ctx.cr6.lt) goto loc_833583A0;
	// b 0x8335851c
	goto loc_8335851C;
loc_833583B8:
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x83358494
	if (ctx.cr6.eq) goto loc_83358494;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83356138
	ctx.lr = 0x833583D8;
	sub_83356138(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-3296
	ctx.r9.s64 = ctx.r11.s64 + -3296;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// ble cr6,0x8335851c
	if (!ctx.cr6.gt) goto loc_8335851C;
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
loc_83358400:
	// lbzx r10,r30,r23
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r23.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// slw r29,r7,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// andc r5,r4,r29
	ctx.r5.u64 = ctx.r4.u64 & ~ctx.r29.u64;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfic r10,r10,3
	ctx.xer.ca = ctx.r10.u32 <= 3;
	ctx.r10.s64 = 3 - ctx.r10.s64;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x8335844c
	if (ctx.cr6.lt) goto loc_8335844C;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8335844C:
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// blt cr6,0x83358488
	if (ctx.cr6.lt) goto loc_83358488;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// ble cr6,0x83358488
	if (!ctx.cr6.gt) goto loc_83358488;
	// cmpwi cr6,r22,22
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 22, ctx.xer);
	// beq cr6,0x83358488
	if (ctx.cr6.eq) goto loc_83358488;
	// xor r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r30.u64;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// blt cr6,0x83358488
	if (ctx.cr6.lt) goto loc_83358488;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
loc_83358488:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x83358400
	if (!ctx.cr0.eq) goto loc_83358400;
	// b 0x8335851c
	goto loc_8335851C;
loc_83358494:
	// addi r11,r21,-1
	ctx.r11.s64 = ctx.r21.s64 + -1;
	// and. r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 & ctx.r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833584f4
	if (ctx.cr0.eq) goto loc_833584F4;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// ble cr6,0x833584f4
	if (!ctx.cr6.gt) goto loc_833584F4;
	// cmpwi cr6,r22,22
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 22, ctx.xer);
	// beq cr6,0x833584f4
	if (ctx.cr6.eq) goto loc_833584F4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x8335851c
	if (!ctx.cr6.gt) goto loc_8335851C;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
loc_833584C0:
	// lbzx r9,r30,r23
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r23.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// xor r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// stbx r9,r10,r25
	PPC_STORE_U8(ctx.r10.u32 + ctx.r25.u32, ctx.r9.u8);
	// cmpwi cr6,r8,128
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 128, ctx.xer);
	// blt cr6,0x833584e4
	if (ctx.cr6.lt) goto loc_833584E4;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
loc_833584E4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x833584c0
	if (ctx.cr6.lt) goto loc_833584C0;
	// b 0x8335851c
	goto loc_8335851C;
loc_833584F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x8335851c
	if (!ctx.cr6.gt) goto loc_8335851C;
loc_83358500:
	// xor r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r24.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbzx r10,r10,r23
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// stbx r10,r11,r25
	PPC_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x83358500
	if (ctx.cr6.lt) goto loc_83358500;
loc_8335851C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83358528"))) PPC_WEAK_FUNC(sub_83358528);
PPC_FUNC_IMPL(__imp__sub_83358528) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x83358598
	if (!ctx.cr6.gt) goto loc_83358598;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x83358598
	if (ctx.cr6.eq) goto loc_83358598;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// twllei r8,0
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// srawi r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// srawi r10,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 3;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r9,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 4;
	// divwu r7,r10,r8
	ctx.r7.u32 = ctx.r10.u32 / ctx.r8.u32;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x833585c8
	goto loc_833585C8;
loc_83358598:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83357ca0
	ctx.lr = 0x833585A0;
	sub_83357CA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0x1;
	// twllei r11,0
	// divwu r11,r3,r11
	ctx.r11.u32 = ctx.r3.u32 / ctx.r11.u32;
	// twllei r9,0
	// divwu r8,r11,r9
	ctx.r8.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_833585C8:
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_833585E0"))) PPC_WEAK_FUNC(sub_833585E0);
PPC_FUNC_IMPL(__imp__sub_833585E0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x83358618
	if (!ctx.cr6.gt) goto loc_83358618;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x83358618
	if (ctx.cr6.eq) goto loc_83358618;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x833563d0
	ctx.lr = 0x83358614;
	sub_833563D0(ctx, base);
	// b 0x83358684
	goto loc_83358684;
loc_83358618:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83357ca0
	ctx.lr = 0x83358620;
	sub_83357CA0(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r3,21
	ctx.r11.u64 = ctx.r3.u32 & 0x7FF;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r3,31,1,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFF800;
	// divw r6,r11,r9
	ctx.r6.s32 = ctx.r11.s32 / ctx.r9.s32;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r6,r6,r8
	ctx.r6.s32 = ctx.r6.s32 / ctx.r8.s32;
	// divwu r5,r3,r9
	ctx.r5.u32 = ctx.r3.u32 / ctx.r9.u32;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
	// divwu r10,r7,r8
	ctx.r10.u32 = ctx.r7.u32 / ctx.r8.u32;
	// mullw r11,r6,r9
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r5,r9
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r9,0
	// twllei r8,0
	// twllei r9,0
	// twllei r8,0
	// andc r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r4.u64;
	// andc r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r31.u64;
	// subf r10,r7,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r7.s64;
	// twlgei r9,-1
	// twlgei r8,-1
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83358684:
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

__attribute__((alias("__imp__sub_83358698"))) PPC_WEAK_FUNC(sub_83358698);
PPC_FUNC_IMPL(__imp__sub_83358698) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833586ec
	if (ctx.cr0.eq) goto loc_833586EC;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x833586e0
	if (ctx.cr6.lt) goto loc_833586E0;
	// beq cr6,0x833586d4
	if (ctx.cr6.eq) goto loc_833586D4;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x833586c8
	if (ctx.cr6.lt) goto loc_833586C8;
	// bne cr6,0x833586ec
	if (!ctx.cr6.eq) goto loc_833586EC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,26,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// blr 
	return;
loc_833586C8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,28,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// blr 
	return;
loc_833586D4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,30,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// blr 
	return;
loc_833586E0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
loc_833586EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833586F4"))) PPC_WEAK_FUNC(sub_833586F4);
PPC_FUNC_IMPL(__imp__sub_833586F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833586F8"))) PPC_WEAK_FUNC(sub_833586F8);
PPC_FUNC_IMPL(__imp__sub_833586F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83358750
	if (ctx.cr0.eq) goto loc_83358750;
	// blt cr6,0x83358744
	if (ctx.cr6.lt) goto loc_83358744;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x83358738
	if (ctx.cr6.eq) goto loc_83358738;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x8335872c
	if (ctx.cr6.lt) goto loc_8335872C;
	// bne cr6,0x83358768
	if (!ctx.cr6.eq) goto loc_83358768;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,20,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// blr 
	return;
loc_8335872C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
loc_83358738:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
loc_83358744:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
loc_83358750:
	// blt cr6,0x83358788
	if (ctx.cr6.lt) goto loc_83358788;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x83358780
	if (ctx.cr6.eq) goto loc_83358780;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x83358778
	if (ctx.cr6.lt) goto loc_83358778;
	// beq cr6,0x83358770
	if (ctx.cr6.eq) goto loc_83358770;
loc_83358768:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83358770:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83358778:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83358780:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83358788:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83358790"))) PPC_WEAK_FUNC(sub_83358790);
PPC_FUNC_IMPL(__imp__sub_83358790) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833587a8
	if (ctx.cr0.eq) goto loc_833587A8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// andi. r3,r11,34952
	ctx.r3.u64 = ctx.r11.u64 & 34952;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blr 
	return;
loc_833587A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833587B0"))) PPC_WEAK_FUNC(sub_833587B0);
PPC_FUNC_IMPL(__imp__sub_833587B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83358804
	if (ctx.cr0.eq) goto loc_83358804;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x833587f8
	if (ctx.cr6.lt) goto loc_833587F8;
	// beq cr6,0x833587ec
	if (ctx.cr6.eq) goto loc_833587EC;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x833587e0
	if (ctx.cr6.lt) goto loc_833587E0;
	// bne cr6,0x83358804
	if (!ctx.cr6.eq) goto loc_83358804;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
loc_833587E0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// blr 
	return;
loc_833587EC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
loc_833587F8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
loc_83358804:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335880C"))) PPC_WEAK_FUNC(sub_8335880C);
PPC_FUNC_IMPL(__imp__sub_8335880C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83358810"))) PPC_WEAK_FUNC(sub_83358810);
PPC_FUNC_IMPL(__imp__sub_83358810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83358818;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833588c4
	if (ctx.cr0.eq) goto loc_833588C4;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r9,-21168
	ctx.r31.s64 = ctx.r9.s64 + -21168;
	// addi r30,r10,-12392
	ctx.r30.s64 = ctx.r10.s64 + -12392;
	// addi r29,r11,9992
	ctx.r29.s64 = ctx.r11.s64 + 9992;
loc_83358848:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x833588a0
	if (ctx.cr6.lt) goto loc_833588A0;
	// beq cr6,0x83358894
	if (ctx.cr6.eq) goto loc_83358894;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// blt cr6,0x83358888
	if (ctx.cr6.lt) goto loc_83358888;
	// beq cr6,0x8335887c
	if (ctx.cr6.eq) goto loc_8335887C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,166
	ctx.r7.s64 = 166;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83358878;
	sub_8320CF10(ctx, base);
	// b 0x833588b8
	goto loc_833588B8;
loc_8335887C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// b 0x833588a8
	goto loc_833588A8;
loc_83358888:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// b 0x833588a8
	goto loc_833588A8;
loc_83358894:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// b 0x833588a8
	goto loc_833588A8;
loc_833588A0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
loc_833588A8:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x833588d0
	if (ctx.cr6.eq) goto loc_833588D0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x833588d0
	if (ctx.cr6.eq) goto loc_833588D0;
loc_833588B8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x83358848
	if (ctx.cr6.lt) goto loc_83358848;
loc_833588C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_833588C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_833588D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x833588c8
	goto loc_833588C8;
}

__attribute__((alias("__imp__sub_833588D8"))) PPC_WEAK_FUNC(sub_833588D8);
PPC_FUNC_IMPL(__imp__sub_833588D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x833588E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335898c
	if (ctx.cr0.eq) goto loc_8335898C;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r9,-21168
	ctx.r31.s64 = ctx.r9.s64 + -21168;
	// addi r30,r10,-12392
	ctx.r30.s64 = ctx.r10.s64 + -12392;
	// addi r29,r11,9992
	ctx.r29.s64 = ctx.r11.s64 + 9992;
loc_83358910:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x83358968
	if (ctx.cr6.lt) goto loc_83358968;
	// beq cr6,0x8335895c
	if (ctx.cr6.eq) goto loc_8335895C;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// blt cr6,0x83358950
	if (ctx.cr6.lt) goto loc_83358950;
	// beq cr6,0x83358944
	if (ctx.cr6.eq) goto loc_83358944;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,206
	ctx.r7.s64 = 206;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83358940;
	sub_8320CF10(ctx, base);
	// b 0x83358980
	goto loc_83358980;
loc_83358944:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// b 0x83358970
	goto loc_83358970;
loc_83358950:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,24,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// b 0x83358970
	goto loc_83358970;
loc_8335895C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// b 0x83358970
	goto loc_83358970;
loc_83358968:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
loc_83358970:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x83358998
	if (ctx.cr6.eq) goto loc_83358998;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x83358998
	if (ctx.cr6.eq) goto loc_83358998;
loc_83358980:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x83358910
	if (ctx.cr6.lt) goto loc_83358910;
loc_8335898C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83358990:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_83358998:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83358990
	goto loc_83358990;
}

__attribute__((alias("__imp__sub_833589A0"))) PPC_WEAK_FUNC(sub_833589A0);
PPC_FUNC_IMPL(__imp__sub_833589A0) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833589D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833589e0
	if (ctx.cr0.eq) goto loc_833589E0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x833589e4
	goto loc_833589E4;
loc_833589E0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_833589E4:
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

__attribute__((alias("__imp__sub_833589F8"))) PPC_WEAK_FUNC(sub_833589F8);
PPC_FUNC_IMPL(__imp__sub_833589F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2600);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83358a18
	if (ctx.cr6.eq) goto loc_83358A18;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_83358A18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83358A20"))) PPC_WEAK_FUNC(sub_83358A20);
PPC_FUNC_IMPL(__imp__sub_83358A20) {
	PPC_FUNC_PROLOGUE();
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83358A28"))) PPC_WEAK_FUNC(sub_83358A28);
PPC_FUNC_IMPL(__imp__sub_83358A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83358A38"))) PPC_WEAK_FUNC(sub_83358A38);
PPC_FUNC_IMPL(__imp__sub_83358A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x83358A40;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwz r31,688(r13)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 688);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,692(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// ori r25,r10,32768
	ctx.r25.u64 = ctx.r10.u64 | 32768;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83358ae4
	if (ctx.cr6.lt) goto loc_83358AE4;
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83358A78:
	// mtmsrd r25,1
	ctx.msr = (ctx.r25.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83358b2c
	if (ctx.cr6.eq) goto loc_83358B2C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,2600(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2600);
	// li r9,4
	ctx.r9.s64 = 4;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83358ac4
	if (ctx.cr6.eq) goto loc_83358AC4;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,80
	ctx.r3.s64 = 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83358AC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83358ac8
	goto loc_83358AC8;
loc_83358AC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83358AC8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83358b2c
	if (ctx.cr6.eq) goto loc_83358B2C;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwz r31,688(r13)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 688);
	// lwz r11,692(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83358a78
	if (!ctx.cr6.lt) goto loc_83358A78;
loc_83358AE4:
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r30,r29,2
	ctx.r30.s64 = ctx.r29.s64 + 2;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r30,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF000000;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// or r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 | ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x83358b1c
	if (ctx.cr6.eq) goto loc_83358B1C;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82cb1160
	ctx.lr = 0x83358B1C;
	sub_82CB1160(ctx, base);
loc_83358B1C:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,688(r13)
	PPC_STORE_U32(ctx.r13.u32 + 688, ctx.r11.u32);
	// mtmsrd r25,1
	ctx.msr = (ctx.r25.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_83358B2C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83358B34"))) PPC_WEAK_FUNC(sub_83358B34);
PPC_FUNC_IMPL(__imp__sub_83358B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83358B38"))) PPC_WEAK_FUNC(sub_83358B38);
PPC_FUNC_IMPL(__imp__sub_83358B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83358B40;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwz r31,688(r13)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 688);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,692(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// ori r26,r10,32768
	ctx.r26.u64 = ctx.r10.u64 | 32768;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83358be0
	if (ctx.cr6.lt) goto loc_83358BE0;
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83358B74:
	// mtmsrd r26,1
	ctx.msr = (ctx.r26.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83358c28
	if (ctx.cr6.eq) goto loc_83358C28;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,2600(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2600);
	// li r9,4
	ctx.r9.s64 = 4;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83358bc0
	if (ctx.cr6.eq) goto loc_83358BC0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,80
	ctx.r3.s64 = 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83358BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83358bc4
	goto loc_83358BC4;
loc_83358BC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83358BC4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83358c28
	if (ctx.cr6.eq) goto loc_83358C28;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwz r31,688(r13)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 688);
	// lwz r11,692(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83358b74
	if (!ctx.cr6.lt) goto loc_83358B74;
loc_83358BE0:
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r30,r29,2
	ctx.r30.s64 = ctx.r29.s64 + 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r30,24,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF000000;
	// rlwimi r10,r11,7,0,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 7) & 0xFFFFFF80) | (ctx.r10.u64 & 0xFFFFFFFF0000007F);
	// or r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 | ctx.r28.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x83358c18
	if (ctx.cr6.eq) goto loc_83358C18;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82cb1160
	ctx.lr = 0x83358C18;
	sub_82CB1160(ctx, base);
loc_83358C18:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,688(r13)
	PPC_STORE_U32(ctx.r13.u32 + 688, ctx.r11.u32);
	// mtmsrd r26,1
	ctx.msr = (ctx.r26.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_83358C28:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83358C30"))) PPC_WEAK_FUNC(sub_83358C30);
PPC_FUNC_IMPL(__imp__sub_83358C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x83358C38;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwz r31,688(r13)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 688);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,692(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// cmplwi cr6,r29,51
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 51, ctx.xer);
	// addi r30,r29,-51
	ctx.r30.s64 = ctx.r29.s64 + -51;
	// bgt cr6,0x83358c68
	if (ctx.cr6.gt) goto loc_83358C68;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_83358C68:
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r28,r31
	ctx.r9.u64 = ctx.r28.u64 + ctx.r31.u64;
	// ori r25,r10,32768
	ctx.r25.u64 = ctx.r10.u64 | 32768;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83358cf8
	if (ctx.cr6.lt) goto loc_83358CF8;
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
loc_83358C84:
	// mtmsrd r25,1
	ctx.msr = (ctx.r25.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83358d40
	if (ctx.cr6.eq) goto loc_83358D40;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,2600(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2600);
	// li r9,5
	ctx.r9.s64 = 5;
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// std r27,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r27.u64);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83358cd4
	if (ctx.cr6.eq) goto loc_83358CD4;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,80
	ctx.r3.s64 = 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83358CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83358cd8
	goto loc_83358CD8;
loc_83358CD4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_83358CD8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83358d40
	if (ctx.cr6.eq) goto loc_83358D40;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwz r31,688(r13)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 688);
	// lwz r11,692(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83358c84
	if (!ctx.cr6.lt) goto loc_83358C84;
loc_83358CF8:
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r30,r29,2
	ctx.r30.s64 = ctx.r29.s64 + 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r30,24,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF000000;
	// rlwimi r10,r11,7,0,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 7) & 0xFFFFFF80) | (ctx.r10.u64 & 0xFFFFFFFF0000007F);
	// or r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 | ctx.r24.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x83358d30
	if (ctx.cr6.eq) goto loc_83358D30;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82cb1160
	ctx.lr = 0x83358D30;
	sub_82CB1160(ctx, base);
loc_83358D30:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,688(r13)
	PPC_STORE_U32(ctx.r13.u32 + 688, ctx.r11.u32);
	// mtmsrd r25,1
	ctx.msr = (ctx.r25.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_83358D40:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83358D48"))) PPC_WEAK_FUNC(sub_83358D48);
PPC_FUNC_IMPL(__imp__sub_83358D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83358D50;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwz r31,688(r13)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 688);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,692(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// ori r26,r10,32768
	ctx.r26.u64 = ctx.r10.u64 | 32768;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83358df0
	if (ctx.cr6.lt) goto loc_83358DF0;
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83358D84:
	// mtmsrd r26,1
	ctx.msr = (ctx.r26.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83358e38
	if (ctx.cr6.eq) goto loc_83358E38;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,2600(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2600);
	// li r9,4
	ctx.r9.s64 = 4;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83358dd0
	if (ctx.cr6.eq) goto loc_83358DD0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,80
	ctx.r3.s64 = 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83358DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83358dd4
	goto loc_83358DD4;
loc_83358DD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83358DD4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83358e38
	if (ctx.cr6.eq) goto loc_83358E38;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwz r31,688(r13)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 688);
	// lwz r11,692(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83358d84
	if (!ctx.cr6.lt) goto loc_83358D84;
loc_83358DF0:
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r30,r29,2
	ctx.r30.s64 = ctx.r29.s64 + 2;
	// li r10,97
	ctx.r10.s64 = 97;
	// rlwinm r9,r30,24,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF000000;
	// rlwimi r10,r11,7,0,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 7) & 0xFFFFFF80) | (ctx.r10.u64 & 0xFFFFFFFF0000007F);
	// or r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 | ctx.r28.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x83358e28
	if (ctx.cr6.eq) goto loc_83358E28;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82cb1160
	ctx.lr = 0x83358E28;
	sub_82CB1160(ctx, base);
loc_83358E28:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,688(r13)
	PPC_STORE_U32(ctx.r13.u32 + 688, ctx.r11.u32);
	// mtmsrd r26,1
	ctx.msr = (ctx.r26.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_83358E38:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83358E40"))) PPC_WEAK_FUNC(sub_83358E40);
PPC_FUNC_IMPL(__imp__sub_83358E40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_83358E4C:
	// lbzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bgt cr6,0x83358e90
	if (ctx.cr6.gt) goto loc_83358E90;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83358ee8
	if (ctx.cr6.eq) goto loc_83358EE8;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x83358ee0
	if (ctx.cr6.eq) goto loc_83358EE0;
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,71
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 71, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// b 0x83358ed4
	goto loc_83358ED4;
loc_83358E90:
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// bgt cr6,0x83358ec8
	if (ctx.cr6.gt) goto loc_83358EC8;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// blt cr6,0x83358ed8
	if (ctx.cr6.lt) goto loc_83358ED8;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// ble cr6,0x83358ed8
	if (!ctx.cr6.gt) goto loc_83358ED8;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x83358ed8
	goto loc_83358ED8;
loc_83358EC8:
	// cmpwi cr6,r11,117
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 117, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
loc_83358ED4:
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_83358ED8:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x83358e4c
	goto loc_83358E4C;
loc_83358EE0:
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// blr 
	return;
loc_83358EE8:
	// subfic r3,r3,1
	ctx.xer.ca = ctx.r3.u32 <= 1;
	ctx.r3.s64 = 1 - ctx.r3.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83358EF0"))) PPC_WEAK_FUNC(sub_83358EF0);
PPC_FUNC_IMPL(__imp__sub_83358EF0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83358EF8;
	__savegprlr_29(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x83359074
	goto loc_83359074;
loc_83358F08:
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x83358f5c
	if (ctx.cr6.eq) goto loc_83358F5C;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335908c
	if (ctx.cr0.eq) goto loc_8335908C;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x83358f58
	if (ctx.cr6.eq) goto loc_83358F58;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83359088
	if (ctx.cr0.eq) goto loc_83359088;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x83358f54
	if (ctx.cr6.eq) goto loc_83358F54;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83359084
	if (ctx.cr0.eq) goto loc_83359084;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x83359070
	if (!ctx.cr6.eq) goto loc_83359070;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_83358F54:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83358F58:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83358F5C:
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
loc_83358F64:
	// lbzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bgt cr6,0x83358fa8
	if (ctx.cr6.gt) goto loc_83358FA8;
	// beq cr6,0x83358fdc
	if (ctx.cr6.eq) goto loc_83358FDC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83359010
	if (ctx.cr6.eq) goto loc_83359010;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x83359008
	if (ctx.cr6.eq) goto loc_83359008;
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beq cr6,0x83358fdc
	if (ctx.cr6.eq) goto loc_83358FDC;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x83358fdc
	if (ctx.cr6.eq) goto loc_83358FDC;
	// cmpwi cr6,r11,71
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 71, ctx.xer);
	// beq cr6,0x83358fdc
	if (ctx.cr6.eq) goto loc_83358FDC;
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// b 0x83358ffc
	goto loc_83358FFC;
loc_83358FA8:
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// bgt cr6,0x83358ff0
	if (ctx.cr6.gt) goto loc_83358FF0;
	// beq cr6,0x83358fdc
	if (ctx.cr6.eq) goto loc_83358FDC;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// blt cr6,0x83359000
	if (ctx.cr6.lt) goto loc_83359000;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// ble cr6,0x83358fdc
	if (!ctx.cr6.gt) goto loc_83358FDC;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x83358fdc
	if (ctx.cr6.eq) goto loc_83358FDC;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// ble cr6,0x83359000
	if (!ctx.cr6.gt) goto loc_83359000;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// bgt cr6,0x83359000
	if (ctx.cr6.gt) goto loc_83359000;
loc_83358FDC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83358FE0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x83359018
	if (!ctx.cr6.lt) goto loc_83359018;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x83359074
	goto loc_83359074;
loc_83358FF0:
	// cmpwi cr6,r11,117
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 117, ctx.xer);
	// beq cr6,0x83358fdc
	if (ctx.cr6.eq) goto loc_83358FDC;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
loc_83358FFC:
	// beq cr6,0x83358fdc
	if (ctx.cr6.eq) goto loc_83358FDC;
loc_83359000:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x83358f64
	goto loc_83358F64;
loc_83359008:
	// neg r11,r10
	ctx.r11.s64 = -ctx.r10.s64;
	// b 0x83358fe0
	goto loc_83358FE0;
loc_83359010:
	// subfic r11,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r10.s64;
	// b 0x83358fe0
	goto loc_83358FE0;
loc_83359018:
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// bge cr6,0x83359074
	if (!ctx.cr6.lt) goto loc_83359074;
	// lbz r11,-1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x8335903c
	if (ctx.cr6.eq) goto loc_8335903C;
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// bne cr6,0x83359064
	if (!ctx.cr6.eq) goto loc_83359064;
loc_8335903C:
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// dcbt r0,r10
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8335905c
	if (!ctx.cr6.eq) goto loc_8335905C;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// or r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_8335905C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
loc_83359064:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// b 0x83359074
	goto loc_83359074;
loc_83359070:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_83359074:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83358f08
	if (!ctx.cr0.eq) goto loc_83358F08;
	// b 0x83359090
	goto loc_83359090;
loc_83359084:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83359088:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8335908C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83359090:
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833590A0"))) PPC_WEAK_FUNC(sub_833590A0);
PPC_FUNC_IMPL(__imp__sub_833590A0) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x833590b0
	if (ctx.cr6.lt) goto loc_833590B0;
	// blr 
	return;
loc_833590B0:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// beq 0x8335917c
	if (ctx.cr0.eq) goto loc_8335917C;
	// addi r7,r8,4
	ctx.r7.s64 = ctx.r8.s64 + 4;
loc_833590C4:
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335917c
	if (ctx.cr0.eq) goto loc_8335917C;
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rlwinm r6,r11,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// extsb. r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// beq 0x8335917c
	if (ctx.cr0.eq) goto loc_8335917C;
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// extsb. r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// beq 0x8335917c
	if (ctx.cr0.eq) goto loc_8335917C;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8335917c
	if (!ctx.cr6.lt) goto loc_8335917C;
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r9,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// beq 0x83359188
	if (ctx.cr0.eq) goto loc_83359188;
	// lbz r9,5(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83359188
	if (ctx.cr0.eq) goto loc_83359188;
	// lbz r6,6(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// rlwinm r3,r9,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// extsb. r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// beq 0x83359188
	if (ctx.cr0.eq) goto loc_83359188;
	// lbz r6,7(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// rlwinm r3,r9,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// extsb. r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// beq 0x83359188
	if (ctx.cr0.eq) goto loc_83359188;
	// addi r6,r7,4
	ctx.r6.s64 = ctx.r7.s64 + 4;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x83359188
	if (!ctx.cr6.lt) goto loc_83359188;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// bne 0x833590c4
	if (!ctx.cr0.eq) goto loc_833590C4;
loc_8335917C:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// blr 
	return;
loc_83359188:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r3,r8,8
	ctx.r3.s64 = ctx.r8.s64 + 8;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359198"))) PPC_WEAK_FUNC(sub_83359198);
PPC_FUNC_IMPL(__imp__sub_83359198) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x833591a8
	if (ctx.cr6.lt) goto loc_833591A8;
	// blr 
	return;
loc_833591A8:
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r10,r11,24
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83359274
	if (ctx.cr0.eq) goto loc_83359274;
	// addi r7,r8,4
	ctx.r7.s64 = ctx.r8.s64 + 4;
loc_833591BC:
	// lbz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83359274
	if (ctx.cr0.eq) goto loc_83359274;
	// rlwinm r9,r11,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83359274
	if (ctx.cr0.eq) goto loc_83359274;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r11,7(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83359274
	if (ctx.cr0.eq) goto loc_83359274;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x83359274
	if (!ctx.cr6.lt) goto loc_83359274;
	// lbz r9,9(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// rotlwi r11,r9,24
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 24);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x83359280
	if (ctx.cr0.eq) goto loc_83359280;
	// lbz r9,11(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x83359280
	if (ctx.cr0.eq) goto loc_83359280;
	// rlwinm r6,r9,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// lbz r9,13(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x83359280
	if (ctx.cr0.eq) goto loc_83359280;
	// rlwinm r6,r9,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r9,15(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x83359280
	if (ctx.cr0.eq) goto loc_83359280;
	// addi r6,r7,4
	ctx.r6.s64 = ctx.r7.s64 + 4;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x83359280
	if (!ctx.cr6.lt) goto loc_83359280;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r10,r11,24
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x833591bc
	if (!ctx.cr0.eq) goto loc_833591BC;
loc_83359274:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// blr 
	return;
loc_83359280:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r3,r8,8
	ctx.r3.s64 = ctx.r8.s64 + 8;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359290"))) PPC_WEAK_FUNC(sub_83359290);
PPC_FUNC_IMPL(__imp__sub_83359290) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// ble cr6,0x833592dc
	if (!ctx.cr6.gt) goto loc_833592DC;
	// addi r11,r5,-13
	ctx.r11.s64 = ctx.r5.s64 + -13;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
loc_833592AC:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bne 0x833592ac
	if (!ctx.cr0.eq) goto loc_833592AC;
loc_833592DC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_833592F0:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x833592f0
	if (!ctx.cr0.eq) goto loc_833592F0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335930C"))) PPC_WEAK_FUNC(sub_8335930C);
PPC_FUNC_IMPL(__imp__sub_8335930C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83359310"))) PPC_WEAK_FUNC(sub_83359310);
PPC_FUNC_IMPL(__imp__sub_83359310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x83359318;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,692(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8335970c
	if (ctx.cr6.eq) goto loc_8335970C;
	// dcbt r0,r28
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x833594f0
	if (ctx.cr0.eq) goto loc_833594F0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_8335936C:
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x833593c0
	if (ctx.cr6.eq) goto loc_833593C0;
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x833594ec
	if (ctx.cr0.eq) goto loc_833594EC;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x833593bc
	if (ctx.cr6.eq) goto loc_833593BC;
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x833594e8
	if (ctx.cr0.eq) goto loc_833594E8;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x833593b8
	if (ctx.cr6.eq) goto loc_833593B8;
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x833594e4
	if (ctx.cr0.eq) goto loc_833594E4;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x833594d0
	if (!ctx.cr6.eq) goto loc_833594D0;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_833593B8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_833593BC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_833593C0:
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
loc_833593C8:
	// lbzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bgt cr6,0x8335940c
	if (ctx.cr6.gt) goto loc_8335940C;
	// beq cr6,0x83359440
	if (ctx.cr6.eq) goto loc_83359440;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83359474
	if (ctx.cr6.eq) goto loc_83359474;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x8335946c
	if (ctx.cr6.eq) goto loc_8335946C;
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beq cr6,0x83359440
	if (ctx.cr6.eq) goto loc_83359440;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x83359440
	if (ctx.cr6.eq) goto loc_83359440;
	// cmpwi cr6,r11,71
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 71, ctx.xer);
	// beq cr6,0x83359440
	if (ctx.cr6.eq) goto loc_83359440;
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// b 0x83359460
	goto loc_83359460;
loc_8335940C:
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// bgt cr6,0x83359454
	if (ctx.cr6.gt) goto loc_83359454;
	// beq cr6,0x83359440
	if (ctx.cr6.eq) goto loc_83359440;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// blt cr6,0x83359464
	if (ctx.cr6.lt) goto loc_83359464;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// ble cr6,0x83359440
	if (!ctx.cr6.gt) goto loc_83359440;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x83359440
	if (ctx.cr6.eq) goto loc_83359440;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// ble cr6,0x83359464
	if (!ctx.cr6.gt) goto loc_83359464;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// bgt cr6,0x83359464
	if (ctx.cr6.gt) goto loc_83359464;
loc_83359440:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83359444:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8335947c
	if (!ctx.cr6.lt) goto loc_8335947C;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// b 0x833594d4
	goto loc_833594D4;
loc_83359454:
	// cmpwi cr6,r11,117
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 117, ctx.xer);
	// beq cr6,0x83359440
	if (ctx.cr6.eq) goto loc_83359440;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
loc_83359460:
	// beq cr6,0x83359440
	if (ctx.cr6.eq) goto loc_83359440;
loc_83359464:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x833593c8
	goto loc_833593C8;
loc_8335946C:
	// neg r11,r10
	ctx.r11.s64 = -ctx.r10.s64;
	// b 0x83359444
	goto loc_83359444;
loc_83359474:
	// subfic r11,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r10.s64;
	// b 0x83359444
	goto loc_83359444;
loc_8335947C:
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r27,8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 8, ctx.xer);
	// bge cr6,0x833594d4
	if (!ctx.cr6.lt) goto loc_833594D4;
	// lbz r11,-1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x833594a0
	if (ctx.cr6.eq) goto loc_833594A0;
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// bne cr6,0x833594c4
	if (!ctx.cr6.eq) goto loc_833594C4;
loc_833594A0:
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// dcbt r0,r10
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// bne cr6,0x833594bc
	if (!ctx.cr6.eq) goto loc_833594BC;
	// slw r11,r19,r21
	ctx.r11.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r21.u8 & 0x3F));
	// or r20,r11,r20
	ctx.r20.u64 = ctx.r11.u64 | ctx.r20.u64;
loc_833594BC:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
loc_833594C4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// b 0x833594d4
	goto loc_833594D4;
loc_833594D0:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_833594D4:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8335936c
	if (!ctx.cr0.eq) goto loc_8335936C;
	// b 0x833594f0
	goto loc_833594F0;
loc_833594E4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_833594E8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_833594EC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_833594F0:
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwz r11,688(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 688);
	// lwz r10,692(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r23,r9,32768
	ctx.r23.u64 = ctx.r9.u64 | 32768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83359584
	if (ctx.cr6.lt) goto loc_83359584;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
loc_83359510:
	// mtmsrd r23,1
	ctx.msr = (ctx.r23.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8335970c
	if (ctx.cr6.eq) goto loc_8335970C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,2600(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2600);
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83359564
	if (ctx.cr6.eq) goto loc_83359564;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,80
	ctx.r3.s64 = 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83359560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83359568
	goto loc_83359568;
loc_83359564:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83359568:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8335970c
	if (ctx.cr6.eq) goto loc_8335970C;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwz r11,688(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 688);
	// lwz r10,692(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83359510
	if (!ctx.cr6.lt) goto loc_83359510;
loc_83359584:
	// clrlwi r8,r28,30
	ctx.r8.u64 = ctx.r28.u32 & 0x3;
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r8,r22
	ctx.r9.u64 = ctx.r8.u64 + ctx.r22.u64;
	// rlwinm r7,r21,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 | ctx.r27.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// ble cr6,0x83359604
	if (!ctx.cr6.gt) goto loc_83359604;
	// addi r7,r10,-13
	ctx.r7.s64 = ctx.r10.s64 + -13;
	// rlwinm r7,r7,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
loc_833595D4:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x833595d4
	if (!ctx.cr0.eq) goto loc_833595D4;
loc_83359604:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x83359630
	if (!ctx.cr6.gt) goto loc_83359630;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_83359618:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83359618
	if (!ctx.cr0.eq) goto loc_83359618;
loc_83359630:
	// subf r10,r28,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r28.s64;
	// addi r5,r11,36
	ctx.r5.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r9,36
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 36, ctx.xer);
	// blt cr6,0x8335964c
	if (ctx.cr6.lt) goto loc_8335964C;
	// li r9,36
	ctx.r9.s64 = 36;
loc_8335964C:
	// subf r10,r8,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r8.s64;
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// ble cr6,0x8335969c
	if (!ctx.cr6.gt) goto loc_8335969C;
	// addi r8,r9,-13
	ctx.r8.s64 = ctx.r9.s64 + -13;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
loc_8335966C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x8335966c
	if (!ctx.cr0.eq) goto loc_8335966C;
loc_8335969C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x833596c8
	if (!ctx.cr6.gt) goto loc_833596C8;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_833596B0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x833596b0
	if (!ctx.cr0.eq) goto loc_833596B0;
loc_833596C8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x83359704
	if (ctx.cr6.eq) goto loc_83359704;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
loc_833596D8:
	// slw r11,r19,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and. r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 & ctx.r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833596f0
	if (ctx.cr0.eq) goto loc_833596F0;
	// bl 0x83359198
	ctx.lr = 0x833596EC;
	sub_83359198(ctx, base);
	// b 0x833596f4
	goto loc_833596F4;
loc_833596F0:
	// bl 0x833590a0
	ctx.lr = 0x833596F4;
	sub_833590A0(ctx, base);
loc_833596F4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x833596d8
	if (ctx.cr6.lt) goto loc_833596D8;
loc_83359704:
	// stw r3,688(r13)
	PPC_STORE_U32(ctx.r13.u32 + 688, ctx.r3.u32);
	// mtmsrd r23,1
	ctx.msr = (ctx.r23.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8335970C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83359714"))) PPC_WEAK_FUNC(sub_83359714);
PPC_FUNC_IMPL(__imp__sub_83359714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83359718"))) PPC_WEAK_FUNC(sub_83359718);
PPC_FUNC_IMPL(__imp__sub_83359718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,25
	ctx.r3.s64 = 25;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83359310
	ctx.lr = 0x83359760;
	sub_83359310(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359770"))) PPC_WEAK_FUNC(sub_83359770);
PPC_FUNC_IMPL(__imp__sub_83359770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,25
	ctx.r3.s64 = 25;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83359310
	ctx.lr = 0x833597B8;
	sub_83359310(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833597C8"))) PPC_WEAK_FUNC(sub_833597C8);
PPC_FUNC_IMPL(__imp__sub_833597C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,692(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83359844
	if (ctx.cr6.eq) goto loc_83359844;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lwz r11,688(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 688);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,692(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8335982c
	if (!ctx.cr6.lt) goto loc_8335982C;
	// li r9,29
	ctx.r9.s64 = 29;
	// rlwimi r9,r10,7,0,24
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFF80) | (ctx.r9.u64 & 0xFFFFFFFF0000007F);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r5,r3,36
	ctx.r5.s64 = ctx.r3.s64 + 36;
	// bl 0x833590a0
	ctx.lr = 0x83359818;
	sub_833590A0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r3,688(r13)
	PPC_STORE_U32(ctx.r13.u32 + 688, ctx.r3.u32);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x83359844
	goto loc_83359844;
loc_8335982C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83359844
	if (ctx.cr6.eq) goto loc_83359844;
	// bl 0x83359718
	ctx.lr = 0x83359844;
	sub_83359718(ctx, base);
loc_83359844:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359854"))) PPC_WEAK_FUNC(sub_83359854);
PPC_FUNC_IMPL(__imp__sub_83359854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83359858"))) PPC_WEAK_FUNC(sub_83359858);
PPC_FUNC_IMPL(__imp__sub_83359858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,692(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// stfd f1,144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f1.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833598f0
	if (ctx.cr6.eq) goto loc_833598F0;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lwz r11,688(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 688);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,692(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x833598d0
	if (!ctx.cr6.lt) goto loc_833598D0;
	// li r9,33
	ctx.r9.s64 = 33;
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwimi r9,r10,7,0,24
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFF80) | (ctx.r9.u64 & 0xFFFFFFFF0000007F);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r5,r3,36
	ctx.r5.s64 = ctx.r3.s64 + 36;
	// bl 0x833590a0
	ctx.lr = 0x833598BC;
	sub_833590A0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r3,688(r13)
	PPC_STORE_U32(ctx.r13.u32 + 688, ctx.r3.u32);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x833598f0
	goto loc_833598F0;
loc_833598D0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x833598f0
	if (ctx.cr6.eq) goto loc_833598F0;
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x83359718
	ctx.lr = 0x833598F0;
	sub_83359718(ctx, base);
loc_833598F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359900"))) PPC_WEAK_FUNC(sub_83359900);
PPC_FUNC_IMPL(__imp__sub_83359900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,692(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83359988
	if (ctx.cr6.eq) goto loc_83359988;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lwz r11,688(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 688);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,692(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83359968
	if (!ctx.cr6.lt) goto loc_83359968;
	// li r9,30
	ctx.r9.s64 = 30;
	// rlwimi r9,r10,7,0,24
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFF80) | (ctx.r9.u64 & 0xFFFFFFFF0000007F);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r5,r3,36
	ctx.r5.s64 = ctx.r3.s64 + 36;
	// bl 0x833590a0
	ctx.lr = 0x83359954;
	sub_833590A0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r3,688(r13)
	PPC_STORE_U32(ctx.r13.u32 + 688, ctx.r3.u32);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x83359988
	goto loc_83359988;
loc_83359968:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83359988
	if (ctx.cr6.eq) goto loc_83359988;
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x83359718
	ctx.lr = 0x83359988;
	sub_83359718(ctx, base);
loc_83359988:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359998"))) PPC_WEAK_FUNC(sub_83359998);
PPC_FUNC_IMPL(__imp__sub_83359998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,692(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83359a28
	if (ctx.cr6.eq) goto loc_83359A28;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lwz r11,688(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 688);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,692(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83359a10
	if (!ctx.cr6.lt) goto loc_83359A10;
	// li r9,34
	ctx.r9.s64 = 34;
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwimi r9,r10,7,0,24
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFF80) | (ctx.r9.u64 & 0xFFFFFFFF0000007F);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r5,r3,36
	ctx.r5.s64 = ctx.r3.s64 + 36;
	// bl 0x833590a0
	ctx.lr = 0x833599FC;
	sub_833590A0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r3,688(r13)
	PPC_STORE_U32(ctx.r13.u32 + 688, ctx.r3.u32);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x83359a28
	goto loc_83359A28;
loc_83359A10:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83359a28
	if (ctx.cr6.eq) goto loc_83359A28;
	// bl 0x83359718
	ctx.lr = 0x83359A28;
	sub_83359718(ctx, base);
loc_83359A28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359A38"))) PPC_WEAK_FUNC(sub_83359A38);
PPC_FUNC_IMPL(__imp__sub_83359A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,692(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83359ab8
	if (ctx.cr6.eq) goto loc_83359AB8;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lwz r11,688(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 688);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,692(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 692);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83359aa0
	if (!ctx.cr6.lt) goto loc_83359AA0;
	// li r9,31
	ctx.r9.s64 = 31;
	// rlwimi r9,r10,7,0,24
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFF80) | (ctx.r9.u64 & 0xFFFFFFFF0000007F);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r5,r3,36
	ctx.r5.s64 = ctx.r3.s64 + 36;
	// bl 0x833590a0
	ctx.lr = 0x83359A8C;
	sub_833590A0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r3,688(r13)
	PPC_STORE_U32(ctx.r13.u32 + 688, ctx.r3.u32);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x83359ab8
	goto loc_83359AB8;
loc_83359AA0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83359ab8
	if (ctx.cr6.eq) goto loc_83359AB8;
	// bl 0x83359718
	ctx.lr = 0x83359AB8;
	sub_83359718(ctx, base);
loc_83359AB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359AC8"))) PPC_WEAK_FUNC(sub_83359AC8);
PPC_FUNC_IMPL(__imp__sub_83359AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// oris r11,r3,544
	ctx.r11.u64 = ctx.r3.u64 | 35651584;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,2600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2600);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83359b20
	if (ctx.cr6.eq) goto loc_83359B20;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,67
	ctx.r3.s64 = 67;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83359B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83359B20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359B30"))) PPC_WEAK_FUNC(sub_83359B30);
PPC_FUNC_IMPL(__imp__sub_83359B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// sradi r8,r11,32
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0xFFFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s64 >> 32;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// subf r7,r6,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r6.s64;
loc_83359B94:
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// mr. r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83359be8
	if (ctx.cr0.eq) goto loc_83359BE8;
	// cmplwi cr6,r8,37
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 37, ctx.xer);
	// beq cr6,0x83359bc0
	if (ctx.cr6.eq) goto loc_83359BC0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// blt cr6,0x83359b94
	if (ctx.cr6.lt) goto loc_83359B94;
	// b 0x83359be8
	goto loc_83359BE8;
loc_83359BC0:
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833b8404
	ctx.lr = 0x83359BD0;
	__imp___vsnprintf(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83359be8
	if (!ctx.cr6.lt) goto loc_83359BE8;
	// addi r11,r1,143
	ctx.r11.s64 = ctx.r1.s64 + 143;
loc_83359BE8:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,2600(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2600);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r10,24,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ori r10,r9,101
	ctx.r10.u64 = ctx.r9.u64 | 101;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83359c40
	if (ctx.cr6.eq) goto loc_83359C40;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,67
	ctx.r3.s64 = 67;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83359C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83359C40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359C50"))) PPC_WEAK_FUNC(sub_83359C50);
PPC_FUNC_IMPL(__imp__sub_83359C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83359C58;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// rlwinm r10,r29,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF000000;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,2600(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2600);
	// ori r10,r10,98
	ctx.r10.u64 = ctx.r10.u64 | 98;
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83359cd4
	if (ctx.cr6.eq) goto loc_83359CD4;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// li r3,94
	ctx.r3.s64 = 94;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83359CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83359cd8
	goto loc_83359CD8;
loc_83359CD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83359CD8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x83359ce8
	if (!ctx.cr6.gt) goto loc_83359CE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83359d64
	goto loc_83359D64;
loc_83359CE8:
	// blt cr6,0x83359d60
	if (ctx.cr6.lt) goto loc_83359D60;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x83359CFC;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// bl 0x82cb1160
	ctx.lr = 0x83359D30;
	sub_82CB1160(ctx, base);
	// lwz r11,2600(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2600);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83359d60
	if (ctx.cr6.eq) goto loc_83359D60;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// li r3,67
	ctx.r3.s64 = 67;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83359D5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83359d64
	goto loc_83359D64;
loc_83359D60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83359D64:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83359D6C"))) PPC_WEAK_FUNC(sub_83359D6C);
PPC_FUNC_IMPL(__imp__sub_83359D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83359D70"))) PPC_WEAK_FUNC(sub_83359D70);
PPC_FUNC_IMPL(__imp__sub_83359D70) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359D78"))) PPC_WEAK_FUNC(sub_83359D78);
PPC_FUNC_IMPL(__imp__sub_83359D78) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359D80"))) PPC_WEAK_FUNC(sub_83359D80);
PPC_FUNC_IMPL(__imp__sub_83359D80) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359D88"))) PPC_WEAK_FUNC(sub_83359D88);
PPC_FUNC_IMPL(__imp__sub_83359D88) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359D90"))) PPC_WEAK_FUNC(sub_83359D90);
PPC_FUNC_IMPL(__imp__sub_83359D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2600);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83359db8
	if (ctx.cr6.eq) goto loc_83359DB8;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,68
	ctx.r3.s64 = 68;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_83359DB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359DC0"))) PPC_WEAK_FUNC(sub_83359DC0);
PPC_FUNC_IMPL(__imp__sub_83359DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83359DC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x833b7874
	ctx.lr = 0x83359DE4;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833b7964
	ctx.lr = 0x83359E20;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x83359e48
	if (!ctx.cr0.lt) goto loc_83359E48;
	// bl 0x82beb948
	ctx.lr = 0x83359E2C;
	sub_82BEB948(ctx, base);
	// bl 0x82bf2188
	ctx.lr = 0x83359E30;
	sub_82BF2188(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x83359e40
	if (!ctx.cr6.eq) goto loc_83359E40;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82beb9a0
	ctx.lr = 0x83359E40;
	sub_82BEB9A0(ctx, base);
loc_83359E40:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83359ec8
	goto loc_83359EC8;
loc_83359E48:
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x833b7994
	ctx.lr = 0x83359E60;
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b7904
	ctx.lr = 0x83359E6C;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x83359e80
	if (!ctx.cr6.lt) goto loc_83359E80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82beb948
	ctx.lr = 0x83359E7C;
	sub_82BEB948(ctx, base);
	// b 0x83359e40
	goto loc_83359E40;
loc_83359E80:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// ld r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mulld r11,r9,r8
	ctx.r11.s64 = ctx.r9.s64 * ctx.r8.s64;
	// mulld r10,r10,r8
	ctx.r10.s64 = ctx.r10.s64 * ctx.r8.s64;
	// beq cr6,0x83359eac
	if (ctx.cr6.eq) goto loc_83359EAC;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_83359EAC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83359eb8
	if (ctx.cr6.eq) goto loc_83359EB8;
	// std r10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
loc_83359EB8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83359ec4
	if (ctx.cr6.eq) goto loc_83359EC4;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_83359EC4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83359EC8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83359ED0"))) PPC_WEAK_FUNC(sub_83359ED0);
PPC_FUNC_IMPL(__imp__sub_83359ED0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833b8b24
	ctx.lr = 0x83359EE4;
	__imp__NtReleaseMutant(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83359ef4
	if (ctx.cr0.lt) goto loc_83359EF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83359efc
	goto loc_83359EFC;
loc_83359EF4:
	// bl 0x82beb948
	ctx.lr = 0x83359EF8;
	sub_82BEB948(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83359EFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359F0C"))) PPC_WEAK_FUNC(sub_83359F0C);
PPC_FUNC_IMPL(__imp__sub_83359F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83359F10"))) PPC_WEAK_FUNC(sub_83359F10);
PPC_FUNC_IMPL(__imp__sub_83359F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83359f40
	if (ctx.cr6.eq) goto loc_83359F40;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e67d40
	ctx.lr = 0x83359F38;
	sub_82E67D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83359f44
	goto loc_83359F44;
loc_83359F40:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83359F44:
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833b8b34
	ctx.lr = 0x83359F50;
	__imp__NtCreateMutant(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83359f78
	if (ctx.cr0.lt) goto loc_83359F78;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,183
	ctx.r3.s64 = 183;
	// beq cr6,0x83359f6c
	if (ctx.cr6.eq) goto loc_83359F6C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83359F6C:
	// bl 0x82beb9a0
	ctx.lr = 0x83359F70;
	sub_82BEB9A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83359f80
	goto loc_83359F80;
loc_83359F78:
	// bl 0x82beb948
	ctx.lr = 0x83359F7C;
	sub_82BEB948(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83359F80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359F94"))) PPC_WEAK_FUNC(sub_83359F94);
PPC_FUNC_IMPL(__imp__sub_83359F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83359F98"))) PPC_WEAK_FUNC(sub_83359F98);
PPC_FUNC_IMPL(__imp__sub_83359F98) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e67c30
	ctx.lr = 0x83359FBC;
	sub_82E67C30(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8335A008"))) PPC_WEAK_FUNC(sub_8335A008);
PPC_FUNC_IMPL(__imp__sub_8335A008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8335A010;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31909
	ctx.r29.s64 = -2091188224;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,24
	ctx.r6.s64 = 24;
	// lwz r11,7168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7168);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8335A040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8335a118
	if (ctx.cr6.eq) goto loc_8335A118;
	// lwz r11,7168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7168);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8335A07C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8335a118
	if (ctx.cr6.eq) goto loc_8335A118;
	// lwz r11,7168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7168);
	// li r7,34
	ctx.r7.s64 = 34;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,56
	ctx.r6.s64 = 56;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8335A0BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8335a118
	if (ctx.cr6.eq) goto loc_8335A118;
	// ld r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,204(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// std r9,100(r1)
	PPC_STORE_U64(ctx.r1.u32 + 100, ctx.r9.u64);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// std r8,108(r1)
	PPC_STORE_U64(ctx.r1.u32 + 108, ctx.r8.u64);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// ld r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r7,116(r1)
	PPC_STORE_U64(ctx.r1.u32 + 116, ctx.r7.u64);
	// bl 0x82cb1160
	ctx.lr = 0x8335A110;
	sub_82CB1160(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8335a120
	goto loc_8335A120;
loc_8335A118:
	// bl 0x82becee0
	ctx.lr = 0x8335A11C;
	sub_82BECEE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8335A120:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335A128"))) PPC_WEAK_FUNC(sub_8335A128);
PPC_FUNC_IMPL(__imp__sub_8335A128) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A12C"))) PPC_WEAK_FUNC(sub_8335A12C);
PPC_FUNC_IMPL(__imp__sub_8335A12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A130"))) PPC_WEAK_FUNC(sub_8335A130);
PPC_FUNC_IMPL(__imp__sub_8335A130) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8335A134:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r5
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r5.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// rldicl r3,r6,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwsync 
	// addis r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 65536;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwimi r6,r7,0,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// stdcx. r6,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r5.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne- 0x8335a134
	if (!ctx.cr0.eq) goto loc_8335A134;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A16C"))) PPC_WEAK_FUNC(sub_8335A16C);
PPC_FUNC_IMPL(__imp__sub_8335A16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A170"))) PPC_WEAK_FUNC(sub_8335A170);
PPC_FUNC_IMPL(__imp__sub_8335A170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8335A178;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r7,34
	ctx.r7.s64 = 34;
	// lwz r11,7168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7168);
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8335A1AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8335a1ec
	if (ctx.cr0.lt) goto loc_8335A1EC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8335a1c4
	if (ctx.cr6.eq) goto loc_8335A1C4;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_8335A1C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8335a1d4
	if (ctx.cr6.eq) goto loc_8335A1D4;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_8335A1D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8335a1e4
	if (ctx.cr6.eq) goto loc_8335A1E4;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
loc_8335A1E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8335a1f4
	goto loc_8335A1F4;
loc_8335A1EC:
	// bl 0x82beb948
	ctx.lr = 0x8335A1F0;
	sub_82BEB948(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8335A1F4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335A1FC"))) PPC_WEAK_FUNC(sub_8335A1FC);
PPC_FUNC_IMPL(__imp__sub_8335A1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A200"))) PPC_WEAK_FUNC(sub_8335A200);
PPC_FUNC_IMPL(__imp__sub_8335A200) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 | ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A22C"))) PPC_WEAK_FUNC(sub_8335A22C);
PPC_FUNC_IMPL(__imp__sub_8335A22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A230"))) PPC_WEAK_FUNC(sub_8335A230);
PPC_FUNC_IMPL(__imp__sub_8335A230) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfic r9,r5,32
	ctx.xer.ca = ctx.r5.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r5.s64;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// lbzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subf r10,r5,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r5.s64;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r10,33
	ctx.r10.s64 = ctx.r10.s64 + 33;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// srw r3,r11,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A284"))) PPC_WEAK_FUNC(sub_8335A284);
PPC_FUNC_IMPL(__imp__sub_8335A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A288"))) PPC_WEAK_FUNC(sub_8335A288);
PPC_FUNC_IMPL(__imp__sub_8335A288) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// lbzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subfic r3,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r3.s64 = 32 - ctx.r10.s64;
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// slw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subf r5,r5,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r5.s64;
	// or r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 | ctx.r31.u64;
	// srw r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// or r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 | ctx.r30.u64;
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// and r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 & ctx.r10.u64;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
loc_8335A2FC:
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x8335a2fc
	if (ctx.cr6.lt) goto loc_8335A2FC;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A320"))) PPC_WEAK_FUNC(sub_8335A320);
PPC_FUNC_IMPL(__imp__sub_8335A320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A324"))) PPC_WEAK_FUNC(sub_8335A324);
PPC_FUNC_IMPL(__imp__sub_8335A324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A328"))) PPC_WEAK_FUNC(sub_8335A328);
PPC_FUNC_IMPL(__imp__sub_8335A328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A334"))) PPC_WEAK_FUNC(sub_8335A334);
PPC_FUNC_IMPL(__imp__sub_8335A334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A338"))) PPC_WEAK_FUNC(sub_8335A338);
PPC_FUNC_IMPL(__imp__sub_8335A338) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r3,r11,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A344"))) PPC_WEAK_FUNC(sub_8335A344);
PPC_FUNC_IMPL(__imp__sub_8335A344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A348"))) PPC_WEAK_FUNC(sub_8335A348);
PPC_FUNC_IMPL(__imp__sub_8335A348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A354"))) PPC_WEAK_FUNC(sub_8335A354);
PPC_FUNC_IMPL(__imp__sub_8335A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A358"))) PPC_WEAK_FUNC(sub_8335A358);
PPC_FUNC_IMPL(__imp__sub_8335A358) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm. r11,r6,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r6,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF;
	// rlwinm r7,r6,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFF;
loc_8335A374:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// and r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 & ctx.r8.u64;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,28,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x2;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 ^ 2;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8335a3d8
	if (ctx.cr6.lt) goto loc_8335A3D8;
	// beq cr6,0x8335a3d0
	if (ctx.cr6.eq) goto loc_8335A3D0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8335a3c8
	if (ctx.cr6.lt) goto loc_8335A3C8;
	// bne cr6,0x8335a3e4
	if (!ctx.cr6.eq) goto loc_8335A3E4;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// b 0x8335a3e4
	goto loc_8335A3E4;
loc_8335A3C8:
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x8335a3e4
	goto loc_8335A3E4;
loc_8335A3D0:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x8335a3e4
	goto loc_8335A3E4;
loc_8335A3D8:
	// rlwinm. r11,r6,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335a3e4
	if (ctx.cr0.eq) goto loc_8335A3E4;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
loc_8335A3E4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8335a374
	if (ctx.cr6.lt) goto loc_8335A374;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A3F4"))) PPC_WEAK_FUNC(sub_8335A3F4);
PPC_FUNC_IMPL(__imp__sub_8335A3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A3F8"))) PPC_WEAK_FUNC(sub_8335A3F8);
PPC_FUNC_IMPL(__imp__sub_8335A3F8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-14336
	ctx.r10.s64 = -939524096;
	// rlwinm r9,r11,0,0,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8335a43c
	if (!ctx.cr6.eq) goto loc_8335A43C;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8335a430
	if (ctx.cr0.eq) goto loc_8335A430;
	// bl 0x8335a358
	ctx.lr = 0x8335A424;
	sub_8335A358(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x8335a440
	goto loc_8335A440;
loc_8335A430:
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq 0x8335a440
	if (ctx.cr0.eq) goto loc_8335A440;
loc_8335A43C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8335A440:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A450"))) PPC_WEAK_FUNC(sub_8335A450);
PPC_FUNC_IMPL(__imp__sub_8335A450) {
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
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8335a4ac
	if (!ctx.cr6.eq) goto loc_8335A4AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8335a4a0
	if (ctx.cr0.eq) goto loc_8335A4A0;
	// bl 0x8335a358
	ctx.lr = 0x8335A47C;
	sub_8335A358(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335a4ac
	if (!ctx.cr0.eq) goto loc_8335A4AC;
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335a494
	if (ctx.cr0.eq) goto loc_8335A494;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8335a4b0
	goto loc_8335A4B0;
loc_8335A494:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8335a4b0
	goto loc_8335A4B0;
loc_8335A4A0:
	// rlwinm. r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq 0x8335a4b0
	if (ctx.cr0.eq) goto loc_8335A4B0;
loc_8335A4AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8335A4B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A4C0"))) PPC_WEAK_FUNC(sub_8335A4C0);
PPC_FUNC_IMPL(__imp__sub_8335A4C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8335a450
	sub_8335A450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335A4C4"))) PPC_WEAK_FUNC(sub_8335A4C4);
PPC_FUNC_IMPL(__imp__sub_8335A4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A4C8"))) PPC_WEAK_FUNC(sub_8335A4C8);
PPC_FUNC_IMPL(__imp__sub_8335A4C8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-14336
	ctx.r10.s64 = -939524096;
	// rlwinm r9,r11,0,0,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8335a50c
	if (!ctx.cr6.eq) goto loc_8335A50C;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8335a500
	if (ctx.cr0.eq) goto loc_8335A500;
	// bl 0x8335a358
	ctx.lr = 0x8335A4F4;
	sub_8335A358(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x8335a510
	goto loc_8335A510;
loc_8335A500:
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq 0x8335a510
	if (ctx.cr0.eq) goto loc_8335A510;
loc_8335A50C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8335A510:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A520"))) PPC_WEAK_FUNC(sub_8335A520);
PPC_FUNC_IMPL(__imp__sub_8335A520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// rlwinm r9,r11,0,3,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8335a5a8
	if (!ctx.cr6.eq) goto loc_8335A5A8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8335a5a8
	if (!ctx.cr0.eq) goto loc_8335A5A8;
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8335a5a8
	if (!ctx.cr6.eq) goto loc_8335A5A8;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r9,r10,31,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x40000000;
	// rlwinm r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8335a5a8
	if (!ctx.cr6.eq) goto loc_8335A5A8;
	// lbz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// lbz r9,5(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8335a5a8
	if (!ctx.cr6.eq) goto loc_8335A5A8;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8335a5a0
	if (ctx.cr6.eq) goto loc_8335A5A0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,31,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x40000000;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8335a5a8
	if (!ctx.cr6.eq) goto loc_8335A5A8;
loc_8335A5A0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8335a5ac
	goto loc_8335A5AC;
loc_8335A5A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8335A5AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A5B4"))) PPC_WEAK_FUNC(sub_8335A5B4);
PPC_FUNC_IMPL(__imp__sub_8335A5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A5B8"))) PPC_WEAK_FUNC(sub_8335A5B8);
PPC_FUNC_IMPL(__imp__sub_8335A5B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,7424
	ctx.r10.s64 = 486539264;
	// rlwinm r9,r11,0,3,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8335a640
	if (!ctx.cr6.eq) goto loc_8335A640;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8335a640
	if (!ctx.cr0.eq) goto loc_8335A640;
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8335a640
	if (!ctx.cr6.eq) goto loc_8335A640;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r9,r10,31,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x40000000;
	// rlwinm r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8335a640
	if (!ctx.cr6.eq) goto loc_8335A640;
	// lbz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// lbz r9,5(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8335a640
	if (!ctx.cr6.eq) goto loc_8335A640;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8335a638
	if (ctx.cr6.eq) goto loc_8335A638;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,31,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x40000000;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8335a640
	if (!ctx.cr6.eq) goto loc_8335A640;
loc_8335A638:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8335a644
	goto loc_8335A644;
loc_8335A640:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8335A644:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

