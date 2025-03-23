#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830182D4"))) PPC_WEAK_FUNC(sub_830182D4);
PPC_FUNC_IMPL(__imp__sub_830182D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830182D8"))) PPC_WEAK_FUNC(sub_830182D8);
PPC_FUNC_IMPL(__imp__sub_830182D8) {
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
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// lbz r31,199(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 199);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stb r31,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// bl 0x830129f8
	ctx.lr = 0x83018300;
	sub_830129F8(ctx, base);
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

__attribute__((alias("__imp__sub_83018314"))) PPC_WEAK_FUNC(sub_83018314);
PPC_FUNC_IMPL(__imp__sub_83018314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018318"))) PPC_WEAK_FUNC(sub_83018318);
PPC_FUNC_IMPL(__imp__sub_83018318) {
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
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// lbz r31,199(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 199);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stb r31,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// bl 0x83012ae8
	ctx.lr = 0x83018340;
	sub_83012AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83018354"))) PPC_WEAK_FUNC(sub_83018354);
PPC_FUNC_IMPL(__imp__sub_83018354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018358"))) PPC_WEAK_FUNC(sub_83018358);
PPC_FUNC_IMPL(__imp__sub_83018358) {
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
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// lbz r31,199(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 199);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stb r31,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// bl 0x83012bd8
	ctx.lr = 0x83018380;
	sub_83012BD8(ctx, base);
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

__attribute__((alias("__imp__sub_83018394"))) PPC_WEAK_FUNC(sub_83018394);
PPC_FUNC_IMPL(__imp__sub_83018394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018398"))) PPC_WEAK_FUNC(sub_83018398);
PPC_FUNC_IMPL(__imp__sub_83018398) {
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
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x83012cc8
	ctx.lr = 0x830183C0;
	sub_83012CC8(ctx, base);
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

__attribute__((alias("__imp__sub_830183D4"))) PPC_WEAK_FUNC(sub_830183D4);
PPC_FUNC_IMPL(__imp__sub_830183D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830183D8"))) PPC_WEAK_FUNC(sub_830183D8);
PPC_FUNC_IMPL(__imp__sub_830183D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83012db8
	sub_83012DB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830183E0"))) PPC_WEAK_FUNC(sub_830183E0);
PPC_FUNC_IMPL(__imp__sub_830183E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83012e40
	sub_83012E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830183E8"))) PPC_WEAK_FUNC(sub_830183E8);
PPC_FUNC_IMPL(__imp__sub_830183E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83012ec8
	sub_83012EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830183F0"))) PPC_WEAK_FUNC(sub_830183F0);
PPC_FUNC_IMPL(__imp__sub_830183F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83012f50
	sub_83012F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830183F8"))) PPC_WEAK_FUNC(sub_830183F8);
PPC_FUNC_IMPL(__imp__sub_830183F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83013008
	sub_83013008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018400"))) PPC_WEAK_FUNC(sub_83018400);
PPC_FUNC_IMPL(__imp__sub_83018400) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x830130c0
	sub_830130C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018408"))) PPC_WEAK_FUNC(sub_83018408);
PPC_FUNC_IMPL(__imp__sub_83018408) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83013178
	sub_83013178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018410"))) PPC_WEAK_FUNC(sub_83018410);
PPC_FUNC_IMPL(__imp__sub_83018410) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83013230
	sub_83013230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018418"))) PPC_WEAK_FUNC(sub_83018418);
PPC_FUNC_IMPL(__imp__sub_83018418) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83013360
	sub_83013360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018420"))) PPC_WEAK_FUNC(sub_83018420);
PPC_FUNC_IMPL(__imp__sub_83018420) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x830132c8
	sub_830132C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018428"))) PPC_WEAK_FUNC(sub_83018428);
PPC_FUNC_IMPL(__imp__sub_83018428) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x830133f8
	sub_830133F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018430"))) PPC_WEAK_FUNC(sub_83018430);
PPC_FUNC_IMPL(__imp__sub_83018430) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83013490
	sub_83013490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018438"))) PPC_WEAK_FUNC(sub_83018438);
PPC_FUNC_IMPL(__imp__sub_83018438) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83013518
	sub_83013518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018440"))) PPC_WEAK_FUNC(sub_83018440);
PPC_FUNC_IMPL(__imp__sub_83018440) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x830135a0
	sub_830135A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018448"))) PPC_WEAK_FUNC(sub_83018448);
PPC_FUNC_IMPL(__imp__sub_83018448) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83013628
	sub_83013628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018450"))) PPC_WEAK_FUNC(sub_83018450);
PPC_FUNC_IMPL(__imp__sub_83018450) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x830136b0
	sub_830136B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018458"))) PPC_WEAK_FUNC(sub_83018458);
PPC_FUNC_IMPL(__imp__sub_83018458) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83013728
	sub_83013728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018460"))) PPC_WEAK_FUNC(sub_83018460);
PPC_FUNC_IMPL(__imp__sub_83018460) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x830137a8
	sub_830137A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018468"))) PPC_WEAK_FUNC(sub_83018468);
PPC_FUNC_IMPL(__imp__sub_83018468) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83013a30
	sub_83013A30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018470"))) PPC_WEAK_FUNC(sub_83018470);
PPC_FUNC_IMPL(__imp__sub_83018470) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83013900
	sub_83013900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018478"))) PPC_WEAK_FUNC(sub_83018478);
PPC_FUNC_IMPL(__imp__sub_83018478) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83013ad0
	sub_83013AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018480"))) PPC_WEAK_FUNC(sub_83018480);
PPC_FUNC_IMPL(__imp__sub_83018480) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x830139a0
	sub_830139A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018488"))) PPC_WEAK_FUNC(sub_83018488);
PPC_FUNC_IMPL(__imp__sub_83018488) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83013b40
	sub_83013B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018490"))) PPC_WEAK_FUNC(sub_83018490);
PPC_FUNC_IMPL(__imp__sub_83018490) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83013bc8
	sub_83013BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018498"))) PPC_WEAK_FUNC(sub_83018498);
PPC_FUNC_IMPL(__imp__sub_83018498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x830184A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r30,264
	ctx.r29.s64 = ctx.r30.s64 + 264;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83016130
	ctx.lr = 0x830184B4;
	sub_83016130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830184c8
	if (!ctx.cr6.eq) goto loc_830184C8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_830184C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,360
	ctx.r3.s64 = ctx.r30.s64 + 360;
	// bl 0x8305af90
	ctx.lr = 0x830184D4;
	sub_8305AF90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83011478
	ctx.lr = 0x830184E0;
	sub_83011478(ctx, base);
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// addi r4,r11,712
	ctx.r4.s64 = ctx.r11.s64 + 712;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830184F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018504"))) PPC_WEAK_FUNC(sub_83018504);
PPC_FUNC_IMPL(__imp__sub_83018504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018508"))) PPC_WEAK_FUNC(sub_83018508);
PPC_FUNC_IMPL(__imp__sub_83018508) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x830118a8
	sub_830118A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018510"))) PPC_WEAK_FUNC(sub_83018510);
PPC_FUNC_IMPL(__imp__sub_83018510) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x830118c0
	sub_830118C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018518"))) PPC_WEAK_FUNC(sub_83018518);
PPC_FUNC_IMPL(__imp__sub_83018518) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83013c78
	sub_83013C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018520"))) PPC_WEAK_FUNC(sub_83018520);
PPC_FUNC_IMPL(__imp__sub_83018520) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// b 0x83013c80
	sub_83013C80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018528"))) PPC_WEAK_FUNC(sub_83018528);
PPC_FUNC_IMPL(__imp__sub_83018528) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x83018578
	if (ctx.cr6.lt) goto loc_83018578;
	// beq cr6,0x83018570
	if (ctx.cr6.eq) goto loc_83018570;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// beq cr6,0x83018568
	if (ctx.cr6.eq) goto loc_83018568;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x83018560
	if (!ctx.cr6.lt) goto loc_83018560;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_83018560:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83018568:
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// blr 
	return;
loc_83018570:
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// blr 
	return;
loc_83018578:
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018580"))) PPC_WEAK_FUNC(sub_83018580);
PPC_FUNC_IMPL(__imp__sub_83018580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f0,6148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830185A4"))) PPC_WEAK_FUNC(sub_830185A4);
PPC_FUNC_IMPL(__imp__sub_830185A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830185A8"))) PPC_WEAK_FUNC(sub_830185A8);
PPC_FUNC_IMPL(__imp__sub_830185A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830185c4
	if (ctx.cr6.eq) goto loc_830185C4;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x830185dc
	if (!ctx.cr6.gt) goto loc_830185DC;
loc_830185C4:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
loc_830185DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830185E8"))) PPC_WEAK_FUNC(sub_830185E8);
PPC_FUNC_IMPL(__imp__sub_830185E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x830185F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83018614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83018628
	if (!ctx.cr6.eq) goto loc_83018628;
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// b 0x83018654
	goto loc_83018654;
loc_83018628:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301863C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 7;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83018654:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301866c
	if (ctx.cr6.eq) goto loc_8301866C;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x83018678
	if (!ctx.cr6.gt) goto loc_83018678;
loc_8301866C:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_83018678:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018688"))) PPC_WEAK_FUNC(sub_83018688);
PPC_FUNC_IMPL(__imp__sub_83018688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lfs f0,6148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stfs f0,236(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// stfs f0,260(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830186FC"))) PPC_WEAK_FUNC(sub_830186FC);
PPC_FUNC_IMPL(__imp__sub_830186FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018700"))) PPC_WEAK_FUNC(sub_83018700);
PPC_FUNC_IMPL(__imp__sub_83018700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,6148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018728"))) PPC_WEAK_FUNC(sub_83018728);
PPC_FUNC_IMPL(__imp__sub_83018728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x83018730;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lis r24,-31901
	ctx.r24.s64 = -2090663936;
	// li r25,24
	ctx.r25.s64 = 24;
	// lwz r11,124(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 124);
	// lis r28,-31907
	ctx.r28.s64 = -2091057152;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830188b4
	if (ctx.cr6.eq) goto loc_830188B4;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301877c
	if (ctx.cr6.eq) goto loc_8301877C;
	// ld r11,-12704(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + -12704);
	// ld r10,80(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 80);
	// divdu r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 / ctx.r11.u64;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r8,128(r26)
	PPC_STORE_U32(ctx.r26.u32 + 128, ctx.r8.u32);
	// stw r8,132(r26)
	PPC_STORE_U32(ctx.r26.u32 + 132, ctx.r8.u32);
loc_8301877C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83018884
	if (ctx.cr6.gt) goto loc_83018884;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// divw r10,r10,r25
	ctx.r10.s32 = ctx.r10.s32 / ctx.r25.s32;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x830187b0
	if (!ctx.cr6.eq) goto loc_830187B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830187b8
	goto loc_830187B8;
loc_830187B0:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
loc_830187B8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83018884
	if (!ctx.cr6.lt) goto loc_83018884;
	// lwz r3,-32308(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -32308);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830187E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x83018834
	if (ctx.cr6.eq) goto loc_83018834;
loc_83018800:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r7,6
	ctx.r7.s64 = 6;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_83018810:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x83018810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83018810;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x83018800
	if (!ctx.cr6.eq) goto loc_83018800;
loc_83018834:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83018854
	if (ctx.cr6.eq) goto loc_83018854;
	// lwz r3,-32308(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83018854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83018854:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// divw r11,r8,r25
	ctx.r11.s32 = ctx.r8.s32 / ctx.r25.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_83018884:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r26,120
	ctx.r11.s64 = ctx.r26.s64 + 120;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83018894:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83018894
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83018894;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_830188B4:
	// lwz r11,148(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83018a1c
	if (ctx.cr6.eq) goto loc_83018A1C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830188e4
	if (ctx.cr6.eq) goto loc_830188E4;
	// ld r11,-12704(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + -12704);
	// ld r10,88(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 88);
	// divdu r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 / ctx.r11.u64;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r8,152(r26)
	PPC_STORE_U32(ctx.r26.u32 + 152, ctx.r8.u32);
	// stw r8,156(r26)
	PPC_STORE_U32(ctx.r26.u32 + 156, ctx.r8.u32);
loc_830188E4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x830189ec
	if (ctx.cr6.gt) goto loc_830189EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// divw r10,r10,r25
	ctx.r10.s32 = ctx.r10.s32 / ctx.r25.s32;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83018918
	if (!ctx.cr6.eq) goto loc_83018918;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83018920
	goto loc_83018920;
loc_83018918:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
loc_83018920:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830189ec
	if (!ctx.cr6.lt) goto loc_830189EC;
	// lwz r3,-32308(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -32308);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83018950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8301899c
	if (ctx.cr6.eq) goto loc_8301899C;
loc_83018968:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r7,6
	ctx.r7.s64 = 6;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_83018978:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x83018978
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83018978;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x83018968
	if (!ctx.cr6.eq) goto loc_83018968;
loc_8301899C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830189bc
	if (ctx.cr6.eq) goto loc_830189BC;
	// lwz r3,-32308(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830189BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830189BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// divw r11,r8,r25
	ctx.r11.s32 = ctx.r8.s32 / ctx.r25.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_830189EC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r26,144
	ctx.r11.s64 = ctx.r26.s64 + 144;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830189FC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x830189fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830189FC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83018A1C:
	// lwz r11,100(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83018b60
	if (ctx.cr6.eq) goto loc_83018B60;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83018b30
	if (ctx.cr6.gt) goto loc_83018B30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// divw r10,r10,r25
	ctx.r10.s32 = ctx.r10.s32 / ctx.r25.s32;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83018a5c
	if (!ctx.cr6.eq) goto loc_83018A5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83018a64
	goto loc_83018A64;
loc_83018A5C:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
loc_83018A64:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83018b30
	if (!ctx.cr6.lt) goto loc_83018B30;
	// lwz r3,-32308(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -32308);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83018A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x83018ae0
	if (ctx.cr6.eq) goto loc_83018AE0;
loc_83018AAC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r7,6
	ctx.r7.s64 = 6;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_83018ABC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x83018abc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83018ABC;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x83018aac
	if (!ctx.cr6.eq) goto loc_83018AAC;
loc_83018AE0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83018b00
	if (ctx.cr6.eq) goto loc_83018B00;
	// lwz r3,-32308(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83018B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83018B00:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// divw r11,r8,r25
	ctx.r11.s32 = ctx.r8.s32 / ctx.r25.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_83018B30:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r26,96
	ctx.r11.s64 = ctx.r26.s64 + 96;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83018B40:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83018b40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83018B40;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83018B60:
	// addi r28,r26,168
	ctx.r28.s64 = ctx.r26.s64 + 168;
	// li r27,4
	ctx.r27.s64 = 4;
loc_83018B68:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83018cac
	if (ctx.cr6.eq) goto loc_83018CAC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83018c7c
	if (ctx.cr6.gt) goto loc_83018C7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// divw r10,r10,r25
	ctx.r10.s32 = ctx.r10.s32 / ctx.r25.s32;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83018ba8
	if (!ctx.cr6.eq) goto loc_83018BA8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83018bb0
	goto loc_83018BB0;
loc_83018BA8:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
loc_83018BB0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83018c7c
	if (!ctx.cr6.lt) goto loc_83018C7C;
	// lwz r3,-32308(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -32308);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83018BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x83018c2c
	if (ctx.cr6.eq) goto loc_83018C2C;
loc_83018BF8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r7,6
	ctx.r7.s64 = 6;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_83018C08:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x83018c08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83018C08;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x83018bf8
	if (!ctx.cr6.eq) goto loc_83018BF8;
loc_83018C2C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83018c4c
	if (ctx.cr6.eq) goto loc_83018C4C;
	// lwz r3,-32308(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83018C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83018C4C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// divw r11,r8,r25
	ctx.r11.s32 = ctx.r8.s32 / ctx.r25.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_83018C7C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83018C8C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83018c8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83018C8C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83018CAC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// bne 0x83018b68
	if (!ctx.cr0.eq) goto loc_83018B68;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018CC0"))) PPC_WEAK_FUNC(sub_83018CC0);
PPC_FUNC_IMPL(__imp__sub_83018CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x83018CC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d5eb78
	ctx.lr = 0x83018CD4;
	sub_82D5EB78(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// bl 0x833b7f54
	ctx.lr = 0x83018D04;
	__imp__KeTlsAlloc(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// lfs f0,6148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// bl 0x830147f8
	ctx.lr = 0x83018DC4;
	sub_830147F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x8305ac70
	ctx.lr = 0x83018DD0;
	sub_8305AC70(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r24,-31901
	ctx.r24.s64 = -2090663936;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// bge cr6,0x83018f54
	if (!ctx.cr6.lt) goto loc_83018F54;
	// subfic r25,r8,9
	ctx.xer.ca = ctx.r8.u32 <= 9;
	ctx.r25.s64 = 9 - ctx.r8.s64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83018f70
	if (ctx.cr6.eq) goto loc_83018F70;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83018e0c
	if (!ctx.cr6.eq) goto loc_83018E0C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// b 0x83018e18
	goto loc_83018E18;
loc_83018E0C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
loc_83018E18:
	// add r11,r8,r25
	ctx.r11.u64 = ctx.r8.u64 + ctx.r25.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83018ef8
	if (!ctx.cr6.lt) goto loc_83018EF8;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r26,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83018e40
	if (!ctx.cr6.eq) goto loc_83018E40;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x83018e4c
	goto loc_83018E4C;
loc_83018E40:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
loc_83018E4C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83018eec
	if (!ctx.cr6.lt) goto loc_83018EEC;
	// lwz r3,-32308(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -32308);
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83018E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83018ea4
	if (ctx.cr6.eq) goto loc_83018EA4;
loc_83018E8C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x83018e8c
	if (!ctx.cr6.eq) goto loc_83018E8C;
loc_83018EA4:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83018ec4
	if (ctx.cr6.eq) goto loc_83018EC4;
	// lwz r3,-32308(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83018EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83018EC4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r27,r28
	ctx.r10.u64 = ctx.r27.u64 + ctx.r28.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
loc_83018EEC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_83018EF8:
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r7,r25,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83018f28
	if (ctx.cr6.eq) goto loc_83018F28;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_83018F14:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83018f14
	if (!ctx.cr6.eq) goto loc_83018F14;
loc_83018F28:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83018f44
	if (ctx.cr6.eq) goto loc_83018F44;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_83018F38:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83018f38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83018F38;
loc_83018F44:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x83018f70
	goto loc_83018F70;
loc_83018F54:
	// ble cr6,0x83018f70
	if (!ctx.cr6.gt) goto loc_83018F70;
	// addi r10,r9,36
	ctx.r10.s64 = ctx.r9.s64 + 36;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
loc_83018F70:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83018fa8
	if (!ctx.cr6.eq) goto loc_83018FA8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83018f9c
	if (ctx.cr6.eq) goto loc_83018F9C;
	// lwz r3,-32308(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83018F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83018F9C:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
loc_83018FA8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83018ff0
	if (!ctx.cr6.gt) goto loc_83018FF0;
	// lwz r3,-32308(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -32308);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83018FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_83018FF0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi. r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83019034
	if (ctx.cr0.eq) goto loc_83019034;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8301900C:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8301900c
	if (ctx.cr6.lt) goto loc_8301900C;
loc_83019034:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// std r30,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r30.u64);
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4472
	ctx.r11.s64 = ctx.r11.s64 + -4472;
	// addi r10,r11,-164
	ctx.r10.s64 = ctx.r11.s64 + -164;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// addi r9,r11,-140
	ctx.r9.s64 = ctx.r11.s64 + -140;
	// addi r8,r11,-112
	ctx.r8.s64 = ctx.r11.s64 + -112;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// addi r7,r11,-84
	ctx.r7.s64 = ctx.r11.s64 + -84;
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// addi r6,r11,-56
	ctx.r6.s64 = ctx.r11.s64 + -56;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r5,r11,-28
	ctx.r5.s64 = ctx.r11.s64 + -28;
	// stw r7,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r7.u32);
	// stw r6,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r6.u32);
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019084"))) PPC_WEAK_FUNC(sub_83019084);
PPC_FUNC_IMPL(__imp__sub_83019084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019088"))) PPC_WEAK_FUNC(sub_83019088);
PPC_FUNC_IMPL(__imp__sub_83019088) {
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
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x8305a0b0
	ctx.lr = 0x830190A4;
	sub_8305A0B0(ctx, base);
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x83016000
	ctx.lr = 0x830190AC;
	sub_83016000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ffc828
	ctx.lr = 0x830190B4;
	sub_82FFC828(ctx, base);
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

__attribute__((alias("__imp__sub_830190C8"))) PPC_WEAK_FUNC(sub_830190C8);
PPC_FUNC_IMPL(__imp__sub_830190C8) {
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
	// bl 0x82ffca60
	ctx.lr = 0x830190E0;
	sub_82FFCA60(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-2648
	ctx.r10.s64 = ctx.r11.s64 + -2648;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83019104"))) PPC_WEAK_FUNC(sub_83019104);
PPC_FUNC_IMPL(__imp__sub_83019104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019108"))) PPC_WEAK_FUNC(sub_83019108);
PPC_FUNC_IMPL(__imp__sub_83019108) {
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
	// bl 0x83062e78
	ctx.lr = 0x83019128;
	sub_83062E78(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83019140
	if (ctx.cr6.eq) goto loc_83019140;
	// bl 0x822990f0
	ctx.lr = 0x8301913C;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83019140:
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

__attribute__((alias("__imp__sub_83019158"))) PPC_WEAK_FUNC(sub_83019158);
PPC_FUNC_IMPL(__imp__sub_83019158) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-2600
	ctx.r9.s64 = ctx.r11.s64 + -2600;
	// addi r8,r10,-2644
	ctx.r8.s64 = ctx.r10.s64 + -2644;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x830191A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,-25044
	ctx.r4.s64 = ctx.r5.s64 + -25044;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// bl 0x83062e78
	ctx.lr = 0x830191B4;
	sub_83062E78(ctx, base);
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

__attribute__((alias("__imp__sub_830191CC"))) PPC_WEAK_FUNC(sub_830191CC);
PPC_FUNC_IMPL(__imp__sub_830191CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830191D0"))) PPC_WEAK_FUNC(sub_830191D0);
PPC_FUNC_IMPL(__imp__sub_830191D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830191D8"))) PPC_WEAK_FUNC(sub_830191D8);
PPC_FUNC_IMPL(__imp__sub_830191D8) {
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
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82d5ecb0
	ctx.lr = 0x830191FC;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301922c
	if (ctx.cr6.eq) goto loc_8301922C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,-8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// bl 0x83062e88
	ctx.lr = 0x83019218;
	sub_83062E88(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301924c
	if (ctx.cr6.eq) goto loc_8301924C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83019228;
	sub_82D5ED58(ctx, base);
	// b 0x8301924c
	goto loc_8301924C;
loc_8301922C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-3768
	ctx.r4.s64 = ctx.r11.s64 + -3768;
	// li r5,39
	ctx.r5.s64 = 39;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301924C;
	sub_82D17988(ctx, base);
loc_8301924C:
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

__attribute__((alias("__imp__sub_83019264"))) PPC_WEAK_FUNC(sub_83019264);
PPC_FUNC_IMPL(__imp__sub_83019264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019268"))) PPC_WEAK_FUNC(sub_83019268);
PPC_FUNC_IMPL(__imp__sub_83019268) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x83062e90
	sub_83062E90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019270"))) PPC_WEAK_FUNC(sub_83019270);
PPC_FUNC_IMPL(__imp__sub_83019270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83019278;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301928C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830192dc
	if (ctx.cr6.eq) goto loc_830192DC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r29,-8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830192B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// beq cr6,0x830192fc
	if (ctx.cr6.eq) goto loc_830192FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x830192D4;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_830192DC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-3520
	ctx.r4.s64 = ctx.r11.s64 + -3520;
	// li r5,50
	ctx.r5.s64 = 50;
	// addi r8,r4,-136
	ctx.r8.s64 = ctx.r4.s64 + -136;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x830192FC;
	sub_82D17988(ctx, base);
loc_830192FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019304"))) PPC_WEAK_FUNC(sub_83019304);
PPC_FUNC_IMPL(__imp__sub_83019304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019308"))) PPC_WEAK_FUNC(sub_83019308);
PPC_FUNC_IMPL(__imp__sub_83019308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83019310;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82d5ecb0
	ctx.lr = 0x83019330;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830193a4
	if (ctx.cr6.eq) goto loc_830193A4;
	// lwz r28,-8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83019350
	if (ctx.cr6.eq) goto loc_83019350;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// b 0x83019354
	goto loc_83019354;
loc_83019350:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83019354:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83019364
	if (ctx.cr6.eq) goto loc_83019364;
	// lwz r6,32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// b 0x83019368
	goto loc_83019368;
loc_83019364:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83019368:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83019384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830193c4
	if (ctx.cr6.eq) goto loc_830193C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8301939C;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_830193A4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-3272
	ctx.r4.s64 = ctx.r11.s64 + -3272;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r8,r4,-136
	ctx.r8.s64 = ctx.r4.s64 + -136;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x830193C4;
	sub_82D17988(ctx, base);
loc_830193C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830193CC"))) PPC_WEAK_FUNC(sub_830193CC);
PPC_FUNC_IMPL(__imp__sub_830193CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830193D0"))) PPC_WEAK_FUNC(sub_830193D0);
PPC_FUNC_IMPL(__imp__sub_830193D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6ae4
	ctx.lr = 0x830193E4;
	__savefpr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82d5ecb0
	ctx.lr = 0x83019408;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83019454
	if (ctx.cr6.eq) goto loc_83019454;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f5,f27
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f27.f64;
	// lwz r31,-8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83019440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83019474
	if (ctx.cr6.eq) goto loc_83019474;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83019450;
	sub_82D5ED58(ctx, base);
	// b 0x83019474
	goto loc_83019474;
loc_83019454:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-3016
	ctx.r4.s64 = ctx.r11.s64 + -3016;
	// li r5,72
	ctx.r5.s64 = 72;
	// addi r8,r4,-144
	ctx.r8.s64 = ctx.r4.s64 + -144;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83019474;
	sub_82D17988(ctx, base);
loc_83019474:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6b30
	ctx.lr = 0x83019480;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019490"))) PPC_WEAK_FUNC(sub_83019490);
PPC_FUNC_IMPL(__imp__sub_83019490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6ae8
	ctx.lr = 0x830194A4;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82d5ecb0
	ctx.lr = 0x830194C4;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301950c
	if (ctx.cr6.eq) goto loc_8301950C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// lwz r31,-8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830194F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301952c
	if (ctx.cr6.eq) goto loc_8301952C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83019508;
	sub_82D5ED58(ctx, base);
	// b 0x8301952c
	goto loc_8301952C;
loc_8301950C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-2760
	ctx.r4.s64 = ctx.r11.s64 + -2760;
	// li r5,78
	ctx.r5.s64 = 78;
	// addi r8,r4,-144
	ctx.r8.s64 = ctx.r4.s64 + -144;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301952C;
	sub_82D17988(ctx, base);
loc_8301952C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6b34
	ctx.lr = 0x83019538;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019548"))) PPC_WEAK_FUNC(sub_83019548);
PPC_FUNC_IMPL(__imp__sub_83019548) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8301955C"))) PPC_WEAK_FUNC(sub_8301955C);
PPC_FUNC_IMPL(__imp__sub_8301955C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019560"))) PPC_WEAK_FUNC(sub_83019560);
PPC_FUNC_IMPL(__imp__sub_83019560) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83019574"))) PPC_WEAK_FUNC(sub_83019574);
PPC_FUNC_IMPL(__imp__sub_83019574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019578"))) PPC_WEAK_FUNC(sub_83019578);
PPC_FUNC_IMPL(__imp__sub_83019578) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301958C"))) PPC_WEAK_FUNC(sub_8301958C);
PPC_FUNC_IMPL(__imp__sub_8301958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019590"))) PPC_WEAK_FUNC(sub_83019590);
PPC_FUNC_IMPL(__imp__sub_83019590) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830195A4"))) PPC_WEAK_FUNC(sub_830195A4);
PPC_FUNC_IMPL(__imp__sub_830195A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830195A8"))) PPC_WEAK_FUNC(sub_830195A8);
PPC_FUNC_IMPL(__imp__sub_830195A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830195BC"))) PPC_WEAK_FUNC(sub_830195BC);
PPC_FUNC_IMPL(__imp__sub_830195BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830195C0"))) PPC_WEAK_FUNC(sub_830195C0);
PPC_FUNC_IMPL(__imp__sub_830195C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830195C8"))) PPC_WEAK_FUNC(sub_830195C8);
PPC_FUNC_IMPL(__imp__sub_830195C8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830195E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830195F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019608"))) PPC_WEAK_FUNC(sub_83019608);
PPC_FUNC_IMPL(__imp__sub_83019608) {
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
	// bl 0x82ffca60
	ctx.lr = 0x83019628;
	sub_82FFCA60(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,-25088
	ctx.r7.s64 = ctx.r10.s64 + -25088;
	// addi r6,r9,-2600
	ctx.r6.s64 = ctx.r9.s64 + -2600;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r5,r8,-2644
	ctx.r5.s64 = ctx.r8.s64 + -2644;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83019684"))) PPC_WEAK_FUNC(sub_83019684);
PPC_FUNC_IMPL(__imp__sub_83019684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019688"))) PPC_WEAK_FUNC(sub_83019688);
PPC_FUNC_IMPL(__imp__sub_83019688) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x83019690
	sub_83019690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019690"))) PPC_WEAK_FUNC(sub_83019690);
PPC_FUNC_IMPL(__imp__sub_83019690) {
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
	// bl 0x83019158
	ctx.lr = 0x830196B0;
	sub_83019158(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830196d8
	if (ctx.cr6.eq) goto loc_830196D8;
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
	ctx.lr = 0x830196D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830196D8:
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

__attribute__((alias("__imp__sub_830196F4"))) PPC_WEAK_FUNC(sub_830196F4);
PPC_FUNC_IMPL(__imp__sub_830196F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830196F8"))) PPC_WEAK_FUNC(sub_830196F8);
PPC_FUNC_IMPL(__imp__sub_830196F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e64268
	sub_82E64268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830196FC"))) PPC_WEAK_FUNC(sub_830196FC);
PPC_FUNC_IMPL(__imp__sub_830196FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019700"))) PPC_WEAK_FUNC(sub_83019700);
PPC_FUNC_IMPL(__imp__sub_83019700) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019708"))) PPC_WEAK_FUNC(sub_83019708);
PPC_FUNC_IMPL(__imp__sub_83019708) {
	PPC_FUNC_PROLOGUE();
loc_83019708:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x83019734
	if (!ctx.cr6.eq) goto loc_83019734;
	// stwcx. r4,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83019708
	if (!ctx.cr0.eq) goto loc_83019708;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwsync 
	// blr 
	return;
loc_83019734:
	// stwcx. r11,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwsync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019748"))) PPC_WEAK_FUNC(sub_83019748);
PPC_FUNC_IMPL(__imp__sub_83019748) {
	PPC_FUNC_PROLOGUE();
loc_83019748:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83019748
	if (!ctx.cr0.eq) goto loc_83019748;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwsync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019770"))) PPC_WEAK_FUNC(sub_83019770);
PPC_FUNC_IMPL(__imp__sub_83019770) {
	PPC_FUNC_PROLOGUE();
loc_83019770:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83019770
	if (!ctx.cr0.eq) goto loc_83019770;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwsync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019798"))) PPC_WEAK_FUNC(sub_83019798);
PPC_FUNC_IMPL(__imp__sub_83019798) {
	PPC_FUNC_PROLOGUE();
loc_83019798:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r4,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83019798
	if (!ctx.cr0.eq) goto loc_83019798;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwsync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830197BC"))) PPC_WEAK_FUNC(sub_830197BC);
PPC_FUNC_IMPL(__imp__sub_830197BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830197C0"))) PPC_WEAK_FUNC(sub_830197C0);
PPC_FUNC_IMPL(__imp__sub_830197C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_830197DC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x830197dc
	if (!ctx.cr0.eq) goto loc_830197DC;
	// lwsync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830197FC"))) PPC_WEAK_FUNC(sub_830197FC);
PPC_FUNC_IMPL(__imp__sub_830197FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019800"))) PPC_WEAK_FUNC(sub_83019800);
PPC_FUNC_IMPL(__imp__sub_83019800) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8301980C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83019830
	if (!ctx.cr6.eq) goto loc_83019830;
	// stwcx. r7,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301980c
	if (!ctx.cr0.eq) goto loc_8301980C;
	// b 0x83019838
	goto loc_83019838;
loc_83019830:
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_83019838:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwsync 
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8301985c
	if (!ctx.cr6.eq) goto loc_8301985C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
loc_8301985C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8301987c
	if (!ctx.cr6.eq) goto loc_8301987C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
loc_8301987C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019884"))) PPC_WEAK_FUNC(sub_83019884);
PPC_FUNC_IMPL(__imp__sub_83019884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019888"))) PPC_WEAK_FUNC(sub_83019888);
PPC_FUNC_IMPL(__imp__sub_83019888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_830198A8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r7,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x830198a8
	if (!ctx.cr0.eq) goto loc_830198A8;
	// lwsync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830198C8"))) PPC_WEAK_FUNC(sub_830198C8);
PPC_FUNC_IMPL(__imp__sub_830198C8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
loc_830198CC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x830198cc
	if (!ctx.cr0.eq) goto loc_830198CC;
	// lwsync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830198F0"))) PPC_WEAK_FUNC(sub_830198F0);
PPC_FUNC_IMPL(__imp__sub_830198F0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-2240
	ctx.r10.s64 = ctx.r11.s64 + -2240;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x831bf0c0
	ctx.lr = 0x83019930;
	sub_831BF0C0(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x831bf0c0
	ctx.lr = 0x83019938;
	sub_831BF0C0(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x831bf0c0
	ctx.lr = 0x83019940;
	sub_831BF0C0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831bf0c0
	ctx.lr = 0x83019948;
	sub_831BF0C0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stb r8,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r8.u8);
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_830199A0"))) PPC_WEAK_FUNC(sub_830199A0);
PPC_FUNC_IMPL(__imp__sub_830199A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x830199A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,-2240
	ctx.r10.s64 = ctx.r11.s64 + -2240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8301aa28
	ctx.lr = 0x830199C8;
	sub_8301AA28(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne 0x83019a00
	if (!ctx.cr0.eq) goto loc_83019A00;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_830199E4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r9,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x830199e4
	if (!ctx.cr0.eq) goto loc_830199E4;
	// lwsync 
loc_83019A00:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r30,-31901
	ctx.r30.s64 = -2090663936;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83019a28
	if (ctx.cr6.eq) goto loc_83019A28;
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83019A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_83019A28:
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83019a4c
	if (ctx.cr6.eq) goto loc_83019A4C;
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83019A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
loc_83019A4C:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831bf108
	ctx.lr = 0x83019A54;
	sub_831BF108(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x831bf108
	ctx.lr = 0x83019A5C;
	sub_831BF108(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x831bf108
	ctx.lr = 0x83019A64;
	sub_831BF108(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x831bf108
	ctx.lr = 0x83019A6C;
	sub_831BF108(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,30332
	ctx.r10.s64 = ctx.r11.s64 + 30332;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019A80"))) PPC_WEAK_FUNC(sub_83019A80);
PPC_FUNC_IMPL(__imp__sub_83019A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83019A88;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8301aa28
	ctx.lr = 0x83019AA0;
	sub_8301AA28(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83019b70
	if (ctx.cr6.lt) goto loc_83019B70;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r28,16
	ctx.r28.s64 = 16;
	// beq cr6,0x83019ac4
	if (ctx.cr6.eq) goto loc_83019AC4;
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_83019AC4:
	// lis r30,-31901
	ctx.r30.s64 = -2090663936;
	// li r5,117
	ctx.r5.s64 = 117;
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83019AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x83019b38
	if (!ctx.cr6.gt) goto loc_83019B38;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_83019B00:
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// divwu r10,r6,r3
	ctx.r10.u32 = ctx.r6.u32 / ctx.r3.u32;
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// subf r10,r8,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r8.s64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x83019b00
	if (ctx.cr6.lt) goto loc_83019B00;
loc_83019B38:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83019b5c
	if (ctx.cr6.eq) goto loc_83019B5C;
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83019B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
loc_83019B5C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_83019B70:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stwx r25,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r25.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// divwu r4,r5,r6
	ctx.r4.u32 = ctx.r5.u32 / ctx.r6.u32;
	// mullw r3,r4,r6
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// bne 0x83019be4
	if (!ctx.cr0.eq) goto loc_83019BE4;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
loc_83019BC8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r27
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r27.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r27
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r27.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83019bc8
	if (!ctx.cr0.eq) goto loc_83019BC8;
	// lwsync 
loc_83019BE4:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83019c00
	if (ctx.cr6.eq) goto loc_83019C00;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x831bf118
	ctx.lr = 0x83019BF8;
	sub_831BF118(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x831bf118
	ctx.lr = 0x83019C00;
	sub_831BF118(ctx, base);
loc_83019C00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019C08"))) PPC_WEAK_FUNC(sub_83019C08);
PPC_FUNC_IMPL(__imp__sub_83019C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83019C10;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8301aa28
	ctx.lr = 0x83019C28;
	sub_8301AA28(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83019cf8
	if (ctx.cr6.lt) goto loc_83019CF8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r28,16
	ctx.r28.s64 = 16;
	// beq cr6,0x83019c4c
	if (ctx.cr6.eq) goto loc_83019C4C;
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_83019C4C:
	// lis r30,-31901
	ctx.r30.s64 = -2090663936;
	// li r5,117
	ctx.r5.s64 = 117;
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83019C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x83019cc0
	if (!ctx.cr6.gt) goto loc_83019CC0;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_83019C88:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// divwu r10,r6,r3
	ctx.r10.u32 = ctx.r6.u32 / ctx.r3.u32;
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// subf r10,r8,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r8.s64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x83019c88
	if (ctx.cr6.lt) goto loc_83019C88;
loc_83019CC0:
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83019ce4
	if (ctx.cr6.eq) goto loc_83019CE4;
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83019CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
loc_83019CE4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r26,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r26.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_83019CF8:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stwx r25,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r25.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// divwu r4,r5,r6
	ctx.r4.u32 = ctx.r5.u32 / ctx.r6.u32;
	// mullw r3,r4,r6
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// bne 0x83019d6c
	if (!ctx.cr0.eq) goto loc_83019D6C;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
loc_83019D50:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r27
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r27.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r27
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r27.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83019d50
	if (!ctx.cr0.eq) goto loc_83019D50;
	// lwsync 
loc_83019D6C:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83019d80
	if (ctx.cr6.eq) goto loc_83019D80;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831bf118
	ctx.lr = 0x83019D80;
	sub_831BF118(ctx, base);
loc_83019D80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019D88"))) PPC_WEAK_FUNC(sub_83019D88);
PPC_FUNC_IMPL(__imp__sub_83019D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83019D90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301aa28
	ctx.lr = 0x83019DAC;
	sub_8301AA28(ctx, base);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83019efc
	if (!ctx.cr6.eq) goto loc_83019EFC;
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83019efc
	if (!ctx.cr6.eq) goto loc_83019EFC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x83019e2c
	if (ctx.cr6.eq) goto loc_83019E2C;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r29,r4,r7
	ctx.r29.u32 = ctx.r4.u32 / ctx.r7.u32;
	// mullw r7,r29,r7
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r7.s32);
	// lwzx r29,r10,r3
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// subf r4,r7,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r7.s64;
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
loc_83019E0C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83019e0c
	if (!ctx.cr0.eq) goto loc_83019E0C;
	// lwsync 
loc_83019E2C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r27,-1
	ctx.r27.s64 = -1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bne 0x83019e60
	if (!ctx.cr0.eq) goto loc_83019E60;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
loc_83019E44:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r27,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r27.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83019e44
	if (!ctx.cr0.eq) goto loc_83019E44;
	// lwsync 
loc_83019E60:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83019ef0
	if (ctx.cr6.eq) goto loc_83019EF0;
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831bf110
	ctx.lr = 0x83019E78;
	sub_831BF110(ctx, base);
	// addi r28,r31,76
	ctx.r28.s64 = ctx.r31.s64 + 76;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831bf110
	ctx.lr = 0x83019E84;
	sub_831BF110(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301aa28
	ctx.lr = 0x83019E8C;
	sub_8301AA28(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bne 0x83019ec8
	if (!ctx.cr0.eq) goto loc_83019EC8;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
loc_83019EAC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r27,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r27.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83019eac
	if (!ctx.cr0.eq) goto loc_83019EAC;
	// lwsync 
loc_83019EC8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83019f30
	if (!ctx.cr6.eq) goto loc_83019F30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831bf118
	ctx.lr = 0x83019EDC;
	sub_831BF118(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831bf118
	ctx.lr = 0x83019EE4;
	sub_831BF118(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83019EF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83019EFC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bne 0x83019f30
	if (!ctx.cr0.eq) goto loc_83019F30;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
loc_83019F14:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r9,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83019f14
	if (!ctx.cr0.eq) goto loc_83019F14;
	// lwsync 
loc_83019F30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019F3C"))) PPC_WEAK_FUNC(sub_83019F3C);
PPC_FUNC_IMPL(__imp__sub_83019F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019F40"))) PPC_WEAK_FUNC(sub_83019F40);
PPC_FUNC_IMPL(__imp__sub_83019F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83019F48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301aa28
	ctx.lr = 0x83019F64;
	sub_8301AA28(ctx, base);
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83019fb0
	if (ctx.cr6.eq) goto loc_83019FB0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bne 0x83019fa4
	if (!ctx.cr0.eq) goto loc_83019FA4;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_83019F88:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r9,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83019f88
	if (!ctx.cr0.eq) goto loc_83019F88;
	// lwsync 
loc_83019FA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_83019FB0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x8301a018
	if (ctx.cr6.eq) goto loc_8301A018;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r29,r4,r7
	ctx.r29.u32 = ctx.r4.u32 / ctx.r7.u32;
	// mullw r7,r29,r7
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r7.s32);
	// lwzx r29,r10,r3
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// subf r4,r7,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r7.s64;
	// stw r4,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
loc_83019FF8:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83019ff8
	if (!ctx.cr0.eq) goto loc_83019FF8;
	// lwsync 
loc_8301A018:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r28,-1
	ctx.r28.s64 = -1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bne 0x8301a04c
	if (!ctx.cr0.eq) goto loc_8301A04C;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_8301A030:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r28,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a030
	if (!ctx.cr0.eq) goto loc_8301A030;
	// lwsync 
loc_8301A04C:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301a0c8
	if (ctx.cr6.eq) goto loc_8301A0C8;
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831bf110
	ctx.lr = 0x8301A064;
	sub_831BF110(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301aa28
	ctx.lr = 0x8301A06C;
	sub_8301AA28(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bne 0x8301a0a8
	if (!ctx.cr0.eq) goto loc_8301A0A8;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_8301A08C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r28,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a08c
	if (!ctx.cr0.eq) goto loc_8301A08C;
	// lwsync 
loc_8301A0A8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301a0bc
	if (!ctx.cr6.eq) goto loc_8301A0BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831bf118
	ctx.lr = 0x8301A0BC;
	sub_831BF118(ctx, base);
loc_8301A0BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8301A0C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301A0D4"))) PPC_WEAK_FUNC(sub_8301A0D4);
PPC_FUNC_IMPL(__imp__sub_8301A0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301A0D8"))) PPC_WEAK_FUNC(sub_8301A0D8);
PPC_FUNC_IMPL(__imp__sub_8301A0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8301A0E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8301a13c
	if (!ctx.cr6.eq) goto loc_8301A13C;
	// bl 0x83019d88
	ctx.lr = 0x8301A0F4;
	sub_83019D88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301a390
	if (ctx.cr6.eq) goto loc_8301A390;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301A10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
loc_8301A110:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a110
	if (!ctx.cr0.eq) goto loc_8301A110;
	// lwsync 
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8301A13C:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8301a27c
	if (!ctx.cr6.eq) goto loc_8301A27C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83019d88
	ctx.lr = 0x8301A14C;
	sub_83019D88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301a1d0
	if (!ctx.cr6.eq) goto loc_8301A1D0;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_8301A164:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301aa28
	ctx.lr = 0x8301A16C;
	sub_8301AA28(ctx, base);
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301a210
	if (!ctx.cr6.eq) goto loc_8301A210;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8301a24c
	if (!ctx.cr6.eq) goto loc_8301A24C;
	// bne 0x8301a1b4
	if (!ctx.cr0.eq) goto loc_8301A1B4;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_8301A198:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r29,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a198
	if (!ctx.cr0.eq) goto loc_8301A198;
	// lwsync 
loc_8301A1B4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// bl 0x831bf120
	ctx.lr = 0x8301A1C0;
	sub_831BF120(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83019d88
	ctx.lr = 0x8301A1C8;
	sub_83019D88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301a164
	if (ctx.cr6.eq) goto loc_8301A164;
loc_8301A1D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301A1E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
loc_8301A1E4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a1e4
	if (!ctx.cr0.eq) goto loc_8301A1E4;
	// lwsync 
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8301A210:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x8301a240
	if (!ctx.cr0.eq) goto loc_8301A240;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_8301A224:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r29,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a224
	if (!ctx.cr0.eq) goto loc_8301A224;
	// lwsync 
loc_8301A240:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8301A24C:
	// bne 0x8301a270
	if (!ctx.cr0.eq) goto loc_8301A270;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_8301A254:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r29,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a254
	if (!ctx.cr0.eq) goto loc_8301A254;
	// lwsync 
loc_8301A270:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8301A27C:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8301a374
	if (!ctx.cr6.eq) goto loc_8301A374;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83019d88
	ctx.lr = 0x8301A28C;
	sub_83019D88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301a304
	if (!ctx.cr6.eq) goto loc_8301A304;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_8301A2A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301aa28
	ctx.lr = 0x8301A2AC;
	sub_8301AA28(ctx, base);
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8301a344
	if (!ctx.cr6.eq) goto loc_8301A344;
	// bne 0x8301a2e8
	if (!ctx.cr0.eq) goto loc_8301A2E8;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_8301A2CC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r29,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a2cc
	if (!ctx.cr0.eq) goto loc_8301A2CC;
	// lwsync 
loc_8301A2E8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r30,76
	ctx.r3.s64 = ctx.r30.s64 + 76;
	// bl 0x831bf120
	ctx.lr = 0x8301A2F4;
	sub_831BF120(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83019d88
	ctx.lr = 0x8301A2FC;
	sub_83019D88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301a2a4
	if (ctx.cr6.eq) goto loc_8301A2A4;
loc_8301A304:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301A314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
loc_8301A318:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a318
	if (!ctx.cr0.eq) goto loc_8301A318;
	// lwsync 
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8301A344:
	// bne 0x8301a240
	if (!ctx.cr0.eq) goto loc_8301A240;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_8301A34C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r29,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a34c
	if (!ctx.cr0.eq) goto loc_8301A34C;
	// lwsync 
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8301A374:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-2496
	ctx.r4.s64 = ctx.r11.s64 + -2496;
	// li r5,403
	ctx.r5.s64 = 403;
	// addi r7,r4,-48
	ctx.r7.s64 = ctx.r4.s64 + -48;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17988
	ctx.lr = 0x8301A390;
	sub_82D17988(ctx, base);
loc_8301A390:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301A39C"))) PPC_WEAK_FUNC(sub_8301A39C);
PPC_FUNC_IMPL(__imp__sub_8301A39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301A3A0"))) PPC_WEAK_FUNC(sub_8301A3A0);
PPC_FUNC_IMPL(__imp__sub_8301A3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8301A3A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8301a404
	if (!ctx.cr6.eq) goto loc_8301A404;
	// bl 0x83019f40
	ctx.lr = 0x8301A3BC;
	sub_83019F40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301a518
	if (ctx.cr6.eq) goto loc_8301A518;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301A3D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r30,64
	ctx.r9.s64 = ctx.r30.s64 + 64;
loc_8301A3D8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a3d8
	if (!ctx.cr0.eq) goto loc_8301A3D8;
	// lwsync 
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8301A404:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8301a4fc
	if (!ctx.cr6.eq) goto loc_8301A4FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83019f40
	ctx.lr = 0x8301A414;
	sub_83019F40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301a48c
	if (!ctx.cr6.eq) goto loc_8301A48C;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_8301A42C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301aa28
	ctx.lr = 0x8301A434;
	sub_8301AA28(ctx, base);
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8301a4cc
	if (!ctx.cr6.eq) goto loc_8301A4CC;
	// bne 0x8301a470
	if (!ctx.cr0.eq) goto loc_8301A470;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_8301A454:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r29,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a454
	if (!ctx.cr0.eq) goto loc_8301A454;
	// lwsync 
loc_8301A470:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x831bf120
	ctx.lr = 0x8301A47C;
	sub_831BF120(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83019f40
	ctx.lr = 0x8301A484;
	sub_83019F40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301a42c
	if (ctx.cr6.eq) goto loc_8301A42C;
loc_8301A48C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301A49C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r30,64
	ctx.r9.s64 = ctx.r30.s64 + 64;
loc_8301A4A0:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a4a0
	if (!ctx.cr0.eq) goto loc_8301A4A0;
	// lwsync 
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8301A4CC:
	// bne 0x8301a4f0
	if (!ctx.cr0.eq) goto loc_8301A4F0;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_8301A4D4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r29,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a4d4
	if (!ctx.cr0.eq) goto loc_8301A4D4;
	// lwsync 
loc_8301A4F0:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8301A4FC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-2344
	ctx.r4.s64 = ctx.r11.s64 + -2344;
	// li r5,452
	ctx.r5.s64 = 452;
	// addi r7,r4,-48
	ctx.r7.s64 = ctx.r4.s64 + -48;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17988
	ctx.lr = 0x8301A518;
	sub_82D17988(ctx, base);
loc_8301A518:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301A524"))) PPC_WEAK_FUNC(sub_8301A524);
PPC_FUNC_IMPL(__imp__sub_8301A524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301A528"))) PPC_WEAK_FUNC(sub_8301A528);
PPC_FUNC_IMPL(__imp__sub_8301A528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8301A530;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301aa28
	ctx.lr = 0x8301A544;
	sub_8301AA28(ctx, base);
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301a590
	if (ctx.cr6.eq) goto loc_8301A590;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x8301a5e0
	if (!ctx.cr0.eq) goto loc_8301A5E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8301A56C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a56c
	if (!ctx.cr0.eq) goto loc_8301A56C;
	// lwsync 
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8301A590:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r29,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r29.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301a5ac
	if (!ctx.cr6.eq) goto loc_8301A5AC;
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// bl 0x831bf110
	ctx.lr = 0x8301A5AC;
	sub_831BF110(ctx, base);
loc_8301A5AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x8301a5e0
	if (!ctx.cr0.eq) goto loc_8301A5E0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8301A5C4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r9,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a5c4
	if (!ctx.cr0.eq) goto loc_8301A5C4;
	// lwsync 
loc_8301A5E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301A5E8"))) PPC_WEAK_FUNC(sub_8301A5E8);
PPC_FUNC_IMPL(__imp__sub_8301A5E8) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301A610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301aa28
	ctx.lr = 0x8301A61C;
	sub_8301AA28(ctx, base);
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8301a660
	if (ctx.cr6.eq) goto loc_8301A660;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x8301a6a8
	if (!ctx.cr0.eq) goto loc_8301A6A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8301A644:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a644
	if (!ctx.cr0.eq) goto loc_8301A644;
	// b 0x8301a6a4
	goto loc_8301A6A4;
loc_8301A660:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// bl 0x831bf118
	ctx.lr = 0x8301A670;
	sub_831BF118(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x8301a6a8
	if (!ctx.cr0.eq) goto loc_8301A6A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8301A68C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a68c
	if (!ctx.cr0.eq) goto loc_8301A68C;
loc_8301A6A4:
	// lwsync 
loc_8301A6A8:
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

__attribute__((alias("__imp__sub_8301A6C0"))) PPC_WEAK_FUNC(sub_8301A6C0);
PPC_FUNC_IMPL(__imp__sub_8301A6C0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
loc_8301A6D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8301a3a0
	ctx.lr = 0x8301A6DC;
	sub_8301A3A0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301a6e8
	if (!ctx.cr6.eq) goto loc_8301A6E8;
	// b 0x8301a6d0
	goto loc_8301A6D0;
loc_8301A6E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r8,r9,64
	ctx.r8.s64 = ctx.r9.s64 + 64;
loc_8301A6F8:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8301a71c
	if (!ctx.cr6.eq) goto loc_8301A71C;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a6f8
	if (!ctx.cr0.eq) goto loc_8301A6F8;
	// b 0x8301a724
	goto loc_8301A724;
loc_8301A71C:
	// stwcx. r7,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8301A724:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwsync 
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8301a760
	if (ctx.cr6.eq) goto loc_8301A760;
	// nop 
	// nop 
	// nop 
	// nop 
	// nop 
	// nop 
	// b 0x8301a6e8
	goto loc_8301A6E8;
loc_8301A760:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A770"))) PPC_WEAK_FUNC(sub_8301A770);
PPC_FUNC_IMPL(__imp__sub_8301A770) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
loc_8301A780:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8301a0d8
	ctx.lr = 0x8301A78C;
	sub_8301A0D8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301a798
	if (!ctx.cr6.eq) goto loc_8301A798;
	// b 0x8301a780
	goto loc_8301A780;
loc_8301A798:
	// b 0x8301a8ec
	goto loc_8301A8EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8301a7b4
	goto loc_8301A7B4;
loc_8301A7A8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8301A7B4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4000, ctx.xer);
	// bge cr6,0x8301a864
	if (!ctx.cr6.lt) goto loc_8301A864;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r8,r9,60
	ctx.r8.s64 = ctx.r9.s64 + 60;
loc_8301A7D0:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8301a7f4
	if (!ctx.cr6.eq) goto loc_8301A7F4;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a7d0
	if (!ctx.cr0.eq) goto loc_8301A7D0;
	// b 0x8301a7fc
	goto loc_8301A7FC;
loc_8301A7F4:
	// stwcx. r7,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8301A7FC:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lwsync 
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8301a820
	if (!ctx.cr6.eq) goto loc_8301A820;
	// b 0x8301a864
	goto loc_8301A864;
loc_8301A820:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x8301a838
	goto loc_8301A838;
loc_8301A82C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8301A838:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x8301a860
	if (!ctx.cr6.lt) goto loc_8301A860;
	// nop 
	// nop 
	// nop 
	// nop 
	// nop 
	// nop 
	// b 0x8301a82c
	goto loc_8301A82C;
loc_8301A860:
	// b 0x8301a7a8
	goto loc_8301A7A8;
loc_8301A864:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4000, ctx.xer);
	// bne cr6,0x8301a8e8
	if (!ctx.cr6.eq) goto loc_8301A8E8;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// bl 0x831bf110
	ctx.lr = 0x8301A87C;
	sub_831BF110(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r7,r8,60
	ctx.r7.s64 = ctx.r8.s64 + 60;
loc_8301A88C:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8301a8b0
	if (!ctx.cr6.eq) goto loc_8301A8B0;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a88c
	if (!ctx.cr0.eq) goto loc_8301A88C;
	// b 0x8301a8b8
	goto loc_8301A8B8;
loc_8301A8B0:
	// stwcx. r6,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8301A8B8:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwsync 
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8301a8e8
	if (ctx.cr6.eq) goto loc_8301A8E8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// bl 0x831bf120
	ctx.lr = 0x8301A8E8;
	sub_831BF120(ctx, base);
loc_8301A8E8:
	// b 0x8301a964
	goto loc_8301A964;
loc_8301A8EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r8,r9,60
	ctx.r8.s64 = ctx.r9.s64 + 60;
loc_8301A8FC:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8301a920
	if (!ctx.cr6.eq) goto loc_8301A920;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a8fc
	if (!ctx.cr0.eq) goto loc_8301A8FC;
	// b 0x8301a928
	goto loc_8301A928;
loc_8301A920:
	// stwcx. r7,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8301A928:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lwsync 
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8301a964
	if (ctx.cr6.eq) goto loc_8301A964;
	// nop 
	// nop 
	// nop 
	// nop 
	// nop 
	// nop 
	// b 0x8301a8ec
	goto loc_8301A8EC;
loc_8301A964:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A974"))) PPC_WEAK_FUNC(sub_8301A974);
PPC_FUNC_IMPL(__imp__sub_8301A974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301A978"))) PPC_WEAK_FUNC(sub_8301A978);
PPC_FUNC_IMPL(__imp__sub_8301A978) {
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
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301A9A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301a6c0
	ctx.lr = 0x8301A9A8;
	sub_8301A6C0(ctx, base);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301aa28
	ctx.lr = 0x8301A9B4;
	sub_8301AA28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// bl 0x831bf118
	ctx.lr = 0x8301A9C8;
	sub_831BF118(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x831bf118
	ctx.lr = 0x8301A9D0;
	sub_831BF118(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831bf118
	ctx.lr = 0x8301A9D8;
	sub_831BF118(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne 0x8301aa10
	if (!ctx.cr0.eq) goto loc_8301AA10;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8301A9F4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301a9f4
	if (!ctx.cr0.eq) goto loc_8301A9F4;
	// lwsync 
loc_8301AA10:
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

__attribute__((alias("__imp__sub_8301AA28"))) PPC_WEAK_FUNC(sub_8301AA28);
PPC_FUNC_IMPL(__imp__sub_8301AA28) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// bl 0x82e64268
	ctx.lr = 0x8301AA3C;
	sub_82E64268(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_8301AA40:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8301AA4C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8301aa70
	if (!ctx.cr6.eq) goto loc_8301AA70;
	// stwcx. r10,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301aa4c
	if (!ctx.cr0.eq) goto loc_8301AA4C;
	// b 0x8301aa78
	goto loc_8301AA78;
loc_8301AA70:
	// stwcx. r8,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8301AA78:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwsync 
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8301aac0
	if (!ctx.cr6.eq) goto loc_8301AAC0;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// b 0x8301ab00
	goto loc_8301AB00;
	// b 0x8301ab00
	goto loc_8301AB00;
loc_8301AAC0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8301aaf8
	if (!ctx.cr6.eq) goto loc_8301AAF8;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// b 0x8301ab00
	goto loc_8301AB00;
	// b 0x8301ab00
	goto loc_8301AB00;
loc_8301AAF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
loc_8301AB00:
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8301ab14
	if (!ctx.cr6.eq) goto loc_8301AB14;
	// nop 
	// b 0x8301aa40
	goto loc_8301AA40;
loc_8301AB14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AB24"))) PPC_WEAK_FUNC(sub_8301AB24);
PPC_FUNC_IMPL(__imp__sub_8301AB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301AB28"))) PPC_WEAK_FUNC(sub_8301AB28);
PPC_FUNC_IMPL(__imp__sub_8301AB28) {
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
	// bl 0x8301aa28
	ctx.lr = 0x8301AB48;
	sub_8301AA28(ctx, base);
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

__attribute__((alias("__imp__sub_8301AB60"))) PPC_WEAK_FUNC(sub_8301AB60);
PPC_FUNC_IMPL(__imp__sub_8301AB60) {
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
	// bl 0x830199a0
	ctx.lr = 0x8301AB80;
	sub_830199A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ab98
	if (ctx.cr6.eq) goto loc_8301AB98;
	// bl 0x822990f0
	ctx.lr = 0x8301AB94;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8301AB98:
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

__attribute__((alias("__imp__sub_8301ABB0"))) PPC_WEAK_FUNC(sub_8301ABB0);
PPC_FUNC_IMPL(__imp__sub_8301ABB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8301ABB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831bebf0
	ctx.lr = 0x8301ABCC;
	sub_831BEBF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-2180
	ctx.r10.s64 = ctx.r11.s64 + -2180;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301ABEC"))) PPC_WEAK_FUNC(sub_8301ABEC);
PPC_FUNC_IMPL(__imp__sub_8301ABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301ABF0"))) PPC_WEAK_FUNC(sub_8301ABF0);
PPC_FUNC_IMPL(__imp__sub_8301ABF0) {
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
	// li r30,-1
	ctx.r30.s64 = -1;
loc_8301AC0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x831bf120
	ctx.lr = 0x8301AC18;
	sub_831BF120(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x831bf110
	ctx.lr = 0x8301AC20;
	sub_831BF110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831beda8
	ctx.lr = 0x8301AC28;
	sub_831BEDA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ac3c
	if (ctx.cr6.eq) goto loc_8301AC3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831bee08
	ctx.lr = 0x8301AC3C;
	sub_831BEE08(ctx, base);
loc_8301AC3C:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x83003e50
	ctx.lr = 0x8301AC44;
	sub_83003E50(ctx, base);
	// b 0x8301ac0c
	goto loc_8301AC0C;
}

__attribute__((alias("__imp__sub_8301AC48"))) PPC_WEAK_FUNC(sub_8301AC48);
PPC_FUNC_IMPL(__imp__sub_8301AC48) {
	PPC_FUNC_PROLOGUE();
	// b 0x831befc0
	sub_831BEFC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301AC4C"))) PPC_WEAK_FUNC(sub_8301AC4C);
PPC_FUNC_IMPL(__imp__sub_8301AC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301AC50"))) PPC_WEAK_FUNC(sub_8301AC50);
PPC_FUNC_IMPL(__imp__sub_8301AC50) {
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
	// bl 0x831befc0
	ctx.lr = 0x8301AC70;
	sub_831BEFC0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ac98
	if (ctx.cr6.eq) goto loc_8301AC98;
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
	ctx.lr = 0x8301AC98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8301AC98:
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

__attribute__((alias("__imp__sub_8301ACB4"))) PPC_WEAK_FUNC(sub_8301ACB4);
PPC_FUNC_IMPL(__imp__sub_8301ACB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301ACB8"))) PPC_WEAK_FUNC(sub_8301ACB8);
PPC_FUNC_IMPL(__imp__sub_8301ACB8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301acec
	if (!ctx.cr6.eq) goto loc_8301ACEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d630b0
	ctx.lr = 0x8301ACEC;
	sub_82D630B0(ctx, base);
loc_8301ACEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8301AD24"))) PPC_WEAK_FUNC(sub_8301AD24);
PPC_FUNC_IMPL(__imp__sub_8301AD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301AD28"))) PPC_WEAK_FUNC(sub_8301AD28);
PPC_FUNC_IMPL(__imp__sub_8301AD28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AD30"))) PPC_WEAK_FUNC(sub_8301AD30);
PPC_FUNC_IMPL(__imp__sub_8301AD30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AD38"))) PPC_WEAK_FUNC(sub_8301AD38);
PPC_FUNC_IMPL(__imp__sub_8301AD38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AD40"))) PPC_WEAK_FUNC(sub_8301AD40);
PPC_FUNC_IMPL(__imp__sub_8301AD40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AD48"))) PPC_WEAK_FUNC(sub_8301AD48);
PPC_FUNC_IMPL(__imp__sub_8301AD48) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// stw r11,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8301ad88
	if (!ctx.cr6.eq) goto loc_8301AD88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d630b0
	ctx.lr = 0x8301AD88;
	sub_82D630B0(ctx, base);
loc_8301AD88:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8301ADBC"))) PPC_WEAK_FUNC(sub_8301ADBC);
PPC_FUNC_IMPL(__imp__sub_8301ADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301ADC0"))) PPC_WEAK_FUNC(sub_8301ADC0);
PPC_FUNC_IMPL(__imp__sub_8301ADC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8301ade4
	if (ctx.cr6.eq) goto loc_8301ADE4;
	// lwz r10,328(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 328);
	// stw r10,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r10.u32);
loc_8301ADE4:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r9,328(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 328);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stwx r3,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r3.u32);
	// stw r8,328(r4)
	PPC_STORE_U32(ctx.r4.u32 + 328, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AE18"))) PPC_WEAK_FUNC(sub_8301AE18);
PPC_FUNC_IMPL(__imp__sub_8301AE18) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301ae60
	if (ctx.cr6.eq) goto loc_8301AE60;
loc_8301AE44:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8301e820
	ctx.lr = 0x8301AE58;
	sub_8301E820(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8301ae44
	if (!ctx.cr6.eq) goto loc_8301AE44;
loc_8301AE60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AE7C"))) PPC_WEAK_FUNC(sub_8301AE7C);
PPC_FUNC_IMPL(__imp__sub_8301AE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301AE80"))) PPC_WEAK_FUNC(sub_8301AE80);
PPC_FUNC_IMPL(__imp__sub_8301AE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8301AE88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r29,20
	ctx.r28.s64 = ctx.r29.s64 + 20;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8301aa28
	ctx.lr = 0x8301AEA4;
	sub_8301AA28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301AEB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301af20
	if (ctx.cr6.eq) goto loc_8301AF20;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301c3e0
	ctx.lr = 0x8301AED0;
	sub_8301C3E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301af20
	if (ctx.cr6.eq) goto loc_8301AF20;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// stw r11,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8301af04
	if (!ctx.cr6.eq) goto loc_8301AF04;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d630b0
	ctx.lr = 0x8301AF04;
	sub_82D630B0(ctx, base);
loc_8301AF04:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8301AF20:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// bne 0x8301af58
	if (!ctx.cr0.eq) goto loc_8301AF58;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_8301AF3C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301af3c
	if (!ctx.cr0.eq) goto loc_8301AF3C;
	// lwsync 
loc_8301AF58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301AF60"))) PPC_WEAK_FUNC(sub_8301AF60);
PPC_FUNC_IMPL(__imp__sub_8301AF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8301AF68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8301aa28
	ctx.lr = 0x8301AF84;
	sub_8301AA28(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301AF98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301b010
	if (ctx.cr6.eq) goto loc_8301B010;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301c450
	ctx.lr = 0x8301AFB0;
	sub_8301C450(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301b010
	if (ctx.cr6.eq) goto loc_8301B010;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8301afe0
	if (ctx.cr6.eq) goto loc_8301AFE0;
	// lwz r10,328(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// stw r10,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r10.u32);
loc_8301AFE0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r9,328(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stwx r4,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r4.u32);
	// stw r8,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r8.u32);
loc_8301B010:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// bne 0x8301b048
	if (!ctx.cr0.eq) goto loc_8301B048;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_8301B02C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301b02c
	if (!ctx.cr0.eq) goto loc_8301B02C;
	// lwsync 
loc_8301B048:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B050"))) PPC_WEAK_FUNC(sub_8301B050);
PPC_FUNC_IMPL(__imp__sub_8301B050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8301B058;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r27,r28,20
	ctx.r27.s64 = ctx.r28.s64 + 20;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8301aa28
	ctx.lr = 0x8301B074;
	sub_8301AA28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8301b08c
	if (!ctx.cr6.eq) goto loc_8301B08C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x8301b094
	goto loc_8301B094;
loc_8301B08C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8301B094:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8301b100
	if (ctx.cr6.eq) goto loc_8301B100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301b100
	if (ctx.cr6.eq) goto loc_8301B100;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8301c308
	ctx.lr = 0x8301B0B0;
	sub_8301C308(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301b100
	if (ctx.cr6.eq) goto loc_8301B100;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// stw r11,328(r29)
	PPC_STORE_U32(ctx.r29.u32 + 328, ctx.r11.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8301b0e4
	if (!ctx.cr6.eq) goto loc_8301B0E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d630b0
	ctx.lr = 0x8301B0E4;
	sub_82D630B0(ctx, base);
loc_8301B0E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8301B100:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// bne 0x8301b138
	if (!ctx.cr0.eq) goto loc_8301B138;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_8301B11C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r27
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r27.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r27
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r27.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301b11c
	if (!ctx.cr0.eq) goto loc_8301B11C;
	// lwsync 
loc_8301B138:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B140"))) PPC_WEAK_FUNC(sub_8301B140);
PPC_FUNC_IMPL(__imp__sub_8301B140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8301B148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r28,r30,20
	ctx.r28.s64 = ctx.r30.s64 + 20;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8301aa28
	ctx.lr = 0x8301B164;
	sub_8301AA28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8301b17c
	if (!ctx.cr6.eq) goto loc_8301B17C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8301b184
	goto loc_8301B184;
loc_8301B17C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8301B184:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8301b200
	if (ctx.cr6.eq) goto loc_8301B200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301b200
	if (ctx.cr6.eq) goto loc_8301B200;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301c370
	ctx.lr = 0x8301B1A0;
	sub_8301C370(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301b200
	if (ctx.cr6.eq) goto loc_8301B200;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8301b1d0
	if (ctx.cr6.eq) goto loc_8301B1D0;
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stw r10,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r10.u32);
loc_8301B1D0:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r9,328(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stwx r4,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r4.u32);
	// stw r8,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r8.u32);
loc_8301B200:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// bne 0x8301b238
	if (!ctx.cr0.eq) goto loc_8301B238;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_8301B21C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8301b21c
	if (!ctx.cr0.eq) goto loc_8301B21C;
	// lwsync 
loc_8301B238:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B240"))) PPC_WEAK_FUNC(sub_8301B240);
PPC_FUNC_IMPL(__imp__sub_8301B240) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301b254
	if (ctx.cr6.eq) goto loc_8301B254;
loc_8301B24C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8301B254:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301b24c
	if (!ctx.cr6.eq) goto loc_8301B24C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301b24c
	if (!ctx.cr6.eq) goto loc_8301B24C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301b24c
	if (!ctx.cr6.eq) goto loc_8301B24C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301b24c
	if (!ctx.cr6.eq) goto loc_8301B24C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301b24c
	if (!ctx.cr6.eq) goto loc_8301B24C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301b24c
	if (!ctx.cr6.eq) goto loc_8301B24C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301b24c
	if (!ctx.cr6.eq) goto loc_8301B24C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B2B8"))) PPC_WEAK_FUNC(sub_8301B2B8);
PPC_FUNC_IMPL(__imp__sub_8301B2B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B2C0"))) PPC_WEAK_FUNC(sub_8301B2C0);
PPC_FUNC_IMPL(__imp__sub_8301B2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f12,f0,f13
	ctx.f9.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsel f6,f7,f8,f11
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f11.f64;
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// fsel f3,f4,f5,f10
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f5.f64 : ctx.f10.f64;
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f2,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f2,f10
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fsel f8,f9,f2,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f2.f64 : ctx.f10.f64;
	// stfs f8,16(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f7,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f1,f7
	ctx.f6.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// fsel f5,f6,f1,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f1.f64 : ctx.f7.f64;
	// stfs f5,20(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B340"))) PPC_WEAK_FUNC(sub_8301B340);
PPC_FUNC_IMPL(__imp__sub_8301B340) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,372(r3)
	PPC_STORE_U8(ctx.r3.u32 + 372, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B34C"))) PPC_WEAK_FUNC(sub_8301B34C);
PPC_FUNC_IMPL(__imp__sub_8301B34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301B350"))) PPC_WEAK_FUNC(sub_8301B350);
PPC_FUNC_IMPL(__imp__sub_8301B350) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 128);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B358"))) PPC_WEAK_FUNC(sub_8301B358);
PPC_FUNC_IMPL(__imp__sub_8301B358) {
	PPC_FUNC_PROLOGUE();
	// sth r4,128(r3)
	PPC_STORE_U16(ctx.r3.u32 + 128, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B360"))) PPC_WEAK_FUNC(sub_8301B360);
PPC_FUNC_IMPL(__imp__sub_8301B360) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B368"))) PPC_WEAK_FUNC(sub_8301B368);
PPC_FUNC_IMPL(__imp__sub_8301B368) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r1,32
	ctx.r11.s64 = ctx.r1.s64 + 32;
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// addi r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 + 132;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r9.u32);
	// stw r8,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r8.u32);
	// stw r7,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r7.u32);
	// stw r6,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B39C"))) PPC_WEAK_FUNC(sub_8301B39C);
PPC_FUNC_IMPL(__imp__sub_8301B39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301B3A0"))) PPC_WEAK_FUNC(sub_8301B3A0);
PPC_FUNC_IMPL(__imp__sub_8301B3A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B3A8"))) PPC_WEAK_FUNC(sub_8301B3A8);
PPC_FUNC_IMPL(__imp__sub_8301B3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8301B3B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r29,r10,22744
	ctx.r29.s64 = ctx.r10.s64 + 22744;
	// addi r5,r31,600
	ctx.r5.s64 = ctx.r31.s64 + 600;
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8301B3E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,636(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// addi r5,r31,616
	ctx.r5.s64 = ctx.r31.s64 + 616;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r6,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8301B400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8301B420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8301b454
	if (!ctx.cr6.eq) goto loc_8301B454;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301b454
	if (!ctx.cr6.eq) goto loc_8301B454;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301b454
	if (!ctx.cr6.eq) goto loc_8301B454;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8301b458
	if (ctx.cr6.eq) goto loc_8301B458;
loc_8301B454:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8301B458:
	// lbz r10,644(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 644);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B474"))) PPC_WEAK_FUNC(sub_8301B474);
PPC_FUNC_IMPL(__imp__sub_8301B474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301B478"))) PPC_WEAK_FUNC(sub_8301B478);
PPC_FUNC_IMPL(__imp__sub_8301B478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,2488
	ctx.r10.s64 = ctx.r11.s64 + 2488;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B488"))) PPC_WEAK_FUNC(sub_8301B488);
PPC_FUNC_IMPL(__imp__sub_8301B488) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82ff8508
	sub_82FF8508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B494"))) PPC_WEAK_FUNC(sub_8301B494);
PPC_FUNC_IMPL(__imp__sub_8301B494) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B498"))) PPC_WEAK_FUNC(sub_8301B498);
PPC_FUNC_IMPL(__imp__sub_8301B498) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ff4f88
	sub_82FF4F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B49C"))) PPC_WEAK_FUNC(sub_8301B49C);
PPC_FUNC_IMPL(__imp__sub_8301B49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301B4A0"))) PPC_WEAK_FUNC(sub_8301B4A0);
PPC_FUNC_IMPL(__imp__sub_8301B4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8301B4A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301B4BC;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301b7c0
	if (ctx.cr6.eq) goto loc_8301B7C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301B4E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r3.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8301B4FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8301B510:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8301b510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301B510;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301B550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8301B568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8301B580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r3,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r3.u16);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8301B59C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,52(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8301B5D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,76(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,80(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,84(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8301B60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 + 88;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8301B61C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8301b61c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301B61C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301B648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,132(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8301B67C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r31,136
	ctx.r10.s64 = ctx.r31.s64 + 136;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8301B68C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8301b68c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301B68C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301B6B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,180(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,92(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8301B6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f11,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,184(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,188(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,192(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,100(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8301B720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f8,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,196(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,200(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,204(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8301B754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f5,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,212(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lfs f4,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,216(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f3,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,220(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,116(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 116);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8301B784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// lfs f2,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stfs f2,224(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lfs f1,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,228(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lfs f0,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f13,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,236(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// beq cr6,0x8301b7e0
	if (ctx.cr6.eq) goto loc_8301B7E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8301B7B8;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8301B7C0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-1944
	ctx.r4.s64 = ctx.r11.s64 + -1944;
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r8,r4,-128
	ctx.r8.s64 = ctx.r4.s64 + -128;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301B7E0;
	sub_82D17988(ctx, base);
loc_8301B7E0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B7E8"))) PPC_WEAK_FUNC(sub_8301B7E8);
PPC_FUNC_IMPL(__imp__sub_8301B7E8) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 128);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B7F0"))) PPC_WEAK_FUNC(sub_8301B7F0);
PPC_FUNC_IMPL(__imp__sub_8301B7F0) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301B814;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301b838
	if (ctx.cr6.eq) goto loc_8301B838;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// sth r30,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r30.u16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301b858
	if (ctx.cr6.eq) goto loc_8301B858;
	// bl 0x82d5ed58
	ctx.lr = 0x8301B834;
	sub_82D5ED58(ctx, base);
	// b 0x8301b858
	goto loc_8301B858;
loc_8301B838:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-1720
	ctx.r4.s64 = ctx.r11.s64 + -1720;
	// li r5,142
	ctx.r5.s64 = 142;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301B858;
	sub_82D17988(ctx, base);
loc_8301B858:
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

__attribute__((alias("__imp__sub_8301B870"))) PPC_WEAK_FUNC(sub_8301B870);
PPC_FUNC_IMPL(__imp__sub_8301B870) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,132(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// addi r11,r4,132
	ctx.r11.s64 = ctx.r4.s64 + 132;
	// lwz r9,136(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// lwz r8,140(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r7,144(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B898"))) PPC_WEAK_FUNC(sub_8301B898);
PPC_FUNC_IMPL(__imp__sub_8301B898) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301B8BC;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301b914
	if (ctx.cr6.eq) goto loc_8301B914;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r31,132
	ctx.r10.s64 = ctx.r31.s64 + 132;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// stw r8,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r8.u32);
	// stw r7,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r7.u32);
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// beq cr6,0x8301b934
	if (ctx.cr6.eq) goto loc_8301B934;
	// bl 0x82d5ed58
	ctx.lr = 0x8301B900;
	sub_82D5ED58(ctx, base);
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
loc_8301B914:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-1496
	ctx.r4.s64 = ctx.r11.s64 + -1496;
	// li r5,154
	ctx.r5.s64 = 154;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301B934;
	sub_82D17988(ctx, base);
loc_8301B934:
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

__attribute__((alias("__imp__sub_8301B948"))) PPC_WEAK_FUNC(sub_8301B948);
PPC_FUNC_IMPL(__imp__sub_8301B948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r9,r4,24
	ctx.r9.s64 = ctx.r4.s64 + 24;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8301B95C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8301b95c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301B95C;
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f13,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f12,44(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B98C"))) PPC_WEAK_FUNC(sub_8301B98C);
PPC_FUNC_IMPL(__imp__sub_8301B98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301B990"))) PPC_WEAK_FUNC(sub_8301B990);
PPC_FUNC_IMPL(__imp__sub_8301B990) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301B9B4;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ba1c
	if (ctx.cr6.eq) goto loc_8301BA1C;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8301B9D8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8301b9d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301B9D8;
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f12,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stb r10,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r10.u8);
	// beq cr6,0x8301ba3c
	if (ctx.cr6.eq) goto loc_8301BA3C;
	// bl 0x82d5ed58
	ctx.lr = 0x8301BA18;
	sub_82D5ED58(ctx, base);
	// b 0x8301ba3c
	goto loc_8301BA3C;
loc_8301BA1C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-1272
	ctx.r4.s64 = ctx.r11.s64 + -1272;
	// li r5,166
	ctx.r5.s64 = 166;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301BA3C;
	sub_82D17988(ctx, base);
loc_8301BA3C:
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

__attribute__((alias("__imp__sub_8301BA54"))) PPC_WEAK_FUNC(sub_8301BA54);
PPC_FUNC_IMPL(__imp__sub_8301BA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301BA58"))) PPC_WEAK_FUNC(sub_8301BA58);
PPC_FUNC_IMPL(__imp__sub_8301BA58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BA60"))) PPC_WEAK_FUNC(sub_8301BA60);
PPC_FUNC_IMPL(__imp__sub_8301BA60) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301BA84;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301bab0
	if (ctx.cr6.eq) goto loc_8301BAB0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r11.u8);
	// beq cr6,0x8301bad0
	if (ctx.cr6.eq) goto loc_8301BAD0;
	// bl 0x82d5ed58
	ctx.lr = 0x8301BAAC;
	sub_82D5ED58(ctx, base);
	// b 0x8301bad0
	goto loc_8301BAD0;
loc_8301BAB0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-1048
	ctx.r4.s64 = ctx.r11.s64 + -1048;
	// li r5,179
	ctx.r5.s64 = 179;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301BAD0;
	sub_82D17988(ctx, base);
loc_8301BAD0:
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

__attribute__((alias("__imp__sub_8301BAE8"))) PPC_WEAK_FUNC(sub_8301BAE8);
PPC_FUNC_IMPL(__imp__sub_8301BAE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BAF0"))) PPC_WEAK_FUNC(sub_8301BAF0);
PPC_FUNC_IMPL(__imp__sub_8301BAF0) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301BB14;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301bb38
	if (ctx.cr6.eq) goto loc_8301BB38;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301bb58
	if (ctx.cr6.eq) goto loc_8301BB58;
	// bl 0x82d5ed58
	ctx.lr = 0x8301BB34;
	sub_82D5ED58(ctx, base);
	// b 0x8301bb58
	goto loc_8301BB58;
loc_8301BB38:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-816
	ctx.r4.s64 = ctx.r11.s64 + -816;
	// li r5,192
	ctx.r5.s64 = 192;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301BB58;
	sub_82D17988(ctx, base);
loc_8301BB58:
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

__attribute__((alias("__imp__sub_8301BB70"))) PPC_WEAK_FUNC(sub_8301BB70);
PPC_FUNC_IMPL(__imp__sub_8301BB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,148(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 156);
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

__attribute__((alias("__imp__sub_8301BB8C"))) PPC_WEAK_FUNC(sub_8301BB8C);
PPC_FUNC_IMPL(__imp__sub_8301BB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301BB90"))) PPC_WEAK_FUNC(sub_8301BB90);
PPC_FUNC_IMPL(__imp__sub_8301BB90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301BBB4;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301bbec
	if (ctx.cr6.eq) goto loc_8301BBEC;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,156(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// beq cr6,0x8301bc0c
	if (ctx.cr6.eq) goto loc_8301BC0C;
	// bl 0x82d5ed58
	ctx.lr = 0x8301BBE8;
	sub_82D5ED58(ctx, base);
	// b 0x8301bc0c
	goto loc_8301BC0C;
loc_8301BBEC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-592
	ctx.r4.s64 = ctx.r11.s64 + -592;
	// li r5,204
	ctx.r5.s64 = 204;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301BC0C;
	sub_82D17988(ctx, base);
loc_8301BC0C:
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

__attribute__((alias("__imp__sub_8301BC24"))) PPC_WEAK_FUNC(sub_8301BC24);
PPC_FUNC_IMPL(__imp__sub_8301BC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301BC28"))) PPC_WEAK_FUNC(sub_8301BC28);
PPC_FUNC_IMPL(__imp__sub_8301BC28) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,160
	ctx.r11.s64 = ctx.r4.s64 + 160;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8301BC38:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8301bc38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301BC38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BC50"))) PPC_WEAK_FUNC(sub_8301BC50);
PPC_FUNC_IMPL(__imp__sub_8301BC50) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301BC74;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301bcb8
	if (ctx.cr6.eq) goto loc_8301BCB8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r31,160
	ctx.r10.s64 = ctx.r31.s64 + 160;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8301BC94:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8301bc94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301BC94;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301bcd8
	if (ctx.cr6.eq) goto loc_8301BCD8;
	// bl 0x82d5ed58
	ctx.lr = 0x8301BCB4;
	sub_82D5ED58(ctx, base);
	// b 0x8301bcd8
	goto loc_8301BCD8;
loc_8301BCB8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-360
	ctx.r4.s64 = ctx.r11.s64 + -360;
	// li r5,218
	ctx.r5.s64 = 218;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301BCD8;
	sub_82D17988(ctx, base);
loc_8301BCD8:
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

__attribute__((alias("__imp__sub_8301BCF0"))) PPC_WEAK_FUNC(sub_8301BCF0);
PPC_FUNC_IMPL(__imp__sub_8301BCF0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,208
	ctx.r11.s64 = ctx.r4.s64 + 208;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8301BD00:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8301bd00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301BD00;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BD18"))) PPC_WEAK_FUNC(sub_8301BD18);
PPC_FUNC_IMPL(__imp__sub_8301BD18) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301BD3C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301bd80
	if (ctx.cr6.eq) goto loc_8301BD80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r31,208
	ctx.r10.s64 = ctx.r31.s64 + 208;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8301BD5C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8301bd5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301BD5C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301bda0
	if (ctx.cr6.eq) goto loc_8301BDA0;
	// bl 0x82d5ed58
	ctx.lr = 0x8301BD7C;
	sub_82D5ED58(ctx, base);
	// b 0x8301bda0
	goto loc_8301BDA0;
loc_8301BD80:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// li r5,230
	ctx.r5.s64 = 230;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301BDA0;
	sub_82D17988(ctx, base);
loc_8301BDA0:
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

__attribute__((alias("__imp__sub_8301BDB8"))) PPC_WEAK_FUNC(sub_8301BDB8);
PPC_FUNC_IMPL(__imp__sub_8301BDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,196(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,200(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,204(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 204);
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

__attribute__((alias("__imp__sub_8301BDD4"))) PPC_WEAK_FUNC(sub_8301BDD4);
PPC_FUNC_IMPL(__imp__sub_8301BDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301BDD8"))) PPC_WEAK_FUNC(sub_8301BDD8);
PPC_FUNC_IMPL(__imp__sub_8301BDD8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301BDFC;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301be34
	if (ctx.cr6.eq) goto loc_8301BE34;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f13,200(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,204(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// beq cr6,0x8301be54
	if (ctx.cr6.eq) goto loc_8301BE54;
	// bl 0x82d5ed58
	ctx.lr = 0x8301BE30;
	sub_82D5ED58(ctx, base);
	// b 0x8301be54
	goto loc_8301BE54;
loc_8301BE34:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,104
	ctx.r4.s64 = ctx.r11.s64 + 104;
	// li r5,243
	ctx.r5.s64 = 243;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301BE54;
	sub_82D17988(ctx, base);
loc_8301BE54:
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

__attribute__((alias("__imp__sub_8301BE6C"))) PPC_WEAK_FUNC(sub_8301BE6C);
PPC_FUNC_IMPL(__imp__sub_8301BE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301BE70"))) PPC_WEAK_FUNC(sub_8301BE70);
PPC_FUNC_IMPL(__imp__sub_8301BE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,244(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,248(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,252(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 252);
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

__attribute__((alias("__imp__sub_8301BE8C"))) PPC_WEAK_FUNC(sub_8301BE8C);
PPC_FUNC_IMPL(__imp__sub_8301BE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301BE90"))) PPC_WEAK_FUNC(sub_8301BE90);
PPC_FUNC_IMPL(__imp__sub_8301BE90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301BEB4;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301beec
	if (ctx.cr6.eq) goto loc_8301BEEC;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f13,248(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,252(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// beq cr6,0x8301bf0c
	if (ctx.cr6.eq) goto loc_8301BF0C;
	// bl 0x82d5ed58
	ctx.lr = 0x8301BEE8;
	sub_82D5ED58(ctx, base);
	// b 0x8301bf0c
	goto loc_8301BF0C;
loc_8301BEEC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,336
	ctx.r4.s64 = ctx.r11.s64 + 336;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301BF0C;
	sub_82D17988(ctx, base);
loc_8301BF0C:
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

__attribute__((alias("__imp__sub_8301BF24"))) PPC_WEAK_FUNC(sub_8301BF24);
PPC_FUNC_IMPL(__imp__sub_8301BF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301BF28"))) PPC_WEAK_FUNC(sub_8301BF28);
PPC_FUNC_IMPL(__imp__sub_8301BF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,256(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,264(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 264);
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

__attribute__((alias("__imp__sub_8301BF44"))) PPC_WEAK_FUNC(sub_8301BF44);
PPC_FUNC_IMPL(__imp__sub_8301BF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301BF48"))) PPC_WEAK_FUNC(sub_8301BF48);
PPC_FUNC_IMPL(__imp__sub_8301BF48) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301BF6C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301bfb8
	if (ctx.cr6.eq) goto loc_8301BFB8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fsel f12,f13,f13,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f12,256(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f11,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// stfs f10,260(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsel f8,f9,f9,f0
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// stfs f8,264(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// beq cr6,0x8301bfd8
	if (ctx.cr6.eq) goto loc_8301BFD8;
	// bl 0x82d5ed58
	ctx.lr = 0x8301BFB4;
	sub_82D5ED58(ctx, base);
	// b 0x8301bfd8
	goto loc_8301BFD8;
loc_8301BFB8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,568
	ctx.r4.s64 = ctx.r11.s64 + 568;
	// li r5,268
	ctx.r5.s64 = 268;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301BFD8;
	sub_82D17988(ctx, base);
loc_8301BFD8:
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

__attribute__((alias("__imp__sub_8301BFF0"))) PPC_WEAK_FUNC(sub_8301BFF0);
PPC_FUNC_IMPL(__imp__sub_8301BFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,268(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,272(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,276(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 276);
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

__attribute__((alias("__imp__sub_8301C00C"))) PPC_WEAK_FUNC(sub_8301C00C);
PPC_FUNC_IMPL(__imp__sub_8301C00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301C010"))) PPC_WEAK_FUNC(sub_8301C010);
PPC_FUNC_IMPL(__imp__sub_8301C010) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301C034;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301c080
	if (ctx.cr6.eq) goto loc_8301C080;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fsel f12,f13,f13,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f12,268(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f11,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// stfs f10,272(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsel f8,f9,f9,f0
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// stfs f8,276(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// beq cr6,0x8301c0a0
	if (ctx.cr6.eq) goto loc_8301C0A0;
	// bl 0x82d5ed58
	ctx.lr = 0x8301C07C;
	sub_82D5ED58(ctx, base);
	// b 0x8301c0a0
	goto loc_8301C0A0;
loc_8301C080:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,800
	ctx.r4.s64 = ctx.r11.s64 + 800;
	// li r5,282
	ctx.r5.s64 = 282;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301C0A0;
	sub_82D17988(ctx, base);
loc_8301C0A0:
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

__attribute__((alias("__imp__sub_8301C0B8"))) PPC_WEAK_FUNC(sub_8301C0B8);
PPC_FUNC_IMPL(__imp__sub_8301C0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,284(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,288(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,292(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 292);
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

__attribute__((alias("__imp__sub_8301C0D4"))) PPC_WEAK_FUNC(sub_8301C0D4);
PPC_FUNC_IMPL(__imp__sub_8301C0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301C0D8"))) PPC_WEAK_FUNC(sub_8301C0D8);
PPC_FUNC_IMPL(__imp__sub_8301C0D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301C0FC;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301c134
	if (ctx.cr6.eq) goto loc_8301C134;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f13,288(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,292(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// beq cr6,0x8301c154
	if (ctx.cr6.eq) goto loc_8301C154;
	// bl 0x82d5ed58
	ctx.lr = 0x8301C130;
	sub_82D5ED58(ctx, base);
	// b 0x8301c154
	goto loc_8301C154;
loc_8301C134:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,1024
	ctx.r4.s64 = ctx.r11.s64 + 1024;
	// li r5,297
	ctx.r5.s64 = 297;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301C154;
	sub_82D17988(ctx, base);
loc_8301C154:
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

__attribute__((alias("__imp__sub_8301C16C"))) PPC_WEAK_FUNC(sub_8301C16C);
PPC_FUNC_IMPL(__imp__sub_8301C16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301C170"))) PPC_WEAK_FUNC(sub_8301C170);
PPC_FUNC_IMPL(__imp__sub_8301C170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,280(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C178"))) PPC_WEAK_FUNC(sub_8301C178);
PPC_FUNC_IMPL(__imp__sub_8301C178) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301C19C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301c1c0
	if (ctx.cr6.eq) goto loc_8301C1C0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301c1e0
	if (ctx.cr6.eq) goto loc_8301C1E0;
	// bl 0x82d5ed58
	ctx.lr = 0x8301C1BC;
	sub_82D5ED58(ctx, base);
	// b 0x8301c1e0
	goto loc_8301C1E0;
loc_8301C1C0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,1256
	ctx.r4.s64 = ctx.r11.s64 + 1256;
	// li r5,311
	ctx.r5.s64 = 311;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301C1E0;
	sub_82D17988(ctx, base);
loc_8301C1E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8301C1F8"))) PPC_WEAK_FUNC(sub_8301C1F8);
PPC_FUNC_IMPL(__imp__sub_8301C1F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,296(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C200"))) PPC_WEAK_FUNC(sub_8301C200);
PPC_FUNC_IMPL(__imp__sub_8301C200) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301C224;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301c248
	if (ctx.cr6.eq) goto loc_8301C248;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301c268
	if (ctx.cr6.eq) goto loc_8301C268;
	// bl 0x82d5ed58
	ctx.lr = 0x8301C244;
	sub_82D5ED58(ctx, base);
	// b 0x8301c268
	goto loc_8301C268;
loc_8301C248:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,1480
	ctx.r4.s64 = ctx.r11.s64 + 1480;
	// li r5,324
	ctx.r5.s64 = 324;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301C268;
	sub_82D17988(ctx, base);
loc_8301C268:
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

__attribute__((alias("__imp__sub_8301C280"))) PPC_WEAK_FUNC(sub_8301C280);
PPC_FUNC_IMPL(__imp__sub_8301C280) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301C29C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301c2d4
	if (ctx.cr6.eq) goto loc_8301C2D4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// beq cr6,0x8301c2f4
	if (ctx.cr6.eq) goto loc_8301C2F4;
	// bl 0x82d5ed58
	ctx.lr = 0x8301C2C0;
	sub_82D5ED58(ctx, base);
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
loc_8301C2D4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,2160
	ctx.r4.s64 = ctx.r11.s64 + 2160;
	// li r5,480
	ctx.r5.s64 = 480;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301C2F4;
	sub_82D17988(ctx, base);
loc_8301C2F4:
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

__attribute__((alias("__imp__sub_8301C308"))) PPC_WEAK_FUNC(sub_8301C308);
PPC_FUNC_IMPL(__imp__sub_8301C308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8301C310;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,356
	ctx.r31.s64 = ctx.r30.s64 + 356;
	// lwz r11,356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// lwz r10,360(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301c33c
	if (!ctx.cr6.eq) goto loc_8301C33C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d630b0
	ctx.lr = 0x8301C33C;
	sub_82D630B0(ctx, base);
loc_8301C33C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r11,360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C370"))) PPC_WEAK_FUNC(sub_8301C370);
PPC_FUNC_IMPL(__imp__sub_8301C370) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,360(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,364(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8301c3a0
	if (ctx.cr6.eq) goto loc_8301C3A0;
loc_8301C384:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8301c3a8
	if (ctx.cr6.eq) goto loc_8301C3A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8301c384
	if (ctx.cr6.lt) goto loc_8301C384;
loc_8301C3A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8301C3A8:
	// lwz r10,360(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r3,356
	ctx.r11.s64 = ctx.r3.s64 + 356;
	// lwz r8,364(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r11.u32);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stwx r6,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwz r5,360(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C3DC"))) PPC_WEAK_FUNC(sub_8301C3DC);
PPC_FUNC_IMPL(__imp__sub_8301C3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301C3E0"))) PPC_WEAK_FUNC(sub_8301C3E0);
PPC_FUNC_IMPL(__imp__sub_8301C3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8301C3E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,356
	ctx.r31.s64 = ctx.r30.s64 + 356;
	// lwz r11,356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// lwz r10,360(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301c414
	if (!ctx.cr6.eq) goto loc_8301C414;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d630b0
	ctx.lr = 0x8301C414;
	sub_82D630B0(ctx, base);
loc_8301C414:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r29,1
	ctx.r10.u64 = ctx.r29.u64 | 1;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r11,360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C44C"))) PPC_WEAK_FUNC(sub_8301C44C);
PPC_FUNC_IMPL(__imp__sub_8301C44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301C450"))) PPC_WEAK_FUNC(sub_8301C450);
PPC_FUNC_IMPL(__imp__sub_8301C450) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,360(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,364(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8301c484
	if (ctx.cr6.eq) goto loc_8301C484;
loc_8301C464:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8301c48c
	if (ctx.cr6.eq) goto loc_8301C48C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8301c464
	if (ctx.cr6.lt) goto loc_8301C464;
loc_8301C484:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8301C48C:
	// lwz r10,360(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r3,356
	ctx.r11.s64 = ctx.r3.s64 + 356;
	// lwz r8,364(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r11.u32);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stwx r6,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwz r5,360(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C4C0"))) PPC_WEAK_FUNC(sub_8301C4C0);
PPC_FUNC_IMPL(__imp__sub_8301C4C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stb r9,374(r3)
	PPC_STORE_U8(ctx.r3.u32 + 374, ctx.r9.u8);
	// stb r7,373(r3)
	PPC_STORE_U8(ctx.r3.u32 + 373, ctx.r7.u8);
	// addi r10,r3,304
	ctx.r10.s64 = ctx.r3.s64 + 304;
	// lwz r8,308(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// subf r5,r6,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r6.s64;
	// srawi. r9,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_8301C4F4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,64(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8301c51c
	if (ctx.cr6.eq) goto loc_8301C51C;
	// stb r7,374(r3)
	PPC_STORE_U8(ctx.r3.u32 + 374, ctx.r7.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_8301C51C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8301c4f4
	if (!ctx.cr0.eq) goto loc_8301C4F4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C52C"))) PPC_WEAK_FUNC(sub_8301C52C);
PPC_FUNC_IMPL(__imp__sub_8301C52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301C530"))) PPC_WEAK_FUNC(sub_8301C530);
PPC_FUNC_IMPL(__imp__sub_8301C530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// lwz r10,304(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C544"))) PPC_WEAK_FUNC(sub_8301C544);
PPC_FUNC_IMPL(__imp__sub_8301C544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301C548"))) PPC_WEAK_FUNC(sub_8301C548);
PPC_FUNC_IMPL(__imp__sub_8301C548) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301C568;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301c5ec
	if (ctx.cr6.eq) goto loc_8301C5EC;
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r31,304
	ctx.r11.s64 = ctx.r31.s64 + 304;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lwz r9,308(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r8,304(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8301c5d8
	if (!ctx.cr6.lt) goto loc_8301C5D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8301C5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301c5d0
	if (ctx.cr6.eq) goto loc_8301C5D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8301C5D0;
	sub_82D5ED58(ctx, base);
loc_8301C5D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8301c610
	goto loc_8301C610;
loc_8301C5D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301c60c
	if (ctx.cr6.eq) goto loc_8301C60C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8301C5E8;
	sub_82D5ED58(ctx, base);
	// b 0x8301c60c
	goto loc_8301C60C;
loc_8301C5EC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,2384
	ctx.r4.s64 = ctx.r11.s64 + 2384;
	// li r5,486
	ctx.r5.s64 = 486;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301C60C;
	sub_82D17988(ctx, base);
loc_8301C60C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8301C610:
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

__attribute__((alias("__imp__sub_8301C628"))) PPC_WEAK_FUNC(sub_8301C628);
PPC_FUNC_IMPL(__imp__sub_8301C628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6acc
	ctx.lr = 0x8301C638;
	__savefpr_21(ctx, base);
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lfs f13,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fsubs f2,f10,f9
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f7,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f31,f11,f12
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f30,f10,f12
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f29,f9,f12
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f28,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f26.f64 = double(temp.f32);
	// lfs f0,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f31,f8,f2,f31
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f31.f64));
	// fmadds f30,f7,f2,f30
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f30.f64));
	// fmadds f2,f6,f2,f29
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f29.f64));
	// fmadds f31,f5,f1,f31
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f31.f64));
	// fmadds f30,f4,f1,f30
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f30.f64));
	// fmadds f29,f3,f1,f2
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fsubs f2,f28,f31
	ctx.f2.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fsubs f1,f27,f30
	ctx.f1.f64 = double(float(ctx.f27.f64 - ctx.f30.f64));
	// fsubs f31,f26,f29
	ctx.f31.f64 = double(float(ctx.f26.f64 - ctx.f29.f64));
	// beq cr6,0x8301c770
	if (ctx.cr6.eq) goto loc_8301C770;
	// lfs f30,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f7,f30,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f7.f64));
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f6,f30,f6
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f6.f64));
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f8,f30,f8
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// lfs f30,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f30.f64 = double(temp.f32);
	// lfs f27,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f26.f64 = double(temp.f32);
	// lfs f23,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f23.f64 = double(temp.f32);
	// lfs f25,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f24.f64 = double(temp.f32);
	// lfs f22,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,228(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f7,f29,f4,f7
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f4.f64 + ctx.f7.f64));
	// lfs f4,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f29,f3,f6
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f3.f64 + ctx.f6.f64));
	// lfs f6,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f29,f5,f8
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f5.f64 + ctx.f8.f64));
	// lfs f8,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f8.f64 = double(temp.f32);
	// lfs f29,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f7,f28,f10,f7
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f3,f28,f9,f3
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f11,f28,f11,f5
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fsubs f10,f30,f7
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f7.f64));
	// fsubs f9,f27,f3
	ctx.f9.f64 = double(float(ctx.f27.f64 - ctx.f3.f64));
	// fsubs f7,f23,f11
	ctx.f7.f64 = double(float(ctx.f23.f64 - ctx.f11.f64));
	// fmuls f5,f26,f10
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f10.f64));
	// fmuls f3,f25,f10
	ctx.f3.f64 = double(float(ctx.f25.f64 * ctx.f10.f64));
	// fmuls f11,f24,f10
	ctx.f11.f64 = double(float(ctx.f24.f64 * ctx.f10.f64));
	// fmadds f10,f22,f9,f5
	ctx.f10.f64 = double(float(ctx.f22.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f5,f21,f9,f3
	ctx.f5.f64 = double(float(ctx.f21.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f4,f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f3,f6,f7,f10
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f10.f64));
	// fmadds f11,f8,f7,f5
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f10,f29,f7,f4
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fadds f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
loc_8301C770:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301c7d0
	if (ctx.cr6.eq) goto loc_8301C7D0;
	// lfs f11,164(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f8,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f1
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f6,f8,f1
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// lfs f5,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f5,f5,f31,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fmadds f4,f4,f31,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f7.f64));
	// fmadds f3,f3,f31,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f6.f64));
	// fmadds f11,f11,f2,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fmadds f10,f10,f2,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f4.f64));
	// fmadds f9,f8,f2,f3
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f3.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
loc_8301C7D0:
	// lis r11,32760
	ctx.r11.s64 = 2146959360;
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r7,r11,41965
	ctx.r7.u64 = ctx.r11.u64 | 41965;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mullw r5,r10,r7
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lfs f8,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,6140(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6140);
	ctx.f11.f64 = double(temp.f32);
	// addis r11,r5,10912
	ctx.r11.s64 = ctx.r5.s64 + 715128832;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,7473
	ctx.r11.s64 = ctx.r11.s64 + 7473;
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// lfs f10,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f8
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// lfs f9,13604(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13604);
	ctx.f9.f64 = double(temp.f32);
	// beq cr6,0x8301c830
	if (ctx.cr6.eq) goto loc_8301C830;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// std r10,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r10.u64);
	// lfd f7,-112(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmsubs f4,f5,f9,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 - ctx.f11.f64));
	// fmadds f0,f4,f10,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f0.f64));
loc_8301C830:
	// lfs f10,288(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f8
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// beq cr6,0x8301c85c
	if (ctx.cr6.eq) goto loc_8301C85C;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// std r10,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r10.u64);
	// lfd f7,-112(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmsubs f4,f5,f9,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 - ctx.f11.f64));
	// fmadds f13,f4,f10,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f13.f64));
loc_8301C85C:
	// lfs f10,292(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f8
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// beq cr6,0x8301c884
	if (ctx.cr6.eq) goto loc_8301C884;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r11.u64);
	// lfd f8,-112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmsubs f5,f6,f9,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 - ctx.f11.f64));
	// fmadds f12,f5,f10,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f12.f64));
loc_8301C884:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301c8f0
	if (ctx.cr6.eq) goto loc_8301C8F0;
	// lfs f10,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f10.f64 = double(temp.f32);
	// fabs f9,f2
	ctx.f9.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lfs f8,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f2
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// lfs f6,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f1
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// lfs f3,256(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f3.f64 = double(temp.f32);
	// fabs f10,f1
	ctx.f10.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f8,260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f8.f64 = double(temp.f32);
	// fabs f6,f31
	ctx.f6.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lfs f30,264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f2,f7,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f1,f5,f1
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmuls f7,f4,f31
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmadds f5,f9,f3,f2
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fmadds f4,f10,f8,f1
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fmadds f3,f6,f30,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f7.f64));
	// fadds f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fadds f1,f4,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fadds f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// fdivs f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// fdivs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
loc_8301C8F0:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b18
	ctx.lr = 0x8301C904;
	__restfpr_21(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C910"))) PPC_WEAK_FUNC(sub_8301C910);
PPC_FUNC_IMPL(__imp__sub_8301C910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6ad8
	ctx.lr = 0x8301C924;
	__savefpr_24(ctx, base);
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f6,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f8,f12
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f29,f6,f12
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f1,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f31,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f10,-17040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17040);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f9.f64 = double(temp.f32);
	// lfs f30,6140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6140);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f13,f7,f0,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f29,f3,f0,f29
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f29.f64));
	// fmadds f12,f2,f0,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f0,f4,f11,f13
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f13,f1,f11,f29
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f29.f64));
	// fmadds f12,f31,f11,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x8301c9d4
	if (!ctx.cr6.gt) goto loc_8301C9D4;
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f10,f30,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// fsubs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// b 0x8301c9e4
	goto loc_8301C9E4;
loc_8301C9D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_8301C9E4:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lfs f0,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ca5c
	if (ctx.cr6.eq) goto loc_8301CA5C;
	// lfs f10,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f6,f10,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f28,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// lfs f26,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f26.f64 = double(temp.f32);
	// lfs f10,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// lfs f27,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f27,f27,f26
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f26.f64));
	// lfs f26,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f8,f29,f4,f8
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f4.f64 + ctx.f8.f64));
	// fmadds f6,f29,f1,f6
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f1.f64 + ctx.f6.f64));
	// fmadds f5,f29,f31,f5
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fmadds f4,f28,f7,f8
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f3,f28,f3,f6
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fmadds f2,f28,f2,f5
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fmuls f1,f4,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmadds f8,f3,f13,f1
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f7,f2,f12,f8
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fsubs f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fmadds f5,f6,f26,f27
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f26.f64 + ctx.f27.f64));
	// fmadds f4,f25,f24,f5
	ctx.f4.f64 = double(float(ctx.f25.f64 * ctx.f24.f64 + ctx.f5.f64));
	// fadds f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
loc_8301CA5C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ca70
	if (ctx.cr6.eq) goto loc_8301CA70;
	// lfs f10,160(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f10,f9,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f0.f64));
loc_8301CA70:
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8301caa0
	if (!ctx.cr6.eq) goto loc_8301CAA0;
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8301caa0
	if (!ctx.cr6.eq) goto loc_8301CAA0;
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301cae4
	if (ctx.cr6.eq) goto loc_8301CAE4;
loc_8301CAA0:
	// lis r11,32760
	ctx.r11.s64 = 2146959360;
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f8,284(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f8.f64 = double(temp.f32);
	// ori r7,r11,41965
	ctx.r7.u64 = ctx.r11.u64 | 41965;
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lfs f10,13604(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13604);
	ctx.f10.f64 = double(temp.f32);
	// addis r5,r6,10912
	ctx.r5.s64 = ctx.r6.s64 + 715128832;
	// addi r5,r5,7473
	ctx.r5.s64 = ctx.r5.s64 + 7473;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r5,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r5.u32);
	// std r11,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r11.u64);
	// lfd f7,-96(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmsubs f4,f5,f10,f30
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 - ctx.f30.f64));
	// fmadds f0,f4,f8,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f0.f64));
loc_8301CAE4:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301cb10
	if (ctx.cr6.eq) goto loc_8301CB10;
	// lfs f10,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f10.f64 = double(temp.f32);
	// fabs f8,f9
	ctx.f8.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fmuls f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f6,256(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmadds f4,f8,f6,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fadds f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f30.f64));
	// fdivs f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
loc_8301CB10:
	// fmuls f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,8(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6b24
	ctx.lr = 0x8301CB30;
	__restfpr_24(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CB40"))) PPC_WEAK_FUNC(sub_8301CB40);
PPC_FUNC_IMPL(__imp__sub_8301CB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6ac0
	ctx.lr = 0x8301CB58;
	__savefpr_18(ctx, base);
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// fsubs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f13,f9
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f9,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f29,f9,f12
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f3,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f27,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f27.f64 = double(temp.f32);
	// lfs f2,-17040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17040);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// lfs f28,6048(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6048);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,6140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6140);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f13,f10,f0,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f29,f6,f0,f29
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f29.f64));
	// fmadds f12,f5,f0,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f0,f8,f31,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f13,f4,f31,f29
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f29.f64));
	// fmadds f12,f3,f31,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fmuls f31,f0,f0
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f29,f27,f12
	ctx.f29.f64 = double(float(ctx.f27.f64 - ctx.f12.f64));
	// fmadds f12,f13,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f31.f64));
	// fcmpu cr6,f12,f2
	ctx.cr6.compare(ctx.f12.f64, ctx.f2.f64);
	// ble cr6,0x8301cc10
	if (!ctx.cr6.gt) goto loc_8301CC10;
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f2,f30,f12
	ctx.f2.f64 = double(float(ctx.f30.f64 / ctx.f12.f64));
	// fsubs f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fmuls f31,f2,f0
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// b 0x8301cc18
	goto loc_8301CC18;
loc_8301CC10:
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
loc_8301CC18:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lfs f0,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ccdc
	if (ctx.cr6.eq) goto loc_8301CCDC;
	// lfs f27,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f10,f27,f10
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// lfs f26,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f6,f27,f6
	ctx.f6.f64 = double(float(ctx.f27.f64 * ctx.f6.f64));
	// lfs f25,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f5,f27,f5
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f5.f64));
	// lfs f27,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f27.f64 = double(temp.f32);
	// lfs f23,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f21.f64 = double(temp.f32);
	// lfs f24,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f24.f64 = double(temp.f32);
	// lfs f20,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,228(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f10,f26,f8,f10
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f8.f64 + ctx.f10.f64));
	// lfs f8,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f6,f26,f4,f6
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f4.f64 + ctx.f6.f64));
	// lfs f4,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f26,f3,f5
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f3.f64 + ctx.f5.f64));
	// lfs f5,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f5.f64 = double(temp.f32);
	// lfs f26,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f11,f25,f11,f10
	ctx.f11.f64 = double(float(ctx.f25.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f10,f25,f9,f6
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f9,f25,f7,f3
	ctx.f9.f64 = double(float(ctx.f25.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fmuls f7,f11,f2
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmuls f6,f11,f31
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fsubs f3,f27,f9
	ctx.f3.f64 = double(float(ctx.f27.f64 - ctx.f9.f64));
	// fmsubs f11,f10,f31,f7
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 - ctx.f7.f64));
	// fmadds f10,f10,f2,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f6.f64));
	// fmuls f9,f23,f3
	ctx.f9.f64 = double(float(ctx.f23.f64 * ctx.f3.f64));
	// fmuls f7,f22,f3
	ctx.f7.f64 = double(float(ctx.f22.f64 * ctx.f3.f64));
	// fmuls f6,f21,f3
	ctx.f6.f64 = double(float(ctx.f21.f64 * ctx.f3.f64));
	// fsubs f3,f24,f11
	ctx.f3.f64 = double(float(ctx.f24.f64 - ctx.f11.f64));
	// fsubs f11,f20,f10
	ctx.f11.f64 = double(float(ctx.f20.f64 - ctx.f10.f64));
	// fmadds f10,f19,f3,f9
	ctx.f10.f64 = double(float(ctx.f19.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fmadds f9,f18,f3,f7
	ctx.f9.f64 = double(float(ctx.f18.f64 * ctx.f3.f64 + ctx.f7.f64));
	// fmadds f8,f8,f3,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fmadds f7,f4,f11,f10
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f6,f5,f11,f9
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f5,f26,f11,f8
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fadds f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
loc_8301CCDC:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301cd24
	if (ctx.cr6.eq) goto loc_8301CD24;
	// lfs f11,160(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f8,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f1
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f6,f8,f1
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// lfs f5,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f5,f29,f9
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f9.f64));
	// fmadds f10,f4,f29,f7
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f7.f64));
	// fmadds f9,f3,f29,f6
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f29.f64 + ctx.f6.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
loc_8301CD24:
	// lis r11,32760
	ctx.r11.s64 = 2146959360;
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// ori r7,r11,41965
	ctx.r7.u64 = ctx.r11.u64 | 41965;
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lfs f11,13604(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13604);
	ctx.f11.f64 = double(temp.f32);
	// addis r11,r6,10912
	ctx.r11.s64 = ctx.r6.s64 + 715128832;
	// addi r11,r11,7473
	ctx.r11.s64 = ctx.r11.s64 + 7473;
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// lfs f10,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f28
	ctx.cr6.compare(ctx.f10.f64, ctx.f28.f64);
	// beq cr6,0x8301cd74
	if (ctx.cr6.eq) goto loc_8301CD74;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// std r10,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.r10.u64);
	// lfd f9,-144(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmsubs f6,f7,f11,f30
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f30.f64));
	// fmadds f0,f6,f10,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f0.f64));
loc_8301CD74:
	// lfs f10,288(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f28
	ctx.cr6.compare(ctx.f10.f64, ctx.f28.f64);
	// beq cr6,0x8301cda0
	if (ctx.cr6.eq) goto loc_8301CDA0;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// std r10,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.r10.u64);
	// lfd f9,-144(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmsubs f6,f7,f11,f30
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f30.f64));
	// fmadds f13,f6,f10,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f13.f64));
loc_8301CDA0:
	// lfs f10,292(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f28
	ctx.cr6.compare(ctx.f10.f64, ctx.f28.f64);
	// beq cr6,0x8301cdc8
	if (ctx.cr6.eq) goto loc_8301CDC8;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.r11.u64);
	// lfd f9,-144(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmsubs f6,f7,f11,f30
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f30.f64));
	// fmadds f12,f6,f10,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f12.f64));
loc_8301CDC8:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ce14
	if (ctx.cr6.eq) goto loc_8301CE14;
	// lfs f11,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f1
	ctx.f10.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f9,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f7,f9,f29
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// lfs f6,256(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f6.f64 = double(temp.f32);
	// fabs f5,f29
	ctx.f5.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// lfs f4,260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f8,f1
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f1,f7,f29
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// fmadds f11,f10,f6,f3
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f10,f5,f4,f1
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fadds f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// fadds f8,f10,f30
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// fdivs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fdivs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
loc_8301CE14:
	// fmuls f11,f12,f2
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f10,f0,f2
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmsubs f9,f0,f31,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f11.f64));
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmadds f8,f12,f31,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f8,8(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b0c
	ctx.lr = 0x8301CE38;
	__restfpr_18(ctx, base);
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

__attribute__((alias("__imp__sub_8301CE4C"))) PPC_WEAK_FUNC(sub_8301CE4C);
PPC_FUNC_IMPL(__imp__sub_8301CE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301CE50"))) PPC_WEAK_FUNC(sub_8301CE50);
PPC_FUNC_IMPL(__imp__sub_8301CE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6ab0
	ctx.lr = 0x8301CE68;
	__savefpr_14(ctx, base);
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lis r31,-32222
	ctx.r31.s64 = -2111700992;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lfs f2,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f30,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// lfs f7,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f29,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f0,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f3,f2,f12
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f25,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f13,f30,f12
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// lfs f26,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,-192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f24,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f24.f64 = double(temp.f32);
	// fmr f4,f0
	ctx.f4.f64 = ctx.f0.f64;
	// lfs f9,-17040(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -17040);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,6140(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6140);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f11,f29,f8,f3
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f10,f28,f8,f13
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fmadds f8,f25,f8,f12
	ctx.f8.f64 = double(float(ctx.f25.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fmadds f13,f27,f5,f11
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f5.f64 + ctx.f11.f64));
	// fmadds f12,f26,f5,f10
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fmadds f8,f24,f5,f8
	ctx.f8.f64 = double(float(ctx.f24.f64 * ctx.f5.f64 + ctx.f8.f64));
	// fmuls f7,f13,f13
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f11,f12,f12,f7
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// bge cr6,0x8301cf1c
	if (!ctx.cr6.lt) goto loc_8301CF1C;
	// lfs f6,-184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// lfs f7,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f7.f64 = double(temp.f32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// lfs f8,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f8.f64 = double(temp.f32);
	// b 0x8301cf8c
	goto loc_8301CF8C;
loc_8301CF1C:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// lfs f7,280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f6,f1,f11
	ctx.f6.f64 = double(float(ctx.f1.f64 / ctx.f11.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f10,f6,f12
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f11,f3,f7
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f6,f7,f5
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f3,f7,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fsubs f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fsubs f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fsubs f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f13,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f8,f12,f12,f7
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bge cr6,0x8301cf78
	if (!ctx.cr6.lt) goto loc_8301CF78;
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// b 0x8301cf8c
	goto loc_8301CF8C;
loc_8301CF78:
	// fsqrts f4,f8
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(sqrt(ctx.f8.f64)));
	// fdivs f9,f1,f4
	ctx.f9.f64 = double(float(ctx.f1.f64 / ctx.f4.f64));
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
loc_8301CF8C:
	// fneg f9,f5
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f13,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f11,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f13,f4
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// lfs f13,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f23,f7,f9
	ctx.f23.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmsubs f4,f6,f9,f3
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 - ctx.f3.f64));
	// fmsubs f5,f7,f10,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f5.f64));
	// fmsubs f3,f8,f0,f23
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f23.f64));
	// beq cr6,0x8301d094
	if (ctx.cr6.eq) goto loc_8301D094;
	// lfs f23,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f29,f23,f29
	ctx.f29.f64 = double(float(ctx.f23.f64 * ctx.f29.f64));
	// lfs f22,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f28,f23,f28
	ctx.f28.f64 = double(float(ctx.f23.f64 * ctx.f28.f64));
	// lfs f21,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f25,f23,f25
	ctx.f25.f64 = double(float(ctx.f23.f64 * ctx.f25.f64));
	// lfs f23,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f23.f64 = double(temp.f32);
	// lfs f20,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f17.f64 = double(temp.f32);
	// lfs f16,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f16.f64 = double(temp.f32);
	// lfs f15,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f15.f64 = double(temp.f32);
	// lfs f14,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f14.f64 = double(temp.f32);
	// fmadds f29,f22,f27,f29
	ctx.f29.f64 = double(float(ctx.f22.f64 * ctx.f27.f64 + ctx.f29.f64));
	// lfs f27,228(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f28,f22,f26,f28
	ctx.f28.f64 = double(float(ctx.f22.f64 * ctx.f26.f64 + ctx.f28.f64));
	// lfs f26,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f25,f22,f24,f25
	ctx.f25.f64 = double(float(ctx.f22.f64 * ctx.f24.f64 + ctx.f25.f64));
	// stfd f1,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.f1.u64);
	// lfs f24,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f24.f64 = double(temp.f32);
	// lfs f22,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f22.f64 = double(temp.f32);
	// lfs f1,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f2,f21,f2,f29
	ctx.f2.f64 = double(float(ctx.f21.f64 * ctx.f2.f64 + ctx.f29.f64));
	// fmadds f30,f21,f30,f28
	ctx.f30.f64 = double(float(ctx.f21.f64 * ctx.f30.f64 + ctx.f28.f64));
	// fmadds f29,f21,f23,f25
	ctx.f29.f64 = double(float(ctx.f21.f64 * ctx.f23.f64 + ctx.f25.f64));
	// fmuls f28,f2,f10
	ctx.f28.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmuls f25,f2,f3
	ctx.f25.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f2,f2,f6
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// fmadds f28,f30,f9,f28
	ctx.f28.f64 = double(float(ctx.f30.f64 * ctx.f9.f64 + ctx.f28.f64));
	// fmadds f25,f30,f5,f25
	ctx.f25.f64 = double(float(ctx.f30.f64 * ctx.f5.f64 + ctx.f25.f64));
	// fmadds f2,f30,f8,f2
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmadds f30,f29,f0,f28
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f28.f64));
	// fmadds f28,f29,f4,f25
	ctx.f28.f64 = double(float(ctx.f29.f64 * ctx.f4.f64 + ctx.f25.f64));
	// fmadds f2,f29,f7,f2
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fsubs f30,f20,f30
	ctx.f30.f64 = double(float(ctx.f20.f64 - ctx.f30.f64));
	// fsubs f29,f19,f28
	ctx.f29.f64 = double(float(ctx.f19.f64 - ctx.f28.f64));
	// fsubs f2,f15,f2
	ctx.f2.f64 = double(float(ctx.f15.f64 - ctx.f2.f64));
	// fmuls f28,f18,f30
	ctx.f28.f64 = double(float(ctx.f18.f64 * ctx.f30.f64));
	// fmuls f25,f17,f30
	ctx.f25.f64 = double(float(ctx.f17.f64 * ctx.f30.f64));
	// fmuls f30,f16,f30
	ctx.f30.f64 = double(float(ctx.f16.f64 * ctx.f30.f64));
	// fmadds f28,f14,f29,f28
	ctx.f28.f64 = double(float(ctx.f14.f64 * ctx.f29.f64 + ctx.f28.f64));
	// fmadds f27,f27,f29,f25
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f29.f64 + ctx.f25.f64));
	// fmadds f30,f26,f29,f30
	ctx.f30.f64 = double(float(ctx.f26.f64 * ctx.f29.f64 + ctx.f30.f64));
	// fmadds f29,f2,f24,f28
	ctx.f29.f64 = double(float(ctx.f2.f64 * ctx.f24.f64 + ctx.f28.f64));
	// fmadds f28,f22,f2,f27
	ctx.f28.f64 = double(float(ctx.f22.f64 * ctx.f2.f64 + ctx.f27.f64));
	// fmadds f2,f1,f2,f30
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f30.f64));
	// lfd f1,-192(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// fadds f11,f29,f11
	ctx.f11.f64 = double(float(ctx.f29.f64 + ctx.f11.f64));
	// fadds f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 + ctx.f13.f64));
	// fadds f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
loc_8301D094:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301d0f4
	if (ctx.cr6.eq) goto loc_8301D0F4;
	// lfs f30,164(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f30.f64 = double(temp.f32);
	// lfs f2,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// fadds f2,f2,f30
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// lfs f28,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f30.f64 = double(temp.f32);
	// fadds f30,f30,f28
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// lfs f26,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f26.f64 = double(temp.f32);
	// lfs f29,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f29,f29,f31
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// lfs f27,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f27.f64 = double(temp.f32);
	// fadds f28,f28,f26
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f26.f64));
	// lfs f25,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f27,f27,f31
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// fmuls f26,f25,f31
	ctx.f26.f64 = double(float(ctx.f25.f64 * ctx.f31.f64));
	// fmadds f2,f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f29.f64));
	// fmadds f30,f30,f0,f27
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f27.f64));
	// fmadds f29,f28,f0,f26
	ctx.f29.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f26.f64));
	// fadds f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fadds f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f13.f64));
	// fadds f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 + ctx.f12.f64));
loc_8301D0F4:
	// lis r11,32760
	ctx.r11.s64 = 2146959360;
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// ori r7,r11,41965
	ctx.r7.u64 = ctx.r11.u64 | 41965;
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lfs f2,13604(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13604);
	ctx.f2.f64 = double(temp.f32);
	// addis r11,r6,10912
	ctx.r11.s64 = ctx.r6.s64 + 715128832;
	// addi r11,r11,7473
	ctx.r11.s64 = ctx.r11.s64 + 7473;
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// lfs f30,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// beq cr6,0x8301d144
	if (ctx.cr6.eq) goto loc_8301D144;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// std r10,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.r10.u64);
	// lfd f29,-192(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f29,f29
	ctx.f29.f64 = double(ctx.f29.s64);
	// frsp f29,f29
	ctx.f29.f64 = double(float(ctx.f29.f64));
	// fmsubs f29,f29,f2,f1
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f2.f64 - ctx.f1.f64));
	// fmadds f11,f29,f30,f11
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f30.f64 + ctx.f11.f64));
loc_8301D144:
	// lfs f30,288(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// beq cr6,0x8301d170
	if (ctx.cr6.eq) goto loc_8301D170;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// std r10,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.r10.u64);
	// lfd f29,-192(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f29,f29
	ctx.f29.f64 = double(ctx.f29.s64);
	// frsp f29,f29
	ctx.f29.f64 = double(float(ctx.f29.f64));
	// fmsubs f29,f29,f2,f1
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f2.f64 - ctx.f1.f64));
	// fmadds f13,f29,f30,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f30.f64 + ctx.f13.f64));
loc_8301D170:
	// lfs f30,292(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// beq cr6,0x8301d198
	if (ctx.cr6.eq) goto loc_8301D198;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.r11.u64);
	// lfd f29,-192(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f29,f29
	ctx.f29.f64 = double(ctx.f29.s64);
	// frsp f29,f29
	ctx.f29.f64 = double(float(ctx.f29.f64));
	// fmsubs f2,f29,f2,f1
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f2.f64 - ctx.f1.f64));
	// fmadds f12,f2,f30,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f30.f64 + ctx.f12.f64));
loc_8301D198:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301d200
	if (ctx.cr6.eq) goto loc_8301D200;
	// lfs f2,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f30,f2,f31
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// lfs f2,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f28,f2,f0
	ctx.f28.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f29,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f29.f64 = double(temp.f32);
	// fabs f26,f31
	ctx.f26.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lfs f25,260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f24,264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f24.f64 = double(temp.f32);
	// lfd f2,-18344(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// fabs f2,f2
	ctx.f2.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lfs f27,256(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f31,f30,f31
	ctx.f31.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// fmadds f30,f25,f2,f28
	ctx.f30.f64 = double(float(ctx.f25.f64 * ctx.f2.f64 + ctx.f28.f64));
	// fmadds f2,f24,f2,f29
	ctx.f2.f64 = double(float(ctx.f24.f64 * ctx.f2.f64 + ctx.f29.f64));
	// fmadds f31,f26,f27,f31
	ctx.f31.f64 = double(float(ctx.f26.f64 * ctx.f27.f64 + ctx.f31.f64));
	// fadds f30,f30,f1
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f1.f64));
	// fadds f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fadds f1,f31,f1
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// fdivs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f30.f64));
	// fdivs f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f2.f64));
	// fdivs f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f1.f64));
loc_8301D200:
	// fmuls f7,f7,f11
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmadds f4,f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f5,f5,f12,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f3,f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f1,f13,f0,f4
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f4.f64));
	// stfs f1,4(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f2,f8,f11,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f5.f64));
	// stfs f2,0(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmadds f0,f13,f10,f3
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f3.f64));
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6afc
	ctx.lr = 0x8301D238;
	__restfpr_14(ctx, base);
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

__attribute__((alias("__imp__sub_8301D24C"))) PPC_WEAK_FUNC(sub_8301D24C);
PPC_FUNC_IMPL(__imp__sub_8301D24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301D250"))) PPC_WEAK_FUNC(sub_8301D250);
PPC_FUNC_IMPL(__imp__sub_8301D250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6ab0
	ctx.lr = 0x8301D268;
	__savefpr_14(ctx, base);
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lfs f13,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f28,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f27,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f27.f64 = double(temp.f32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f26,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f25,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f5,f0,f12
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f23,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f4,f28,f12
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f12.f64));
	// lfs f22,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f3,f27,f12
	ctx.f3.f64 = double(float(ctx.f27.f64 * ctx.f12.f64));
	// lfs f21,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f21.f64 = double(temp.f32);
	// lfs f30,6140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6140);
	ctx.f30.f64 = double(temp.f32);
	// stfs f0,-256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// lfs f0,6048(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,-252(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -252, temp.u32);
	// fmadds f2,f25,f9,f5
	ctx.f2.f64 = double(float(ctx.f25.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f1,f26,f9,f4
	ctx.f1.f64 = double(float(ctx.f26.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f12,f24,f9,f3
	ctx.f12.f64 = double(float(ctx.f24.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f10,f22,f6,f2
	ctx.f10.f64 = double(float(ctx.f22.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fmadds f13,f23,f6,f1
	ctx.f13.f64 = double(float(ctx.f23.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f12,f21,f6,f12
	ctx.f12.f64 = double(float(ctx.f21.f64 * ctx.f6.f64 + ctx.f12.f64));
	// bgt cr6,0x8301d554
	if (ctx.cr6.gt) goto loc_8301D554;
	// lis r12,-31998
	ctx.r12.s64 = -2097020928;
	// addi r12,r12,-11504
	ctx.r12.s64 = ctx.r12.s64 + -11504;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8301D320;
	case 1:
		goto loc_8301D360;
	case 2:
		goto loc_8301D3F4;
	case 3:
		goto loc_8301D468;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-11488(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11488);
	// lwz r24,-11424(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11424);
	// lwz r24,-11276(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11276);
	// lwz r24,-11160(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11160);
loc_8301D320:
	// lfs f9,200(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f9.f64 = double(temp.f32);
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// lfs f8,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f5,f9,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f11,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f0,-204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fsubs f4,f11,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,-200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// b 0x8301d57c
	goto loc_8301D57C;
loc_8301D360:
	// fmuls f11,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f6,f12,f12
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f0,-204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// stfs f0,-200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// lfs f4,-17040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17040);
	ctx.f4.f64 = double(temp.f32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// fadds f20,f6,f11
	ctx.f20.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// fadds f20,f20,f5
	ctx.f20.f64 = double(float(ctx.f20.f64 + ctx.f5.f64));
	// fcmpu cr6,f20,f4
	ctx.cr6.compare(ctx.f20.f64, ctx.f4.f64);
	// ble cr6,0x8301d3e0
	if (!ctx.cr6.gt) goto loc_8301D3E0;
	// fadds f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// fadds f9,f11,f5
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fsqrts f11,f9
	ctx.f11.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x8301d3d0
	if (ctx.cr6.eq) goto loc_8301D3D0;
	// fdivs f9,f30,f11
	ctx.f9.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
loc_8301D3D0:
	// fmr f29,f11
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f11.f64;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
loc_8301D3E0:
	// lfs f13,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// fsubs f4,f13,f29
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// b 0x8301d57c
	goto loc_8301D57C;
loc_8301D3F4:
	// fmuls f9,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f8,-17040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17040);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// ble cr6,0x8301d428
	if (!ctx.cr6.gt) goto loc_8301D428;
	// fsqrts f11,f9
	ctx.f11.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f9,f30,f11
	ctx.f9.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// b 0x8301d434
	goto loc_8301D434;
loc_8301D428:
	// fmr f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
loc_8301D434:
	// lfs f13,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// lfs f12,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f4,f13,f11
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fneg f11,f9
	ctx.f11.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f0,-204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// stfs f11,-200(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// fsubs f5,f12,f10
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// b 0x8301d57c
	goto loc_8301D57C;
loc_8301D468:
	// fmuls f11,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// lfs f7,-17040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17040);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// bge cr6,0x8301d49c
	if (!ctx.cr6.lt) goto loc_8301D49C;
	// lfs f9,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f9.f64 = double(temp.f32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// lfs f10,-228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	ctx.f10.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f12,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8301d50c
	goto loc_8301D50C;
loc_8301D49C:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// lfs f9,280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f5,f30,f11
	ctx.f5.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// fmuls f8,f5,f12
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f11,f5,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f9,f8
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f2,f9,f11
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f1,f4,f9
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fsubs f9,f12,f3
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fsubs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsubs f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fmuls f12,f9,f9
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f5,f13,f13,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f12,f10,f10,f5
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fcmpu cr6,f12,f7
	ctx.cr6.compare(ctx.f12.f64, ctx.f7.f64);
	// bge cr6,0x8301d4f8
	if (!ctx.cr6.lt) goto loc_8301D4F8;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x8301d50c
	goto loc_8301D50C;
loc_8301D4F8:
	// fsqrts f6,f12
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f7,f30,f6
	ctx.f7.f64 = double(float(ctx.f30.f64 / ctx.f6.f64));
	// fmuls f12,f13,f7
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
loc_8301D50C:
	// fneg f13,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfs f8,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f13,-204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fmuls f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmr f2,f11
	ctx.f2.f64 = ctx.f11.f64;
	// fsubs f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// fmuls f29,f10,f13
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmsubs f11,f10,f11,f3
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f3.f64));
	// stfs f11,-200(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fmsubs f1,f9,f13,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f1.f64));
	// fmsubs f3,f12,f0,f29
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f29.f64));
	// b 0x8301d57c
	goto loc_8301D57C;
loc_8301D554:
	// lfs f3,-176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	ctx.f2.f64 = double(temp.f32);
	// lfs f9,-184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f31.f64 = double(temp.f32);
	// lfs f8,-196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f4.f64 = double(temp.f32);
loc_8301D57C:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lfs f13,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301d684
	if (ctx.cr6.eq) goto loc_8301D684;
	// lfs f10,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f24,f10
	ctx.f30.f64 = double(float(ctx.f24.f64 * ctx.f10.f64));
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f26,f26,f10
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f10.f64));
	// lfs f24,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f10,f25,f10
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f10.f64));
	// lfs f25,-256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f25.f64 = double(temp.f32);
	// lfs f20,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,-200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f17.f64 = double(temp.f32);
	// lfs f16,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f16.f64 = double(temp.f32);
	// lfs f15,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f15.f64 = double(temp.f32);
	// lfs f14,228(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f14.f64 = double(temp.f32);
	// fmadds f21,f21,f29,f30
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f29.f64 + ctx.f30.f64));
	// lfs f30,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f26,f23,f29,f26
	ctx.f26.f64 = double(float(ctx.f23.f64 * ctx.f29.f64 + ctx.f26.f64));
	// stfs f30,-256(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// fmadds f10,f22,f29,f10
	ctx.f10.f64 = double(float(ctx.f22.f64 * ctx.f29.f64 + ctx.f10.f64));
	// lfs f23,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f23.f64 = double(temp.f32);
	// lfs f29,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f29.f64 = double(temp.f32);
	// lfs f22,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f22.f64 = double(temp.f32);
	// stfd f0,-248(r1)
	PPC_STORE_U64(ctx.r1.u32 + -248, ctx.f0.u64);
	// stfd f6,-240(r1)
	PPC_STORE_U64(ctx.r1.u32 + -240, ctx.f6.u64);
	// stfd f5,-232(r1)
	PPC_STORE_U64(ctx.r1.u32 + -232, ctx.f5.u64);
	// lfs f6,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f27,f27,f24,f21
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f24.f64 + ctx.f21.f64));
	// lfs f5,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f28,f28,f24,f26
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f24.f64 + ctx.f26.f64));
	// lfs f30,-252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f10,f25,f24,f10
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f24.f64 + ctx.f10.f64));
	// lfs f24,-256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f26,f27,f2
	ctx.f26.f64 = double(float(ctx.f27.f64 * ctx.f2.f64));
	// fmuls f25,f27,f3
	ctx.f25.f64 = double(float(ctx.f27.f64 * ctx.f3.f64));
	// fmuls f27,f27,f9
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f9.f64));
	// fmadds f26,f20,f28,f26
	ctx.f26.f64 = double(float(ctx.f20.f64 * ctx.f28.f64 + ctx.f26.f64));
	// fmadds f25,f19,f28,f25
	ctx.f25.f64 = double(float(ctx.f19.f64 * ctx.f28.f64 + ctx.f25.f64));
	// fmadds f28,f28,f7,f27
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f7.f64 + ctx.f27.f64));
	// fmadds f27,f10,f31,f26
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f26.f64));
	// fmadds f26,f10,f1,f25
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f25.f64));
	// fmadds f10,f10,f8,f28
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f28.f64));
	// fsubs f28,f18,f27
	ctx.f28.f64 = double(float(ctx.f18.f64 - ctx.f27.f64));
	// fsubs f27,f17,f26
	ctx.f27.f64 = double(float(ctx.f17.f64 - ctx.f26.f64));
	// fsubs f10,f16,f10
	ctx.f10.f64 = double(float(ctx.f16.f64 - ctx.f10.f64));
	// fmuls f26,f15,f28
	ctx.f26.f64 = double(float(ctx.f15.f64 * ctx.f28.f64));
	// fmuls f25,f14,f27
	ctx.f25.f64 = double(float(ctx.f14.f64 * ctx.f27.f64));
	// fmuls f24,f24,f27
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f27.f64));
	// fmadds f27,f23,f27,f26
	ctx.f27.f64 = double(float(ctx.f23.f64 * ctx.f27.f64 + ctx.f26.f64));
	// fmadds f29,f29,f10,f25
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f10.f64 + ctx.f25.f64));
	// fmadds f26,f22,f10,f24
	ctx.f26.f64 = double(float(ctx.f22.f64 * ctx.f10.f64 + ctx.f24.f64));
	// fmadds f10,f10,f0,f27
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f27.f64));
	// lfd f0,-248(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// fmadds f29,f6,f28,f29
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f28.f64 + ctx.f29.f64));
	// lfd f6,-240(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// fmadds f28,f5,f28,f26
	ctx.f28.f64 = double(float(ctx.f5.f64 * ctx.f28.f64 + ctx.f26.f64));
	// lfd f5,-232(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 + ctx.f12.f64));
	// fadds f11,f28,f11
	ctx.f11.f64 = double(float(ctx.f28.f64 + ctx.f11.f64));
loc_8301D684:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301d6e4
	if (ctx.cr6.eq) goto loc_8301D6E4;
	// lfs f10,164(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// lfs f29,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// lfs f28,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f29,f29,f5
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f5.f64));
	// fmuls f28,f28,f5
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f5.f64));
	// lfs f27,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f10,f27,f6,f10
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f29,f26,f6,f29
	ctx.f29.f64 = double(float(ctx.f26.f64 * ctx.f6.f64 + ctx.f29.f64));
	// fmadds f28,f25,f6,f28
	ctx.f28.f64 = double(float(ctx.f25.f64 * ctx.f6.f64 + ctx.f28.f64));
	// fmadds f10,f24,f4,f10
	ctx.f10.f64 = double(float(ctx.f24.f64 * ctx.f4.f64 + ctx.f10.f64));
	// fmadds f29,f23,f4,f29
	ctx.f29.f64 = double(float(ctx.f23.f64 * ctx.f4.f64 + ctx.f29.f64));
	// fmadds f28,f22,f4,f28
	ctx.f28.f64 = double(float(ctx.f22.f64 * ctx.f4.f64 + ctx.f28.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 + ctx.f12.f64));
	// fadds f11,f28,f11
	ctx.f11.f64 = double(float(ctx.f28.f64 + ctx.f11.f64));
loc_8301D6E4:
	// lis r11,32760
	ctx.r11.s64 = 2146959360;
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// ori r7,r11,41965
	ctx.r7.u64 = ctx.r11.u64 | 41965;
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lfs f10,13604(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13604);
	ctx.f10.f64 = double(temp.f32);
	// addis r11,r6,10912
	ctx.r11.s64 = ctx.r6.s64 + 715128832;
	// addi r11,r11,7473
	ctx.r11.s64 = ctx.r11.s64 + 7473;
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// lfs f29,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// beq cr6,0x8301d734
	if (ctx.cr6.eq) goto loc_8301D734;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// std r10,-232(r1)
	PPC_STORE_U64(ctx.r1.u32 + -232, ctx.r10.u64);
	// lfd f28,-232(r1)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// fcfid f28,f28
	ctx.f28.f64 = double(ctx.f28.s64);
	// frsp f28,f28
	ctx.f28.f64 = double(float(ctx.f28.f64));
	// fmsubs f28,f28,f10,f30
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f10.f64 - ctx.f30.f64));
	// fmadds f13,f28,f29,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 + ctx.f13.f64));
loc_8301D734:
	// lfs f29,288(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// beq cr6,0x8301d760
	if (ctx.cr6.eq) goto loc_8301D760;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// std r10,-232(r1)
	PPC_STORE_U64(ctx.r1.u32 + -232, ctx.r10.u64);
	// lfd f28,-232(r1)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// fcfid f28,f28
	ctx.f28.f64 = double(ctx.f28.s64);
	// frsp f28,f28
	ctx.f28.f64 = double(float(ctx.f28.f64));
	// fmsubs f28,f28,f10,f30
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f10.f64 - ctx.f30.f64));
	// fmadds f12,f28,f29,f12
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 + ctx.f12.f64));
loc_8301D760:
	// lfs f29,292(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// beq cr6,0x8301d788
	if (ctx.cr6.eq) goto loc_8301D788;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,-232(r1)
	PPC_STORE_U64(ctx.r1.u32 + -232, ctx.r11.u64);
	// lfd f0,-232(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmsubs f10,f0,f10,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 - ctx.f30.f64));
	// fmadds f11,f10,f29,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f11.f64));
loc_8301D788:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301d7f4
	if (ctx.cr6.eq) goto loc_8301D7F4;
	// lfs f0,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fabs f10,f4
	ctx.f10.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// lfs f29,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f28,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f29,f29,f5
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f5.f64));
	// fmuls f28,f28,f6
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f6.f64));
	// lfs f27,256(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f27.f64 = double(temp.f32);
	// fabs f26,f5
	ctx.f26.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// lfs f25,260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f25.f64 = double(temp.f32);
	// fabs f24,f6
	ctx.f24.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// lfs f23,264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f4,f0,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f0,f29,f5
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f5.f64));
	// fmuls f6,f28,f6
	ctx.f6.f64 = double(float(ctx.f28.f64 * ctx.f6.f64));
	// fmadds f5,f10,f27,f4
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f27.f64 + ctx.f4.f64));
	// fmadds f4,f26,f25,f0
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f25.f64 + ctx.f0.f64));
	// fmadds f0,f24,f23,f6
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f23.f64 + ctx.f6.f64));
	// fadds f10,f5,f30
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f30.f64));
	// fadds f6,f4,f30
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f30.f64));
	// fadds f5,f0,f30
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fdivs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fdivs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f6.f64));
	// fdivs f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f5.f64));
loc_8301D7F4:
	// lfs f0,-204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f31,f12
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fmuls f6,f0,f12
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f5,-200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f2,f12
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmadds f2,f1,f11,f10
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f1,f5,f11,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f0,f3,f11,f4
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmadds f12,f8,f13,f2
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f2.f64));
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f11,f7,f13,f1
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f1.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmadds f10,f9,f13,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,8(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6afc
	ctx.lr = 0x8301D834;
	__restfpr_14(ctx, base);
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

__attribute__((alias("__imp__sub_8301D848"))) PPC_WEAK_FUNC(sub_8301D848);
PPC_FUNC_IMPL(__imp__sub_8301D848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8301D850;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,2680
	ctx.r9.s64 = ctx.r11.s64 + 2680;
	// addi r8,r10,2676
	ctx.r8.s64 = ctx.r10.s64 + 2676;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r31,r28,304
	ctx.r31.s64 = ctx.r28.s64 + 304;
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r7,308(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 308);
	// addi r27,r28,4
	ctx.r27.s64 = ctx.r28.s64 + 4;
	// lwz r6,304(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 304);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// srawi. r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8301d8c8
	if (ctx.cr0.eq) goto loc_8301D8C8;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8301D898:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301d8bc
	if (ctx.cr6.eq) goto loc_8301D8BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301D8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8301D8BC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8301d898
	if (!ctx.cr0.eq) goto loc_8301D898;
loc_8301D8C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r28,356
	ctx.r3.s64 = ctx.r28.s64 + 356;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82d632e0
	ctx.lr = 0x8301D8D8;
	sub_82D632E0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8301d8fc
	if (ctx.cr6.eq) goto loc_8301D8FC;
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
	ctx.lr = 0x8301D8FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8301D8FC:
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// bl 0x82ffca80
	ctx.lr = 0x8301D910;
	sub_82FFCA80(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301D918"))) PPC_WEAK_FUNC(sub_8301D918);
PPC_FUNC_IMPL(__imp__sub_8301D918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x8301D920;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82cb6ac0
	ctx.lr = 0x8301D928;
	__savefpr_18(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8301dd50
	if (ctx.cr6.eq) goto loc_8301DD50;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301dd50
	if (ctx.cr6.eq) goto loc_8301DD50;
	// lbz r11,373(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 373);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301d964
	if (!ctx.cr6.eq) goto loc_8301D964;
	// bl 0x8301c4c0
	ctx.lr = 0x8301D964;
	sub_8301C4C0(ctx, base);
loc_8301D964:
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301dac0
	if (ctx.cr6.eq) goto loc_8301DAC0;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r26,24
	ctx.r31.s64 = ctx.r26.s64 + 24;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301D98C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f10,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,68(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,64(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f12,36(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f12,f7
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f30,44(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f31,f11,f7
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f7,f30,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f7.f64));
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f29,f12,f4
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lfs f28,60(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f27,f11,f4
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// lfs f3,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f25,f30,f4
	ctx.f25.f64 = double(float(ctx.f30.f64 * ctx.f4.f64));
	// fmadds f8,f4,f13,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f8.f64));
	// lfs f4,24(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// lfs f22,32(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f5,f28,f1,f5
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f1.f64 + ctx.f5.f64));
	// lfs f26,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f13,f3,f13,f6
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f6.f64));
	// lfs f6,28(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// lfs f23,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f3,f30,f3
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f3.f64));
	// lfs f24,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f2,f4,f1,f2
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f2.f64));
	// lfs f21,48(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f31,f6,f1,f31
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f31.f64));
	// lfs f20,56(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f1,f22,f1,f7
	ctx.f1.f64 = double(float(ctx.f22.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f29,f4,f26,f29
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f26.f64 + ctx.f29.f64));
	// lfs f30,52(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f8,f26,f28,f8
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f28.f64 + ctx.f8.f64));
	// lfs f18,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f12,f4,f24,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f24.f64 + ctx.f12.f64));
	// lfs f19,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f5,f23,f0,f5
	ctx.f5.f64 = double(float(ctx.f23.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f27,f6,f26,f27
	ctx.f27.f64 = double(float(ctx.f6.f64 * ctx.f26.f64 + ctx.f27.f64));
	// fmadds f11,f6,f24,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f24.f64 + ctx.f11.f64));
	// fmadds f13,f24,f28,f13
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f28.f64 + ctx.f13.f64));
	// fmadds f0,f22,f26,f25
	ctx.f0.f64 = double(float(ctx.f22.f64 * ctx.f26.f64 + ctx.f25.f64));
	// fmadds f6,f22,f24,f3
	ctx.f6.f64 = double(float(ctx.f22.f64 * ctx.f24.f64 + ctx.f3.f64));
	// fmadds f4,f21,f23,f2
	ctx.f4.f64 = double(float(ctx.f21.f64 * ctx.f23.f64 + ctx.f2.f64));
	// stfs f4,160(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f2,f20,f23,f1
	ctx.f2.f64 = double(float(ctx.f20.f64 * ctx.f23.f64 + ctx.f1.f64));
	// stfs f2,168(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f1,f7,f8
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f1,200(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmadds f3,f30,f23,f31
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f23.f64 + ctx.f31.f64));
	// stfs f3,164(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f8,f18,f5
	ctx.f8.f64 = double(float(ctx.f18.f64 + ctx.f5.f64));
	// stfs f8,196(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmadds f7,f21,f10,f29
	ctx.f7.f64 = double(float(ctx.f21.f64 * ctx.f10.f64 + ctx.f29.f64));
	// stfs f7,172(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmadds f5,f30,f10,f27
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f27.f64));
	// stfs f5,176(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f13,f19,f13
	ctx.f13.f64 = double(float(ctx.f19.f64 + ctx.f13.f64));
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmadds f4,f20,f10,f0
	ctx.f4.f64 = double(float(ctx.f20.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfs f4,180(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmadds f3,f21,f9,f12
	ctx.f3.f64 = double(float(ctx.f21.f64 * ctx.f9.f64 + ctx.f12.f64));
	// stfs f3,184(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmadds f2,f30,f9,f11
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f1,f20,f9,f6
	ctx.f1.f64 = double(float(ctx.f20.f64 * ctx.f9.f64 + ctx.f6.f64));
	// stfs f2,188(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f1,192(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// b 0x8301dac4
	goto loc_8301DAC4;
loc_8301DAC0:
	// addi r9,r26,24
	ctx.r9.s64 = ctx.r26.s64 + 24;
loc_8301DAC4:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8301DAD4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8301dad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301DAD4;
	// lfs f0,268(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,256(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,272(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// li r19,1
	ctx.r19.s64 = 1;
	// lfs f10,276(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,260(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 260);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,264(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 264);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// lfs f7,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,44(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmadds f4,f12,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f6,152(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f5,156(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f3,f11,f11,f4
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmadds f2,f10,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fmadds f1,f9,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f0,f8,f8,f1
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8301db48
	if (!ctx.cr6.eq) goto loc_8301DB48;
	// li r19,0
	ctx.r19.s64 = 0;
loc_8301DB48:
	// lwz r11,208(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301db5c
	if (ctx.cr6.eq) goto loc_8301DB5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301dbf4
	goto loc_8301DBF4;
loc_8301DB5C:
	// lwz r11,212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301db70
	if (ctx.cr6.eq) goto loc_8301DB70;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301dbf4
	goto loc_8301DBF4;
loc_8301DB70:
	// lwz r11,216(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301db84
	if (ctx.cr6.eq) goto loc_8301DB84;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301dbf4
	goto loc_8301DBF4;
loc_8301DB84:
	// lwz r11,220(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301db98
	if (ctx.cr6.eq) goto loc_8301DB98;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301dbf4
	goto loc_8301DBF4;
loc_8301DB98:
	// lwz r11,224(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301dbac
	if (ctx.cr6.eq) goto loc_8301DBAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301dbf4
	goto loc_8301DBF4;
loc_8301DBAC:
	// lwz r11,228(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301dbc0
	if (ctx.cr6.eq) goto loc_8301DBC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301dbf4
	goto loc_8301DBF4;
loc_8301DBC0:
	// lwz r11,232(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301dbd4
	if (ctx.cr6.eq) goto loc_8301DBD4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301dbf4
	goto loc_8301DBF4;
loc_8301DBD4:
	// lwz r11,236(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301dbe8
	if (ctx.cr6.eq) goto loc_8301DBE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301dbf4
	goto loc_8301DBF4;
loc_8301DBE8:
	// lwz r11,240(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8301DBF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,160(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r20,r9,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x8301dc14
	if (ctx.cr6.eq) goto loc_8301DC14;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301dcac
	goto loc_8301DCAC;
loc_8301DC14:
	// lwz r11,164(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301dc28
	if (ctx.cr6.eq) goto loc_8301DC28;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301dcac
	goto loc_8301DCAC;
loc_8301DC28:
	// lwz r11,168(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301dc3c
	if (ctx.cr6.eq) goto loc_8301DC3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301dcac
	goto loc_8301DCAC;
loc_8301DC3C:
	// lwz r11,172(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301dc50
	if (ctx.cr6.eq) goto loc_8301DC50;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301dcac
	goto loc_8301DCAC;
loc_8301DC50:
	// lwz r11,176(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301dc64
	if (ctx.cr6.eq) goto loc_8301DC64;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301dcac
	goto loc_8301DCAC;
loc_8301DC64:
	// lwz r11,180(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301dc78
	if (ctx.cr6.eq) goto loc_8301DC78;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301dcac
	goto loc_8301DCAC;
loc_8301DC78:
	// lwz r11,184(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301dc8c
	if (ctx.cr6.eq) goto loc_8301DC8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301dcac
	goto loc_8301DCAC;
loc_8301DC8C:
	// lwz r11,188(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301dca0
	if (ctx.cr6.eq) goto loc_8301DCA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301dcac
	goto loc_8301DCAC;
loc_8301DCA0:
	// lwz r11,192(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 192);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8301DCAC:
	// lwz r10,92(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r23,r9,27,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// ldx r7,r8,r26
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r26.u32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// beq cr6,0x8301dd50
	if (ctx.cr6.eq) goto loc_8301DD50;
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r21,r27,r18
	ctx.r21.s64 = ctx.r18.s64 - ctx.r27.s64;
loc_8301DCE4:
	// lwz r10,304(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 304);
	// lwz r11,308(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 308);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r28,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8301dd34
	if (ctx.cr0.eq) goto loc_8301DD34;
loc_8301DCFC:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301DD20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301dd60
	if (!ctx.cr6.eq) goto loc_8301DD60;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8301dcfc
	if (!ctx.cr6.eq) goto loc_8301DCFC;
loc_8301DD34:
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
loc_8301DD40:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x8301dce4
	if (!ctx.cr0.eq) goto loc_8301DCE4;
loc_8301DD50:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82cb6b0c
	ctx.lr = 0x8301DD5C;
	__restfpr_18(ctx, base);
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_8301DD60:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8301dd34
	if (ctx.cr6.eq) goto loc_8301DD34;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8301dd84
	if (ctx.cr6.eq) goto loc_8301DD84;
	// add r7,r21,r27
	ctx.r7.u64 = ctx.r21.u64 + ctx.r27.u64;
	// b 0x8301dd94
	goto loc_8301DD94;
loc_8301DD84:
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8301DD94:
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// add r3,r25,r26
	ctx.r3.u64 = ctx.r25.u64 + ctx.r26.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x8301DDB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f6,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f11,f13,f6,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f10,f13,f5,f8
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f8.f64));
	// fmadds f9,f0,f4,f7
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f7.f64));
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f8,f3,f2,f11
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f11.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f7,f3,f1,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f10.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f6,f3,f12,f9
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f6,-4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// b 0x8301dd40
	goto loc_8301DD40;
}

__attribute__((alias("__imp__sub_8301DE1C"))) PPC_WEAK_FUNC(sub_8301DE1C);
PPC_FUNC_IMPL(__imp__sub_8301DE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301DE20"))) PPC_WEAK_FUNC(sub_8301DE20);
PPC_FUNC_IMPL(__imp__sub_8301DE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8301DE28;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301de50
	if (!ctx.cr6.eq) goto loc_8301DE50;
	// lbz r11,372(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301de78
	if (!ctx.cr6.eq) goto loc_8301DE78;
loc_8301DE50:
	// lwz r11,308(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 308);
	// addi r27,r26,304
	ctx.r27.s64 = ctx.r26.s64 + 304;
	// lwz r10,304(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 304);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r29,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8301de8c
	if (!ctx.cr0.eq) goto loc_8301DE8C;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// bl 0x83018210
	ctx.lr = 0x8301DE78;
	sub_83018210(ctx, base);
loc_8301DE78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8301DE8C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r31,r26,332
	ctx.r31.s64 = ctx.r26.s64 + 332;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f31,-18264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-18268(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18268);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,332(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 332, temp.u32);
	// stfs f31,336(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 336, temp.u32);
	// stfs f31,340(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 340, temp.u32);
	// stfs f30,344(r26)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r26.u32 + 344, temp.u32);
	// stfs f30,348(r26)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r26.u32 + 348, temp.u32);
	// stfs f30,352(r26)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r26.u32 + 352, temp.u32);
	// beq cr6,0x8301df80
	if (ctx.cr6.eq) goto loc_8301DF80;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8301DEC8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8301DEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f8,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fsubs f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsel f2,f6,f0,f8
	ctx.f2.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// stfs f2,0(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsel f1,f4,f13,f7
	ctx.f1.f64 = ctx.f4.f64 >= 0.0 ? ctx.f13.f64 : ctx.f7.f64;
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsel f0,f3,f12,f5
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f12.f64 : ctx.f5.f64;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsubs f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsel f2,f5,f13,f9
	ctx.f2.f64 = ctx.f5.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// stfs f2,8(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fsel f4,f7,f8,f10
	ctx.f4.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f10.f64;
	// stfs f4,4(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fsel f3,f6,f12,f11
	ctx.f3.f64 = ctx.f6.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// stfs f3,0(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bne 0x8301dec8
	if (!ctx.cr0.eq) goto loc_8301DEC8;
loc_8301DF80:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r10,372(r26)
	PPC_STORE_U8(ctx.r26.u32 + 372, ctx.r10.u8);
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// bl 0x83018210
	ctx.lr = 0x8301DF98;
	sub_83018210(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301DFAC"))) PPC_WEAK_FUNC(sub_8301DFAC);
PPC_FUNC_IMPL(__imp__sub_8301DFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301DFB0"))) PPC_WEAK_FUNC(sub_8301DFB0);
PPC_FUNC_IMPL(__imp__sub_8301DFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8301DFB8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,22552
	ctx.r9.s64 = ctx.r11.s64 + 22552;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lfs f13,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,364(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8301e0f4
	if (ctx.cr6.eq) goto loc_8301E0F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r28,332
	ctx.r4.s64 = ctx.r28.s64 + 332;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c0028
	ctx.lr = 0x8301DFFC;
	sub_831C0028(ctx, base);
	// lwz r11,308(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 308);
	// lwz r10,304(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 304);
	// addi r29,r28,304
	ctx.r29.s64 = ctx.r28.s64 + 304;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r31,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8301e040
	if (ctx.cr0.eq) goto loc_8301E040;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8301E018:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8301E034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8301e018
	if (!ctx.cr0.eq) goto loc_8301E018;
loc_8301E040:
	// lwz r31,360(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 360);
	// lwz r30,364(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301e0f4
	if (ctx.cr6.eq) goto loc_8301E0F4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r29,-1
	ctx.r29.s64 = -65536;
	// lfs f30,-18268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18268);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-18264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18264);
	ctx.f31.f64 = double(temp.f32);
loc_8301E064:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8301e0ec
	if (!ctx.cr6.eq) goto loc_8301E0EC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8301e0a0
	if (ctx.cr6.eq) goto loc_8301E0A0;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x8301e0a0
	if (ctx.cr6.eq) goto loc_8301E0A0;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8301e0ec
	if (ctx.cr6.eq) goto loc_8301E0EC;
	// b 0x8301e0dc
	goto loc_8301E0DC;
loc_8301E0A0:
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301e0ec
	if (ctx.cr6.eq) goto loc_8301E0EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301E0D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8301E0DC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c0028
	ctx.lr = 0x8301E0EC;
	sub_831C0028(ctx, base);
loc_8301E0EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8301e064
	if (!ctx.cr6.eq) goto loc_8301E064;
loc_8301E0F4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E104"))) PPC_WEAK_FUNC(sub_8301E104);
PPC_FUNC_IMPL(__imp__sub_8301E104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301E108"))) PPC_WEAK_FUNC(sub_8301E108);
PPC_FUNC_IMPL(__imp__sub_8301E108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8301E110;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,374(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 374);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301e130
	if (ctx.cr6.eq) goto loc_8301E130;
loc_8301E124:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8301E130:
	// lwz r10,304(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// lfs f13,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r3,304
	ctx.r31.s64 = ctx.r3.s64 + 304;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r27,r26,12
	ctx.r27.s64 = ctx.r26.s64 + 12;
	// srawi. r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8301e124
	if (ctx.cr0.eq) goto loc_8301E124;
loc_8301E168:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301E18C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301e1ac
	if (!ctx.cr6.eq) goto loc_8301E1AC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8301e168
	if (!ctx.cr6.eq) goto loc_8301E168;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8301E1AC:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8301e124
	if (ctx.cr6.eq) goto loc_8301E124;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8301e124
	if (ctx.cr0.eq) goto loc_8301E124;
loc_8301E1E0:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301E204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301e224
	if (!ctx.cr6.eq) goto loc_8301E224;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8301e1e0
	if (!ctx.cr6.eq) goto loc_8301E1E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8301E224:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8301e124
	if (ctx.cr6.eq) goto loc_8301E124;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8301e124
	if (ctx.cr0.eq) goto loc_8301E124;
loc_8301E258:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301E27C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301e29c
	if (!ctx.cr6.eq) goto loc_8301E29C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8301e258
	if (!ctx.cr6.eq) goto loc_8301E258;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8301E29C:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8301e124
	if (ctx.cr6.eq) goto loc_8301E124;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8301e124
	if (ctx.cr0.eq) goto loc_8301E124;
loc_8301E2D0:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301E2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301e314
	if (!ctx.cr6.eq) goto loc_8301E314;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8301e2d0
	if (!ctx.cr6.eq) goto loc_8301E2D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8301E314:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8301e124
	if (ctx.cr6.eq) goto loc_8301E124;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// srawi. r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8301e124
	if (ctx.cr0.eq) goto loc_8301E124;
loc_8301E350:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301E374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301e394
	if (!ctx.cr6.eq) goto loc_8301E394;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8301e350
	if (!ctx.cr6.eq) goto loc_8301E350;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8301E394:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8301e124
	if (ctx.cr6.eq) goto loc_8301E124;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8301e124
	if (ctx.cr0.eq) goto loc_8301E124;
loc_8301E3C8:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301E3EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301e40c
	if (!ctx.cr6.eq) goto loc_8301E40C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8301e3c8
	if (!ctx.cr6.eq) goto loc_8301E3C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8301E40C:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8301e124
	if (ctx.cr6.eq) goto loc_8301E124;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8301e124
	if (ctx.cr0.eq) goto loc_8301E124;
loc_8301E440:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301E464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301e484
	if (!ctx.cr6.eq) goto loc_8301E484;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8301e440
	if (!ctx.cr6.eq) goto loc_8301E440;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8301E484:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8301e124
	if (ctx.cr6.eq) goto loc_8301E124;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r31,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8301e124
	if (ctx.cr0.eq) goto loc_8301E124;
loc_8301E4B8:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301E4DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301e4fc
	if (!ctx.cr6.eq) goto loc_8301E4FC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8301e4b8
	if (!ctx.cr6.eq) goto loc_8301E4B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8301E4FC:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8301e124
	if (ctx.cr6.eq) goto loc_8301E124;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E51C"))) PPC_WEAK_FUNC(sub_8301E51C);
PPC_FUNC_IMPL(__imp__sub_8301E51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301E520"))) PPC_WEAK_FUNC(sub_8301E520);
PPC_FUNC_IMPL(__imp__sub_8301E520) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,2488
	ctx.r10.s64 = ctx.r11.s64 + 2488;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82ffca60
	ctx.lr = 0x8301E558;
	sub_82FFCA60(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r9,2680
	ctx.r5.s64 = ctx.r9.s64 + 2680;
	// addi r4,r8,2676
	ctx.r4.s64 = ctx.r8.s64 + 2676;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lfs f0,6048(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// li r9,42
	ctx.r9.s64 = 42;
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lfs f13,6140(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r11,r31,332
	ctx.r11.s64 = ctx.r31.s64 + 332;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f13,88(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// lfs f31,-18264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18264);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// lfs f30,-18268(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18268);
	ctx.f30.f64 = double(temp.f32);
	// stw r7,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r7.u32);
	// stw r6,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r6.u32);
	// stfs f31,332(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// stfs f31,336(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// stfs f31,340(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stfs f30,344(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stfs f30,348(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// stfs f30,352(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// bl 0x82d62ee0
	ctx.lr = 0x8301E630;
	sub_82D62EE0(ctx, base);
	// lis r5,-31998
	ctx.r5.s64 = -2097020928;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// lis r4,-31998
	ctx.r4.s64 = -2097020928;
	// stb r30,373(r31)
	PPC_STORE_U8(ctx.r31.u32 + 373, ctx.r30.u8);
	// addi r3,r5,-14064
	ctx.r3.s64 = ctx.r5.s64 + -14064;
	// stb r30,374(r31)
	PPC_STORE_U8(ctx.r31.u32 + 374, ctx.r30.u8);
	// stfs f31,332(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// stfs f31,336(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// lis r11,-31998
	ctx.r11.s64 = -2097020928;
	// stfs f31,340(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// addi r10,r4,-13504
	ctx.r10.s64 = ctx.r4.s64 + -13504;
	// stfs f30,344(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stfs f30,348(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stfs f30,352(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// sth r30,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r30.u16);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// lis r9,-31998
	ctx.r9.s64 = -2097020928;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// addi r7,r9,-14808
	ctx.r7.s64 = ctx.r9.s64 + -14808;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r8,r11,-12720
	ctx.r8.s64 = ctx.r11.s64 + -12720;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// std r4,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r4.u64);
	// std r6,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r6.u64);
	// std r3,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r5,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r5.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E6EC"))) PPC_WEAK_FUNC(sub_8301E6EC);
PPC_FUNC_IMPL(__imp__sub_8301E6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301E6F0"))) PPC_WEAK_FUNC(sub_8301E6F0);
PPC_FUNC_IMPL(__imp__sub_8301E6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8301E6F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301E70C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301e7f4
	if (ctx.cr6.eq) goto loc_8301E7F4;
	// lwz r8,304(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r6,308(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r7,r31,304
	ctx.r7.s64 = ctx.r31.s64 + 304;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// subf r10,r8,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r8.s64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301e764
	if (ctx.cr6.eq) goto loc_8301E764;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8301E748:
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8301e7b0
	if (ctx.cr6.eq) goto loc_8301E7B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8301e748
	if (ctx.cr6.lt) goto loc_8301E748;
loc_8301E764:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8301E768:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301e7dc
	if (ctx.cr6.eq) goto loc_8301E7DC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301e790
	if (ctx.cr6.eq) goto loc_8301E790;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301E790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8301E790:
	// stb r28,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r28.u8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stb r28,373(r31)
	PPC_STORE_U8(ctx.r31.u32 + 373, ctx.r28.u8);
	// beq cr6,0x8301e814
	if (ctx.cr6.eq) goto loc_8301E814;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8301E7A8;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8301E7B0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8301e7c8
	if (ctx.cr6.eq) goto loc_8301E7C8;
	// lwz r10,-4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_8301E7C8:
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// b 0x8301e768
	goto loc_8301E768;
loc_8301E7DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8301e814
	if (ctx.cr6.eq) goto loc_8301E814;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8301E7EC;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8301E7F4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,1928
	ctx.r4.s64 = ctx.r11.s64 + 1928;
	// li r5,421
	ctx.r5.s64 = 421;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301E814;
	sub_82D17988(ctx, base);
loc_8301E814:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E81C"))) PPC_WEAK_FUNC(sub_8301E81C);
PPC_FUNC_IMPL(__imp__sub_8301E81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301E820"))) PPC_WEAK_FUNC(sub_8301E820);
PPC_FUNC_IMPL(__imp__sub_8301E820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8301E828;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ac0
	ctx.lr = 0x8301E830;
	__savefpr_18(ctx, base);
	// addi r31,r1,-720
	ctx.r31.s64 = ctx.r1.s64 + -720;
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r28,360(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 360);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8301f4ec
	if (ctx.cr6.eq) goto loc_8301F4EC;
	// lwz r11,72(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301e9ac
	if (ctx.cr6.eq) goto loc_8301E9AC;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r20,24
	ctx.r30.s64 = ctx.r20.s64 + 24;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301E878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f10,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// lfs f0,64(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f12,36(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f11,40(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f12,f7
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f4,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// lfs f13,60(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f12,f10
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f31,44(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 44);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f27,f11,f10
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f7,f31,f7
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f7.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f23,24(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f22,28(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f6,f3,f13,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f6.f64));
	// lfs f29,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f8,f4,f13,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f8.f64));
	// lfs f26,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f5,f1,f13,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f13,32(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f31,f10
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f10.f64));
	// lfs f24,68(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 68);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f9,f31,f9
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f9.f64));
	// lfs f25,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f2,f23,f1,f2
	ctx.f2.f64 = double(float(ctx.f23.f64 * ctx.f1.f64 + ctx.f2.f64));
	// lfs f21,48(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 48);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f0,f22,f1,f0
	ctx.f0.f64 = double(float(ctx.f22.f64 * ctx.f1.f64 + ctx.f0.f64));
	// lfs f31,52(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f7,f13,f1,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f19,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f30,f23,f4,f30
	ctx.f30.f64 = double(float(ctx.f23.f64 * ctx.f4.f64 + ctx.f30.f64));
	// lfs f1,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f27,f22,f4,f27
	ctx.f27.f64 = double(float(ctx.f22.f64 * ctx.f4.f64 + ctx.f27.f64));
	// lfs f20,56(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 56);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f6,f26,f24,f6
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f24.f64 + ctx.f6.f64));
	// lfs f18,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f8,f29,f24,f8
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f24.f64 + ctx.f8.f64));
	// fmadds f5,f25,f24,f5
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f24.f64 + ctx.f5.f64));
	// fmadds f4,f13,f4,f10
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f10.f64));
	// fmadds f12,f23,f3,f12
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f3.f64 + ctx.f12.f64));
	// fmadds f10,f13,f3,f9
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fmadds f11,f22,f3,f11
	ctx.f11.f64 = double(float(ctx.f22.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f9,f21,f25,f2
	ctx.f9.f64 = double(float(ctx.f21.f64 * ctx.f25.f64 + ctx.f2.f64));
	// stfs f9,256(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// fmadds f3,f31,f25,f0
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f25.f64 + ctx.f0.f64));
	// stfs f3,260(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// fmadds f2,f20,f25,f7
	ctx.f2.f64 = double(float(ctx.f20.f64 * ctx.f25.f64 + ctx.f7.f64));
	// stfs f2,264(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// fadds f0,f19,f6
	ctx.f0.f64 = double(float(ctx.f19.f64 + ctx.f6.f64));
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// fadds f1,f1,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// stfs f1,296(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// fadds f13,f18,f5
	ctx.f13.f64 = double(float(ctx.f18.f64 + ctx.f5.f64));
	// stfs f13,292(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// fmadds f7,f20,f29,f4
	ctx.f7.f64 = double(float(ctx.f20.f64 * ctx.f29.f64 + ctx.f4.f64));
	// stfs f7,276(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// fmadds f9,f21,f29,f30
	ctx.f9.f64 = double(float(ctx.f21.f64 * ctx.f29.f64 + ctx.f30.f64));
	// stfs f9,268(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// fmadds f8,f31,f29,f27
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f29.f64 + ctx.f27.f64));
	// stfs f8,272(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// fmadds f6,f21,f26,f12
	ctx.f6.f64 = double(float(ctx.f21.f64 * ctx.f26.f64 + ctx.f12.f64));
	// stfs f6,280(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// fmadds f5,f31,f26,f11
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f26.f64 + ctx.f11.f64));
	// fmadds f4,f20,f26,f10
	ctx.f4.f64 = double(float(ctx.f20.f64 * ctx.f26.f64 + ctx.f10.f64));
	// stfs f5,284(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f4,288(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// b 0x8301e9b0
	goto loc_8301E9B0;
loc_8301E9AC:
	// addi r11,r20,24
	ctx.r11.s64 = ctx.r20.s64 + 24;
loc_8301E9B0:
	// addi r9,r31,144
	ctx.r9.s64 = ctx.r31.s64 + 144;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8301E9C0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8301e9c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301E9C0;
	// lfs f0,256(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,268(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,272(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f10,276(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,260(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 260);
	ctx.f9.f64 = double(temp.f32);
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
	// lfs f8,264(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 264);
	ctx.f8.f64 = double(temp.f32);
	// lfs f29,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f29.f64 = double(temp.f32);
	// lfs f7,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// stfs f7,180(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// fmadds f4,f12,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f6,184(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f5,188(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// fmadds f3,f11,f11,f4
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmadds f2,f10,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fmadds f1,f9,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f0,f8,f8,f1
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x8301ea38
	if (!ctx.cr6.eq) goto loc_8301EA38;
	// stb r26,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r26.u8);
loc_8301EA38:
	// lwz r11,208(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ea4c
	if (ctx.cr6.eq) goto loc_8301EA4C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8301eae4
	goto loc_8301EAE4;
loc_8301EA4C:
	// lwz r11,212(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ea60
	if (ctx.cr6.eq) goto loc_8301EA60;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8301eae4
	goto loc_8301EAE4;
loc_8301EA60:
	// lwz r11,216(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ea74
	if (ctx.cr6.eq) goto loc_8301EA74;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8301eae4
	goto loc_8301EAE4;
loc_8301EA74:
	// lwz r11,220(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ea88
	if (ctx.cr6.eq) goto loc_8301EA88;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8301eae4
	goto loc_8301EAE4;
loc_8301EA88:
	// lwz r11,224(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ea9c
	if (ctx.cr6.eq) goto loc_8301EA9C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8301eae4
	goto loc_8301EAE4;
loc_8301EA9C:
	// lwz r11,228(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301eab0
	if (ctx.cr6.eq) goto loc_8301EAB0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8301eae4
	goto loc_8301EAE4;
loc_8301EAB0:
	// lwz r11,232(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301eac4
	if (ctx.cr6.eq) goto loc_8301EAC4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8301eae4
	goto loc_8301EAE4;
loc_8301EAC4:
	// lwz r11,236(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ead8
	if (ctx.cr6.eq) goto loc_8301EAD8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8301eae4
	goto loc_8301EAE4;
loc_8301EAD8:
	// lwz r11,240(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 240);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8301EAE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,160(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 160);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r8.u8);
	// beq cr6,0x8301eb08
	if (ctx.cr6.eq) goto loc_8301EB08;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8301eba0
	goto loc_8301EBA0;
loc_8301EB08:
	// lwz r11,164(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301eb1c
	if (ctx.cr6.eq) goto loc_8301EB1C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8301eba0
	goto loc_8301EBA0;
loc_8301EB1C:
	// lwz r11,168(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301eb30
	if (ctx.cr6.eq) goto loc_8301EB30;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8301eba0
	goto loc_8301EBA0;
loc_8301EB30:
	// lwz r11,172(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301eb44
	if (ctx.cr6.eq) goto loc_8301EB44;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8301eba0
	goto loc_8301EBA0;
loc_8301EB44:
	// lwz r11,176(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301eb58
	if (ctx.cr6.eq) goto loc_8301EB58;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8301eba0
	goto loc_8301EBA0;
loc_8301EB58:
	// lwz r11,180(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301eb6c
	if (ctx.cr6.eq) goto loc_8301EB6C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8301eba0
	goto loc_8301EBA0;
loc_8301EB6C:
	// lwz r11,184(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301eb80
	if (ctx.cr6.eq) goto loc_8301EB80;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8301eba0
	goto loc_8301EBA0;
loc_8301EB80:
	// lwz r11,188(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301eb94
	if (ctx.cr6.eq) goto loc_8301EB94;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8301eba0
	goto loc_8301EBA0;
loc_8301EB94:
	// lwz r11,192(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 192);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8301EBA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r10,373(r20)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r20.u32 + 373);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r8.u8);
	// bne cr6,0x8301ebc4
	if (!ctx.cr6.eq) goto loc_8301EBC4;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8301c4c0
	ctx.lr = 0x8301EBC4;
	sub_8301C4C0(ctx, base);
loc_8301EBC4:
	// lwz r9,304(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 304);
	// addi r11,r20,304
	ctx.r11.s64 = ctx.r20.s64 + 304;
	// lwz r10,308(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 308);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r30,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8301ec04
	if (ctx.cr0.eq) goto loc_8301EC04;
loc_8301EBE0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301EBFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8301ebe0
	if (!ctx.cr6.eq) goto loc_8301EBE0;
loc_8301EC04:
	// lwz r11,92(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 92);
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// lwz r10,16(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lfs f0,88(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r24,364(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 364);
	// mr r17,r26
	ctx.r17.u64 = ctx.r26.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// mr r16,r26
	ctx.r16.u64 = ctx.r26.u64;
	// stw r23,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r23.u32);
	// lwz r19,916(r10)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + 916);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// stb r22,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r22.u8);
	// stw r26,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r26.u32);
	// ldx r7,r8,r20
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r20.u32);
	// stb r27,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r27.u8);
	// std r7,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r7.u64);
	// bne cr6,0x8301ec58
	if (!ctx.cr6.eq) goto loc_8301EC58;
	// stb r26,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r26.u8);
loc_8301EC58:
	// lfs f0,80(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stb r27,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r27.u8);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x8301ec6c
	if (!ctx.cr6.eq) goto loc_8301EC6C;
	// stb r26,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r26.u8);
loc_8301EC6C:
	// lfs f0,84(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stb r27,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r27.u8);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x8301ec80
	if (!ctx.cr6.eq) goto loc_8301EC80;
	// stb r26,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r26.u8);
loc_8301EC80:
	// lwz r11,296(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 296);
	// lfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// lwz r15,108(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lwz r14,104(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// addi r25,r11,22744
	ctx.r25.s64 = ctx.r11.s64 + 22744;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r25,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r25.u32);
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r7,r7,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r7,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r7.u32);
	// b 0x8301ecc0
	goto loc_8301ECC0;
loc_8301ECB8:
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r27,1
	ctx.r27.s64 = 1;
loc_8301ECC0:
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r24,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r24.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301efb8
	if (ctx.cr6.eq) goto loc_8301EFB8;
	// lbz r10,86(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301f48c
	if (ctx.cr6.eq) goto loc_8301F48C;
	// rlwinm r30,r8,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r29,0(r19)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301ED08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lhz r4,128(r20)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r20.u32 + 128);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r9,344(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8301ED20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8301f48c
	if (ctx.cr6.eq) goto loc_8301F48C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301ED44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,632(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 632);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r19,600
	ctx.r5.s64 = ctx.r19.s64 + 600;
	// addi r4,r20,132
	ctx.r4.s64 = ctx.r20.s64 + 132;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// lwzx r7,r8,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8301ED68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,636(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 636);
	// addi r5,r19,616
	ctx.r5.s64 = ctx.r19.s64 + 616;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// lwzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301ED88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,640(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 640);
	// addi r5,r31,400
	ctx.r5.s64 = ctx.r31.s64 + 400;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r31,368
	ctx.r4.s64 = ctx.r31.s64 + 368;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// lwzx r7,r8,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8301EDA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,240(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8301eddc
	if (!ctx.cr6.eq) goto loc_8301EDDC;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301eddc
	if (!ctx.cr6.eq) goto loc_8301EDDC;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301eddc
	if (!ctx.cr6.eq) goto loc_8301EDDC;
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8301ede0
	if (ctx.cr6.eq) goto loc_8301EDE0;
loc_8301EDDC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8301EDE0:
	// lbz r10,644(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 644);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8301f48c
	if (!ctx.cr6.eq) goto loc_8301F48C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301EE04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,72(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 72);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8301f48c
	if (ctx.cr6.eq) goto loc_8301F48C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301EE24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8301f48c
	if (ctx.cr6.eq) goto loc_8301F48C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301EE48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301f48c
	if (!ctx.cr6.eq) goto loc_8301F48C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301EE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,304(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 304);
	// lwz r9,308(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 308);
	// addi r11,r20,304
	ctx.r11.s64 = ctx.r20.s64 + 304;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r29,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r7.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8301f48c
	if (ctx.cr0.eq) goto loc_8301F48C;
loc_8301EE88:
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r4,r31,304
	ctx.r4.s64 = ctx.r31.s64 + 304;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301EEAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301eec4
	if (!ctx.cr6.eq) goto loc_8301EEC4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8301ee88
	if (!ctx.cr6.eq) goto loc_8301EE88;
	// b 0x8301f48c
	goto loc_8301F48C;
loc_8301EEC4:
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8301f48c
	if (ctx.cr6.eq) goto loc_8301F48C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// lwz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301EEF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lbz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r6,r31,304
	ctx.r6.s64 = ctx.r31.s64 + 304;
	// lbz r9,82(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// lbz r10,81(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// add r3,r15,r20
	ctx.r3.u64 = ctx.r15.u64 + ctx.r20.u64;
	// mtctr r14
	ctx.ctr.u64 = ctx.r14.u64;
	// bctrl 
	ctx.lr = 0x8301EF18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,88(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f9,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f8,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f7,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// lfs f6,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f5,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f4,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// fmuls f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// fmuls f8,f7,f0
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f12,112(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lfs f10,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f7,f5,f13,f11
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f6,f4,f13,f9
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f5,f3,f13,f8
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f2,f12,f7
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f4,208(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// fmadds f3,f1,f12,f6
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f3,212(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// fmadds f2,f10,f12,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f2,216(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,288(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8301EFB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8301f48c
	goto loc_8301F48C;
loc_8301EFB8:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x8301efd0
	if (ctx.cr6.eq) goto loc_8301EFD0;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x8301efd4
	if (!ctx.cr6.eq) goto loc_8301EFD4;
loc_8301EFD0:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_8301EFD4:
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x8301efe8
	if (ctx.cr6.eq) goto loc_8301EFE8;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8301efec
	if (!ctx.cr6.eq) goto loc_8301EFEC;
loc_8301EFE8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8301EFEC:
	// clrlwi r18,r10,24
	ctx.r18.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x8301f00c
	if (!ctx.cr6.eq) goto loc_8301F00C;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301f48c
	if (ctx.cr6.eq) goto loc_8301F48C;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8301f024
	if (ctx.cr6.eq) goto loc_8301F024;
loc_8301F00C:
	// lbz r10,85(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 85);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301f48c
	if (ctx.cr6.eq) goto loc_8301F48C;
	// lfs f30,80(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// b 0x8301f044
	goto loc_8301F044;
loc_8301F024:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301f050
	if (ctx.cr6.eq) goto loc_8301F050;
	// lbz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301f48c
	if (ctx.cr6.eq) goto loc_8301F48C;
	// lfs f30,84(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r9,-6
	ctx.r11.s64 = ctx.r9.s64 + -6;
loc_8301F044:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,87(r31)
	PPC_STORE_U8(ctx.r31.u32 + 87, ctx.r9.u8);
loc_8301F050:
	// lbz r10,87(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 87);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301f068
	if (ctx.cr6.eq) goto loc_8301F068;
	// lwz r21,4(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x8301f170
	goto loc_8301F170;
loc_8301F068:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subf r9,r17,r16
	ctx.r9.s64 = ctx.r16.s64 - ctx.r17.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// srawi. r28,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r21,28(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// beq 0x8301f0a8
	if (ctx.cr0.eq) goto loc_8301F0A8;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
loc_8301F084:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x8301f0a4
	if (ctx.cr6.eq) goto loc_8301F0A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8301f084
	if (ctx.cr6.lt) goto loc_8301F084;
	// b 0x8301f0a8
	goto loc_8301F0A8;
loc_8301F0A4:
	// li r27,1
	ctx.r27.s64 = 1;
loc_8301F0A8:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301f170
	if (!ctx.cr6.eq) goto loc_8301F170;
	// cmplw cr6,r26,r16
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r16.u32, ctx.xer);
	// bgt cr6,0x8301f168
	if (ctx.cr6.gt) goto loc_8301F168;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8301f0d4
	if (!ctx.cr6.eq) goto loc_8301F0D4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8301f0dc
	goto loc_8301F0DC;
loc_8301F0D4:
	// subf r10,r17,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r17.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_8301F0DC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8301f168
	if (!ctx.cr6.lt) goto loc_8301F168;
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-32308(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// cmplw cr6,r17,r16
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x8301f130
	if (ctx.cr6.eq) goto loc_8301F130;
	// subf r10,r17,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r17.s64;
loc_8301F11C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x8301f11c
	if (!ctx.cr6.eq) goto loc_8301F11C;
loc_8301F130:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8301f154
	if (ctx.cr6.eq) goto loc_8301F154;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8301F154:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r29,r30
	ctx.r26.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r16,r11,r30
	ctx.r16.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r26,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r26.u32);
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
loc_8301F168:
	// stw r21,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r21.u32);
	// addi r16,r16,4
	ctx.r16.s64 = ctx.r16.s64 + 4;
loc_8301F170:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r30,0(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lhz r4,128(r20)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r20.u32 + 128);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r9,344(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8301F1A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8301f48c
	if (ctx.cr6.eq) goto loc_8301F48C;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F1C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,632(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 632);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r19,600
	ctx.r5.s64 = ctx.r19.s64 + 600;
	// addi r4,r20,132
	ctx.r4.s64 = ctx.r20.s64 + 132;
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// lwzx r7,r8,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8301F1E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,636(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 636);
	// addi r5,r19,616
	ctx.r5.s64 = ctx.r19.s64 + 616;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// lwzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,640(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 640);
	// addi r5,r31,352
	ctx.r5.s64 = ctx.r31.s64 + 352;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lwzx r7,r8,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8301F224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,224(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8301f258
	if (!ctx.cr6.eq) goto loc_8301F258;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301f258
	if (!ctx.cr6.eq) goto loc_8301F258;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301f258
	if (!ctx.cr6.eq) goto loc_8301F258;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8301f25c
	if (ctx.cr6.eq) goto loc_8301F25C;
loc_8301F258:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8301F25C:
	// lbz r10,644(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 644);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8301f48c
	if (!ctx.cr6.eq) goto loc_8301F48C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301f48c
	if (!ctx.cr6.eq) goto loc_8301F48C;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F28C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8301f2a4
	if (ctx.cr6.eq) goto loc_8301F2A4;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8301f338
	if (!ctx.cr6.gt) goto loc_8301F338;
loc_8301F2A4:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301f2dc
	if (ctx.cr6.eq) goto loc_8301F2DC;
	// cmplwi cr6,r29,256
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 256, ctx.xer);
	// bgt cr6,0x8301f2d4
	if (ctx.cr6.gt) goto loc_8301F2D4;
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stwu r11,-3152(r1)
	ea = -3152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// b 0x8301f338
	goto loc_8301F338;
loc_8301F2D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301f300
	if (!ctx.cr6.eq) goto loc_8301F300;
loc_8301F2DC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8301f300
	if (ctx.cr6.eq) goto loc_8301F300;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8301F300:
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r10,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r10.u8);
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8301F330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
loc_8301F338:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F34C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r8,360(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 360);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8301F364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r6,364(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 364);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8301F37C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,368(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 368);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8301F394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// fmuls f31,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8301f424
	if (ctx.cr6.eq) goto loc_8301F424;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_8301F3B0:
	// lwz r9,304(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 304);
	// addi r11,r20,304
	ctx.r11.s64 = ctx.r20.s64 + 304;
	// lwz r10,308(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 308);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r26,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x8301f404
	if (ctx.cr0.eq) goto loc_8301F404;
loc_8301F3CC:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F3F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301f4fc
	if (!ctx.cr6.eq) goto loc_8301F4FC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8301f3cc
	if (!ctx.cr6.eq) goto loc_8301F3CC;
loc_8301F404:
	// stfs f29,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f29,0(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f29,-4(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + -4, temp.u32);
loc_8301F410:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// add r27,r23,r27
	ctx.r27.u64 = ctx.r23.u64 + ctx.r27.u64;
	// add r25,r22,r25
	ctx.r25.u64 = ctx.r22.u64 + ctx.r25.u64;
	// bne 0x8301f3b0
	if (!ctx.cr0.eq) goto loc_8301F3B0;
loc_8301F424:
	// lwz r11,296(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 296);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// bne cr6,0x8301f438
	if (!ctx.cr6.eq) goto loc_8301F438;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
loc_8301F438:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r9,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r9.u32);
	// stw r7,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r7.u32);
	// lwz r8,352(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8301F478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r22,83(r31)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r31.u32 + 83);
	// lwz r25,124(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r26,328(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r23,88(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r24,104(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
loc_8301F48C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301ecb8
	if (!ctx.cr6.eq) goto loc_8301ECB8;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301f4c8
	if (!ctx.cr6.eq) goto loc_8301F4C8;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8301f4c8
	if (ctx.cr6.eq) goto loc_8301F4C8;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8301F4C8:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8301f4ec
	if (ctx.cr6.eq) goto loc_8301F4EC;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F4EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8301F4EC:
	// addi r1,r31,720
	ctx.r1.s64 = ctx.r31.s64 + 720;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b0c
	ctx.lr = 0x8301F4F8;
	__restfpr_18(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_8301F4FC:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8301f404
	if (ctx.cr6.eq) goto loc_8301F404;
	// lbz r10,81(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lbz r9,82(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lbz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// add r3,r15,r20
	ctx.r3.u64 = ctx.r15.u64 + ctx.r20.u64;
	// mtctr r14
	ctx.ctr.u64 = ctx.r14.u64;
	// bctrl 
	ctx.lr = 0x8301F538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f12,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f5,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f12,f5,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f9.f64));
	// fmadds f9,f0,f4,f7
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f7.f64));
	// fmadds f8,f0,f3,f6
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f6.f64));
	// lfs f11,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f7,f13,f2,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + ctx.f10.f64));
	// stfs f7,4(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmadds f6,f12,f1,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f9.f64));
	// stfs f6,-4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + -4, temp.u32);
	// fmadds f5,f13,f11,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f5,0(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// fmuls f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f2,-4(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + -4, temp.u32);
	// fmuls f0,f31,f4
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f4.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x8301f410
	goto loc_8301F410;
}

__attribute__((alias("__imp__sub_8301F5C0"))) PPC_WEAK_FUNC(sub_8301F5C0);
PPC_FUNC_IMPL(__imp__sub_8301F5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8301F5C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301F5DC;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301f878
	if (ctx.cr6.eq) goto loc_8301F878;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r24,8(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8301f788
	if (ctx.cr6.gt) goto loc_8301F788;
	// lis r12,-31998
	ctx.r12.s64 = -2097020928;
	// addi r12,r12,-2540
	ctx.r12.s64 = ctx.r12.s64 + -2540;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8301F628;
	case 1:
		goto loc_8301F6D4;
	case 2:
		goto loc_8301F710;
	case 3:
		goto loc_8301F788;
	case 4:
		goto loc_8301F74C;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-2520(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2520);
	// lwz r24,-2348(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2348);
	// lwz r24,-2288(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2288);
	// lwz r24,-2168(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2168);
	// lwz r24,-2228(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2228);
loc_8301F628:
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r26,r11,-32308
	ctx.r26.s64 = ctx.r11.s64 + -32308;
	// li r4,104
	ctx.r4.s64 = 104;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F64C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301f664
	if (ctx.cr6.eq) goto loc_8301F664;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830644f0
	ctx.lr = 0x8301F660;
	sub_830644F0(ctx, base);
	// b 0x8301f668
	goto loc_8301F668;
loc_8301F664:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8301F668:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301f6cc
	if (ctx.cr6.eq) goto loc_8301F6CC;
	// addi r28,r3,72
	ctx.r28.s64 = ctx.r3.s64 + 72;
loc_8301F678:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8301f85c
	if (ctx.cr6.eq) goto loc_8301F85C;
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
	// addi r31,r25,304
	ctx.r31.s64 = ctx.r25.s64 + 304;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// lwz r9,312(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 312);
	// lwz r10,308(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 308);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8301f838
	if (ctx.cr6.gt) goto loc_8301F838;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8301f790
	if (!ctx.cr6.eq) goto loc_8301F790;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301f798
	goto loc_8301F798;
loc_8301F6CC:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8301f678
	goto loc_8301F678;
loc_8301F6D4:
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r26,r11,-32308
	ctx.r26.s64 = ctx.r11.s64 + -32308;
	// li r4,156
	ctx.r4.s64 = 156;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301f664
	if (ctx.cr6.eq) goto loc_8301F664;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83064d98
	ctx.lr = 0x8301F70C;
	sub_83064D98(ctx, base);
	// b 0x8301f668
	goto loc_8301F668;
loc_8301F710:
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r26,r11,-32308
	ctx.r26.s64 = ctx.r11.s64 + -32308;
	// li r4,120
	ctx.r4.s64 = 120;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301f664
	if (ctx.cr6.eq) goto loc_8301F664;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83065918
	ctx.lr = 0x8301F748;
	sub_83065918(ctx, base);
	// b 0x8301f668
	goto loc_8301F668;
loc_8301F74C:
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r26,r11,-32308
	ctx.r26.s64 = ctx.r11.s64 + -32308;
	// li r4,112
	ctx.r4.s64 = 112;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301f664
	if (ctx.cr6.eq) goto loc_8301F664;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83066518
	ctx.lr = 0x8301F784;
	sub_83066518(ctx, base);
	// b 0x8301f668
	goto loc_8301F668;
loc_8301F788:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8301f85c
	goto loc_8301F85C;
loc_8301F790:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_8301F798:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8301f838
	if (!ctx.cr6.lt) goto loc_8301F838;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8301f7f0
	if (ctx.cr6.eq) goto loc_8301F7F0;
loc_8301F7D8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8301f7d8
	if (!ctx.cr6.eq) goto loc_8301F7D8;
loc_8301F7F0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8301f810
	if (ctx.cr6.eq) goto loc_8301F810;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301F810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8301F810:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8301F838:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stb r10,373(r25)
	PPC_STORE_U8(ctx.r25.u32 + 373, ctx.r10.u8);
	// stb r9,372(r25)
	PPC_STORE_U8(ctx.r25.u32 + 372, ctx.r9.u8);
loc_8301F85C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8301f86c
	if (ctx.cr6.eq) goto loc_8301F86C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8301F86C;
	sub_82D5ED58(ctx, base);
loc_8301F86C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_8301F878:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,1704
	ctx.r4.s64 = ctx.r11.s64 + 1704;
	// li r5,331
	ctx.r5.s64 = 331;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301F898;
	sub_82D17988(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301F8A4"))) PPC_WEAK_FUNC(sub_8301F8A4);
PPC_FUNC_IMPL(__imp__sub_8301F8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301F8A8"))) PPC_WEAK_FUNC(sub_8301F8A8);
PPC_FUNC_IMPL(__imp__sub_8301F8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmuls f13,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f12,f1
	ctx.f12.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmadds f10,f12,f2,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f11.f64));
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fdivs f1,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F8CC"))) PPC_WEAK_FUNC(sub_8301F8CC);
PPC_FUNC_IMPL(__imp__sub_8301F8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301F8D0"))) PPC_WEAK_FUNC(sub_8301F8D0);
PPC_FUNC_IMPL(__imp__sub_8301F8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,32760
	ctx.r11.s64 = 2146959360;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r11,41965
	ctx.r8.u64 = ctx.r11.u64 | 41965;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mullw r6,r10,r8
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lfs f11,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// addis r11,r6,10912
	ctx.r11.s64 = ctx.r6.s64 + 715128832;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,7473
	ctx.r11.s64 = ctx.r11.s64 + 7473;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// lfs f13,13604(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13604);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8301f938
	if (ctx.cr6.eq) goto loc_8301F938;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmsubs f6,f7,f13,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 - ctx.f12.f64));
	// fmadds f5,f6,f0,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_8301F938:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x8301f96c
	if (ctx.cr6.eq) goto loc_8301F96C;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmsubs f6,f7,f13,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 - ctx.f12.f64));
	// fmadds f5,f6,f0,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f5,4(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_8301F96C:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmsubs f7,f8,f13,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f12.f64));
	// fmadds f6,f7,f0,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F9A0"))) PPC_WEAK_FUNC(sub_8301F9A0);
PPC_FUNC_IMPL(__imp__sub_8301F9A0) {
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

__attribute__((alias("__imp__sub_8301F9B4"))) PPC_WEAK_FUNC(sub_8301F9B4);
PPC_FUNC_IMPL(__imp__sub_8301F9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301F9B8"))) PPC_WEAK_FUNC(sub_8301F9B8);
PPC_FUNC_IMPL(__imp__sub_8301F9B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F9CC"))) PPC_WEAK_FUNC(sub_8301F9CC);
PPC_FUNC_IMPL(__imp__sub_8301F9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301F9D0"))) PPC_WEAK_FUNC(sub_8301F9D0);
PPC_FUNC_IMPL(__imp__sub_8301F9D0) {
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

__attribute__((alias("__imp__sub_8301F9E0"))) PPC_WEAK_FUNC(sub_8301F9E0);
PPC_FUNC_IMPL(__imp__sub_8301F9E0) {
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

__attribute__((alias("__imp__sub_8301F9F0"))) PPC_WEAK_FUNC(sub_8301F9F0);
PPC_FUNC_IMPL(__imp__sub_8301F9F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F9F8"))) PPC_WEAK_FUNC(sub_8301F9F8);
PPC_FUNC_IMPL(__imp__sub_8301F9F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FA00"))) PPC_WEAK_FUNC(sub_8301FA00);
PPC_FUNC_IMPL(__imp__sub_8301FA00) {
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

__attribute__((alias("__imp__sub_8301FA14"))) PPC_WEAK_FUNC(sub_8301FA14);
PPC_FUNC_IMPL(__imp__sub_8301FA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301FA18"))) PPC_WEAK_FUNC(sub_8301FA18);
PPC_FUNC_IMPL(__imp__sub_8301FA18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FA2C"))) PPC_WEAK_FUNC(sub_8301FA2C);
PPC_FUNC_IMPL(__imp__sub_8301FA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301FA30"))) PPC_WEAK_FUNC(sub_8301FA30);
PPC_FUNC_IMPL(__imp__sub_8301FA30) {
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

__attribute__((alias("__imp__sub_8301FA40"))) PPC_WEAK_FUNC(sub_8301FA40);
PPC_FUNC_IMPL(__imp__sub_8301FA40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FA48"))) PPC_WEAK_FUNC(sub_8301FA48);
PPC_FUNC_IMPL(__imp__sub_8301FA48) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_8301FA68"))) PPC_WEAK_FUNC(sub_8301FA68);
PPC_FUNC_IMPL(__imp__sub_8301FA68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

