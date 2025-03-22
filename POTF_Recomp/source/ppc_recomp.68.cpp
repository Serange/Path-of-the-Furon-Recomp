#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82421424"))) PPC_WEAK_FUNC(sub_82421424);
PPC_FUNC_IMPL(__imp__sub_82421424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421428"))) PPC_WEAK_FUNC(sub_82421428);
PPC_FUNC_IMPL(__imp__sub_82421428) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421444
	if (ctx.cr6.gt) goto loc_82421444;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(0)
	ctx.r3.u64 = PPC_LOAD_U32(0);
	// blr 
	return;
loc_82421444:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,1008(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1008);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421454"))) PPC_WEAK_FUNC(sub_82421454);
PPC_FUNC_IMPL(__imp__sub_82421454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421458"))) PPC_WEAK_FUNC(sub_82421458);
PPC_FUNC_IMPL(__imp__sub_82421458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421474
	if (ctx.cr6.gt) goto loc_82421474;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(0)
	ctx.r3.u64 = PPC_LOAD_U32(0);
	// blr 
	return;
loc_82421474:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,1012(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1012);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421484"))) PPC_WEAK_FUNC(sub_82421484);
PPC_FUNC_IMPL(__imp__sub_82421484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421488"))) PPC_WEAK_FUNC(sub_82421488);
PPC_FUNC_IMPL(__imp__sub_82421488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82421490;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r31,356(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// lwz r29,-31264(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82421538
	if (ctx.cr6.eq) goto loc_82421538;
	// lwz r11,360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82421538
	if (ctx.cr6.eq) goto loc_82421538;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824214dc
	if (ctx.cr6.eq) goto loc_824214DC;
loc_824214C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b7e50
	ctx.lr = 0x824214D0;
	sub_826B7E50(ctx, base);
	// lwz r31,608(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824214c8
	if (!ctx.cr6.eq) goto loc_824214C8;
loc_824214DC:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x824214f4
	if (ctx.cr6.gt) goto loc_824214F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824214fc
	goto loc_824214FC;
loc_824214F4:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824214FC:
	// lwz r10,360(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// lwz r9,1004(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// stw r9,608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 608, ctx.r9.u32);
	// lwz r8,356(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// stw r8,1004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1004, ctx.r8.u32);
	// lwz r7,364(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82421538
	if (ctx.cr6.eq) goto loc_82421538;
	// lwz r10,368(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82421538
	if (ctx.cr6.eq) goto loc_82421538;
	// lwz r9,1016(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// stw r9,788(r10)
	PPC_STORE_U32(ctx.r10.u32 + 788, ctx.r9.u32);
	// lwz r8,364(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// stw r8,1016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1016, ctx.r8.u32);
loc_82421538:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82421540"))) PPC_WEAK_FUNC(sub_82421540);
PPC_FUNC_IMPL(__imp__sub_82421540) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r6,356(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 356);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824216a4
	if (ctx.cr6.eq) goto loc_824216A4;
	// lwz r5,360(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 360);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824216a4
	if (ctx.cr6.eq) goto loc_824216A4;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8242157c
	if (ctx.cr6.gt) goto loc_8242157C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x82421584
	goto loc_82421584;
loc_8242157C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82421584:
	// lwz r11,1004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8242159c
	if (!ctx.cr6.eq) goto loc_8242159C;
	// lwz r11,608(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 608);
	// stw r11,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r11.u32);
	// b 0x824215fc
	goto loc_824215FC;
loc_8242159C:
	// lwz r7,72(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824215fc
	if (!ctx.cr6.gt) goto loc_824215FC;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
loc_824215B0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x824215d4
	if (ctx.cr6.eq) goto loc_824215D4;
	// lwz r9,360(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824215d4
	if (ctx.cr6.eq) goto loc_824215D4;
	// lwz r9,608(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 608);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824215e8
	if (ctx.cr6.eq) goto loc_824215E8;
loc_824215D4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x824215b0
	if (ctx.cr6.lt) goto loc_824215B0;
	// b 0x824215fc
	goto loc_824215FC;
loc_824215E8:
	// lwz r11,360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824215fc
	if (ctx.cr6.eq) goto loc_824215FC;
	// lwz r10,608(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 608);
	// stw r10,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r10.u32);
loc_824215FC:
	// lwz r11,360(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 360);
	// stw r30,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r30.u32);
	// lwz r6,364(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824216a4
	if (ctx.cr6.eq) goto loc_824216A4;
	// lwz r5,368(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824216a4
	if (ctx.cr6.eq) goto loc_824216A4;
	// lwz r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82421634
	if (!ctx.cr6.eq) goto loc_82421634;
	// lwz r11,788(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 788);
	// stw r11,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r11.u32);
	// b 0x82421694
	goto loc_82421694;
loc_82421634:
	// lwz r7,72(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82421694
	if (!ctx.cr6.gt) goto loc_82421694;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
loc_82421648:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8242166c
	if (ctx.cr6.eq) goto loc_8242166C;
	// lwz r9,368(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8242166c
	if (ctx.cr6.eq) goto loc_8242166C;
	// lwz r9,788(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 788);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82421680
	if (ctx.cr6.eq) goto loc_82421680;
loc_8242166C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82421648
	if (ctx.cr6.lt) goto loc_82421648;
	// b 0x82421694
	goto loc_82421694;
loc_82421680:
	// lwz r11,368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82421694
	if (ctx.cr6.eq) goto loc_82421694;
	// lwz r10,788(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 788);
	// stw r10,788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 788, ctx.r10.u32);
loc_82421694:
	// lwz r11,368(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824216a4
	if (ctx.cr6.eq) goto loc_824216A4;
	// stw r30,788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 788, ctx.r30.u32);
loc_824216A4:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824216B0"))) PPC_WEAK_FUNC(sub_824216B0);
PPC_FUNC_IMPL(__imp__sub_824216B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,-31264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x824216d4
	if (ctx.cr6.gt) goto loc_824216D4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x824216dc
	goto loc_824216DC;
loc_824216D4:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824216DC:
	// stw r9,1004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1004, ctx.r9.u32);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x824216fc
	if (ctx.cr6.gt) goto loc_824216FC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,0(0)
	PPC_STORE_U32(0, ctx.r9.u32);
	// blr 
	return;
loc_824216FC:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,1016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1016, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242170C"))) PPC_WEAK_FUNC(sub_8242170C);
PPC_FUNC_IMPL(__imp__sub_8242170C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421710"))) PPC_WEAK_FUNC(sub_82421710);
PPC_FUNC_IMPL(__imp__sub_82421710) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82421718;
	__savegprlr_26(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,-31264(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x824217bc
	if (!ctx.cr6.gt) goto loc_824217BC;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82421738:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824217bc
	if (!ctx.cr6.eq) goto loc_824217BC;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,356(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824217ac
	if (ctx.cr6.eq) goto loc_824217AC;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82421764:
	// lwz r29,652(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 652);
	// lwz r28,656(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r27,660(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// xor r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r8.u64;
	// xor r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r9.u64;
	// lwz r26,648(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// xor r27,r27,r10
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r10.u64;
	// or r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 | ctx.r28.u64;
	// xor r28,r26,r7
	ctx.r28.u64 = ctx.r26.u64 ^ ctx.r7.u64;
	// or r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 | ctx.r27.u64;
	// or r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 | ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824217a8
	if (ctx.cr6.eq) goto loc_824217A8;
	// lwz r11,608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82421764
	if (!ctx.cr6.eq) goto loc_82421764;
	// b 0x824217ac
	goto loc_824217AC;
loc_824217A8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_824217AC:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82421738
	if (ctx.cr6.lt) goto loc_82421738;
loc_824217BC:
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824217C0"))) PPC_WEAK_FUNC(sub_824217C0);
PPC_FUNC_IMPL(__imp__sub_824217C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824217f0
	if (ctx.cr6.eq) goto loc_824217F0;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x824217e0
	if (ctx.cr6.gt) goto loc_824217E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824217e8
	goto loc_824217E8;
loc_824217E0:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824217E8:
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// stw r11,504(r4)
	PPC_STORE_U32(ctx.r4.u32 + 504, ctx.r11.u32);
loc_824217F0:
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8242180c
	if (ctx.cr6.gt) goto loc_8242180C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(0)
	PPC_STORE_U32(0, ctx.r4.u32);
	// blr 
	return;
loc_8242180C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,1008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1008, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242181C"))) PPC_WEAK_FUNC(sub_8242181C);
PPC_FUNC_IMPL(__imp__sub_8242181C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421820"))) PPC_WEAK_FUNC(sub_82421820);
PPC_FUNC_IMPL(__imp__sub_82421820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421840
	if (ctx.cr6.gt) goto loc_82421840;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82421848
	goto loc_82421848;
loc_82421840:
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82421848:
	// lwz r10,1008(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1008);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82421884
	if (!ctx.cr6.eq) goto loc_82421884;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421870
	if (ctx.cr6.gt) goto loc_82421870;
	// lwz r10,504(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 504);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1008, ctx.r10.u32);
	// blr 
	return;
loc_82421870:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,504(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 504);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,1008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1008, ctx.r10.u32);
	// blr 
	return;
loc_82421884:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8242188C:
	// lwz r11,504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 504);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x824218a8
	if (ctx.cr6.eq) goto loc_824218A8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242188c
	if (!ctx.cr6.eq) goto loc_8242188C;
	// blr 
	return;
loc_824218A8:
	// lwz r11,504(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 504);
	// stw r11,504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 504, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824218B4"))) PPC_WEAK_FUNC(sub_824218B4);
PPC_FUNC_IMPL(__imp__sub_824218B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824218B8"))) PPC_WEAK_FUNC(sub_824218B8);
PPC_FUNC_IMPL(__imp__sub_824218B8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824218f8
	if (ctx.cr6.eq) goto loc_824218F8;
	// bl 0x82421940
	ctx.lr = 0x824218D0;
	sub_82421940(ctx, base);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x824218e8
	if (ctx.cr6.gt) goto loc_824218E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824218f0
	goto loc_824218F0;
loc_824218E8:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824218F0:
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// stw r11,508(r4)
	PPC_STORE_U32(ctx.r4.u32 + 508, ctx.r11.u32);
loc_824218F8:
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421920
	if (ctx.cr6.gt) goto loc_82421920;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(0)
	PPC_STORE_U32(0, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82421920:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,1012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1012, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242193C"))) PPC_WEAK_FUNC(sub_8242193C);
PPC_FUNC_IMPL(__imp__sub_8242193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421940"))) PPC_WEAK_FUNC(sub_82421940);
PPC_FUNC_IMPL(__imp__sub_82421940) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r11,132(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82421958
	if (ctx.cr6.gt) goto loc_82421958;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82421960
	goto loc_82421960;
loc_82421958:
	// lwz r11,128(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82421960:
	// lwz r10,1012(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8242199c
	if (!ctx.cr6.eq) goto loc_8242199C;
	// lwz r11,132(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82421988
	if (ctx.cr6.gt) goto loc_82421988;
	// lwz r10,508(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 508);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1012, ctx.r10.u32);
	// blr 
	return;
loc_82421988:
	// lwz r11,128(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// lwz r10,508(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 508);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,1012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1012, ctx.r10.u32);
	// blr 
	return;
loc_8242199C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_824219A4:
	// lwz r11,508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 508);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x824219c0
	if (ctx.cr6.eq) goto loc_824219C0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824219a4
	if (!ctx.cr6.eq) goto loc_824219A4;
	// blr 
	return;
loc_824219C0:
	// lwz r11,508(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 508);
	// stw r11,508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 508, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824219CC"))) PPC_WEAK_FUNC(sub_824219CC);
PPC_FUNC_IMPL(__imp__sub_824219CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824219D0"))) PPC_WEAK_FUNC(sub_824219D0);
PPC_FUNC_IMPL(__imp__sub_824219D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x824219f0
	if (ctx.cr6.gt) goto loc_824219F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824219f8
	goto loc_824219F8;
loc_824219F0:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_824219F8:
	// b 0x823f8e10
	sub_823F8E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824219FC"))) PPC_WEAK_FUNC(sub_824219FC);
PPC_FUNC_IMPL(__imp__sub_824219FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421A00"))) PPC_WEAK_FUNC(sub_82421A00);
PPC_FUNC_IMPL(__imp__sub_82421A00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82421a40
	if (ctx.cr6.eq) goto loc_82421A40;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421a24
	if (ctx.cr6.gt) goto loc_82421A24;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82421a2c
	goto loc_82421A2C;
loc_82421A24:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82421A2C:
	// lwz r11,684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82421A40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421A48"))) PPC_WEAK_FUNC(sub_82421A48);
PPC_FUNC_IMPL(__imp__sub_82421A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24996);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421A5C"))) PPC_WEAK_FUNC(sub_82421A5C);
PPC_FUNC_IMPL(__imp__sub_82421A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421A60"))) PPC_WEAK_FUNC(sub_82421A60);
PPC_FUNC_IMPL(__imp__sub_82421A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421a7c
	if (ctx.cr6.gt) goto loc_82421A7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f1,0(0)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82421A7C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,852(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 852);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421A8C"))) PPC_WEAK_FUNC(sub_82421A8C);
PPC_FUNC_IMPL(__imp__sub_82421A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421A90"))) PPC_WEAK_FUNC(sub_82421A90);
PPC_FUNC_IMPL(__imp__sub_82421A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421ab4
	if (ctx.cr6.gt) goto loc_82421AB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f1,0(0)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82421AB4:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,856(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421AC4"))) PPC_WEAK_FUNC(sub_82421AC4);
PPC_FUNC_IMPL(__imp__sub_82421AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421AC8"))) PPC_WEAK_FUNC(sub_82421AC8);
PPC_FUNC_IMPL(__imp__sub_82421AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421aec
	if (ctx.cr6.gt) goto loc_82421AEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f1,0(0)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82421AEC:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,860(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 860);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421AFC"))) PPC_WEAK_FUNC(sub_82421AFC);
PPC_FUNC_IMPL(__imp__sub_82421AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421B00"))) PPC_WEAK_FUNC(sub_82421B00);
PPC_FUNC_IMPL(__imp__sub_82421B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421b20
	if (ctx.cr6.gt) goto loc_82421B20;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82421b28
	goto loc_82421B28;
loc_82421B20:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82421B28:
	// b 0x82773f80
	sub_82773F80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82421B2C"))) PPC_WEAK_FUNC(sub_82421B2C);
PPC_FUNC_IMPL(__imp__sub_82421B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421B30"))) PPC_WEAK_FUNC(sub_82421B30);
PPC_FUNC_IMPL(__imp__sub_82421B30) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421b60
	if (ctx.cr6.gt) goto loc_82421B60;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82421b68
	goto loc_82421B68;
loc_82421B60:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82421B68:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82774038
	ctx.lr = 0x82421B74;
	sub_82774038(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421B84"))) PPC_WEAK_FUNC(sub_82421B84);
PPC_FUNC_IMPL(__imp__sub_82421B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421B88"))) PPC_WEAK_FUNC(sub_82421B88);
PPC_FUNC_IMPL(__imp__sub_82421B88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82421b94
	if (!ctx.cr6.eq) goto loc_82421B94;
	// lwz r4,84(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
loc_82421B94:
	// lwz r11,164(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,160(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421BB0"))) PPC_WEAK_FUNC(sub_82421BB0);
PPC_FUNC_IMPL(__imp__sub_82421BB0) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82421bd4
	if (!ctx.cr6.eq) goto loc_82421BD4;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_82421BD4:
	// lwz r11,164(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82421bfc
	if (!ctx.cr6.eq) goto loc_82421BFC;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r5,160
	ctx.r3.s64 = ctx.r5.s64 + 160;
	// bl 0x823f6f18
	ctx.lr = 0x82421BEC;
	sub_823F6F18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82421BFC:
	// lwz r11,160(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 160);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421C14"))) PPC_WEAK_FUNC(sub_82421C14);
PPC_FUNC_IMPL(__imp__sub_82421C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421C18"))) PPC_WEAK_FUNC(sub_82421C18);
PPC_FUNC_IMPL(__imp__sub_82421C18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421c30
	if (ctx.cr6.gt) goto loc_82421C30;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82421C30:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421C3C"))) PPC_WEAK_FUNC(sub_82421C3C);
PPC_FUNC_IMPL(__imp__sub_82421C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421C40"))) PPC_WEAK_FUNC(sub_82421C40);
PPC_FUNC_IMPL(__imp__sub_82421C40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421C4C"))) PPC_WEAK_FUNC(sub_82421C4C);
PPC_FUNC_IMPL(__imp__sub_82421C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421C50"))) PPC_WEAK_FUNC(sub_82421C50);
PPC_FUNC_IMPL(__imp__sub_82421C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421c70
	if (ctx.cr6.gt) goto loc_82421C70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82421c78
	goto loc_82421C78;
loc_82421C70:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82421C78:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82421C88"))) PPC_WEAK_FUNC(sub_82421C88);
PPC_FUNC_IMPL(__imp__sub_82421C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421cac
	if (ctx.cr6.gt) goto loc_82421CAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f1,0(0)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82421CAC:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 992);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421CBC"))) PPC_WEAK_FUNC(sub_82421CBC);
PPC_FUNC_IMPL(__imp__sub_82421CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421CC0"))) PPC_WEAK_FUNC(sub_82421CC0);
PPC_FUNC_IMPL(__imp__sub_82421CC0) {
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
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421cf0
	if (ctx.cr6.gt) goto loc_82421CF0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82421cf8
	goto loc_82421CF8;
loc_82421CF0:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82421CF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82421D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,1000(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
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

__attribute__((alias("__imp__sub_82421D28"))) PPC_WEAK_FUNC(sub_82421D28);
PPC_FUNC_IMPL(__imp__sub_82421D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82421D30;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r31,-31264(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82421d60
	if (ctx.cr6.eq) goto loc_82421D60;
loc_82421D4C:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82421d74
	if (ctx.cr6.eq) goto loc_82421D74;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne cr6,0x82421d4c
	if (!ctx.cr6.eq) goto loc_82421D4C;
loc_82421D60:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// bl 0x822960c0
	ctx.lr = 0x82421D70;
	sub_822960C0(ctx, base);
	// b 0x82421d9c
	goto loc_82421D9C;
loc_82421D74:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82421d94
	if (!ctx.cr6.eq) goto loc_82421D94;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x822960c0
	ctx.lr = 0x82421D90;
	sub_822960C0(ctx, base);
	// b 0x82421d9c
	goto loc_82421D9C;
loc_82421D94:
	// addi r4,r10,44
	ctx.r4.s64 = ctx.r10.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82421D9C;
	sub_8233E1A0(ctx, base);
loc_82421D9C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421db8
	if (ctx.cr6.gt) goto loc_82421DB8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82421dc0
	goto loc_82421DC0;
loc_82421DB8:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82421DC0:
	// lwz r11,676(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 676);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82421eb8
	if (!ctx.cr6.gt) goto loc_82421EB8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82421DD4:
	// lwz r11,672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82426720
	ctx.lr = 0x82421DE0;
	sub_82426720(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82421e08
	if (!ctx.cr6.eq) goto loc_82421E08;
	// lwz r11,676(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 676);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82421dd4
	if (ctx.cr6.lt) goto loc_82421DD4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82421E08:
	// addi r4,r3,60
	ctx.r4.s64 = ctx.r3.s64 + 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e1a0
	ctx.lr = 0x82421E14;
	sub_8233E1A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82295908
	ctx.lr = 0x82421E20;
	sub_82295908(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82421e80
	if (ctx.cr6.eq) goto loc_82421E80;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82421eb8
	if (ctx.cr6.eq) goto loc_82421EB8;
	// lwz r11,28888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82421e5c
	if (!ctx.cr6.eq) goto loc_82421E5C;
	// bl 0x822900a0
	ctx.lr = 0x82421E58;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82421E5C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82421E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82421E80:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82421eb8
	if (ctx.cr6.eq) goto loc_82421EB8;
	// lwz r11,28888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82421ea0
	if (!ctx.cr6.eq) goto loc_82421EA0;
	// bl 0x822900a0
	ctx.lr = 0x82421E9C;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82421EA0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82421EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82421EB8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82421EC4"))) PPC_WEAK_FUNC(sub_82421EC4);
PPC_FUNC_IMPL(__imp__sub_82421EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421EC8"))) PPC_WEAK_FUNC(sub_82421EC8);
PPC_FUNC_IMPL(__imp__sub_82421EC8) {
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
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82421ef8
	if (ctx.cr6.eq) goto loc_82421EF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82421EF8:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82421f10
	if (ctx.cr6.gt) goto loc_82421F10;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82421f18
	goto loc_82421F18;
loc_82421F10:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82421F18:
	// lwz r9,1040(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,11272
	ctx.r4.s64 = ctx.r10.s64 + 11272;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82421f34
	if (ctx.cr6.eq) goto loc_82421F34;
	// lwz r3,1036(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// b 0x82421f38
	goto loc_82421F38;
loc_82421F34:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82421F38:
	// bl 0x82cb0328
	ctx.lr = 0x82421F3C;
	sub_82CB0328(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421F5C"))) PPC_WEAK_FUNC(sub_82421F5C);
PPC_FUNC_IMPL(__imp__sub_82421F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421F60"))) PPC_WEAK_FUNC(sub_82421F60);
PPC_FUNC_IMPL(__imp__sub_82421F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421F64"))) PPC_WEAK_FUNC(sub_82421F64);
PPC_FUNC_IMPL(__imp__sub_82421F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421F68"))) PPC_WEAK_FUNC(sub_82421F68);
PPC_FUNC_IMPL(__imp__sub_82421F68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82421f90
	if (ctx.cr6.eq) goto loc_82421F90;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82421F90:
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82421fb0
	if (!ctx.cr6.eq) goto loc_82421FB0;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82421fb0
	if (!ctx.cr6.eq) goto loc_82421FB0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82421FB0:
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82421FC4"))) PPC_WEAK_FUNC(sub_82421FC4);
PPC_FUNC_IMPL(__imp__sub_82421FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82421FC8"))) PPC_WEAK_FUNC(sub_82421FC8);
PPC_FUNC_IMPL(__imp__sub_82421FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82421FD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,88(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,300(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82421FF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82787108
	ctx.lr = 0x82422000;
	sub_82787108(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r29,r11,-19580
	ctx.r29.s64 = ctx.r11.s64 + -19580;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242202c
	if (ctx.cr6.eq) goto loc_8242202C;
loc_82422014:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82422040
	if (ctx.cr6.eq) goto loc_82422040;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82422014
	if (!ctx.cr6.eq) goto loc_82422014;
loc_8242202C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// bl 0x822960c0
	ctx.lr = 0x8242203C;
	sub_822960C0(ctx, base);
	// b 0x82422064
	goto loc_82422064;
loc_82422040:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8242205c
	if (!ctx.cr6.eq) goto loc_8242205C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822960c0
	ctx.lr = 0x82422058;
	sub_822960C0(ctx, base);
	// b 0x82422064
	goto loc_82422064;
loc_8242205C:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82422064;
	sub_8233E1A0(ctx, base);
loc_82422064:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82422068:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82422080
	if (ctx.cr6.eq) goto loc_82422080;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82422068
	if (!ctx.cr6.eq) goto loc_82422068;
loc_82422080:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82422094
	if (ctx.cr6.eq) goto loc_82422094;
	// addi r11,r10,44
	ctx.r11.s64 = ctx.r10.s64 + 44;
	// b 0x824220b0
	goto loc_824220B0;
loc_82422094:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x824220AC;
	sub_8233E028(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_824220B0:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r6,r11,11272
	ctx.r6.s64 = ctx.r11.s64 + 11272;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r9,20232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20232, ctx.r9.u32);
	// stw r8,20236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20236, ctx.r8.u32);
	// lhz r7,11272(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 11272);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// beq cr6,0x82422104
	if (ctx.cr6.eq) goto loc_82422104;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824220f0
	if (!ctx.cr6.eq) goto loc_824220F0;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_824220F0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,18300
	ctx.r4.s64 = ctx.r11.s64 + 18300;
	// bl 0x8232d178
	ctx.lr = 0x82422100;
	sub_8232D178(ctx, base);
	// b 0x82422124
	goto loc_82422124;
loc_82422104:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82422110
	if (ctx.cr6.eq) goto loc_82422110;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82422110:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r11,18340
	ctx.r4.s64 = ctx.r11.s64 + 18340;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8232d178
	ctx.lr = 0x82422124;
	sub_8232D178(ctx, base);
loc_82422124:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82422138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r8.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x8242216c
	if (ctx.cr6.eq) goto loc_8242216C;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x8242216C;
	sub_82294520(ctx, base);
loc_8242216C:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x82422174;
	sub_82294CC8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242217C"))) PPC_WEAK_FUNC(sub_8242217C);
PPC_FUNC_IMPL(__imp__sub_8242217C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82422180"))) PPC_WEAK_FUNC(sub_82422180);
PPC_FUNC_IMPL(__imp__sub_82422180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82422188;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8233e1a0
	ctx.lr = 0x8242219C;
	sub_8233E1A0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r24,r11,11272
	ctx.r24.s64 = ctx.r11.s64 + 11272;
	// lwz r26,116(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r25,112(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bne cr6,0x824221bc
	if (!ctx.cr6.eq) goto loc_824221BC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_824221BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a6e40
	ctx.lr = 0x824221C4;
	sub_822A6E40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82422528
	if (!ctx.cr6.eq) goto loc_82422528;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,-21896
	ctx.r10.s64 = ctx.r11.s64 + -21896;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82422300
	if (ctx.cr6.gt) goto loc_82422300;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lis r29,-31889
	ctx.r29.s64 = -2089877504;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8242231c
	if (!ctx.cr6.gt) goto loc_8242231C;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// bne cr6,0x82422218
	if (!ctx.cr6.eq) goto loc_82422218;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82422218:
	// lwz r3,30976(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30976);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242223C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82422314
	if (ctx.cr6.eq) goto loc_82422314;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,11544
	ctx.r5.s64 = ctx.r11.s64 + 11544;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82295ff0
	ctx.lr = 0x82422258;
	sub_82295FF0(ctx, base);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x8242227c
	if (!ctx.cr6.eq) goto loc_8242227C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8242227C:
	// lwz r3,30976(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30976);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824222A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824222d8
	if (ctx.cr6.eq) goto loc_824222D8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x824222b8
	if (!ctx.cr6.eq) goto loc_824222B8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_824222B8:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822960c0
	ctx.lr = 0x824222C0;
	sub_822960C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823645e8
	ctx.lr = 0x824222D0;
	sub_823645E8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82299080
	ctx.lr = 0x824222D8;
	sub_82299080(ctx, base);
loc_824222D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823645e8
	ctx.lr = 0x824222E8;
	sub_823645E8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x824222F0;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x824222F8;
	sub_82299080(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x82422300;
	sub_82299080(ctx, base);
loc_82422300:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82422308;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82422314:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x8242231C;
	sub_82299080(ctx, base);
loc_8242231C:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82422338
	if (!ctx.cr6.eq) goto loc_82422338;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82422498
	if (ctx.cr6.eq) goto loc_82422498;
loc_82422338:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8233e1a0
	ctx.lr = 0x82422340;
	sub_8233E1A0(ctx, base);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// lwz r28,164(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bne cr6,0x82422364
	if (!ctx.cr6.eq) goto loc_82422364;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82422364:
	// lwz r3,30976(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30976);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82422388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82422488
	if (ctx.cr6.eq) goto loc_82422488;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r5,r11,11544
	ctx.r5.s64 = ctx.r11.s64 + 11544;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82295ff0
	ctx.lr = 0x824223A4;
	sub_82295FF0(ctx, base);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// lwz r30,212(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r31,208(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x824223c8
	if (!ctx.cr6.eq) goto loc_824223C8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_824223C8:
	// lwz r3,30976(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30976);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824223EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82422424
	if (ctx.cr6.eq) goto loc_82422424;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x82422404
	if (!ctx.cr6.eq) goto loc_82422404;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82422404:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822960c0
	ctx.lr = 0x8242240C;
	sub_822960C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823645e8
	ctx.lr = 0x8242241C;
	sub_823645E8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82299080
	ctx.lr = 0x82422424;
	sub_82299080(ctx, base);
loc_82422424:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bne cr6,0x82422434
	if (!ctx.cr6.eq) goto loc_82422434;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82422434:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822960c0
	ctx.lr = 0x8242243C;
	sub_822960C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823645e8
	ctx.lr = 0x8242244C;
	sub_823645E8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82299080
	ctx.lr = 0x82422454;
	sub_82299080(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82299080
	ctx.lr = 0x8242245C;
	sub_82299080(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82299080
	ctx.lr = 0x82422464;
	sub_82299080(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x8242246C;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82422474;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8242247C;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82422488:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82422490;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82422498;
	sub_82299080(ctx, base);
loc_82422498:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,4800
	ctx.r4.s64 = ctx.r11.s64 + 4800;
	// lwz r3,25344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,276(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824224BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bne cr6,0x824224cc
	if (!ctx.cr6.eq) goto loc_824224CC;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_824224CC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,18376
	ctx.r4.s64 = ctx.r11.s64 + 18376;
	// bl 0x8232e868
	ctx.lr = 0x824224DC;
	sub_8232E868(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824224f0
	if (!ctx.cr6.eq) goto loc_824224F0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_824224F0:
	// lwz r3,25344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,32540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32540);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,288(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82422510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82299080
	ctx.lr = 0x82422518;
	sub_82299080(ctx, base);
	// lwz r8,208(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 208);
	// lwz r3,80(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// bl 0x82786db8
	ctx.lr = 0x82422524;
	sub_82786DB8(ctx, base);
	// b 0x824226e8
	goto loc_824226E8;
loc_82422528:
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r7,r11,92
	ctx.r7.s64 = ctx.r11.s64 + 92;
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// lwz r7,232(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// xor r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// xor r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// or r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 | ctx.r5.u64;
	// xor r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// xor r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82422674
	if (ctx.cr6.eq) goto loc_82422674;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,4800
	ctx.r4.s64 = ctx.r11.s64 + 4800;
	// lwz r3,25344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,276(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824225B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824225d8
	if (!ctx.cr6.eq) goto loc_824225D8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// bl 0x822960c0
	ctx.lr = 0x824225D4;
	sub_822960C0(ctx, base);
	// b 0x824225fc
	goto loc_824225FC;
loc_824225D8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x824225f4
	if (!ctx.cr6.eq) goto loc_824225F4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x822960c0
	ctx.lr = 0x824225F0;
	sub_822960C0(ctx, base);
	// b 0x824225fc
	goto loc_824225FC;
loc_824225F4:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x824225FC;
	sub_8233E1A0(ctx, base);
loc_824225FC:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82422610
	if (!ctx.cr6.eq) goto loc_82422610;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_82422610:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,18452
	ctx.r4.s64 = ctx.r11.s64 + 18452;
	// bl 0x8232e868
	ctx.lr = 0x82422620;
	sub_8232E868(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82422634
	if (!ctx.cr6.eq) goto loc_82422634;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82422634:
	// lwz r3,25344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,32540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32540);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,288(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82422654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82299080
	ctx.lr = 0x8242265C;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82422664;
	sub_82299080(ctx, base);
	// lwz r8,208(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 208);
	// lwz r3,80(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// bl 0x82786db8
	ctx.lr = 0x82422670;
	sub_82786DB8(ctx, base);
	// b 0x824226e8
	goto loc_824226E8;
loc_82422674:
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r7,100(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r6,104(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// bl 0x824276a0
	ctx.lr = 0x824226AC;
	sub_824276A0(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824226c0
	if (ctx.cr6.eq) goto loc_824226C0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x824226c4
	goto loc_824226C4;
loc_824226C0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_824226C4:
	// lwz r11,208(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 208);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r4,r10,18512
	ctx.r4.s64 = ctx.r10.s64 + 18512;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8232d178
	ctx.lr = 0x824226E0;
	sub_8232D178(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82299080
	ctx.lr = 0x824226E8;
	sub_82299080(ctx, base);
loc_824226E8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x824226F0;
	sub_82299080(ctx, base);
	// lwz r11,208(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 208);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,176(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,296(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 296);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82422710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242271C"))) PPC_WEAK_FUNC(sub_8242271C);
PPC_FUNC_IMPL(__imp__sub_8242271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82422720"))) PPC_WEAK_FUNC(sub_82422720);
PPC_FUNC_IMPL(__imp__sub_82422720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82422728;
	__savegprlr_26(ctx, base);
	// stwu r1,-2432(r1)
	ea = -2432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,2468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2468, ctx.r5.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r1,2468
	ctx.r3.s64 = ctx.r1.s64 + 2468;
	// addi r4,r11,18612
	ctx.r4.s64 = ctx.r11.s64 + 18612;
	// bl 0x82333168
	ctx.lr = 0x82422748;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82422764
	if (ctx.cr6.eq) goto loc_82422764;
	// lwz r3,2468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2468);
	// bl 0x82cb2688
	ctx.lr = 0x82422758;
	sub_82CB2688(ctx, base);
	// stw r3,212(r28)
	PPC_STORE_U32(ctx.r28.u32 + 212, ctx.r3.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82422764:
	// lwz r11,148(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// addi r3,r1,2468
	ctx.r3.s64 = ctx.r1.s64 + 2468;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82422a40
	if (ctx.cr6.eq) goto loc_82422A40;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,18632
	ctx.r4.s64 = ctx.r11.s64 + 18632;
	// bl 0x82333168
	ctx.lr = 0x82422784;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824227fc
	if (ctx.cr6.eq) goto loc_824227FC;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r3,25344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// lwz r11,744(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824227d8
	if (ctx.cr6.eq) goto loc_824227D8;
	// lwz r11,740(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 740);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824227d8
	if (ctx.cr6.eq) goto loc_824227D8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824227d8
	if (ctx.cr6.eq) goto loc_824227D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82404508
	ctx.lr = 0x824227CC;
	sub_82404508(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82423320
	if (!ctx.cr6.eq) goto loc_82423320;
	// lwz r3,25344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
loc_824227D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,18648
	ctx.r4.s64 = ctx.r10.s64 + 18648;
	// lwz r9,276(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824227F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_824227FC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2468
	ctx.r3.s64 = ctx.r1.s64 + 2468;
	// addi r4,r11,18664
	ctx.r4.s64 = ctx.r11.s64 + 18664;
	// bl 0x82333168
	ctx.lr = 0x8242280C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82422840
	if (ctx.cr6.eq) goto loc_82422840;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,4800
	ctx.r4.s64 = ctx.r10.s64 + 4800;
	// lwz r3,25344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,276(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 276);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82422838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82422840:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2468
	ctx.r3.s64 = ctx.r1.s64 + 2468;
	// addi r4,r11,18676
	ctx.r4.s64 = ctx.r11.s64 + 18676;
	// bl 0x82333168
	ctx.lr = 0x82422850;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82422928
	if (ctx.cr6.eq) goto loc_82422928;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r4,2468(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2468);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r1,188
	ctx.r10.s64 = ctx.r1.s64 + 188;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// ld r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// std r30,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r30.u64);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// bl 0x827873e0
	ctx.lr = 0x824228DC;
	sub_827873E0(ctx, base);
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,296(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824228F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,20224(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20224);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x82422914
	if (ctx.cr6.gt) goto loc_82422914;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r27,-60
	ctx.r3.s64 = ctx.r27.s64 + -60;
	// bl 0x82422180
	ctx.lr = 0x8242290C;
	sub_82422180(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82423320
	if (!ctx.cr6.eq) goto loc_82423320;
loc_82422914:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r28,20220
	ctx.r3.s64 = ctx.r28.s64 + 20220;
	// bl 0x82425440
	ctx.lr = 0x82422920;
	sub_82425440(ctx, base);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82422928:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2468
	ctx.r3.s64 = ctx.r1.s64 + 2468;
	// addi r4,r11,18688
	ctx.r4.s64 = ctx.r11.s64 + 18688;
	// bl 0x82333168
	ctx.lr = 0x82422938;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82423320
	if (ctx.cr6.eq) goto loc_82423320;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,2468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2468);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,18704
	ctx.r4.s64 = ctx.r11.s64 + 18704;
	// bl 0x82333098
	ctx.lr = 0x82422954;
	sub_82333098(ctx, base);
	// lwz r10,20224(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20224);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82422a2c
	if (!ctx.cr6.gt) goto loc_82422A2C;
	// lwz r11,20220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20220);
	// addi r3,r28,20220
	ctx.r3.s64 = ctx.r28.s64 + 20220;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82422980:
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,-8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// xor r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// xor r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r31,r31,r7
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r7.u64;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// xor r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r30.u64;
	// or r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 | ctx.r31.u64;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824229dc
	if (ctx.cr6.eq) goto loc_824229DC;
	// lwz r6,20224(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20224);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82422980
	if (ctx.cr6.lt) goto loc_82422980;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// bl 0x82432d00
	ctx.lr = 0x824229D4;
	sub_82432D00(ctx, base);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_824229DC:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8232d180
	ctx.lr = 0x824229EC;
	sub_8232D180(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824276a0
	ctx.lr = 0x824229F8;
	sub_824276A0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82422a0c
	if (ctx.cr6.eq) goto loc_82422A0C;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82422a14
	goto loc_82422A14;
loc_82422A0C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
loc_82422A14:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r28,96
	ctx.r3.s64 = ctx.r28.s64 + 96;
	// addi r4,r11,18716
	ctx.r4.s64 = ctx.r11.s64 + 18716;
	// bl 0x8232d178
	ctx.lr = 0x82422A24;
	sub_8232D178(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82422A2C;
	sub_82299080(ctx, base);
loc_82422A2C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// bl 0x82432d00
	ctx.lr = 0x82422A38;
	sub_82432D00(ctx, base);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82422A40:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,18744
	ctx.r4.s64 = ctx.r11.s64 + 18744;
	// bl 0x82333168
	ctx.lr = 0x82422A4C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82422b04
	if (ctx.cr6.eq) goto loc_82422B04;
	// lwz r31,2468(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2468);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,219
	ctx.r11.s64 = 219;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,18756
	ctx.r4.s64 = ctx.r10.s64 + 18756;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x82332f80
	ctx.lr = 0x82422A78;
	sub_82332F80(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// addi r4,r9,18772
	ctx.r4.s64 = ctx.r9.s64 + 18772;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332f80
	ctx.lr = 0x82422A8C;
	sub_82332F80(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,2327
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2327, ctx.xer);
	// blt cr6,0x82422ae0
	if (ctx.cr6.lt) goto loc_82422AE0;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,3004
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3004, ctx.xer);
	// bgt cr6,0x82422ae0
	if (ctx.cr6.gt) goto loc_82422AE0;
	// cmpwi cr6,r11,3004
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3004, ctx.xer);
	// ble cr6,0x82422ab0
	if (!ctx.cr6.gt) goto loc_82422AB0;
	// li r11,3004
	ctx.r11.s64 = 3004;
loc_82422AB0:
	// stw r11,208(r28)
	PPC_STORE_U32(ctx.r28.u32 + 208, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82bea278
	ctx.lr = 0x82422ABC;
	sub_82BEA278(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ld r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,292(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,204(r28)
	PPC_STORE_U32(ctx.r28.u32 + 204, ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82422AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82422AE0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82422AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r9.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82422B04:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2468
	ctx.r3.s64 = ctx.r1.s64 + 2468;
	// addi r4,r11,18920
	ctx.r4.s64 = ctx.r11.s64 + 18920;
	// bl 0x82333168
	ctx.lr = 0x82422B14;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82422b5c
	if (ctx.cr6.eq) goto loc_82422B5C;
	// lwz r3,2468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2468);
	// bl 0x82cb2688
	ctx.lr = 0x82422B24;
	sub_82CB2688(ctx, base);
	// lwz r11,148(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// cmpwi cr6,r3,1800
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1800, ctx.xer);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bge cr6,0x82422b44
	if (!ctx.cr6.lt) goto loc_82422B44;
	// li r3,1800
	ctx.r3.s64 = 1800;
	// stw r3,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r3.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82422B44:
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82422b50
	if (ctx.cr6.lt) goto loc_82422B50;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82422B50:
	// stw r3,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r3.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82422B5C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2468
	ctx.r3.s64 = ctx.r1.s64 + 2468;
	// addi r4,r11,18940
	ctx.r4.s64 = ctx.r11.s64 + 18940;
	// bl 0x82333168
	ctx.lr = 0x82422B6C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82422c8c
	if (ctx.cr6.eq) goto loc_82422C8C;
	// lwz r29,2468(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2468);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r11,18704
	ctx.r4.s64 = ctx.r11.s64 + 18704;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82333098
	ctx.lr = 0x82422BA0;
	sub_82333098(ctx, base);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r30,176(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
loc_82422BB4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82422c7c
	if (ctx.cr6.lt) goto loc_82422C7C;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82422c7c
	if (!ctx.cr6.lt) goto loc_82422C7C;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mulli r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 * 60;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// xor r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// xor r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// xor r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// or r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 | ctx.r10.u64;
	// xor r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// or r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82422c14
	if (ctx.cr6.eq) goto loc_82422C14;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82422bb4
	goto loc_82422BB4;
loc_82422C14:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mulli r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 * 60;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r11,44
	ctx.r5.s64 = ctx.r11.s64 + 44;
	// addi r4,r10,18952
	ctx.r4.s64 = ctx.r10.s64 + 18952;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332f80
	ctx.lr = 0x82422C34;
	sub_82332F80(ctx, base);
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,284(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 284);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82422C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r28,20252
	ctx.r3.s64 = ctx.r28.s64 + 20252;
	// bl 0x824259e0
	ctx.lr = 0x82422C54;
	sub_824259E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82423320
	if (!ctx.cr6.gt) goto loc_82423320;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82432ba0
	ctx.lr = 0x82422C74;
	sub_82432BA0(ctx, base);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82422C7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82786db8
	ctx.lr = 0x82422C84;
	sub_82786DB8(ctx, base);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82422C8C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2468
	ctx.r3.s64 = ctx.r1.s64 + 2468;
	// addi r4,r11,18964
	ctx.r4.s64 = ctx.r11.s64 + 18964;
	// bl 0x82333168
	ctx.lr = 0x82422C9C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82422cf4
	if (ctx.cr6.eq) goto loc_82422CF4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,2468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2468);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r11,18704
	ctx.r4.s64 = ctx.r11.s64 + 18704;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82333098
	ctx.lr = 0x82422CCC;
	sub_82333098(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r28,20252
	ctx.r3.s64 = ctx.r28.s64 + 20252;
	// bl 0x824259e0
	ctx.lr = 0x82422CD8;
	sub_824259E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82423320
	if (!ctx.cr6.gt) goto loc_82423320;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// bl 0x82432d00
	ctx.lr = 0x82422CEC;
	sub_82432D00(ctx, base);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82422CF4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2468
	ctx.r3.s64 = ctx.r1.s64 + 2468;
	// addi r4,r11,18976
	ctx.r4.s64 = ctx.r11.s64 + 18976;
	// bl 0x82333168
	ctx.lr = 0x82422D04;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82422dd8
	if (ctx.cr6.eq) goto loc_82422DD8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,2468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2468);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r11,18704
	ctx.r4.s64 = ctx.r11.s64 + 18704;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82333098
	ctx.lr = 0x82422D34;
	sub_82333098(ctx, base);
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82423320
	if (ctx.cr6.eq) goto loc_82423320;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82423320
	if (!ctx.cr6.gt) goto loc_82423320;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82422D6C:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r31,-8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// xor r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// xor r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r31,r31,r7
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r7.u64;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// xor r5,r30,r9
	ctx.r5.u64 = ctx.r30.u64 ^ ctx.r9.u64;
	// or r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 | ctx.r31.u64;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82422dc0
	if (ctx.cr6.eq) goto loc_82422DC0;
	// lwz r6,176(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// lwz r5,64(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82422d6c
	if (ctx.cr6.lt) goto loc_82422D6C;
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82422DC0:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8232d180
	ctx.lr = 0x82422DD0;
	sub_8232D180(ctx, base);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82422DD8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2468
	ctx.r3.s64 = ctx.r1.s64 + 2468;
	// addi r4,r11,18988
	ctx.r4.s64 = ctx.r11.s64 + 18988;
	// bl 0x82333168
	ctx.lr = 0x82422DE8;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82423010
	if (ctx.cr6.eq) goto loc_82423010;
	// lwz r30,2468(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2468);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r11,19000
	ctx.r4.s64 = ctx.r11.s64 + 19000;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332f80
	ctx.lr = 0x82422E10;
	sub_82332F80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82422ae0
	if (ctx.cr6.eq) goto loc_82422AE0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r4,204(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// lwz r3,25344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,280(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82422E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82422ae0
	if (!ctx.cr6.eq) goto loc_82422AE0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,2046
	ctx.r5.s64 = 2046;
	// addi r29,r11,11272
	ctx.r29.s64 = ctx.r11.s64 + 11272;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,322
	ctx.r3.s64 = ctx.r1.s64 + 322;
	// lhz r11,11272(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 11272);
	// sth r11,320(r1)
	PPC_STORE_U16(ctx.r1.u32 + 320, ctx.r11.u16);
	// bl 0x82cb16f0
	ctx.lr = 0x82422E60;
	sub_82CB16F0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r4,r11,19060
	ctx.r4.s64 = ctx.r11.s64 + 19060;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// bl 0x823328b0
	ctx.lr = 0x82422E90;
	sub_823328B0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r28,216
	ctx.r3.s64 = ctx.r28.s64 + 216;
	// bl 0x82427888
	ctx.lr = 0x82422E9C;
	sub_82427888(ctx, base);
	// lhz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 320);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82422ec4
	if (ctx.cr6.eq) goto loc_82422EC4;
loc_82422EAC:
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// beq cr6,0x82422ec4
	if (ctx.cr6.eq) goto loc_82422EC4;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82422eac
	if (!ctx.cr6.eq) goto loc_82422EAC;
loc_82422EC4:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822960c0
	ctx.lr = 0x82422ECC;
	sub_822960C0(ctx, base);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82422ee4
	if (!ctx.cr6.gt) goto loc_82422EE4;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82422EE4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// lwz r31,980(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82422F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x824274b0
	ctx.lr = 0x82422F20;
	sub_824274B0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82422F28;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82422F30;
	sub_82299080(ctx, base);
	// lwz r31,148(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82422f48
	if (!ctx.cr6.eq) goto loc_82422F48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82422F48:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb0328
	ctx.lr = 0x82422F50;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82422fe8
	if (ctx.cr6.eq) goto loc_82422FE8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x82422f68
	if (!ctx.cr6.eq) goto loc_82422F68;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82422F68:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r28,96
	ctx.r3.s64 = ctx.r28.s64 + 96;
	// addi r4,r11,19072
	ctx.r4.s64 = ctx.r11.s64 + 19072;
	// bl 0x8232d178
	ctx.lr = 0x82422F78;
	sub_8232D178(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// bne cr6,0x82422f90
	if (!ctx.cr6.eq) goto loc_82422F90;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82422F90:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82422fb4
	if (ctx.cr6.eq) goto loc_82422FB4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82422fa8
	if (!ctx.cr6.eq) goto loc_82422FA8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82422FA8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,19096
	ctx.r4.s64 = ctx.r11.s64 + 19096;
	// bl 0x8232d178
	ctx.lr = 0x82422FB4;
	sub_8232D178(ctx, base);
loc_82422FB4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82422FC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r9,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r9.u32);
	// bl 0x82299080
	ctx.lr = 0x82422FD8;
	sub_82299080(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82422FE0;
	sub_82299080(ctx, base);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82422FE8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r27,-60
	ctx.r3.s64 = ctx.r27.s64 + -60;
	// bl 0x82421fc8
	ctx.lr = 0x82422FF8;
	sub_82421FC8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x82423000;
	sub_82299080(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82423008;
	sub_82299080(ctx, base);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82423010:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2468
	ctx.r3.s64 = ctx.r1.s64 + 2468;
	// addi r4,r11,19120
	ctx.r4.s64 = ctx.r11.s64 + 19120;
	// bl 0x82333168
	ctx.lr = 0x82423020;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242321c
	if (ctx.cr6.eq) goto loc_8242321C;
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242321c
	if (!ctx.cr6.eq) goto loc_8242321C;
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82423048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,220(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// beq cr6,0x82423074
	if (ctx.cr6.eq) goto loc_82423074;
	// lwz r5,216(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// b 0x82423078
	goto loc_82423078;
loc_82423074:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82423078:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
	// bl 0x823be038
	ctx.lr = 0x8242308C;
	sub_823BE038(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r27,-60
	ctx.r3.s64 = ctx.r27.s64 + -60;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x8276f448
	ctx.lr = 0x824230A4;
	sub_8276F448(ctx, base);
	// stw r3,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82295d40
	ctx.lr = 0x824230B0;
	sub_82295D40(ctx, base);
	// lwz r3,64(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8242310c
	if (!ctx.cr6.eq) goto loc_8242310C;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824230d0
	if (!ctx.cr6.eq) goto loc_824230D0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_824230D0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r28,96
	ctx.r3.s64 = ctx.r28.s64 + 96;
	// addi r4,r11,19072
	ctx.r4.s64 = ctx.r11.s64 + 19072;
	// bl 0x8232d178
	ctx.lr = 0x824230E0;
	sub_8232D178(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,292(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824230F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r8,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r8.u32);
	// bl 0x82299080
	ctx.lr = 0x82423104;
	sub_82299080(ctx, base);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8242310C:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r11,-13352
	ctx.r4.s64 = ctx.r11.s64 + -13352;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// lwz r11,-13352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82423148
	if (ctx.cr6.eq) goto loc_82423148;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824273d8
	ctx.lr = 0x82423134;
	sub_824273D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295908
	ctx.lr = 0x82423140;
	sub_82295908(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x824231c8
	goto loc_824231C8;
loc_82423148:
	// bl 0x826496e8
	ctx.lr = 0x8242314C;
	sub_826496E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824231dc
	if (!ctx.cr6.eq) goto loc_824231DC;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r10,-31264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8242317c
	if (ctx.cr6.eq) goto loc_8242317C;
loc_82423164:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82423190
	if (ctx.cr6.eq) goto loc_82423190;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82423164
	if (!ctx.cr6.eq) goto loc_82423164;
loc_8242317C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// bl 0x822960c0
	ctx.lr = 0x8242318C;
	sub_822960C0(ctx, base);
	// b 0x824231b8
	goto loc_824231B8;
loc_82423190:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824231b0
	if (!ctx.cr6.eq) goto loc_824231B0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x822960c0
	ctx.lr = 0x824231AC;
	sub_822960C0(ctx, base);
	// b 0x824231b8
	goto loc_824231B8;
loc_824231B0:
	// addi r4,r10,44
	ctx.r4.s64 = ctx.r10.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x824231B8;
	sub_8233E1A0(ctx, base);
loc_824231B8:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295908
	ctx.lr = 0x824231C4;
	sub_82295908(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_824231C8:
	// bl 0x82299080
	ctx.lr = 0x824231CC;
	sub_82299080(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824231e0
	if (!ctx.cr6.eq) goto loc_824231E0;
loc_824231DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_824231E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb0328
	ctx.lr = 0x824231E8;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82423204
	if (ctx.cr6.eq) goto loc_82423204;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,64(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x824272c0
	ctx.lr = 0x82423204;
	sub_824272C0(ctx, base);
loc_82423204:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x8242320C;
	sub_82299080(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82423214;
	sub_82299080(ctx, base);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8242321C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2468
	ctx.r3.s64 = ctx.r1.s64 + 2468;
	// addi r4,r11,19132
	ctx.r4.s64 = ctx.r11.s64 + 19132;
	// bl 0x82333168
	ctx.lr = 0x8242322C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82423320
	if (ctx.cr6.eq) goto loc_82423320;
	// addi r4,r28,216
	ctx.r4.s64 = ctx.r28.s64 + 216;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82294bb8
	ctx.lr = 0x82423240;
	sub_82294BB8(ctx, base);
	// lwz r3,148(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82423258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r29,r11,11272
	ctx.r29.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x8242327c
	if (!ctx.cr6.eq) goto loc_8242327C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8242327C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823be038
	ctx.lr = 0x8242328C;
	sub_823BE038(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r27,-60
	ctx.r3.s64 = ctx.r27.s64 + -60;
	// bl 0x8276f448
	ctx.lr = 0x824232B4;
	sub_8276F448(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82423308
	if (!ctx.cr6.eq) goto loc_82423308;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r28,20264
	ctx.r3.s64 = ctx.r28.s64 + 20264;
	// bl 0x82425b68
	ctx.lr = 0x824232C8;
	sub_82425B68(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824232dc
	if (!ctx.cr6.eq) goto loc_824232DC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_824232DC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r28,96
	ctx.r3.s64 = ctx.r28.s64 + 96;
	// addi r4,r11,19072
	ctx.r4.s64 = ctx.r11.s64 + 19072;
	// bl 0x8232d178
	ctx.lr = 0x824232EC;
	sub_8232D178(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,292(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82423300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r8.u32);
loc_82423308:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82423310;
	sub_82299080(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82295d40
	ctx.lr = 0x82423318;
	sub_82295D40(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82423320;
	sub_82299080(ctx, base);
loc_82423320:
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82423328"))) PPC_WEAK_FUNC(sub_82423328);
PPC_FUNC_IMPL(__imp__sub_82423328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242332C"))) PPC_WEAK_FUNC(sub_8242332C);
PPC_FUNC_IMPL(__imp__sub_8242332C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82423330"))) PPC_WEAK_FUNC(sub_82423330);
PPC_FUNC_IMPL(__imp__sub_82423330) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82423344"))) PPC_WEAK_FUNC(sub_82423344);
PPC_FUNC_IMPL(__imp__sub_82423344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82423348"))) PPC_WEAK_FUNC(sub_82423348);
PPC_FUNC_IMPL(__imp__sub_82423348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82423350;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r30,-31264(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824233c0
	if (ctx.cr6.eq) goto loc_824233C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r6,r11,14488
	ctx.r6.s64 = ctx.r11.s64 + 14488;
	// addi r5,r10,19152
	ctx.r5.s64 = ctx.r10.s64 + 19152;
	// addi r4,r9,-12824
	ctx.r4.s64 = ctx.r9.s64 + -12824;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823338c8
	ctx.lr = 0x82423398;
	sub_823338C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295908
	ctx.lr = 0x824233A4;
	sub_82295908(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x824233AC;
	sub_82299080(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82295d40
	ctx.lr = 0x824233B4;
	sub_82295D40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_824233C0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r11,19176
	ctx.r29.s64 = ctx.r11.s64 + 19176;
	// bl 0x822f2ae8
	ctx.lr = 0x824233CC;
	sub_822F2AE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x822a7ae0
	ctx.lr = 0x824233E4;
	sub_822A7AE0(ctx, base);
	// lis r9,-31885
	ctx.r9.s64 = -2089615360;
	// lis r7,-31884
	ctx.r7.s64 = -2089549824;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,28868(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28868);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,25104(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 25104);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// ld r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// bl 0x822a93e8
	ctx.lr = 0x8242341C;
	sub_822A93E8(ctx, base);
	// stw r3,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r3.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242343C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8242345c
	if (!ctx.cr6.eq) goto loc_8242345C;
	// stw r29,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82295d40
	ctx.lr = 0x82423450;
	sub_82295D40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8242345C:
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// lwz r11,-18132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18132);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82423498
	if (!ctx.cr6.eq) goto loc_82423498;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-18132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18132, ctx.r11.u32);
	// lis r8,-31884
	ctx.r8.s64 = -2089549824;
	// addi r4,r9,19256
	ctx.r4.s64 = ctx.r9.s64 + 19256;
	// addi r3,r8,25392
	ctx.r3.s64 = ctx.r8.s64 + 25392;
	// bl 0x823329d8
	ctx.lr = 0x82423490;
	sub_823329D8(ctx, base);
	// stw r3,-18136(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18136, ctx.r3.u32);
	// b 0x8242349c
	goto loc_8242349C;
loc_82423498:
	// lwz r3,-18136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18136);
loc_8242349C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824234c4
	if (!ctx.cr6.eq) goto loc_824234C4;
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x824234c4
	if (!ctx.cr6.lt) goto loc_824234C4;
	// cmpwi cr6,r10,2500
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2500, ctx.xer);
	// ble cr6,0x824234c4
	if (!ctx.cr6.gt) goto loc_824234C4;
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
loc_824234C4:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x824234dc
	if (ctx.cr6.gt) goto loc_824234DC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x824234e4
	goto loc_824234E4;
loc_824234DC:
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_824234E4:
	// lwz r10,980(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 980);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82423534
	if (ctx.cr6.eq) goto loc_82423534;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82423504
	if (ctx.cr6.gt) goto loc_82423504;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8242350c
	goto loc_8242350C;
loc_82423504:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8242350C:
	// lwz r11,980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// lwz r10,564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// ble cr6,0x82423534
	if (!ctx.cr6.gt) goto loc_82423534;
	// lwz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r11,124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmpwi cr6,r11,10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10000, ctx.xer);
	// ble cr6,0x82423530
	if (!ctx.cr6.gt) goto loc_82423530;
	// li r11,10000
	ctx.r11.s64 = 10000;
loc_82423530:
	// stw r11,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r11.u32);
loc_82423534:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25004);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242354c
	if (!ctx.cr6.eq) goto loc_8242354C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82423628
	ctx.lr = 0x8242354C;
	sub_82423628(ctx, base);
loc_8242354C:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r3,25344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82423564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8242357c
	if (ctx.cr6.gt) goto loc_8242357C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82423584
	goto loc_82423584;
loc_8242357C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82423584:
	// lwz r11,25344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// lwz r11,736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,940(r10)
	PPC_STORE_U8(ctx.r10.u32 + 940, ctx.r7.u8);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r6,132(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x824235b8
	if (ctx.cr6.gt) goto loc_824235B8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x824235c0
	goto loc_824235C0;
loc_824235B8:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824235C0:
	// lwz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f0,120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1048(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1048, temp.u32);
	// bl 0x82295d40
	ctx.lr = 0x824235D4;
	sub_82295D40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824235E0"))) PPC_WEAK_FUNC(sub_824235E0);
PPC_FUNC_IMPL(__imp__sub_824235E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r10,736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824235FC"))) PPC_WEAK_FUNC(sub_824235FC);
PPC_FUNC_IMPL(__imp__sub_824235FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82423600"))) PPC_WEAK_FUNC(sub_82423600);
PPC_FUNC_IMPL(__imp__sub_82423600) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242361c
	if (ctx.cr6.eq) goto loc_8242361C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8242361C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82423624"))) PPC_WEAK_FUNC(sub_82423624);
PPC_FUNC_IMPL(__imp__sub_82423624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82423628"))) PPC_WEAK_FUNC(sub_82423628);
PPC_FUNC_IMPL(__imp__sub_82423628) {
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
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,288(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82423654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bne cr6,0x8242366c
	if (!ctx.cr6.eq) goto loc_8242366C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242366C:
	// stw r11,25324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25324, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82423684"))) PPC_WEAK_FUNC(sub_82423684);
PPC_FUNC_IMPL(__imp__sub_82423684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82423688"))) PPC_WEAK_FUNC(sub_82423688);
PPC_FUNC_IMPL(__imp__sub_82423688) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,25344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// bl 0x82294350
	ctx.lr = 0x824236A8;
	sub_82294350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824236b8
	if (ctx.cr6.eq) goto loc_824236B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82742ca8
	ctx.lr = 0x824236B8;
	sub_82742CA8(ctx, base);
loc_824236B8:
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

__attribute__((alias("__imp__sub_824236CC"))) PPC_WEAK_FUNC(sub_824236CC);
PPC_FUNC_IMPL(__imp__sub_824236CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824236D0"))) PPC_WEAK_FUNC(sub_824236D0);
PPC_FUNC_IMPL(__imp__sub_824236D0) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r3,25344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// bl 0x82294350
	ctx.lr = 0x824236E8;
	sub_82294350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82423700
	if (ctx.cr6.eq) goto loc_82423700;
	// lwz r11,1100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1100);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82423704
	if (ctx.cr6.gt) goto loc_82423704;
loc_82423700:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82423704:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82423714"))) PPC_WEAK_FUNC(sub_82423714);
PPC_FUNC_IMPL(__imp__sub_82423714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82423718"))) PPC_WEAK_FUNC(sub_82423718);
PPC_FUNC_IMPL(__imp__sub_82423718) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r3,25344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// bl 0x82294350
	ctx.lr = 0x82423730;
	sub_82294350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82423754
	if (ctx.cr6.eq) goto loc_82423754;
	// lwz r11,1100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82423754
	if (!ctx.cr6.gt) goto loc_82423754;
	// lwz r10,1112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1112);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82423758
	if (ctx.cr6.eq) goto loc_82423758;
loc_82423754:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82423758:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82423768"))) PPC_WEAK_FUNC(sub_82423768);
PPC_FUNC_IMPL(__imp__sub_82423768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82423770;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,25344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// bl 0x82294350
	ctx.lr = 0x82423788;
	sub_82294350(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824237cc
	if (ctx.cr6.eq) goto loc_824237CC;
	// lwz r3,25344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// bl 0x82294350
	ctx.lr = 0x8242379C;
	sub_82294350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824237cc
	if (ctx.cr6.eq) goto loc_824237CC;
	// lwz r11,1100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824237cc
	if (!ctx.cr6.gt) goto loc_824237CC;
	// li r11,-4
	ctx.r11.s64 = -4;
	// lwz r10,1132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1132);
	// clrlwi r9,r28,31
	ctx.r9.u64 = ctx.r28.u32 & 0x1;
	// rlwimi r11,r29,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// or r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwimi r10,r8,29,0,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 29) & 0xE0000000) | (ctx.r10.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw r10,1132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1132, ctx.r10.u32);
loc_824237CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824237D4"))) PPC_WEAK_FUNC(sub_824237D4);
PPC_FUNC_IMPL(__imp__sub_824237D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824237D8"))) PPC_WEAK_FUNC(sub_824237D8);
PPC_FUNC_IMPL(__imp__sub_824237D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r11,r11,-13352
	ctx.r11.s64 = ctx.r11.s64 + -13352;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x82295d40
	sub_82295D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824237E8"))) PPC_WEAK_FUNC(sub_824237E8);
PPC_FUNC_IMPL(__imp__sub_824237E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r3,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824237FC"))) PPC_WEAK_FUNC(sub_824237FC);
PPC_FUNC_IMPL(__imp__sub_824237FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82423800"))) PPC_WEAK_FUNC(sub_82423800);
PPC_FUNC_IMPL(__imp__sub_82423800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82423808;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r28,r11,11272
	ctx.r28.s64 = ctx.r11.s64 + 11272;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8242383c
	if (ctx.cr6.eq) goto loc_8242383C;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// b 0x82423840
	goto loc_82423840;
loc_8242383C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82423840:
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,30976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30976);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82423868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82423884
	if (!ctx.cr6.eq) goto loc_82423884;
loc_82423870:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x82423878;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82423884:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-13352
	ctx.r31.s64 = ctx.r11.s64 + -13352;
	// lwz r11,-13352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82423870
	if (!ctx.cr6.eq) goto loc_82423870;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823beaf8
	ctx.lr = 0x824238A4;
	sub_823BEAF8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-14052
	ctx.r4.s64 = ctx.r11.s64 + -14052;
	// bl 0x82294bb8
	ctx.lr = 0x824238CC;
	sub_82294BB8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8232ee60
	ctx.lr = 0x824238DC;
	sub_8232EE60(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82295cb8
	ctx.lr = 0x824238E4;
	sub_82295CB8(ctx, base);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r11,-31264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242390c
	if (ctx.cr6.eq) goto loc_8242390C;
loc_824238F4:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8242390c
	if (ctx.cr6.eq) goto loc_8242390C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824238f4
	if (!ctx.cr6.eq) goto loc_824238F4;
loc_8242390C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82423920
	if (ctx.cr6.eq) goto loc_82423920;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// b 0x82423940
	goto loc_82423940;
loc_82423920:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8242393C;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_82423940:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bne cr6,0x8242395c
	if (!ctx.cr6.eq) goto loc_8242395C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8242395C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82423970;
	sub_8233E028(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x824239a8
	if (!ctx.cr6.eq) goto loc_824239A8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824239a8
	if (!ctx.cr6.eq) goto loc_824239A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r10,14312
	ctx.r4.s64 = ctx.r10.s64 + 14312;
	// b 0x824239b4
	goto loc_824239B4;
loc_824239A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,14312
	ctx.r4.s64 = ctx.r11.s64 + 14312;
loc_824239B4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823645e8
	ctx.lr = 0x824239BC;
	sub_823645E8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82299080
	ctx.lr = 0x824239C4;
	sub_82299080(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x824239CC;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824239D8"))) PPC_WEAK_FUNC(sub_824239D8);
PPC_FUNC_IMPL(__imp__sub_824239D8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-13352
	ctx.r8.s64 = ctx.r9.s64 + -13352;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-13352(r9)
	PPC_STORE_U32(ctx.r9.u32 + -13352, ctx.r10.u32);
	// stw r11,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824239F4"))) PPC_WEAK_FUNC(sub_824239F4);
PPC_FUNC_IMPL(__imp__sub_824239F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824239F8"))) PPC_WEAK_FUNC(sub_824239F8);
PPC_FUNC_IMPL(__imp__sub_824239F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x82423A00;
	__savegprlr_17(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r22,r11,-13352
	ctx.r22.s64 = ctx.r11.s64 + -13352;
	// lwz r11,-13352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82423a28
	if (ctx.cr6.eq) goto loc_82423A28;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f1,-18048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18048);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82364958
	ctx.lr = 0x82423A28;
	sub_82364958(ctx, base);
loc_82423A28:
	// lwz r31,76(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 76);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82424628
	if (ctx.cr6.eq) goto loc_82424628;
	// li r11,747
	ctx.r11.s64 = 747;
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// bl 0x823106a8
	ctx.lr = 0x82423A48;
	sub_823106A8(ctx, base);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lwz r11,24976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82423a60
	if (ctx.cr6.eq) goto loc_82423A60;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// b 0x82423a68
	goto loc_82423A68;
loc_82423A60:
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r8,r8,42,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 42) & 0xFFFFFFFFFFFFFFFF;
loc_82423A68:
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a0408
	ctx.lr = 0x82423A7C;
	sub_822A0408(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82424618
	if (ctx.cr6.eq) goto loc_82424618;
	// lwz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82424618
	if (ctx.cr6.eq) goto loc_82424618;
	// lis r20,-31884
	ctx.r20.s64 = -2089549824;
	// lwz r3,25344(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 25344);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82423AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,25344(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 25344);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,296(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 296);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82423AC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r25,-31883
	ctx.r25.s64 = -2089484288;
	// lwz r3,-31264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r7,132(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt cr6,0x82423ae0
	if (ctx.cr6.gt) goto loc_82423AE0;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// b 0x82423ae8
	goto loc_82423AE8;
loc_82423AE0:
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82423AE8:
	// lwz r10,80(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// lwz r9,132(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82423b00
	if (ctx.cr6.gt) goto loc_82423B00;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// b 0x82423b08
	goto loc_82423B08;
loc_82423B00:
	// lwz r10,128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lwz r21,0(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82423B08:
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82423b5c
	if (!ctx.cr6.gt) goto loc_82423B5C;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_82423B1C:
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82423b44
	if (ctx.cr6.eq) goto loc_82423B44;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,320(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82423B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-31264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
loc_82423B44:
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82423b1c
	if (ctx.cr6.lt) goto loc_82423B1C;
loc_82423B5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824204e0
	ctx.lr = 0x82423B68;
	sub_824204E0(ctx, base);
	// lwz r3,-31264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// bl 0x8236b018
	ctx.lr = 0x82423B70;
	sub_8236B018(ctx, base);
	// lwz r4,72(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 72);
	// lwz r3,-31264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// bl 0x82421118
	ctx.lr = 0x82423B7C;
	sub_82421118(ctx, base);
	// lwz r11,-31264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// li r12,-16385
	ctx.r12.s64 = -16385;
	// lwz r10,25344(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 25344);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r7,736(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 736);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82423be4
	if (ctx.cr6.eq) goto loc_82423BE4;
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82423BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82423be4
	if (ctx.cr6.eq) goto loc_82423BE4;
	// lwz r11,25344(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 25344);
	// lwz r3,736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82423BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,272(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82423BE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82423BE4:
	// lwz r11,72(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 72);
	// li r10,1
	ctx.r10.s64 = 1;
	// rldicr r29,r10,59,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 59) & 0xFFFFFFFFFFFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82423c10
	if (!ctx.cr6.eq) goto loc_82423C10;
	// lwz r11,980(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 980);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82423c10
	if (ctx.cr6.eq) goto loc_82423C10;
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// or r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 | ctx.r29.u64;
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_82423C10:
	// lwz r11,-31264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82423c2c
	if (ctx.cr6.gt) goto loc_82423C2C;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82423c34
	goto loc_82423C34;
loc_82423C2C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82423C34:
	// lbz r11,940(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 940);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82423ce8
	if (!ctx.cr6.eq) goto loc_82423CE8;
	// lwz r10,25344(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 25344);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82423d38
	if (ctx.cr6.eq) goto loc_82423D38;
loc_82423C50:
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82423c78
	if (ctx.cr0.lt) goto loc_82423C78;
	// lwz r9,744(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 744);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82423c78
	if (!ctx.cr6.lt) goto loc_82423C78;
	// lwz r9,740(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 740);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82423c50
	if (ctx.cr6.eq) goto loc_82423C50;
loc_82423C78:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82423d38
	if (ctx.cr6.eq) goto loc_82423D38;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82423d38
	if (ctx.cr6.lt) goto loc_82423D38;
	// lwz r9,744(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 744);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82423d38
	if (!ctx.cr6.lt) goto loc_82423D38;
	// lwz r9,740(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 740);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,64(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82423cbc
	if (ctx.cr6.eq) goto loc_82423CBC;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// ld r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// or r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 | ctx.r29.u64;
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
loc_82423CBC:
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82423c78
	if (ctx.cr0.lt) goto loc_82423C78;
	// lwz r9,744(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 744);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82423c78
	if (!ctx.cr6.lt) goto loc_82423C78;
	// lwz r9,740(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 740);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82423cbc
	if (ctx.cr6.eq) goto loc_82423CBC;
	// b 0x82423c78
	goto loc_82423C78;
loc_82423CE8:
	// lwz r31,1008(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1008);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82423d38
	if (ctx.cr6.eq) goto loc_82423D38;
loc_82423CF4:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82423d20
	if (!ctx.cr6.eq) goto loc_82423D20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,908(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82423D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82423d2c
	if (ctx.cr6.eq) goto loc_82423D2C;
loc_82423D20:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// or r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 | ctx.r29.u64;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
loc_82423D2C:
	// lwz r31,504(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82423cf4
	if (!ctx.cr6.eq) goto loc_82423CF4;
loc_82423D38:
	// lwz r3,980(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 980);
	// stw r19,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r19.u32);
	// stw r19,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r19.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// beq cr6,0x82423d64
	if (ctx.cr6.eq) goto loc_82423D64;
	// lwz r11,72(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 72);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x824271b0
	ctx.lr = 0x82423D64;
	sub_824271B0(ctx, base);
loc_82423D64:
	// lwz r30,25344(r20)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r20.u32 + 25344);
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82423e14
	if (ctx.cr6.eq) goto loc_82423E14;
loc_82423D74:
	// addic. r31,r31,1
	ctx.xer.ca = ctx.r31.u32 > 4294967294;
	ctx.r31.s64 = ctx.r31.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82423d9c
	if (ctx.cr0.lt) goto loc_82423D9C;
	// lwz r11,744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 744);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82423d9c
	if (!ctx.cr6.lt) goto loc_82423D9C;
	// lwz r11,740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82423d74
	if (ctx.cr6.eq) goto loc_82423D74;
loc_82423D9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82423e14
	if (ctx.cr6.eq) goto loc_82423E14;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82423e14
	if (ctx.cr6.lt) goto loc_82423E14;
	// lwz r11,744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 744);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82423e14
	if (!ctx.cr6.lt) goto loc_82423E14;
	// lwz r11,740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82423de8
	if (ctx.cr6.eq) goto loc_82423DE8;
	// lwz r10,72(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 72);
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82427040
	ctx.lr = 0x82423DE8;
	sub_82427040(ctx, base);
loc_82423DE8:
	// addic. r31,r31,1
	ctx.xer.ca = ctx.r31.u32 > 4294967294;
	ctx.r31.s64 = ctx.r31.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82423d9c
	if (ctx.cr0.lt) goto loc_82423D9C;
	// lwz r11,744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 744);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82423d9c
	if (!ctx.cr6.lt) goto loc_82423D9C;
	// lwz r11,740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82423de8
	if (ctx.cr6.eq) goto loc_82423DE8;
	// b 0x82423d9c
	goto loc_82423D9C;
loc_82423E14:
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r23,136(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82423e50
	if (!ctx.cr6.gt) goto loc_82423E50;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82423E28:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82423e44
	if (ctx.cr6.eq) goto loc_82423E44;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// ld r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// or r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 | ctx.r29.u64;
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
loc_82423E44:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82423e28
	if (!ctx.cr0.eq) goto loc_82423E28;
loc_82423E50:
	// addi r11,r1,97
	ctx.r11.s64 = ctx.r1.s64 + 97;
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r19.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r19.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r19,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r19,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r19.u32);
	// addi r7,r1,97
	ctx.r7.s64 = ctx.r1.s64 + 97;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stb r19,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r19.u8);
	// stb r19,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r19.u8);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r7,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// bl 0x82382368
	ctx.lr = 0x82423E90;
	sub_82382368(ctx, base);
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r6,1
	ctx.r6.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// rldicr r27,r6,61,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u64, 61) & 0xFFFFFFFFFFFFFFFF;
	// bne cr6,0x8242416c
	if (!ctx.cr6.eq) goto loc_8242416C;
	// lis r28,-31885
	ctx.r28.s64 = -2089615360;
loc_82423EA8:
	// lwz r11,-31264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// lwz r31,176(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82424050
	if (!ctx.cr6.eq) goto loc_82424050;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82424050
	if (!ctx.cr6.eq) goto loc_82424050;
	// rlwinm r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82424050
	if (!ctx.cr6.eq) goto loc_82424050;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rldicr r12,r12,59,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 59) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82423f00
	if (!ctx.cr6.eq) goto loc_82423F00;
	// lbz r11,95(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 95);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82424050
	if (!ctx.cr6.lt) goto loc_82424050;
loc_82423F00:
	// li r12,-2
	ctx.r12.s64 = -2;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// rldicr r12,r12,59,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 59) & 0xFFFFFFFFFFFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,80(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// lwz r8,156(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82423F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r21,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r21.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,912(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 912);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82423F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82423fa8
	if (ctx.cr6.eq) goto loc_82423FA8;
	// lwz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82423f6c
	if (ctx.cr6.gt) goto loc_82423F6C;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82423f74
	goto loc_82423F74;
loc_82423F6C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82423F74:
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// lwz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82423f98
	if (ctx.cr6.gt) goto loc_82423F98;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r31,1008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1008, ctx.r31.u32);
	// b 0x82423fd0
	goto loc_82423FD0;
loc_82423F98:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,1008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1008, ctx.r31.u32);
	// b 0x82423fd0
	goto loc_82423FD0;
loc_82423FA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 920);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82423FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82423fd0
	if (ctx.cr6.eq) goto loc_82423FD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824218b8
	ctx.lr = 0x82423FD0;
	sub_824218B8(ctx, base);
loc_82423FD0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// bl 0x826e8690
	ctx.lr = 0x82423FDC;
	sub_826E8690(ctx, base);
	// lwz r11,-31264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,28880(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28880);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// beq cr6,0x8242403c
	if (ctx.cr6.eq) goto loc_8242403C;
	// lis r10,-32145
	ctx.r10.s64 = -2106654720;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32145
	ctx.r9.s64 = -2106654720;
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r10,-4840
	ctx.r8.s64 = ctx.r10.s64 + -4840;
	// addi r10,r9,-4856
	ctx.r10.s64 = ctx.r9.s64 + -4856;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242403C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242403C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e8618
	ctx.lr = 0x8242404C;
	sub_826E8618(ctx, base);
	// b 0x82424158
	goto loc_82424158;
loc_82424050:
	// li r12,-2
	ctx.r12.s64 = -2;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r12,r12,59,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 59) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// or r8,r9,r27
	ctx.r8.u64 = ctx.r9.u64 | ctx.r27.u64;
	// std r8,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r8.u64);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,964(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 964);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82424084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-31264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// lwz r5,208(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82424158
	if (ctx.cr6.eq) goto loc_82424158;
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824240AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,-31264(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// lwz r8,208(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 208);
	// lwz r11,80(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82424158
	if (ctx.cr6.eq) goto loc_82424158;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r30,r11,20184
	ctx.r30.s64 = ctx.r11.s64 + 20184;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824020f8
	ctx.lr = 0x824240D4;
	sub_824020F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82424158
	if (ctx.cr6.eq) goto loc_82424158;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82426128
	ctx.lr = 0x824240F0;
	sub_82426128(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82424148
	if (ctx.cr6.eq) goto loc_82424148;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82424148
	if (!ctx.cr6.gt) goto loc_82424148;
loc_82424114:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x82424114
	if (ctx.cr6.gt) goto loc_82424114;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82426228
	ctx.lr = 0x82424148;
	sub_82426228(ctx, base);
loc_82424148:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// stw r19,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r19.u32);
	// oris r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 268435456;
	// stw r10,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r10.u32);
loc_82424158:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82382368
	ctx.lr = 0x82424160;
	sub_82382368(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82423ea8
	if (ctx.cr6.eq) goto loc_82423EA8;
loc_8242416C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822b2bc0
	ctx.lr = 0x82424174;
	sub_822B2BC0(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r30,r11,-21944
	ctx.r30.s64 = ctx.r11.s64 + -21944;
	// lwz r31,-31264(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
loc_82424180:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x824241e8
	if (!ctx.cr6.lt) goto loc_824241E8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824241bc
	if (ctx.cr6.eq) goto loc_824241BC;
loc_824241A8:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x824241cc
	if (ctx.cr6.eq) goto loc_824241CC;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824241a8
	if (!ctx.cr6.eq) goto loc_824241A8;
loc_824241BC:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824241dc
	if (ctx.cr6.eq) goto loc_824241DC;
loc_824241CC:
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// or r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 | ctx.r27.u64;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r31,-31264(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
loc_824241DC:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822b2b40
	ctx.lr = 0x824241E4;
	sub_822B2B40(ctx, base);
	// b 0x82424180
	goto loc_82424180;
loc_824241E8:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,208(r26)
	PPC_STORE_U32(ctx.r26.u32 + 208, ctx.r11.u32);
	// beq cr6,0x82424200
	if (ctx.cr6.eq) goto loc_82424200;
	// addi r10,r26,60
	ctx.r10.s64 = ctx.r26.s64 + 60;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
loc_82424200:
	// lwz r11,-31264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8242421c
	if (ctx.cr6.gt) goto loc_8242421C;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82424224
	goto loc_82424224;
loc_8242421C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82424224:
	// lbz r11,940(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 940);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r11,940(r21)
	PPC_STORE_U8(ctx.r21.u32 + 940, ctx.r11.u8);
	// lwz r10,980(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 980);
	// stw r10,980(r21)
	PPC_STORE_U32(ctx.r21.u32 + 980, ctx.r10.u32);
	// lwz r9,936(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 936);
	// stw r9,936(r21)
	PPC_STORE_U32(ctx.r21.u32 + 936, ctx.r9.u32);
	// lfs f0,852(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,852(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 852, temp.u32);
	// lfs f13,856(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 856);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,856(r21)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r21.u32 + 856, temp.u32);
	// ld r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// ori r7,r8,16384
	ctx.r7.u64 = ctx.r8.u64 | 16384;
	// std r7,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r7.u64);
	// stw r26,-31264(r25)
	PPC_STORE_U32(ctx.r25.u32 + -31264, ctx.r26.u32);
	// bl 0x8241cd70
	ctx.lr = 0x82424264;
	sub_8241CD70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rldicr r3,r3,58,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 58) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8239dac8
	ctx.lr = 0x82424274;
	sub_8239DAC8(ctx, base);
	// lis r6,-31883
	ctx.r6.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,-31264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// stw r11,-28424(r6)
	PPC_STORE_U32(ctx.r6.u32 + -28424, ctx.r11.u32);
	// lwz r11,72(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824242c8
	if (ctx.cr6.eq) goto loc_824242C8;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x824242a8
	if (ctx.cr6.gt) goto loc_824242A8;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x824242b0
	goto loc_824242B0;
loc_824242A8:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824242B0:
	// lbz r11,940(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 940);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824242c8
	if (ctx.cr6.eq) goto loc_824242C8;
	// addi r4,r22,4
	ctx.r4.s64 = ctx.r22.s64 + 4;
	// bl 0x82420840
	ctx.lr = 0x824242C4;
	sub_82420840(ctx, base);
	// lwz r3,-31264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
loc_824242C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r22,4
	ctx.r4.s64 = ctx.r22.s64 + 4;
	// bl 0x82420b20
	ctx.lr = 0x824242D4;
	sub_82420B20(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r31,25344(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 25344);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8242430c
	if (ctx.cr6.eq) goto loc_8242430C;
loc_824242E4:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8242430c
	if (ctx.cr0.lt) goto loc_8242430C;
	// lwz r11,744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8242430c
	if (!ctx.cr6.lt) goto loc_8242430C;
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824242e4
	if (ctx.cr6.eq) goto loc_824242E4;
loc_8242430C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r26,-31882
	ctx.r26.s64 = -2089418752;
	// lis r28,-31882
	ctx.r28.s64 = -2089418752;
	// addi r27,r11,-19580
	ctx.r27.s64 = ctx.r11.s64 + -19580;
loc_8242431C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824244fc
	if (ctx.cr6.eq) goto loc_824244FC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x824244fc
	if (ctx.cr6.lt) goto loc_824244FC;
	// lwz r11,744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x824244fc
	if (!ctx.cr6.lt) goto loc_824244FC;
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824244d0
	if (ctx.cr6.eq) goto loc_824244D0;
	// lwz r10,-31264(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82424374
	if (ctx.cr6.eq) goto loc_82424374;
loc_8242435C:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82424374
	if (ctx.cr6.eq) goto loc_82424374;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242435c
	if (!ctx.cr6.eq) goto loc_8242435C;
loc_82424374:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82424388
	if (ctx.cr6.eq) goto loc_82424388;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// b 0x824243a4
	goto loc_824243A4;
loc_82424388:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233e028
	ctx.lr = 0x824243A0;
	sub_8233E028(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
loc_824243A4:
	// lwz r11,744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x824243bc
	if (!ctx.cr6.lt) goto loc_824243BC;
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// b 0x824243c0
	goto loc_824243C0;
loc_824243BC:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_824243C0:
	// ld r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r24,64(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r18,r1,112
	ctx.r18.s64 = ctx.r1.s64 + 112;
	// ld r4,-20592(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + -20592);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lwz r17,0(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x824243F4;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,228(r17)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r17.u32 + 228);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82424410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-31264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82424434
	if (ctx.cr6.eq) goto loc_82424434;
loc_8242441C:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82424434
	if (ctx.cr6.eq) goto loc_82424434;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8242441c
	if (!ctx.cr6.eq) goto loc_8242441C;
loc_82424434:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82424448
	if (ctx.cr6.eq) goto loc_82424448;
	// addi r10,r11,44
	ctx.r10.s64 = ctx.r11.s64 + 44;
	// b 0x82424464
	goto loc_82424464;
loc_82424448:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8233e028
	ctx.lr = 0x82424460;
	sub_8233E028(ctx, base);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
loc_82424464:
	// lwz r11,744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8242447c
	if (!ctx.cr6.lt) goto loc_8242447C;
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// b 0x82424480
	goto loc_82424480;
loc_8242447C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82424480:
	// ld r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,64(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r24,r1,120
	ctx.r24.s64 = ctx.r1.s64 + 120;
	// ld r4,-19968(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + -19968);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r18,0(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x824244B4;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,228(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 228);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824244D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824244D0:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8242431c
	if (ctx.cr0.lt) goto loc_8242431C;
	// lwz r11,744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8242431c
	if (!ctx.cr6.lt) goto loc_8242431C;
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824244d0
	if (ctx.cr6.eq) goto loc_824244D0;
	// b 0x8242431c
	goto loc_8242431C;
loc_824244FC:
	// lwz r10,72(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 72);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r11,76(r22)
	PPC_STORE_U32(ctx.r22.u32 + 76, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824245c0
	if (ctx.cr6.eq) goto loc_824245C0;
	// lwz r3,25344(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 25344);
	// bl 0x82294350
	ctx.lr = 0x82424518;
	sub_82294350(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82424574
	if (ctx.cr6.eq) goto loc_82424574;
	// addi r31,r30,928
	ctx.r31.s64 = ctx.r30.s64 + 928;
	// addi r4,r22,4
	ctx.r4.s64 = ctx.r22.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295908
	ctx.lr = 0x82424534;
	sub_82295908(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r22,16
	ctx.r4.s64 = ctx.r22.s64 + 16;
	// bl 0x82295908
	ctx.lr = 0x82424540;
	sub_82295908(ctx, base);
	// lwz r11,28(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r22,32
	ctx.r4.s64 = ctx.r22.s64 + 32;
	// stw r11,952(r30)
	PPC_STORE_U32(ctx.r30.u32 + 952, ctx.r11.u32);
	// bl 0x82295908
	ctx.lr = 0x82424554;
	sub_82295908(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r4,r22,44
	ctx.r4.s64 = ctx.r22.s64 + 44;
	// bl 0x8233a460
	ctx.lr = 0x82424560;
	sub_8233A460(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r4,r22,56
	ctx.r4.s64 = ctx.r22.s64 + 56;
	// bl 0x82295908
	ctx.lr = 0x8242456C;
	sub_82295908(ctx, base);
	// lwz r11,68(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 68);
	// stw r11,992(r30)
	PPC_STORE_U32(ctx.r30.u32 + 992, ctx.r11.u32);
loc_82424574:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lwz r31,980(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 980);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824245dc
	if (ctx.cr6.eq) goto loc_824245DC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-20224(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20224);
	// bl 0x8229e490
	ctx.lr = 0x824245A0;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824245BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824245dc
	goto loc_824245DC;
loc_824245C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// stw r11,72(r22)
	PPC_STORE_U32(ctx.r22.u32 + 72, ctx.r11.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r10,14312
	ctx.r4.s64 = ctx.r10.s64 + 14312;
	// addi r3,r22,32
	ctx.r3.s64 = ctx.r22.s64 + 32;
	// bl 0x823645e8
	ctx.lr = 0x824245DC;
	sub_823645E8(ctx, base);
loc_824245DC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82424628
	if (ctx.cr6.eq) goto loc_82424628;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824245fc
	if (!ctx.cr6.eq) goto loc_824245FC;
	// bl 0x822900a0
	ctx.lr = 0x824245F8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_824245FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82424610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_82424618:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stw r11,76(r22)
	PPC_STORE_U32(ctx.r22.u32 + 76, ctx.r11.u32);
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
loc_82424628:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82424630"))) PPC_WEAK_FUNC(sub_82424630);
PPC_FUNC_IMPL(__imp__sub_82424630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,25344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// bl 0x82294350
	ctx.lr = 0x82424650;
	sub_82294350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824246c4
	if (ctx.cr6.eq) goto loc_824246C4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8242466c
	if (ctx.cr6.eq) goto loc_8242466C;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82424674
	goto loc_82424674;
loc_8242466C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
loc_82424674:
	// addi r31,r3,928
	ctx.r31.s64 = ctx.r3.s64 + 928;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823be038
	ctx.lr = 0x82424688;
	sub_823BE038(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,19272
	ctx.r4.s64 = ctx.r11.s64 + 19272;
	// bl 0x823bf2d8
	ctx.lr = 0x82424698;
	sub_823BF2D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824246ac
	if (ctx.cr6.eq) goto loc_824246AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823beaf8
	ctx.lr = 0x824246AC;
	sub_823BEAF8(ctx, base);
loc_824246AC:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-13352
	ctx.r3.s64 = ctx.r11.s64 + -13352;
	// bl 0x82423800
	ctx.lr = 0x824246BC;
	sub_82423800(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295d40
	ctx.lr = 0x824246C4;
	sub_82295D40(ctx, base);
loc_824246C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824246D8"))) PPC_WEAK_FUNC(sub_824246D8);
PPC_FUNC_IMPL(__imp__sub_824246D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r3,-13352(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13352);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824246E4"))) PPC_WEAK_FUNC(sub_824246E4);
PPC_FUNC_IMPL(__imp__sub_824246E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824246E8"))) PPC_WEAK_FUNC(sub_824246E8);
PPC_FUNC_IMPL(__imp__sub_824246E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r11,-31264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// lwz r9,208(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r4,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r4.u32);
	// lwz r11,-31264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// stfs f1,280(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 280, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82424714"))) PPC_WEAK_FUNC(sub_82424714);
PPC_FUNC_IMPL(__imp__sub_82424714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82424718"))) PPC_WEAK_FUNC(sub_82424718);
PPC_FUNC_IMPL(__imp__sub_82424718) {
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
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824247b8
	if (!ctx.cr6.gt) goto loc_824247B8;
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824247b8
	if (ctx.cr6.eq) goto loc_824247B8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82426720
	ctx.lr = 0x82424754;
	sub_82426720(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824247b8
	if (ctx.cr6.eq) goto loc_824247B8;
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82424794
	if (ctx.cr6.gt) goto loc_82424794;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826f0218
	ctx.lr = 0x8242477C;
	sub_826F0218(ctx, base);
	// lwz r3,1164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
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
loc_82424794:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826f0218
	ctx.lr = 0x824247A0;
	sub_826F0218(ctx, base);
	// lwz r3,1164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
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
loc_824247B8:
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
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

__attribute__((alias("__imp__sub_824247D0"))) PPC_WEAK_FUNC(sub_824247D0);
PPC_FUNC_IMPL(__imp__sub_824247D0) {
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
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82424858
	if (!ctx.cr6.gt) goto loc_82424858;
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82424858
	if (ctx.cr6.eq) goto loc_82424858;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82426720
	ctx.lr = 0x82424814;
	sub_82426720(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82424858
	if (ctx.cr6.eq) goto loc_82424858;
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82424844
	if (ctx.cr6.gt) goto loc_82424844;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826f0218
	ctx.lr = 0x8242483C;
	sub_826F0218(ctx, base);
	// stw r30,1164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1164, ctx.r30.u32);
	// b 0x8242485c
	goto loc_8242485C;
loc_82424844:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826f0218
	ctx.lr = 0x82424850;
	sub_826F0218(ctx, base);
	// stw r30,1164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1164, ctx.r30.u32);
	// b 0x8242485c
	goto loc_8242485C;
loc_82424858:
	// stw r30,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r30.u32);
loc_8242485C:
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

__attribute__((alias("__imp__sub_82424874"))) PPC_WEAK_FUNC(sub_82424874);
PPC_FUNC_IMPL(__imp__sub_82424874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82424878"))) PPC_WEAK_FUNC(sub_82424878);
PPC_FUNC_IMPL(__imp__sub_82424878) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82424894;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242491c
	if (ctx.cr6.eq) goto loc_8242491C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32190
	ctx.r31.s64 = -2109603840;
	// addi r11,r7,19288
	ctx.r11.s64 = ctx.r7.s64 + 19288;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,28272
	ctx.r5.s64 = ctx.r31.s64 + 28272;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82424908;
	sub_82398460(ctx, base);
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
loc_8242491C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82424934"))) PPC_WEAK_FUNC(sub_82424934);
PPC_FUNC_IMPL(__imp__sub_82424934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82424938"))) PPC_WEAK_FUNC(sub_82424938);
PPC_FUNC_IMPL(__imp__sub_82424938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82424940;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14476
	ctx.r29.s64 = ctx.r11.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82424970
	if (!ctx.cr6.eq) goto loc_82424970;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aace8
	ctx.lr = 0x82424964;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x8242496C;
	sub_822AADA8(ctx, base);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82424970:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31256);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82424994
	if (ctx.cr6.eq) goto loc_82424994;
	// bl 0x822955c8
	ctx.lr = 0x82424984;
	sub_822955C8(ctx, base);
	// lwz r11,-31256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31256);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8242499c
	goto loc_8242499C;
loc_82424994:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
loc_8242499C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824249bc
	if (!ctx.cr6.eq) goto loc_824249BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aace8
	ctx.lr = 0x824249AC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x824249B4;
	sub_822AADA8(ctx, base);
	// lwz r11,-31256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31256);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_824249BC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824249e8
	if (!ctx.cr6.eq) goto loc_824249E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82398580
	ctx.lr = 0x824249D8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x824249E0;
	sub_82398640(ctx, base);
	// lwz r11,-31256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31256);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_824249E8:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82424a20
	if (ctx.cr6.eq) goto loc_82424A20;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82424A04;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82424a20
	if (!ctx.cr6.eq) goto loc_82424A20;
	// lwz r3,-31256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31256);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82424A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82424A20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82424A28"))) PPC_WEAK_FUNC(sub_82424A28);
PPC_FUNC_IMPL(__imp__sub_82424A28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82424A30"))) PPC_WEAK_FUNC(sub_82424A30);
PPC_FUNC_IMPL(__imp__sub_82424A30) {
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
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82424a74
	if (!ctx.cr6.eq) goto loc_82424A74;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x822aace8
	ctx.lr = 0x82424A68;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82424A70;
	sub_822AADA8(ctx, base);
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82424A74:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82424A9C"))) PPC_WEAK_FUNC(sub_82424A9C);
PPC_FUNC_IMPL(__imp__sub_82424A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82424AA0"))) PPC_WEAK_FUNC(sub_82424AA0);
PPC_FUNC_IMPL(__imp__sub_82424AA0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82424ABC;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82424b44
	if (ctx.cr6.eq) goto loc_82424B44;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32190
	ctx.r31.s64 = -2109603840;
	// addi r11,r7,19320
	ctx.r11.s64 = ctx.r7.s64 + 19320;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,27984
	ctx.r5.s64 = ctx.r31.s64 + 27984;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82424B30;
	sub_82398460(ctx, base);
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
loc_82424B44:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82424B5C"))) PPC_WEAK_FUNC(sub_82424B5C);
PPC_FUNC_IMPL(__imp__sub_82424B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82424B60"))) PPC_WEAK_FUNC(sub_82424B60);
PPC_FUNC_IMPL(__imp__sub_82424B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82424B68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-31256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31256);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82424b94
	if (!ctx.cr6.eq) goto loc_82424B94;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82424878
	ctx.lr = 0x82424B88;
	sub_82424878(ctx, base);
	// stw r3,-31256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31256, ctx.r3.u32);
	// bl 0x82424938
	ctx.lr = 0x82424B90;
	sub_82424938(ctx, base);
	// lwz r10,-31256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31256);
loc_82424B94:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-31252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31252);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82424bb4
	if (ctx.cr6.eq) goto loc_82424BB4;
	// bl 0x82313178
	ctx.lr = 0x82424BA8;
	sub_82313178(ctx, base);
	// lwz r11,-31252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31252);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82424bbc
	goto loc_82424BBC;
loc_82424BB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82424BBC:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82424bec
	if (!ctx.cr6.eq) goto loc_82424BEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82424BDC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82424BE4;
	sub_822AADA8(ctx, base);
	// lwz r11,-31252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31252);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82424BEC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82424c18
	if (!ctx.cr6.eq) goto loc_82424C18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82424C08;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82424C10;
	sub_82398640(ctx, base);
	// lwz r11,-31252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31252);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82424C18:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82424c50
	if (ctx.cr6.eq) goto loc_82424C50;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82424C34;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82424c50
	if (!ctx.cr6.eq) goto loc_82424C50;
	// lwz r3,-31252(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31252);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82424C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82424C50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82424C58"))) PPC_WEAK_FUNC(sub_82424C58);
PPC_FUNC_IMPL(__imp__sub_82424C58) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82424C60"))) PPC_WEAK_FUNC(sub_82424C60);
PPC_FUNC_IMPL(__imp__sub_82424C60) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-31256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31256);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82424ca4
	if (!ctx.cr6.eq) goto loc_82424CA4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82424878
	ctx.lr = 0x82424C98;
	sub_82424878(ctx, base);
	// stw r3,-31256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31256, ctx.r3.u32);
	// bl 0x82424938
	ctx.lr = 0x82424CA0;
	sub_82424938(ctx, base);
	// lwz r11,-31256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31256);
loc_82424CA4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82424CCC"))) PPC_WEAK_FUNC(sub_82424CCC);
PPC_FUNC_IMPL(__imp__sub_82424CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82424CD0"))) PPC_WEAK_FUNC(sub_82424CD0);
PPC_FUNC_IMPL(__imp__sub_82424CD0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82424CEC;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82424d74
	if (ctx.cr6.eq) goto loc_82424D74;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32190
	ctx.r31.s64 = -2109603840;
	// addi r11,r7,19364
	ctx.r11.s64 = ctx.r7.s64 + 19364;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,27696
	ctx.r5.s64 = ctx.r31.s64 + 27696;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,148
	ctx.r5.s64 = 148;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82424D60;
	sub_82398460(ctx, base);
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
loc_82424D74:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82424D8C"))) PPC_WEAK_FUNC(sub_82424D8C);
PPC_FUNC_IMPL(__imp__sub_82424D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82424D90"))) PPC_WEAK_FUNC(sub_82424D90);
PPC_FUNC_IMPL(__imp__sub_82424D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82424D98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-31256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31256);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82424dc4
	if (!ctx.cr6.eq) goto loc_82424DC4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82424878
	ctx.lr = 0x82424DB8;
	sub_82424878(ctx, base);
	// stw r3,-31256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31256, ctx.r3.u32);
	// bl 0x82424938
	ctx.lr = 0x82424DC0;
	sub_82424938(ctx, base);
	// lwz r10,-31256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31256);
loc_82424DC4:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-31248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31248);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82424de4
	if (ctx.cr6.eq) goto loc_82424DE4;
	// bl 0x82313178
	ctx.lr = 0x82424DD8;
	sub_82313178(ctx, base);
	// lwz r11,-31248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31248);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82424dec
	goto loc_82424DEC;
loc_82424DE4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82424DEC:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82424e1c
	if (!ctx.cr6.eq) goto loc_82424E1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82424E0C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82424E14;
	sub_822AADA8(ctx, base);
	// lwz r11,-31248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31248);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82424E1C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82424e48
	if (!ctx.cr6.eq) goto loc_82424E48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82424E38;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82424E40;
	sub_82398640(ctx, base);
	// lwz r11,-31248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31248);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82424E48:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82424e80
	if (ctx.cr6.eq) goto loc_82424E80;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82424E64;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82424e80
	if (!ctx.cr6.eq) goto loc_82424E80;
	// lwz r3,-31248(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31248);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82424E80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82424E80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82424E88"))) PPC_WEAK_FUNC(sub_82424E88);
PPC_FUNC_IMPL(__imp__sub_82424E88) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82424E90"))) PPC_WEAK_FUNC(sub_82424E90);
PPC_FUNC_IMPL(__imp__sub_82424E90) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-31256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31256);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82424ed4
	if (!ctx.cr6.eq) goto loc_82424ED4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82424878
	ctx.lr = 0x82424EC8;
	sub_82424878(ctx, base);
	// stw r3,-31256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31256, ctx.r3.u32);
	// bl 0x82424938
	ctx.lr = 0x82424ED0;
	sub_82424938(ctx, base);
	// lwz r11,-31256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31256);
loc_82424ED4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82424EFC"))) PPC_WEAK_FUNC(sub_82424EFC);
PPC_FUNC_IMPL(__imp__sub_82424EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82424F00"))) PPC_WEAK_FUNC(sub_82424F00);
PPC_FUNC_IMPL(__imp__sub_82424F00) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82424F1C;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82424fa4
	if (ctx.cr6.eq) goto loc_82424FA4;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32190
	ctx.r31.s64 = -2109603840;
	// addi r11,r7,19412
	ctx.r11.s64 = ctx.r7.s64 + 19412;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,27024
	ctx.r5.s64 = ctx.r31.s64 + 27024;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82424F90;
	sub_82398460(ctx, base);
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
loc_82424FA4:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82424FBC"))) PPC_WEAK_FUNC(sub_82424FBC);
PPC_FUNC_IMPL(__imp__sub_82424FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82424FC0"))) PPC_WEAK_FUNC(sub_82424FC0);
PPC_FUNC_IMPL(__imp__sub_82424FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82424FC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-31256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31256);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82424ff4
	if (!ctx.cr6.eq) goto loc_82424FF4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82424878
	ctx.lr = 0x82424FE8;
	sub_82424878(ctx, base);
	// stw r3,-31256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31256, ctx.r3.u32);
	// bl 0x82424938
	ctx.lr = 0x82424FF0;
	sub_82424938(ctx, base);
	// lwz r10,-31256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31256);
loc_82424FF4:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-31244(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31244);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82425014
	if (ctx.cr6.eq) goto loc_82425014;
	// bl 0x82313178
	ctx.lr = 0x82425008;
	sub_82313178(ctx, base);
	// lwz r11,-31244(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31244);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8242501c
	goto loc_8242501C;
loc_82425014:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8242501C:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8242504c
	if (!ctx.cr6.eq) goto loc_8242504C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x8242503C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82425044;
	sub_822AADA8(ctx, base);
	// lwz r11,-31244(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31244);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_8242504C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82425078
	if (!ctx.cr6.eq) goto loc_82425078;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82425068;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82425070;
	sub_82398640(ctx, base);
	// lwz r11,-31244(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31244);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82425078:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824250b0
	if (ctx.cr6.eq) goto loc_824250B0;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82425094;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824250b0
	if (!ctx.cr6.eq) goto loc_824250B0;
	// lwz r3,-31244(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824250B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824250B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824250B8"))) PPC_WEAK_FUNC(sub_824250B8);
PPC_FUNC_IMPL(__imp__sub_824250B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824250C0"))) PPC_WEAK_FUNC(sub_824250C0);
PPC_FUNC_IMPL(__imp__sub_824250C0) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-31256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31256);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82425104
	if (!ctx.cr6.eq) goto loc_82425104;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82424878
	ctx.lr = 0x824250F8;
	sub_82424878(ctx, base);
	// stw r3,-31256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31256, ctx.r3.u32);
	// bl 0x82424938
	ctx.lr = 0x82425100;
	sub_82424938(ctx, base);
	// lwz r11,-31256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31256);
loc_82425104:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8242512C"))) PPC_WEAK_FUNC(sub_8242512C);
PPC_FUNC_IMPL(__imp__sub_8242512C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82425130"))) PPC_WEAK_FUNC(sub_82425130);
PPC_FUNC_IMPL(__imp__sub_82425130) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82425138"))) PPC_WEAK_FUNC(sub_82425138);
PPC_FUNC_IMPL(__imp__sub_82425138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82425158
	if (ctx.cr6.eq) goto loc_82425158;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82425158:
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82425164"))) PPC_WEAK_FUNC(sub_82425164);
PPC_FUNC_IMPL(__imp__sub_82425164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82425168"))) PPC_WEAK_FUNC(sub_82425168);
PPC_FUNC_IMPL(__imp__sub_82425168) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82425228
	if (!ctx.cr6.gt) goto loc_82425228;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82425228
	if (ctx.cr6.eq) goto loc_82425228;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824251b4
	if (ctx.cr6.eq) goto loc_824251B4;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// b 0x824251d4
	goto loc_824251D4;
loc_824251B4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x824251D0;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_824251D4:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,19464
	ctx.r4.s64 = ctx.r10.s64 + 19464;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e028
	ctx.lr = 0x824251F8;
	sub_8233E028(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82425228
	if (!ctx.cr6.eq) goto loc_82425228;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82425228
	if (!ctx.cr6.eq) goto loc_82425228;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-31264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// bl 0x82420370
	ctx.lr = 0x82425228;
	sub_82420370(ctx, base);
loc_82425228:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229b3f0
	ctx.lr = 0x82425234;
	sub_8229B3F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8242524C"))) PPC_WEAK_FUNC(sub_8242524C);
PPC_FUNC_IMPL(__imp__sub_8242524C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82425250"))) PPC_WEAK_FUNC(sub_82425250);
PPC_FUNC_IMPL(__imp__sub_82425250) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82425288
	if (!ctx.cr6.eq) goto loc_82425288;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82425280
	if (ctx.cr6.eq) goto loc_82425280;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82425288
	if (ctx.cr6.eq) goto loc_82425288;
loc_82425280:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82425288:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82425290"))) PPC_WEAK_FUNC(sub_82425290);
PPC_FUNC_IMPL(__imp__sub_82425290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm r3,r11,4,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242529C"))) PPC_WEAK_FUNC(sub_8242529C);
PPC_FUNC_IMPL(__imp__sub_8242529C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824252A0"))) PPC_WEAK_FUNC(sub_824252A0);
PPC_FUNC_IMPL(__imp__sub_824252A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f5,f8
	ctx.cr6.compare(ctx.f5.f64, ctx.f8.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824252DC"))) PPC_WEAK_FUNC(sub_824252DC);
PPC_FUNC_IMPL(__imp__sub_824252DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824252E0"))) PPC_WEAK_FUNC(sub_824252E0);
PPC_FUNC_IMPL(__imp__sub_824252E0) {
	PPC_FUNC_PROLOGUE();
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82294ac0
	sub_82294AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824252F0"))) PPC_WEAK_FUNC(sub_824252F0);
PPC_FUNC_IMPL(__imp__sub_824252F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x824252F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82425328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x824253e4
	if (ctx.cr6.eq) goto loc_824253E4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82425350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82425380
	if (ctx.cr6.eq) goto loc_82425380;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x8242537C;
	sub_82294520(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82425380:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82425434
	if (!ctx.cr6.gt) goto loc_82425434;
loc_8242538C:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294ac0
	ctx.lr = 0x824253A4;
	sub_82294AC0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824253C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8242538c
	if (ctx.cr6.lt) goto loc_8242538C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_824253E4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824253F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82425434
	if (!ctx.cr6.gt) goto loc_82425434;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82425404:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82425420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82425404
	if (ctx.cr6.lt) goto loc_82425404;
loc_82425434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82425440"))) PPC_WEAK_FUNC(sub_82425440);
PPC_FUNC_IMPL(__imp__sub_82425440) {
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
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82425470;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 * 60;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8242548c
	if (ctx.cr0.eq) goto loc_8242548C;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x8242548C;
	sub_82CB1160(ctx, base);
loc_8242548C:
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

__attribute__((alias("__imp__sub_824254AC"))) PPC_WEAK_FUNC(sub_824254AC);
PPC_FUNC_IMPL(__imp__sub_824254AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824254B0"))) PPC_WEAK_FUNC(sub_824254B0);
PPC_FUNC_IMPL(__imp__sub_824254B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824254e4
	if (!ctx.cr6.gt) goto loc_824254E4;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_824254C8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824254e8
	if (ctx.cr6.eq) goto loc_824254E8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x824254c8
	if (ctx.cr6.lt) goto loc_824254C8;
loc_824254E4:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_824254E8:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824254FC"))) PPC_WEAK_FUNC(sub_824254FC);
PPC_FUNC_IMPL(__imp__sub_824254FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82425500"))) PPC_WEAK_FUNC(sub_82425500);
PPC_FUNC_IMPL(__imp__sub_82425500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82425508;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82425538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x824255f4
	if (ctx.cr6.eq) goto loc_824255F4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82425560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82425590
	if (ctx.cr6.eq) goto loc_82425590;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x8242558C;
	sub_82294520(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82425590:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82425644
	if (!ctx.cr6.gt) goto loc_82425644;
loc_8242559C:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294ac0
	ctx.lr = 0x824255B4;
	sub_82294AC0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824255D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8242559c
	if (ctx.cr6.lt) goto loc_8242559C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_824255F4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82425600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82425644
	if (!ctx.cr6.gt) goto loc_82425644;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82425614:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82425630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82425614
	if (ctx.cr6.lt) goto loc_82425614;
loc_82425644:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82425650"))) PPC_WEAK_FUNC(sub_82425650);
PPC_FUNC_IMPL(__imp__sub_82425650) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82425674"))) PPC_WEAK_FUNC(sub_82425674);
PPC_FUNC_IMPL(__imp__sub_82425674) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82425678"))) PPC_WEAK_FUNC(sub_82425678);
PPC_FUNC_IMPL(__imp__sub_82425678) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x824256A8;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824256c0
	if (ctx.cr0.eq) goto loc_824256C0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824256C0:
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

__attribute__((alias("__imp__sub_824256E0"))) PPC_WEAK_FUNC(sub_824256E0);
PPC_FUNC_IMPL(__imp__sub_824256E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x824256E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8242572c
	if (!ctx.cr6.gt) goto loc_8242572C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8242570C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82425784
	if (ctx.cr6.eq) goto loc_82425784;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8242570c
	if (ctx.cr6.lt) goto loc_8242570C;
loc_8242572C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82425764
	if (!ctx.cr6.gt) goto loc_82425764;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x82425764;
	sub_82294520(ctx, base);
loc_82425764:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242577c
	if (ctx.cr0.eq) goto loc_8242577C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8242577C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_82425784:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242578C"))) PPC_WEAK_FUNC(sub_8242578C);
PPC_FUNC_IMPL(__imp__sub_8242578C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82425790"))) PPC_WEAK_FUNC(sub_82425790);
PPC_FUNC_IMPL(__imp__sub_82425790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82425798;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x824257fc
	if (!ctx.cr6.gt) goto loc_824257FC;
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
loc_824257B8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x824257e8
	if (!ctx.cr6.eq) goto loc_824257E8;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d180
	ctx.lr = 0x824257E0;
	sub_8232D180(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
loc_824257E8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824257b8
	if (ctx.cr6.lt) goto loc_824257B8;
loc_824257FC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242580C"))) PPC_WEAK_FUNC(sub_8242580C);
PPC_FUNC_IMPL(__imp__sub_8242580C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82425810"))) PPC_WEAK_FUNC(sub_82425810);
PPC_FUNC_IMPL(__imp__sub_82425810) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82425840;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82425858
	if (ctx.cr0.eq) goto loc_82425858;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82425858:
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

__attribute__((alias("__imp__sub_82425878"))) PPC_WEAK_FUNC(sub_82425878);
PPC_FUNC_IMPL(__imp__sub_82425878) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82425888"))) PPC_WEAK_FUNC(sub_82425888);
PPC_FUNC_IMPL(__imp__sub_82425888) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x824258B8;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_824258DC"))) PPC_WEAK_FUNC(sub_824258DC);
PPC_FUNC_IMPL(__imp__sub_824258DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824258E0"))) PPC_WEAK_FUNC(sub_824258E0);
PPC_FUNC_IMPL(__imp__sub_824258E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82425904"))) PPC_WEAK_FUNC(sub_82425904);
PPC_FUNC_IMPL(__imp__sub_82425904) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82425908"))) PPC_WEAK_FUNC(sub_82425908);
PPC_FUNC_IMPL(__imp__sub_82425908) {
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

__attribute__((alias("__imp__sub_82425918"))) PPC_WEAK_FUNC(sub_82425918);
PPC_FUNC_IMPL(__imp__sub_82425918) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82425928"))) PPC_WEAK_FUNC(sub_82425928);
PPC_FUNC_IMPL(__imp__sub_82425928) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,-13380
	ctx.r3.s64 = ctx.r10.s64 + -13380;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82425954"))) PPC_WEAK_FUNC(sub_82425954);
PPC_FUNC_IMPL(__imp__sub_82425954) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82425958"))) PPC_WEAK_FUNC(sub_82425958);
PPC_FUNC_IMPL(__imp__sub_82425958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82425960;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r11,-13380
	ctx.r29.s64 = ctx.r11.s64 + -13380;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824259d0
	if (!ctx.cr6.gt) goto loc_824259D0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82425988:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824259c0
	if (!ctx.cr6.eq) goto loc_824259C0;
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
	ctx.lr = 0x824259B4;
	sub_8232D180(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_824259C0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82425988
	if (ctx.cr6.lt) goto loc_82425988;
loc_824259D0:
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824259DC"))) PPC_WEAK_FUNC(sub_824259DC);
PPC_FUNC_IMPL(__imp__sub_824259DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824259E0"))) PPC_WEAK_FUNC(sub_824259E0);
PPC_FUNC_IMPL(__imp__sub_824259E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x824259E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82425a88
	if (!ctx.cr6.gt) goto loc_82425A88;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82425A08:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// xor r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// xor r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// or r6,r3,r10
	ctx.r6.u64 = ctx.r3.u64 | ctx.r10.u64;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82425a74
	if (!ctx.cr6.eq) goto loc_82425A74;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232d180
	ctx.lr = 0x82425A6C;
	sub_8232D180(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
loc_82425A74:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82425a08
	if (ctx.cr6.lt) goto loc_82425A08;
loc_82425A88:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82425A98"))) PPC_WEAK_FUNC(sub_82425A98);
PPC_FUNC_IMPL(__imp__sub_82425A98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82425ABC"))) PPC_WEAK_FUNC(sub_82425ABC);
PPC_FUNC_IMPL(__imp__sub_82425ABC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82425AC0"))) PPC_WEAK_FUNC(sub_82425AC0);
PPC_FUNC_IMPL(__imp__sub_82425AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82425AC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82425b30
	if (!ctx.cr6.gt) goto loc_82425B30;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82425AE8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82425b1c
	if (!ctx.cr6.eq) goto loc_82425B1C;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d180
	ctx.lr = 0x82425B14;
	sub_8232D180(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82425B1C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82425ae8
	if (ctx.cr6.lt) goto loc_82425AE8;
loc_82425B30:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82425B40"))) PPC_WEAK_FUNC(sub_82425B40);
PPC_FUNC_IMPL(__imp__sub_82425B40) {
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
	// bl 0x824260d8
	ctx.lr = 0x82425B50;
	sub_824260D8(ctx, base);
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
}

__attribute__((alias("__imp__sub_82425B64"))) PPC_WEAK_FUNC(sub_82425B64);
PPC_FUNC_IMPL(__imp__sub_82425B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82425B68"))) PPC_WEAK_FUNC(sub_82425B68);
PPC_FUNC_IMPL(__imp__sub_82425B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82425B70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82425bd4
	if (!ctx.cr6.gt) goto loc_82425BD4;
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82425B90:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82425bc0
	if (!ctx.cr6.eq) goto loc_82425BC0;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d180
	ctx.lr = 0x82425BB8;
	sub_8232D180(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
loc_82425BC0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82425b90
	if (ctx.cr6.lt) goto loc_82425B90;
loc_82425BD4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82425BE4"))) PPC_WEAK_FUNC(sub_82425BE4);
PPC_FUNC_IMPL(__imp__sub_82425BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82425BE8"))) PPC_WEAK_FUNC(sub_82425BE8);
PPC_FUNC_IMPL(__imp__sub_82425BE8) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82425C18;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82425c30
	if (ctx.cr0.eq) goto loc_82425C30;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82425C30:
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

__attribute__((alias("__imp__sub_82425C50"))) PPC_WEAK_FUNC(sub_82425C50);
PPC_FUNC_IMPL(__imp__sub_82425C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82425C58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82425cc0
	if (!ctx.cr6.gt) goto loc_82425CC0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82425C78:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82425cac
	if (!ctx.cr6.eq) goto loc_82425CAC;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d180
	ctx.lr = 0x82425CA4;
	sub_8232D180(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82425CAC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82425c78
	if (ctx.cr6.lt) goto loc_82425C78;
loc_82425CC0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82425CD0"))) PPC_WEAK_FUNC(sub_82425CD0);
PPC_FUNC_IMPL(__imp__sub_82425CD0) {
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

__attribute__((alias("__imp__sub_82425CE4"))) PPC_WEAK_FUNC(sub_82425CE4);
PPC_FUNC_IMPL(__imp__sub_82425CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82425CE8"))) PPC_WEAK_FUNC(sub_82425CE8);
PPC_FUNC_IMPL(__imp__sub_82425CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82425CF0;
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
	// beq cr6,0x82425d30
	if (ctx.cr6.eq) goto loc_82425D30;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82425d1c
	if (!ctx.cr6.eq) goto loc_82425D1C;
	// bl 0x822900a0
	ctx.lr = 0x82425D18;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82425D1C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82425D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82425D30:
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

__attribute__((alias("__imp__sub_82425D48"))) PPC_WEAK_FUNC(sub_82425D48);
PPC_FUNC_IMPL(__imp__sub_82425D48) {
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

__attribute__((alias("__imp__sub_82425D58"))) PPC_WEAK_FUNC(sub_82425D58);
PPC_FUNC_IMPL(__imp__sub_82425D58) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82425D68"))) PPC_WEAK_FUNC(sub_82425D68);
PPC_FUNC_IMPL(__imp__sub_82425D68) {
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
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82294520
	ctx.lr = 0x82425D98;
	sub_82294520(ctx, base);
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

__attribute__((alias("__imp__sub_82425DB0"))) PPC_WEAK_FUNC(sub_82425DB0);
PPC_FUNC_IMPL(__imp__sub_82425DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82425DB8;
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
	// beq cr6,0x82425df8
	if (ctx.cr6.eq) goto loc_82425DF8;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82425de4
	if (!ctx.cr6.eq) goto loc_82425DE4;
	// bl 0x822900a0
	ctx.lr = 0x82425DE0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82425DE4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82425DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82425DF8:
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

__attribute__((alias("__imp__sub_82425E10"))) PPC_WEAK_FUNC(sub_82425E10);
PPC_FUNC_IMPL(__imp__sub_82425E10) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82425E28"))) PPC_WEAK_FUNC(sub_82425E28);
PPC_FUNC_IMPL(__imp__sub_82425E28) {
	PPC_FUNC_PROLOGUE();
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,12
	ctx.r5.s64 = 12;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8232fb70
	sub_8232FB70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82425E5C"))) PPC_WEAK_FUNC(sub_82425E5C);
PPC_FUNC_IMPL(__imp__sub_82425E5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82425E60"))) PPC_WEAK_FUNC(sub_82425E60);
PPC_FUNC_IMPL(__imp__sub_82425E60) {
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
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-27760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82425ea0
	if (!ctx.cr6.eq) goto loc_82425EA0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826cf6f8
	ctx.lr = 0x82425E94;
	sub_826CF6F8(ctx, base);
	// stw r3,-27760(r30)
	PPC_STORE_U32(ctx.r30.u32 + -27760, ctx.r3.u32);
	// bl 0x826cf7b8
	ctx.lr = 0x82425E9C;
	sub_826CF7B8(ctx, base);
	// lwz r11,-27760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27760);
loc_82425EA0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82295518
	ctx.lr = 0x82425EB4;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21944
	ctx.r10.s64 = ctx.r11.s64 + -21944;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82425ef4
	if (!ctx.cr6.lt) goto loc_82425EF4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x82425ef4
	if (ctx.cr6.eq) goto loc_82425EF4;
	// bl 0x82425f10
	ctx.lr = 0x82425EF0;
	sub_82425F10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82425EF4:
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

__attribute__((alias("__imp__sub_82425F0C"))) PPC_WEAK_FUNC(sub_82425F0C);
PPC_FUNC_IMPL(__imp__sub_82425F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82425F10"))) PPC_WEAK_FUNC(sub_82425F10);
PPC_FUNC_IMPL(__imp__sub_82425F10) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_82425F30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82295518
	ctx.lr = 0x82425F38;
	sub_82295518(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82425f64
	if (!ctx.cr6.lt) goto loc_82425F64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x82425f30
	if (!ctx.cr6.eq) goto loc_82425F30;
loc_82425F64:
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

__attribute__((alias("__imp__sub_82425F7C"))) PPC_WEAK_FUNC(sub_82425F7C);
PPC_FUNC_IMPL(__imp__sub_82425F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82425F80"))) PPC_WEAK_FUNC(sub_82425F80);
PPC_FUNC_IMPL(__imp__sub_82425F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82425F98"))) PPC_WEAK_FUNC(sub_82425F98);
PPC_FUNC_IMPL(__imp__sub_82425F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82425FB0"))) PPC_WEAK_FUNC(sub_82425FB0);
PPC_FUNC_IMPL(__imp__sub_82425FB0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82425FC0"))) PPC_WEAK_FUNC(sub_82425FC0);
PPC_FUNC_IMPL(__imp__sub_82425FC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82425FD0"))) PPC_WEAK_FUNC(sub_82425FD0);
PPC_FUNC_IMPL(__imp__sub_82425FD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82425ff0
	if (ctx.cr6.lt) goto loc_82425FF0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82425FF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82425FF8"))) PPC_WEAK_FUNC(sub_82425FF8);
PPC_FUNC_IMPL(__imp__sub_82425FF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r9,60
	ctx.r11.s64 = ctx.r9.s64 * 60;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82426010"))) PPC_WEAK_FUNC(sub_82426010);
PPC_FUNC_IMPL(__imp__sub_82426010) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82426038"))) PPC_WEAK_FUNC(sub_82426038);
PPC_FUNC_IMPL(__imp__sub_82426038) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8242606c
	if (!ctx.cr6.gt) goto loc_8242606C;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82426050:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82426074
	if (ctx.cr6.eq) goto loc_82426074;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82426050
	if (ctx.cr6.lt) goto loc_82426050;
loc_8242606C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82426074:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242607C"))) PPC_WEAK_FUNC(sub_8242607C);
PPC_FUNC_IMPL(__imp__sub_8242607C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82426080"))) PPC_WEAK_FUNC(sub_82426080);
PPC_FUNC_IMPL(__imp__sub_82426080) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_824260A8"))) PPC_WEAK_FUNC(sub_824260A8);
PPC_FUNC_IMPL(__imp__sub_824260A8) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824260B8"))) PPC_WEAK_FUNC(sub_824260B8);
PPC_FUNC_IMPL(__imp__sub_824260B8) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824260C8"))) PPC_WEAK_FUNC(sub_824260C8);
PPC_FUNC_IMPL(__imp__sub_824260C8) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824260D8"))) PPC_WEAK_FUNC(sub_824260D8);
PPC_FUNC_IMPL(__imp__sub_824260D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_824260F4:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x824260f4
	if (ctx.cr6.gt) goto loc_824260F4;
	// b 0x82426228
	sub_82426228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82426124"))) PPC_WEAK_FUNC(sub_82426124);
PPC_FUNC_IMPL(__imp__sub_82426124) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82426128"))) PPC_WEAK_FUNC(sub_82426128);
PPC_FUNC_IMPL(__imp__sub_82426128) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824261b4
	if (!ctx.cr6.gt) goto loc_824261B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b1498
	ctx.lr = 0x8242615C;
	sub_822B1498(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 & ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x824261b4
	if (ctx.cr6.eq) goto loc_824261B4;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82426184:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x824261d0
	if (ctx.cr6.eq) goto loc_824261D0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82426184
	if (!ctx.cr6.eq) goto loc_82426184;
loc_824261B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824261B8:
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
loc_824261D0:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82426398
	ctx.lr = 0x824261DC;
	sub_82426398(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824261b8
	goto loc_824261B8;
}

__attribute__((alias("__imp__sub_824261E4"))) PPC_WEAK_FUNC(sub_824261E4);
PPC_FUNC_IMPL(__imp__sub_824261E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824261E8"))) PPC_WEAK_FUNC(sub_824261E8);
PPC_FUNC_IMPL(__imp__sub_824261E8) {
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

__attribute__((alias("__imp__sub_824261F8"))) PPC_WEAK_FUNC(sub_824261F8);
PPC_FUNC_IMPL(__imp__sub_824261F8) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82426208"))) PPC_WEAK_FUNC(sub_82426208);
PPC_FUNC_IMPL(__imp__sub_82426208) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82426218"))) PPC_WEAK_FUNC(sub_82426218);
PPC_FUNC_IMPL(__imp__sub_82426218) {
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

__attribute__((alias("__imp__sub_82426228"))) PPC_WEAK_FUNC(sub_82426228);
PPC_FUNC_IMPL(__imp__sub_82426228) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82294a58
	ctx.lr = 0x82426248;
	sub_82294A58(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82426264
	if (!ctx.cr6.gt) goto loc_82426264;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82426264:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822959a8
	ctx.lr = 0x8242626C;
	sub_822959A8(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824262a4
	if (!ctx.cr6.gt) goto loc_824262A4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82426288:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82426288
	if (ctx.cr6.lt) goto loc_82426288;
loc_824262A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82426380
	if (!ctx.cr6.gt) goto loc_82426380;
	// lis r11,-25033
	ctx.r11.s64 = -1640562688;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r6,r11,31161
	ctx.r6.u64 = ctx.r11.u64 | 31161;
loc_824262C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r3,r11,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r11.s64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r30,r10,19,13,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r30,r3,20,12,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xFFFFF;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r30,r11,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// xor r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// subf r3,r10,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rlwinm r30,r10,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r30,r3,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r30,r11,10,0,21
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// xor r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// subf r3,r10,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rlwinm r10,r10,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// xor r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r9,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824262c0
	if (ctx.cr6.lt) goto loc_824262C0;
loc_82426380:
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

__attribute__((alias("__imp__sub_82426398"))) PPC_WEAK_FUNC(sub_82426398);
PPC_FUNC_IMPL(__imp__sub_82426398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x824263A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// bl 0x8232d230
	ctx.lr = 0x824263C4;
	sub_8232D230(ctx, base);
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82426430
	if (ctx.cr6.eq) goto loc_82426430;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x822b1498
	ctx.lr = 0x824263EC;
	sub_822B1498(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 & ctx.r9.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8242642c
	if (ctx.cr6.eq) goto loc_8242642C;
loc_82426410:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82426410
	if (!ctx.cr6.eq) goto loc_82426410;
loc_8242642C:
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
loc_82426430:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82426438"))) PPC_WEAK_FUNC(sub_82426438);
PPC_FUNC_IMPL(__imp__sub_82426438) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82426450"))) PPC_WEAK_FUNC(sub_82426450);
PPC_FUNC_IMPL(__imp__sub_82426450) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d230
	sub_8232D230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82426460"))) PPC_WEAK_FUNC(sub_82426460);
PPC_FUNC_IMPL(__imp__sub_82426460) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82396ef8
	sub_82396EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82426468"))) PPC_WEAK_FUNC(sub_82426468);
PPC_FUNC_IMPL(__imp__sub_82426468) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242646C"))) PPC_WEAK_FUNC(sub_8242646C);
PPC_FUNC_IMPL(__imp__sub_8242646C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82426470"))) PPC_WEAK_FUNC(sub_82426470);
PPC_FUNC_IMPL(__imp__sub_82426470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lis r4,-31884
	ctx.r4.s64 = -2089549824;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,25104(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25104);
	// b 0x822a93e8
	sub_822A93E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82426494"))) PPC_WEAK_FUNC(sub_82426494);
PPC_FUNC_IMPL(__imp__sub_82426494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82426498"))) PPC_WEAK_FUNC(sub_82426498);
PPC_FUNC_IMPL(__imp__sub_82426498) {
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
	// beq cr6,0x82426500
	if (ctx.cr6.eq) goto loc_82426500;
	// bl 0x82314b18
	ctx.lr = 0x824264B8;
	sub_82314B18(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824264d8
	if (ctx.cr6.eq) goto loc_824264D8;
loc_824264C4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x824264e8
	if (ctx.cr6.eq) goto loc_824264E8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824264c4
	if (!ctx.cr6.eq) goto loc_824264C4;
loc_824264D8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82426500
	if (ctx.cr6.eq) goto loc_82426500;
loc_824264E8:
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
loc_82426500:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82426518"))) PPC_WEAK_FUNC(sub_82426518);
PPC_FUNC_IMPL(__imp__sub_82426518) {
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
	// beq cr6,0x82426580
	if (ctx.cr6.eq) goto loc_82426580;
	// bl 0x82315108
	ctx.lr = 0x82426538;
	sub_82315108(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82426558
	if (ctx.cr6.eq) goto loc_82426558;
loc_82426544:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82426568
	if (ctx.cr6.eq) goto loc_82426568;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82426544
	if (!ctx.cr6.eq) goto loc_82426544;
loc_82426558:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82426580
	if (ctx.cr6.eq) goto loc_82426580;
loc_82426568:
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
loc_82426580:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82426598"))) PPC_WEAK_FUNC(sub_82426598);
PPC_FUNC_IMPL(__imp__sub_82426598) {
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
	// beq cr6,0x82426600
	if (ctx.cr6.eq) goto loc_82426600;
	// bl 0x823129f8
	ctx.lr = 0x824265B8;
	sub_823129F8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824265d8
	if (ctx.cr6.eq) goto loc_824265D8;
loc_824265C4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x824265e8
	if (ctx.cr6.eq) goto loc_824265E8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824265c4
	if (!ctx.cr6.eq) goto loc_824265C4;
loc_824265D8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82426600
	if (ctx.cr6.eq) goto loc_82426600;
loc_824265E8:
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
loc_82426600:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82426618"))) PPC_WEAK_FUNC(sub_82426618);
PPC_FUNC_IMPL(__imp__sub_82426618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242661C"))) PPC_WEAK_FUNC(sub_8242661C);
PPC_FUNC_IMPL(__imp__sub_8242661C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82426620"))) PPC_WEAK_FUNC(sub_82426620);
PPC_FUNC_IMPL(__imp__sub_82426620) {
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
	// beq cr6,0x82426688
	if (ctx.cr6.eq) goto loc_82426688;
	// bl 0x82313808
	ctx.lr = 0x82426640;
	sub_82313808(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82426660
	if (ctx.cr6.eq) goto loc_82426660;
loc_8242664C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82426670
	if (ctx.cr6.eq) goto loc_82426670;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242664c
	if (!ctx.cr6.eq) goto loc_8242664C;
loc_82426660:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82426688
	if (ctx.cr6.eq) goto loc_82426688;
loc_82426670:
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
loc_82426688:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_824266A0"))) PPC_WEAK_FUNC(sub_824266A0);
PPC_FUNC_IMPL(__imp__sub_824266A0) {
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
	// beq cr6,0x82426708
	if (ctx.cr6.eq) goto loc_82426708;
	// bl 0x82313218
	ctx.lr = 0x824266C0;
	sub_82313218(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824266e0
	if (ctx.cr6.eq) goto loc_824266E0;
loc_824266CC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x824266f0
	if (ctx.cr6.eq) goto loc_824266F0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824266cc
	if (!ctx.cr6.eq) goto loc_824266CC;
loc_824266E0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82426708
	if (ctx.cr6.eq) goto loc_82426708;
loc_824266F0:
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
loc_82426708:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82426720"))) PPC_WEAK_FUNC(sub_82426720);
PPC_FUNC_IMPL(__imp__sub_82426720) {
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
	// beq cr6,0x82426788
	if (ctx.cr6.eq) goto loc_82426788;
	// bl 0x82313088
	ctx.lr = 0x82426740;
	sub_82313088(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82426760
	if (ctx.cr6.eq) goto loc_82426760;
loc_8242674C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82426770
	if (ctx.cr6.eq) goto loc_82426770;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242674c
	if (!ctx.cr6.eq) goto loc_8242674C;
loc_82426760:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82426788
	if (ctx.cr6.eq) goto loc_82426788;
loc_82426770:
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
loc_82426788:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_824267A0"))) PPC_WEAK_FUNC(sub_824267A0);
PPC_FUNC_IMPL(__imp__sub_824267A0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r11,11272
	ctx.r6.s64 = ctx.r11.s64 + 11272;
	// addi r4,r10,18300
	ctx.r4.s64 = ctx.r10.s64 + 18300;
	// bl 0x8232d178
	ctx.lr = 0x824267C0;
	sub_8232D178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824267D0"))) PPC_WEAK_FUNC(sub_824267D0);
PPC_FUNC_IMPL(__imp__sub_824267D0) {
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
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x824267FC;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 * 60;
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

__attribute__((alias("__imp__sub_8242681C"))) PPC_WEAK_FUNC(sub_8242681C);
PPC_FUNC_IMPL(__imp__sub_8242681C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82426820"))) PPC_WEAK_FUNC(sub_82426820);
PPC_FUNC_IMPL(__imp__sub_82426820) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8242684C;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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

__attribute__((alias("__imp__sub_8242686C"))) PPC_WEAK_FUNC(sub_8242686C);
PPC_FUNC_IMPL(__imp__sub_8242686C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82426870"))) PPC_WEAK_FUNC(sub_82426870);
PPC_FUNC_IMPL(__imp__sub_82426870) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8242689C;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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

__attribute__((alias("__imp__sub_824268BC"))) PPC_WEAK_FUNC(sub_824268BC);
PPC_FUNC_IMPL(__imp__sub_824268BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824268C0"))) PPC_WEAK_FUNC(sub_824268C0);
PPC_FUNC_IMPL(__imp__sub_824268C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824268C4"))) PPC_WEAK_FUNC(sub_824268C4);
PPC_FUNC_IMPL(__imp__sub_824268C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824268C8"))) PPC_WEAK_FUNC(sub_824268C8);
PPC_FUNC_IMPL(__imp__sub_824268C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824268D0"))) PPC_WEAK_FUNC(sub_824268D0);
PPC_FUNC_IMPL(__imp__sub_824268D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824268D4"))) PPC_WEAK_FUNC(sub_824268D4);
PPC_FUNC_IMPL(__imp__sub_824268D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824268D8"))) PPC_WEAK_FUNC(sub_824268D8);
PPC_FUNC_IMPL(__imp__sub_824268D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824268E0"))) PPC_WEAK_FUNC(sub_824268E0);
PPC_FUNC_IMPL(__imp__sub_824268E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824268E8"))) PPC_WEAK_FUNC(sub_824268E8);
PPC_FUNC_IMPL(__imp__sub_824268E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824268EC"))) PPC_WEAK_FUNC(sub_824268EC);
PPC_FUNC_IMPL(__imp__sub_824268EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824268F0"))) PPC_WEAK_FUNC(sub_824268F0);
PPC_FUNC_IMPL(__imp__sub_824268F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824268F8"))) PPC_WEAK_FUNC(sub_824268F8);
PPC_FUNC_IMPL(__imp__sub_824268F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824268FC"))) PPC_WEAK_FUNC(sub_824268FC);
PPC_FUNC_IMPL(__imp__sub_824268FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82426900"))) PPC_WEAK_FUNC(sub_82426900);
PPC_FUNC_IMPL(__imp__sub_82426900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r9,r4,r6
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x8232fb70
	sub_8232FB70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242691C"))) PPC_WEAK_FUNC(sub_8242691C);
PPC_FUNC_IMPL(__imp__sub_8242691C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82426920"))) PPC_WEAK_FUNC(sub_82426920);
PPC_FUNC_IMPL(__imp__sub_82426920) {
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

__attribute__((alias("__imp__sub_82426930"))) PPC_WEAK_FUNC(sub_82426930);
PPC_FUNC_IMPL(__imp__sub_82426930) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8242695C;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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

__attribute__((alias("__imp__sub_8242697C"))) PPC_WEAK_FUNC(sub_8242697C);
PPC_FUNC_IMPL(__imp__sub_8242697C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82426980"))) PPC_WEAK_FUNC(sub_82426980);
PPC_FUNC_IMPL(__imp__sub_82426980) {
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

__attribute__((alias("__imp__sub_82426990"))) PPC_WEAK_FUNC(sub_82426990);
PPC_FUNC_IMPL(__imp__sub_82426990) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,20640
	ctx.r8.s64 = ctx.r9.s64 + 20640;
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

__attribute__((alias("__imp__sub_824269B8"))) PPC_WEAK_FUNC(sub_824269B8);
PPC_FUNC_IMPL(__imp__sub_824269B8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824269C0"))) PPC_WEAK_FUNC(sub_824269C0);
PPC_FUNC_IMPL(__imp__sub_824269C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,20640
	ctx.r8.s64 = ctx.r9.s64 + 20640;
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

__attribute__((alias("__imp__sub_824269E0"))) PPC_WEAK_FUNC(sub_824269E0);
PPC_FUNC_IMPL(__imp__sub_824269E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,19824
	ctx.r8.s64 = ctx.r9.s64 + 19824;
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

__attribute__((alias("__imp__sub_82426A00"))) PPC_WEAK_FUNC(sub_82426A00);
PPC_FUNC_IMPL(__imp__sub_82426A00) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,19824
	ctx.r10.s64 = ctx.r11.s64 + 19824;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82426A2C;
	sub_8229C068(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82426aa0
	ctx.lr = 0x82426A34;
	sub_82426AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x82426A3C;
	sub_8229C628(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82426a70
	if (ctx.cr6.eq) goto loc_82426A70;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82426a68
	if (ctx.cr6.lt) goto loc_82426A68;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82426a70
	if (!ctx.cr6.gt) goto loc_82426A70;
loc_82426A68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82426A70;
	sub_82294A58(ctx, base);
loc_82426A70:
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

__attribute__((alias("__imp__sub_82426A8C"))) PPC_WEAK_FUNC(sub_82426A8C);
PPC_FUNC_IMPL(__imp__sub_82426A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82426A90"))) PPC_WEAK_FUNC(sub_82426A90);
PPC_FUNC_IMPL(__imp__sub_82426A90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82426A94"))) PPC_WEAK_FUNC(sub_82426A94);
PPC_FUNC_IMPL(__imp__sub_82426A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82426A98"))) PPC_WEAK_FUNC(sub_82426A98);
PPC_FUNC_IMPL(__imp__sub_82426A98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82426A9C"))) PPC_WEAK_FUNC(sub_82426A9C);
PPC_FUNC_IMPL(__imp__sub_82426A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82426AA0"))) PPC_WEAK_FUNC(sub_82426AA0);
PPC_FUNC_IMPL(__imp__sub_82426AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82426AA8;
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
	// beq cr6,0x82426ae8
	if (ctx.cr6.eq) goto loc_82426AE8;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82426ad4
	if (!ctx.cr6.eq) goto loc_82426AD4;
	// bl 0x822900a0
	ctx.lr = 0x82426AD0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82426AD4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82426AE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82426AE8:
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

__attribute__((alias("__imp__sub_82426B00"))) PPC_WEAK_FUNC(sub_82426B00);
PPC_FUNC_IMPL(__imp__sub_82426B00) {
	PPC_FUNC_PROLOGUE();
	// b 0x82426aa0
	sub_82426AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82426B04"))) PPC_WEAK_FUNC(sub_82426B04);
PPC_FUNC_IMPL(__imp__sub_82426B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82426B08"))) PPC_WEAK_FUNC(sub_82426B08);
PPC_FUNC_IMPL(__imp__sub_82426B08) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,19824
	ctx.r10.s64 = ctx.r11.s64 + 19824;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82426B2C;
	sub_8229C068(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82426aa0
	ctx.lr = 0x82426B34;
	sub_82426AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x82426B3C;
	sub_8229C628(ctx, base);
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

__attribute__((alias("__imp__sub_82426B50"))) PPC_WEAK_FUNC(sub_82426B50);
PPC_FUNC_IMPL(__imp__sub_82426B50) {
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
	// bl 0x82426bc0
	ctx.lr = 0x82426B70;
	sub_82426BC0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82426ba4
	if (ctx.cr6.eq) goto loc_82426BA4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82426b9c
	if (ctx.cr6.lt) goto loc_82426B9C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82426ba4
	if (!ctx.cr6.gt) goto loc_82426BA4;
loc_82426B9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82426BA4;
	sub_82294A58(ctx, base);
loc_82426BA4:
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

__attribute__((alias("__imp__sub_82426BC0"))) PPC_WEAK_FUNC(sub_82426BC0);
PPC_FUNC_IMPL(__imp__sub_82426BC0) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,20640
	ctx.r10.s64 = ctx.r11.s64 + 20640;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82426BE4;
	sub_8229C068(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,19824
	ctx.r8.s64 = ctx.r9.s64 + 19824;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82426BF8;
	sub_8229C068(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82426aa0
	ctx.lr = 0x82426C00;
	sub_82426AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x82426C08;
	sub_8229C628(ctx, base);
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

__attribute__((alias("__imp__sub_82426C1C"))) PPC_WEAK_FUNC(sub_82426C1C);
PPC_FUNC_IMPL(__imp__sub_82426C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82426C20"))) PPC_WEAK_FUNC(sub_82426C20);
PPC_FUNC_IMPL(__imp__sub_82426C20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82426C28"))) PPC_WEAK_FUNC(sub_82426C28);
PPC_FUNC_IMPL(__imp__sub_82426C28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

