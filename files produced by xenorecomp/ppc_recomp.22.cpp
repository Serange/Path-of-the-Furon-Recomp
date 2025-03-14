#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8230F688"))) PPC_WEAK_FUNC(sub_8230F688);
PPC_FUNC_IMPL(__imp__sub_8230F688) {
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

__attribute__((alias("__imp__sub_8230F698"))) PPC_WEAK_FUNC(sub_8230F698);
PPC_FUNC_IMPL(__imp__sub_8230F698) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r11,740
	ctx.r3.s64 = ctx.r11.s64 + 740;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F6BC"))) PPC_WEAK_FUNC(sub_8230F6BC);
PPC_FUNC_IMPL(__imp__sub_8230F6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F6C0"))) PPC_WEAK_FUNC(sub_8230F6C0);
PPC_FUNC_IMPL(__imp__sub_8230F6C0) {
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

__attribute__((alias("__imp__sub_8230F6D0"))) PPC_WEAK_FUNC(sub_8230F6D0);
PPC_FUNC_IMPL(__imp__sub_8230F6D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230f704
	if (ctx.cr6.eq) goto loc_8230F704;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8230f704
	if (ctx.cr6.lt) goto loc_8230F704;
	// lwz r9,744(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 744);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8230f704
	if (!ctx.cr6.lt) goto loc_8230F704;
	// lwz r10,740(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 740);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_8230F704:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F70C"))) PPC_WEAK_FUNC(sub_8230F70C);
PPC_FUNC_IMPL(__imp__sub_8230F70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F710"))) PPC_WEAK_FUNC(sub_8230F710);
PPC_FUNC_IMPL(__imp__sub_8230F710) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230f738
	if (ctx.cr6.eq) goto loc_8230F738;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8230f738
	if (ctx.cr6.lt) goto loc_8230F738;
	// lwz r10,744(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 744);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8230F738:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F740"))) PPC_WEAK_FUNC(sub_8230F740);
PPC_FUNC_IMPL(__imp__sub_8230F740) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8230F750:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r9,744(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 744);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r9,740(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 740);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8230f750
	if (ctx.cr6.eq) goto loc_8230F750;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F784"))) PPC_WEAK_FUNC(sub_8230F784);
PPC_FUNC_IMPL(__imp__sub_8230F784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F788"))) PPC_WEAK_FUNC(sub_8230F788);
PPC_FUNC_IMPL(__imp__sub_8230F788) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8230F79C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r10,744(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 744);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,740(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 740);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8230f79c
	if (ctx.cr6.eq) goto loc_8230F79C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F7D0"))) PPC_WEAK_FUNC(sub_8230F7D0);
PPC_FUNC_IMPL(__imp__sub_8230F7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// stw r3,-3740(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3740, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F7DC"))) PPC_WEAK_FUNC(sub_8230F7DC);
PPC_FUNC_IMPL(__imp__sub_8230F7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F7E0"))) PPC_WEAK_FUNC(sub_8230F7E0);
PPC_FUNC_IMPL(__imp__sub_8230F7E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cb22d8
	sub_82CB22D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F7E4"))) PPC_WEAK_FUNC(sub_8230F7E4);
PPC_FUNC_IMPL(__imp__sub_8230F7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F7E8"))) PPC_WEAK_FUNC(sub_8230F7E8);
PPC_FUNC_IMPL(__imp__sub_8230F7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8230F7F0;
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
	// beq cr6,0x8230f830
	if (ctx.cr6.eq) goto loc_8230F830;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230f81c
	if (!ctx.cr6.eq) goto loc_8230F81C;
	// bl 0x822900a0
	ctx.lr = 0x8230F818;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230F81C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230F830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230F830:
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

__attribute__((alias("__imp__sub_8230F848"))) PPC_WEAK_FUNC(sub_8230F848);
PPC_FUNC_IMPL(__imp__sub_8230F848) {
	PPC_FUNC_PROLOGUE();
	// b 0x8230f1c8
	sub_8230F1C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F84C"))) PPC_WEAK_FUNC(sub_8230F84C);
PPC_FUNC_IMPL(__imp__sub_8230F84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F850"))) PPC_WEAK_FUNC(sub_8230F850);
PPC_FUNC_IMPL(__imp__sub_8230F850) {
	PPC_FUNC_PROLOGUE();
	// b 0x8232cb60
	sub_8232CB60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F854"))) PPC_WEAK_FUNC(sub_8230F854);
PPC_FUNC_IMPL(__imp__sub_8230F854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F858"))) PPC_WEAK_FUNC(sub_8230F858);
PPC_FUNC_IMPL(__imp__sub_8230F858) {
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
	// bl 0x8230f8c8
	ctx.lr = 0x8230F878;
	sub_8230F8C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230f8ac
	if (ctx.cr6.eq) goto loc_8230F8AC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8230f8a4
	if (ctx.cr6.lt) goto loc_8230F8A4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8230f8ac
	if (!ctx.cr6.gt) goto loc_8230F8AC;
loc_8230F8A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8230F8AC;
	sub_82294A58(ctx, base);
loc_8230F8AC:
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

__attribute__((alias("__imp__sub_8230F8C8"))) PPC_WEAK_FUNC(sub_8230F8C8);
PPC_FUNC_IMPL(__imp__sub_8230F8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8230F8D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r11,-14936
	ctx.r9.s64 = ctx.r11.s64 + -14936;
	// addi r8,r10,-14584
	ctx.r8.s64 = ctx.r10.s64 + -14584;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8230F8F4;
	sub_8229C068(ctx, base);
	// lwz r7,916(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 916);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,908
	ctx.r29.s64 = ctx.r30.s64 + 908;
	// stw r31,912(r30)
	PPC_STORE_U32(ctx.r30.u32 + 912, ctx.r31.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8230f920
	if (ctx.cr6.eq) goto loc_8230F920;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230F920;
	sub_82294520(ctx, base);
loc_8230F920:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230F928;
	sub_82294CC8(ctx, base);
	// lwz r11,868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 868);
	// addi r29,r30,860
	ctx.r29.s64 = ctx.r30.s64 + 860;
	// stw r31,864(r30)
	PPC_STORE_U32(ctx.r30.u32 + 864, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230f950
	if (ctx.cr6.eq) goto loc_8230F950;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230F950;
	sub_82294520(ctx, base);
loc_8230F950:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230F958;
	sub_82294CC8(ctx, base);
	// lwz r11,852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// addi r29,r30,844
	ctx.r29.s64 = ctx.r30.s64 + 844;
	// stw r31,848(r30)
	PPC_STORE_U32(ctx.r30.u32 + 848, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230f980
	if (ctx.cr6.eq) goto loc_8230F980;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230F980;
	sub_82294520(ctx, base);
loc_8230F980:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230F988;
	sub_82294CC8(ctx, base);
	// addi r3,r30,756
	ctx.r3.s64 = ctx.r30.s64 + 756;
	// bl 0x82295e20
	ctx.lr = 0x8230F990;
	sub_82295E20(ctx, base);
	// addi r3,r30,740
	ctx.r3.s64 = ctx.r30.s64 + 740;
	// bl 0x8230f7e8
	ctx.lr = 0x8230F998;
	sub_8230F7E8(ctx, base);
	// lwz r11,728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 728);
	// addi r29,r30,720
	ctx.r29.s64 = ctx.r30.s64 + 720;
	// stw r31,724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 724, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230f9c0
	if (ctx.cr6.eq) goto loc_8230F9C0;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230F9C0;
	sub_82294520(ctx, base);
loc_8230F9C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230F9C8;
	sub_82294CC8(ctx, base);
	// lwz r11,712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// addi r29,r30,704
	ctx.r29.s64 = ctx.r30.s64 + 704;
	// stw r31,708(r30)
	PPC_STORE_U32(ctx.r30.u32 + 708, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230f9f0
	if (ctx.cr6.eq) goto loc_8230F9F0;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230F9F0;
	sub_82294520(ctx, base);
loc_8230F9F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230F9F8;
	sub_82294CC8(ctx, base);
	// lwz r11,696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	// addi r29,r30,688
	ctx.r29.s64 = ctx.r30.s64 + 688;
	// stw r31,692(r30)
	PPC_STORE_U32(ctx.r30.u32 + 692, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fa20
	if (ctx.cr6.eq) goto loc_8230FA20;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FA20;
	sub_82294520(ctx, base);
loc_8230FA20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FA28;
	sub_82294CC8(ctx, base);
	// lwz r11,680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	// addi r29,r30,672
	ctx.r29.s64 = ctx.r30.s64 + 672;
	// stw r31,676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 676, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fa50
	if (ctx.cr6.eq) goto loc_8230FA50;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FA50;
	sub_82294520(ctx, base);
loc_8230FA50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FA58;
	sub_82294CC8(ctx, base);
	// lwz r11,664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// addi r29,r30,656
	ctx.r29.s64 = ctx.r30.s64 + 656;
	// stw r31,660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 660, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fa80
	if (ctx.cr6.eq) goto loc_8230FA80;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FA80;
	sub_82294520(ctx, base);
loc_8230FA80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FA88;
	sub_82294CC8(ctx, base);
	// lwz r11,648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 648);
	// addi r29,r30,640
	ctx.r29.s64 = ctx.r30.s64 + 640;
	// stw r31,644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 644, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fab0
	if (ctx.cr6.eq) goto loc_8230FAB0;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FAB0;
	sub_82294520(ctx, base);
loc_8230FAB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FAB8;
	sub_82294CC8(ctx, base);
	// lwz r11,632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 632);
	// addi r29,r30,624
	ctx.r29.s64 = ctx.r30.s64 + 624;
	// stw r31,628(r30)
	PPC_STORE_U32(ctx.r30.u32 + 628, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fae0
	if (ctx.cr6.eq) goto loc_8230FAE0;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FAE0;
	sub_82294520(ctx, base);
loc_8230FAE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FAE8;
	sub_82294CC8(ctx, base);
	// lwz r11,616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 616);
	// addi r29,r30,608
	ctx.r29.s64 = ctx.r30.s64 + 608;
	// stw r31,612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 612, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fb10
	if (ctx.cr6.eq) goto loc_8230FB10;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FB10;
	sub_82294520(ctx, base);
loc_8230FB10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FB18;
	sub_82294CC8(ctx, base);
	// lwz r11,600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 600);
	// addi r29,r30,592
	ctx.r29.s64 = ctx.r30.s64 + 592;
	// stw r31,596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 596, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fb40
	if (ctx.cr6.eq) goto loc_8230FB40;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FB40;
	sub_82294520(ctx, base);
loc_8230FB40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FB48;
	sub_82294CC8(ctx, base);
	// lwz r11,584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	// addi r29,r30,576
	ctx.r29.s64 = ctx.r30.s64 + 576;
	// stw r31,580(r30)
	PPC_STORE_U32(ctx.r30.u32 + 580, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fb70
	if (ctx.cr6.eq) goto loc_8230FB70;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FB70;
	sub_82294520(ctx, base);
loc_8230FB70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FB78;
	sub_82294CC8(ctx, base);
	// lwz r11,564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// addi r29,r30,556
	ctx.r29.s64 = ctx.r30.s64 + 556;
	// stw r31,560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 560, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fba0
	if (ctx.cr6.eq) goto loc_8230FBA0;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FBA0;
	sub_82294520(ctx, base);
loc_8230FBA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FBA8;
	sub_82294CC8(ctx, base);
	// lwz r11,548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	// addi r29,r30,540
	ctx.r29.s64 = ctx.r30.s64 + 540;
	// stw r31,544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 544, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fbd0
	if (ctx.cr6.eq) goto loc_8230FBD0;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FBD0;
	sub_82294520(ctx, base);
loc_8230FBD0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FBD8;
	sub_82294CC8(ctx, base);
	// lwz r11,532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// addi r29,r30,524
	ctx.r29.s64 = ctx.r30.s64 + 524;
	// stw r31,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fc00
	if (ctx.cr6.eq) goto loc_8230FC00;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FC00;
	sub_82294520(ctx, base);
loc_8230FC00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FC08;
	sub_82294CC8(ctx, base);
	// addi r3,r30,484
	ctx.r3.s64 = ctx.r30.s64 + 484;
	// bl 0x8230f1c8
	ctx.lr = 0x8230FC10;
	sub_8230F1C8(ctx, base);
	// addi r3,r30,472
	ctx.r3.s64 = ctx.r30.s64 + 472;
	// bl 0x8230f1c8
	ctx.lr = 0x8230FC18;
	sub_8230F1C8(ctx, base);
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// addi r29,r30,460
	ctx.r29.s64 = ctx.r30.s64 + 460;
	// stw r31,464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 464, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fc40
	if (ctx.cr6.eq) goto loc_8230FC40;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FC40;
	sub_82294520(ctx, base);
loc_8230FC40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FC48;
	sub_82294CC8(ctx, base);
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// addi r29,r30,444
	ctx.r29.s64 = ctx.r30.s64 + 444;
	// stw r31,448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 448, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fc70
	if (ctx.cr6.eq) goto loc_8230FC70;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FC70;
	sub_82294520(ctx, base);
loc_8230FC70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FC78;
	sub_82294CC8(ctx, base);
	// lwz r11,436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// addi r29,r30,428
	ctx.r29.s64 = ctx.r30.s64 + 428;
	// stw r31,432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 432, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fca0
	if (ctx.cr6.eq) goto loc_8230FCA0;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FCA0;
	sub_82294520(ctx, base);
loc_8230FCA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FCA8;
	sub_82294CC8(ctx, base);
	// lwz r11,420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// addi r29,r30,412
	ctx.r29.s64 = ctx.r30.s64 + 412;
	// stw r31,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fcd0
	if (ctx.cr6.eq) goto loc_8230FCD0;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FCD0;
	sub_82294520(ctx, base);
loc_8230FCD0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FCD8;
	sub_82294CC8(ctx, base);
	// lwz r11,404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// addi r29,r30,396
	ctx.r29.s64 = ctx.r30.s64 + 396;
	// stw r31,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fd00
	if (ctx.cr6.eq) goto loc_8230FD00;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FD00;
	sub_82294520(ctx, base);
loc_8230FD00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FD08;
	sub_82294CC8(ctx, base);
	// lwz r11,388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// addi r29,r30,380
	ctx.r29.s64 = ctx.r30.s64 + 380;
	// stw r31,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fd30
	if (ctx.cr6.eq) goto loc_8230FD30;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FD30;
	sub_82294520(ctx, base);
loc_8230FD30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FD38;
	sub_82294CC8(ctx, base);
	// lwz r11,372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// addi r29,r30,364
	ctx.r29.s64 = ctx.r30.s64 + 364;
	// stw r31,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fd60
	if (ctx.cr6.eq) goto loc_8230FD60;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FD60;
	sub_82294520(ctx, base);
loc_8230FD60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FD68;
	sub_82294CC8(ctx, base);
	// lwz r11,356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// addi r29,r30,348
	ctx.r29.s64 = ctx.r30.s64 + 348;
	// stw r31,352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 352, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fd90
	if (ctx.cr6.eq) goto loc_8230FD90;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FD90;
	sub_82294520(ctx, base);
loc_8230FD90:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FD98;
	sub_82294CC8(ctx, base);
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// addi r29,r30,332
	ctx.r29.s64 = ctx.r30.s64 + 332;
	// stw r31,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fdc0
	if (ctx.cr6.eq) goto loc_8230FDC0;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FDC0;
	sub_82294520(ctx, base);
loc_8230FDC0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FDC8;
	sub_82294CC8(ctx, base);
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// addi r29,r30,316
	ctx.r29.s64 = ctx.r30.s64 + 316;
	// stw r31,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fdf0
	if (ctx.cr6.eq) goto loc_8230FDF0;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FDF0;
	sub_82294520(ctx, base);
loc_8230FDF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FDF8;
	sub_82294CC8(ctx, base);
	// lwz r11,308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// addi r29,r30,300
	ctx.r29.s64 = ctx.r30.s64 + 300;
	// stw r31,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fe20
	if (ctx.cr6.eq) goto loc_8230FE20;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FE20;
	sub_82294520(ctx, base);
loc_8230FE20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FE28;
	sub_82294CC8(ctx, base);
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// addi r29,r30,284
	ctx.r29.s64 = ctx.r30.s64 + 284;
	// stw r31,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fe50
	if (ctx.cr6.eq) goto loc_8230FE50;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FE50;
	sub_82294520(ctx, base);
loc_8230FE50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FE58;
	sub_82294CC8(ctx, base);
	// lwz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// addi r29,r30,268
	ctx.r29.s64 = ctx.r30.s64 + 268;
	// stw r31,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fe80
	if (ctx.cr6.eq) goto loc_8230FE80;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FE80;
	sub_82294520(ctx, base);
loc_8230FE80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FE88;
	sub_82294CC8(ctx, base);
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// addi r29,r30,252
	ctx.r29.s64 = ctx.r30.s64 + 252;
	// stw r31,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230feb0
	if (ctx.cr6.eq) goto loc_8230FEB0;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FEB0;
	sub_82294520(ctx, base);
loc_8230FEB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FEB8;
	sub_82294CC8(ctx, base);
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// addi r29,r30,236
	ctx.r29.s64 = ctx.r30.s64 + 236;
	// stw r31,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fee0
	if (ctx.cr6.eq) goto loc_8230FEE0;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FEE0;
	sub_82294520(ctx, base);
loc_8230FEE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FEE8;
	sub_82294CC8(ctx, base);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// addi r29,r30,220
	ctx.r29.s64 = ctx.r30.s64 + 220;
	// stw r31,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ff10
	if (ctx.cr6.eq) goto loc_8230FF10;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FF10;
	sub_82294520(ctx, base);
loc_8230FF10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FF18;
	sub_82294CC8(ctx, base);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// addi r29,r30,204
	ctx.r29.s64 = ctx.r30.s64 + 204;
	// stw r31,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ff40
	if (ctx.cr6.eq) goto loc_8230FF40;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FF40;
	sub_82294520(ctx, base);
loc_8230FF40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FF48;
	sub_82294CC8(ctx, base);
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// stw r31,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ff70
	if (ctx.cr6.eq) goto loc_8230FF70;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FF70;
	sub_82294520(ctx, base);
loc_8230FF70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FF78;
	sub_82294CC8(ctx, base);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r29,r30,172
	ctx.r29.s64 = ctx.r30.s64 + 172;
	// stw r31,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ffa0
	if (ctx.cr6.eq) goto loc_8230FFA0;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FFA0;
	sub_82294520(ctx, base);
loc_8230FFA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FFA8;
	sub_82294CC8(ctx, base);
	// addi r3,r30,156
	ctx.r3.s64 = ctx.r30.s64 + 156;
	// bl 0x82295e20
	ctx.lr = 0x8230FFB0;
	sub_82295E20(ctx, base);
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x8232cb60
	ctx.lr = 0x8230FFB8;
	sub_8232CB60(ctx, base);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// addi r29,r30,132
	ctx.r29.s64 = ctx.r30.s64 + 132;
	// stw r31,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ffe0
	if (ctx.cr6.eq) goto loc_8230FFE0;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8230FFE0;
	sub_82294520(ctx, base);
loc_8230FFE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230FFE8;
	sub_82294CC8(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r29,r30,116
	ctx.r29.s64 = ctx.r30.s64 + 116;
	// stw r31,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82310010
	if (ctx.cr6.eq) goto loc_82310010;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x82310010;
	sub_82294520(ctx, base);
loc_82310010:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82310018;
	sub_82294CC8(ctx, base);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r29,r30,100
	ctx.r29.s64 = ctx.r30.s64 + 100;
	// stw r31,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82310040
	if (ctx.cr6.eq) goto loc_82310040;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x82310040;
	sub_82294520(ctx, base);
loc_82310040:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82310048;
	sub_82294CC8(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// addi r29,r30,84
	ctx.r29.s64 = ctx.r30.s64 + 84;
	// stw r31,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82310070
	if (ctx.cr6.eq) goto loc_82310070;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x82310070;
	sub_82294520(ctx, base);
loc_82310070:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82310078;
	sub_82294CC8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-3112
	ctx.r9.s64 = ctx.r11.s64 + -3112;
	// addi r8,r10,-2844
	ctx.r8.s64 = ctx.r10.s64 + -2844;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82310098;
	sub_8229C068(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229c628
	ctx.lr = 0x823100A0;
	sub_8229C628(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823100A8"))) PPC_WEAK_FUNC(sub_823100A8);
PPC_FUNC_IMPL(__imp__sub_823100A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823100AC"))) PPC_WEAK_FUNC(sub_823100AC);
PPC_FUNC_IMPL(__imp__sub_823100AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823100B0"))) PPC_WEAK_FUNC(sub_823100B0);
PPC_FUNC_IMPL(__imp__sub_823100B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823100B4"))) PPC_WEAK_FUNC(sub_823100B4);
PPC_FUNC_IMPL(__imp__sub_823100B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823100B8"))) PPC_WEAK_FUNC(sub_823100B8);
PPC_FUNC_IMPL(__imp__sub_823100B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823100BC"))) PPC_WEAK_FUNC(sub_823100BC);
PPC_FUNC_IMPL(__imp__sub_823100BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823100C0"))) PPC_WEAK_FUNC(sub_823100C0);
PPC_FUNC_IMPL(__imp__sub_823100C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823100CC"))) PPC_WEAK_FUNC(sub_823100CC);
PPC_FUNC_IMPL(__imp__sub_823100CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823100D0"))) PPC_WEAK_FUNC(sub_823100D0);
PPC_FUNC_IMPL(__imp__sub_823100D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823100D4"))) PPC_WEAK_FUNC(sub_823100D4);
PPC_FUNC_IMPL(__imp__sub_823100D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823100D8"))) PPC_WEAK_FUNC(sub_823100D8);
PPC_FUNC_IMPL(__imp__sub_823100D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823100E0"))) PPC_WEAK_FUNC(sub_823100E0);
PPC_FUNC_IMPL(__imp__sub_823100E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823100E8"))) PPC_WEAK_FUNC(sub_823100E8);
PPC_FUNC_IMPL(__imp__sub_823100E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823100EC"))) PPC_WEAK_FUNC(sub_823100EC);
PPC_FUNC_IMPL(__imp__sub_823100EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823100F0"))) PPC_WEAK_FUNC(sub_823100F0);
PPC_FUNC_IMPL(__imp__sub_823100F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823100F4"))) PPC_WEAK_FUNC(sub_823100F4);
PPC_FUNC_IMPL(__imp__sub_823100F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823100F8"))) PPC_WEAK_FUNC(sub_823100F8);
PPC_FUNC_IMPL(__imp__sub_823100F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82310100"))) PPC_WEAK_FUNC(sub_82310100);
PPC_FUNC_IMPL(__imp__sub_82310100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82310104"))) PPC_WEAK_FUNC(sub_82310104);
PPC_FUNC_IMPL(__imp__sub_82310104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310108"))) PPC_WEAK_FUNC(sub_82310108);
PPC_FUNC_IMPL(__imp__sub_82310108) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r9,-14312
	ctx.r8.s64 = ctx.r9.s64 + -14312;
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

__attribute__((alias("__imp__sub_82310130"))) PPC_WEAK_FUNC(sub_82310130);
PPC_FUNC_IMPL(__imp__sub_82310130) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82310138"))) PPC_WEAK_FUNC(sub_82310138);
PPC_FUNC_IMPL(__imp__sub_82310138) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r9,-14312
	ctx.r8.s64 = ctx.r9.s64 + -14312;
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

__attribute__((alias("__imp__sub_82310158"))) PPC_WEAK_FUNC(sub_82310158);
PPC_FUNC_IMPL(__imp__sub_82310158) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-14312
	ctx.r10.s64 = ctx.r11.s64 + -14312;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82310184;
	sub_8229C068(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x822b4260
	ctx.lr = 0x8231018C;
	sub_822B4260(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x82310194;
	sub_8229C628(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823101c8
	if (ctx.cr6.eq) goto loc_823101C8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823101c0
	if (ctx.cr6.lt) goto loc_823101C0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823101c8
	if (!ctx.cr6.gt) goto loc_823101C8;
loc_823101C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x823101C8;
	sub_82294A58(ctx, base);
loc_823101C8:
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

__attribute__((alias("__imp__sub_823101E4"))) PPC_WEAK_FUNC(sub_823101E4);
PPC_FUNC_IMPL(__imp__sub_823101E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823101E8"))) PPC_WEAK_FUNC(sub_823101E8);
PPC_FUNC_IMPL(__imp__sub_823101E8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-14312
	ctx.r10.s64 = ctx.r11.s64 + -14312;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8231020C;
	sub_8229C068(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x822b4260
	ctx.lr = 0x82310214;
	sub_822B4260(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x8231021C;
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

__attribute__((alias("__imp__sub_82310230"))) PPC_WEAK_FUNC(sub_82310230);
PPC_FUNC_IMPL(__imp__sub_82310230) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r9,-14048
	ctx.r8.s64 = ctx.r9.s64 + -14048;
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

__attribute__((alias("__imp__sub_82310258"))) PPC_WEAK_FUNC(sub_82310258);
PPC_FUNC_IMPL(__imp__sub_82310258) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82310260"))) PPC_WEAK_FUNC(sub_82310260);
PPC_FUNC_IMPL(__imp__sub_82310260) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r9,-14048
	ctx.r8.s64 = ctx.r9.s64 + -14048;
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

__attribute__((alias("__imp__sub_82310280"))) PPC_WEAK_FUNC(sub_82310280);
PPC_FUNC_IMPL(__imp__sub_82310280) {
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
	// bl 0x823102f0
	ctx.lr = 0x823102A0;
	sub_823102F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823102d4
	if (ctx.cr6.eq) goto loc_823102D4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823102cc
	if (ctx.cr6.lt) goto loc_823102CC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823102d4
	if (!ctx.cr6.gt) goto loc_823102D4;
loc_823102CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x823102D4;
	sub_82294A58(ctx, base);
loc_823102D4:
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

__attribute__((alias("__imp__sub_823102F0"))) PPC_WEAK_FUNC(sub_823102F0);
PPC_FUNC_IMPL(__imp__sub_823102F0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-14048
	ctx.r10.s64 = ctx.r11.s64 + -14048;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82310318;
	sub_8229C068(ctx, base);
	// lwz r9,76(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r30,68
	ctx.r31.s64 = ctx.r30.s64 + 68;
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82310344
	if (ctx.cr6.eq) goto loc_82310344;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x82310344;
	sub_82294520(ctx, base);
loc_82310344:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8231034C;
	sub_82294CC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229c628
	ctx.lr = 0x82310354;
	sub_8229C628(ctx, base);
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

__attribute__((alias("__imp__sub_8231036C"))) PPC_WEAK_FUNC(sub_8231036C);
PPC_FUNC_IMPL(__imp__sub_8231036C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310370"))) PPC_WEAK_FUNC(sub_82310370);
PPC_FUNC_IMPL(__imp__sub_82310370) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r9,-14576
	ctx.r8.s64 = ctx.r9.s64 + -14576;
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

__attribute__((alias("__imp__sub_82310398"))) PPC_WEAK_FUNC(sub_82310398);
PPC_FUNC_IMPL(__imp__sub_82310398) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823103A0"))) PPC_WEAK_FUNC(sub_823103A0);
PPC_FUNC_IMPL(__imp__sub_823103A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r9,-14576
	ctx.r8.s64 = ctx.r9.s64 + -14576;
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

__attribute__((alias("__imp__sub_823103C0"))) PPC_WEAK_FUNC(sub_823103C0);
PPC_FUNC_IMPL(__imp__sub_823103C0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-14576
	ctx.r10.s64 = ctx.r11.s64 + -14576;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x823103EC;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x823103F4;
	sub_8229C628(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82310428
	if (ctx.cr6.eq) goto loc_82310428;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82310420
	if (ctx.cr6.lt) goto loc_82310420;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82310428
	if (!ctx.cr6.gt) goto loc_82310428;
loc_82310420:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82310428;
	sub_82294A58(ctx, base);
loc_82310428:
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

__attribute__((alias("__imp__sub_82310444"))) PPC_WEAK_FUNC(sub_82310444);
PPC_FUNC_IMPL(__imp__sub_82310444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310448"))) PPC_WEAK_FUNC(sub_82310448);
PPC_FUNC_IMPL(__imp__sub_82310448) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-14576
	ctx.r10.s64 = ctx.r11.s64 + -14576;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8231046C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x82310474;
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

__attribute__((alias("__imp__sub_82310488"))) PPC_WEAK_FUNC(sub_82310488);
PPC_FUNC_IMPL(__imp__sub_82310488) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8273d350
	sub_8273D350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310494"))) PPC_WEAK_FUNC(sub_82310494);
PPC_FUNC_IMPL(__imp__sub_82310494) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82310498"))) PPC_WEAK_FUNC(sub_82310498);
PPC_FUNC_IMPL(__imp__sub_82310498) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823104A0"))) PPC_WEAK_FUNC(sub_823104A0);
PPC_FUNC_IMPL(__imp__sub_823104A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823104AC"))) PPC_WEAK_FUNC(sub_823104AC);
PPC_FUNC_IMPL(__imp__sub_823104AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823104B0"))) PPC_WEAK_FUNC(sub_823104B0);
PPC_FUNC_IMPL(__imp__sub_823104B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r8,14864
	ctx.r5.s64 = ctx.r8.s64 + 14864;
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// addi r4,r7,-14936
	ctx.r4.s64 = ctx.r7.s64 + -14936;
	// addi r8,r6,-14584
	ctx.r8.s64 = ctx.r6.s64 + -14584;
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// stw r11,740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 740, ctx.r11.u32);
	// stw r11,744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 744, ctx.r11.u32);
	// stw r11,748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 748, ctx.r11.u32);
	// stw r11,756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 756, ctx.r11.u32);
	// stw r11,760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 760, ctx.r11.u32);
	// stw r11,764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 764, ctx.r11.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231050C"))) PPC_WEAK_FUNC(sub_8231050C);
PPC_FUNC_IMPL(__imp__sub_8231050C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310510"))) PPC_WEAK_FUNC(sub_82310510);
PPC_FUNC_IMPL(__imp__sub_82310510) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82310518"))) PPC_WEAK_FUNC(sub_82310518);
PPC_FUNC_IMPL(__imp__sub_82310518) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-26104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310550
	if (!ctx.cr6.eq) goto loc_82310550;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827d86c8
	ctx.lr = 0x82310544;
	sub_827D86C8(ctx, base);
	// stw r3,-26104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26104, ctx.r3.u32);
	// bl 0x827d8788
	ctx.lr = 0x8231054C;
	sub_827D8788(ctx, base);
	// lwz r3,-26104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26104);
loc_82310550:
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

__attribute__((alias("__imp__sub_82310564"))) PPC_WEAK_FUNC(sub_82310564);
PPC_FUNC_IMPL(__imp__sub_82310564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310568"))) PPC_WEAK_FUNC(sub_82310568);
PPC_FUNC_IMPL(__imp__sub_82310568) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823105a0
	if (!ctx.cr6.eq) goto loc_823105A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82732ea8
	ctx.lr = 0x82310594;
	sub_82732EA8(ctx, base);
	// stw r3,-27460(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27460, ctx.r3.u32);
	// bl 0x82732f68
	ctx.lr = 0x8231059C;
	sub_82732F68(ctx, base);
	// lwz r3,-27460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27460);
loc_823105A0:
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

__attribute__((alias("__imp__sub_823105B4"))) PPC_WEAK_FUNC(sub_823105B4);
PPC_FUNC_IMPL(__imp__sub_823105B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823105B8"))) PPC_WEAK_FUNC(sub_823105B8);
PPC_FUNC_IMPL(__imp__sub_823105B8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823105f0
	if (!ctx.cr6.eq) goto loc_823105F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82783fa8
	ctx.lr = 0x823105E4;
	sub_82783FA8(ctx, base);
	// stw r3,-27268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27268, ctx.r3.u32);
	// bl 0x82784068
	ctx.lr = 0x823105EC;
	sub_82784068(ctx, base);
	// lwz r3,-27268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27268);
loc_823105F0:
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

__attribute__((alias("__imp__sub_82310604"))) PPC_WEAK_FUNC(sub_82310604);
PPC_FUNC_IMPL(__imp__sub_82310604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310608"))) PPC_WEAK_FUNC(sub_82310608);
PPC_FUNC_IMPL(__imp__sub_82310608) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28740);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310640
	if (!ctx.cr6.eq) goto loc_82310640;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82601908
	ctx.lr = 0x82310634;
	sub_82601908(ctx, base);
	// stw r3,-28740(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28740, ctx.r3.u32);
	// bl 0x826019c8
	ctx.lr = 0x8231063C;
	sub_826019C8(ctx, base);
	// lwz r3,-28740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28740);
loc_82310640:
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

__attribute__((alias("__imp__sub_82310654"))) PPC_WEAK_FUNC(sub_82310654);
PPC_FUNC_IMPL(__imp__sub_82310654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310658"))) PPC_WEAK_FUNC(sub_82310658);
PPC_FUNC_IMPL(__imp__sub_82310658) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28748);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310690
	if (!ctx.cr6.eq) goto loc_82310690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82601498
	ctx.lr = 0x82310684;
	sub_82601498(ctx, base);
	// stw r3,-28748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28748, ctx.r3.u32);
	// bl 0x82601548
	ctx.lr = 0x8231068C;
	sub_82601548(ctx, base);
	// lwz r3,-28748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28748);
loc_82310690:
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

__attribute__((alias("__imp__sub_823106A4"))) PPC_WEAK_FUNC(sub_823106A4);
PPC_FUNC_IMPL(__imp__sub_823106A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823106A8"))) PPC_WEAK_FUNC(sub_823106A8);
PPC_FUNC_IMPL(__imp__sub_823106A8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-31268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823106e0
	if (!ctx.cr6.eq) goto loc_823106E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8241c0c8
	ctx.lr = 0x823106D4;
	sub_8241C0C8(ctx, base);
	// stw r3,-31268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31268, ctx.r3.u32);
	// bl 0x8241c188
	ctx.lr = 0x823106DC;
	sub_8241C188(ctx, base);
	// lwz r3,-31268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31268);
loc_823106E0:
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

__attribute__((alias("__imp__sub_823106F4"))) PPC_WEAK_FUNC(sub_823106F4);
PPC_FUNC_IMPL(__imp__sub_823106F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823106F8"))) PPC_WEAK_FUNC(sub_823106F8);
PPC_FUNC_IMPL(__imp__sub_823106F8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27748);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310730
	if (!ctx.cr6.eq) goto loc_82310730;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826d3710
	ctx.lr = 0x82310724;
	sub_826D3710(ctx, base);
	// stw r3,-27748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27748, ctx.r3.u32);
	// bl 0x826d37d0
	ctx.lr = 0x8231072C;
	sub_826D37D0(ctx, base);
	// lwz r3,-27748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27748);
loc_82310730:
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

__attribute__((alias("__imp__sub_82310744"))) PPC_WEAK_FUNC(sub_82310744);
PPC_FUNC_IMPL(__imp__sub_82310744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310748"))) PPC_WEAK_FUNC(sub_82310748);
PPC_FUNC_IMPL(__imp__sub_82310748) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310780
	if (!ctx.cr6.eq) goto loc_82310780;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826598e8
	ctx.lr = 0x82310774;
	sub_826598E8(ctx, base);
	// stw r3,-28168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28168, ctx.r3.u32);
	// bl 0x826599a8
	ctx.lr = 0x8231077C;
	sub_826599A8(ctx, base);
	// lwz r3,-28168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28168);
loc_82310780:
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

__attribute__((alias("__imp__sub_82310794"))) PPC_WEAK_FUNC(sub_82310794);
PPC_FUNC_IMPL(__imp__sub_82310794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310798"))) PPC_WEAK_FUNC(sub_82310798);
PPC_FUNC_IMPL(__imp__sub_82310798) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28756);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823107d0
	if (!ctx.cr6.eq) goto loc_823107D0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82601030
	ctx.lr = 0x823107C4;
	sub_82601030(ctx, base);
	// stw r3,-28756(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28756, ctx.r3.u32);
	// bl 0x826010e0
	ctx.lr = 0x823107CC;
	sub_826010E0(ctx, base);
	// lwz r3,-28756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28756);
loc_823107D0:
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

__attribute__((alias("__imp__sub_823107E4"))) PPC_WEAK_FUNC(sub_823107E4);
PPC_FUNC_IMPL(__imp__sub_823107E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823107E8"))) PPC_WEAK_FUNC(sub_823107E8);
PPC_FUNC_IMPL(__imp__sub_823107E8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28704);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310820
	if (!ctx.cr6.eq) goto loc_82310820;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82602cb0
	ctx.lr = 0x82310814;
	sub_82602CB0(ctx, base);
	// stw r3,-28704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28704, ctx.r3.u32);
	// bl 0x82602d70
	ctx.lr = 0x8231081C;
	sub_82602D70(ctx, base);
	// lwz r3,-28704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28704);
loc_82310820:
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

__attribute__((alias("__imp__sub_82310834"))) PPC_WEAK_FUNC(sub_82310834);
PPC_FUNC_IMPL(__imp__sub_82310834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310838"))) PPC_WEAK_FUNC(sub_82310838);
PPC_FUNC_IMPL(__imp__sub_82310838) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310870
	if (!ctx.cr6.eq) goto loc_82310870;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826097a8
	ctx.lr = 0x82310864;
	sub_826097A8(ctx, base);
	// stw r3,-28508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28508, ctx.r3.u32);
	// bl 0x82609868
	ctx.lr = 0x8231086C;
	sub_82609868(ctx, base);
	// lwz r3,-28508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28508);
loc_82310870:
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

__attribute__((alias("__imp__sub_82310884"))) PPC_WEAK_FUNC(sub_82310884);
PPC_FUNC_IMPL(__imp__sub_82310884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310888"))) PPC_WEAK_FUNC(sub_82310888);
PPC_FUNC_IMPL(__imp__sub_82310888) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28580);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823108c0
	if (!ctx.cr6.eq) goto loc_823108C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82607068
	ctx.lr = 0x823108B4;
	sub_82607068(ctx, base);
	// stw r3,-28580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28580, ctx.r3.u32);
	// bl 0x82607128
	ctx.lr = 0x823108BC;
	sub_82607128(ctx, base);
	// lwz r3,-28580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28580);
loc_823108C0:
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

__attribute__((alias("__imp__sub_823108D4"))) PPC_WEAK_FUNC(sub_823108D4);
PPC_FUNC_IMPL(__imp__sub_823108D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823108D8"))) PPC_WEAK_FUNC(sub_823108D8);
PPC_FUNC_IMPL(__imp__sub_823108D8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28600);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310910
	if (!ctx.cr6.eq) goto loc_82310910;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82606590
	ctx.lr = 0x82310904;
	sub_82606590(ctx, base);
	// stw r3,-28600(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28600, ctx.r3.u32);
	// bl 0x82606640
	ctx.lr = 0x8231090C;
	sub_82606640(ctx, base);
	// lwz r3,-28600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28600);
loc_82310910:
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

__attribute__((alias("__imp__sub_82310924"))) PPC_WEAK_FUNC(sub_82310924);
PPC_FUNC_IMPL(__imp__sub_82310924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310928"))) PPC_WEAK_FUNC(sub_82310928);
PPC_FUNC_IMPL(__imp__sub_82310928) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27384);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310960
	if (!ctx.cr6.eq) goto loc_82310960;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8274dc40
	ctx.lr = 0x82310954;
	sub_8274DC40(ctx, base);
	// stw r3,-27384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27384, ctx.r3.u32);
	// bl 0x8274dd00
	ctx.lr = 0x8231095C;
	sub_8274DD00(ctx, base);
	// lwz r3,-27384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27384);
loc_82310960:
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

__attribute__((alias("__imp__sub_82310974"))) PPC_WEAK_FUNC(sub_82310974);
PPC_FUNC_IMPL(__imp__sub_82310974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310978"))) PPC_WEAK_FUNC(sub_82310978);
PPC_FUNC_IMPL(__imp__sub_82310978) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28512);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823109b0
	if (!ctx.cr6.eq) goto loc_823109B0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82609578
	ctx.lr = 0x823109A4;
	sub_82609578(ctx, base);
	// stw r3,-28512(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28512, ctx.r3.u32);
	// bl 0x82609638
	ctx.lr = 0x823109AC;
	sub_82609638(ctx, base);
	// lwz r3,-28512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28512);
loc_823109B0:
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

__attribute__((alias("__imp__sub_823109C4"))) PPC_WEAK_FUNC(sub_823109C4);
PPC_FUNC_IMPL(__imp__sub_823109C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823109C8"))) PPC_WEAK_FUNC(sub_823109C8);
PPC_FUNC_IMPL(__imp__sub_823109C8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310a00
	if (!ctx.cr6.eq) goto loc_82310A00;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604910
	ctx.lr = 0x823109F4;
	sub_82604910(ctx, base);
	// stw r3,-28652(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28652, ctx.r3.u32);
	// bl 0x826049d0
	ctx.lr = 0x823109FC;
	sub_826049D0(ctx, base);
	// lwz r3,-28652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28652);
loc_82310A00:
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

__attribute__((alias("__imp__sub_82310A14"))) PPC_WEAK_FUNC(sub_82310A14);
PPC_FUNC_IMPL(__imp__sub_82310A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310A18"))) PPC_WEAK_FUNC(sub_82310A18);
PPC_FUNC_IMPL(__imp__sub_82310A18) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28096);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310a50
	if (!ctx.cr6.eq) goto loc_82310A50;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82669dd8
	ctx.lr = 0x82310A44;
	sub_82669DD8(ctx, base);
	// stw r3,-28096(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28096, ctx.r3.u32);
	// bl 0x82669e98
	ctx.lr = 0x82310A4C;
	sub_82669E98(ctx, base);
	// lwz r3,-28096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28096);
loc_82310A50:
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

__attribute__((alias("__imp__sub_82310A64"))) PPC_WEAK_FUNC(sub_82310A64);
PPC_FUNC_IMPL(__imp__sub_82310A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310A68"))) PPC_WEAK_FUNC(sub_82310A68);
PPC_FUNC_IMPL(__imp__sub_82310A68) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-26064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26064);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310aa0
	if (!ctx.cr6.eq) goto loc_82310AA0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827e8c30
	ctx.lr = 0x82310A94;
	sub_827E8C30(ctx, base);
	// stw r3,-26064(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26064, ctx.r3.u32);
	// bl 0x827e8cf0
	ctx.lr = 0x82310A9C;
	sub_827E8CF0(ctx, base);
	// lwz r3,-26064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26064);
loc_82310AA0:
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

__attribute__((alias("__imp__sub_82310AB4"))) PPC_WEAK_FUNC(sub_82310AB4);
PPC_FUNC_IMPL(__imp__sub_82310AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310AB8"))) PPC_WEAK_FUNC(sub_82310AB8);
PPC_FUNC_IMPL(__imp__sub_82310AB8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-26092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26092);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310af0
	if (!ctx.cr6.eq) goto loc_82310AF0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827e2b68
	ctx.lr = 0x82310AE4;
	sub_827E2B68(ctx, base);
	// stw r3,-26092(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26092, ctx.r3.u32);
	// bl 0x827e2c28
	ctx.lr = 0x82310AEC;
	sub_827E2C28(ctx, base);
	// lwz r3,-26092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26092);
loc_82310AF0:
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

__attribute__((alias("__imp__sub_82310B04"))) PPC_WEAK_FUNC(sub_82310B04);
PPC_FUNC_IMPL(__imp__sub_82310B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310B08"))) PPC_WEAK_FUNC(sub_82310B08);
PPC_FUNC_IMPL(__imp__sub_82310B08) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-26160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310b40
	if (!ctx.cr6.eq) goto loc_82310B40;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827c1518
	ctx.lr = 0x82310B34;
	sub_827C1518(ctx, base);
	// stw r3,-26160(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26160, ctx.r3.u32);
	// bl 0x827c15d8
	ctx.lr = 0x82310B3C;
	sub_827C15D8(ctx, base);
	// lwz r3,-26160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26160);
loc_82310B40:
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

__attribute__((alias("__imp__sub_82310B54"))) PPC_WEAK_FUNC(sub_82310B54);
PPC_FUNC_IMPL(__imp__sub_82310B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310B58"))) PPC_WEAK_FUNC(sub_82310B58);
PPC_FUNC_IMPL(__imp__sub_82310B58) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310b90
	if (!ctx.cr6.eq) goto loc_82310B90;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8278cdd8
	ctx.lr = 0x82310B84;
	sub_8278CDD8(ctx, base);
	// stw r3,-27244(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27244, ctx.r3.u32);
	// bl 0x8278ce98
	ctx.lr = 0x82310B8C;
	sub_8278CE98(ctx, base);
	// lwz r3,-27244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27244);
loc_82310B90:
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

__attribute__((alias("__imp__sub_82310BA4"))) PPC_WEAK_FUNC(sub_82310BA4);
PPC_FUNC_IMPL(__imp__sub_82310BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310BA8"))) PPC_WEAK_FUNC(sub_82310BA8);
PPC_FUNC_IMPL(__imp__sub_82310BA8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310be0
	if (!ctx.cr6.eq) goto loc_82310BE0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82768248
	ctx.lr = 0x82310BD4;
	sub_82768248(ctx, base);
	// stw r3,-27296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27296, ctx.r3.u32);
	// bl 0x82768308
	ctx.lr = 0x82310BDC;
	sub_82768308(ctx, base);
	// lwz r3,-27296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27296);
loc_82310BE0:
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

__attribute__((alias("__imp__sub_82310BF4"))) PPC_WEAK_FUNC(sub_82310BF4);
PPC_FUNC_IMPL(__imp__sub_82310BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310BF8"))) PPC_WEAK_FUNC(sub_82310BF8);
PPC_FUNC_IMPL(__imp__sub_82310BF8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310c30
	if (!ctx.cr6.eq) goto loc_82310C30;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8264aac8
	ctx.lr = 0x82310C24;
	sub_8264AAC8(ctx, base);
	// stw r3,-28236(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28236, ctx.r3.u32);
	// bl 0x8264ab88
	ctx.lr = 0x82310C2C;
	sub_8264AB88(ctx, base);
	// lwz r3,-28236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28236);
loc_82310C30:
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

__attribute__((alias("__imp__sub_82310C44"))) PPC_WEAK_FUNC(sub_82310C44);
PPC_FUNC_IMPL(__imp__sub_82310C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310C48"))) PPC_WEAK_FUNC(sub_82310C48);
PPC_FUNC_IMPL(__imp__sub_82310C48) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310c80
	if (!ctx.cr6.eq) goto loc_82310C80;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82704180
	ctx.lr = 0x82310C74;
	sub_82704180(ctx, base);
	// stw r3,-27508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27508, ctx.r3.u32);
	// bl 0x82704240
	ctx.lr = 0x82310C7C;
	sub_82704240(ctx, base);
	// lwz r3,-27508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27508);
loc_82310C80:
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

__attribute__((alias("__imp__sub_82310C94"))) PPC_WEAK_FUNC(sub_82310C94);
PPC_FUNC_IMPL(__imp__sub_82310C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310C98"))) PPC_WEAK_FUNC(sub_82310C98);
PPC_FUNC_IMPL(__imp__sub_82310C98) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27712);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310cd0
	if (!ctx.cr6.eq) goto loc_82310CD0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826dd5e8
	ctx.lr = 0x82310CC4;
	sub_826DD5E8(ctx, base);
	// stw r3,-27712(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27712, ctx.r3.u32);
	// bl 0x826dd6a8
	ctx.lr = 0x82310CCC;
	sub_826DD6A8(ctx, base);
	// lwz r3,-27712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27712);
loc_82310CD0:
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

__attribute__((alias("__imp__sub_82310CE4"))) PPC_WEAK_FUNC(sub_82310CE4);
PPC_FUNC_IMPL(__imp__sub_82310CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310CE8"))) PPC_WEAK_FUNC(sub_82310CE8);
PPC_FUNC_IMPL(__imp__sub_82310CE8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27972);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310d20
	if (!ctx.cr6.eq) goto loc_82310D20;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8267d920
	ctx.lr = 0x82310D14;
	sub_8267D920(ctx, base);
	// stw r3,-27972(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27972, ctx.r3.u32);
	// bl 0x8267d9e0
	ctx.lr = 0x82310D1C;
	sub_8267D9E0(ctx, base);
	// lwz r3,-27972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27972);
loc_82310D20:
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

__attribute__((alias("__imp__sub_82310D34"))) PPC_WEAK_FUNC(sub_82310D34);
PPC_FUNC_IMPL(__imp__sub_82310D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310D38"))) PPC_WEAK_FUNC(sub_82310D38);
PPC_FUNC_IMPL(__imp__sub_82310D38) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310d70
	if (!ctx.cr6.eq) goto loc_82310D70;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8260a068
	ctx.lr = 0x82310D64;
	sub_8260A068(ctx, base);
	// stw r3,-28492(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28492, ctx.r3.u32);
	// bl 0x8260a128
	ctx.lr = 0x82310D6C;
	sub_8260A128(ctx, base);
	// lwz r3,-28492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28492);
loc_82310D70:
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

__attribute__((alias("__imp__sub_82310D84"))) PPC_WEAK_FUNC(sub_82310D84);
PPC_FUNC_IMPL(__imp__sub_82310D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310D88"))) PPC_WEAK_FUNC(sub_82310D88);
PPC_FUNC_IMPL(__imp__sub_82310D88) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28676);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310dc0
	if (!ctx.cr6.eq) goto loc_82310DC0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82603bf0
	ctx.lr = 0x82310DB4;
	sub_82603BF0(ctx, base);
	// stw r3,-28676(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28676, ctx.r3.u32);
	// bl 0x82603cb0
	ctx.lr = 0x82310DBC;
	sub_82603CB0(ctx, base);
	// lwz r3,-28676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28676);
loc_82310DC0:
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

__attribute__((alias("__imp__sub_82310DD4"))) PPC_WEAK_FUNC(sub_82310DD4);
PPC_FUNC_IMPL(__imp__sub_82310DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310DD8"))) PPC_WEAK_FUNC(sub_82310DD8);
PPC_FUNC_IMPL(__imp__sub_82310DD8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310e10
	if (!ctx.cr6.eq) goto loc_82310E10;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826081e8
	ctx.lr = 0x82310E04;
	sub_826081E8(ctx, base);
	// stw r3,-28548(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28548, ctx.r3.u32);
	// bl 0x826082a8
	ctx.lr = 0x82310E0C;
	sub_826082A8(ctx, base);
	// lwz r3,-28548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28548);
loc_82310E10:
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

__attribute__((alias("__imp__sub_82310E24"))) PPC_WEAK_FUNC(sub_82310E24);
PPC_FUNC_IMPL(__imp__sub_82310E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310E28"))) PPC_WEAK_FUNC(sub_82310E28);
PPC_FUNC_IMPL(__imp__sub_82310E28) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28712);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310e60
	if (!ctx.cr6.eq) goto loc_82310E60;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82602850
	ctx.lr = 0x82310E54;
	sub_82602850(ctx, base);
	// stw r3,-28712(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28712, ctx.r3.u32);
	// bl 0x82602910
	ctx.lr = 0x82310E5C;
	sub_82602910(ctx, base);
	// lwz r3,-28712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28712);
loc_82310E60:
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

__attribute__((alias("__imp__sub_82310E74"))) PPC_WEAK_FUNC(sub_82310E74);
PPC_FUNC_IMPL(__imp__sub_82310E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310E78"))) PPC_WEAK_FUNC(sub_82310E78);
PPC_FUNC_IMPL(__imp__sub_82310E78) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310eb0
	if (!ctx.cr6.eq) goto loc_82310EB0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8264a718
	ctx.lr = 0x82310EA4;
	sub_8264A718(ctx, base);
	// stw r3,-28240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28240, ctx.r3.u32);
	// bl 0x8264a7d8
	ctx.lr = 0x82310EAC;
	sub_8264A7D8(ctx, base);
	// lwz r3,-28240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28240);
loc_82310EB0:
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

__attribute__((alias("__imp__sub_82310EC4"))) PPC_WEAK_FUNC(sub_82310EC4);
PPC_FUNC_IMPL(__imp__sub_82310EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310EC8"))) PPC_WEAK_FUNC(sub_82310EC8);
PPC_FUNC_IMPL(__imp__sub_82310EC8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310f00
	if (!ctx.cr6.eq) goto loc_82310F00;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82659f70
	ctx.lr = 0x82310EF4;
	sub_82659F70(ctx, base);
	// stw r3,-28156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28156, ctx.r3.u32);
	// bl 0x8265a030
	ctx.lr = 0x82310EFC;
	sub_8265A030(ctx, base);
	// lwz r3,-28156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28156);
loc_82310F00:
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

__attribute__((alias("__imp__sub_82310F14"))) PPC_WEAK_FUNC(sub_82310F14);
PPC_FUNC_IMPL(__imp__sub_82310F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310F18"))) PPC_WEAK_FUNC(sub_82310F18);
PPC_FUNC_IMPL(__imp__sub_82310F18) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310f50
	if (!ctx.cr6.eq) goto loc_82310F50;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8264ca30
	ctx.lr = 0x82310F44;
	sub_8264CA30(ctx, base);
	// stw r3,-28224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28224, ctx.r3.u32);
	// bl 0x8264caf0
	ctx.lr = 0x82310F4C;
	sub_8264CAF0(ctx, base);
	// lwz r3,-28224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28224);
loc_82310F50:
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

__attribute__((alias("__imp__sub_82310F64"))) PPC_WEAK_FUNC(sub_82310F64);
PPC_FUNC_IMPL(__imp__sub_82310F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310F68"))) PPC_WEAK_FUNC(sub_82310F68);
PPC_FUNC_IMPL(__imp__sub_82310F68) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27948);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310fa0
	if (!ctx.cr6.eq) goto loc_82310FA0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82686ea8
	ctx.lr = 0x82310F94;
	sub_82686EA8(ctx, base);
	// stw r3,-27948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27948, ctx.r3.u32);
	// bl 0x82686f68
	ctx.lr = 0x82310F9C;
	sub_82686F68(ctx, base);
	// lwz r3,-27948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27948);
loc_82310FA0:
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

__attribute__((alias("__imp__sub_82310FB4"))) PPC_WEAK_FUNC(sub_82310FB4);
PPC_FUNC_IMPL(__imp__sub_82310FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310FB8"))) PPC_WEAK_FUNC(sub_82310FB8);
PPC_FUNC_IMPL(__imp__sub_82310FB8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27940);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82310ff0
	if (!ctx.cr6.eq) goto loc_82310FF0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82687308
	ctx.lr = 0x82310FE4;
	sub_82687308(ctx, base);
	// stw r3,-27940(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27940, ctx.r3.u32);
	// bl 0x826873c0
	ctx.lr = 0x82310FEC;
	sub_826873C0(ctx, base);
	// lwz r3,-27940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27940);
loc_82310FF0:
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

__attribute__((alias("__imp__sub_82311004"))) PPC_WEAK_FUNC(sub_82311004);
PPC_FUNC_IMPL(__imp__sub_82311004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311008"))) PPC_WEAK_FUNC(sub_82311008);
PPC_FUNC_IMPL(__imp__sub_82311008) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-26060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26060);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311040
	if (!ctx.cr6.eq) goto loc_82311040;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827e9958
	ctx.lr = 0x82311034;
	sub_827E9958(ctx, base);
	// stw r3,-26060(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26060, ctx.r3.u32);
	// bl 0x827e9a18
	ctx.lr = 0x8231103C;
	sub_827E9A18(ctx, base);
	// lwz r3,-26060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26060);
loc_82311040:
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

__attribute__((alias("__imp__sub_82311054"))) PPC_WEAK_FUNC(sub_82311054);
PPC_FUNC_IMPL(__imp__sub_82311054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311058"))) PPC_WEAK_FUNC(sub_82311058);
PPC_FUNC_IMPL(__imp__sub_82311058) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311090
	if (!ctx.cr6.eq) goto loc_82311090;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82600778
	ctx.lr = 0x82311084;
	sub_82600778(ctx, base);
	// stw r3,-28772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28772, ctx.r3.u32);
	// bl 0x82600838
	ctx.lr = 0x8231108C;
	sub_82600838(ctx, base);
	// lwz r3,-28772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28772);
loc_82311090:
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

__attribute__((alias("__imp__sub_823110A4"))) PPC_WEAK_FUNC(sub_823110A4);
PPC_FUNC_IMPL(__imp__sub_823110A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823110A8"))) PPC_WEAK_FUNC(sub_823110A8);
PPC_FUNC_IMPL(__imp__sub_823110A8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28776);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823110e0
	if (!ctx.cr6.eq) goto loc_823110E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82600548
	ctx.lr = 0x823110D4;
	sub_82600548(ctx, base);
	// stw r3,-28776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28776, ctx.r3.u32);
	// bl 0x82600608
	ctx.lr = 0x823110DC;
	sub_82600608(ctx, base);
	// lwz r3,-28776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28776);
loc_823110E0:
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

__attribute__((alias("__imp__sub_823110F4"))) PPC_WEAK_FUNC(sub_823110F4);
PPC_FUNC_IMPL(__imp__sub_823110F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823110F8"))) PPC_WEAK_FUNC(sub_823110F8);
PPC_FUNC_IMPL(__imp__sub_823110F8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-26172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311130
	if (!ctx.cr6.eq) goto loc_82311130;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827ad688
	ctx.lr = 0x82311124;
	sub_827AD688(ctx, base);
	// stw r3,-26172(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26172, ctx.r3.u32);
	// bl 0x827ad748
	ctx.lr = 0x8231112C;
	sub_827AD748(ctx, base);
	// lwz r3,-26172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26172);
loc_82311130:
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

__attribute__((alias("__imp__sub_82311144"))) PPC_WEAK_FUNC(sub_82311144);
PPC_FUNC_IMPL(__imp__sub_82311144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311148"))) PPC_WEAK_FUNC(sub_82311148);
PPC_FUNC_IMPL(__imp__sub_82311148) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28780);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311180
	if (!ctx.cr6.eq) goto loc_82311180;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82600318
	ctx.lr = 0x82311174;
	sub_82600318(ctx, base);
	// stw r3,-28780(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28780, ctx.r3.u32);
	// bl 0x826003d8
	ctx.lr = 0x8231117C;
	sub_826003D8(ctx, base);
	// lwz r3,-28780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28780);
loc_82311180:
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

__attribute__((alias("__imp__sub_82311194"))) PPC_WEAK_FUNC(sub_82311194);
PPC_FUNC_IMPL(__imp__sub_82311194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311198"))) PPC_WEAK_FUNC(sub_82311198);
PPC_FUNC_IMPL(__imp__sub_82311198) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823111d0
	if (!ctx.cr6.eq) goto loc_823111D0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82758878
	ctx.lr = 0x823111C4;
	sub_82758878(ctx, base);
	// stw r3,-27348(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27348, ctx.r3.u32);
	// bl 0x82758938
	ctx.lr = 0x823111CC;
	sub_82758938(ctx, base);
	// lwz r3,-27348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27348);
loc_823111D0:
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

__attribute__((alias("__imp__sub_823111E4"))) PPC_WEAK_FUNC(sub_823111E4);
PPC_FUNC_IMPL(__imp__sub_823111E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823111E8"))) PPC_WEAK_FUNC(sub_823111E8);
PPC_FUNC_IMPL(__imp__sub_823111E8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28356);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311220
	if (!ctx.cr6.eq) goto loc_82311220;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82631328
	ctx.lr = 0x82311214;
	sub_82631328(ctx, base);
	// stw r3,-28356(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28356, ctx.r3.u32);
	// bl 0x826313e8
	ctx.lr = 0x8231121C;
	sub_826313E8(ctx, base);
	// lwz r3,-28356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28356);
loc_82311220:
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

__attribute__((alias("__imp__sub_82311234"))) PPC_WEAK_FUNC(sub_82311234);
PPC_FUNC_IMPL(__imp__sub_82311234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311238"))) PPC_WEAK_FUNC(sub_82311238);
PPC_FUNC_IMPL(__imp__sub_82311238) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311270
	if (!ctx.cr6.eq) goto loc_82311270;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8262c8e8
	ctx.lr = 0x82311264;
	sub_8262C8E8(ctx, base);
	// stw r3,-28400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28400, ctx.r3.u32);
	// bl 0x8262c9a8
	ctx.lr = 0x8231126C;
	sub_8262C9A8(ctx, base);
	// lwz r3,-28400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28400);
loc_82311270:
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

__attribute__((alias("__imp__sub_82311284"))) PPC_WEAK_FUNC(sub_82311284);
PPC_FUNC_IMPL(__imp__sub_82311284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311288"))) PPC_WEAK_FUNC(sub_82311288);
PPC_FUNC_IMPL(__imp__sub_82311288) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28340);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823112c0
	if (!ctx.cr6.eq) goto loc_823112C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82632db8
	ctx.lr = 0x823112B4;
	sub_82632DB8(ctx, base);
	// stw r3,-28340(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28340, ctx.r3.u32);
	// bl 0x82632e78
	ctx.lr = 0x823112BC;
	sub_82632E78(ctx, base);
	// lwz r3,-28340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28340);
loc_823112C0:
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

__attribute__((alias("__imp__sub_823112D4"))) PPC_WEAK_FUNC(sub_823112D4);
PPC_FUNC_IMPL(__imp__sub_823112D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823112D8"))) PPC_WEAK_FUNC(sub_823112D8);
PPC_FUNC_IMPL(__imp__sub_823112D8) {
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
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r3,25380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25380);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311310
	if (!ctx.cr6.eq) goto loc_82311310;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8230d548
	ctx.lr = 0x82311304;
	sub_8230D548(ctx, base);
	// stw r3,25380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25380, ctx.r3.u32);
	// bl 0x8230d600
	ctx.lr = 0x8231130C;
	sub_8230D600(ctx, base);
	// lwz r3,25380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25380);
loc_82311310:
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

__attribute__((alias("__imp__sub_82311324"))) PPC_WEAK_FUNC(sub_82311324);
PPC_FUNC_IMPL(__imp__sub_82311324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311328"))) PPC_WEAK_FUNC(sub_82311328);
PPC_FUNC_IMPL(__imp__sub_82311328) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-26068(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26068);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311360
	if (!ctx.cr6.eq) goto loc_82311360;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827e82b8
	ctx.lr = 0x82311354;
	sub_827E82B8(ctx, base);
	// stw r3,-26068(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26068, ctx.r3.u32);
	// bl 0x827e8378
	ctx.lr = 0x8231135C;
	sub_827E8378(ctx, base);
	// lwz r3,-26068(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26068);
loc_82311360:
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

__attribute__((alias("__imp__sub_82311374"))) PPC_WEAK_FUNC(sub_82311374);
PPC_FUNC_IMPL(__imp__sub_82311374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311378"))) PPC_WEAK_FUNC(sub_82311378);
PPC_FUNC_IMPL(__imp__sub_82311378) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27932);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823113b0
	if (!ctx.cr6.eq) goto loc_823113B0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82697c58
	ctx.lr = 0x823113A4;
	sub_82697C58(ctx, base);
	// stw r3,-27932(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27932, ctx.r3.u32);
	// bl 0x82697d18
	ctx.lr = 0x823113AC;
	sub_82697D18(ctx, base);
	// lwz r3,-27932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27932);
loc_823113B0:
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

__attribute__((alias("__imp__sub_823113C4"))) PPC_WEAK_FUNC(sub_823113C4);
PPC_FUNC_IMPL(__imp__sub_823113C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823113C8"))) PPC_WEAK_FUNC(sub_823113C8);
PPC_FUNC_IMPL(__imp__sub_823113C8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311400
	if (!ctx.cr6.eq) goto loc_82311400;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825ddb88
	ctx.lr = 0x823113F4;
	sub_825DDB88(ctx, base);
	// stw r3,-28912(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28912, ctx.r3.u32);
	// bl 0x825ddc48
	ctx.lr = 0x823113FC;
	sub_825DDC48(ctx, base);
	// lwz r3,-28912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28912);
loc_82311400:
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

__attribute__((alias("__imp__sub_82311414"))) PPC_WEAK_FUNC(sub_82311414);
PPC_FUNC_IMPL(__imp__sub_82311414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311418"))) PPC_WEAK_FUNC(sub_82311418);
PPC_FUNC_IMPL(__imp__sub_82311418) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27936);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311450
	if (!ctx.cr6.eq) goto loc_82311450;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82697a30
	ctx.lr = 0x82311444;
	sub_82697A30(ctx, base);
	// stw r3,-27936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27936, ctx.r3.u32);
	// bl 0x82697af0
	ctx.lr = 0x8231144C;
	sub_82697AF0(ctx, base);
	// lwz r3,-27936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27936);
loc_82311450:
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

__attribute__((alias("__imp__sub_82311464"))) PPC_WEAK_FUNC(sub_82311464);
PPC_FUNC_IMPL(__imp__sub_82311464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311468"))) PPC_WEAK_FUNC(sub_82311468);
PPC_FUNC_IMPL(__imp__sub_82311468) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27540);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823114a0
	if (!ctx.cr6.eq) goto loc_823114A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826faba8
	ctx.lr = 0x82311494;
	sub_826FABA8(ctx, base);
	// stw r3,-27540(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27540, ctx.r3.u32);
	// bl 0x826fac68
	ctx.lr = 0x8231149C;
	sub_826FAC68(ctx, base);
	// lwz r3,-27540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27540);
loc_823114A0:
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

__attribute__((alias("__imp__sub_823114B4"))) PPC_WEAK_FUNC(sub_823114B4);
PPC_FUNC_IMPL(__imp__sub_823114B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823114B8"))) PPC_WEAK_FUNC(sub_823114B8);
PPC_FUNC_IMPL(__imp__sub_823114B8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823114f0
	if (!ctx.cr6.eq) goto loc_823114F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826fadd8
	ctx.lr = 0x823114E4;
	sub_826FADD8(ctx, base);
	// stw r3,-27536(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27536, ctx.r3.u32);
	// bl 0x826fae98
	ctx.lr = 0x823114EC;
	sub_826FAE98(ctx, base);
	// lwz r3,-27536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27536);
loc_823114F0:
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

__attribute__((alias("__imp__sub_82311504"))) PPC_WEAK_FUNC(sub_82311504);
PPC_FUNC_IMPL(__imp__sub_82311504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311508"))) PPC_WEAK_FUNC(sub_82311508);
PPC_FUNC_IMPL(__imp__sub_82311508) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311540
	if (!ctx.cr6.eq) goto loc_82311540;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826fb230
	ctx.lr = 0x82311534;
	sub_826FB230(ctx, base);
	// stw r3,-27528(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27528, ctx.r3.u32);
	// bl 0x826fb2f0
	ctx.lr = 0x8231153C;
	sub_826FB2F0(ctx, base);
	// lwz r3,-27528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27528);
loc_82311540:
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

__attribute__((alias("__imp__sub_82311554"))) PPC_WEAK_FUNC(sub_82311554);
PPC_FUNC_IMPL(__imp__sub_82311554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311558"))) PPC_WEAK_FUNC(sub_82311558);
PPC_FUNC_IMPL(__imp__sub_82311558) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-31720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31720);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311590
	if (!ctx.cr6.eq) goto loc_82311590;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82384198
	ctx.lr = 0x82311584;
	sub_82384198(ctx, base);
	// stw r3,-31720(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31720, ctx.r3.u32);
	// bl 0x82384258
	ctx.lr = 0x8231158C;
	sub_82384258(ctx, base);
	// lwz r3,-31720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31720);
loc_82311590:
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

__attribute__((alias("__imp__sub_823115A4"))) PPC_WEAK_FUNC(sub_823115A4);
PPC_FUNC_IMPL(__imp__sub_823115A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823115A8"))) PPC_WEAK_FUNC(sub_823115A8);
PPC_FUNC_IMPL(__imp__sub_823115A8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823115e0
	if (!ctx.cr6.eq) goto loc_823115E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82666978
	ctx.lr = 0x823115D4;
	sub_82666978(ctx, base);
	// stw r3,-28100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28100, ctx.r3.u32);
	// bl 0x82666a38
	ctx.lr = 0x823115DC;
	sub_82666A38(ctx, base);
	// lwz r3,-28100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28100);
loc_823115E0:
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

__attribute__((alias("__imp__sub_823115F4"))) PPC_WEAK_FUNC(sub_823115F4);
PPC_FUNC_IMPL(__imp__sub_823115F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823115F8"))) PPC_WEAK_FUNC(sub_823115F8);
PPC_FUNC_IMPL(__imp__sub_823115F8) {
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
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r3,25376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311630
	if (!ctx.cr6.eq) goto loc_82311630;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8230d278
	ctx.lr = 0x82311624;
	sub_8230D278(ctx, base);
	// stw r3,25376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25376, ctx.r3.u32);
	// bl 0x8230d330
	ctx.lr = 0x8231162C;
	sub_8230D330(ctx, base);
	// lwz r3,25376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25376);
loc_82311630:
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

__attribute__((alias("__imp__sub_82311644"))) PPC_WEAK_FUNC(sub_82311644);
PPC_FUNC_IMPL(__imp__sub_82311644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311648"))) PPC_WEAK_FUNC(sub_82311648);
PPC_FUNC_IMPL(__imp__sub_82311648) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28684);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311680
	if (!ctx.cr6.eq) goto loc_82311680;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826037a0
	ctx.lr = 0x82311674;
	sub_826037A0(ctx, base);
	// stw r3,-28684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28684, ctx.r3.u32);
	// bl 0x82603850
	ctx.lr = 0x8231167C;
	sub_82603850(ctx, base);
	// lwz r3,-28684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28684);
loc_82311680:
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

__attribute__((alias("__imp__sub_82311694"))) PPC_WEAK_FUNC(sub_82311694);
PPC_FUNC_IMPL(__imp__sub_82311694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311698"))) PPC_WEAK_FUNC(sub_82311698);
PPC_FUNC_IMPL(__imp__sub_82311698) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28944);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823116d0
	if (!ctx.cr6.eq) goto loc_823116D0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825d67c0
	ctx.lr = 0x823116C4;
	sub_825D67C0(ctx, base);
	// stw r3,-28944(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28944, ctx.r3.u32);
	// bl 0x825d6880
	ctx.lr = 0x823116CC;
	sub_825D6880(ctx, base);
	// lwz r3,-28944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28944);
loc_823116D0:
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

__attribute__((alias("__imp__sub_823116E4"))) PPC_WEAK_FUNC(sub_823116E4);
PPC_FUNC_IMPL(__imp__sub_823116E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823116E8"))) PPC_WEAK_FUNC(sub_823116E8);
PPC_FUNC_IMPL(__imp__sub_823116E8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28924);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311720
	if (!ctx.cr6.eq) goto loc_82311720;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825d72b0
	ctx.lr = 0x82311714;
	sub_825D72B0(ctx, base);
	// stw r3,-28924(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28924, ctx.r3.u32);
	// bl 0x825d7370
	ctx.lr = 0x8231171C;
	sub_825D7370(ctx, base);
	// lwz r3,-28924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28924);
loc_82311720:
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

__attribute__((alias("__imp__sub_82311734"))) PPC_WEAK_FUNC(sub_82311734);
PPC_FUNC_IMPL(__imp__sub_82311734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311738"))) PPC_WEAK_FUNC(sub_82311738);
PPC_FUNC_IMPL(__imp__sub_82311738) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28940);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311770
	if (!ctx.cr6.eq) goto loc_82311770;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825d69f0
	ctx.lr = 0x82311764;
	sub_825D69F0(ctx, base);
	// stw r3,-28940(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28940, ctx.r3.u32);
	// bl 0x825d6ab0
	ctx.lr = 0x8231176C;
	sub_825D6AB0(ctx, base);
	// lwz r3,-28940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28940);
loc_82311770:
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

__attribute__((alias("__imp__sub_82311784"))) PPC_WEAK_FUNC(sub_82311784);
PPC_FUNC_IMPL(__imp__sub_82311784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311788"))) PPC_WEAK_FUNC(sub_82311788);
PPC_FUNC_IMPL(__imp__sub_82311788) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28920);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823117c0
	if (!ctx.cr6.eq) goto loc_823117C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825d74e0
	ctx.lr = 0x823117B4;
	sub_825D74E0(ctx, base);
	// stw r3,-28920(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28920, ctx.r3.u32);
	// bl 0x825d75a0
	ctx.lr = 0x823117BC;
	sub_825D75A0(ctx, base);
	// lwz r3,-28920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28920);
loc_823117C0:
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

__attribute__((alias("__imp__sub_823117D4"))) PPC_WEAK_FUNC(sub_823117D4);
PPC_FUNC_IMPL(__imp__sub_823117D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823117D8"))) PPC_WEAK_FUNC(sub_823117D8);
PPC_FUNC_IMPL(__imp__sub_823117D8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28948);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311810
	if (!ctx.cr6.eq) goto loc_82311810;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825d6590
	ctx.lr = 0x82311804;
	sub_825D6590(ctx, base);
	// stw r3,-28948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28948, ctx.r3.u32);
	// bl 0x825d6650
	ctx.lr = 0x8231180C;
	sub_825D6650(ctx, base);
	// lwz r3,-28948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28948);
loc_82311810:
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

__attribute__((alias("__imp__sub_82311824"))) PPC_WEAK_FUNC(sub_82311824);
PPC_FUNC_IMPL(__imp__sub_82311824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311828"))) PPC_WEAK_FUNC(sub_82311828);
PPC_FUNC_IMPL(__imp__sub_82311828) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28952);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311860
	if (!ctx.cr6.eq) goto loc_82311860;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825d6360
	ctx.lr = 0x82311854;
	sub_825D6360(ctx, base);
	// stw r3,-28952(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28952, ctx.r3.u32);
	// bl 0x825d6420
	ctx.lr = 0x8231185C;
	sub_825D6420(ctx, base);
	// lwz r3,-28952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28952);
loc_82311860:
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

__attribute__((alias("__imp__sub_82311874"))) PPC_WEAK_FUNC(sub_82311874);
PPC_FUNC_IMPL(__imp__sub_82311874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311878"))) PPC_WEAK_FUNC(sub_82311878);
PPC_FUNC_IMPL(__imp__sub_82311878) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28928);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823118b0
	if (!ctx.cr6.eq) goto loc_823118B0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825d7080
	ctx.lr = 0x823118A4;
	sub_825D7080(ctx, base);
	// stw r3,-28928(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28928, ctx.r3.u32);
	// bl 0x825d7140
	ctx.lr = 0x823118AC;
	sub_825D7140(ctx, base);
	// lwz r3,-28928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28928);
loc_823118B0:
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

__attribute__((alias("__imp__sub_823118C4"))) PPC_WEAK_FUNC(sub_823118C4);
PPC_FUNC_IMPL(__imp__sub_823118C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823118C8"))) PPC_WEAK_FUNC(sub_823118C8);
PPC_FUNC_IMPL(__imp__sub_823118C8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311900
	if (!ctx.cr6.eq) goto loc_82311900;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825d5f00
	ctx.lr = 0x823118F4;
	sub_825D5F00(ctx, base);
	// stw r3,-28960(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28960, ctx.r3.u32);
	// bl 0x825d5fc0
	ctx.lr = 0x823118FC;
	sub_825D5FC0(ctx, base);
	// lwz r3,-28960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28960);
loc_82311900:
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

__attribute__((alias("__imp__sub_82311914"))) PPC_WEAK_FUNC(sub_82311914);
PPC_FUNC_IMPL(__imp__sub_82311914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311918"))) PPC_WEAK_FUNC(sub_82311918);
PPC_FUNC_IMPL(__imp__sub_82311918) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28936);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311950
	if (!ctx.cr6.eq) goto loc_82311950;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825d6c20
	ctx.lr = 0x82311944;
	sub_825D6C20(ctx, base);
	// stw r3,-28936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28936, ctx.r3.u32);
	// bl 0x825d6ce0
	ctx.lr = 0x8231194C;
	sub_825D6CE0(ctx, base);
	// lwz r3,-28936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28936);
loc_82311950:
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

__attribute__((alias("__imp__sub_82311964"))) PPC_WEAK_FUNC(sub_82311964);
PPC_FUNC_IMPL(__imp__sub_82311964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311968"))) PPC_WEAK_FUNC(sub_82311968);
PPC_FUNC_IMPL(__imp__sub_82311968) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28956);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823119a0
	if (!ctx.cr6.eq) goto loc_823119A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825d6130
	ctx.lr = 0x82311994;
	sub_825D6130(ctx, base);
	// stw r3,-28956(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28956, ctx.r3.u32);
	// bl 0x825d61f0
	ctx.lr = 0x8231199C;
	sub_825D61F0(ctx, base);
	// lwz r3,-28956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28956);
loc_823119A0:
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

__attribute__((alias("__imp__sub_823119B4"))) PPC_WEAK_FUNC(sub_823119B4);
PPC_FUNC_IMPL(__imp__sub_823119B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823119B8"))) PPC_WEAK_FUNC(sub_823119B8);
PPC_FUNC_IMPL(__imp__sub_823119B8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28932);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823119f0
	if (!ctx.cr6.eq) goto loc_823119F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825d6e50
	ctx.lr = 0x823119E4;
	sub_825D6E50(ctx, base);
	// stw r3,-28932(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28932, ctx.r3.u32);
	// bl 0x825d6f10
	ctx.lr = 0x823119EC;
	sub_825D6F10(ctx, base);
	// lwz r3,-28932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28932);
loc_823119F0:
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

__attribute__((alias("__imp__sub_82311A04"))) PPC_WEAK_FUNC(sub_82311A04);
PPC_FUNC_IMPL(__imp__sub_82311A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311A08"))) PPC_WEAK_FUNC(sub_82311A08);
PPC_FUNC_IMPL(__imp__sub_82311A08) {
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
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r3,25368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311a40
	if (!ctx.cr6.eq) goto loc_82311A40;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82306cc8
	ctx.lr = 0x82311A34;
	sub_82306CC8(ctx, base);
	// stw r3,25368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25368, ctx.r3.u32);
	// bl 0x82306d88
	ctx.lr = 0x82311A3C;
	sub_82306D88(ctx, base);
	// lwz r3,25368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25368);
loc_82311A40:
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

__attribute__((alias("__imp__sub_82311A54"))) PPC_WEAK_FUNC(sub_82311A54);
PPC_FUNC_IMPL(__imp__sub_82311A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311A58"))) PPC_WEAK_FUNC(sub_82311A58);
PPC_FUNC_IMPL(__imp__sub_82311A58) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28644);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311a90
	if (!ctx.cr6.eq) goto loc_82311A90;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604d78
	ctx.lr = 0x82311A84;
	sub_82604D78(ctx, base);
	// stw r3,-28644(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28644, ctx.r3.u32);
	// bl 0x82604e38
	ctx.lr = 0x82311A8C;
	sub_82604E38(ctx, base);
	// lwz r3,-28644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28644);
loc_82311A90:
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

__attribute__((alias("__imp__sub_82311AA4"))) PPC_WEAK_FUNC(sub_82311AA4);
PPC_FUNC_IMPL(__imp__sub_82311AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311AA8"))) PPC_WEAK_FUNC(sub_82311AA8);
PPC_FUNC_IMPL(__imp__sub_82311AA8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311ae0
	if (!ctx.cr6.eq) goto loc_82311AE0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82608a98
	ctx.lr = 0x82311AD4;
	sub_82608A98(ctx, base);
	// stw r3,-28532(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28532, ctx.r3.u32);
	// bl 0x82608b58
	ctx.lr = 0x82311ADC;
	sub_82608B58(ctx, base);
	// lwz r3,-28532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28532);
loc_82311AE0:
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

__attribute__((alias("__imp__sub_82311AF4"))) PPC_WEAK_FUNC(sub_82311AF4);
PPC_FUNC_IMPL(__imp__sub_82311AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311AF8"))) PPC_WEAK_FUNC(sub_82311AF8);
PPC_FUNC_IMPL(__imp__sub_82311AF8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27512);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311b30
	if (!ctx.cr6.eq) goto loc_82311B30;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82703c40
	ctx.lr = 0x82311B24;
	sub_82703C40(ctx, base);
	// stw r3,-27512(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27512, ctx.r3.u32);
	// bl 0x82703d00
	ctx.lr = 0x82311B2C;
	sub_82703D00(ctx, base);
	// lwz r3,-27512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27512);
loc_82311B30:
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

__attribute__((alias("__imp__sub_82311B44"))) PPC_WEAK_FUNC(sub_82311B44);
PPC_FUNC_IMPL(__imp__sub_82311B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311B48"))) PPC_WEAK_FUNC(sub_82311B48);
PPC_FUNC_IMPL(__imp__sub_82311B48) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28636);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311b80
	if (!ctx.cr6.eq) goto loc_82311B80;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826051d0
	ctx.lr = 0x82311B74;
	sub_826051D0(ctx, base);
	// stw r3,-28636(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28636, ctx.r3.u32);
	// bl 0x82605290
	ctx.lr = 0x82311B7C;
	sub_82605290(ctx, base);
	// lwz r3,-28636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28636);
loc_82311B80:
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

__attribute__((alias("__imp__sub_82311B94"))) PPC_WEAK_FUNC(sub_82311B94);
PPC_FUNC_IMPL(__imp__sub_82311B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311B98"))) PPC_WEAK_FUNC(sub_82311B98);
PPC_FUNC_IMPL(__imp__sub_82311B98) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311bd0
	if (!ctx.cr6.eq) goto loc_82311BD0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82601b38
	ctx.lr = 0x82311BC4;
	sub_82601B38(ctx, base);
	// stw r3,-28736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28736, ctx.r3.u32);
	// bl 0x82601bf8
	ctx.lr = 0x82311BCC;
	sub_82601BF8(ctx, base);
	// lwz r3,-28736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28736);
loc_82311BD0:
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

__attribute__((alias("__imp__sub_82311BE4"))) PPC_WEAK_FUNC(sub_82311BE4);
PPC_FUNC_IMPL(__imp__sub_82311BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311BE8"))) PPC_WEAK_FUNC(sub_82311BE8);
PPC_FUNC_IMPL(__imp__sub_82311BE8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28720);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311c20
	if (!ctx.cr6.eq) goto loc_82311C20;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826023f0
	ctx.lr = 0x82311C14;
	sub_826023F0(ctx, base);
	// stw r3,-28720(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28720, ctx.r3.u32);
	// bl 0x826024b0
	ctx.lr = 0x82311C1C;
	sub_826024B0(ctx, base);
	// lwz r3,-28720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28720);
loc_82311C20:
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

__attribute__((alias("__imp__sub_82311C34"))) PPC_WEAK_FUNC(sub_82311C34);
PPC_FUNC_IMPL(__imp__sub_82311C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311C38"))) PPC_WEAK_FUNC(sub_82311C38);
PPC_FUNC_IMPL(__imp__sub_82311C38) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28680);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311c70
	if (!ctx.cr6.eq) goto loc_82311C70;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826039c0
	ctx.lr = 0x82311C64;
	sub_826039C0(ctx, base);
	// stw r3,-28680(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28680, ctx.r3.u32);
	// bl 0x82603a80
	ctx.lr = 0x82311C6C;
	sub_82603A80(ctx, base);
	// lwz r3,-28680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28680);
loc_82311C70:
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

__attribute__((alias("__imp__sub_82311C84"))) PPC_WEAK_FUNC(sub_82311C84);
PPC_FUNC_IMPL(__imp__sub_82311C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311C88"))) PPC_WEAK_FUNC(sub_82311C88);
PPC_FUNC_IMPL(__imp__sub_82311C88) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311cc0
	if (!ctx.cr6.eq) goto loc_82311CC0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82659b18
	ctx.lr = 0x82311CB4;
	sub_82659B18(ctx, base);
	// stw r3,-28164(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28164, ctx.r3.u32);
	// bl 0x82659bd8
	ctx.lr = 0x82311CBC;
	sub_82659BD8(ctx, base);
	// lwz r3,-28164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28164);
loc_82311CC0:
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

__attribute__((alias("__imp__sub_82311CD4"))) PPC_WEAK_FUNC(sub_82311CD4);
PPC_FUNC_IMPL(__imp__sub_82311CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311CD8"))) PPC_WEAK_FUNC(sub_82311CD8);
PPC_FUNC_IMPL(__imp__sub_82311CD8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311d10
	if (!ctx.cr6.eq) goto loc_82311D10;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8264c5d0
	ctx.lr = 0x82311D04;
	sub_8264C5D0(ctx, base);
	// stw r3,-28232(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28232, ctx.r3.u32);
	// bl 0x8264c690
	ctx.lr = 0x82311D0C;
	sub_8264C690(ctx, base);
	// lwz r3,-28232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28232);
loc_82311D10:
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

__attribute__((alias("__imp__sub_82311D24"))) PPC_WEAK_FUNC(sub_82311D24);
PPC_FUNC_IMPL(__imp__sub_82311D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311D28"))) PPC_WEAK_FUNC(sub_82311D28);
PPC_FUNC_IMPL(__imp__sub_82311D28) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28560);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311d60
	if (!ctx.cr6.eq) goto loc_82311D60;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82607b58
	ctx.lr = 0x82311D54;
	sub_82607B58(ctx, base);
	// stw r3,-28560(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28560, ctx.r3.u32);
	// bl 0x82607c18
	ctx.lr = 0x82311D5C;
	sub_82607C18(ctx, base);
	// lwz r3,-28560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28560);
loc_82311D60:
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

__attribute__((alias("__imp__sub_82311D74"))) PPC_WEAK_FUNC(sub_82311D74);
PPC_FUNC_IMPL(__imp__sub_82311D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311D78"))) PPC_WEAK_FUNC(sub_82311D78);
PPC_FUNC_IMPL(__imp__sub_82311D78) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27664);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311db0
	if (!ctx.cr6.eq) goto loc_82311DB0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826e0bf8
	ctx.lr = 0x82311DA4;
	sub_826E0BF8(ctx, base);
	// stw r3,-27664(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27664, ctx.r3.u32);
	// bl 0x826e0cb8
	ctx.lr = 0x82311DAC;
	sub_826E0CB8(ctx, base);
	// lwz r3,-27664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27664);
loc_82311DB0:
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

__attribute__((alias("__imp__sub_82311DC4"))) PPC_WEAK_FUNC(sub_82311DC4);
PPC_FUNC_IMPL(__imp__sub_82311DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311DC8"))) PPC_WEAK_FUNC(sub_82311DC8);
PPC_FUNC_IMPL(__imp__sub_82311DC8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311e00
	if (!ctx.cr6.eq) goto loc_82311E00;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826e07a8
	ctx.lr = 0x82311DF4;
	sub_826E07A8(ctx, base);
	// stw r3,-27672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27672, ctx.r3.u32);
	// bl 0x826e0868
	ctx.lr = 0x82311DFC;
	sub_826E0868(ctx, base);
	// lwz r3,-27672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27672);
loc_82311E00:
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

__attribute__((alias("__imp__sub_82311E14"))) PPC_WEAK_FUNC(sub_82311E14);
PPC_FUNC_IMPL(__imp__sub_82311E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311E18"))) PPC_WEAK_FUNC(sub_82311E18);
PPC_FUNC_IMPL(__imp__sub_82311E18) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27668);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311e50
	if (!ctx.cr6.eq) goto loc_82311E50;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826e09d0
	ctx.lr = 0x82311E44;
	sub_826E09D0(ctx, base);
	// stw r3,-27668(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27668, ctx.r3.u32);
	// bl 0x826e0a90
	ctx.lr = 0x82311E4C;
	sub_826E0A90(ctx, base);
	// lwz r3,-27668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27668);
loc_82311E50:
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

__attribute__((alias("__imp__sub_82311E64"))) PPC_WEAK_FUNC(sub_82311E64);
PPC_FUNC_IMPL(__imp__sub_82311E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311E68"))) PPC_WEAK_FUNC(sub_82311E68);
PPC_FUNC_IMPL(__imp__sub_82311E68) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27952);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311ea0
	if (!ctx.cr6.eq) goto loc_82311EA0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826865e8
	ctx.lr = 0x82311E94;
	sub_826865E8(ctx, base);
	// stw r3,-27952(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27952, ctx.r3.u32);
	// bl 0x826866a8
	ctx.lr = 0x82311E9C;
	sub_826866A8(ctx, base);
	// lwz r3,-27952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27952);
loc_82311EA0:
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

__attribute__((alias("__imp__sub_82311EB4"))) PPC_WEAK_FUNC(sub_82311EB4);
PPC_FUNC_IMPL(__imp__sub_82311EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311EB8"))) PPC_WEAK_FUNC(sub_82311EB8);
PPC_FUNC_IMPL(__imp__sub_82311EB8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28916);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311ef0
	if (!ctx.cr6.eq) goto loc_82311EF0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825d7710
	ctx.lr = 0x82311EE4;
	sub_825D7710(ctx, base);
	// stw r3,-28916(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28916, ctx.r3.u32);
	// bl 0x825d77d0
	ctx.lr = 0x82311EEC;
	sub_825D77D0(ctx, base);
	// lwz r3,-28916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28916);
loc_82311EF0:
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

__attribute__((alias("__imp__sub_82311F04"))) PPC_WEAK_FUNC(sub_82311F04);
PPC_FUNC_IMPL(__imp__sub_82311F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311F08"))) PPC_WEAK_FUNC(sub_82311F08);
PPC_FUNC_IMPL(__imp__sub_82311F08) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28496);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311f40
	if (!ctx.cr6.eq) goto loc_82311F40;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82609e38
	ctx.lr = 0x82311F34;
	sub_82609E38(ctx, base);
	// stw r3,-28496(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28496, ctx.r3.u32);
	// bl 0x82609ef8
	ctx.lr = 0x82311F3C;
	sub_82609EF8(ctx, base);
	// lwz r3,-28496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28496);
loc_82311F40:
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

__attribute__((alias("__imp__sub_82311F54"))) PPC_WEAK_FUNC(sub_82311F54);
PPC_FUNC_IMPL(__imp__sub_82311F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311F58"))) PPC_WEAK_FUNC(sub_82311F58);
PPC_FUNC_IMPL(__imp__sub_82311F58) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-26120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311f90
	if (!ctx.cr6.eq) goto loc_82311F90;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827d04c8
	ctx.lr = 0x82311F84;
	sub_827D04C8(ctx, base);
	// stw r3,-26120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26120, ctx.r3.u32);
	// bl 0x827d0588
	ctx.lr = 0x82311F8C;
	sub_827D0588(ctx, base);
	// lwz r3,-26120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26120);
loc_82311F90:
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

__attribute__((alias("__imp__sub_82311FA4"))) PPC_WEAK_FUNC(sub_82311FA4);
PPC_FUNC_IMPL(__imp__sub_82311FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311FA8"))) PPC_WEAK_FUNC(sub_82311FA8);
PPC_FUNC_IMPL(__imp__sub_82311FA8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82311fe0
	if (!ctx.cr6.eq) goto loc_82311FE0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82600e00
	ctx.lr = 0x82311FD4;
	sub_82600E00(ctx, base);
	// stw r3,-28760(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28760, ctx.r3.u32);
	// bl 0x82600ec0
	ctx.lr = 0x82311FDC;
	sub_82600EC0(ctx, base);
	// lwz r3,-28760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28760);
loc_82311FE0:
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

__attribute__((alias("__imp__sub_82311FF4"))) PPC_WEAK_FUNC(sub_82311FF4);
PPC_FUNC_IMPL(__imp__sub_82311FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311FF8"))) PPC_WEAK_FUNC(sub_82311FF8);
PPC_FUNC_IMPL(__imp__sub_82311FF8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312030
	if (!ctx.cr6.eq) goto loc_82312030;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826000e8
	ctx.lr = 0x82312024;
	sub_826000E8(ctx, base);
	// stw r3,-28784(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28784, ctx.r3.u32);
	// bl 0x826001a8
	ctx.lr = 0x8231202C;
	sub_826001A8(ctx, base);
	// lwz r3,-28784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28784);
loc_82312030:
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

__attribute__((alias("__imp__sub_82312044"))) PPC_WEAK_FUNC(sub_82312044);
PPC_FUNC_IMPL(__imp__sub_82312044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312048"))) PPC_WEAK_FUNC(sub_82312048);
PPC_FUNC_IMPL(__imp__sub_82312048) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28788);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312080
	if (!ctx.cr6.eq) goto loc_82312080;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825ffeb8
	ctx.lr = 0x82312074;
	sub_825FFEB8(ctx, base);
	// stw r3,-28788(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28788, ctx.r3.u32);
	// bl 0x825fff78
	ctx.lr = 0x8231207C;
	sub_825FFF78(ctx, base);
	// lwz r3,-28788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28788);
loc_82312080:
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

__attribute__((alias("__imp__sub_82312094"))) PPC_WEAK_FUNC(sub_82312094);
PPC_FUNC_IMPL(__imp__sub_82312094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312098"))) PPC_WEAK_FUNC(sub_82312098);
PPC_FUNC_IMPL(__imp__sub_82312098) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27476);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823120d0
	if (!ctx.cr6.eq) goto loc_823120D0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82714128
	ctx.lr = 0x823120C4;
	sub_82714128(ctx, base);
	// stw r3,-27476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27476, ctx.r3.u32);
	// bl 0x827141e8
	ctx.lr = 0x823120CC;
	sub_827141E8(ctx, base);
	// lwz r3,-27476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27476);
loc_823120D0:
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

__attribute__((alias("__imp__sub_823120E4"))) PPC_WEAK_FUNC(sub_823120E4);
PPC_FUNC_IMPL(__imp__sub_823120E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823120E8"))) PPC_WEAK_FUNC(sub_823120E8);
PPC_FUNC_IMPL(__imp__sub_823120E8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28792);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312120
	if (!ctx.cr6.eq) goto loc_82312120;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825ffc88
	ctx.lr = 0x82312114;
	sub_825FFC88(ctx, base);
	// stw r3,-28792(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28792, ctx.r3.u32);
	// bl 0x825ffd48
	ctx.lr = 0x8231211C;
	sub_825FFD48(ctx, base);
	// lwz r3,-28792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28792);
loc_82312120:
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

__attribute__((alias("__imp__sub_82312134"))) PPC_WEAK_FUNC(sub_82312134);
PPC_FUNC_IMPL(__imp__sub_82312134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312138"))) PPC_WEAK_FUNC(sub_82312138);
PPC_FUNC_IMPL(__imp__sub_82312138) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312170
	if (!ctx.cr6.eq) goto loc_82312170;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82603e20
	ctx.lr = 0x82312164;
	sub_82603E20(ctx, base);
	// stw r3,-28672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28672, ctx.r3.u32);
	// bl 0x82603ee0
	ctx.lr = 0x8231216C;
	sub_82603EE0(ctx, base);
	// lwz r3,-28672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28672);
loc_82312170:
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

__attribute__((alias("__imp__sub_82312184"))) PPC_WEAK_FUNC(sub_82312184);
PPC_FUNC_IMPL(__imp__sub_82312184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312188"))) PPC_WEAK_FUNC(sub_82312188);
PPC_FUNC_IMPL(__imp__sub_82312188) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28632);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823121c0
	if (!ctx.cr6.eq) goto loc_823121C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82605400
	ctx.lr = 0x823121B4;
	sub_82605400(ctx, base);
	// stw r3,-28632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28632, ctx.r3.u32);
	// bl 0x826054c0
	ctx.lr = 0x823121BC;
	sub_826054C0(ctx, base);
	// lwz r3,-28632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28632);
loc_823121C0:
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

__attribute__((alias("__imp__sub_823121D4"))) PPC_WEAK_FUNC(sub_823121D4);
PPC_FUNC_IMPL(__imp__sub_823121D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823121D8"))) PPC_WEAK_FUNC(sub_823121D8);
PPC_FUNC_IMPL(__imp__sub_823121D8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312210
	if (!ctx.cr6.eq) goto loc_82312210;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82606128
	ctx.lr = 0x82312204;
	sub_82606128(ctx, base);
	// stw r3,-28608(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28608, ctx.r3.u32);
	// bl 0x826061d8
	ctx.lr = 0x8231220C;
	sub_826061D8(ctx, base);
	// lwz r3,-28608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28608);
loc_82312210:
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

__attribute__((alias("__imp__sub_82312224"))) PPC_WEAK_FUNC(sub_82312224);
PPC_FUNC_IMPL(__imp__sub_82312224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312228"))) PPC_WEAK_FUNC(sub_82312228);
PPC_FUNC_IMPL(__imp__sub_82312228) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312260
	if (!ctx.cr6.eq) goto loc_82312260;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8261b9c0
	ctx.lr = 0x82312254;
	sub_8261B9C0(ctx, base);
	// stw r3,-28468(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28468, ctx.r3.u32);
	// bl 0x8261ba80
	ctx.lr = 0x8231225C;
	sub_8261BA80(ctx, base);
	// lwz r3,-28468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28468);
loc_82312260:
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

__attribute__((alias("__imp__sub_82312274"))) PPC_WEAK_FUNC(sub_82312274);
PPC_FUNC_IMPL(__imp__sub_82312274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312278"))) PPC_WEAK_FUNC(sub_82312278);
PPC_FUNC_IMPL(__imp__sub_82312278) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-28656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823122b0
	if (!ctx.cr6.eq) goto loc_823122B0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826046e0
	ctx.lr = 0x823122A4;
	sub_826046E0(ctx, base);
	// stw r3,-28656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28656, ctx.r3.u32);
	// bl 0x826047a0
	ctx.lr = 0x823122AC;
	sub_826047A0(ctx, base);
	// lwz r3,-28656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28656);
loc_823122B0:
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

__attribute__((alias("__imp__sub_823122C4"))) PPC_WEAK_FUNC(sub_823122C4);
PPC_FUNC_IMPL(__imp__sub_823122C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

