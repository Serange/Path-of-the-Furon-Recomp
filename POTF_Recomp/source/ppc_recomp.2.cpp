#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822987B4"))) PPC_WEAK_FUNC(sub_822987B4);
PPC_FUNC_IMPL(__imp__sub_822987B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822987B8"))) PPC_WEAK_FUNC(sub_822987B8);
PPC_FUNC_IMPL(__imp__sub_822987B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822987cc
	if (ctx.cr6.eq) goto loc_822987CC;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_822987CC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822987E0"))) PPC_WEAK_FUNC(sub_822987E0);
PPC_FUNC_IMPL(__imp__sub_822987E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82298810
	if (!ctx.cr6.eq) goto loc_82298810;
loc_822987FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82298810:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8229883c
	if (!ctx.cr6.gt) goto loc_8229883C;
	// lis r8,-8193
	ctx.r8.s64 = -536936448;
	// ori r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 65535;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82298840
	if (!ctx.cr6.gt) goto loc_82298840;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8229883C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82298840:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229888c
	if (ctx.cr6.eq) goto loc_8229888C;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82298878
	if (ctx.cr6.eq) goto loc_82298878;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82beb018
	ctx.lr = 0x82298864;
	sub_82BEB018(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82298878:
	// bl 0x82bea228
	ctx.lr = 0x8229887C;
	sub_82BEA228(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8229888C:
	// rlwinm r11,r3,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0x1F;
	// rlwinm r10,r3,21,16,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0xFFE0;
	// addi r11,r11,846
	ctx.r11.s64 = ctx.r11.s64 + 846;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822987fc
	if (ctx.cr0.eq) goto loc_822987FC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,3364
	ctx.r9.s64 = ctx.r9.s64 + 3364;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822988cc
	if (ctx.cr6.eq) goto loc_822988CC;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822988CC:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822988E0"))) PPC_WEAK_FUNC(sub_822988E0);
PPC_FUNC_IMPL(__imp__sub_822988E0) {
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
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addis r31,r3,5
	ctx.r31.s64 = ctx.r3.s64 + 327680;
	// addis r30,r3,5
	ctx.r30.s64 = ctx.r3.s64 + 327680;
	// addi r31,r31,-29164
	ctx.r31.s64 = ctx.r31.s64 + -29164;
	// addi r30,r30,-29160
	ctx.r30.s64 = ctx.r30.s64 + -29160;
	// lwz r11,-25668(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25668);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,12(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r11,-25668(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25668, ctx.r11.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82298938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8229895C"))) PPC_WEAK_FUNC(sub_8229895C);
PPC_FUNC_IMPL(__imp__sub_8229895C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82298960"))) PPC_WEAK_FUNC(sub_82298960);
PPC_FUNC_IMPL(__imp__sub_82298960) {
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
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addis r31,r3,5
	ctx.r31.s64 = ctx.r3.s64 + 327680;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r31,r31,-29164
	ctx.r31.s64 = ctx.r31.s64 + -29164;
	// lwz r11,-25668(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25668);
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,-25668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25668, ctx.r11.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822989A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_822989BC"))) PPC_WEAK_FUNC(sub_822989BC);
PPC_FUNC_IMPL(__imp__sub_822989BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822989C0"))) PPC_WEAK_FUNC(sub_822989C0);
PPC_FUNC_IMPL(__imp__sub_822989C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822989C4"))) PPC_WEAK_FUNC(sub_822989C4);
PPC_FUNC_IMPL(__imp__sub_822989C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822989C8"))) PPC_WEAK_FUNC(sub_822989C8);
PPC_FUNC_IMPL(__imp__sub_822989C8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r6,4
	ctx.r6.s64 = 4;
loc_822989D0:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r7,42
	ctx.r7.s64 = 42;
loc_822989D8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r9,-8
	ctx.r8.s64 = ctx.r9.s64 + -8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82298a0c
	if (ctx.cr6.eq) goto loc_82298A0C;
loc_822989E8:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82298a00
	if (ctx.cr6.eq) goto loc_82298A00;
loc_822989F4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822989f4
	if (!ctx.cr6.eq) goto loc_822989F4;
loc_82298A00:
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822989e8
	if (!ctx.cr6.eq) goto loc_822989E8;
loc_82298A0C:
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82298a24
	if (ctx.cr6.eq) goto loc_82298A24;
loc_82298A18:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82298a18
	if (!ctx.cr6.eq) goto loc_82298A18;
loc_82298A24:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// bne 0x822989d8
	if (!ctx.cr0.eq) goto loc_822989D8;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bne 0x822989d0
	if (!ctx.cr0.eq) goto loc_822989D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82298A40"))) PPC_WEAK_FUNC(sub_82298A40);
PPC_FUNC_IMPL(__imp__sub_82298A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82298A48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r8,r11,3516
	ctx.r8.u64 = ctx.r11.u64 | 3516;
	// ori r7,r10,36372
	ctx.r7.u64 = ctx.r10.u64 | 36372;
	// ori r6,r9,36376
	ctx.r6.u64 = ctx.r9.u64 | 36376;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r9,3372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3372, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stwx r5,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r5.u32);
	// stwx r9,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r9.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stwx r9,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r26,r3,3512
	ctx.r26.s64 = ctx.r3.s64 + 3512;
	// stw r11,3364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3364, ctx.r11.u32);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// stw r10,3368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3368, ctx.r10.u32);
	// addi r27,r3,20
	ctx.r27.s64 = ctx.r3.s64 + 20;
	// stw r9,3376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3376, ctx.r9.u32);
	// li r30,8
	ctx.r30.s64 = 8;
	// stw r9,3380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3380, ctx.r9.u32);
	// li r29,2
	ctx.r29.s64 = 2;
loc_82298AAC:
	// addi r11,r4,-3
	ctx.r11.s64 = ctx.r4.s64 + -3;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// stw r7,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r7.u32);
loc_82298ADC:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// slw r8,r29,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r8.u8 & 0x3F));
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// rlwinm r6,r10,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// slw r6,r30,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r6.u8 & 0x3F));
	// add r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// blt cr6,0x82298adc
	if (ctx.cr6.lt) goto loc_82298ADC;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// li r8,37
	ctx.r8.s64 = 37;
loc_82298B20:
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// clrlwi r5,r10,30
	ctx.r5.u64 = ctx.r10.u32 & 0x3;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// slw r5,r5,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82298b20
	if (!ctx.cr0.eq) goto loc_82298B20;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
loc_82298B64:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82298b8c
	if (!ctx.cr6.lt) goto loc_82298B8C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82298B78:
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82298b78
	if (ctx.cr6.lt) goto loc_82298B78;
loc_82298B8C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r10,32769
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32769, ctx.xer);
	// blt cr6,0x82298b64
	if (ctx.cr6.lt) goto loc_82298B64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r27,r27,840
	ctx.r27.s64 = ctx.r27.s64 + 840;
	// addi r31,r31,840
	ctx.r31.s64 = ctx.r31.s64 + 840;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x82298aac
	if (ctx.cr6.lt) goto loc_82298AAC;
	// addi r11,r3,3384
	ctx.r11.s64 = ctx.r3.s64 + 3384;
	// li r10,32
	ctx.r10.s64 = 32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82298BC0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82298bc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82298BC0;
	// addis r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 131072;
	// addi r3,r3,3568
	ctx.r3.s64 = ctx.r3.s64 + 3568;
	// bl 0x82298be0
	ctx.lr = 0x82298BD8;
	sub_82298BE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82298BE0"))) PPC_WEAK_FUNC(sub_82298BE0);
PPC_FUNC_IMPL(__imp__sub_82298BE0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82298BE8;
	__savegprlr_28(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r31,2
	ctx.r31.s64 = 131072;
	// addis r9,r3,3
	ctx.r9.s64 = ctx.r3.s64 + 196608;
	// ori r30,r11,32772
	ctx.r30.u64 = ctx.r11.u64 | 32772;
	// ori r29,r10,32776
	ctx.r29.u64 = ctx.r10.u64 | 32776;
	// ori r28,r6,32788
	ctx.r28.u64 = ctx.r6.u64 | 32788;
	// addi r9,r9,-32768
	ctx.r9.s64 = ctx.r9.s64 + -32768;
	// ori r8,r8,32780
	ctx.r8.u64 = ctx.r8.u64 | 32780;
	// ori r7,r7,32784
	ctx.r7.u64 = ctx.r7.u64 | 32784;
	// ori r5,r5,32792
	ctx.r5.u64 = ctx.r5.u64 | 32792;
	// ori r4,r4,32796
	ctx.r4.u64 = ctx.r4.u64 | 32796;
	// ori r31,r31,32800
	ctx.r31.u64 = ctx.r31.u64 | 32800;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// li r6,8192
	ctx.r6.s64 = 8192;
	// stwx r10,r3,r30
	PPC_STORE_U32(ctx.r3.u32 + ctx.r30.u32, ctx.r10.u32);
	// stwx r10,r3,r29
	PPC_STORE_U32(ctx.r3.u32 + ctx.r29.u32, ctx.r10.u32);
	// stwx r10,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r10,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r10,r3,r28
	PPC_STORE_U32(ctx.r3.u32 + ctx.r28.u32, ctx.r10.u32);
	// stwx r10,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r10.u32);
	// stwx r10,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r10.u32);
	// stwx r10,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r10.u32);
loc_82298C60:
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82298c80
	if (ctx.cr6.eq) goto loc_82298C80;
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
loc_82298C80:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne 0x82298c60
	if (!ctx.cr0.eq) goto loc_82298C60;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82298CA0"))) PPC_WEAK_FUNC(sub_82298CA0);
PPC_FUNC_IMPL(__imp__sub_82298CA0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82298CA8;
	__savegprlr_24(ctx, base);
	// lis r30,2
	ctx.r30.s64 = 131072;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addis r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 131072;
	// ori r30,r30,32772
	ctx.r30.u64 = ctx.r30.u64 | 32772;
	// addi r3,r3,3568
	ctx.r3.s64 = ctx.r3.s64 + 3568;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r29,2
	ctx.r29.s64 = 131072;
	// ori r11,r11,32776
	ctx.r11.u64 = ctx.r11.u64 | 32776;
	// lis r28,2
	ctx.r28.s64 = 131072;
	// lwzx r30,r3,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// ori r29,r29,32780
	ctx.r29.u64 = ctx.r29.u64 | 32780;
	// lis r27,2
	ctx.r27.s64 = 131072;
	// ori r28,r28,32784
	ctx.r28.u64 = ctx.r28.u64 | 32784;
	// lis r26,2
	ctx.r26.s64 = 131072;
	// ori r27,r27,32788
	ctx.r27.u64 = ctx.r27.u64 | 32788;
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// lis r25,2
	ctx.r25.s64 = 131072;
	// lwzx r5,r3,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// ori r26,r26,32792
	ctx.r26.u64 = ctx.r26.u64 | 32792;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// lis r24,2
	ctx.r24.s64 = 131072;
	// lwzx r4,r3,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// ori r25,r25,32796
	ctx.r25.u64 = ctx.r25.u64 | 32796;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// ori r24,r24,32800
	ctx.r24.u64 = ctx.r24.u64 | 32800;
	// lwzx r11,r3,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r28.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwzx r7,r3,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwzx r6,r3,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r26.u32);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwzx r5,r3,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwzx r4,r3,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r24.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82298D38"))) PPC_WEAK_FUNC(sub_82298D38);
PPC_FUNC_IMPL(__imp__sub_82298D38) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82298D40;
	__savegprlr_24(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r30,2
	ctx.r30.s64 = 131072;
	// ori r11,r11,32772
	ctx.r11.u64 = ctx.r11.u64 | 32772;
	// lis r29,2
	ctx.r29.s64 = 131072;
	// ori r30,r30,32776
	ctx.r30.u64 = ctx.r30.u64 | 32776;
	// lis r28,2
	ctx.r28.s64 = 131072;
	// ori r29,r29,32780
	ctx.r29.u64 = ctx.r29.u64 | 32780;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lis r27,2
	ctx.r27.s64 = 131072;
	// ori r28,r28,32784
	ctx.r28.u64 = ctx.r28.u64 | 32784;
	// lis r26,2
	ctx.r26.s64 = 131072;
	// ori r27,r27,32788
	ctx.r27.u64 = ctx.r27.u64 | 32788;
	// lis r25,2
	ctx.r25.s64 = 131072;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// ori r26,r26,32792
	ctx.r26.u64 = ctx.r26.u64 | 32792;
	// lwzx r5,r3,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// lis r24,2
	ctx.r24.s64 = 131072;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// ori r25,r25,32796
	ctx.r25.u64 = ctx.r25.u64 | 32796;
	// lwzx r4,r3,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// ori r24,r24,32800
	ctx.r24.u64 = ctx.r24.u64 | 32800;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwzx r11,r3,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r28.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwzx r7,r3,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwzx r6,r3,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r26.u32);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwzx r5,r3,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwzx r4,r3,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r24.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82298DC8"))) PPC_WEAK_FUNC(sub_82298DC8);
PPC_FUNC_IMPL(__imp__sub_82298DC8) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 131072;
	// addi r3,r3,3568
	ctx.r3.s64 = ctx.r3.s64 + 3568;
	// b 0x82298dd8
	sub_82298DD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82298DD4"))) PPC_WEAK_FUNC(sub_82298DD4);
PPC_FUNC_IMPL(__imp__sub_82298DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82298DD8"))) PPC_WEAK_FUNC(sub_82298DD8);
PPC_FUNC_IMPL(__imp__sub_82298DD8) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// li r8,2048
	ctx.r8.s64 = 2048;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_82298DEC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82298e28
	if (ctx.cr6.eq) goto loc_82298E28;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82298e1c
	if (ctx.cr6.eq) goto loc_82298E1C;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x82298e28
	goto loc_82298E28;
loc_82298E1C:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82298E28:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82298e64
	if (ctx.cr6.eq) goto loc_82298E64;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// beq cr6,0x82298e58
	if (ctx.cr6.eq) goto loc_82298E58;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x82298e64
	goto loc_82298E64;
loc_82298E58:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82298E64:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82298ea0
	if (ctx.cr6.eq) goto loc_82298EA0;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// beq cr6,0x82298e94
	if (ctx.cr6.eq) goto loc_82298E94;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x82298ea0
	goto loc_82298EA0;
loc_82298E94:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82298EA0:
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82298edc
	if (ctx.cr6.eq) goto loc_82298EDC;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// beq cr6,0x82298ed0
	if (ctx.cr6.eq) goto loc_82298ED0;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x82298edc
	goto loc_82298EDC;
loc_82298ED0:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82298EDC:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// bne 0x82298dec
	if (!ctx.cr0.eq) goto loc_82298DEC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82298EEC"))) PPC_WEAK_FUNC(sub_82298EEC);
PPC_FUNC_IMPL(__imp__sub_82298EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82298EF0"))) PPC_WEAK_FUNC(sub_82298EF0);
PPC_FUNC_IMPL(__imp__sub_82298EF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cb0fe0
	sub_82CB0FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82298EF4"))) PPC_WEAK_FUNC(sub_82298EF4);
PPC_FUNC_IMPL(__imp__sub_82298EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82298EF8"))) PPC_WEAK_FUNC(sub_82298EF8);
PPC_FUNC_IMPL(__imp__sub_82298EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,15100
	ctx.r10.s64 = ctx.r11.s64 + 15100;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82298F08"))) PPC_WEAK_FUNC(sub_82298F08);
PPC_FUNC_IMPL(__imp__sub_82298F08) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,15100
	ctx.r9.s64 = ctx.r11.s64 + 15100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82298f3c
	if (ctx.cr6.eq) goto loc_82298F3C;
	// bl 0x82294a58
	ctx.lr = 0x82298F38;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82298F3C:
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

__attribute__((alias("__imp__sub_82298F50"))) PPC_WEAK_FUNC(sub_82298F50);
PPC_FUNC_IMPL(__imp__sub_82298F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,15100
	ctx.r10.s64 = ctx.r11.s64 + 15100;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82298F60"))) PPC_WEAK_FUNC(sub_82298F60);
PPC_FUNC_IMPL(__imp__sub_82298F60) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,15100
	ctx.r9.s64 = ctx.r11.s64 + 15100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82298f94
	if (ctx.cr6.eq) goto loc_82298F94;
	// bl 0x82294a58
	ctx.lr = 0x82298F90;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82298F94:
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

__attribute__((alias("__imp__sub_82298FA8"))) PPC_WEAK_FUNC(sub_82298FA8);
PPC_FUNC_IMPL(__imp__sub_82298FA8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,15096
	ctx.r10.s64 = ctx.r11.s64 + 15096;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x833b77d4
	ctx.lr = 0x82298FD0;
	__imp__RtlInitializeCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82298FE8"))) PPC_WEAK_FUNC(sub_82298FE8);
PPC_FUNC_IMPL(__imp__sub_82298FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,15100
	ctx.r10.s64 = ctx.r11.s64 + 15100;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82298FF8"))) PPC_WEAK_FUNC(sub_82298FF8);
PPC_FUNC_IMPL(__imp__sub_82298FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82299000;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addic. r31,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r31.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82299030
	if (ctx.cr0.lt) goto loc_82299030;
loc_82299018:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82299024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bge 0x82299018
	if (!ctx.cr0.lt) goto loc_82299018;
loc_82299030:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82299038"))) PPC_WEAK_FUNC(sub_82299038);
PPC_FUNC_IMPL(__imp__sub_82299038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82299040;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mullw r11,r29,r5
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r5.s32);
	// addic. r31,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r31.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt 0x82299074
	if (ctx.cr0.lt) goto loc_82299074;
loc_8229905C:
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8229906C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8229905c
	if (!ctx.cr0.lt) goto loc_8229905C;
loc_82299074:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229907C"))) PPC_WEAK_FUNC(sub_8229907C);
PPC_FUNC_IMPL(__imp__sub_8229907C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299080"))) PPC_WEAK_FUNC(sub_82299080);
PPC_FUNC_IMPL(__imp__sub_82299080) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822990b8
	if (ctx.cr6.eq) goto loc_822990B8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x822990B8;
	sub_82294520(ctx, base);
loc_822990B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x822990C0;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_822990D4"))) PPC_WEAK_FUNC(sub_822990D4);
PPC_FUNC_IMPL(__imp__sub_822990D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822990D8"))) PPC_WEAK_FUNC(sub_822990D8);
PPC_FUNC_IMPL(__imp__sub_822990D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822990EC"))) PPC_WEAK_FUNC(sub_822990EC);
PPC_FUNC_IMPL(__imp__sub_822990EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822990F0"))) PPC_WEAK_FUNC(sub_822990F0);
PPC_FUNC_IMPL(__imp__sub_822990F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82294a58
	sub_82294A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822990F4"))) PPC_WEAK_FUNC(sub_822990F4);
PPC_FUNC_IMPL(__imp__sub_822990F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822990F8"))) PPC_WEAK_FUNC(sub_822990F8);
PPC_FUNC_IMPL(__imp__sub_822990F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82299100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82299124
	if (!ctx.cr6.eq) goto loc_82299124;
	// bl 0x822900a0
	ctx.lr = 0x82299120;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82299124:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229913C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82299144"))) PPC_WEAK_FUNC(sub_82299144);
PPC_FUNC_IMPL(__imp__sub_82299144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299148"))) PPC_WEAK_FUNC(sub_82299148);
PPC_FUNC_IMPL(__imp__sub_82299148) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stw r3,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r3.u32);
	// stw r4,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// stw r5,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r5.u32);
	// stw r6,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r6.u32);
	// lvx128 v1,r0,r11
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299164"))) PPC_WEAK_FUNC(sub_82299164);
PPC_FUNC_IMPL(__imp__sub_82299164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299168"))) PPC_WEAK_FUNC(sub_82299168);
PPC_FUNC_IMPL(__imp__sub_82299168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r10,r11,-18064
	ctx.r10.s64 = ctx.r11.s64 + -18064;
	// lvx128 v1,r0,r10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299178"))) PPC_WEAK_FUNC(sub_82299178);
PPC_FUNC_IMPL(__imp__sub_82299178) {
	PPC_FUNC_PROLOGUE();
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// stb r4,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r4.u8);
	// stb r5,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r5.u8);
	// stb r6,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229918C"))) PPC_WEAK_FUNC(sub_8229918C);
PPC_FUNC_IMPL(__imp__sub_8229918C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299190"))) PPC_WEAK_FUNC(sub_82299190);
PPC_FUNC_IMPL(__imp__sub_82299190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299194"))) PPC_WEAK_FUNC(sub_82299194);
PPC_FUNC_IMPL(__imp__sub_82299194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299198"))) PPC_WEAK_FUNC(sub_82299198);
PPC_FUNC_IMPL(__imp__sub_82299198) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822991A4"))) PPC_WEAK_FUNC(sub_822991A4);
PPC_FUNC_IMPL(__imp__sub_822991A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822991A8"))) PPC_WEAK_FUNC(sub_822991A8);
PPC_FUNC_IMPL(__imp__sub_822991A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822991BC"))) PPC_WEAK_FUNC(sub_822991BC);
PPC_FUNC_IMPL(__imp__sub_822991BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822991C0"))) PPC_WEAK_FUNC(sub_822991C0);
PPC_FUNC_IMPL(__imp__sub_822991C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x822991C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82299208
	if (ctx.cr6.eq) goto loc_82299208;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822991f4
	if (!ctx.cr6.eq) goto loc_822991F4;
	// bl 0x822900a0
	ctx.lr = 0x822991F0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_822991F4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82299208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82299208:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82299220"))) PPC_WEAK_FUNC(sub_82299220);
PPC_FUNC_IMPL(__imp__sub_82299220) {
	PPC_FUNC_PROLOGUE();
	// b 0x82beb2c0
	sub_82BEB2C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82299224"))) PPC_WEAK_FUNC(sub_82299224);
PPC_FUNC_IMPL(__imp__sub_82299224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299228"))) PPC_WEAK_FUNC(sub_82299228);
PPC_FUNC_IMPL(__imp__sub_82299228) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r8,-22416
	ctx.r7.s64 = ctx.r8.s64 + -22416;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r11,-22416(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22416, ctx.r11.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// stw r9,48(r7)
	PPC_STORE_U32(ctx.r7.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299254"))) PPC_WEAK_FUNC(sub_82299254);
PPC_FUNC_IMPL(__imp__sub_82299254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299258"))) PPC_WEAK_FUNC(sub_82299258);
PPC_FUNC_IMPL(__imp__sub_82299258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// addi r3,r11,-22416
	ctx.r3.s64 = ctx.r11.s64 + -22416;
	// b 0x822991c0
	sub_822991C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82299264"))) PPC_WEAK_FUNC(sub_82299264);
PPC_FUNC_IMPL(__imp__sub_82299264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299268"))) PPC_WEAK_FUNC(sub_82299268);
PPC_FUNC_IMPL(__imp__sub_82299268) {
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
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,-22416
	ctx.r31.s64 = ctx.r11.s64 + -22416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822915d8
	ctx.lr = 0x82299290;
	sub_822915D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82291c28
	ctx.lr = 0x82299298;
	sub_82291C28(ctx, base);
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// lwz r11,-3768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822992c0
	if (!ctx.cr6.eq) goto loc_822992C0;
loc_822992A8:
	// bl 0x822ab308
	ctx.lr = 0x822992AC;
	sub_822AB308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82292ea0
	ctx.lr = 0x822992B4;
	sub_82292EA0(ctx, base);
	// lwz r11,-3768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822992a8
	if (ctx.cr6.eq) goto loc_822992A8;
loc_822992C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82292718
	ctx.lr = 0x822992C8;
	sub_82292718(ctx, base);
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

__attribute__((alias("__imp__sub_822992E0"))) PPC_WEAK_FUNC(sub_822992E0);
PPC_FUNC_IMPL(__imp__sub_822992E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x822992E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,28852
	ctx.r6.s64 = ctx.r11.s64 + 28852;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82beb268
	ctx.lr = 0x82299310;
	sub_82BEB268(ctx, base);
	// bl 0x822bcf08
	ctx.lr = 0x82299314;
	sub_822BCF08(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-31905
	ctx.r9.s64 = -2090926080;
	// addi r4,r10,-27584
	ctx.r4.s64 = ctx.r10.s64 + -27584;
	// addi r3,r9,-23856
	ctx.r3.s64 = ctx.r9.s64 + -23856;
	// bl 0x82cafc18
	ctx.lr = 0x82299328;
	sub_82CAFC18(ctx, base);
	// bl 0x82beb410
	ctx.lr = 0x8229932C;
	sub_82BEB410(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294d90
	ctx.lr = 0x82299338;
	sub_82294D90(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r31,r11,27544
	ctx.r31.s64 = ctx.r11.s64 + 27544;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,256(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 256);
	// bl 0x82cb2e40
	ctx.lr = 0x82299354;
	sub_82CB2E40(ctx, base);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// sth r11,1022(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1022, ctx.r11.u16);
	// beq cr6,0x82299378
	if (ctx.cr6.eq) goto loc_82299378;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82299378
	if (ctx.cr6.eq) goto loc_82299378;
	// bl 0x82294a58
	ctx.lr = 0x82299378;
	sub_82294A58(ctx, base);
loc_82299378:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,1022(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1022, ctx.r11.u16);
	// bl 0x82368fd8
	ctx.lr = 0x82299388;
	sub_82368FD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82baab20
	ctx.lr = 0x82299390;
	sub_82BAAB20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bcf80
	ctx.lr = 0x82299398;
	sub_822BCF80(ctx, base);
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// lis r29,-31884
	ctx.r29.s64 = -2089549824;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-3804(r30)
	PPC_STORE_U32(ctx.r30.u32 + -3804, ctx.r11.u32);
	// stw r10,-3800(r29)
	PPC_STORE_U32(ctx.r29.u32 + -3800, ctx.r10.u32);
	// bl 0x82299268
	ctx.lr = 0x822993B8;
	sub_82299268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-3800(r29)
	PPC_STORE_U32(ctx.r29.u32 + -3800, ctx.r11.u32);
	// bl 0x82338b08
	ctx.lr = 0x822993C4;
	sub_82338B08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3804(r30)
	PPC_STORE_U32(ctx.r30.u32 + -3804, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822993D8"))) PPC_WEAK_FUNC(sub_822993D8);
PPC_FUNC_IMPL(__imp__sub_822993D8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,21585
	ctx.r3.s64 = 1414594560;
	// ori r3,r3,2046
	ctx.r3.u64 = ctx.r3.u64 | 2046;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822993E4"))) PPC_WEAK_FUNC(sub_822993E4);
PPC_FUNC_IMPL(__imp__sub_822993E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822993E8"))) PPC_WEAK_FUNC(sub_822993E8);
PPC_FUNC_IMPL(__imp__sub_822993E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31883
	ctx.r7.s64 = -2089484288;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,-22360
	ctx.r6.s64 = ctx.r7.s64 + -22360;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-22360(r7)
	PPC_STORE_U32(ctx.r7.u32 + -22360, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// stw r9,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r9.u32);
	// stw r8,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299430"))) PPC_WEAK_FUNC(sub_82299430);
PPC_FUNC_IMPL(__imp__sub_82299430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82299438;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r11,-22360
	ctx.r31.s64 = ctx.r11.s64 + -22360;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// blt 0x822994b4
	if (ctx.cr0.lt) goto loc_822994B4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8229946C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82299488
	if (ctx.cr6.eq) goto loc_82299488;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// bge 0x8229946c
	if (!ctx.cr0.lt) goto loc_8229946C;
	// b 0x822994b4
	goto loc_822994B4;
loc_82299488:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x822997b0
	ctx.lr = 0x82299494;
	sub_822997B0(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8232d180
	ctx.lr = 0x822994AC;
	sub_8232D180(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82299554
	if (!ctx.cr6.eq) goto loc_82299554;
loc_822994B4:
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822994cc
	if (!ctx.cr6.eq) goto loc_822994CC;
	// bl 0x822900a0
	ctx.lr = 0x822994C8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_822994CC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r28,127
	ctx.r10.s64 = ctx.r28.s64 + 127;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r10,0,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822994E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82299530
	if (!ctx.cr6.gt) goto loc_82299530;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// li r5,8
	ctx.r5.s64 = 8;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82294520
	ctx.lr = 0x82299530;
	sub_82294520(ctx, base);
loc_82299530:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82299558
	if (ctx.cr0.eq) goto loc_82299558;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82299554:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82299558:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82299560"))) PPC_WEAK_FUNC(sub_82299560);
PPC_FUNC_IMPL(__imp__sub_82299560) {
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
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-22360
	ctx.r31.s64 = ctx.r11.s64 + -22360;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// ble cr6,0x822995e0
	if (!ctx.cr6.gt) goto loc_822995E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8229959C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822995bc
	if (ctx.cr6.eq) goto loc_822995BC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8229959c
	if (ctx.cr6.lt) goto loc_8229959C;
	// b 0x822995e0
	goto loc_822995E0;
loc_822995BC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x822997b0
	ctx.lr = 0x822995C8;
	sub_822997B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8232d180
	ctx.lr = 0x822995E0;
	sub_8232D180(ctx, base);
loc_822995E0:
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

__attribute__((alias("__imp__sub_822995F8"))) PPC_WEAK_FUNC(sub_822995F8);
PPC_FUNC_IMPL(__imp__sub_822995F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-22360
	ctx.r11.s64 = ctx.r11.s64 + -22360;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82299624:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82299644
	if (ctx.cr6.eq) goto loc_82299644;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82299624
	if (ctx.cr6.lt) goto loc_82299624;
	// blr 
	return;
loc_82299644:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229964C"))) PPC_WEAK_FUNC(sub_8229964C);
PPC_FUNC_IMPL(__imp__sub_8229964C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299650"))) PPC_WEAK_FUNC(sub_82299650);
PPC_FUNC_IMPL(__imp__sub_82299650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299654"))) PPC_WEAK_FUNC(sub_82299654);
PPC_FUNC_IMPL(__imp__sub_82299654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299658"))) PPC_WEAK_FUNC(sub_82299658);
PPC_FUNC_IMPL(__imp__sub_82299658) {
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
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// addi r31,r11,-22360
	ctx.r31.s64 = ctx.r11.s64 + -22360;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82299730
	ctx.lr = 0x82299678;
	sub_82299730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82299730
	ctx.lr = 0x82299680;
	sub_82299730(ctx, base);
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

__attribute__((alias("__imp__sub_82299694"))) PPC_WEAK_FUNC(sub_82299694);
PPC_FUNC_IMPL(__imp__sub_82299694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299698"))) PPC_WEAK_FUNC(sub_82299698);
PPC_FUNC_IMPL(__imp__sub_82299698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-22654
	ctx.r11.s64 = -1484652544;
	// ori r10,r11,7
	ctx.r10.u64 = ctx.r11.u64 | 7;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822996b8
	if (!ctx.cr6.eq) goto loc_822996B8;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-22360
	ctx.r3.s64 = ctx.r11.s64 + -22360;
	// b 0x82299430
	sub_82299430(ctx, base);
	return;
loc_822996B8:
	// b 0x82beb1a0
	sub_82BEB1A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822996BC"))) PPC_WEAK_FUNC(sub_822996BC);
PPC_FUNC_IMPL(__imp__sub_822996BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822996C0"))) PPC_WEAK_FUNC(sub_822996C0);
PPC_FUNC_IMPL(__imp__sub_822996C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-22654
	ctx.r11.s64 = -1484652544;
	// ori r10,r11,7
	ctx.r10.u64 = ctx.r11.u64 | 7;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822996e0
	if (!ctx.cr6.eq) goto loc_822996E0;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-22360
	ctx.r3.s64 = ctx.r11.s64 + -22360;
	// b 0x82299560
	sub_82299560(ctx, base);
	return;
loc_822996E0:
	// b 0x82beb238
	sub_82BEB238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822996E4"))) PPC_WEAK_FUNC(sub_822996E4);
PPC_FUNC_IMPL(__imp__sub_822996E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822996E8"))) PPC_WEAK_FUNC(sub_822996E8);
PPC_FUNC_IMPL(__imp__sub_822996E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-22654
	ctx.r11.s64 = -1484652544;
	// ori r10,r11,7
	ctx.r10.u64 = ctx.r11.u64 | 7;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82299708
	if (!ctx.cr6.eq) goto loc_82299708;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-22360
	ctx.r3.s64 = ctx.r11.s64 + -22360;
	// b 0x822995f8
	sub_822995F8(ctx, base);
	return;
loc_82299708:
	// b 0x82beb258
	sub_82BEB258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229970C"))) PPC_WEAK_FUNC(sub_8229970C);
PPC_FUNC_IMPL(__imp__sub_8229970C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299710"))) PPC_WEAK_FUNC(sub_82299710);
PPC_FUNC_IMPL(__imp__sub_82299710) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299714"))) PPC_WEAK_FUNC(sub_82299714);
PPC_FUNC_IMPL(__imp__sub_82299714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299718"))) PPC_WEAK_FUNC(sub_82299718);
PPC_FUNC_IMPL(__imp__sub_82299718) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229972C"))) PPC_WEAK_FUNC(sub_8229972C);
PPC_FUNC_IMPL(__imp__sub_8229972C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299730"))) PPC_WEAK_FUNC(sub_82299730);
PPC_FUNC_IMPL(__imp__sub_82299730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82299738;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82299778
	if (ctx.cr6.eq) goto loc_82299778;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82299764
	if (!ctx.cr6.eq) goto loc_82299764;
	// bl 0x822900a0
	ctx.lr = 0x82299760;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82299764:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82299778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82299778:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82299790"))) PPC_WEAK_FUNC(sub_82299790);
PPC_FUNC_IMPL(__imp__sub_82299790) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822997A0"))) PPC_WEAK_FUNC(sub_822997A0);
PPC_FUNC_IMPL(__imp__sub_822997A0) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822997B0"))) PPC_WEAK_FUNC(sub_822997B0);
PPC_FUNC_IMPL(__imp__sub_822997B0) {
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x822997E0;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82299800
	if (ctx.cr0.eq) goto loc_82299800;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82299800:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_82299820"))) PPC_WEAK_FUNC(sub_82299820);
PPC_FUNC_IMPL(__imp__sub_82299820) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// andc r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299834"))) PPC_WEAK_FUNC(sub_82299834);
PPC_FUNC_IMPL(__imp__sub_82299834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299838"))) PPC_WEAK_FUNC(sub_82299838);
PPC_FUNC_IMPL(__imp__sub_82299838) {
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82299864;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

__attribute__((alias("__imp__sub_82299884"))) PPC_WEAK_FUNC(sub_82299884);
PPC_FUNC_IMPL(__imp__sub_82299884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299888"))) PPC_WEAK_FUNC(sub_82299888);
PPC_FUNC_IMPL(__imp__sub_82299888) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299890"))) PPC_WEAK_FUNC(sub_82299890);
PPC_FUNC_IMPL(__imp__sub_82299890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299894"))) PPC_WEAK_FUNC(sub_82299894);
PPC_FUNC_IMPL(__imp__sub_82299894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299898"))) PPC_WEAK_FUNC(sub_82299898);
PPC_FUNC_IMPL(__imp__sub_82299898) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229989C"))) PPC_WEAK_FUNC(sub_8229989C);
PPC_FUNC_IMPL(__imp__sub_8229989C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822998A0"))) PPC_WEAK_FUNC(sub_822998A0);
PPC_FUNC_IMPL(__imp__sub_822998A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822998A4"))) PPC_WEAK_FUNC(sub_822998A4);
PPC_FUNC_IMPL(__imp__sub_822998A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822998A8"))) PPC_WEAK_FUNC(sub_822998A8);
PPC_FUNC_IMPL(__imp__sub_822998A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822998AC"))) PPC_WEAK_FUNC(sub_822998AC);
PPC_FUNC_IMPL(__imp__sub_822998AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822998B0"))) PPC_WEAK_FUNC(sub_822998B0);
PPC_FUNC_IMPL(__imp__sub_822998B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822998B4"))) PPC_WEAK_FUNC(sub_822998B4);
PPC_FUNC_IMPL(__imp__sub_822998B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822998B8"))) PPC_WEAK_FUNC(sub_822998B8);
PPC_FUNC_IMPL(__imp__sub_822998B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822998BC"))) PPC_WEAK_FUNC(sub_822998BC);
PPC_FUNC_IMPL(__imp__sub_822998BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822998C0"))) PPC_WEAK_FUNC(sub_822998C0);
PPC_FUNC_IMPL(__imp__sub_822998C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822998C8"))) PPC_WEAK_FUNC(sub_822998C8);
PPC_FUNC_IMPL(__imp__sub_822998C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822998CC"))) PPC_WEAK_FUNC(sub_822998CC);
PPC_FUNC_IMPL(__imp__sub_822998CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822998D0"))) PPC_WEAK_FUNC(sub_822998D0);
PPC_FUNC_IMPL(__imp__sub_822998D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822998D4"))) PPC_WEAK_FUNC(sub_822998D4);
PPC_FUNC_IMPL(__imp__sub_822998D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822998D8"))) PPC_WEAK_FUNC(sub_822998D8);
PPC_FUNC_IMPL(__imp__sub_822998D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822998DC"))) PPC_WEAK_FUNC(sub_822998DC);
PPC_FUNC_IMPL(__imp__sub_822998DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822998E0"))) PPC_WEAK_FUNC(sub_822998E0);
PPC_FUNC_IMPL(__imp__sub_822998E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,-27344
	ctx.r10.s64 = ctx.r11.s64 + -27344;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822998F0"))) PPC_WEAK_FUNC(sub_822998F0);
PPC_FUNC_IMPL(__imp__sub_822998F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822998F4"))) PPC_WEAK_FUNC(sub_822998F4);
PPC_FUNC_IMPL(__imp__sub_822998F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822998F8"))) PPC_WEAK_FUNC(sub_822998F8);
PPC_FUNC_IMPL(__imp__sub_822998F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82299900;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r10,r30,7
	ctx.r10.s64 = ctx.r30.s64 + 7;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8229992C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8229995c
	if (ctx.cr6.eq) goto loc_8229995C;
	// srawi r11,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 3;
	// clrlwi r10,r30,29
	ctx.r10.u64 = ctx.r30.u32 & 0x7;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r7,r10,255
	ctx.r7.s64 = ctx.r10.s64 + 255;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stbx r6,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u8);
loc_8229995C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82299964"))) PPC_WEAK_FUNC(sub_82299964);
PPC_FUNC_IMPL(__imp__sub_82299964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299968"))) PPC_WEAK_FUNC(sub_82299968);
PPC_FUNC_IMPL(__imp__sub_82299968) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8229997C"))) PPC_WEAK_FUNC(sub_8229997C);
PPC_FUNC_IMPL(__imp__sub_8229997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299980"))) PPC_WEAK_FUNC(sub_82299980);
PPC_FUNC_IMPL(__imp__sub_82299980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299984"))) PPC_WEAK_FUNC(sub_82299984);
PPC_FUNC_IMPL(__imp__sub_82299984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299988"))) PPC_WEAK_FUNC(sub_82299988);
PPC_FUNC_IMPL(__imp__sub_82299988) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229998C"))) PPC_WEAK_FUNC(sub_8229998C);
PPC_FUNC_IMPL(__imp__sub_8229998C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299990"))) PPC_WEAK_FUNC(sub_82299990);
PPC_FUNC_IMPL(__imp__sub_82299990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299994"))) PPC_WEAK_FUNC(sub_82299994);
PPC_FUNC_IMPL(__imp__sub_82299994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299998"))) PPC_WEAK_FUNC(sub_82299998);
PPC_FUNC_IMPL(__imp__sub_82299998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229999C"))) PPC_WEAK_FUNC(sub_8229999C);
PPC_FUNC_IMPL(__imp__sub_8229999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822999A0"))) PPC_WEAK_FUNC(sub_822999A0);
PPC_FUNC_IMPL(__imp__sub_822999A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822999A8"))) PPC_WEAK_FUNC(sub_822999A8);
PPC_FUNC_IMPL(__imp__sub_822999A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822999B0"))) PPC_WEAK_FUNC(sub_822999B0);
PPC_FUNC_IMPL(__imp__sub_822999B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822999B8"))) PPC_WEAK_FUNC(sub_822999B8);
PPC_FUNC_IMPL(__imp__sub_822999B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822999C0"))) PPC_WEAK_FUNC(sub_822999C0);
PPC_FUNC_IMPL(__imp__sub_822999C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822999C8"))) PPC_WEAK_FUNC(sub_822999C8);
PPC_FUNC_IMPL(__imp__sub_822999C8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822999F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82299a1c
	if (ctx.cr6.eq) goto loc_82299A1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82299A10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x82299a20
	if (!ctx.cr6.lt) goto loc_82299A20;
loc_82299A1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82299A20:
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

__attribute__((alias("__imp__sub_82299A38"))) PPC_WEAK_FUNC(sub_82299A38);
PPC_FUNC_IMPL(__imp__sub_82299A38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299A3C"))) PPC_WEAK_FUNC(sub_82299A3C);
PPC_FUNC_IMPL(__imp__sub_82299A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299A40"))) PPC_WEAK_FUNC(sub_82299A40);
PPC_FUNC_IMPL(__imp__sub_82299A40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299A44"))) PPC_WEAK_FUNC(sub_82299A44);
PPC_FUNC_IMPL(__imp__sub_82299A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299A48"))) PPC_WEAK_FUNC(sub_82299A48);
PPC_FUNC_IMPL(__imp__sub_82299A48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299A4C"))) PPC_WEAK_FUNC(sub_82299A4C);
PPC_FUNC_IMPL(__imp__sub_82299A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299A50"))) PPC_WEAK_FUNC(sub_82299A50);
PPC_FUNC_IMPL(__imp__sub_82299A50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299A58"))) PPC_WEAK_FUNC(sub_82299A58);
PPC_FUNC_IMPL(__imp__sub_82299A58) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299A60"))) PPC_WEAK_FUNC(sub_82299A60);
PPC_FUNC_IMPL(__imp__sub_82299A60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299A64"))) PPC_WEAK_FUNC(sub_82299A64);
PPC_FUNC_IMPL(__imp__sub_82299A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299A68"))) PPC_WEAK_FUNC(sub_82299A68);
PPC_FUNC_IMPL(__imp__sub_82299A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299A78"))) PPC_WEAK_FUNC(sub_82299A78);
PPC_FUNC_IMPL(__imp__sub_82299A78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299A80"))) PPC_WEAK_FUNC(sub_82299A80);
PPC_FUNC_IMPL(__imp__sub_82299A80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299A84"))) PPC_WEAK_FUNC(sub_82299A84);
PPC_FUNC_IMPL(__imp__sub_82299A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299A88"))) PPC_WEAK_FUNC(sub_82299A88);
PPC_FUNC_IMPL(__imp__sub_82299A88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299A8C"))) PPC_WEAK_FUNC(sub_82299A8C);
PPC_FUNC_IMPL(__imp__sub_82299A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299A90"))) PPC_WEAK_FUNC(sub_82299A90);
PPC_FUNC_IMPL(__imp__sub_82299A90) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,-27344
	ctx.r10.s64 = ctx.r11.s64 + -27344;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82299ad8
	ctx.lr = 0x82299AB4;
	sub_82299AD8(ctx, base);
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

__attribute__((alias("__imp__sub_82299ACC"))) PPC_WEAK_FUNC(sub_82299ACC);
PPC_FUNC_IMPL(__imp__sub_82299ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299AD0"))) PPC_WEAK_FUNC(sub_82299AD0);
PPC_FUNC_IMPL(__imp__sub_82299AD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299AD8"))) PPC_WEAK_FUNC(sub_82299AD8);
PPC_FUNC_IMPL(__imp__sub_82299AD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,455
	ctx.r9.s64 = 455;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r8,2327
	ctx.r8.s64 = 2327;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r7,90
	ctx.r7.s64 = 90;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r6,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r6.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299B60"))) PPC_WEAK_FUNC(sub_82299B60);
PPC_FUNC_IMPL(__imp__sub_82299B60) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-27344
	ctx.r9.s64 = ctx.r11.s64 + -27344;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82299b94
	if (ctx.cr6.eq) goto loc_82299B94;
	// bl 0x82294a58
	ctx.lr = 0x82299B90;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82299B94:
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

__attribute__((alias("__imp__sub_82299BA8"))) PPC_WEAK_FUNC(sub_82299BA8);
PPC_FUNC_IMPL(__imp__sub_82299BA8) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82299be4
	if (ctx.cr6.eq) goto loc_82299BE4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x82299BE4;
	sub_82294520(ctx, base);
loc_82299BE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82299BEC;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_82299C00"))) PPC_WEAK_FUNC(sub_82299C00);
PPC_FUNC_IMPL(__imp__sub_82299C00) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299C08"))) PPC_WEAK_FUNC(sub_82299C08);
PPC_FUNC_IMPL(__imp__sub_82299C08) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299C10"))) PPC_WEAK_FUNC(sub_82299C10);
PPC_FUNC_IMPL(__imp__sub_82299C10) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299C18"))) PPC_WEAK_FUNC(sub_82299C18);
PPC_FUNC_IMPL(__imp__sub_82299C18) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299C20"))) PPC_WEAK_FUNC(sub_82299C20);
PPC_FUNC_IMPL(__imp__sub_82299C20) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299C28"))) PPC_WEAK_FUNC(sub_82299C28);
PPC_FUNC_IMPL(__imp__sub_82299C28) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299C30"))) PPC_WEAK_FUNC(sub_82299C30);
PPC_FUNC_IMPL(__imp__sub_82299C30) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299C38"))) PPC_WEAK_FUNC(sub_82299C38);
PPC_FUNC_IMPL(__imp__sub_82299C38) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299C40"))) PPC_WEAK_FUNC(sub_82299C40);
PPC_FUNC_IMPL(__imp__sub_82299C40) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299C48"))) PPC_WEAK_FUNC(sub_82299C48);
PPC_FUNC_IMPL(__imp__sub_82299C48) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299C50"))) PPC_WEAK_FUNC(sub_82299C50);
PPC_FUNC_IMPL(__imp__sub_82299C50) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299C58"))) PPC_WEAK_FUNC(sub_82299C58);
PPC_FUNC_IMPL(__imp__sub_82299C58) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299C60"))) PPC_WEAK_FUNC(sub_82299C60);
PPC_FUNC_IMPL(__imp__sub_82299C60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299C64"))) PPC_WEAK_FUNC(sub_82299C64);
PPC_FUNC_IMPL(__imp__sub_82299C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299C68"))) PPC_WEAK_FUNC(sub_82299C68);
PPC_FUNC_IMPL(__imp__sub_82299C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f1,-18104(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18104);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299C74"))) PPC_WEAK_FUNC(sub_82299C74);
PPC_FUNC_IMPL(__imp__sub_82299C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299C78"))) PPC_WEAK_FUNC(sub_82299C78);
PPC_FUNC_IMPL(__imp__sub_82299C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f1,-18104(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18104);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299C84"))) PPC_WEAK_FUNC(sub_82299C84);
PPC_FUNC_IMPL(__imp__sub_82299C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299C88"))) PPC_WEAK_FUNC(sub_82299C88);
PPC_FUNC_IMPL(__imp__sub_82299C88) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299C90"))) PPC_WEAK_FUNC(sub_82299C90);
PPC_FUNC_IMPL(__imp__sub_82299C90) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// bl 0x822960c0
	ctx.lr = 0x82299CB0;
	sub_822960C0(ctx, base);
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

__attribute__((alias("__imp__sub_82299CC8"))) PPC_WEAK_FUNC(sub_82299CC8);
PPC_FUNC_IMPL(__imp__sub_82299CC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299CD0"))) PPC_WEAK_FUNC(sub_82299CD0);
PPC_FUNC_IMPL(__imp__sub_82299CD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299CD8"))) PPC_WEAK_FUNC(sub_82299CD8);
PPC_FUNC_IMPL(__imp__sub_82299CD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299CE0"))) PPC_WEAK_FUNC(sub_82299CE0);
PPC_FUNC_IMPL(__imp__sub_82299CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r10,-20656
	ctx.r3.s64 = ctx.r10.s64 + -20656;
	// addi r11,r11,-27192
	ctx.r11.s64 = ctx.r11.s64 + -27192;
	// stw r11,-20656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20656, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299CF8"))) PPC_WEAK_FUNC(sub_82299CF8);
PPC_FUNC_IMPL(__imp__sub_82299CF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,3(0)
	PPC_STORE_U32(3, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299D04"))) PPC_WEAK_FUNC(sub_82299D04);
PPC_FUNC_IMPL(__imp__sub_82299D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299D08"))) PPC_WEAK_FUNC(sub_82299D08);
PPC_FUNC_IMPL(__imp__sub_82299D08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r10,-20652
	ctx.r3.s64 = ctx.r10.s64 + -20652;
	// addi r11,r11,-27100
	ctx.r11.s64 = ctx.r11.s64 + -27100;
	// stw r11,-20652(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20652, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299D20"))) PPC_WEAK_FUNC(sub_82299D20);
PPC_FUNC_IMPL(__imp__sub_82299D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,14848
	ctx.r10.s64 = ctx.r11.s64 + 14848;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299D30"))) PPC_WEAK_FUNC(sub_82299D30);
PPC_FUNC_IMPL(__imp__sub_82299D30) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,14848
	ctx.r9.s64 = ctx.r11.s64 + 14848;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82299d64
	if (ctx.cr6.eq) goto loc_82299D64;
	// bl 0x82294a58
	ctx.lr = 0x82299D60;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82299D64:
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

__attribute__((alias("__imp__sub_82299D78"))) PPC_WEAK_FUNC(sub_82299D78);
PPC_FUNC_IMPL(__imp__sub_82299D78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299D7C"))) PPC_WEAK_FUNC(sub_82299D7C);
PPC_FUNC_IMPL(__imp__sub_82299D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299D80"))) PPC_WEAK_FUNC(sub_82299D80);
PPC_FUNC_IMPL(__imp__sub_82299D80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r10,-20648
	ctx.r3.s64 = ctx.r10.s64 + -20648;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-20648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20648, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299D98"))) PPC_WEAK_FUNC(sub_82299D98);
PPC_FUNC_IMPL(__imp__sub_82299D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,14848
	ctx.r10.s64 = ctx.r11.s64 + 14848;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299DA8"))) PPC_WEAK_FUNC(sub_82299DA8);
PPC_FUNC_IMPL(__imp__sub_82299DA8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,14848
	ctx.r9.s64 = ctx.r11.s64 + 14848;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82299ddc
	if (ctx.cr6.eq) goto loc_82299DDC;
	// bl 0x82294a58
	ctx.lr = 0x82299DD8;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82299DDC:
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

__attribute__((alias("__imp__sub_82299DF0"))) PPC_WEAK_FUNC(sub_82299DF0);
PPC_FUNC_IMPL(__imp__sub_82299DF0) {
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
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r30,r31,-22168
	ctx.r30.s64 = ctx.r31.s64 + -22168;
	// addi r11,r11,-27344
	ctx.r11.s64 = ctx.r11.s64 + -27344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82299ad8
	ctx.lr = 0x82299E1C;
	sub_82299AD8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-27064
	ctx.r11.s64 = ctx.r11.s64 + -27064;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stw r11,-22168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22168, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82299E4C"))) PPC_WEAK_FUNC(sub_82299E4C);
PPC_FUNC_IMPL(__imp__sub_82299E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299E50"))) PPC_WEAK_FUNC(sub_82299E50);
PPC_FUNC_IMPL(__imp__sub_82299E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,-27344
	ctx.r10.s64 = ctx.r11.s64 + -27344;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299E60"))) PPC_WEAK_FUNC(sub_82299E60);
PPC_FUNC_IMPL(__imp__sub_82299E60) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-27344
	ctx.r9.s64 = ctx.r11.s64 + -27344;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82299e94
	if (ctx.cr6.eq) goto loc_82299E94;
	// bl 0x82294a58
	ctx.lr = 0x82299E90;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82299E94:
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

__attribute__((alias("__imp__sub_82299EA8"))) PPC_WEAK_FUNC(sub_82299EA8);
PPC_FUNC_IMPL(__imp__sub_82299EA8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r10,r11,15100
	ctx.r10.s64 = ctx.r11.s64 + 15100;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x8229a720
	ctx.lr = 0x82299ED0;
	sub_8229A720(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8229a5f8
	ctx.lr = 0x82299ED8;
	sub_8229A5F8(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r9,14848
	ctx.r8.s64 = ctx.r9.s64 + 14848;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82299EF8"))) PPC_WEAK_FUNC(sub_82299EF8);
PPC_FUNC_IMPL(__imp__sub_82299EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,14848
	ctx.r10.s64 = ctx.r11.s64 + 14848;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299F08"))) PPC_WEAK_FUNC(sub_82299F08);
PPC_FUNC_IMPL(__imp__sub_82299F08) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299F1C"))) PPC_WEAK_FUNC(sub_82299F1C);
PPC_FUNC_IMPL(__imp__sub_82299F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299F20"))) PPC_WEAK_FUNC(sub_82299F20);
PPC_FUNC_IMPL(__imp__sub_82299F20) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299F34"))) PPC_WEAK_FUNC(sub_82299F34);
PPC_FUNC_IMPL(__imp__sub_82299F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299F38"))) PPC_WEAK_FUNC(sub_82299F38);
PPC_FUNC_IMPL(__imp__sub_82299F38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r10,-20644
	ctx.r3.s64 = ctx.r10.s64 + -20644;
	// addi r11,r11,-27236
	ctx.r11.s64 = ctx.r11.s64 + -27236;
	// stw r11,-20644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20644, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299F50"))) PPC_WEAK_FUNC(sub_82299F50);
PPC_FUNC_IMPL(__imp__sub_82299F50) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82299f78
	if (!ctx.cr6.eq) goto loc_82299F78;
	// bl 0x82299fd8
	ctx.lr = 0x82299F74;
	sub_82299FD8(ctx, base);
	// b 0x82299fc0
	goto loc_82299FC0;
loc_82299F78:
	// lis r31,-31905
	ctx.r31.s64 = -2090926080;
	// lwz r3,-23728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23728);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82299F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82299FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82299fbc
	if (!ctx.cr6.eq) goto loc_82299FBC;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r11,r11,-20644
	ctx.r11.s64 = ctx.r11.s64 + -20644;
	// stw r11,-23728(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23728, ctx.r11.u32);
	// b 0x82299fc0
	goto loc_82299FC0;
loc_82299FBC:
	// stw r30,-23728(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23728, ctx.r30.u32);
loc_82299FC0:
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

__attribute__((alias("__imp__sub_82299FD8"))) PPC_WEAK_FUNC(sub_82299FD8);
PPC_FUNC_IMPL(__imp__sub_82299FD8) {
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
	// lis r31,-31905
	ctx.r31.s64 = -2090926080;
	// lwz r3,-23728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23728);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229A000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r11,r11,-20644
	ctx.r11.s64 = ctx.r11.s64 + -20644;
	// stw r11,-23728(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23728, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8229A020"))) PPC_WEAK_FUNC(sub_8229A020);
PPC_FUNC_IMPL(__imp__sub_8229A020) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// lwz r11,28864(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28864);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A034"))) PPC_WEAK_FUNC(sub_8229A034);
PPC_FUNC_IMPL(__imp__sub_8229A034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A038"))) PPC_WEAK_FUNC(sub_8229A038);
PPC_FUNC_IMPL(__imp__sub_8229A038) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// lwz r11,28864(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,28864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A054"))) PPC_WEAK_FUNC(sub_8229A054);
PPC_FUNC_IMPL(__imp__sub_8229A054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A058"))) PPC_WEAK_FUNC(sub_8229A058);
PPC_FUNC_IMPL(__imp__sub_8229A058) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8229a078
	if (ctx.cr6.eq) goto loc_8229A078;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229a078
	if (!ctx.cr6.gt) goto loc_8229A078;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8229a07c
	goto loc_8229A07C;
loc_8229A078:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8229A07C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8229A090"))) PPC_WEAK_FUNC(sub_8229A090);
PPC_FUNC_IMPL(__imp__sub_8229A090) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8229a0b0
	if (ctx.cr6.eq) goto loc_8229A0B0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229a0b0
	if (!ctx.cr6.gt) goto loc_8229A0B0;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8229a0b4
	goto loc_8229A0B4;
loc_8229A0B0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8229A0B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8229A0C8"))) PPC_WEAK_FUNC(sub_8229A0C8);
PPC_FUNC_IMPL(__imp__sub_8229A0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,12
	ctx.r6.s64 = 12;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r9,-14
	ctx.r4.s64 = ctx.r9.s64 + -14;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// divw r11,r4,r6
	ctx.r11.s32 = ctx.r4.s32 / ctx.r6.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r10,4900
	ctx.r3.s64 = ctx.r10.s64 + 4900;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// divw r11,r3,r5
	ctx.r11.s32 = ctx.r3.s32 / ctx.r5.s32;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r3,r10,4800
	ctx.r3.s64 = ctx.r10.s64 + 4800;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// mulli r9,r11,367
	ctx.r9.s64 = ctx.r11.s64 * 367;
	// mulli r7,r3,1461
	ctx.r7.s64 = ctx.r3.s64 * 1461;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r3,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 2;
	// divw r4,r9,r6
	ctx.r4.s32 = ctx.r9.s32 / ctx.r6.s32;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r3,r11,-32075
	ctx.r3.s64 = ctx.r11.s64 + -32075;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A140"))) PPC_WEAK_FUNC(sub_8229A140);
PPC_FUNC_IMPL(__imp__sub_8229A140) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r9,60
	ctx.r11.s64 = ctx.r9.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A160"))) PPC_WEAK_FUNC(sub_8229A160);
PPC_FUNC_IMPL(__imp__sub_8229A160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8229A168;
	__savegprlr_24(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,100
	ctx.r25.s64 = 100;
	// addi r11,r5,-14
	ctx.r11.s64 = ctx.r5.s64 + -14;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r31,-14
	ctx.r6.s64 = ctx.r31.s64 + -14;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r10,r6,r9
	ctx.r10.s32 = ctx.r6.s32 / ctx.r9.s32;
	// addi r6,r8,4900
	ctx.r6.s64 = ctx.r8.s64 + 4900;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// divw r6,r6,r25
	ctx.r6.s32 = ctx.r6.s32 / ctx.r25.s32;
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r11,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r6,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r24,r7,4900
	ctx.r24.s64 = ctx.r7.s64 + 4900;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// addi r8,r8,4800
	ctx.r8.s64 = ctx.r8.s64 + 4800;
	// divw r11,r24,r25
	ctx.r11.s32 = ctx.r24.s32 / ctx.r25.s32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r27,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r6.s32 >> 2;
	// rlwinm r28,r26,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r26,r8,1461
	ctx.r26.s64 = ctx.r8.s64 * 1461;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r27,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r27.s64 = temp.s64;
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// subf r8,r28,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r28.s64;
	// srawi r5,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r26.s32 >> 2;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r6,r8,-2
	ctx.r6.s64 = ctx.r8.s64 + -2;
	// addze r8,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r8.s64 = temp.s64;
	// addi r7,r7,4800
	ctx.r7.s64 = ctx.r7.s64 + 4800;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// mulli r10,r10,367
	ctx.r10.s64 = ctx.r10.s64 * 367;
	// mulli r11,r6,367
	ctx.r11.s64 = ctx.r6.s64 * 367;
	// mulli r7,r7,1461
	ctx.r7.s64 = ctx.r7.s64 * 1461;
	// addze r6,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r6.s64 = temp.s64;
	// divw r5,r11,r9
	ctx.r5.s32 = ctx.r11.s32 / ctx.r9.s32;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subf r11,r27,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r27.s64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,-32075
	ctx.r11.s64 = ctx.r11.s64 + -32075;
	// addi r10,r10,-32075
	ctx.r10.s64 = ctx.r10.s64 + -32075;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8229a258
	if (!ctx.cr6.lt) goto loc_8229A258;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_8229A258:
	// bgt cr6,0x8229a2a0
	if (ctx.cr6.gt) goto loc_8229A2A0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r7,r11,60
	ctx.r7.s64 = ctx.r11.s64 * 60;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mulli r11,r5,60
	ctx.r11.s64 = ctx.r5.s64 * 60;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 * 60;
	// mulli r11,r4,60
	ctx.r11.s64 = ctx.r4.s64 * 60;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8229a2a4
	if (ctx.cr6.lt) goto loc_8229A2A4;
loc_8229A2A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8229A2A4:
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229A2A8"))) PPC_WEAK_FUNC(sub_8229A2A8);
PPC_FUNC_IMPL(__imp__sub_8229A2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8229A2B0;
	__savegprlr_24(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,100
	ctx.r25.s64 = 100;
	// addi r11,r5,-14
	ctx.r11.s64 = ctx.r5.s64 + -14;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r31,-14
	ctx.r6.s64 = ctx.r31.s64 + -14;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r10,r6,r9
	ctx.r10.s32 = ctx.r6.s32 / ctx.r9.s32;
	// addi r6,r8,4900
	ctx.r6.s64 = ctx.r8.s64 + 4900;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// divw r6,r6,r25
	ctx.r6.s32 = ctx.r6.s32 / ctx.r25.s32;
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r11,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r6,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r24,r7,4900
	ctx.r24.s64 = ctx.r7.s64 + 4900;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// addi r8,r8,4800
	ctx.r8.s64 = ctx.r8.s64 + 4800;
	// divw r11,r24,r25
	ctx.r11.s32 = ctx.r24.s32 / ctx.r25.s32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r27,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r6.s32 >> 2;
	// rlwinm r28,r26,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r26,r8,1461
	ctx.r26.s64 = ctx.r8.s64 * 1461;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r27,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r27.s64 = temp.s64;
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// subf r8,r28,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r28.s64;
	// srawi r5,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r26.s32 >> 2;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r6,r8,-2
	ctx.r6.s64 = ctx.r8.s64 + -2;
	// addze r8,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r8.s64 = temp.s64;
	// addi r7,r7,4800
	ctx.r7.s64 = ctx.r7.s64 + 4800;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// mulli r10,r10,367
	ctx.r10.s64 = ctx.r10.s64 * 367;
	// mulli r11,r6,367
	ctx.r11.s64 = ctx.r6.s64 * 367;
	// mulli r7,r7,1461
	ctx.r7.s64 = ctx.r7.s64 * 1461;
	// addze r6,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r6.s64 = temp.s64;
	// divw r5,r11,r9
	ctx.r5.s32 = ctx.r11.s32 / ctx.r9.s32;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subf r11,r27,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r27.s64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,-32075
	ctx.r11.s64 = ctx.r11.s64 + -32075;
	// addi r10,r10,-32075
	ctx.r10.s64 = ctx.r10.s64 + -32075;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8229a3a0
	if (!ctx.cr6.gt) goto loc_8229A3A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_8229A3A0:
	// blt cr6,0x8229a3e8
	if (ctx.cr6.lt) goto loc_8229A3E8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r7,r11,60
	ctx.r7.s64 = ctx.r11.s64 * 60;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mulli r11,r5,60
	ctx.r11.s64 = ctx.r5.s64 * 60;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 * 60;
	// mulli r11,r4,60
	ctx.r11.s64 = ctx.r4.s64 * 60;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8229a3ec
	if (ctx.cr6.gt) goto loc_8229A3EC;
loc_8229A3E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8229A3EC:
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229A3F0"))) PPC_WEAK_FUNC(sub_8229A3F0);
PPC_FUNC_IMPL(__imp__sub_8229A3F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8229a454
	if (!ctx.cr6.eq) goto loc_8229A454;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8229a454
	if (!ctx.cr6.eq) goto loc_8229A454;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8229a454
	if (!ctx.cr6.eq) goto loc_8229A454;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8229a454
	if (!ctx.cr6.eq) goto loc_8229A454;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8229a454
	if (!ctx.cr6.eq) goto loc_8229A454;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8229A454:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A45C"))) PPC_WEAK_FUNC(sub_8229A45C);
PPC_FUNC_IMPL(__imp__sub_8229A45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A460"))) PPC_WEAK_FUNC(sub_8229A460);
PPC_FUNC_IMPL(__imp__sub_8229A460) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8229a3f0
	ctx.lr = 0x8229A474;
	sub_8229A3F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229a490
	if (ctx.cr6.eq) goto loc_8229A490;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8229A490:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8229a2a8
	ctx.lr = 0x8229A498;
	sub_8229A2A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A4A8"))) PPC_WEAK_FUNC(sub_8229A4A8);
PPC_FUNC_IMPL(__imp__sub_8229A4A8) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8229a3f0
	ctx.lr = 0x8229A4BC;
	sub_8229A3F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229a4d8
	if (ctx.cr6.eq) goto loc_8229A4D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8229A4D8:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8229a160
	ctx.lr = 0x8229A4E0;
	sub_8229A160(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A4F0"))) PPC_WEAK_FUNC(sub_8229A4F0);
PPC_FUNC_IMPL(__imp__sub_8229A4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-27244
	ctx.r9.s64 = ctx.r11.s64 + -27244;
	// addi r3,r10,-22016
	ctx.r3.s64 = ctx.r10.s64 + -22016;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8229a820
	ctx.lr = 0x8229A524;
	sub_8229A820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A53C"))) PPC_WEAK_FUNC(sub_8229A53C);
PPC_FUNC_IMPL(__imp__sub_8229A53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A540"))) PPC_WEAK_FUNC(sub_8229A540);
PPC_FUNC_IMPL(__imp__sub_8229A540) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-27244
	ctx.r9.s64 = ctx.r11.s64 + -27244;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r10,-22016
	ctx.r3.s64 = ctx.r10.s64 + -22016;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8229a890
	ctx.lr = 0x8229A57C;
	sub_8229A890(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8229a594
	if (ctx.cr6.eq) goto loc_8229A594;
	// bl 0x82294a58
	ctx.lr = 0x8229A590;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8229A594:
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

__attribute__((alias("__imp__sub_8229A5AC"))) PPC_WEAK_FUNC(sub_8229A5AC);
PPC_FUNC_IMPL(__imp__sub_8229A5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A5B0"))) PPC_WEAK_FUNC(sub_8229A5B0);
PPC_FUNC_IMPL(__imp__sub_8229A5B0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r10,-27244
	ctx.r8.s64 = ctx.r10.s64 + -27244;
	// addi r3,r9,-22016
	ctx.r3.s64 = ctx.r9.s64 + -22016;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8229a890
	ctx.lr = 0x8229A5E0;
	sub_8229A890(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A5F0"))) PPC_WEAK_FUNC(sub_8229A5F0);
PPC_FUNC_IMPL(__imp__sub_8229A5F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A5F8"))) PPC_WEAK_FUNC(sub_8229A5F8);
PPC_FUNC_IMPL(__imp__sub_8229A5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8229A600;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229a6d4
	if (!ctx.cr6.gt) goto loc_8229A6D4;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8229A624:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229a680
	if (ctx.cr6.eq) goto loc_8229A680;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229a680
	if (ctx.cr6.eq) goto loc_8229A680;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229a660
	if (!ctx.cr6.eq) goto loc_8229A660;
	// bl 0x822900a0
	ctx.lr = 0x8229A65C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8229A660:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229A67C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8229A680:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229a6b4
	if (ctx.cr6.eq) goto loc_8229A6B4;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229a6a0
	if (!ctx.cr6.eq) goto loc_8229A6A0;
	// bl 0x822900a0
	ctx.lr = 0x8229A69C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8229A6A0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229A6B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229A6B4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229a624
	if (ctx.cr6.lt) goto loc_8229A624;
loc_8229A6D4:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229a708
	if (ctx.cr6.eq) goto loc_8229A708;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229a6f4
	if (!ctx.cr6.eq) goto loc_8229A6F4;
	// bl 0x822900a0
	ctx.lr = 0x8229A6F0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8229A6F4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229A708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229A708:
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r30,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r30.u32);
	// stw r30,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229A71C"))) PPC_WEAK_FUNC(sub_8229A71C);
PPC_FUNC_IMPL(__imp__sub_8229A71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A720"))) PPC_WEAK_FUNC(sub_8229A720);
PPC_FUNC_IMPL(__imp__sub_8229A720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8229A728;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229a768
	if (ctx.cr6.eq) goto loc_8229A768;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229a754
	if (!ctx.cr6.eq) goto loc_8229A754;
	// bl 0x822900a0
	ctx.lr = 0x8229A750;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8229A754:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229A768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229A768:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229A780"))) PPC_WEAK_FUNC(sub_8229A780);
PPC_FUNC_IMPL(__imp__sub_8229A780) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A784"))) PPC_WEAK_FUNC(sub_8229A784);
PPC_FUNC_IMPL(__imp__sub_8229A784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A788"))) PPC_WEAK_FUNC(sub_8229A788);
PPC_FUNC_IMPL(__imp__sub_8229A788) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,-22016
	ctx.r7.s64 = ctx.r8.s64 + -22016;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r11,-22016(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22016, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A7B0"))) PPC_WEAK_FUNC(sub_8229A7B0);
PPC_FUNC_IMPL(__imp__sub_8229A7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8229A7B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-22016
	ctx.r31.s64 = ctx.r11.s64 + -22016;
	// lwz r29,-22016(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22016);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229a7fc
	if (ctx.cr6.eq) goto loc_8229A7FC;
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229a7e8
	if (!ctx.cr6.eq) goto loc_8229A7E8;
	// bl 0x822900a0
	ctx.lr = 0x8229A7E4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8229A7E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229A7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229A7FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229A81C"))) PPC_WEAK_FUNC(sub_8229A81C);
PPC_FUNC_IMPL(__imp__sub_8229A81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A820"))) PPC_WEAK_FUNC(sub_8229A820);
PPC_FUNC_IMPL(__imp__sub_8229A820) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,-22016
	ctx.r31.s64 = ctx.r11.s64 + -22016;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294ac0
	ctx.lr = 0x8229A858;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229a870
	if (ctx.cr0.eq) goto loc_8229A870;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8229A870:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_8229A890"))) PPC_WEAK_FUNC(sub_8229A890);
PPC_FUNC_IMPL(__imp__sub_8229A890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8229A898;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r11,-22016
	ctx.r29.s64 = ctx.r11.s64 + -22016;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229a908
	if (!ctx.cr6.gt) goto loc_8229A908;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8229A8C0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8229a8f8
	if (!ctx.cr6.eq) goto loc_8229A8F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8232d180
	ctx.lr = 0x8229A8EC;
	sub_8232D180(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8229A8F8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229a8c0
	if (ctx.cr6.lt) goto loc_8229A8C0;
loc_8229A908:
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229A914"))) PPC_WEAK_FUNC(sub_8229A914);
PPC_FUNC_IMPL(__imp__sub_8229A914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A918"))) PPC_WEAK_FUNC(sub_8229A918);
PPC_FUNC_IMPL(__imp__sub_8229A918) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,-22244
	ctx.r7.s64 = ctx.r8.s64 + -22244;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r11,-22244(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22244, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A940"))) PPC_WEAK_FUNC(sub_8229A940);
PPC_FUNC_IMPL(__imp__sub_8229A940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8229A948;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,-22244
	ctx.r28.s64 = ctx.r11.s64 + -22244;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229aa24
	if (!ctx.cr6.gt) goto loc_8229AA24;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8229A970:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8229a9d0
	if (ctx.cr6.eq) goto loc_8229A9D0;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229a9d0
	if (ctx.cr6.eq) goto loc_8229A9D0;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229a9b0
	if (!ctx.cr6.eq) goto loc_8229A9B0;
	// bl 0x822900a0
	ctx.lr = 0x8229A9AC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8229A9B0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229A9CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8229A9D0:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229aa04
	if (ctx.cr6.eq) goto loc_8229AA04;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229a9f0
	if (!ctx.cr6.eq) goto loc_8229A9F0;
	// bl 0x822900a0
	ctx.lr = 0x8229A9EC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8229A9F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229AA04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229AA04:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229a970
	if (ctx.cr6.lt) goto loc_8229A970;
loc_8229AA24:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229aa58
	if (ctx.cr6.eq) goto loc_8229AA58;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229aa44
	if (!ctx.cr6.eq) goto loc_8229AA44;
	// bl 0x822900a0
	ctx.lr = 0x8229AA40;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8229AA44:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229AA58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229AA58:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229AA74"))) PPC_WEAK_FUNC(sub_8229AA74);
PPC_FUNC_IMPL(__imp__sub_8229AA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229AA78"))) PPC_WEAK_FUNC(sub_8229AA78);
PPC_FUNC_IMPL(__imp__sub_8229AA78) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8229aab0
	if (ctx.cr6.eq) goto loc_8229AAB0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x8229AAB0;
	sub_82294520(ctx, base);
loc_8229AAB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8229AAB8;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_8229AAD0"))) PPC_WEAK_FUNC(sub_8229AAD0);
PPC_FUNC_IMPL(__imp__sub_8229AAD0) {
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
	// bl 0x82299ba8
	ctx.lr = 0x8229AAE8;
	sub_82299BA8(ctx, base);
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

__attribute__((alias("__imp__sub_8229AB00"))) PPC_WEAK_FUNC(sub_8229AB00);
PPC_FUNC_IMPL(__imp__sub_8229AB00) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8229ab38
	if (ctx.cr6.eq) goto loc_8229AB38;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x8229AB38;
	sub_82294520(ctx, base);
loc_8229AB38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8229AB40;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_8229AB54"))) PPC_WEAK_FUNC(sub_8229AB54);
PPC_FUNC_IMPL(__imp__sub_8229AB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229AB58"))) PPC_WEAK_FUNC(sub_8229AB58);
PPC_FUNC_IMPL(__imp__sub_8229AB58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229AB68"))) PPC_WEAK_FUNC(sub_8229AB68);
PPC_FUNC_IMPL(__imp__sub_8229AB68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229AB78"))) PPC_WEAK_FUNC(sub_8229AB78);
PPC_FUNC_IMPL(__imp__sub_8229AB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-22016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22016);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229AB8C"))) PPC_WEAK_FUNC(sub_8229AB8C);
PPC_FUNC_IMPL(__imp__sub_8229AB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229AB90"))) PPC_WEAK_FUNC(sub_8229AB90);
PPC_FUNC_IMPL(__imp__sub_8229AB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r3,r11,-22016
	ctx.r3.s64 = ctx.r11.s64 + -22016;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229ABA8"))) PPC_WEAK_FUNC(sub_8229ABA8);
PPC_FUNC_IMPL(__imp__sub_8229ABA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,-22244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22244);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229ABBC"))) PPC_WEAK_FUNC(sub_8229ABBC);
PPC_FUNC_IMPL(__imp__sub_8229ABBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229ABC0"))) PPC_WEAK_FUNC(sub_8229ABC0);
PPC_FUNC_IMPL(__imp__sub_8229ABC0) {
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
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r3,r31,-22016
	ctx.r3.s64 = ctx.r31.s64 + -22016;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294ac0
	ctx.lr = 0x8229ABEC;
	sub_82294AC0(ctx, base);
	// lwz r11,-22016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22016);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

__attribute__((alias("__imp__sub_8229AC0C"))) PPC_WEAK_FUNC(sub_8229AC0C);
PPC_FUNC_IMPL(__imp__sub_8229AC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229AC10"))) PPC_WEAK_FUNC(sub_8229AC10);
PPC_FUNC_IMPL(__imp__sub_8229AC10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r9,-19952
	ctx.r8.s64 = ctx.r9.s64 + -19952;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229AC30"))) PPC_WEAK_FUNC(sub_8229AC30);
PPC_FUNC_IMPL(__imp__sub_8229AC30) {
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
	// bl 0x8229c628
	ctx.lr = 0x8229AC50;
	sub_8229C628(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229ac84
	if (ctx.cr6.eq) goto loc_8229AC84;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8229ac7c
	if (ctx.cr6.lt) goto loc_8229AC7C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8229ac84
	if (!ctx.cr6.gt) goto loc_8229AC84;
loc_8229AC7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8229AC84;
	sub_82294A58(ctx, base);
loc_8229AC84:
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

__attribute__((alias("__imp__sub_8229ACA0"))) PPC_WEAK_FUNC(sub_8229ACA0);
PPC_FUNC_IMPL(__imp__sub_8229ACA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r9,-19952
	ctx.r8.s64 = ctx.r9.s64 + -19952;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229ACC0"))) PPC_WEAK_FUNC(sub_8229ACC0);
PPC_FUNC_IMPL(__imp__sub_8229ACC0) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r12,1024
	ctx.r12.s64 = 67108864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-19952
	ctx.r9.s64 = ctx.r10.s64 + -19952;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// ori r12,r12,128
	ctx.r12.u64 = ctx.r12.u64 | 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// ori r12,r12,16384
	ctx.r12.u64 = ctx.r12.u64 | 16384;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// or r3,r8,r12
	ctx.r3.u64 = ctx.r8.u64 | ctx.r12.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// std r3,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r3.u64);
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// lwz r11,-25660(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// lwz r10,25076(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25076);
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r11,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r11.u32);
	// lwz r9,25100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25100);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r31,25100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25100, ctx.r31.u32);
	// beq cr6,0x8229ad84
	if (ctx.cr6.eq) goto loc_8229AD84;
	// lwz r30,52(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x822955c8
	ctx.lr = 0x8229AD74;
	sub_822955C8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8229ad88
	if (!ctx.cr6.eq) goto loc_8229AD88;
	// bl 0x822a13a8
	ctx.lr = 0x8229AD84;
	sub_822A13A8(ctx, base);
loc_8229AD84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8229AD88:
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

__attribute__((alias("__imp__sub_8229ADA0"))) PPC_WEAK_FUNC(sub_8229ADA0);
PPC_FUNC_IMPL(__imp__sub_8229ADA0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8229ADA8;
	__savegprlr_29(ctx, base);
	// lis r12,1024
	ctx.r12.s64 = 67108864;
	// lis r4,-31883
	ctx.r4.s64 = -2089484288;
	// ori r12,r12,128
	ctx.r12.u64 = ctx.r12.u64 | 128;
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// ori r12,r12,16384
	ctx.r12.u64 = ctx.r12.u64 | 16384;
	// lwz r10,-25660(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25660);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r8,-19952
	ctx.r31.s64 = ctx.r8.s64 + -19952;
	// lwz r8,25076(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// or r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 | ctx.r12.u64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// std r7,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r7.u64);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r9,-25660(r4)
	PPC_STORE_U32(ctx.r4.u32 + -25660, ctx.r9.u32);
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// bne cr6,0x8229ae38
	if (!ctx.cr6.eq) goto loc_8229AE38;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lwz r11,25100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25100);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r3,25100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25100, ctx.r3.u32);
loc_8229AE38:
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229AE3C"))) PPC_WEAK_FUNC(sub_8229AE3C);
PPC_FUNC_IMPL(__imp__sub_8229AE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229AE40"))) PPC_WEAK_FUNC(sub_8229AE40);
PPC_FUNC_IMPL(__imp__sub_8229AE40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229AE44"))) PPC_WEAK_FUNC(sub_8229AE44);
PPC_FUNC_IMPL(__imp__sub_8229AE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229AE48"))) PPC_WEAK_FUNC(sub_8229AE48);
PPC_FUNC_IMPL(__imp__sub_8229AE48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229AE4C"))) PPC_WEAK_FUNC(sub_8229AE4C);
PPC_FUNC_IMPL(__imp__sub_8229AE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229AE50"))) PPC_WEAK_FUNC(sub_8229AE50);
PPC_FUNC_IMPL(__imp__sub_8229AE50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229AE54"))) PPC_WEAK_FUNC(sub_8229AE54);
PPC_FUNC_IMPL(__imp__sub_8229AE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229AE58"))) PPC_WEAK_FUNC(sub_8229AE58);
PPC_FUNC_IMPL(__imp__sub_8229AE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r11,r11,-21896
	ctx.r11.s64 = ctx.r11.s64 + -21896;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8229ae74
	if (ctx.cr6.eq) goto loc_8229AE74;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_8229AE74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

