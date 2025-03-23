#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83041448"))) PPC_WEAK_FUNC(sub_83041448);
PPC_FUNC_IMPL(__imp__sub_83041448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83041450;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83040fd8
	ctx.lr = 0x83041464;
	sub_83040FD8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83041480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83041488"))) PPC_WEAK_FUNC(sub_83041488);
PPC_FUNC_IMPL(__imp__sub_83041488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83041490;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83040fd8
	ctx.lr = 0x830414A4;
	sub_83040FD8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830414C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830414C8"))) PPC_WEAK_FUNC(sub_830414C8);
PPC_FUNC_IMPL(__imp__sub_830414C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x830414D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83040fd8
	ctx.lr = 0x830414E4;
	sub_83040FD8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83041500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83041508"))) PPC_WEAK_FUNC(sub_83041508);
PPC_FUNC_IMPL(__imp__sub_83041508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83041510;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83040fd8
	ctx.lr = 0x83041524;
	sub_83040FD8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83041540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83041548"))) PPC_WEAK_FUNC(sub_83041548);
PPC_FUNC_IMPL(__imp__sub_83041548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83041550;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83040fd8
	ctx.lr = 0x83041564;
	sub_83040FD8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83041580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83041588"))) PPC_WEAK_FUNC(sub_83041588);
PPC_FUNC_IMPL(__imp__sub_83041588) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,17776
	ctx.r10.s64 = ctx.r11.s64 + 17776;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82ffca80
	ctx.lr = 0x830415B4;
	sub_82FFCA80(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x830415cc
	if (ctx.cr6.eq) goto loc_830415CC;
	// bl 0x822990f0
	ctx.lr = 0x830415C8;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830415CC:
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

__attribute__((alias("__imp__sub_830415E4"))) PPC_WEAK_FUNC(sub_830415E4);
PPC_FUNC_IMPL(__imp__sub_830415E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830415E8"))) PPC_WEAK_FUNC(sub_830415E8);
PPC_FUNC_IMPL(__imp__sub_830415E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83041604
	if (ctx.cr6.eq) goto loc_83041604;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83041608
	if (ctx.cr6.lt) goto loc_83041608;
loc_83041604:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83041608:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041610"))) PPC_WEAK_FUNC(sub_83041610);
PPC_FUNC_IMPL(__imp__sub_83041610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83041628
	if (!ctx.cr6.lt) goto loc_83041628;
loc_83041620:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83041628:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83041620
	if (ctx.cr6.lt) goto loc_83041620;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041654"))) PPC_WEAK_FUNC(sub_83041654);
PPC_FUNC_IMPL(__imp__sub_83041654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041658"))) PPC_WEAK_FUNC(sub_83041658);
PPC_FUNC_IMPL(__imp__sub_83041658) {
	PPC_FUNC_PROLOGUE();
	// b 0x833b7f64
	__imp__KeTlsGetValue(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304165C"))) PPC_WEAK_FUNC(sub_8304165C);
PPC_FUNC_IMPL(__imp__sub_8304165C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041660"))) PPC_WEAK_FUNC(sub_83041660);
PPC_FUNC_IMPL(__imp__sub_83041660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83041668;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// add r4,r31,r29
	ctx.r4.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83041698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830416C8"))) PPC_WEAK_FUNC(sub_830416C8);
PPC_FUNC_IMPL(__imp__sub_830416C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,-4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830416F4"))) PPC_WEAK_FUNC(sub_830416F4);
PPC_FUNC_IMPL(__imp__sub_830416F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830416F8"))) PPC_WEAK_FUNC(sub_830416F8);
PPC_FUNC_IMPL(__imp__sub_830416F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// or r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041708"))) PPC_WEAK_FUNC(sub_83041708);
PPC_FUNC_IMPL(__imp__sub_83041708) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041720"))) PPC_WEAK_FUNC(sub_83041720);
PPC_FUNC_IMPL(__imp__sub_83041720) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304172C"))) PPC_WEAK_FUNC(sub_8304172C);
PPC_FUNC_IMPL(__imp__sub_8304172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041730"))) PPC_WEAK_FUNC(sub_83041730);
PPC_FUNC_IMPL(__imp__sub_83041730) {
	PPC_FUNC_PROLOGUE();
	// b 0x833b8b04
	__imp__InterlockedFlushSList(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83041734"))) PPC_WEAK_FUNC(sub_83041734);
PPC_FUNC_IMPL(__imp__sub_83041734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041738"))) PPC_WEAK_FUNC(sub_83041738);
PPC_FUNC_IMPL(__imp__sub_83041738) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041750"))) PPC_WEAK_FUNC(sub_83041750);
PPC_FUNC_IMPL(__imp__sub_83041750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r10,24264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83041770"))) PPC_WEAK_FUNC(sub_83041770);
PPC_FUNC_IMPL(__imp__sub_83041770) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041774"))) PPC_WEAK_FUNC(sub_83041774);
PPC_FUNC_IMPL(__imp__sub_83041774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041778"))) PPC_WEAK_FUNC(sub_83041778);
PPC_FUNC_IMPL(__imp__sub_83041778) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041784"))) PPC_WEAK_FUNC(sub_83041784);
PPC_FUNC_IMPL(__imp__sub_83041784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041788"))) PPC_WEAK_FUNC(sub_83041788);
PPC_FUNC_IMPL(__imp__sub_83041788) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041790"))) PPC_WEAK_FUNC(sub_83041790);
PPC_FUNC_IMPL(__imp__sub_83041790) {
	PPC_FUNC_PROLOGUE();
	// stb r4,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041798"))) PPC_WEAK_FUNC(sub_83041798);
PPC_FUNC_IMPL(__imp__sub_83041798) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x830417c8
	if (!ctx.cr6.eq) goto loc_830417C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8304182c
	goto loc_8304182C;
loc_830417C8:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83041814
	if (!ctx.cr6.eq) goto loc_83041814;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r9,24264(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83041814
	if (ctx.cr6.eq) goto loc_83041814;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83041814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83041814:
	// lhz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8304182C:
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

__attribute__((alias("__imp__sub_83041844"))) PPC_WEAK_FUNC(sub_83041844);
PPC_FUNC_IMPL(__imp__sub_83041844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041848"))) PPC_WEAK_FUNC(sub_83041848);
PPC_FUNC_IMPL(__imp__sub_83041848) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 36);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8304185c
	if (!ctx.cr6.eq) goto loc_8304185C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8304185C:
	// lbz r11,39(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 39);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83041888"))) PPC_WEAK_FUNC(sub_83041888);
PPC_FUNC_IMPL(__imp__sub_83041888) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,19912
	ctx.r9.s64 = ctx.r10.s64 + 19912;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830418A8"))) PPC_WEAK_FUNC(sub_830418A8);
PPC_FUNC_IMPL(__imp__sub_830418A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830418B0"))) PPC_WEAK_FUNC(sub_830418B0);
PPC_FUNC_IMPL(__imp__sub_830418B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830418B8"))) PPC_WEAK_FUNC(sub_830418B8);
PPC_FUNC_IMPL(__imp__sub_830418B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830418BC"))) PPC_WEAK_FUNC(sub_830418BC);
PPC_FUNC_IMPL(__imp__sub_830418BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830418C0"))) PPC_WEAK_FUNC(sub_830418C0);
PPC_FUNC_IMPL(__imp__sub_830418C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830418C4"))) PPC_WEAK_FUNC(sub_830418C4);
PPC_FUNC_IMPL(__imp__sub_830418C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830418C8"))) PPC_WEAK_FUNC(sub_830418C8);
PPC_FUNC_IMPL(__imp__sub_830418C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,19912
	ctx.r10.s64 = ctx.r11.s64 + 19912;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830418D8"))) PPC_WEAK_FUNC(sub_830418D8);
PPC_FUNC_IMPL(__imp__sub_830418D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830418DC"))) PPC_WEAK_FUNC(sub_830418DC);
PPC_FUNC_IMPL(__imp__sub_830418DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830418E0"))) PPC_WEAK_FUNC(sub_830418E0);
PPC_FUNC_IMPL(__imp__sub_830418E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830418E4"))) PPC_WEAK_FUNC(sub_830418E4);
PPC_FUNC_IMPL(__imp__sub_830418E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830418E8"))) PPC_WEAK_FUNC(sub_830418E8);
PPC_FUNC_IMPL(__imp__sub_830418E8) {
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
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x833b7f64
	ctx.lr = 0x83041904;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83041914
	if (!ctx.cr6.eq) goto loc_83041914;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831c2d18
	ctx.lr = 0x83041914;
	sub_831C2D18(ctx, base);
loc_83041914:
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

__attribute__((alias("__imp__sub_83041928"))) PPC_WEAK_FUNC(sub_83041928);
PPC_FUNC_IMPL(__imp__sub_83041928) {
	PPC_FUNC_PROLOGUE();
	// dcbt r4,r3
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041930"))) PPC_WEAK_FUNC(sub_83041930);
PPC_FUNC_IMPL(__imp__sub_83041930) {
	PPC_FUNC_PROLOGUE();
	// dcbt r0,r3
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r3
	// li r10,256
	ctx.r10.s64 = 256;
	// dcbt r10,r3
	// li r9,384
	ctx.r9.s64 = 384;
	// dcbt r9,r3
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041950"))) PPC_WEAK_FUNC(sub_83041950);
PPC_FUNC_IMPL(__imp__sub_83041950) {
	PPC_FUNC_PROLOGUE();
	// dcbt r0,r3
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r3
	// li r10,256
	ctx.r10.s64 = 256;
	// dcbt r10,r3
	// li r9,384
	ctx.r9.s64 = 384;
	// dcbt r9,r3
	// li r8,512
	ctx.r8.s64 = 512;
	// dcbt r8,r3
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041978"))) PPC_WEAK_FUNC(sub_83041978);
PPC_FUNC_IMPL(__imp__sub_83041978) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041990"))) PPC_WEAK_FUNC(sub_83041990);
PPC_FUNC_IMPL(__imp__sub_83041990) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041998"))) PPC_WEAK_FUNC(sub_83041998);
PPC_FUNC_IMPL(__imp__sub_83041998) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830419A0"))) PPC_WEAK_FUNC(sub_830419A0);
PPC_FUNC_IMPL(__imp__sub_830419A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,252
	ctx.r3.s64 = ctx.r3.s64 + 252;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830419A8"))) PPC_WEAK_FUNC(sub_830419A8);
PPC_FUNC_IMPL(__imp__sub_830419A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830419B0"))) PPC_WEAK_FUNC(sub_830419B0);
PPC_FUNC_IMPL(__imp__sub_830419B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830419B8"))) PPC_WEAK_FUNC(sub_830419B8);
PPC_FUNC_IMPL(__imp__sub_830419B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830419C0"))) PPC_WEAK_FUNC(sub_830419C0);
PPC_FUNC_IMPL(__imp__sub_830419C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830419C8"))) PPC_WEAK_FUNC(sub_830419C8);
PPC_FUNC_IMPL(__imp__sub_830419C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830419D4"))) PPC_WEAK_FUNC(sub_830419D4);
PPC_FUNC_IMPL(__imp__sub_830419D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830419D8"))) PPC_WEAK_FUNC(sub_830419D8);
PPC_FUNC_IMPL(__imp__sub_830419D8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// bne cr6,0x830419f0
	if (!ctx.cr6.eq) goto loc_830419F0;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_830419F0:
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830419F8"))) PPC_WEAK_FUNC(sub_830419F8);
PPC_FUNC_IMPL(__imp__sub_830419F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041A04"))) PPC_WEAK_FUNC(sub_83041A04);
PPC_FUNC_IMPL(__imp__sub_83041A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041A08"))) PPC_WEAK_FUNC(sub_83041A08);
PPC_FUNC_IMPL(__imp__sub_83041A08) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// bne cr6,0x83041a20
	if (!ctx.cr6.eq) goto loc_83041A20;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_83041A20:
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041A28"))) PPC_WEAK_FUNC(sub_83041A28);
PPC_FUNC_IMPL(__imp__sub_83041A28) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041A30"))) PPC_WEAK_FUNC(sub_83041A30);
PPC_FUNC_IMPL(__imp__sub_83041A30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041A40"))) PPC_WEAK_FUNC(sub_83041A40);
PPC_FUNC_IMPL(__imp__sub_83041A40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041A50"))) PPC_WEAK_FUNC(sub_83041A50);
PPC_FUNC_IMPL(__imp__sub_83041A50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041A58"))) PPC_WEAK_FUNC(sub_83041A58);
PPC_FUNC_IMPL(__imp__sub_83041A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r3,r7,1
	ctx.r3.u64 = ctx.r7.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041A74"))) PPC_WEAK_FUNC(sub_83041A74);
PPC_FUNC_IMPL(__imp__sub_83041A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041A78"))) PPC_WEAK_FUNC(sub_83041A78);
PPC_FUNC_IMPL(__imp__sub_83041A78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83041a9c
	if (!ctx.cr6.eq) goto loc_83041A9C;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83041aa0
	if (!ctx.cr6.eq) goto loc_83041AA0;
loc_83041A9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83041AA0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041AA8"))) PPC_WEAK_FUNC(sub_83041AA8);
PPC_FUNC_IMPL(__imp__sub_83041AA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041AB0"))) PPC_WEAK_FUNC(sub_83041AB0);
PPC_FUNC_IMPL(__imp__sub_83041AB0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041AB8"))) PPC_WEAK_FUNC(sub_83041AB8);
PPC_FUNC_IMPL(__imp__sub_83041AB8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041AC0"))) PPC_WEAK_FUNC(sub_83041AC0);
PPC_FUNC_IMPL(__imp__sub_83041AC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041AF0"))) PPC_WEAK_FUNC(sub_83041AF0);
PPC_FUNC_IMPL(__imp__sub_83041AF0) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83041b30
	if (ctx.cr6.eq) goto loc_83041B30;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83041B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_83041B30:
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

__attribute__((alias("__imp__sub_83041B44"))) PPC_WEAK_FUNC(sub_83041B44);
PPC_FUNC_IMPL(__imp__sub_83041B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041B48"))) PPC_WEAK_FUNC(sub_83041B48);
PPC_FUNC_IMPL(__imp__sub_83041B48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041B78"))) PPC_WEAK_FUNC(sub_83041B78);
PPC_FUNC_IMPL(__imp__sub_83041B78) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83041bb8
	if (ctx.cr6.eq) goto loc_83041BB8;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83041BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_83041BB8:
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

__attribute__((alias("__imp__sub_83041BCC"))) PPC_WEAK_FUNC(sub_83041BCC);
PPC_FUNC_IMPL(__imp__sub_83041BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041BD0"))) PPC_WEAK_FUNC(sub_83041BD0);
PPC_FUNC_IMPL(__imp__sub_83041BD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d5ec30
	sub_82D5EC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83041BD4"))) PPC_WEAK_FUNC(sub_83041BD4);
PPC_FUNC_IMPL(__imp__sub_83041BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041BD8"))) PPC_WEAK_FUNC(sub_83041BD8);
PPC_FUNC_IMPL(__imp__sub_83041BD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d5ed58
	sub_82D5ED58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83041BDC"))) PPC_WEAK_FUNC(sub_83041BDC);
PPC_FUNC_IMPL(__imp__sub_83041BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041BE0"))) PPC_WEAK_FUNC(sub_83041BE0);
PPC_FUNC_IMPL(__imp__sub_83041BE0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// bl 0x82d5ec30
	ctx.lr = 0x83041C00;
	sub_82D5EC30(ctx, base);
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

__attribute__((alias("__imp__sub_83041C18"))) PPC_WEAK_FUNC(sub_83041C18);
PPC_FUNC_IMPL(__imp__sub_83041C18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82d5ed58
	sub_82D5ED58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83041C20"))) PPC_WEAK_FUNC(sub_83041C20);
PPC_FUNC_IMPL(__imp__sub_83041C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041C28"))) PPC_WEAK_FUNC(sub_83041C28);
PPC_FUNC_IMPL(__imp__sub_83041C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041C30"))) PPC_WEAK_FUNC(sub_83041C30);
PPC_FUNC_IMPL(__imp__sub_83041C30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,360(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041C38"))) PPC_WEAK_FUNC(sub_83041C38);
PPC_FUNC_IMPL(__imp__sub_83041C38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041C50"))) PPC_WEAK_FUNC(sub_83041C50);
PPC_FUNC_IMPL(__imp__sub_83041C50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1160
	ctx.r3.s64 = ctx.r3.s64 + 1160;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041C58"))) PPC_WEAK_FUNC(sub_83041C58);
PPC_FUNC_IMPL(__imp__sub_83041C58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// b 0x83073e48
	sub_83073E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83041C60"))) PPC_WEAK_FUNC(sub_83041C60);
PPC_FUNC_IMPL(__imp__sub_83041C60) {
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
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// bl 0x83073ed0
	ctx.lr = 0x83041C7C;
	sub_83073ED0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041C8C"))) PPC_WEAK_FUNC(sub_83041C8C);
PPC_FUNC_IMPL(__imp__sub_83041C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041C90"))) PPC_WEAK_FUNC(sub_83041C90);
PPC_FUNC_IMPL(__imp__sub_83041C90) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x83041cbc
	if (ctx.cr6.eq) goto loc_83041CBC;
	// cmplwi cr6,r5,65535
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65535, ctx.xer);
	// beq cr6,0x83041cbc
	if (ctx.cr6.eq) goto loc_83041CBC;
	// addi r11,r4,112
	ctx.r11.s64 = ctx.r4.s64 + 112;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r10,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// and r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 & ctx.r8.u64;
	// blr 
	return;
loc_83041CBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041CC4"))) PPC_WEAK_FUNC(sub_83041CC4);
PPC_FUNC_IMPL(__imp__sub_83041CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041CC8"))) PPC_WEAK_FUNC(sub_83041CC8);
PPC_FUNC_IMPL(__imp__sub_83041CC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041CDC"))) PPC_WEAK_FUNC(sub_83041CDC);
PPC_FUNC_IMPL(__imp__sub_83041CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041CE0"))) PPC_WEAK_FUNC(sub_83041CE0);
PPC_FUNC_IMPL(__imp__sub_83041CE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041CF0"))) PPC_WEAK_FUNC(sub_83041CF0);
PPC_FUNC_IMPL(__imp__sub_83041CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041D00"))) PPC_WEAK_FUNC(sub_83041D00);
PPC_FUNC_IMPL(__imp__sub_83041D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041D08"))) PPC_WEAK_FUNC(sub_83041D08);
PPC_FUNC_IMPL(__imp__sub_83041D08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041D20"))) PPC_WEAK_FUNC(sub_83041D20);
PPC_FUNC_IMPL(__imp__sub_83041D20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041D2C"))) PPC_WEAK_FUNC(sub_83041D2C);
PPC_FUNC_IMPL(__imp__sub_83041D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041D30"))) PPC_WEAK_FUNC(sub_83041D30);
PPC_FUNC_IMPL(__imp__sub_83041D30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | ctx.r11.u64;
	// stw r10,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041D40"))) PPC_WEAK_FUNC(sub_83041D40);
PPC_FUNC_IMPL(__imp__sub_83041D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// andc r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// stw r10,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041D50"))) PPC_WEAK_FUNC(sub_83041D50);
PPC_FUNC_IMPL(__imp__sub_83041D50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,568(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041D58"))) PPC_WEAK_FUNC(sub_83041D58);
PPC_FUNC_IMPL(__imp__sub_83041D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041D60"))) PPC_WEAK_FUNC(sub_83041D60);
PPC_FUNC_IMPL(__imp__sub_83041D60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041D68"))) PPC_WEAK_FUNC(sub_83041D68);
PPC_FUNC_IMPL(__imp__sub_83041D68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x830775d0
	sub_830775D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83041D78"))) PPC_WEAK_FUNC(sub_83041D78);
PPC_FUNC_IMPL(__imp__sub_83041D78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041D7C"))) PPC_WEAK_FUNC(sub_83041D7C);
PPC_FUNC_IMPL(__imp__sub_83041D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041D80"))) PPC_WEAK_FUNC(sub_83041D80);
PPC_FUNC_IMPL(__imp__sub_83041D80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041D94"))) PPC_WEAK_FUNC(sub_83041D94);
PPC_FUNC_IMPL(__imp__sub_83041D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041D98"))) PPC_WEAK_FUNC(sub_83041D98);
PPC_FUNC_IMPL(__imp__sub_83041D98) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041DA8"))) PPC_WEAK_FUNC(sub_83041DA8);
PPC_FUNC_IMPL(__imp__sub_83041DA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041DB0"))) PPC_WEAK_FUNC(sub_83041DB0);
PPC_FUNC_IMPL(__imp__sub_83041DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r11,181(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 181);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83041e3c
	if (ctx.cr6.eq) goto loc_83041E3C;
	// lwz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r7,r31,152
	ctx.r7.s64 = ctx.r31.s64 + 152;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// lwz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,152(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r7,164(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r8,r3,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x8315c0a8
	ctx.lr = 0x83041E38;
	sub_8315C0A8(ctx, base);
	// stb r30,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r30.u8);
loc_83041E3C:
	// lbz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83041e90
	if (ctx.cr6.eq) goto loc_83041E90;
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// li r6,24
	ctx.r6.s64 = 24;
	// lfs f13,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f11,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f10,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8315bd60
	ctx.lr = 0x83041E8C;
	sub_8315BD60(ctx, base);
	// stb r30,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r30.u8);
loc_83041E90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_83041EA8"))) PPC_WEAK_FUNC(sub_83041EA8);
PPC_FUNC_IMPL(__imp__sub_83041EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041EE4"))) PPC_WEAK_FUNC(sub_83041EE4);
PPC_FUNC_IMPL(__imp__sub_83041EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041EE8"))) PPC_WEAK_FUNC(sub_83041EE8);
PPC_FUNC_IMPL(__imp__sub_83041EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,52
	ctx.r6.s64 = 52;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x8315bec8
	ctx.lr = 0x83041F10;
	sub_8315BEC8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f13,172(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f12,176(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f11,152(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f10,156(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f9,160(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f8,164(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f7,128(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f6,132(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f5,136(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f4,140(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f3,144(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f2,148(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041F8C"))) PPC_WEAK_FUNC(sub_83041F8C);
PPC_FUNC_IMPL(__imp__sub_83041F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041F90"))) PPC_WEAK_FUNC(sub_83041F90);
PPC_FUNC_IMPL(__imp__sub_83041F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f10,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f9,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041FC4"))) PPC_WEAK_FUNC(sub_83041FC4);
PPC_FUNC_IMPL(__imp__sub_83041FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041FC8"))) PPC_WEAK_FUNC(sub_83041FC8);
PPC_FUNC_IMPL(__imp__sub_83041FC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041FD0"))) PPC_WEAK_FUNC(sub_83041FD0);
PPC_FUNC_IMPL(__imp__sub_83041FD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041FD8"))) PPC_WEAK_FUNC(sub_83041FD8);
PPC_FUNC_IMPL(__imp__sub_83041FD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041FE0"))) PPC_WEAK_FUNC(sub_83041FE0);
PPC_FUNC_IMPL(__imp__sub_83041FE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,300(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041FE8"))) PPC_WEAK_FUNC(sub_83041FE8);
PPC_FUNC_IMPL(__imp__sub_83041FE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041FF4"))) PPC_WEAK_FUNC(sub_83041FF4);
PPC_FUNC_IMPL(__imp__sub_83041FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83041FF8"))) PPC_WEAK_FUNC(sub_83041FF8);
PPC_FUNC_IMPL(__imp__sub_83041FF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042000"))) PPC_WEAK_FUNC(sub_83042000);
PPC_FUNC_IMPL(__imp__sub_83042000) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042014"))) PPC_WEAK_FUNC(sub_83042014);
PPC_FUNC_IMPL(__imp__sub_83042014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042018"))) PPC_WEAK_FUNC(sub_83042018);
PPC_FUNC_IMPL(__imp__sub_83042018) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042024"))) PPC_WEAK_FUNC(sub_83042024);
PPC_FUNC_IMPL(__imp__sub_83042024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042028"))) PPC_WEAK_FUNC(sub_83042028);
PPC_FUNC_IMPL(__imp__sub_83042028) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,292(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042030"))) PPC_WEAK_FUNC(sub_83042030);
PPC_FUNC_IMPL(__imp__sub_83042030) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// andc r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// stw r10,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042040"))) PPC_WEAK_FUNC(sub_83042040);
PPC_FUNC_IMPL(__imp__sub_83042040) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042058"))) PPC_WEAK_FUNC(sub_83042058);
PPC_FUNC_IMPL(__imp__sub_83042058) {
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
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83042098
	if (!ctx.cr6.eq) goto loc_83042098;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830420cc
	if (ctx.cr6.eq) goto loc_830420CC;
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r8,280(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x830420cc
	if (ctx.cr6.eq) goto loc_830420CC;
loc_83042098:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830420ac
	if (ctx.cr6.eq) goto loc_830420AC;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
loc_830420AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830420CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830420CC:
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
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

__attribute__((alias("__imp__sub_830420E4"))) PPC_WEAK_FUNC(sub_830420E4);
PPC_FUNC_IMPL(__imp__sub_830420E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830420E8"))) PPC_WEAK_FUNC(sub_830420E8);
PPC_FUNC_IMPL(__imp__sub_830420E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830420F0"))) PPC_WEAK_FUNC(sub_830420F0);
PPC_FUNC_IMPL(__imp__sub_830420F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042108"))) PPC_WEAK_FUNC(sub_83042108);
PPC_FUNC_IMPL(__imp__sub_83042108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// or r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042118"))) PPC_WEAK_FUNC(sub_83042118);
PPC_FUNC_IMPL(__imp__sub_83042118) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042130"))) PPC_WEAK_FUNC(sub_83042130);
PPC_FUNC_IMPL(__imp__sub_83042130) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83042158
	if (!ctx.cr6.eq) goto loc_83042158;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d532d0
	ctx.lr = 0x83042158;
	sub_82D532D0(ctx, base);
loc_83042158:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
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

__attribute__((alias("__imp__sub_83042170"))) PPC_WEAK_FUNC(sub_83042170);
PPC_FUNC_IMPL(__imp__sub_83042170) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r11,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042180"))) PPC_WEAK_FUNC(sub_83042180);
PPC_FUNC_IMPL(__imp__sub_83042180) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042190"))) PPC_WEAK_FUNC(sub_83042190);
PPC_FUNC_IMPL(__imp__sub_83042190) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042198"))) PPC_WEAK_FUNC(sub_83042198);
PPC_FUNC_IMPL(__imp__sub_83042198) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830421A0"))) PPC_WEAK_FUNC(sub_830421A0);
PPC_FUNC_IMPL(__imp__sub_830421A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r3,r11,0,29,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830421AC"))) PPC_WEAK_FUNC(sub_830421AC);
PPC_FUNC_IMPL(__imp__sub_830421AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830421B0"))) PPC_WEAK_FUNC(sub_830421B0);
PPC_FUNC_IMPL(__imp__sub_830421B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x830421dc
	if (ctx.cr6.eq) goto loc_830421DC;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830421dc
	if (!ctx.cr6.eq) goto loc_830421DC;
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x830421e0
	if (!ctx.cr6.eq) goto loc_830421E0;
loc_830421DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830421E0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830421E8"))) PPC_WEAK_FUNC(sub_830421E8);
PPC_FUNC_IMPL(__imp__sub_830421E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r3,r11,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830421F4"))) PPC_WEAK_FUNC(sub_830421F4);
PPC_FUNC_IMPL(__imp__sub_830421F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830421F8"))) PPC_WEAK_FUNC(sub_830421F8);
PPC_FUNC_IMPL(__imp__sub_830421F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042204"))) PPC_WEAK_FUNC(sub_83042204);
PPC_FUNC_IMPL(__imp__sub_83042204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042208"))) PPC_WEAK_FUNC(sub_83042208);
PPC_FUNC_IMPL(__imp__sub_83042208) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// oris r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 2097152;
	// bne cr6,0x83042220
	if (!ctx.cr6.eq) goto loc_83042220;
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
loc_83042220:
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042228"))) PPC_WEAK_FUNC(sub_83042228);
PPC_FUNC_IMPL(__imp__sub_83042228) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// oris r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 8388608;
	// bne cr6,0x83042240
	if (!ctx.cr6.eq) goto loc_83042240;
	// rlwinm r10,r11,0,9,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
loc_83042240:
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042248"))) PPC_WEAK_FUNC(sub_83042248);
PPC_FUNC_IMPL(__imp__sub_83042248) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r3,r11,10,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042254"))) PPC_WEAK_FUNC(sub_83042254);
PPC_FUNC_IMPL(__imp__sub_83042254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042258"))) PPC_WEAK_FUNC(sub_83042258);
PPC_FUNC_IMPL(__imp__sub_83042258) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// oris r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 16777216;
	// bne cr6,0x83042270
	if (!ctx.cr6.eq) goto loc_83042270;
	// rlwinm r10,r11,0,8,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
loc_83042270:
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042278"))) PPC_WEAK_FUNC(sub_83042278);
PPC_FUNC_IMPL(__imp__sub_83042278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r3,r11,9,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042284"))) PPC_WEAK_FUNC(sub_83042284);
PPC_FUNC_IMPL(__imp__sub_83042284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042288"))) PPC_WEAK_FUNC(sub_83042288);
PPC_FUNC_IMPL(__imp__sub_83042288) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042294"))) PPC_WEAK_FUNC(sub_83042294);
PPC_FUNC_IMPL(__imp__sub_83042294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042298"))) PPC_WEAK_FUNC(sub_83042298);
PPC_FUNC_IMPL(__imp__sub_83042298) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830422A0"))) PPC_WEAK_FUNC(sub_830422A0);
PPC_FUNC_IMPL(__imp__sub_830422A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83042300
	if (!ctx.cr6.eq) goto loc_83042300;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830422e4
	if (ctx.cr6.eq) goto loc_830422E4;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83042300
	if (!ctx.cr6.eq) goto loc_83042300;
	// lwz r9,200(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83042300
	if (ctx.cr6.eq) goto loc_83042300;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830422f8
	if (!ctx.cr6.eq) goto loc_830422F8;
loc_830422E4:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83042300
	if (ctx.cr6.eq) goto loc_83042300;
loc_830422F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83042300:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042308"))) PPC_WEAK_FUNC(sub_83042308);
PPC_FUNC_IMPL(__imp__sub_83042308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83042394
	if (!ctx.cr6.eq) goto loc_83042394;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r9,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r9.u32);
	// bne cr6,0x83042394
	if (!ctx.cr6.eq) goto loc_83042394;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r10,264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830423b0
	if (ctx.cr6.eq) goto loc_830423B0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83042374
	if (!ctx.cr6.eq) goto loc_83042374;
	// lwz r8,84(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
loc_83042374:
	// lwz r9,520(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 520, ctx.r9.u32);
loc_83042380:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83042394
	if (ctx.cr6.eq) goto loc_83042394;
	// lwz r11,520(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 520);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 520, ctx.r11.u32);
loc_83042394:
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// ori r8,r10,16388
	ctx.r8.u64 = ctx.r10.u64 | 16388;
	// stw r9,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r9.u32);
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// blr 
	return;
loc_830423B0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83042394
	if (ctx.cr6.eq) goto loc_83042394;
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// b 0x83042380
	goto loc_83042380;
}

__attribute__((alias("__imp__sub_830423CC"))) PPC_WEAK_FUNC(sub_830423CC);
PPC_FUNC_IMPL(__imp__sub_830423CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830423D0"))) PPC_WEAK_FUNC(sub_830423D0);
PPC_FUNC_IMPL(__imp__sub_830423D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830424c4
	if (ctx.cr6.eq) goto loc_830424C4;
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// bne 0x830424c4
	if (!ctx.cr0.eq) goto loc_830424C4;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r9,r11,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lwz r7,116(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// bne cr6,0x830424c4
	if (!ctx.cr6.eq) goto loc_830424C4;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r31,264(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r30,264(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83042498
	if (ctx.cr6.eq) goto loc_83042498;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83042470
	if (!ctx.cr6.eq) goto loc_83042470;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,-18136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8307a200
	ctx.lr = 0x83042460;
	sub_8307A200(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
loc_83042470:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
loc_8304247C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83042490
	if (ctx.cr6.eq) goto loc_83042490;
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r11.u32);
loc_83042490:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830424c8
	goto loc_830424C8;
loc_83042498:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83042490
	if (ctx.cr6.eq) goto loc_83042490;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,-18136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8307a200
	ctx.lr = 0x830424B0;
	sub_8307A200(ctx, base);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// b 0x8304247c
	goto loc_8304247C;
loc_830424C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830424C8:
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

__attribute__((alias("__imp__sub_830424E0"))) PPC_WEAK_FUNC(sub_830424E0);
PPC_FUNC_IMPL(__imp__sub_830424E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,748(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 748);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830424E8"))) PPC_WEAK_FUNC(sub_830424E8);
PPC_FUNC_IMPL(__imp__sub_830424E8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 748, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830424F0"))) PPC_WEAK_FUNC(sub_830424F0);
PPC_FUNC_IMPL(__imp__sub_830424F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f5,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f3,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f2,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lhz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 56);
	// sth r10,56(r3)
	PPC_STORE_U16(ctx.r3.u32 + 56, ctx.r10.u16);
	// lfs f1,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,60(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f13,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f12,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f11,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,76(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lwz r9,80(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// lfs f10,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f9,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,88(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f8,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,92(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f7,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,96(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830425BC"))) PPC_WEAK_FUNC(sub_830425BC);
PPC_FUNC_IMPL(__imp__sub_830425BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830425C0"))) PPC_WEAK_FUNC(sub_830425C0);
PPC_FUNC_IMPL(__imp__sub_830425C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830425C4"))) PPC_WEAK_FUNC(sub_830425C4);
PPC_FUNC_IMPL(__imp__sub_830425C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830425C8"))) PPC_WEAK_FUNC(sub_830425C8);
PPC_FUNC_IMPL(__imp__sub_830425C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,20488
	ctx.r10.s64 = ctx.r11.s64 + 20488;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830425D8"))) PPC_WEAK_FUNC(sub_830425D8);
PPC_FUNC_IMPL(__imp__sub_830425D8) {
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
	// bl 0x82d5eb78
	ctx.lr = 0x830425F0;
	sub_82D5EB78(ctx, base);
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

__attribute__((alias("__imp__sub_83042608"))) PPC_WEAK_FUNC(sub_83042608);
PPC_FUNC_IMPL(__imp__sub_83042608) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d5ebd8
	sub_82D5EBD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304260C"))) PPC_WEAK_FUNC(sub_8304260C);
PPC_FUNC_IMPL(__imp__sub_8304260C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042610"))) PPC_WEAK_FUNC(sub_83042610);
PPC_FUNC_IMPL(__imp__sub_83042610) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
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
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042690"))) PPC_WEAK_FUNC(sub_83042690);
PPC_FUNC_IMPL(__imp__sub_83042690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83042698;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r30,-31901
	ctx.r30.s64 = -2090663936;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830426cc
	if (ctx.cr6.eq) goto loc_830426CC;
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830426C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
loc_830426CC:
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830426f0
	if (ctx.cr6.eq) goto loc_830426F0;
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830426EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
loc_830426F0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83042714
	if (ctx.cr6.eq) goto loc_83042714;
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83042710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_83042714:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304271C"))) PPC_WEAK_FUNC(sub_8304271C);
PPC_FUNC_IMPL(__imp__sub_8304271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042720"))) PPC_WEAK_FUNC(sub_83042720);
PPC_FUNC_IMPL(__imp__sub_83042720) {
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
	// bl 0x8307eb00
	ctx.lr = 0x83042740;
	sub_8307EB00(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83042768
	if (ctx.cr6.eq) goto loc_83042768;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83042768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83042768:
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

__attribute__((alias("__imp__sub_83042784"))) PPC_WEAK_FUNC(sub_83042784);
PPC_FUNC_IMPL(__imp__sub_83042784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042788"))) PPC_WEAK_FUNC(sub_83042788);
PPC_FUNC_IMPL(__imp__sub_83042788) {
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
	// bl 0x83074998
	ctx.lr = 0x830427A8;
	sub_83074998(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830427d0
	if (ctx.cr6.eq) goto loc_830427D0;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830427D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830427D0:
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

__attribute__((alias("__imp__sub_830427EC"))) PPC_WEAK_FUNC(sub_830427EC);
PPC_FUNC_IMPL(__imp__sub_830427EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830427F0"))) PPC_WEAK_FUNC(sub_830427F0);
PPC_FUNC_IMPL(__imp__sub_830427F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x830427F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,60(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r31,72(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83042840
	if (ctx.cr6.eq) goto loc_83042840;
loc_83042810:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83042838
	if (!ctx.cr6.eq) goto loc_83042838;
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r3,r29,52
	ctx.r3.s64 = ctx.r29.s64 + 52;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x831c4990
	ctx.lr = 0x83042838;
	sub_831C4990(ctx, base);
loc_83042838:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83042810
	if (!ctx.cr6.eq) goto loc_83042810;
loc_83042840:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83042848"))) PPC_WEAK_FUNC(sub_83042848);
PPC_FUNC_IMPL(__imp__sub_83042848) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// b 0x830744e8
	sub_830744E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83042850"))) PPC_WEAK_FUNC(sub_83042850);
PPC_FUNC_IMPL(__imp__sub_83042850) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// b 0x83074540
	sub_83074540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83042858"))) PPC_WEAK_FUNC(sub_83042858);
PPC_FUNC_IMPL(__imp__sub_83042858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304287C"))) PPC_WEAK_FUNC(sub_8304287C);
PPC_FUNC_IMPL(__imp__sub_8304287C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042880"))) PPC_WEAK_FUNC(sub_83042880);
PPC_FUNC_IMPL(__imp__sub_83042880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,80(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304289C"))) PPC_WEAK_FUNC(sub_8304289C);
PPC_FUNC_IMPL(__imp__sub_8304289C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830428A0"))) PPC_WEAK_FUNC(sub_830428A0);
PPC_FUNC_IMPL(__imp__sub_830428A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x830428A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r3,52
	ctx.r31.s64 = ctx.r3.s64 + 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,292(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x831c44a8
	ctx.lr = 0x830428D0;
	sub_831C44A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830428f4
	if (ctx.cr6.eq) goto loc_830428F4;
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,292(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x831c4990
	ctx.lr = 0x830428F4;
	sub_831C4990(ctx, base);
loc_830428F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830428FC"))) PPC_WEAK_FUNC(sub_830428FC);
PPC_FUNC_IMPL(__imp__sub_830428FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042900"))) PPC_WEAK_FUNC(sub_83042900);
PPC_FUNC_IMPL(__imp__sub_83042900) {
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
	// lwz r11,292(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 292);
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// lwz r10,292(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 292);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x831c44a8
	ctx.lr = 0x83042924;
	sub_831C44A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8304293c
	if (!ctx.cr6.eq) goto loc_8304293C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8304293C:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83042950
	if (ctx.cr6.eq) goto loc_83042950;
	// li r3,1
	ctx.r3.s64 = 1;
loc_83042950:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042960"))) PPC_WEAK_FUNC(sub_83042960);
PPC_FUNC_IMPL(__imp__sub_83042960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83042968;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r30,60(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r31,72(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830429cc
	if (ctx.cr6.eq) goto loc_830429CC;
loc_83042984:
	// lwz r11,292(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830429b4
	if (ctx.cr6.eq) goto loc_830429B4;
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830429b4
	if (ctx.cr6.eq) goto loc_830429B4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// b 0x830429c4
	goto loc_830429C4;
loc_830429B4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r3,r29,52
	ctx.r3.s64 = ctx.r29.s64 + 52;
	// bl 0x831c4990
	ctx.lr = 0x830429C4;
	sub_831C4990(ctx, base);
loc_830429C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83042984
	if (!ctx.cr6.eq) goto loc_83042984;
loc_830429CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830429D4"))) PPC_WEAK_FUNC(sub_830429D4);
PPC_FUNC_IMPL(__imp__sub_830429D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830429D8"))) PPC_WEAK_FUNC(sub_830429D8);
PPC_FUNC_IMPL(__imp__sub_830429D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830429E0"))) PPC_WEAK_FUNC(sub_830429E0);
PPC_FUNC_IMPL(__imp__sub_830429E0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x83042a2c
	if (!ctx.cr6.eq) goto loc_83042A2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83042A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83042A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83042A2C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83042a78
	if (ctx.cr6.eq) goto loc_83042A78;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83042a78
	if (ctx.cr6.eq) goto loc_83042A78;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x83042a78
	if (!ctx.cr6.eq) goto loc_83042A78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83042A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83042A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83042A78:
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

__attribute__((alias("__imp__sub_83042A90"))) PPC_WEAK_FUNC(sub_83042A90);
PPC_FUNC_IMPL(__imp__sub_83042A90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042A94"))) PPC_WEAK_FUNC(sub_83042A94);
PPC_FUNC_IMPL(__imp__sub_83042A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042A98"))) PPC_WEAK_FUNC(sub_83042A98);
PPC_FUNC_IMPL(__imp__sub_83042A98) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r30,264(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x83042ae4
	if (!ctx.cr6.eq) goto loc_83042AE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83042AD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83042AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83042AE4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83042b28
	if (ctx.cr6.eq) goto loc_83042B28;
	// lbz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83042b28
	if (ctx.cr6.eq) goto loc_83042B28;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x83042b28
	if (!ctx.cr6.eq) goto loc_83042B28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83042B18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83042B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83042B28:
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

__attribute__((alias("__imp__sub_83042B40"))) PPC_WEAK_FUNC(sub_83042B40);
PPC_FUNC_IMPL(__imp__sub_83042B40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042B44"))) PPC_WEAK_FUNC(sub_83042B44);
PPC_FUNC_IMPL(__imp__sub_83042B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042B48"))) PPC_WEAK_FUNC(sub_83042B48);
PPC_FUNC_IMPL(__imp__sub_83042B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042B60"))) PPC_WEAK_FUNC(sub_83042B60);
PPC_FUNC_IMPL(__imp__sub_83042B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042B68"))) PPC_WEAK_FUNC(sub_83042B68);
PPC_FUNC_IMPL(__imp__sub_83042B68) {
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
	// addi r4,r4,648
	ctx.r4.s64 = ctx.r4.s64 + 648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831bf830
	ctx.lr = 0x83042B84;
	sub_831BF830(ctx, base);
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

__attribute__((alias("__imp__sub_83042B9C"))) PPC_WEAK_FUNC(sub_83042B9C);
PPC_FUNC_IMPL(__imp__sub_83042B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042BA0"))) PPC_WEAK_FUNC(sub_83042BA0);
PPC_FUNC_IMPL(__imp__sub_83042BA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,236(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8307f1e8
	sub_8307F1E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83042BB0"))) PPC_WEAK_FUNC(sub_83042BB0);
PPC_FUNC_IMPL(__imp__sub_83042BB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042BB4"))) PPC_WEAK_FUNC(sub_83042BB4);
PPC_FUNC_IMPL(__imp__sub_83042BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042BB8"))) PPC_WEAK_FUNC(sub_83042BB8);
PPC_FUNC_IMPL(__imp__sub_83042BB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x83042bd4
	if (!ctx.cr6.eq) goto loc_83042BD4;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83042BD4:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x83042bec
	if (!ctx.cr6.eq) goto loc_83042BEC;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83042BEC:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x83042c04
	if (!ctx.cr6.eq) goto loc_83042C04;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83042C04:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x83042c1c
	if (!ctx.cr6.eq) goto loc_83042C1C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83042C1C:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x83042c2c
	if (!ctx.cr6.eq) goto loc_83042C2C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83042C2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042C34"))) PPC_WEAK_FUNC(sub_83042C34);
PPC_FUNC_IMPL(__imp__sub_83042C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042C38"))) PPC_WEAK_FUNC(sub_83042C38);
PPC_FUNC_IMPL(__imp__sub_83042C38) {
	PPC_FUNC_PROLOGUE();
	// stw r4,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042C40"))) PPC_WEAK_FUNC(sub_83042C40);
PPC_FUNC_IMPL(__imp__sub_83042C40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,324(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042C48"))) PPC_WEAK_FUNC(sub_83042C48);
PPC_FUNC_IMPL(__imp__sub_83042C48) {
	PPC_FUNC_PROLOGUE();
	// stw r4,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042C50"))) PPC_WEAK_FUNC(sub_83042C50);
PPC_FUNC_IMPL(__imp__sub_83042C50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042C58"))) PPC_WEAK_FUNC(sub_83042C58);
PPC_FUNC_IMPL(__imp__sub_83042C58) {
	PPC_FUNC_PROLOGUE();
	// stw r4,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042C60"))) PPC_WEAK_FUNC(sub_83042C60);
PPC_FUNC_IMPL(__imp__sub_83042C60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042C68"))) PPC_WEAK_FUNC(sub_83042C68);
PPC_FUNC_IMPL(__imp__sub_83042C68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r4,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042C78"))) PPC_WEAK_FUNC(sub_83042C78);
PPC_FUNC_IMPL(__imp__sub_83042C78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,340(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042C80"))) PPC_WEAK_FUNC(sub_83042C80);
PPC_FUNC_IMPL(__imp__sub_83042C80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,336(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042C88"))) PPC_WEAK_FUNC(sub_83042C88);
PPC_FUNC_IMPL(__imp__sub_83042C88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r4,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042C98"))) PPC_WEAK_FUNC(sub_83042C98);
PPC_FUNC_IMPL(__imp__sub_83042C98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r4,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r4.u32);
	// stw r10,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042CB4"))) PPC_WEAK_FUNC(sub_83042CB4);
PPC_FUNC_IMPL(__imp__sub_83042CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042CB8"))) PPC_WEAK_FUNC(sub_83042CB8);
PPC_FUNC_IMPL(__imp__sub_83042CB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// bne cr6,0x83042ce4
	if (!ctx.cr6.eq) goto loc_83042CE4;
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// blr 
	return;
loc_83042CE4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83042d04
	if (ctx.cr6.eq) goto loc_83042D04;
loc_83042CEC:
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x83042d20
	if (ctx.cr6.eq) goto loc_83042D20;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83042cec
	if (!ctx.cr6.eq) goto loc_83042CEC;
loc_83042D04:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,18344
	ctx.r4.s64 = ctx.r11.s64 + 18344;
	// li r5,1695
	ctx.r5.s64 = 1695;
	// addi r7,r4,-56
	ctx.r7.s64 = ctx.r4.s64 + -56;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82d17988
	sub_82D17988(ctx, base);
	return;
loc_83042D20:
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042D34"))) PPC_WEAK_FUNC(sub_83042D34);
PPC_FUNC_IMPL(__imp__sub_83042D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042D38"))) PPC_WEAK_FUNC(sub_83042D38);
PPC_FUNC_IMPL(__imp__sub_83042D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,244(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042D40"))) PPC_WEAK_FUNC(sub_83042D40);
PPC_FUNC_IMPL(__imp__sub_83042D40) {
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
	// lwz r31,156(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83042d7c
	if (ctx.cr6.eq) goto loc_83042D7C;
loc_83042D5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83042D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83042d5c
	if (!ctx.cr6.eq) goto loc_83042D5C;
loc_83042D7C:
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

__attribute__((alias("__imp__sub_83042D90"))) PPC_WEAK_FUNC(sub_83042D90);
PPC_FUNC_IMPL(__imp__sub_83042D90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83042dcc
	if (!ctx.cr6.eq) goto loc_83042DCC;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,22552
	ctx.r9.s64 = ctx.r11.s64 + 22552;
	// lfs f13,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,132(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83042ddc
	if (ctx.cr6.eq) goto loc_83042DDC;
loc_83042DCC:
	// addi r5,r31,220
	ctx.r5.s64 = ctx.r31.s64 + 220;
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83074830
	ctx.lr = 0x83042DDC;
	sub_83074830(ctx, base);
loc_83042DDC:
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x83074928
	ctx.lr = 0x83042DE8;
	sub_83074928(ctx, base);
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

__attribute__((alias("__imp__sub_83042DFC"))) PPC_WEAK_FUNC(sub_83042DFC);
PPC_FUNC_IMPL(__imp__sub_83042DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042E00"))) PPC_WEAK_FUNC(sub_83042E00);
PPC_FUNC_IMPL(__imp__sub_83042E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83042E08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83042e5c
	if (ctx.cr6.eq) goto loc_83042E5C;
	// lis r29,-1
	ctx.r29.s64 = -65536;
loc_83042E20:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c0028
	ctx.lr = 0x83042E34;
	sub_831C0028(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r3,r11,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x83042e00
	ctx.lr = 0x83042E44;
	sub_83042E00(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83042e5c
	if (ctx.cr6.eq) goto loc_83042E5C;
	// addic. r31,r11,40
	ctx.xer.ca = ctx.r11.u32 > 4294967255;
	ctx.r31.s64 = ctx.r11.s64 + 40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83042e20
	if (!ctx.cr0.eq) goto loc_83042E20;
loc_83042E5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83042E64"))) PPC_WEAK_FUNC(sub_83042E64);
PPC_FUNC_IMPL(__imp__sub_83042E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042E68"))) PPC_WEAK_FUNC(sub_83042E68);
PPC_FUNC_IMPL(__imp__sub_83042E68) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042E78"))) PPC_WEAK_FUNC(sub_83042E78);
PPC_FUNC_IMPL(__imp__sub_83042E78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042E80"))) PPC_WEAK_FUNC(sub_83042E80);
PPC_FUNC_IMPL(__imp__sub_83042E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83042E88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83042f10
	if (ctx.cr6.eq) goto loc_83042F10;
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r31,228(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x83042ef8
	if (!ctx.cr6.lt) goto loc_83042EF8;
loc_83042EB4:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r4,36
	ctx.r11.s64 = ctx.r4.s64 + 36;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83042ed8
	if (ctx.cr6.eq) goto loc_83042ED8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_83042ED8:
	// lwz r3,328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83042EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83042eb4
	if (ctx.cr6.lt) goto loc_83042EB4;
loc_83042EF8:
	// lwz r10,224(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// addi r11,r30,220
	ctx.r11.s64 = ctx.r30.s64 + 220;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83042f10
	if (ctx.cr6.eq) goto loc_83042F10;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83042F10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83042F18"))) PPC_WEAK_FUNC(sub_83042F18);
PPC_FUNC_IMPL(__imp__sub_83042F18) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83042F28:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83042f28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83042F28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042F40"))) PPC_WEAK_FUNC(sub_83042F40);
PPC_FUNC_IMPL(__imp__sub_83042F40) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83042f74
	if (ctx.cr6.eq) goto loc_83042F74;
loc_83042F6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83042fd4
	goto loc_83042FD4;
loc_83042F74:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83042fc0
	if (!ctx.cr6.eq) goto loc_83042FC0;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// li r5,9
	ctx.r5.s64 = 9;
	// ori r4,r4,5116
	ctx.r4.u64 = ctx.r4.u64 | 5116;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83042FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83042fb8
	if (ctx.cr6.eq) goto loc_83042FB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8307f638
	ctx.lr = 0x83042FB4;
	sub_8307F638(ctx, base);
	// b 0x83042fbc
	goto loc_83042FBC;
loc_83042FB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83042FBC:
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
loc_83042FC0:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83042f6c
	if (ctx.cr6.eq) goto loc_83042F6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8307f8a0
	ctx.lr = 0x83042FD4;
	sub_8307F8A0(ctx, base);
loc_83042FD4:
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

__attribute__((alias("__imp__sub_83042FEC"))) PPC_WEAK_FUNC(sub_83042FEC);
PPC_FUNC_IMPL(__imp__sub_83042FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83042FF0"))) PPC_WEAK_FUNC(sub_83042FF0);
PPC_FUNC_IMPL(__imp__sub_83042FF0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83043000:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83043000
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83043000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043018"))) PPC_WEAK_FUNC(sub_83043018);
PPC_FUNC_IMPL(__imp__sub_83043018) {
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
	// lwz r31,148(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83043048
	if (ctx.cr6.eq) goto loc_83043048;
loc_83043034:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83081dc8
	ctx.lr = 0x8304303C;
	sub_83081DC8(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83043034
	if (!ctx.cr6.eq) goto loc_83043034;
loc_83043048:
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

__attribute__((alias("__imp__sub_8304305C"))) PPC_WEAK_FUNC(sub_8304305C);
PPC_FUNC_IMPL(__imp__sub_8304305C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83043060"))) PPC_WEAK_FUNC(sub_83043060);
PPC_FUNC_IMPL(__imp__sub_83043060) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,348(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043068"))) PPC_WEAK_FUNC(sub_83043068);
PPC_FUNC_IMPL(__imp__sub_83043068) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043070"))) PPC_WEAK_FUNC(sub_83043070);
PPC_FUNC_IMPL(__imp__sub_83043070) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,344(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043078"))) PPC_WEAK_FUNC(sub_83043078);
PPC_FUNC_IMPL(__imp__sub_83043078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83043080;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r31,320
	ctx.r28.s64 = ctx.r31.s64 + 320;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d5ec30
	ctx.lr = 0x8304309C;
	sub_82D5EC30(ctx, base);
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r29,r30,224
	ctx.r29.s64 = ctx.r30.s64 + 224;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r27,263(r30)
	PPC_STORE_U8(ctx.r30.u32 + 263, ctx.r27.u8);
	// bl 0x831c69a8
	ctx.lr = 0x830430BC;
	sub_831C69A8(ctx, base);
	// lwz r10,312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x830430d8
	if (!ctx.cr6.eq) goto loc_830430D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x831c6de0
	ctx.lr = 0x830430D8;
	sub_831C6DE0(ctx, base);
loc_830430D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830430EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,19368
	ctx.r29.s64 = ctx.r11.s64 + 19368;
	// beq cr6,0x83043140
	if (ctx.cr6.eq) goto loc_83043140;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83043110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x83043140
	if (!ctx.cr6.eq) goto loc_83043140;
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83043140
	if (!ctx.cr6.eq) goto loc_83043140;
	// addi r7,r29,-168
	ctx.r7.s64 = ctx.r29.s64 + -168;
	// addi r4,r29,-128
	ctx.r4.s64 = ctx.r29.s64 + -128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3127
	ctx.r5.s64 = 3127;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x82d17988
	ctx.lr = 0x83043140;
	sub_82D17988(ctx, base);
loc_83043140:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83043154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83043184
	if (ctx.cr6.eq) goto loc_83043184;
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83043184
	if (ctx.cr6.eq) goto loc_83043184;
	// addi r7,r29,-32
	ctx.r7.s64 = ctx.r29.s64 + -32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3129
	ctx.r5.s64 = 3129;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x82d17988
	ctx.lr = 0x83043184;
	sub_82D17988(ctx, base);
loc_83043184:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83043198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x83074540
	ctx.lr = 0x830431A4;
	sub_83074540(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x830431AC;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830431B4"))) PPC_WEAK_FUNC(sub_830431B4);
PPC_FUNC_IMPL(__imp__sub_830431B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830431B8"))) PPC_WEAK_FUNC(sub_830431B8);
PPC_FUNC_IMPL(__imp__sub_830431B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x830431C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,320
	ctx.r29.s64 = ctx.r31.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5ec30
	ctx.lr = 0x830431D8;
	sub_82D5EC30(ctx, base);
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// lwz r10,312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x83043200
	if (!ctx.cr6.eq) goto loc_83043200;
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x831c6e88
	ctx.lr = 0x83043200;
	sub_831C6E88(ctx, base);
loc_83043200:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83043208;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83043210"))) PPC_WEAK_FUNC(sub_83043210);
PPC_FUNC_IMPL(__imp__sub_83043210) {
	PPC_FUNC_PROLOGUE();
	// stw r4,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043218"))) PPC_WEAK_FUNC(sub_83043218);
PPC_FUNC_IMPL(__imp__sub_83043218) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,236(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043220"))) PPC_WEAK_FUNC(sub_83043220);
PPC_FUNC_IMPL(__imp__sub_83043220) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,772
	ctx.r3.s64 = ctx.r3.s64 + 772;
	// b 0x83083d80
	sub_83083D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83043228"))) PPC_WEAK_FUNC(sub_83043228);
PPC_FUNC_IMPL(__imp__sub_83043228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 768, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043238"))) PPC_WEAK_FUNC(sub_83043238);
PPC_FUNC_IMPL(__imp__sub_83043238) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83043254"))) PPC_WEAK_FUNC(sub_83043254);
PPC_FUNC_IMPL(__imp__sub_83043254) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043258"))) PPC_WEAK_FUNC(sub_83043258);
PPC_FUNC_IMPL(__imp__sub_83043258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304325C"))) PPC_WEAK_FUNC(sub_8304325C);
PPC_FUNC_IMPL(__imp__sub_8304325C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83043260"))) PPC_WEAK_FUNC(sub_83043260);
PPC_FUNC_IMPL(__imp__sub_83043260) {
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
	// lhz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830432a0
	if (ctx.cr6.eq) goto loc_830432A0;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r10.u32);
	// lhz r9,444(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 444);
	// sth r9,54(r4)
	PPC_STORE_U16(ctx.r4.u32 + 54, ctx.r9.u16);
	// bl 0x8307eb60
	ctx.lr = 0x8304329C;
	sub_8307EB60(ctx, base);
	// sth r3,444(r31)
	PPC_STORE_U16(ctx.r31.u32 + 444, ctx.r3.u16);
loc_830432A0:
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

