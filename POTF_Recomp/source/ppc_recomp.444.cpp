#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82DA9C48"))) PPC_WEAK_FUNC(sub_82DA9C48);
PPC_FUNC_IMPL(__imp__sub_82DA9C48) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82da9c80
	if (ctx.cr6.eq) goto loc_82DA9C80;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// addi r9,r3,20
	ctx.r9.s64 = ctx.r3.s64 + 20;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82da9c80
	if (ctx.cr6.eq) goto loc_82DA9C80;
loc_82DA9C68:
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82da9c88
	if (ctx.cr6.eq) goto loc_82DA9C88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82da9c68
	if (!ctx.cr6.eq) goto loc_82DA9C68;
loc_82DA9C80:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82DA9C88:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9C98"))) PPC_WEAK_FUNC(sub_82DA9C98);
PPC_FUNC_IMPL(__imp__sub_82DA9C98) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82da9ca8
	if (!ctx.cr6.eq) goto loc_82DA9CA8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82DA9CA8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r3,20
	ctx.r8.s64 = ctx.r3.s64 + 20;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82da9ce0
	if (ctx.cr6.eq) goto loc_82DA9CE0;
loc_82DA9CC0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,288(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82da9cc0
	if (!ctx.cr6.eq) goto loc_82DA9CC0;
loc_82DA9CE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9CE8"))) PPC_WEAK_FUNC(sub_82DA9CE8);
PPC_FUNC_IMPL(__imp__sub_82DA9CE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9CF8"))) PPC_WEAK_FUNC(sub_82DA9CF8);
PPC_FUNC_IMPL(__imp__sub_82DA9CF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82da9d08
	if (!ctx.cr6.eq) goto loc_82DA9D08;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82DA9D08:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9D18"))) PPC_WEAK_FUNC(sub_82DA9D18);
PPC_FUNC_IMPL(__imp__sub_82DA9D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9D60"))) PPC_WEAK_FUNC(sub_82DA9D60);
PPC_FUNC_IMPL(__imp__sub_82DA9D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DA9D68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r29,r10,38344
	ctx.r29.u64 = ctx.r10.u64 | 38344;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82da9d94
	if (!ctx.cr6.eq) goto loc_82DA9D94;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82DA9D94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82da9dd4
	if (ctx.cr6.eq) goto loc_82DA9DD4;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82da9dd4
	if (ctx.cr6.eq) goto loc_82DA9DD4;
loc_82DA9DAC:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DA9DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82da9dac
	if (!ctx.cr6.eq) goto loc_82DA9DAC;
loc_82DA9DD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da98f8
	ctx.lr = 0x82DA9DDC;
	sub_82DA98F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DA9DE4"))) PPC_WEAK_FUNC(sub_82DA9DE4);
PPC_FUNC_IMPL(__imp__sub_82DA9DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DA9DE8"))) PPC_WEAK_FUNC(sub_82DA9DE8);
PPC_FUNC_IMPL(__imp__sub_82DA9DE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r10.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9E00"))) PPC_WEAK_FUNC(sub_82DA9E00);
PPC_FUNC_IMPL(__imp__sub_82DA9E00) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9E08"))) PPC_WEAK_FUNC(sub_82DA9E08);
PPC_FUNC_IMPL(__imp__sub_82DA9E08) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82da9e2c
	if (!ctx.cr6.gt) goto loc_82DA9E2C;
	// subf r5,r10,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r3,37
	ctx.r3.s64 = 37;
loc_82DA9E2C:
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stw r10,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9E40"))) PPC_WEAK_FUNC(sub_82DA9E40);
PPC_FUNC_IMPL(__imp__sub_82DA9E40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r4,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r4.u32);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r10,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9E60"))) PPC_WEAK_FUNC(sub_82DA9E60);
PPC_FUNC_IMPL(__imp__sub_82DA9E60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9E74"))) PPC_WEAK_FUNC(sub_82DA9E74);
PPC_FUNC_IMPL(__imp__sub_82DA9E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DA9E78"))) PPC_WEAK_FUNC(sub_82DA9E78);
PPC_FUNC_IMPL(__imp__sub_82DA9E78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31909
	ctx.r9.s64 = -2091188224;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,19872(r9)
	PPC_STORE_U32(ctx.r9.u32 + 19872, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r4.u32);
	// stw r10,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9EA4"))) PPC_WEAK_FUNC(sub_82DA9EA4);
PPC_FUNC_IMPL(__imp__sub_82DA9EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DA9EA8"))) PPC_WEAK_FUNC(sub_82DA9EA8);
PPC_FUNC_IMPL(__imp__sub_82DA9EA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9EB0"))) PPC_WEAK_FUNC(sub_82DA9EB0);
PPC_FUNC_IMPL(__imp__sub_82DA9EB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9EBC"))) PPC_WEAK_FUNC(sub_82DA9EBC);
PPC_FUNC_IMPL(__imp__sub_82DA9EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DA9EC0"))) PPC_WEAK_FUNC(sub_82DA9EC0);
PPC_FUNC_IMPL(__imp__sub_82DA9EC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9EC8"))) PPC_WEAK_FUNC(sub_82DA9EC8);
PPC_FUNC_IMPL(__imp__sub_82DA9EC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9ED0"))) PPC_WEAK_FUNC(sub_82DA9ED0);
PPC_FUNC_IMPL(__imp__sub_82DA9ED0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9EDC"))) PPC_WEAK_FUNC(sub_82DA9EDC);
PPC_FUNC_IMPL(__imp__sub_82DA9EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DA9EE0"))) PPC_WEAK_FUNC(sub_82DA9EE0);
PPC_FUNC_IMPL(__imp__sub_82DA9EE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DA9EE8"))) PPC_WEAK_FUNC(sub_82DA9EE8);
PPC_FUNC_IMPL(__imp__sub_82DA9EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DA9EF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,19
	ctx.r9.s64 = 19;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r29,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// bl 0x82da7e70
	ctx.lr = 0x82DA9F30;
	sub_82DA7E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82daa0f8
	if (!ctx.cr6.eq) goto loc_82DAA0F8;
	// addi r11,r31,232
	ctx.r11.s64 = ctx.r31.s64 + 232;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82daa0f4
	if (ctx.cr6.lt) goto loc_82DAA0F4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bgt cr6,0x82daa0f4
	if (ctx.cr6.gt) goto loc_82DAA0F4;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r4,r11,268
	ctx.r4.s64 = ctx.r11.s64 + 268;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DA9F6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82daa0f8
	if (!ctx.cr6.eq) goto loc_82DAA0F8;
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// beq cr6,0x82daa0cc
	if (ctx.cr6.eq) goto loc_82DAA0CC;
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bgt cr6,0x82daa0cc
	if (ctx.cr6.gt) goto loc_82DAA0CC;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-24620
	ctx.r12.s64 = ctx.r12.s64 + -24620;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82DAA038;
	case 1:
		goto loc_82DAA000;
	case 2:
		goto loc_82DAA008;
	case 3:
		goto loc_82DAA010;
	case 4:
		goto loc_82DAA018;
	case 5:
		goto loc_82DAA018;
	case 6:
		goto loc_82DAA038;
	case 7:
		goto loc_82DAA038;
	case 8:
		goto loc_82DAA038;
	case 9:
		goto loc_82DAA038;
	case 10:
		goto loc_82DAA038;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-24520(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24520);
	// lwz r22,-24576(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24576);
	// lwz r22,-24568(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24568);
	// lwz r22,-24560(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24560);
	// lwz r22,-24552(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24552);
	// lwz r22,-24552(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24552);
	// lwz r22,-24520(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24520);
	// lwz r22,-24520(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24520);
	// lwz r22,-24520(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24520);
	// lwz r22,-24520(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24520);
	// lwz r22,-24520(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24520);
loc_82DAA000:
	// li r9,8
	ctx.r9.s64 = 8;
	// b 0x82daa01c
	goto loc_82DAA01C;
loc_82DAA008:
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x82daa01c
	goto loc_82DAA01C;
loc_82DAA010:
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x82daa01c
	goto loc_82DAA01C;
loc_82DAA018:
	// li r9,32
	ctx.r9.s64 = 32;
loc_82DAA01C:
	// rldicl r10,r10,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 3) & 0x7FFFFFFFF;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// rldicr r10,r10,0,60
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r9,0
	// divdu r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 / ctx.r9.u64;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x82daa0bc
	goto loc_82DAA0BC;
loc_82DAA038:
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-24496
	ctx.r12.s64 = ctx.r12.s64 + -24496;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r22,-24392(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24392);
	// lwz r22,-24372(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24372);
	// lwz r22,-24372(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24372);
	// lwz r22,-24372(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24372);
	// lwz r22,-24372(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24372);
	// lwz r22,-24372(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24372);
	// lwz r22,-24452(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24452);
	// lwz r22,-24436(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24436);
	// lwz r22,-24408(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24408);
	// lwz r22,-24376(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24376);
	// lwz r22,-24376(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24376);
	// mulli r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 * 14;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x82daa0bc
	goto loc_82DAA0BC;
	// lis r9,14563
	ctx.r9.s64 = 954400768;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// ori r9,r9,36409
	ctx.r9.u64 = ctx.r9.u64 | 36409;
	// mulhwu r10,r10,r9
	ctx.r10.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x82daa0bc
	goto loc_82DAA0BC;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x82daa0bc
	goto loc_82DAA0BC;
	// stw r29,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r29.u32);
loc_82DAA0BC:
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// twllei r8,0
	// divwu r10,r10,r8
	ctx.r10.u32 = ctx.r10.u32 / ctx.r8.u32;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
loc_82DAA0CC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// stw r10,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82DAA0F4:
	// li r3,25
	ctx.r3.s64 = 25;
loc_82DAA0F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAA100"))) PPC_WEAK_FUNC(sub_82DAA100);
PPC_FUNC_IMPL(__imp__sub_82DAA100) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82daa110
	if (!ctx.cr6.eq) goto loc_82DAA110;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAA110:
	// b 0x82da9ee8
	sub_82DA9EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAA114"))) PPC_WEAK_FUNC(sub_82DAA114);
PPC_FUNC_IMPL(__imp__sub_82DAA114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAA118"))) PPC_WEAK_FUNC(sub_82DAA118);
PPC_FUNC_IMPL(__imp__sub_82DAA118) {
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r5,92
	ctx.r5.s64 = 92;
	// addi r31,r11,19944
	ctx.r31.s64 = ctx.r11.s64 + 19944;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAA140;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// addi r11,r11,620
	ctx.r11.s64 = ctx.r11.s64 + 620;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// lis r10,-32037
	ctx.r10.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r11,r7,-24320
	ctx.r11.s64 = ctx.r7.s64 + -24320;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r11,r8,-24888
	ctx.r11.s64 = ctx.r8.s64 + -24888;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r11,r9,-24880
	ctx.r11.s64 = ctx.r9.s64 + -24880;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r11,r10,-24864
	ctx.r11.s64 = ctx.r10.s64 + -24864;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r11,528
	ctx.r11.s64 = 528;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DAA1B8"))) PPC_WEAK_FUNC(sub_82DAA1B8);
PPC_FUNC_IMPL(__imp__sub_82DAA1B8) {
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
	// bl 0x82cb5128
	ctx.lr = 0x82DAA1C8;
	sub_82CB5128(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAA1DC"))) PPC_WEAK_FUNC(sub_82DAA1DC);
PPC_FUNC_IMPL(__imp__sub_82DAA1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAA1E0"))) PPC_WEAK_FUNC(sub_82DAA1E0);
PPC_FUNC_IMPL(__imp__sub_82DAA1E0) {
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
	// addi r3,r3,268
	ctx.r3.s64 = ctx.r3.s64 + 268;
	// bl 0x82df3d08
	ctx.lr = 0x82DAA1F4;
	sub_82DF3D08(ctx, base);
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
}

__attribute__((alias("__imp__sub_82DAA208"))) PPC_WEAK_FUNC(sub_82DAA208);
PPC_FUNC_IMPL(__imp__sub_82DAA208) {
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
	// addi r31,r3,268
	ctx.r31.s64 = ctx.r3.s64 + 268;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df3270
	ctx.lr = 0x82DAA228;
	sub_82DF3270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df41a0
	ctx.lr = 0x82DAA230;
	sub_82DF41A0(ctx, base);
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

__attribute__((alias("__imp__sub_82DAA248"))) PPC_WEAK_FUNC(sub_82DAA248);
PPC_FUNC_IMPL(__imp__sub_82DAA248) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// bgt cr6,0x82daa454
	if (ctx.cr6.gt) goto loc_82DAA454;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-23932
	ctx.r12.s64 = ctx.r12.s64 + -23932;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82DAA2C0;
	case 1:
		goto loc_82DAA2E8;
	case 2:
		goto loc_82DAA314;
	case 3:
		goto loc_82DAA340;
	case 4:
		goto loc_82DAA350;
	case 5:
		goto loc_82DAA360;
	case 6:
		goto loc_82DAA370;
	case 7:
		goto loc_82DAA39C;
	case 8:
		goto loc_82DAA3AC;
	case 9:
		goto loc_82DAA3D8;
	case 10:
		goto loc_82DAA3E8;
	case 11:
		goto loc_82DAA3F8;
	case 12:
		goto loc_82DAA408;
	case 13:
		goto loc_82DAA418;
	case 14:
		goto loc_82DAA444;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-23872(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23872);
	// lwz r22,-23832(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23832);
	// lwz r22,-23788(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23788);
	// lwz r22,-23744(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23744);
	// lwz r22,-23728(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23728);
	// lwz r22,-23712(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23712);
	// lwz r22,-23696(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23696);
	// lwz r22,-23652(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23652);
	// lwz r22,-23636(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23636);
	// lwz r22,-23592(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23592);
	// lwz r22,-23576(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23576);
	// lwz r22,-23560(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23560);
	// lwz r22,-23544(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23544);
	// lwz r22,-23528(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23528);
	// lwz r22,-23484(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23484);
loc_82DAA2C0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f1,1816(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1816, temp.u32);
	// lfs f0,-17404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17404);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfd f1,-16744(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16744);
	// bl 0x82cb59b0
	ctx.lr = 0x82DAA2DC;
	sub_82CB59B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,1820(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1820, temp.u32);
	// b 0x82daa458
	goto loc_82DAA458;
loc_82DAA2E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,1764
	ctx.r11.s64 = ctx.r31.s64 + 1764;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stb r10,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r10.u8);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fsel f0,f1,f0,f13
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// b 0x82daa458
	goto loc_82DAA458;
loc_82DAA314:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,1768
	ctx.r11.s64 = ctx.r31.s64 + 1768;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stb r10,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r10.u8);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fsel f0,f1,f0,f13
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// b 0x82daa458
	goto loc_82DAA458;
loc_82DAA340:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,1772(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
	// stb r11,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r11.u8);
	// b 0x82daa458
	goto loc_82DAA458;
loc_82DAA350:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,1776(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1776, temp.u32);
	// stb r11,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r11.u8);
	// b 0x82daa458
	goto loc_82DAA458;
loc_82DAA360:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,1780(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1780, temp.u32);
	// stb r11,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r11.u8);
	// b 0x82daa458
	goto loc_82DAA458;
loc_82DAA370:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,1784
	ctx.r11.s64 = ctx.r31.s64 + 1784;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stb r10,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r10.u8);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fsel f0,f1,f0,f13
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// b 0x82daa458
	goto loc_82DAA458;
loc_82DAA39C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,1788(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1788, temp.u32);
	// stb r11,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r11.u8);
	// b 0x82daa458
	goto loc_82DAA458;
loc_82DAA3AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,1792
	ctx.r11.s64 = ctx.r31.s64 + 1792;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stb r10,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r10.u8);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fsel f0,f1,f0,f13
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// b 0x82daa458
	goto loc_82DAA458;
loc_82DAA3D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,1796(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1796, temp.u32);
	// stb r11,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r11.u8);
	// b 0x82daa458
	goto loc_82DAA458;
loc_82DAA3E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,1800(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1800, temp.u32);
	// stb r11,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r11.u8);
	// b 0x82daa458
	goto loc_82DAA458;
loc_82DAA3F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,1804(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1804, temp.u32);
	// stb r11,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r11.u8);
	// b 0x82daa458
	goto loc_82DAA458;
loc_82DAA408:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,1808(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1808, temp.u32);
	// stb r11,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r11.u8);
	// b 0x82daa458
	goto loc_82DAA458;
loc_82DAA418:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,1832
	ctx.r11.s64 = ctx.r31.s64 + 1832;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stb r10,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r10.u8);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fsel f0,f1,f0,f13
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// b 0x82daa458
	goto loc_82DAA458;
loc_82DAA444:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,1836(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1836, temp.u32);
	// stb r11,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r11.u8);
	// b 0x82daa458
	goto loc_82DAA458;
loc_82DAA454:
	// li r30,37
	ctx.r30.s64 = 37;
loc_82DAA458:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82DAA474"))) PPC_WEAK_FUNC(sub_82DAA474);
PPC_FUNC_IMPL(__imp__sub_82DAA474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAA478"))) PPC_WEAK_FUNC(sub_82DAA478);
PPC_FUNC_IMPL(__imp__sub_82DAA478) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// bgt cr6,0x82daa920
	if (ctx.cr6.gt) goto loc_82DAA920;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-23380
	ctx.r12.s64 = ctx.r12.s64 + -23380;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82DAA4E8;
	case 1:
		goto loc_82DAA52C;
	case 2:
		goto loc_82DAA57C;
	case 3:
		goto loc_82DAA5CC;
	case 4:
		goto loc_82DAA610;
	case 5:
		goto loc_82DAA654;
	case 6:
		goto loc_82DAA698;
	case 7:
		goto loc_82DAA6E8;
	case 8:
		goto loc_82DAA72C;
	case 9:
		goto loc_82DAA77C;
	case 10:
		goto loc_82DAA7C0;
	case 11:
		goto loc_82DAA804;
	case 12:
		goto loc_82DAA848;
	case 13:
		goto loc_82DAA88C;
	case 14:
		goto loc_82DAA8DC;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-23320(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23320);
	// lwz r22,-23252(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23252);
	// lwz r22,-23172(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23172);
	// lwz r22,-23092(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23092);
	// lwz r22,-23024(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23024);
	// lwz r22,-22956(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22956);
	// lwz r22,-22888(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22888);
	// lwz r22,-22808(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22808);
	// lwz r22,-22740(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22740);
	// lwz r22,-22660(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22660);
	// lwz r22,-22592(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22592);
	// lwz r22,-22524(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22524);
	// lwz r22,-22456(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22456);
	// lwz r22,-22388(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22388);
	// lwz r22,-22308(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22308);
loc_82DAA4E8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82daa4f8
	if (ctx.cr6.eq) goto loc_82DAA4F8;
	// lfs f0,1816(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1816);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAA4F8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daa90c
	if (ctx.cr6.eq) goto loc_82DAA90C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,1816(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1816);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r10,7408
	ctx.r4.s64 = ctx.r10.s64 + 7408;
	// bl 0x82cb61f0
	ctx.lr = 0x82DAA518;
	sub_82CB61F0(ctx, base);
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
loc_82DAA52C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82daa550
	if (ctx.cr6.eq) goto loc_82DAA550;
	// lwz r10,1716(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1716);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAA550:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daa90c
	if (ctx.cr6.eq) goto loc_82DAA90C;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lwz r5,1716(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1716);
	// addi r4,r10,24704
	ctx.r4.s64 = ctx.r10.s64 + 24704;
	// bl 0x82cb61f0
	ctx.lr = 0x82DAA568;
	sub_82CB61F0(ctx, base);
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
loc_82DAA57C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82daa5a0
	if (ctx.cr6.eq) goto loc_82DAA5A0;
	// lwz r10,1720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1720);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAA5A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daa90c
	if (ctx.cr6.eq) goto loc_82DAA90C;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lwz r5,1720(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1720);
	// addi r4,r10,24704
	ctx.r4.s64 = ctx.r10.s64 + 24704;
	// bl 0x82cb61f0
	ctx.lr = 0x82DAA5B8;
	sub_82CB61F0(ctx, base);
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
loc_82DAA5CC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82daa5dc
	if (ctx.cr6.eq) goto loc_82DAA5DC;
	// lfs f0,1724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1724);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAA5DC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daa90c
	if (ctx.cr6.eq) goto loc_82DAA90C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,1724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1724);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r10,7408
	ctx.r4.s64 = ctx.r10.s64 + 7408;
	// bl 0x82cb61f0
	ctx.lr = 0x82DAA5FC;
	sub_82CB61F0(ctx, base);
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
loc_82DAA610:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82daa620
	if (ctx.cr6.eq) goto loc_82DAA620;
	// lfs f0,1728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1728);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAA620:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daa90c
	if (ctx.cr6.eq) goto loc_82DAA90C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,1728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1728);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r10,7408
	ctx.r4.s64 = ctx.r10.s64 + 7408;
	// bl 0x82cb61f0
	ctx.lr = 0x82DAA640;
	sub_82CB61F0(ctx, base);
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
loc_82DAA654:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82daa664
	if (ctx.cr6.eq) goto loc_82DAA664;
	// lfs f0,1732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAA664:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daa90c
	if (ctx.cr6.eq) goto loc_82DAA90C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,1732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r10,7408
	ctx.r4.s64 = ctx.r10.s64 + 7408;
	// bl 0x82cb61f0
	ctx.lr = 0x82DAA684;
	sub_82CB61F0(ctx, base);
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
loc_82DAA698:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82daa6bc
	if (ctx.cr6.eq) goto loc_82DAA6BC;
	// lwz r10,1736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1736);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAA6BC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daa90c
	if (ctx.cr6.eq) goto loc_82DAA90C;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lwz r5,1736(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1736);
	// addi r4,r10,24704
	ctx.r4.s64 = ctx.r10.s64 + 24704;
	// bl 0x82cb61f0
	ctx.lr = 0x82DAA6D4;
	sub_82CB61F0(ctx, base);
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
loc_82DAA6E8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82daa6f8
	if (ctx.cr6.eq) goto loc_82DAA6F8;
	// lfs f0,1740(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAA6F8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daa90c
	if (ctx.cr6.eq) goto loc_82DAA90C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,1740(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r10,7408
	ctx.r4.s64 = ctx.r10.s64 + 7408;
	// bl 0x82cb61f0
	ctx.lr = 0x82DAA718;
	sub_82CB61F0(ctx, base);
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
loc_82DAA72C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82daa750
	if (ctx.cr6.eq) goto loc_82DAA750;
	// lwz r10,1744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1744);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAA750:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daa90c
	if (ctx.cr6.eq) goto loc_82DAA90C;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lwz r5,1744(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1744);
	// addi r4,r10,24704
	ctx.r4.s64 = ctx.r10.s64 + 24704;
	// bl 0x82cb61f0
	ctx.lr = 0x82DAA768;
	sub_82CB61F0(ctx, base);
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
loc_82DAA77C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82daa78c
	if (ctx.cr6.eq) goto loc_82DAA78C;
	// lfs f0,1748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1748);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAA78C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daa90c
	if (ctx.cr6.eq) goto loc_82DAA90C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,1748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1748);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r10,7408
	ctx.r4.s64 = ctx.r10.s64 + 7408;
	// bl 0x82cb61f0
	ctx.lr = 0x82DAA7AC;
	sub_82CB61F0(ctx, base);
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
loc_82DAA7C0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82daa7d0
	if (ctx.cr6.eq) goto loc_82DAA7D0;
	// lfs f0,1752(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1752);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAA7D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daa90c
	if (ctx.cr6.eq) goto loc_82DAA90C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,1752(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1752);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r10,7408
	ctx.r4.s64 = ctx.r10.s64 + 7408;
	// bl 0x82cb61f0
	ctx.lr = 0x82DAA7F0;
	sub_82CB61F0(ctx, base);
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
loc_82DAA804:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82daa814
	if (ctx.cr6.eq) goto loc_82DAA814;
	// lfs f0,1756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1756);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAA814:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daa90c
	if (ctx.cr6.eq) goto loc_82DAA90C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,1756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1756);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r10,7408
	ctx.r4.s64 = ctx.r10.s64 + 7408;
	// bl 0x82cb61f0
	ctx.lr = 0x82DAA834;
	sub_82CB61F0(ctx, base);
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
loc_82DAA848:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82daa858
	if (ctx.cr6.eq) goto loc_82DAA858;
	// lfs f0,1760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAA858:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daa90c
	if (ctx.cr6.eq) goto loc_82DAA90C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,1760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1760);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r10,7408
	ctx.r4.s64 = ctx.r10.s64 + 7408;
	// bl 0x82cb61f0
	ctx.lr = 0x82DAA878;
	sub_82CB61F0(ctx, base);
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
loc_82DAA88C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82daa8b0
	if (ctx.cr6.eq) goto loc_82DAA8B0;
	// lwz r10,1824(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1824);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAA8B0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daa90c
	if (ctx.cr6.eq) goto loc_82DAA90C;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lwz r5,1824(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1824);
	// addi r4,r10,24704
	ctx.r4.s64 = ctx.r10.s64 + 24704;
	// bl 0x82cb61f0
	ctx.lr = 0x82DAA8C8;
	sub_82CB61F0(ctx, base);
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
loc_82DAA8DC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82daa8ec
	if (ctx.cr6.eq) goto loc_82DAA8EC;
	// lfs f0,1828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1828);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAA8EC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daa90c
	if (ctx.cr6.eq) goto loc_82DAA90C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,1828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1828);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r10,7408
	ctx.r4.s64 = ctx.r10.s64 + 7408;
	// bl 0x82cb61f0
	ctx.lr = 0x82DAA90C;
	sub_82CB61F0(ctx, base);
loc_82DAA90C:
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
loc_82DAA920:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAA934"))) PPC_WEAK_FUNC(sub_82DAA934);
PPC_FUNC_IMPL(__imp__sub_82DAA934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAA938"))) PPC_WEAK_FUNC(sub_82DAA938);
PPC_FUNC_IMPL(__imp__sub_82DAA938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lfs f29,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bgt cr6,0x82daa970
	if (ctx.cr6.gt) goto loc_82DAA970;
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bne cr6,0x82daa980
	if (!ctx.cr6.eq) goto loc_82DAA980;
loc_82DAA970:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x82daaa08
	goto loc_82DAAA08;
loc_82DAA980:
	// fmuls f30,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fdivs f13,f2,f3
	ctx.f13.f64 = double(float(ctx.f2.f64 / ctx.f3.f64));
	// lfs f0,-18292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18292);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f30,f29
	ctx.f31.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82cb4940
	ctx.lr = 0x82DAA99C;
	sub_82CB4940(ctx, base);
	// fmuls f13,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f0,6484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6484);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f0,f12,f30,f29
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f30.f64 - ctx.f29.f64)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmsubs f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82daa9d8
	if (!ctx.cr6.lt) goto loc_82DAA9D8;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_82DAA9D8:
	// fsqrts f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82daaa04
	if (ctx.cr6.lt) goto loc_82DAAA04;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-17716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17716);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82daaa08
	if (!ctx.cr6.gt) goto loc_82DAAA08;
loc_82DAAA04:
	// stfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82DAAA08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAAA2C"))) PPC_WEAK_FUNC(sub_82DAAA2C);
PPC_FUNC_IMPL(__imp__sub_82DAAA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAAA30"))) PPC_WEAK_FUNC(sub_82DAAA30);
PPC_FUNC_IMPL(__imp__sub_82DAAA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82DAAA38;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lfs f0,840(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 840);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82cb4c00
	ctx.lr = 0x82DAAA6C;
	sub_82CB4C00(ctx, base);
	// fdivs f13,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lfs f0,16608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16608);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82cb5128
	ctx.lr = 0x82DAAA84;
	sub_82CB5128(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,836(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f31.f64));
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f6,f12,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmsubs f7,f13,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 - ctx.f0.f64));
	// fmadds f11,f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f12,f10,f12,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f10,f9,f13,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f13,f8,f13,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,-18204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18204);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAAB24"))) PPC_WEAK_FUNC(sub_82DAAB24);
PPC_FUNC_IMPL(__imp__sub_82DAAB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAAB28"))) PPC_WEAK_FUNC(sub_82DAAB28);
PPC_FUNC_IMPL(__imp__sub_82DAAB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,1724(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1724, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAAB3C"))) PPC_WEAK_FUNC(sub_82DAAB3C);
PPC_FUNC_IMPL(__imp__sub_82DAAB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAAB40"))) PPC_WEAK_FUNC(sub_82DAAB40);
PPC_FUNC_IMPL(__imp__sub_82DAAB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10000, ctx.xer);
	// bge cr6,0x82daab68
	if (!ctx.cr6.lt) goto loc_82DAAB68;
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// b 0x82daab74
	goto loc_82DAAB74;
loc_82DAAB68:
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// ble cr6,0x82daab78
	if (!ctx.cr6.gt) goto loc_82DAAB78;
	// li r11,1000
	ctx.r11.s64 = 1000;
loc_82DAAB74:
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
loc_82DAAB78:
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f1,-16744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16744);
	// stw r10,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r10.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,7712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7712);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,10764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10764);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82DAABC4;
	sub_82CB59B0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// lfd f0,848(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 848);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,916(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 916, temp.u32);
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

__attribute__((alias("__imp__sub_82DAABF4"))) PPC_WEAK_FUNC(sub_82DAABF4);
PPC_FUNC_IMPL(__imp__sub_82DAABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAABF8"))) PPC_WEAK_FUNC(sub_82DAABF8);
PPC_FUNC_IMPL(__imp__sub_82DAABF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10000, ctx.xer);
	// bge cr6,0x82daac20
	if (!ctx.cr6.lt) goto loc_82DAAC20;
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// b 0x82daac2c
	goto loc_82DAAC2C;
loc_82DAAC20:
	// cmpwi cr6,r11,2000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2000, ctx.xer);
	// ble cr6,0x82daac30
	if (!ctx.cr6.gt) goto loc_82DAAC30;
	// li r11,2000
	ctx.r11.s64 = 2000;
loc_82DAAC2C:
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
loc_82DAAC30:
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f1,-16744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16744);
	// stw r10,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r10.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,7712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7712);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,10764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10764);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82DAAC7C;
	sub_82CB59B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,980(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f12,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// ble cr6,0x82daacb8
	if (!ctx.cr6.gt) goto loc_82DAACB8;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r10,r31,768
	ctx.r10.s64 = ctx.r31.s64 + 768;
loc_82DAACA0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82daaca0
	if (!ctx.cr6.eq) goto loc_82DAACA0;
loc_82DAACB8:
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82daacf4
	if (ctx.cr6.eq) goto loc_82DAACF4;
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82daad00
	if (!ctx.cr6.gt) goto loc_82DAAD00;
loc_82DAACF4:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// b 0x82daad04
	goto loc_82DAAD04;
loc_82DAAD00:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_82DAAD04:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfd f13,848(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 848);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,920(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
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

__attribute__((alias("__imp__sub_82DAAD30"))) PPC_WEAK_FUNC(sub_82DAAD30);
PPC_FUNC_IMPL(__imp__sub_82DAAD30) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82daad64
	if (ctx.cr6.lt) goto loc_82DAAD64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,6708(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82daad68
	if (!ctx.cr6.gt) goto loc_82DAAD68;
loc_82DAAD64:
	// stfs f13,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
loc_82DAAD68:
	// lwz r10,1840(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1840);
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1740(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r11,268
	ctx.r3.s64 = ctx.r11.s64 + 268;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// stfs f0,1748(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1748, temp.u32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfs f3,860(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 860);
	ctx.f3.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f2,856(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	ctx.f2.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f4,f0
	ctx.f4.f64 = double(float(ctx.f0.f64));
	// bl 0x82df3758
	ctx.lr = 0x82DAADA8;
	sub_82DF3758(ctx, base);
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
}

__attribute__((alias("__imp__sub_82DAADBC"))) PPC_WEAK_FUNC(sub_82DAADBC);
PPC_FUNC_IMPL(__imp__sub_82DAADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAADC0"))) PPC_WEAK_FUNC(sub_82DAADC0);
PPC_FUNC_IMPL(__imp__sub_82DAADC0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82daaddc
	if (!ctx.cr6.eq) goto loc_82DAADDC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DAADDC:
	// addi r3,r11,268
	ctx.r3.s64 = ctx.r11.s64 + 268;
	// bl 0x82df3d08
	ctx.lr = 0x82DAADE4;
	sub_82DF3D08(ctx, base);
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
}

__attribute__((alias("__imp__sub_82DAADF8"))) PPC_WEAK_FUNC(sub_82DAADF8);
PPC_FUNC_IMPL(__imp__sub_82DAADF8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82daae18
	if (!ctx.cr6.eq) goto loc_82DAAE18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DAAE18:
	// addi r31,r11,268
	ctx.r31.s64 = ctx.r11.s64 + 268;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df3270
	ctx.lr = 0x82DAAE28;
	sub_82DF3270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df41a0
	ctx.lr = 0x82DAAE30;
	sub_82DF41A0(ctx, base);
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

__attribute__((alias("__imp__sub_82DAAE48"))) PPC_WEAK_FUNC(sub_82DAAE48);
PPC_FUNC_IMPL(__imp__sub_82DAAE48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82daae58
	if (!ctx.cr6.eq) goto loc_82DAAE58;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAAE58:
	// b 0x82daa248
	sub_82DAA248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAAE5C"))) PPC_WEAK_FUNC(sub_82DAAE5C);
PPC_FUNC_IMPL(__imp__sub_82DAAE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAAE60"))) PPC_WEAK_FUNC(sub_82DAAE60);
PPC_FUNC_IMPL(__imp__sub_82DAAE60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82daae70
	if (!ctx.cr6.eq) goto loc_82DAAE70;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAAE70:
	// b 0x82daa478
	sub_82DAA478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAAE74"))) PPC_WEAK_FUNC(sub_82DAAE74);
PPC_FUNC_IMPL(__imp__sub_82DAAE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAAE78"))) PPC_WEAK_FUNC(sub_82DAAE78);
PPC_FUNC_IMPL(__imp__sub_82DAAE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bge cr6,0x82daae88
	if (!ctx.cr6.lt) goto loc_82DAAE88;
	// neg r11,r4
	ctx.r11.s64 = -ctx.r4.s64;
loc_82DAAE88:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DAAE94:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82daaea4
	if (ctx.cr6.eq) goto loc_82DAAEA4;
	// fmuls f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_82DAAEA4:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82daaeb8
	if (ctx.cr6.eq) goto loc_82DAAEB8;
	// fmuls f1,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// b 0x82daae94
	goto loc_82DAAE94;
loc_82DAAEB8:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82daaec8
	if (!ctx.cr6.lt) goto loc_82DAAEC8;
	// fdivs f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// blr 
	return;
loc_82DAAEC8:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAAED0"))) PPC_WEAK_FUNC(sub_82DAAED0);
PPC_FUNC_IMPL(__imp__sub_82DAAED0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82daae78
	sub_82DAAE78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAAED4"))) PPC_WEAK_FUNC(sub_82DAAED4);
PPC_FUNC_IMPL(__imp__sub_82DAAED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAAED8"))) PPC_WEAK_FUNC(sub_82DAAED8);
PPC_FUNC_IMPL(__imp__sub_82DAAED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DAAEE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10000, ctx.xer);
	// bge cr6,0x82daaf00
	if (!ctx.cr6.lt) goto loc_82DAAF00;
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// b 0x82daaf0c
	goto loc_82DAAF0C;
loc_82DAAF00:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82daaf10
	if (!ctx.cr6.gt) goto loc_82DAAF10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DAAF0C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82DAAF10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1716(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1716, ctx.r11.u32);
	// bl 0x82daab40
	ctx.lr = 0x82DAAF24;
	sub_82DAAB40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82daabf8
	ctx.lr = 0x82DAAF34;
	sub_82DAABF8(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAAF48"))) PPC_WEAK_FUNC(sub_82DAAF48);
PPC_FUNC_IMPL(__imp__sub_82DAAF48) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,-10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10000, ctx.xer);
	// bge cr6,0x82daaf78
	if (!ctx.cr6.lt) goto loc_82DAAF78;
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// b 0x82daaf84
	goto loc_82DAAF84;
loc_82DAAF78:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82daaf88
	if (!ctx.cr6.gt) goto loc_82DAAF88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DAAF84:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82DAAF88:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f1,-16744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16744);
	// stw r10,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-18044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18044);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,10764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10764);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82DAAFCC;
	sub_82CB59B0(ctx, base);
	// lwz r11,1840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f3,f0
	ctx.f3.f64 = double(float(ctx.f0.f64));
	// bl 0x82daa938
	ctx.lr = 0x82DAAFF8;
	sub_82DAA938(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
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

__attribute__((alias("__imp__sub_82DAB024"))) PPC_WEAK_FUNC(sub_82DAB024);
PPC_FUNC_IMPL(__imp__sub_82DAB024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAB028"))) PPC_WEAK_FUNC(sub_82DAB028);
PPC_FUNC_IMPL(__imp__sub_82DAB028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,-10000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -10000, ctx.xer);
	// bge cr6,0x82dab044
	if (!ctx.cr6.lt) goto loc_82DAB044;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// b 0x82dab050
	goto loc_82DAB050;
loc_82DAB044:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82dab050
	if (!ctx.cr6.gt) goto loc_82DAB050;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82DAB050:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lwz r10,1840(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1840);
	// addi r6,r3,320
	ctx.r6.s64 = ctx.r3.s64 + 320;
	// lfs f2,1828(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1828);
	ctx.f2.f64 = double(temp.f32);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// stw r4,1824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1824, ctx.r4.u32);
	// addi r10,r3,316
	ctx.r10.s64 = ctx.r3.s64 + 316;
	// addi r9,r3,312
	ctx.r9.s64 = ctx.r3.s64 + 312;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r3,308
	ctx.r8.s64 = ctx.r3.s64 + 308;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// addi r7,r3,304
	ctx.r7.s64 = ctx.r3.s64 + 304;
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,7712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7712);
	ctx.f0.f64 = double(temp.f32);
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f1,324(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// bl 0x82daaa30
	ctx.lr = 0x82DAB0B0;
	sub_82DAAA30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAB0C0"))) PPC_WEAK_FUNC(sub_82DAB0C0);
PPC_FUNC_IMPL(__imp__sub_82DAB0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82DAB0C8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6ae0
	ctx.lr = 0x82DAB0D0;
	__savefpr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82dab104
	if (ctx.cr6.lt) goto loc_82DAB104;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,14068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14068);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dab108
	if (!ctx.cr6.gt) goto loc_82DAB108;
loc_82DAB104:
	// stfs f13,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
loc_82DAB108:
	// lwz r11,980(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 980);
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1728(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1728, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dab1f8
	if (!ctx.cr6.gt) goto loc_82DAB1F8;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f27.f64 = double(temp.f32);
	// addi r31,r30,1016
	ctx.r31.s64 = ctx.r30.s64 + 1016;
	// lfd f28,-16744(r8)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r8.u32 + -16744);
	// lfs f29,10764(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10764);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 864);
	ctx.f30.f64 = double(temp.f32);
	// lfs f26,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f26.f64 = double(temp.f32);
loc_82DAB14C:
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// beq cr6,0x82dab1e4
	if (ctx.cr6.eq) goto loc_82DAB1E4;
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f2,f31,f29
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82DAB170;
	sub_82CB59B0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,-248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -248, temp.u32);
	// lfs f0,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// fmsubs f0,f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f31.f64));
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82DAB1A0;
	sub_82CB59B0(ctx, base);
	// lwz r11,1840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1840);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f3,f0
	ctx.f3.f64 = double(float(ctx.f0.f64));
	// bl 0x82daa938
	ctx.lr = 0x82DAB1CC;
	sub_82DAA938(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// fsubs f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// stfs f0,-680(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -680, temp.u32);
	// or r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82DAB1E4:
	// lwz r11,980(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 980);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dab14c
	if (ctx.cr6.lt) goto loc_82DAB14C;
loc_82DAB1F8:
	// addi r4,r30,1716
	ctx.r4.s64 = ctx.r30.s64 + 1716;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82daabf8
	ctx.lr = 0x82DAB204;
	sub_82DAABF8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b2c
	ctx.lr = 0x82DAB214;
	__restfpr_26(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAB218"))) PPC_WEAK_FUNC(sub_82DAB218);
PPC_FUNC_IMPL(__imp__sub_82DAB218) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f12,7508(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7508);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7712);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,6708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82dab278
	if (ctx.cr6.lt) goto loc_82DAB278;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dab27c
	if (!ctx.cr6.gt) goto loc_82DAB27C;
loc_82DAB278:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82DAB27C:
	// lwz r10,1840(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfs f4,880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 880);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfs f3,876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 876);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f2,872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 872);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 868);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f5,f0
	ctx.f5.f64 = double(float(ctx.f0.f64));
	// bl 0x82df39a8
	ctx.lr = 0x82DAB2C0;
	sub_82DF39A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab0c0
	ctx.lr = 0x82DAB2CC;
	sub_82DAB0C0(ctx, base);
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

__attribute__((alias("__imp__sub_82DAB2E4"))) PPC_WEAK_FUNC(sub_82DAB2E4);
PPC_FUNC_IMPL(__imp__sub_82DAB2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAB2E8"))) PPC_WEAK_FUNC(sub_82DAB2E8);
PPC_FUNC_IMPL(__imp__sub_82DAB2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82dab30c
	if (ctx.cr6.lt) goto loc_82DAB30C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dab310
	if (!ctx.cr6.gt) goto loc_82DAB310;
loc_82DAB30C:
	// stfs f13,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
loc_82DAB310:
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1732(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1732, temp.u32);
	// b 0x82dab0c0
	sub_82DAB0C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAB31C"))) PPC_WEAK_FUNC(sub_82DAB31C);
PPC_FUNC_IMPL(__imp__sub_82DAB31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAB320"))) PPC_WEAK_FUNC(sub_82DAB320);
PPC_FUNC_IMPL(__imp__sub_82DAB320) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82dab350
	if (ctx.cr6.lt) goto loc_82DAB350;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7644(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7644);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dab354
	if (!ctx.cr6.gt) goto loc_82DAB354;
loc_82DAB350:
	// stfs f13,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
loc_82DAB354:
	// lwz r11,1840(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1840);
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1740(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1740, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stfs f0,1352(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1352, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82dab39c
	if (!ctx.cr6.eq) goto loc_82DAB39C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82DAB39C:
	// addi r4,r3,1716
	ctx.r4.s64 = ctx.r3.s64 + 1716;
	// stw r11,1388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1388, ctx.r11.u32);
	// bl 0x82daad30
	ctx.lr = 0x82DAB3A8;
	sub_82DAAD30(ctx, base);
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
}

__attribute__((alias("__imp__sub_82DAB3BC"))) PPC_WEAK_FUNC(sub_82DAB3BC);
PPC_FUNC_IMPL(__imp__sub_82DAB3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAB3C0"))) PPC_WEAK_FUNC(sub_82DAB3C0);
PPC_FUNC_IMPL(__imp__sub_82DAB3C0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82dab3fc
	if (ctx.cr6.lt) goto loc_82DAB3FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dab400
	if (!ctx.cr6.gt) goto loc_82DAB400;
loc_82DAB3FC:
	// stfs f13,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
loc_82DAB400:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1752(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1752, temp.u32);
	// lfs f13,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7712);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-15792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15792);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb5128
	ctx.lr = 0x82DAB42C;
	sub_82CB5128(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,896(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 896, temp.u32);
	// bl 0x82cb4940
	ctx.lr = 0x82DAB440;
	sub_82CB4940(ctx, base);
	// lwz r4,1712(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x82daae78
	ctx.lr = 0x82DAB44C;
	sub_82DAAE78(ctx, base);
	// stfs f1,956(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 956, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAB46C"))) PPC_WEAK_FUNC(sub_82DAB46C);
PPC_FUNC_IMPL(__imp__sub_82DAB46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAB470"))) PPC_WEAK_FUNC(sub_82DAB470);
PPC_FUNC_IMPL(__imp__sub_82DAB470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,40(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82dab494
	if (ctx.cr6.lt) goto loc_82DAB494;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dab498
	if (!ctx.cr6.gt) goto loc_82DAB498;
loc_82DAB494:
	// stfs f13,40(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
loc_82DAB498:
	// lfs f0,40(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1756(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1756, temp.u32);
	// b 0x82dab218
	sub_82DAB218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAB4A4"))) PPC_WEAK_FUNC(sub_82DAB4A4);
PPC_FUNC_IMPL(__imp__sub_82DAB4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAB4A8"))) PPC_WEAK_FUNC(sub_82DAB4A8);
PPC_FUNC_IMPL(__imp__sub_82DAB4A8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,44(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,7984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7984);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82dab4e4
	if (ctx.cr6.lt) goto loc_82DAB4E4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dab4e8
	if (!ctx.cr6.gt) goto loc_82DAB4E8;
loc_82DAB4E4:
	// stfs f13,44(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
loc_82DAB4E8:
	// addi r30,r31,1716
	ctx.r30.s64 = ctx.r31.s64 + 1716;
	// lfs f0,44(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,1760(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1760, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82daaf48
	ctx.lr = 0x82DAB500;
	sub_82DAAF48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab0c0
	ctx.lr = 0x82DAB50C;
	sub_82DAB0C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82DAB528"))) PPC_WEAK_FUNC(sub_82DAB528);
PPC_FUNC_IMPL(__imp__sub_82DAB528) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7984);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82dab554
	if (ctx.cr6.lt) goto loc_82DAB554;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8044);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82dab558
	if (!ctx.cr6.gt) goto loc_82DAB558;
loc_82DAB554:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82DAB558:
	// lwz r4,1824(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1824);
	// stfs f1,1828(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1828, temp.u32);
	// bl 0x82dab028
	ctx.lr = 0x82DAB564;
	sub_82DAB028(ctx, base);
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
}

__attribute__((alias("__imp__sub_82DAB578"))) PPC_WEAK_FUNC(sub_82DAB578);
PPC_FUNC_IMPL(__imp__sub_82DAB578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82DAB580;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r25,-10000
	ctx.r25.s64 = -10000;
	// addi r29,r31,1840
	ctx.r29.s64 = ctx.r31.s64 + 1840;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-2602
	ctx.r11.s64 = -2602;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18240);
	ctx.f0.f64 = double(temp.f32);
	// li r11,200
	ctx.r11.s64 = 200;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18248);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,-736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -736);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// beq cr6,0x82dab618
	if (ctx.cr6.eq) goto loc_82DAB618;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,1244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1244);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82DAB618:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f31,1820(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1820, temp.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r31,1716
	ctx.r30.s64 = ctx.r31.s64 + 1716;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,48
	ctx.r5.s64 = 48;
	// lfs f0,-15848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15848);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,1816(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1816, temp.u32);
	// stw r27,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r27.u32);
	// stb r27,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r27.u8);
	// lfs f13,-17720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17720);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1828(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1828, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82DAB654;
	sub_82CB1160(ctx, base);
	// addi r26,r31,1764
	ctx.r26.s64 = ctx.r31.s64 + 1764;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82DAB668;
	sub_82CB1160(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r31,268
	ctx.r29.s64 = ctx.r31.s64 + 268;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82df5070
	ctx.lr = 0x82DAB68C;
	sub_82DF5070(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dab6a8
	if (ctx.cr6.eq) goto loc_82DAB6A8;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82DAB6A8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1272(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1272);
	// bl 0x82df3270
	ctx.lr = 0x82DAB6B8;
	sub_82DF3270(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r10,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r10.u32);
	// lfd f1,-15776(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -15776);
	// bl 0x82cb4db8
	ctx.lr = 0x82DAB6CC;
	sub_82CB4DB8(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f1,-18376(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18376);
	// frsp f30,f0
	ctx.f30.f64 = double(float(ctx.f0.f64));
	// bl 0x82cb4db8
	ctx.lr = 0x82DAB6E0;
	sub_82CB4DB8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r31,1712
	ctx.r10.s64 = ctx.r31.s64 + 1712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fdivs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// bl 0x82df41a0
	ctx.lr = 0x82DAB708;
	sub_82DF41A0(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dab75c
	if (!ctx.cr6.gt) goto loc_82DAB75C;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82DAB71C:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DAB740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dab8e0
	if (!ctx.cr6.eq) goto loc_82DAB8E0;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dab71c
	if (ctx.cr6.lt) goto loc_82DAB71C;
loc_82DAB75C:
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82DAB76C;
	sub_82CB1160(ctx, base);
	// lwz r11,1832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// lfs f0,1836(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// stb r27,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r27.u8);
	// stfs f0,1828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1828, temp.u32);
	// stw r11,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10000, ctx.xer);
	// bge cr6,0x82dab794
	if (!ctx.cr6.lt) goto loc_82DAB794;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// b 0x82dab7a0
	goto loc_82DAB7A0;
loc_82DAB794:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dab7a0
	if (!ctx.cr6.gt) goto loc_82DAB7A0;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82DAB7A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82daab40
	ctx.lr = 0x82DAB7B4;
	sub_82DAAB40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82daabf8
	ctx.lr = 0x82DAB7C0;
	sub_82DAABF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82daaf48
	ctx.lr = 0x82DAB7CC;
	sub_82DAAF48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab0c0
	ctx.lr = 0x82DAB7D8;
	sub_82DAB0C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82dab7fc
	if (ctx.cr6.lt) goto loc_82DAB7FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dab800
	if (!ctx.cr6.gt) goto loc_82DAB800;
loc_82DAB7FC:
	// stfs f13,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
loc_82DAB800:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,1732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1732, temp.u32);
	// bl 0x82dab0c0
	ctx.lr = 0x82DAB814;
	sub_82DAB0C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82daab40
	ctx.lr = 0x82DAB820;
	sub_82DAAB40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab320
	ctx.lr = 0x82DAB82C;
	sub_82DAB320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82daabf8
	ctx.lr = 0x82DAB838;
	sub_82DAABF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82daad30
	ctx.lr = 0x82DAB844;
	sub_82DAAD30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab3c0
	ctx.lr = 0x82DAB850;
	sub_82DAB3C0(ctx, base);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82dab864
	if (!ctx.cr6.lt) goto loc_82DAB864;
	// stfs f31,40(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// b 0x82dab878
	goto loc_82DAB878;
loc_82DAB864:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dab878
	if (!ctx.cr6.gt) goto loc_82DAB878;
	// stfs f13,40(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
loc_82DAB878:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,1756(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1756, temp.u32);
	// bl 0x82dab218
	ctx.lr = 0x82DAB88C;
	sub_82DAB218(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab4a8
	ctx.lr = 0x82DAB898;
	sub_82DAB4A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1824(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1824);
	// bl 0x82dab028
	ctx.lr = 0x82DAB8A4;
	sub_82DAB028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1828(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1828);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7984);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82dab8c8
	if (ctx.cr6.lt) goto loc_82DAB8C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8044);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dab8cc
	if (!ctx.cr6.gt) goto loc_82DAB8CC;
loc_82DAB8C8:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82DAB8CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1824(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1824);
	// stfs f0,1828(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1828, temp.u32);
	// bl 0x82dab028
	ctx.lr = 0x82DAB8DC;
	sub_82DAB028(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAB8E0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAB8F0"))) PPC_WEAK_FUNC(sub_82DAB8F0);
PPC_FUNC_IMPL(__imp__sub_82DAB8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82DAB8F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82dabb6c
	if (ctx.cr6.eq) goto loc_82DABB6C;
	// lbz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dabb38
	if (ctx.cr6.eq) goto loc_82DABB38;
	// lwz r11,1764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1764);
	// addi r30,r31,1716
	ctx.r30.s64 = ctx.r31.s64 + 1716;
	// lwz r10,1716(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82dab944
	if (ctx.cr6.eq) goto loc_82DAB944;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82daaed8
	ctx.lr = 0x82DAB944;
	sub_82DAAED8(ctx, base);
loc_82DAB944:
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lwz r10,1720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82dab964
	if (ctx.cr6.eq) goto loc_82DAB964;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82daaf48
	ctx.lr = 0x82DAB964;
	sub_82DAAF48(ctx, base);
loc_82DAB964:
	// lfs f0,1772(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1724(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1724);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82dab978
	if (ctx.cr6.eq) goto loc_82DAB978;
	// stfs f0,1724(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1724, temp.u32);
loc_82DAB978:
	// lfs f0,1776(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1728(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1728);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82dab998
	if (ctx.cr6.eq) goto loc_82DAB998;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,1728(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1728, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab0c0
	ctx.lr = 0x82DAB998;
	sub_82DAB0C0(ctx, base);
loc_82DAB998:
	// lfs f0,1780(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1732(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82dab9e8
	if (ctx.cr6.eq) goto loc_82DAB9E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,1732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1732, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82dab9d0
	if (ctx.cr6.lt) goto loc_82DAB9D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dab9d4
	if (!ctx.cr6.gt) goto loc_82DAB9D4;
loc_82DAB9D0:
	// stfs f13,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
loc_82DAB9D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,1732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1732, temp.u32);
	// bl 0x82dab0c0
	ctx.lr = 0x82DAB9E8;
	sub_82DAB0C0(ctx, base);
loc_82DAB9E8:
	// lwz r11,1784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	// lwz r10,1736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82daba08
	if (ctx.cr6.eq) goto loc_82DABA08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82daab40
	ctx.lr = 0x82DABA08;
	sub_82DAAB40(ctx, base);
loc_82DABA08:
	// lfs f0,1788(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1788);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1740(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82daba28
	if (ctx.cr6.eq) goto loc_82DABA28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,1740(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1740, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab320
	ctx.lr = 0x82DABA28;
	sub_82DAB320(ctx, base);
loc_82DABA28:
	// lwz r11,1792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1792);
	// lwz r10,1744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82daba48
	if (ctx.cr6.eq) goto loc_82DABA48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82daabf8
	ctx.lr = 0x82DABA48;
	sub_82DAABF8(ctx, base);
loc_82DABA48:
	// lfs f0,1796(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1748(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82daba68
	if (ctx.cr6.eq) goto loc_82DABA68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,1748(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1748, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82daad30
	ctx.lr = 0x82DABA68;
	sub_82DAAD30(ctx, base);
loc_82DABA68:
	// lfs f0,1800(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1800);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1752(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82daba88
	if (ctx.cr6.eq) goto loc_82DABA88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,1752(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1752, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab3c0
	ctx.lr = 0x82DABA88;
	sub_82DAB3C0(ctx, base);
loc_82DABA88:
	// lfs f0,1804(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1756(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82dabad8
	if (ctx.cr6.eq) goto loc_82DABAD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,1756(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1756, temp.u32);
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82dabac0
	if (ctx.cr6.lt) goto loc_82DABAC0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dabac4
	if (!ctx.cr6.gt) goto loc_82DABAC4;
loc_82DABAC0:
	// stfs f13,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
loc_82DABAC4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,1756(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1756, temp.u32);
	// bl 0x82dab218
	ctx.lr = 0x82DABAD8;
	sub_82DAB218(ctx, base);
loc_82DABAD8:
	// lfs f0,1808(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1760(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1760);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82dabaf8
	if (ctx.cr6.eq) goto loc_82DABAF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,1760(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1760, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab4a8
	ctx.lr = 0x82DABAF8;
	sub_82DAB4A8(ctx, base);
loc_82DABAF8:
	// lwz r4,1832(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// lwz r11,1824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1824);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82dabb14
	if (ctx.cr6.eq) goto loc_82DABB14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r4.u32);
	// bl 0x82dab028
	ctx.lr = 0x82DABB14;
	sub_82DAB028(ctx, base);
loc_82DABB14:
	// lfs f1,1836(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,1828(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1828);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x82dabb30
	if (ctx.cr6.eq) goto loc_82DABB30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,1828(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1828, temp.u32);
	// bl 0x82dab528
	ctx.lr = 0x82DABB30;
	sub_82DAB528(ctx, base);
loc_82DABB30:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r11.u8);
loc_82DABB38:
	// lwz r11,1840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lfs f2,1820(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1820);
	ctx.f2.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82df41c8
	ctx.lr = 0x82DABB6C;
	sub_82DF41C8(ctx, base);
loc_82DABB6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DABB78"))) PPC_WEAK_FUNC(sub_82DABB78);
PPC_FUNC_IMPL(__imp__sub_82DABB78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dabb88
	if (!ctx.cr6.eq) goto loc_82DABB88;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DABB88:
	// b 0x82dab578
	sub_82DAB578(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DABB8C"))) PPC_WEAK_FUNC(sub_82DABB8C);
PPC_FUNC_IMPL(__imp__sub_82DABB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DABB90"))) PPC_WEAK_FUNC(sub_82DABB90);
PPC_FUNC_IMPL(__imp__sub_82DABB90) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dabba0
	if (!ctx.cr6.eq) goto loc_82DABBA0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DABBA0:
	// b 0x82dab8f0
	sub_82DAB8F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DABBA4"))) PPC_WEAK_FUNC(sub_82DABBA4);
PPC_FUNC_IMPL(__imp__sub_82DABBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DABBA8"))) PPC_WEAK_FUNC(sub_82DABBA8);
PPC_FUNC_IMPL(__imp__sub_82DABBA8) {
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r31,r11,20760
	ctx.r31.s64 = ctx.r11.s64 + 20760;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DABBD0;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,884
	ctx.r4.s64 = ctx.r11.s64 + 884;
	// bl 0x82da4448
	ctx.lr = 0x82DABBE0;
	sub_82DA4448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r4,-17544
	ctx.r10.s64 = ctx.r4.s64 + -17544;
	// addi r11,r11,20040
	ctx.r11.s64 = ctx.r11.s64 + 20040;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r5,-21056
	ctx.r10.s64 = ctx.r5.s64 + -21056;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r10,r6,-21000
	ctx.r10.s64 = ctx.r6.s64 + -21000;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r10,r7,-17520
	ctx.r10.s64 = ctx.r7.s64 + -17520;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,-20920
	ctx.r11.s64 = ctx.r8.s64 + -20920;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r9,-20896
	ctx.r11.s64 = ctx.r9.s64 + -20896;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,1844
	ctx.r11.s64 = 1844;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DABC78"))) PPC_WEAK_FUNC(sub_82DABC78);
PPC_FUNC_IMPL(__imp__sub_82DABC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DABC80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dabce0
	if (!ctx.cr6.gt) goto loc_82DABCE0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82DABCA8:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DABCCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dabca8
	if (ctx.cr6.lt) goto loc_82DABCA8;
loc_82DABCE0:
	// addi r11,r31,308
	ctx.r11.s64 = ctx.r31.s64 + 308;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82DABCF0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82dabcf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82DABCF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DABD14"))) PPC_WEAK_FUNC(sub_82DABD14);
PPC_FUNC_IMPL(__imp__sub_82DABD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DABD18"))) PPC_WEAK_FUNC(sub_82DABD18);
PPC_FUNC_IMPL(__imp__sub_82DABD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DABD20;
	__savegprlr_29(ctx, base);
	// lfs f11,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f0,292(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,300(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	ctx.f10.f64 = double(temp.f32);
	// beq cr6,0x82dac080
	if (ctx.cr6.eq) goto loc_82DAC080;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82dac080
	if (ctx.cr6.eq) goto loc_82DAC080;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r29,r7,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r4,r5
	ctx.r30.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f9,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// lfs f7,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f7.f64 = double(temp.f32);
loc_82DABD64:
	// add r5,r30,r4
	ctx.r5.u64 = ctx.r30.u64 + ctx.r4.u64;
	// fmr f12,f7
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f7.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82dabe74
	if (ctx.cr6.lt) goto loc_82DABE74;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r3,312
	ctx.r11.s64 = ctx.r3.s64 + 312;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DABD90:
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f4,f0
	ctx.f4.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fsel f0,f0,f0,f4
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f4.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dabdb4
	if (!ctx.cr6.gt) goto loc_82DABDB4;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
loc_82DABDB4:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82dabdc4
	if (!ctx.cr6.gt) goto loc_82DABDC4;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82DABDC4:
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fneg f4,f0
	ctx.f4.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsel f0,f0,f0,f4
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f4.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dabde8
	if (!ctx.cr6.gt) goto loc_82DABDE8;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82DABDE8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82dabdf8
	if (!ctx.cr6.gt) goto loc_82DABDF8;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82DABDF8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f4,f0
	ctx.f4.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsel f0,f0,f0,f4
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f4.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dabe1c
	if (!ctx.cr6.gt) goto loc_82DABE1C;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_82DABE1C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82dabe2c
	if (!ctx.cr6.gt) goto loc_82DABE2C;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82DABE2C:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fneg f4,f0
	ctx.f4.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsel f0,f0,f0,f4
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f4.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dabe50
	if (!ctx.cr6.gt) goto loc_82DABE50;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82DABE50:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82dabe60
	if (!ctx.cr6.gt) goto loc_82DABE60;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82DABE60:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82dabd90
	if (!ctx.cr6.eq) goto loc_82DABD90;
loc_82DABE74:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82dabedc
	if (!ctx.cr6.lt) goto loc_82DABEDC;
	// addi r11,r9,77
	ctx.r11.s64 = ctx.r9.s64 + 77;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
loc_82DABE94:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f4,f0
	ctx.f4.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsel f0,f0,f0,f4
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f4.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dabeb8
	if (!ctx.cr6.gt) goto loc_82DABEB8;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82DABEB8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82dabec8
	if (!ctx.cr6.gt) goto loc_82DABEC8;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82DABEC8:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82dabe94
	if (!ctx.cr6.eq) goto loc_82DABE94;
loc_82DABEDC:
	// fmuls f0,f8,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f13,304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// ble cr6,0x82dabef8
	if (!ctx.cr6.gt) goto loc_82DABEF8;
	// fmadds f0,f13,f6,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f0.f64));
	// b 0x82dabefc
	goto loc_82DABEFC;
loc_82DABEF8:
	// fmadds f0,f13,f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f0.f64));
loc_82DABEFC:
	// stfs f0,304(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// li r8,0
	ctx.r8.s64 = 0;
	// ble cr6,0x82dabfd4
	if (!ctx.cr6.gt) goto loc_82DABFD4;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82dabf94
	if (ctx.cr6.lt) goto loc_82DABF94;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r6,r5,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r5.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DABF30:
	// lfs f0,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lfs f13,304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f0,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f13,304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x82dabf30
	if (!ctx.cr6.eq) goto loc_82DABF30;
loc_82DABF94:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82dac070
	if (!ctx.cr6.lt) goto loc_82DAC070;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r5,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r5.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
loc_82DABFAC:
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f13,304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82dabfac
	if (!ctx.cr6.eq) goto loc_82DABFAC;
	// b 0x82dac070
	goto loc_82DAC070;
loc_82DABFD4:
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82dac03c
	if (ctx.cr6.lt) goto loc_82DAC03C;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r6,r5,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r5.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DABFF8:
	// lfs f0,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f0,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x82dabff8
	if (!ctx.cr6.eq) goto loc_82DABFF8;
loc_82DAC03C:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82dac070
	if (!ctx.cr6.lt) goto loc_82DAC070;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r5,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r5.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
loc_82DAC054:
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82dac054
	if (!ctx.cr6.eq) goto loc_82DAC054;
loc_82DAC070:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82dabd64
	if (!ctx.cr6.eq) goto loc_82DABD64;
loc_82DAC080:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAC088"))) PPC_WEAK_FUNC(sub_82DAC088);
PPC_FUNC_IMPL(__imp__sub_82DAC088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,1244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1244);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6404);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f13,268(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// bgt cr6,0x82dac18c
	if (ctx.cr6.gt) goto loc_82DAC18C;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-16152
	ctx.r12.s64 = ctx.r12.s64 + -16152;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82DAC0F8;
	case 1:
		goto loc_82DAC120;
	case 2:
		goto loc_82DAC144;
	case 3:
		goto loc_82DAC168;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-16136(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16136);
	// lwz r22,-16096(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16096);
	// lwz r22,-16060(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16060);
	// lwz r22,-16024(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16024);
loc_82DAC0F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// lfs f0,10764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10764);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfd f1,-16744(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16744);
	// bl 0x82cb59b0
	ctx.lr = 0x82DAC114;
	sub_82CB59B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// b 0x82dac18c
	goto loc_82DAC18C;
loc_82DAC120:
	// fmuls f13,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f1,272(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// lfs f0,1112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x82cb4c00
	ctx.lr = 0x82DAC138;
	sub_82CB4C00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// b 0x82dac18c
	goto loc_82DAC18C;
loc_82DAC144:
	// fmuls f13,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f1,280(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// lfs f0,1112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x82cb4c00
	ctx.lr = 0x82DAC15C;
	sub_82CB4C00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// b 0x82dac18c
	goto loc_82DAC18C;
loc_82DAC168:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// lfs f0,10764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10764);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfd f1,-16744(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16744);
	// bl 0x82cb59b0
	ctx.lr = 0x82DAC184;
	sub_82CB59B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
loc_82DAC18C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82DAC1A4"))) PPC_WEAK_FUNC(sub_82DAC1A4);
PPC_FUNC_IMPL(__imp__sub_82DAC1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAC1A8"))) PPC_WEAK_FUNC(sub_82DAC1A8);
PPC_FUNC_IMPL(__imp__sub_82DAC1A8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgt cr6,0x82dac2a8
	if (ctx.cr6.gt) goto loc_82DAC2A8;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-15908
	ctx.r12.s64 = ctx.r12.s64 + -15908;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82DAC1EC;
	case 1:
		goto loc_82DAC220;
	case 2:
		goto loc_82DAC254;
	case 3:
		goto loc_82DAC288;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-15892(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -15892);
	// lwz r22,-15840(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -15840);
	// lwz r22,-15788(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -15788);
	// lwz r22,-15736(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -15736);
loc_82DAC1EC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DAC20C;
	sub_82CB61F0(ctx, base);
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
loc_82DAC220:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DAC240;
	sub_82CB61F0(ctx, base);
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
loc_82DAC254:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DAC274;
	sub_82CB61F0(ctx, base);
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
loc_82DAC288:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,296(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DAC2A8;
	sub_82CB61F0(ctx, base);
loc_82DAC2A8:
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
}

__attribute__((alias("__imp__sub_82DAC2BC"))) PPC_WEAK_FUNC(sub_82DAC2BC);
PPC_FUNC_IMPL(__imp__sub_82DAC2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAC2C0"))) PPC_WEAK_FUNC(sub_82DAC2C0);
PPC_FUNC_IMPL(__imp__sub_82DAC2C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dac2d0
	if (!ctx.cr6.eq) goto loc_82DAC2D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAC2D0:
	// b 0x82dabc78
	sub_82DABC78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAC2D4"))) PPC_WEAK_FUNC(sub_82DAC2D4);
PPC_FUNC_IMPL(__imp__sub_82DAC2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAC2D8"))) PPC_WEAK_FUNC(sub_82DAC2D8);
PPC_FUNC_IMPL(__imp__sub_82DAC2D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dac2e8
	if (!ctx.cr6.eq) goto loc_82DAC2E8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAC2E8:
	// b 0x82dabd18
	sub_82DABD18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAC2EC"))) PPC_WEAK_FUNC(sub_82DAC2EC);
PPC_FUNC_IMPL(__imp__sub_82DAC2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAC2F0"))) PPC_WEAK_FUNC(sub_82DAC2F0);
PPC_FUNC_IMPL(__imp__sub_82DAC2F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dac300
	if (!ctx.cr6.eq) goto loc_82DAC300;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAC300:
	// b 0x82dac088
	sub_82DAC088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAC304"))) PPC_WEAK_FUNC(sub_82DAC304);
PPC_FUNC_IMPL(__imp__sub_82DAC304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAC308"))) PPC_WEAK_FUNC(sub_82DAC308);
PPC_FUNC_IMPL(__imp__sub_82DAC308) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dac318
	if (!ctx.cr6.eq) goto loc_82DAC318;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAC318:
	// b 0x82dac1a8
	sub_82DAC1A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAC31C"))) PPC_WEAK_FUNC(sub_82DAC31C);
PPC_FUNC_IMPL(__imp__sub_82DAC31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAC320"))) PPC_WEAK_FUNC(sub_82DAC320);
PPC_FUNC_IMPL(__imp__sub_82DAC320) {
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r31,r11,21088
	ctx.r31.s64 = ctx.r11.s64 + 21088;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAC348;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1124
	ctx.r4.s64 = ctx.r11.s64 + 1124;
	// bl 0x82da4448
	ctx.lr = 0x82DAC358;
	sub_82DA4448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// addi r11,r11,20896
	ctx.r11.s64 = ctx.r11.s64 + 20896;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r6,-15680
	ctx.r10.s64 = ctx.r6.s64 + -15680;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r7,-15656
	ctx.r10.s64 = ctx.r7.s64 + -15656;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,-15632
	ctx.r11.s64 = ctx.r8.s64 + -15632;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r9,-15608
	ctx.r11.s64 = ctx.r9.s64 + -15608;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,372
	ctx.r11.s64 = 372;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DAC3D8"))) PPC_WEAK_FUNC(sub_82DAC3D8);
PPC_FUNC_IMPL(__imp__sub_82DAC3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DAC3E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dac448
	if (!ctx.cr6.gt) goto loc_82DAC448;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82DAC408:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DAC42C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dac44c
	if (!ctx.cr6.eq) goto loc_82DAC44C;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dac408
	if (ctx.cr6.lt) goto loc_82DAC408;
loc_82DAC448:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAC44C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAC454"))) PPC_WEAK_FUNC(sub_82DAC454);
PPC_FUNC_IMPL(__imp__sub_82DAC454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAC458"))) PPC_WEAK_FUNC(sub_82DAC458);
PPC_FUNC_IMPL(__imp__sub_82DAC458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82DAC460;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r3,288
	ctx.r31.s64 = ctx.r3.s64 + 288;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r30,r11,1840
	ctx.r30.s64 = ctx.r11.s64 + 1840;
	// lis r29,-31909
	ctx.r29.s64 = -2091188224;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82DAC47C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dac4a4
	if (ctx.cr6.eq) goto loc_82DAC4A4;
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,150
	ctx.r6.s64 = 150;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DAC4A0;
	sub_82D861B0(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82DAC4A4:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82dac47c
	if (!ctx.cr6.eq) goto loc_82DAC47C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAC4C0"))) PPC_WEAK_FUNC(sub_82DAC4C0);
PPC_FUNC_IMPL(__imp__sub_82DAC4C0) {
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
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dac4f8
	if (ctx.cr6.eq) goto loc_82DAC4F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,296(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x82cb16f0
	ctx.lr = 0x82DAC4F8;
	sub_82CB16F0(ctx, base);
loc_82DAC4F8:
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dac510
	if (ctx.cr6.eq) goto loc_82DAC510;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,300(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// bl 0x82cb16f0
	ctx.lr = 0x82DAC510;
	sub_82CB16F0(ctx, base);
loc_82DAC510:
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

__attribute__((alias("__imp__sub_82DAC528"))) PPC_WEAK_FUNC(sub_82DAC528);
PPC_FUNC_IMPL(__imp__sub_82DAC528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82DAC530;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82dac75c
	if (ctx.cr6.eq) goto loc_82DAC75C;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// ble cr6,0x82dac568
	if (!ctx.cr6.gt) goto loc_82DAC568;
	// mullw r11,r27,r28
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r28.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82DAC568;
	sub_82CB1160(ctx, base);
loc_82DAC568:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// ble cr6,0x82dac75c
	if (!ctx.cr6.gt) goto loc_82DAC75C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r31,312
	ctx.r4.s64 = ctx.r31.s64 + 312;
	// subf r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
loc_82DAC588:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bge cr6,0x82dac75c
	if (!ctx.cr6.lt) goto loc_82DAC75C;
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82dac748
	if (ctx.cr6.eq) goto loc_82DAC748;
loc_82DAC5A4:
	// lwz r10,-8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,-24(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r10,r3
	ctx.r24.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r24,r9
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82dac5cc
	if (!ctx.cr6.gt) goto loc_82DAC5CC;
	// subf r5,r10,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82DAC5CC:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x82dac6cc
	if (ctx.cr6.lt) goto loc_82DAC6CC;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DAC5EC:
	// lfs f12,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fmadds f12,f10,f13,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f12,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f12,f11,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// fmadds f12,f10,f13,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f12,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// fmadds f12,f10,f13,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f12,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f12,f11,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// fmadds f12,f10,f13,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f11,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x82dac5ec
	if (!ctx.cr6.eq) goto loc_82DAC5EC;
loc_82DAC6CC:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82dac720
	if (!ctx.cr6.lt) goto loc_82DAC720;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r6,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r6.s64;
loc_82DAC6DC:
	// lfs f12,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmadds f12,f10,f13,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f11,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82dac6dc
	if (!ctx.cr6.eq) goto loc_82DAC6DC;
loc_82DAC720:
	// lwz r11,-8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,-8(r4)
	PPC_STORE_U32(ctx.r4.u32 + -8, ctx.r11.u32);
	// blt cr6,0x82dac73c
	if (ctx.cr6.lt) goto loc_82DAC73C;
	// stw r25,-8(r4)
	PPC_STORE_U32(ctx.r4.u32 + -8, ctx.r25.u32);
loc_82DAC73C:
	// subf r3,r5,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r5.s64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82dac5a4
	if (!ctx.cr6.eq) goto loc_82DAC5A4;
loc_82DAC748:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmpw cr6,r26,r28
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82dac588
	if (ctx.cr6.lt) goto loc_82DAC588;
loc_82DAC75C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAC768"))) PPC_WEAK_FUNC(sub_82DAC768);
PPC_FUNC_IMPL(__imp__sub_82DAC768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82DAC770;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r23,r29,324
	ctx.r23.s64 = ctx.r29.s64 + 324;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// lfs f0,276(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,280(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// beq cr6,0x82dac7b4
	if (ctx.cr6.eq) goto loc_82DAC7B4;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,1244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1244);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_82DAC7B4:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82d8ac50
	ctx.lr = 0x82DAC7BC;
	sub_82D8AC50(ctx, base);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bgt cr6,0x82dac844
	if (ctx.cr6.gt) goto loc_82DAC844;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-14372
	ctx.r12.s64 = ctx.r12.s64 + -14372;
	// rlwinm r0,r31,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r31.u64) {
	case 0:
		goto loc_82DAC7F0;
	case 1:
		goto loc_82DAC804;
	case 2:
		goto loc_82DAC818;
	case 3:
		goto loc_82DAC820;
	case 4:
		goto loc_82DAC828;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-14352(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14352);
	// lwz r22,-14332(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14332);
	// lwz r22,-14312(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14312);
	// lwz r22,-14304(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14304);
	// lwz r22,-14296(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14296);
loc_82DAC7F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7712);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f0,268(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 268, temp.u32);
	// b 0x82dac844
	goto loc_82DAC844;
loc_82DAC804:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7712);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f0,272(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 272, temp.u32);
	// b 0x82dac844
	goto loc_82DAC844;
loc_82DAC818:
	// stfs f31,276(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 276, temp.u32);
	// b 0x82dac844
	goto loc_82DAC844;
loc_82DAC820:
	// stfs f31,280(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 280, temp.u32);
	// b 0x82dac844
	goto loc_82DAC844;
loc_82DAC828:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82dac840
	if (ctx.cr6.lt) goto loc_82DAC840;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82DAC840:
	// stb r11,284(r29)
	PPC_STORE_U8(ctx.r29.u32 + 284, ctx.r11.u8);
loc_82DAC844:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// addi r30,r11,1840
	ctx.r30.s64 = ctx.r11.s64 + 1840;
	// lis r11,4194
	ctx.r11.s64 = 274857984;
	// addi r26,r1,88
	ctx.r26.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,312
	ctx.r31.s64 = ctx.r29.s64 + 312;
	// lis r28,-31909
	ctx.r28.s64 = -2091188224;
	// ori r27,r11,19923
	ctx.r27.u64 = ctx.r11.u64 | 19923;
loc_82DAC864:
	// lfs f0,-36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82dac880
	if (!ctx.cr6.eq) goto loc_82DAC880;
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dac918
	if (!ctx.cr6.eq) goto loc_82DAC918;
loc_82DAC880:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,-24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulhw r11,r11,r27
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32)) >> 32;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82dac8e4
	if (ctx.cr6.eq) goto loc_82DAC8E4;
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,345
	ctx.r6.s64 = 345;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DAC8E4;
	sub_82D861B0(ctx, base);
loc_82DAC8E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,351
	ctx.r6.s64 = 351;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r4,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r4.u32);
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DAC908;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r3.u32);
	// beq cr6,0x82dac988
	if (ctx.cr6.eq) goto loc_82DAC988;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82DAC918:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// blt cr6,0x82dac864
	if (ctx.cr6.lt) goto loc_82DAC864;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dac970
	if (ctx.cr6.eq) goto loc_82DAC970;
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// stw r22,304(r29)
	PPC_STORE_U32(ctx.r29.u32 + 304, ctx.r22.u32);
	// stw r22,308(r29)
	PPC_STORE_U32(ctx.r29.u32 + 308, ctx.r22.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dac958
	if (ctx.cr6.eq) goto loc_82DAC958;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,296(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// bl 0x82cb16f0
	ctx.lr = 0x82DAC958;
	sub_82CB16F0(ctx, base);
loc_82DAC958:
	// lwz r3,292(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dac970
	if (ctx.cr6.eq) goto loc_82DAC970;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,300(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// bl 0x82cb16f0
	ctx.lr = 0x82DAC970;
	sub_82CB16F0(ctx, base);
loc_82DAC970:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82d8ac78
	ctx.lr = 0x82DAC978;
	sub_82D8AC78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82DAC988:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82d8ac78
	ctx.lr = 0x82DAC990;
	sub_82D8AC78(ctx, base);
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAC9A0"))) PPC_WEAK_FUNC(sub_82DAC9A0);
PPC_FUNC_IMPL(__imp__sub_82DAC9A0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x82dacb28
	if (ctx.cr6.gt) goto loc_82DACB28;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-13868
	ctx.r12.s64 = ctx.r12.s64 + -13868;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82DAC9E8;
	case 1:
		goto loc_82DACA2C;
	case 2:
		goto loc_82DACA70;
	case 3:
		goto loc_82DACAA4;
	case 4:
		goto loc_82DACAD8;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-13848(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13848);
	// lwz r22,-13780(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13780);
	// lwz r22,-13712(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13712);
	// lwz r22,-13660(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13660);
	// lwz r22,-13608(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13608);
loc_82DAC9E8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r10,1916
	ctx.r4.s64 = ctx.r10.s64 + 1916;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DACA18;
	sub_82CB61F0(ctx, base);
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
loc_82DACA2C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r10,1916
	ctx.r4.s64 = ctx.r10.s64 + 1916;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DACA5C;
	sub_82CB61F0(ctx, base);
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
loc_82DACA70:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DACA90;
	sub_82CB61F0(ctx, base);
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
loc_82DACAA4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DACAC4;
	sub_82CB61F0(ctx, base);
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
loc_82DACAD8:
	// lbz r10,284(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 284);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82dacaf0
	if (ctx.cr6.eq) goto loc_82DACAF0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82dacaf8
	goto loc_82DACAF8;
loc_82DACAF0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82DACAF8:
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lbz r11,284(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dacb14
	if (ctx.cr6.eq) goto loc_82DACB14;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,1912
	ctx.r5.s64 = ctx.r11.s64 + 1912;
	// b 0x82dacb1c
	goto loc_82DACB1C;
loc_82DACB14:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,1908
	ctx.r5.s64 = ctx.r11.s64 + 1908;
loc_82DACB1C:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-18112
	ctx.r4.s64 = ctx.r11.s64 + -18112;
	// bl 0x82cb61f0
	ctx.lr = 0x82DACB28;
	sub_82CB61F0(ctx, base);
loc_82DACB28:
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
}

__attribute__((alias("__imp__sub_82DACB3C"))) PPC_WEAK_FUNC(sub_82DACB3C);
PPC_FUNC_IMPL(__imp__sub_82DACB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DACB40"))) PPC_WEAK_FUNC(sub_82DACB40);
PPC_FUNC_IMPL(__imp__sub_82DACB40) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dacb50
	if (!ctx.cr6.eq) goto loc_82DACB50;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DACB50:
	// b 0x82dac3d8
	sub_82DAC3D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DACB54"))) PPC_WEAK_FUNC(sub_82DACB54);
PPC_FUNC_IMPL(__imp__sub_82DACB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DACB58"))) PPC_WEAK_FUNC(sub_82DACB58);
PPC_FUNC_IMPL(__imp__sub_82DACB58) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dacb68
	if (!ctx.cr6.eq) goto loc_82DACB68;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DACB68:
	// b 0x82dac458
	sub_82DAC458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DACB6C"))) PPC_WEAK_FUNC(sub_82DACB6C);
PPC_FUNC_IMPL(__imp__sub_82DACB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DACB70"))) PPC_WEAK_FUNC(sub_82DACB70);
PPC_FUNC_IMPL(__imp__sub_82DACB70) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-24
	ctx.r31.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dacb94
	if (!ctx.cr6.eq) goto loc_82DACB94;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82DACB94:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dacbb4
	if (ctx.cr6.eq) goto loc_82DACBB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,296(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x82cb16f0
	ctx.lr = 0x82DACBB4;
	sub_82CB16F0(ctx, base);
loc_82DACBB4:
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dacbcc
	if (ctx.cr6.eq) goto loc_82DACBCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,300(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// bl 0x82cb16f0
	ctx.lr = 0x82DACBCC;
	sub_82CB16F0(ctx, base);
loc_82DACBCC:
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

__attribute__((alias("__imp__sub_82DACBE4"))) PPC_WEAK_FUNC(sub_82DACBE4);
PPC_FUNC_IMPL(__imp__sub_82DACBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DACBE8"))) PPC_WEAK_FUNC(sub_82DACBE8);
PPC_FUNC_IMPL(__imp__sub_82DACBE8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dacbf8
	if (!ctx.cr6.eq) goto loc_82DACBF8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DACBF8:
	// b 0x82dac528
	sub_82DAC528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DACBFC"))) PPC_WEAK_FUNC(sub_82DACBFC);
PPC_FUNC_IMPL(__imp__sub_82DACBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DACC00"))) PPC_WEAK_FUNC(sub_82DACC00);
PPC_FUNC_IMPL(__imp__sub_82DACC00) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dacc10
	if (!ctx.cr6.eq) goto loc_82DACC10;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DACC10:
	// b 0x82dac768
	sub_82DAC768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DACC14"))) PPC_WEAK_FUNC(sub_82DACC14);
PPC_FUNC_IMPL(__imp__sub_82DACC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DACC18"))) PPC_WEAK_FUNC(sub_82DACC18);
PPC_FUNC_IMPL(__imp__sub_82DACC18) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dacc28
	if (!ctx.cr6.eq) goto loc_82DACC28;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DACC28:
	// b 0x82dac9a0
	sub_82DAC9A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DACC2C"))) PPC_WEAK_FUNC(sub_82DACC2C);
PPC_FUNC_IMPL(__imp__sub_82DACC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DACC30"))) PPC_WEAK_FUNC(sub_82DACC30);
PPC_FUNC_IMPL(__imp__sub_82DACC30) {
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r31,r11,21464
	ctx.r31.s64 = ctx.r11.s64 + 21464;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DACC58;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1924
	ctx.r4.s64 = ctx.r11.s64 + 1924;
	// bl 0x82da4448
	ctx.lr = 0x82DACC68;
	sub_82DA4448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r4,-13504
	ctx.r10.s64 = ctx.r4.s64 + -13504;
	// addi r11,r11,21224
	ctx.r11.s64 = ctx.r11.s64 + 21224;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r5,-13480
	ctx.r10.s64 = ctx.r5.s64 + -13480;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r10,r6,-13456
	ctx.r10.s64 = ctx.r6.s64 + -13456;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r10,r7,-13336
	ctx.r10.s64 = ctx.r7.s64 + -13336;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,-13312
	ctx.r11.s64 = ctx.r8.s64 + -13312;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r9,-13288
	ctx.r11.s64 = ctx.r9.s64 + -13288;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,328
	ctx.r11.s64 = 328;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DACD00"))) PPC_WEAK_FUNC(sub_82DACD00);
PPC_FUNC_IMPL(__imp__sub_82DACD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DACD08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// beq cr6,0x82dacd2c
	if (ctx.cr6.eq) goto loc_82DACD2C;
	// bl 0x82df6090
	ctx.lr = 0x82DACD2C;
	sub_82DF6090(ctx, base);
loc_82DACD2C:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dacd80
	if (!ctx.cr6.gt) goto loc_82DACD80;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82DACD40:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DACD64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dacd84
	if (!ctx.cr6.eq) goto loc_82DACD84;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dacd40
	if (ctx.cr6.lt) goto loc_82DACD40;
loc_82DACD80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DACD84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DACD8C"))) PPC_WEAK_FUNC(sub_82DACD8C);
PPC_FUNC_IMPL(__imp__sub_82DACD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DACD90"))) PPC_WEAK_FUNC(sub_82DACD90);
PPC_FUNC_IMPL(__imp__sub_82DACD90) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DACD98"))) PPC_WEAK_FUNC(sub_82DACD98);
PPC_FUNC_IMPL(__imp__sub_82DACD98) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DACDA0"))) PPC_WEAK_FUNC(sub_82DACDA0);
PPC_FUNC_IMPL(__imp__sub_82DACDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82DACDA8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// addi r26,r31,4
	ctx.r26.s64 = ctx.r31.s64 + 4;
	// addi r25,r30,4
	ctx.r25.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82dace08
	if (ctx.cr6.eq) goto loc_82DACE08;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// ble cr6,0x82dacde8
	if (!ctx.cr6.gt) goto loc_82DACDE8;
	// mullw r11,r28,r29
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82DACDE8;
	sub_82CB1160(ctx, base);
loc_82DACDE8:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r27,268
	ctx.r3.s64 = ctx.r27.s64 + 268;
	// bl 0x82df54d8
	ctx.lr = 0x82DACE08;
	sub_82DF54D8(ctx, base);
loc_82DACE08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DACE14"))) PPC_WEAK_FUNC(sub_82DACE14);
PPC_FUNC_IMPL(__imp__sub_82DACE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DACE18"))) PPC_WEAK_FUNC(sub_82DACE18);
PPC_FUNC_IMPL(__imp__sub_82DACE18) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82d8ac50
	ctx.lr = 0x82DACE44;
	sub_82D8AC50(ctx, base);
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bgt cr6,0x82dacfac
	if (ctx.cr6.gt) goto loc_82DACFAC;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-12700
	ctx.r12.s64 = ctx.r12.s64 + -12700;
	// rlwinm r0,r31,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r31.u64) {
	case 0:
		goto loc_82DACE7C;
	case 1:
		goto loc_82DACEB0;
	case 2:
		goto loc_82DACEE4;
	case 3:
		goto loc_82DACF18;
	case 4:
		goto loc_82DACF4C;
	case 5:
		goto loc_82DACF80;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-12676(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12676);
	// lwz r22,-12624(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12624);
	// lwz r22,-12572(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12572);
	// lwz r22,-12520(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12520);
	// lwz r22,-12468(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12468);
	// lwz r22,-12416(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12416);
loc_82DACE7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82dace9c
	if (ctx.cr6.gt) goto loc_82DACE9C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82dacea0
	if (!ctx.cr6.lt) goto loc_82DACEA0;
loc_82DACE9C:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_82DACEA0:
	// addi r3,r30,268
	ctx.r3.s64 = ctx.r30.s64 + 268;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82df5ef8
	ctx.lr = 0x82DACEAC;
	sub_82DF5EF8(ctx, base);
	// b 0x82dacfac
	goto loc_82DACFAC;
loc_82DACEB0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82daced0
	if (ctx.cr6.gt) goto loc_82DACED0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82daced4
	if (!ctx.cr6.lt) goto loc_82DACED4;
loc_82DACED0:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_82DACED4:
	// addi r3,r30,268
	ctx.r3.s64 = ctx.r30.s64 + 268;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82df5f38
	ctx.lr = 0x82DACEE0;
	sub_82DF5F38(ctx, base);
	// b 0x82dacfac
	goto loc_82DACFAC;
loc_82DACEE4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82dacf04
	if (ctx.cr6.gt) goto loc_82DACF04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82dacf08
	if (!ctx.cr6.lt) goto loc_82DACF08;
loc_82DACF04:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_82DACF08:
	// addi r3,r30,268
	ctx.r3.s64 = ctx.r30.s64 + 268;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82df5f68
	ctx.lr = 0x82DACF14;
	sub_82DF5F68(ctx, base);
	// b 0x82dacfac
	goto loc_82DACFAC;
loc_82DACF18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82dacf38
	if (ctx.cr6.gt) goto loc_82DACF38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82dacf3c
	if (!ctx.cr6.lt) goto loc_82DACF3C;
loc_82DACF38:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_82DACF3C:
	// addi r3,r30,268
	ctx.r3.s64 = ctx.r30.s64 + 268;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82df5f98
	ctx.lr = 0x82DACF48;
	sub_82DF5F98(ctx, base);
	// b 0x82dacfac
	goto loc_82DACFAC;
loc_82DACF4C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82dacf6c
	if (ctx.cr6.gt) goto loc_82DACF6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82dacf70
	if (!ctx.cr6.lt) goto loc_82DACF70;
loc_82DACF6C:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_82DACF70:
	// addi r3,r30,268
	ctx.r3.s64 = ctx.r30.s64 + 268;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82df5fc8
	ctx.lr = 0x82DACF7C;
	sub_82DF5FC8(ctx, base);
	// b 0x82dacfac
	goto loc_82DACFAC;
loc_82DACF80:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,2164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2164);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82dacf9c
	if (ctx.cr6.lt) goto loc_82DACF9C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82dacfa4
	goto loc_82DACFA4;
loc_82DACF9C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
loc_82DACFA4:
	// addi r3,r30,268
	ctx.r3.s64 = ctx.r30.s64 + 268;
	// bl 0x82df5fd8
	ctx.lr = 0x82DACFAC;
	sub_82DF5FD8(ctx, base);
loc_82DACFAC:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82d8ac78
	ctx.lr = 0x82DACFB4;
	sub_82D8AC78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82DACFD4"))) PPC_WEAK_FUNC(sub_82DACFD4);
PPC_FUNC_IMPL(__imp__sub_82DACFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DACFD8"))) PPC_WEAK_FUNC(sub_82DACFD8);
PPC_FUNC_IMPL(__imp__sub_82DACFD8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// bgt cr6,0x82dad154
	if (ctx.cr6.gt) goto loc_82DAD154;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-12268
	ctx.r12.s64 = ctx.r12.s64 + -12268;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82DAD02C;
	case 1:
		goto loc_82DAD058;
	case 2:
		goto loc_82DAD084;
	case 3:
		goto loc_82DAD0B0;
	case 4:
		goto loc_82DAD0DC;
	case 5:
		goto loc_82DAD108;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-12244(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12244);
	// lwz r22,-12200(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12200);
	// lwz r22,-12156(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12156);
	// lwz r22,-12112(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12112);
	// lwz r22,-12068(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12068);
	// lwz r22,-12024(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12024);
loc_82DAD02C:
	// addi r3,r3,268
	ctx.r3.s64 = ctx.r3.s64 + 268;
	// bl 0x82df5f18
	ctx.lr = 0x82DAD034;
	sub_82DF5F18(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// addi r4,r11,2184
	ctx.r4.s64 = ctx.r11.s64 + 2184;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DAD054;
	sub_82CB61F0(ctx, base);
	// b 0x82dad154
	goto loc_82DAD154;
loc_82DAD058:
	// addi r3,r3,268
	ctx.r3.s64 = ctx.r3.s64 + 268;
	// bl 0x82df5f50
	ctx.lr = 0x82DAD060;
	sub_82DF5F50(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// addi r4,r11,2184
	ctx.r4.s64 = ctx.r11.s64 + 2184;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DAD080;
	sub_82CB61F0(ctx, base);
	// b 0x82dad154
	goto loc_82DAD154;
loc_82DAD084:
	// addi r3,r3,268
	ctx.r3.s64 = ctx.r3.s64 + 268;
	// bl 0x82df5f80
	ctx.lr = 0x82DAD08C;
	sub_82DF5F80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// addi r4,r11,2184
	ctx.r4.s64 = ctx.r11.s64 + 2184;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DAD0AC;
	sub_82CB61F0(ctx, base);
	// b 0x82dad154
	goto loc_82DAD154;
loc_82DAD0B0:
	// addi r3,r3,268
	ctx.r3.s64 = ctx.r3.s64 + 268;
	// bl 0x82df5fb0
	ctx.lr = 0x82DAD0B8;
	sub_82DF5FB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// addi r4,r11,2184
	ctx.r4.s64 = ctx.r11.s64 + 2184;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DAD0D8;
	sub_82CB61F0(ctx, base);
	// b 0x82dad154
	goto loc_82DAD154;
loc_82DAD0DC:
	// addi r3,r3,268
	ctx.r3.s64 = ctx.r3.s64 + 268;
	// bl 0x82df5fd0
	ctx.lr = 0x82DAD0E4;
	sub_82DF5FD0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// addi r4,r11,2184
	ctx.r4.s64 = ctx.r11.s64 + 2184;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DAD104;
	sub_82CB61F0(ctx, base);
	// b 0x82dad154
	goto loc_82DAD154;
loc_82DAD108:
	// addi r3,r3,268
	ctx.r3.s64 = ctx.r3.s64 + 268;
	// bl 0x82df5fe0
	ctx.lr = 0x82DAD110;
	sub_82DF5FE0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,2164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2164);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82dad13c
	if (ctx.cr6.lt) goto loc_82DAD13C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,2176
	ctx.r4.s64 = ctx.r11.s64 + 2176;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82dad14c
	goto loc_82DAD14C;
loc_82DAD13C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,2168
	ctx.r4.s64 = ctx.r11.s64 + 2168;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82DAD14C:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DAD154;
	sub_82CB61F0(ctx, base);
loc_82DAD154:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82DAD170"))) PPC_WEAK_FUNC(sub_82DAD170);
PPC_FUNC_IMPL(__imp__sub_82DAD170) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dad180
	if (!ctx.cr6.eq) goto loc_82DAD180;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAD180:
	// b 0x82dacd00
	sub_82DACD00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAD184"))) PPC_WEAK_FUNC(sub_82DAD184);
PPC_FUNC_IMPL(__imp__sub_82DAD184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAD188"))) PPC_WEAK_FUNC(sub_82DAD188);
PPC_FUNC_IMPL(__imp__sub_82DAD188) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAD190"))) PPC_WEAK_FUNC(sub_82DAD190);
PPC_FUNC_IMPL(__imp__sub_82DAD190) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAD198"))) PPC_WEAK_FUNC(sub_82DAD198);
PPC_FUNC_IMPL(__imp__sub_82DAD198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82DAD1A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r25,r3,-24
	ctx.r25.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dad1c4
	if (!ctx.cr6.eq) goto loc_82DAD1C4;
	// li r25,0
	ctx.r25.s64 = 0;
loc_82DAD1C4:
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// addi r26,r30,4
	ctx.r26.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82dad210
	if (ctx.cr6.eq) goto loc_82DAD210;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// ble cr6,0x82dad1f0
	if (!ctx.cr6.gt) goto loc_82DAD1F0;
	// mullw r11,r28,r29
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82DAD1F0;
	sub_82CB1160(ctx, base);
loc_82DAD1F0:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r25,268
	ctx.r3.s64 = ctx.r25.s64 + 268;
	// bl 0x82df54d8
	ctx.lr = 0x82DAD210;
	sub_82DF54D8(ctx, base);
loc_82DAD210:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAD21C"))) PPC_WEAK_FUNC(sub_82DAD21C);
PPC_FUNC_IMPL(__imp__sub_82DAD21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAD220"))) PPC_WEAK_FUNC(sub_82DAD220);
PPC_FUNC_IMPL(__imp__sub_82DAD220) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dad230
	if (!ctx.cr6.eq) goto loc_82DAD230;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAD230:
	// b 0x82dace18
	sub_82DACE18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAD234"))) PPC_WEAK_FUNC(sub_82DAD234);
PPC_FUNC_IMPL(__imp__sub_82DAD234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAD238"))) PPC_WEAK_FUNC(sub_82DAD238);
PPC_FUNC_IMPL(__imp__sub_82DAD238) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dad248
	if (!ctx.cr6.eq) goto loc_82DAD248;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAD248:
	// b 0x82dacfd8
	sub_82DACFD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAD24C"))) PPC_WEAK_FUNC(sub_82DAD24C);
PPC_FUNC_IMPL(__imp__sub_82DAD24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAD250"))) PPC_WEAK_FUNC(sub_82DAD250);
PPC_FUNC_IMPL(__imp__sub_82DAD250) {
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r31,r11,21896
	ctx.r31.s64 = ctx.r11.s64 + 21896;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAD278;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2192
	ctx.r4.s64 = ctx.r11.s64 + 2192;
	// bl 0x82da4448
	ctx.lr = 0x82DAD288;
	sub_82DA4448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r4,-11920
	ctx.r10.s64 = ctx.r4.s64 + -11920;
	// addi r11,r11,21600
	ctx.r11.s64 = ctx.r11.s64 + 21600;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r5,-11896
	ctx.r10.s64 = ctx.r5.s64 + -11896;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r10,r6,-11888
	ctx.r10.s64 = ctx.r6.s64 + -11888;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r10,r7,-11880
	ctx.r10.s64 = ctx.r7.s64 + -11880;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,-11744
	ctx.r11.s64 = ctx.r8.s64 + -11744;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r9,-11720
	ctx.r11.s64 = ctx.r9.s64 + -11720;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,37152
	ctx.r11.u64 = ctx.r11.u64 | 37152;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DAD32C"))) PPC_WEAK_FUNC(sub_82DAD32C);
PPC_FUNC_IMPL(__imp__sub_82DAD32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAD330"))) PPC_WEAK_FUNC(sub_82DAD330);
PPC_FUNC_IMPL(__imp__sub_82DAD330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17812);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82dad358
	if (!ctx.cr6.lt) goto loc_82DAD358;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DAD358:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82dad3e0
	if (ctx.cr6.gt) goto loc_82DAD3E0;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-11392
	ctx.r12.s64 = ctx.r12.s64 + -11392;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DAD390;
	case 1:
		goto loc_82DAD3A0;
	case 2:
		goto loc_82DAD3B4;
	case 3:
		goto loc_82DAD3C8;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-11376(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11376);
	// lwz r22,-11360(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11360);
	// lwz r22,-11340(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11340);
	// lwz r22,-11320(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11320);
loc_82DAD390:
	// addi r11,r11,86
	ctx.r11.s64 = ctx.r11.s64 + 86;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82DAD3A0:
	// subfic r11,r11,16469
	ctx.xer.ca = ctx.r11.u32 <= 16469;
	ctx.r11.s64 = 16469 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_82DAD3B4:
	// addi r11,r11,-16298
	ctx.r11.s64 = ctx.r11.s64 + -16298;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_82DAD3C8:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32853
	ctx.r10.u64 = ctx.r10.u64 | 32853;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82DAD3E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAD3EC"))) PPC_WEAK_FUNC(sub_82DAD3EC);
PPC_FUNC_IMPL(__imp__sub_82DAD3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAD3F0"))) PPC_WEAK_FUNC(sub_82DAD3F0);
PPC_FUNC_IMPL(__imp__sub_82DAD3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f0,7616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f0,-17812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17812);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82dad424
	if (!ctx.cr6.lt) goto loc_82DAD424;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DAD424:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82dad4ac
	if (ctx.cr6.gt) goto loc_82DAD4AC;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-11188
	ctx.r12.s64 = ctx.r12.s64 + -11188;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DAD45C;
	case 1:
		goto loc_82DAD46C;
	case 2:
		goto loc_82DAD480;
	case 3:
		goto loc_82DAD494;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-11172(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11172);
	// lwz r22,-11156(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11156);
	// lwz r22,-11136(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11136);
	// lwz r22,-11116(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11116);
loc_82DAD45C:
	// addi r11,r11,86
	ctx.r11.s64 = ctx.r11.s64 + 86;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82DAD46C:
	// subfic r11,r11,16469
	ctx.xer.ca = ctx.r11.u32 <= 16469;
	ctx.r11.s64 = 16469 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_82DAD480:
	// addi r11,r11,-16298
	ctx.r11.s64 = ctx.r11.s64 + -16298;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_82DAD494:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32853
	ctx.r10.u64 = ctx.r10.u64 | 32853;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82DAD4AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAD4B8"))) PPC_WEAK_FUNC(sub_82DAD4B8);
PPC_FUNC_IMPL(__imp__sub_82DAD4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82DAD4C0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r28,-31909
	ctx.r28.s64 = -2091188224;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,344
	ctx.r29.s64 = ctx.r31.s64 + 344;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,19872(r28)
	PPC_STORE_U32(ctx.r28.u32 + 19872, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,2940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2940);
	ctx.f31.f64 = double(temp.f32);
loc_82DAD4E8:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82cb4940
	ctx.lr = 0x82DAD504;
	sub_82CB4940(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,8192
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8192, ctx.xer);
	// blt cr6,0x82dad4e8
	if (ctx.cr6.lt) goto loc_82DAD4E8;
	// addi r11,r31,340
	ctx.r11.s64 = ctx.r31.s64 + 340;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dad534
	if (ctx.cr6.eq) goto loc_82DAD534;
	// lwz r9,1244(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1244);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82DAD534:
	// lwz r9,1256(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1256);
	// lwz r10,1252(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1252);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82dad548
	if (!ctx.cr6.gt) goto loc_82DAD548;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82DAD548:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r8,4194
	ctx.r8.s64 = 274857984;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ori r8,r8,19923
	ctx.r8.u64 = ctx.r8.u64 | 19923;
	// addi r5,r11,2872
	ctx.r5.s64 = ctx.r11.s64 + 2872;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,194
	ctx.r6.s64 = 194;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-16708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16708);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulhw r11,r11,r8
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// subfic r11,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r11.s64 = 512 - ctx.r11.s64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82DAD5C0;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r3.u32);
	// bne cr6,0x82dad5dc
	if (!ctx.cr6.eq) goto loc_82DAD5DC;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82DAD5DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// ble cr6,0x82dad63c
	if (!ctx.cr6.gt) goto loc_82DAD63C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82DAD5FC:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DAD620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dad640
	if (!ctx.cr6.eq) goto loc_82DAD640;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dad5fc
	if (ctx.cr6.lt) goto loc_82DAD5FC;
loc_82DAD63C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAD640:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAD64C"))) PPC_WEAK_FUNC(sub_82DAD64C);
PPC_FUNC_IMPL(__imp__sub_82DAD64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAD650"))) PPC_WEAK_FUNC(sub_82DAD650);
PPC_FUNC_IMPL(__imp__sub_82DAD650) {
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
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dad698
	if (ctx.cr6.eq) goto loc_82DAD698;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,2872
	ctx.r5.s64 = ctx.r11.s64 + 2872;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,234
	ctx.r6.s64 = 234;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DAD690;
	sub_82D861B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
loc_82DAD698:
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

__attribute__((alias("__imp__sub_82DAD6B0"))) PPC_WEAK_FUNC(sub_82DAD6B0);
PPC_FUNC_IMPL(__imp__sub_82DAD6B0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,300(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// stw r10,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dad6e0
	if (ctx.cr6.eq) goto loc_82DAD6E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,312(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// bl 0x82cb16f0
	ctx.lr = 0x82DAD6E0;
	sub_82CB16F0(ctx, base);
loc_82DAD6E0:
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
}

__attribute__((alias("__imp__sub_82DAD6F4"))) PPC_WEAK_FUNC(sub_82DAD6F4);
PPC_FUNC_IMPL(__imp__sub_82DAD6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAD6F8"))) PPC_WEAK_FUNC(sub_82DAD6F8);
PPC_FUNC_IMPL(__imp__sub_82DAD6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x82DAD700;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x82cb6ac0
	ctx.lr = 0x82DAD708;
	__savefpr_18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,308(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// lfs f0,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f29,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f29.f64 = double(temp.f32);
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// beq cr6,0x82dadce8
	if (ctx.cr6.eq) goto loc_82DADCE8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82dadce8
	if (ctx.cr6.eq) goto loc_82DADCE8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lis r31,-32222
	ctx.r31.s64 = -2111700992;
	// std r11,-344(r1)
	PPC_STORE_U64(ctx.r1.u32 + -344, ctx.r11.u64);
	// lfd f0,-344(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -344);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f30,6048(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 6048);
	ctx.f30.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f2,7616(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7616);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,-18116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -18116);
	ctx.f28.f64 = double(temp.f32);
	// lis r28,0
	ctx.r28.s64 = 0;
	// lfs f3,2944(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2944);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r21,r7,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f4,-16484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16484);
	ctx.f4.f64 = double(temp.f32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lfs f6,-17812(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17812);
	ctx.f6.f64 = double(temp.f32);
	// li r23,0
	ctx.r23.s64 = 0;
	// lfs f5,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f5.f64 = double(temp.f32);
	// ori r24,r28,32853
	ctx.r24.u64 = ctx.r28.u64 | 32853;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
loc_82DAD794:
	// addi r9,r1,-368
	ctx.r9.s64 = ctx.r1.s64 + -368;
	// lfs f0,320(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// lfs f13,324(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,328(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// fctidz f11,f10
	ctx.f11.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// twllei r10,0
	// twllei r10,0
	// stfiwx f12,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f12.u32);
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// twllei r10,0
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r9,-368(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	// addi r8,r1,-364
	ctx.r8.s64 = ctx.r1.s64 + -364;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfiwx f12,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f12.u32);
	// divwu r31,r9,r10
	ctx.r31.u32 = ctx.r9.u32 / ctx.r10.u32;
	// std r6,-336(r1)
	PPC_STORE_U64(ctx.r1.u32 + -336, ctx.r6.u64);
	// mullw r6,r31,r10
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// lwz r8,-364(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -364);
	// addi r30,r1,-360
	ctx.r30.s64 = ctx.r1.s64 + -360;
	// extsw r31,r8
	ctx.r31.s64 = ctx.r8.s32;
	// lfd f12,-336(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -336);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stfiwx f11,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f11.u32);
	// divwu r30,r8,r10
	ctx.r30.u32 = ctx.r8.u32 / ctx.r10.u32;
	// std r31,-328(r1)
	PPC_STORE_U64(ctx.r1.u32 + -328, ctx.r31.u64);
	// mullw r30,r30,r10
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lwz r6,-360(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -360);
	// extsw r30,r6
	ctx.r30.s64 = ctx.r6.s32;
	// lfd f0,-328(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -328);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// divwu r6,r11,r10
	ctx.r6.u32 = ctx.r11.u32 / ctx.r10.u32;
	// std r30,-320(r1)
	PPC_STORE_U64(ctx.r1.u32 + -320, ctx.r30.u64);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfd f0,-320(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -320);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// ble cr6,0x82dada0c
	if (!ctx.cr6.gt) goto loc_82DADA0C;
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// fsubs f9,f5,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// fsubs f8,f5,f11
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fsubs f7,f5,f10
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r27,r31,r7
	ctx.r27.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// rlwinm r29,r6,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r27,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// subf r26,r4,r5
	ctx.r26.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_82DAD8B4:
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f27,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f25,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f25.f64 = double(temp.f32);
	// lhzx r27,r11,r8
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lfs f24,288(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f24.f64 = double(temp.f32);
	// lhzx r20,r11,r9
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// lhzx r19,r11,r31
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r20,r20
	ctx.r20.s64 = ctx.r20.s16;
	// lhzx r18,r11,r6
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// extsh r19,r19
	ctx.r19.s64 = ctx.r19.s16;
	// lhzx r17,r11,r29
	ctx.r17.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// extsh r18,r18
	ctx.r18.s64 = ctx.r18.s16;
	// lhzx r16,r11,r30
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// std r27,-312(r1)
	PPC_STORE_U64(ctx.r1.u32 + -312, ctx.r27.u64);
	// extsh r27,r17
	ctx.r27.s64 = ctx.r17.s16;
	// std r20,-304(r1)
	PPC_STORE_U64(ctx.r1.u32 + -304, ctx.r20.u64);
	// extsh r20,r16
	ctx.r20.s64 = ctx.r16.s16;
	// std r19,-296(r1)
	PPC_STORE_U64(ctx.r1.u32 + -296, ctx.r19.u64);
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// std r18,-288(r1)
	PPC_STORE_U64(ctx.r1.u32 + -288, ctx.r18.u64);
	// std r27,-280(r1)
	PPC_STORE_U64(ctx.r1.u32 + -280, ctx.r27.u64);
	// std r20,-272(r1)
	PPC_STORE_U64(ctx.r1.u32 + -272, ctx.r20.u64);
	// lfd f23,-312(r1)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -312);
	// fcfid f23,f23
	ctx.f23.f64 = double(ctx.f23.s64);
	// lfd f22,-304(r1)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -304);
	// lfd f21,-296(r1)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -296);
	// fcfid f22,f22
	ctx.f22.f64 = double(ctx.f22.s64);
	// fcfid f21,f21
	ctx.f21.f64 = double(ctx.f21.s64);
	// lfd f20,-288(r1)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// fcfid f20,f20
	ctx.f20.f64 = double(ctx.f20.s64);
	// lfd f19,-280(r1)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// fcfid f19,f19
	ctx.f19.f64 = double(ctx.f19.s64);
	// lfd f18,-272(r1)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// fcfid f18,f18
	ctx.f18.f64 = double(ctx.f18.s64);
	// frsp f23,f23
	ctx.f23.f64 = double(float(ctx.f23.f64));
	// frsp f22,f22
	ctx.f22.f64 = double(float(ctx.f22.f64));
	// frsp f21,f21
	ctx.f21.f64 = double(float(ctx.f21.f64));
	// frsp f20,f20
	ctx.f20.f64 = double(float(ctx.f20.f64));
	// frsp f19,f19
	ctx.f19.f64 = double(float(ctx.f19.f64));
	// frsp f18,f18
	ctx.f18.f64 = double(float(ctx.f18.f64));
	// fmuls f23,f23,f12
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f12.f64));
	// fmuls f21,f21,f11
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f11.f64));
	// fmuls f19,f19,f10
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f10.f64));
	// fmadds f23,f22,f9,f23
	ctx.f23.f64 = double(float(ctx.f22.f64 * ctx.f9.f64 + ctx.f23.f64));
	// fmadds f22,f20,f8,f21
	ctx.f22.f64 = double(float(ctx.f20.f64 * ctx.f8.f64 + ctx.f21.f64));
	// fmadds f21,f18,f7,f19
	ctx.f21.f64 = double(float(ctx.f18.f64 * ctx.f7.f64 + ctx.f19.f64));
	// fmadds f13,f23,f27,f13
	ctx.f13.f64 = double(float(ctx.f23.f64 * ctx.f27.f64 + ctx.f13.f64));
	// fmadds f13,f22,f26,f13
	ctx.f13.f64 = double(float(ctx.f22.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fmadds f13,f21,f25,f13
	ctx.f13.f64 = double(float(ctx.f21.f64 * ctx.f25.f64 + ctx.f13.f64));
	// fmadds f0,f24,f13,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// bge cr6,0x82dad9a4
	if (!ctx.cr6.lt) goto loc_82DAD9A4;
	// li r27,-32768
	ctx.r27.s64 = -32768;
	// b 0x82dad9c4
	goto loc_82DAD9C4;
loc_82DAD9A4:
	// fcmpu cr6,f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// ble cr6,0x82dad9b4
	if (!ctx.cr6.gt) goto loc_82DAD9B4;
	// li r27,32767
	ctx.r27.s64 = 32767;
	// b 0x82dad9c4
	goto loc_82DAD9C4;
loc_82DAD9B4:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-264(r1)
	PPC_STORE_U64(ctx.r1.u32 + -264, ctx.f0.u64);
	// lhz r27,-258(r1)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r1.u32 + -258);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
loc_82DAD9C4:
	// lwz r20,316(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
	// fmuls f0,f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// mullw r27,r20,r7
	ctx.r27.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r7.s32);
	// add r27,r27,r28
	ctx.r27.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// sthx r19,r27,r11
	PPC_STORE_U16(ctx.r27.u32 + ctx.r11.u32, ctx.r19.u16);
	// stfsx f0,r26,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r10.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82dad8b4
	if (ctx.cr6.lt) goto loc_82DAD8B4;
loc_82DADA0C:
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dada54
	if (!ctx.cr6.eq) goto loc_82DADA54;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82dada54
	if (!ctx.cr6.gt) goto loc_82DADA54;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82DADA28:
	// lwz r8,308(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// lwz r9,300(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lhzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// sthx r6,r8,r9
	PPC_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r6.u16);
	// blt cr6,0x82dada28
	if (ctx.cr6.lt) goto loc_82DADA28;
loc_82DADA54:
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lwz r10,308(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// blt cr6,0x82dada70
	if (ctx.cr6.lt) goto loc_82DADA70;
	// stw r23,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r23.u32);
loc_82DADA70:
	// lfs f12,332(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,-356
	ctx.r11.s64 = ctx.r1.s64 + -356;
	// fsubs f0,f12,f2
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82dada98
	if (!ctx.cr6.lt) goto loc_82DADA98;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DADA98:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r9,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// stw r11,-356(r1)
	PPC_STORE_U32(ctx.r1.u32 + -356, ctx.r11.u32);
	// bgt cr6,0x82dadb1c
	if (ctx.cr6.gt) goto loc_82DADB1C;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-9532
	ctx.r12.s64 = ctx.r12.s64 + -9532;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82DADAD4;
	case 1:
		goto loc_82DADAE4;
	case 2:
		goto loc_82DADAF8;
	case 3:
		goto loc_82DADB0C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-9516(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9516);
	// lwz r22,-9500(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9500);
	// lwz r22,-9480(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9480);
	// lwz r22,-9460(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9460);
loc_82DADAD4:
	// addi r11,r11,86
	ctx.r11.s64 = ctx.r11.s64 + 86;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82dadb20
	goto loc_82DADB20;
loc_82DADAE4:
	// subfic r11,r11,16469
	ctx.xer.ca = ctx.r11.u32 <= 16469;
	ctx.r11.s64 = 16469 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82dadb20
	goto loc_82DADB20;
loc_82DADAF8:
	// addi r11,r11,-16298
	ctx.r11.s64 = ctx.r11.s64 + -16298;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82dadb20
	goto loc_82DADB20;
loc_82DADB0C:
	// subf r11,r11,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82dadb20
	goto loc_82DADB20;
loc_82DADB1C:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82DADB20:
	// fadds f0,f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// addi r11,r1,-352
	ctx.r11.s64 = ctx.r1.s64 + -352;
	// fadds f13,f12,f2
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f11,320(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 320, temp.u32);
	// fsubs f0,f13,f2
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-352(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82dadb54
	if (!ctx.cr6.lt) goto loc_82DADB54;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DADB54:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r9,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// stw r11,-352(r1)
	PPC_STORE_U32(ctx.r1.u32 + -352, ctx.r11.u32);
	// bgt cr6,0x82dadbd8
	if (ctx.cr6.gt) goto loc_82DADBD8;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-9344
	ctx.r12.s64 = ctx.r12.s64 + -9344;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82DADB90;
	case 1:
		goto loc_82DADBA0;
	case 2:
		goto loc_82DADBB4;
	case 3:
		goto loc_82DADBC8;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-9328(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9328);
	// lwz r22,-9312(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9312);
	// lwz r22,-9292(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r22,-9272(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9272);
loc_82DADB90:
	// addi r11,r11,86
	ctx.r11.s64 = ctx.r11.s64 + 86;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82dadbdc
	goto loc_82DADBDC;
loc_82DADBA0:
	// subfic r11,r11,16469
	ctx.xer.ca = ctx.r11.u32 <= 16469;
	ctx.r11.s64 = 16469 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82dadbdc
	goto loc_82DADBDC;
loc_82DADBB4:
	// addi r11,r11,-16298
	ctx.r11.s64 = ctx.r11.s64 + -16298;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82dadbdc
	goto loc_82DADBDC;
loc_82DADBC8:
	// subf r11,r11,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82dadbdc
	goto loc_82DADBDC;
loc_82DADBD8:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82DADBDC:
	// fadds f0,f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// addi r11,r1,-344
	ctx.r11.s64 = ctx.r1.s64 + -344;
	// fadds f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,324(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// fsubs f0,f10,f2
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-344(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82dadc10
	if (!ctx.cr6.lt) goto loc_82DADC10;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DADC10:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r9,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// stw r11,-344(r1)
	PPC_STORE_U32(ctx.r1.u32 + -344, ctx.r11.u32);
	// bgt cr6,0x82dadc94
	if (ctx.cr6.gt) goto loc_82DADC94;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-9156
	ctx.r12.s64 = ctx.r12.s64 + -9156;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82DADC4C;
	case 1:
		goto loc_82DADC5C;
	case 2:
		goto loc_82DADC70;
	case 3:
		goto loc_82DADC84;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-9140(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9140);
	// lwz r22,-9124(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9124);
	// lwz r22,-9104(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9104);
	// lwz r22,-9084(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9084);
loc_82DADC4C:
	// addi r11,r11,86
	ctx.r11.s64 = ctx.r11.s64 + 86;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82dadc98
	goto loc_82DADC98;
loc_82DADC5C:
	// subfic r11,r11,16469
	ctx.xer.ca = ctx.r11.u32 <= 16469;
	ctx.r11.s64 = 16469 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82dadc98
	goto loc_82DADC98;
loc_82DADC70:
	// addi r11,r11,-16298
	ctx.r11.s64 = ctx.r11.s64 + -16298;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82dadc98
	goto loc_82DADC98;
loc_82DADC84:
	// subf r11,r11,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82dadc98
	goto loc_82DADC98;
loc_82DADC94:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82DADC98:
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// fadds f10,f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// lfs f0,336(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,332(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// add r25,r21,r25
	ctx.r25.u64 = ctx.r21.u64 + ctx.r25.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// std r11,-256(r1)
	PPC_STORE_U64(ctx.r1.u32 + -256, ctx.r11.u64);
	// lfd f0,-256(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f11,f0,f11,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f31.f64));
	// stfs f11,320(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 320, temp.u32);
	// fmadds f0,f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f31.f64));
	// stfs f0,324(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// fmadds f0,f12,f1,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f31.f64));
	// stfs f0,328(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 328, temp.u32);
	// bne cr6,0x82dad794
	if (!ctx.cr6.eq) goto loc_82DAD794;
loc_82DADCE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x82cb6b0c
	ctx.lr = 0x82DADCF4;
	__restfpr_18(ctx, base);
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DADCF8"))) PPC_WEAK_FUNC(sub_82DADCF8);
PPC_FUNC_IMPL(__imp__sub_82DADCF8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f30,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f30.f64 = double(temp.f32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d8ac50
	ctx.lr = 0x82DADD2C;
	sub_82D8AC50(ctx, base);
	// cmplwi cr6,r30,7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 7, ctx.xer);
	// bgt cr6,0x82dadda8
	if (ctx.cr6.gt) goto loc_82DADDA8;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-8884
	ctx.r12.s64 = ctx.r12.s64 + -8884;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_82DADD6C;
	case 1:
		goto loc_82DADD74;
	case 2:
		goto loc_82DADD7C;
	case 3:
		goto loc_82DADD84;
	case 4:
		goto loc_82DADD8C;
	case 5:
		goto loc_82DADD94;
	case 6:
		goto loc_82DADD9C;
	case 7:
		goto loc_82DADDA4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-8852(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8852);
	// lwz r22,-8844(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8844);
	// lwz r22,-8836(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8836);
	// lwz r22,-8828(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8828);
	// lwz r22,-8820(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8820);
	// lwz r22,-8812(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8812);
	// lwz r22,-8804(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8804);
	// lwz r22,-8796(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8796);
loc_82DADD6C:
	// stfs f31,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// b 0x82dadda8
	goto loc_82DADDA8;
loc_82DADD74:
	// stfs f31,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// b 0x82dadda8
	goto loc_82DADDA8;
loc_82DADD7C:
	// stfs f31,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// b 0x82dadda8
	goto loc_82DADDA8;
loc_82DADD84:
	// stfs f31,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// b 0x82dadda8
	goto loc_82DADDA8;
loc_82DADD8C:
	// stfs f31,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// b 0x82dadda8
	goto loc_82DADDA8;
loc_82DADD94:
	// stfs f31,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// b 0x82dadda8
	goto loc_82DADDA8;
loc_82DADD9C:
	// stfs f31,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// b 0x82dadda8
	goto loc_82DADDA8;
loc_82DADDA4:
	// stfs f31,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
loc_82DADDA8:
	// lfs f0,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82dade24
	if (ctx.cr6.eq) goto loc_82DADE24;
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,6480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6480);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// bge cr6,0x82dade04
	if (!ctx.cr6.lt) goto loc_82DADE04;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
loc_82DADE04:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// beq cr6,0x82dade24
	if (ctx.cr6.eq) goto loc_82DADE24;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// bl 0x82cb16f0
	ctx.lr = 0x82DADE24;
	sub_82CB16F0(ctx, base);
loc_82DADE24:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lfs f0,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// bl 0x82d8ac78
	ctx.lr = 0x82DADE50;
	sub_82D8AC78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_82DADE74"))) PPC_WEAK_FUNC(sub_82DADE74);
PPC_FUNC_IMPL(__imp__sub_82DADE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DADE78"))) PPC_WEAK_FUNC(sub_82DADE78);
PPC_FUNC_IMPL(__imp__sub_82DADE78) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgt cr6,0x82dae058
	if (ctx.cr6.gt) goto loc_82DAE058;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-8532
	ctx.r12.s64 = ctx.r12.s64 + -8532;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82DADECC;
	case 1:
		goto loc_82DADF00;
	case 2:
		goto loc_82DADF34;
	case 3:
		goto loc_82DADF68;
	case 4:
		goto loc_82DADF9C;
	case 5:
		goto loc_82DADFD0;
	case 6:
		goto loc_82DAE004;
	case 7:
		goto loc_82DAE038;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-8500(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8500);
	// lwz r22,-8448(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8448);
	// lwz r22,-8396(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8396);
	// lwz r22,-8344(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8344);
	// lwz r22,-8292(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8292);
	// lwz r22,-8240(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8240);
	// lwz r22,-8188(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8188);
	// lwz r22,-8136(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8136);
loc_82DADECC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DADEEC;
	sub_82CB61F0(ctx, base);
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
loc_82DADF00:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DADF20;
	sub_82CB61F0(ctx, base);
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
loc_82DADF34:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DADF54;
	sub_82CB61F0(ctx, base);
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
loc_82DADF68:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DADF88;
	sub_82CB61F0(ctx, base);
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
loc_82DADF9C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,292(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DADFBC;
	sub_82CB61F0(ctx, base);
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
loc_82DADFD0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,296(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DADFF0;
	sub_82CB61F0(ctx, base);
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
loc_82DAE004:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DAE024;
	sub_82CB61F0(ctx, base);
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
loc_82DAE038:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DAE058;
	sub_82CB61F0(ctx, base);
loc_82DAE058:
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
}

__attribute__((alias("__imp__sub_82DAE06C"))) PPC_WEAK_FUNC(sub_82DAE06C);
PPC_FUNC_IMPL(__imp__sub_82DAE06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAE070"))) PPC_WEAK_FUNC(sub_82DAE070);
PPC_FUNC_IMPL(__imp__sub_82DAE070) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dae080
	if (!ctx.cr6.eq) goto loc_82DAE080;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAE080:
	// b 0x82dad4b8
	sub_82DAD4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAE084"))) PPC_WEAK_FUNC(sub_82DAE084);
PPC_FUNC_IMPL(__imp__sub_82DAE084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAE088"))) PPC_WEAK_FUNC(sub_82DAE088);
PPC_FUNC_IMPL(__imp__sub_82DAE088) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-24
	ctx.r31.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dae0a8
	if (!ctx.cr6.eq) goto loc_82DAE0A8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82DAE0A8:
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dae0dc
	if (ctx.cr6.eq) goto loc_82DAE0DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,2872
	ctx.r5.s64 = ctx.r11.s64 + 2872;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,234
	ctx.r6.s64 = 234;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DAE0D4;
	sub_82D861B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
loc_82DAE0DC:
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

__attribute__((alias("__imp__sub_82DAE0F4"))) PPC_WEAK_FUNC(sub_82DAE0F4);
PPC_FUNC_IMPL(__imp__sub_82DAE0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAE0F8"))) PPC_WEAK_FUNC(sub_82DAE0F8);
PPC_FUNC_IMPL(__imp__sub_82DAE0F8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dae114
	if (!ctx.cr6.eq) goto loc_82DAE114;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DAE114:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,300(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r10.u32);
	// beq cr6,0x82dae134
	if (ctx.cr6.eq) goto loc_82DAE134;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,312(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// bl 0x82cb16f0
	ctx.lr = 0x82DAE134;
	sub_82CB16F0(ctx, base);
loc_82DAE134:
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
}

__attribute__((alias("__imp__sub_82DAE148"))) PPC_WEAK_FUNC(sub_82DAE148);
PPC_FUNC_IMPL(__imp__sub_82DAE148) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dae158
	if (!ctx.cr6.eq) goto loc_82DAE158;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAE158:
	// b 0x82dad6f8
	sub_82DAD6F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAE15C"))) PPC_WEAK_FUNC(sub_82DAE15C);
PPC_FUNC_IMPL(__imp__sub_82DAE15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAE160"))) PPC_WEAK_FUNC(sub_82DAE160);
PPC_FUNC_IMPL(__imp__sub_82DAE160) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dae170
	if (!ctx.cr6.eq) goto loc_82DAE170;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAE170:
	// b 0x82dadcf8
	sub_82DADCF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAE174"))) PPC_WEAK_FUNC(sub_82DAE174);
PPC_FUNC_IMPL(__imp__sub_82DAE174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAE178"))) PPC_WEAK_FUNC(sub_82DAE178);
PPC_FUNC_IMPL(__imp__sub_82DAE178) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82dae188
	if (!ctx.cr6.eq) goto loc_82DAE188;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAE188:
	// b 0x82dade78
	sub_82DADE78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAE18C"))) PPC_WEAK_FUNC(sub_82DAE18C);
PPC_FUNC_IMPL(__imp__sub_82DAE18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAE190"))) PPC_WEAK_FUNC(sub_82DAE190);
PPC_FUNC_IMPL(__imp__sub_82DAE190) {
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r31,r11,22416
	ctx.r31.s64 = ctx.r11.s64 + 22416;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAE1B8;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2948
	ctx.r4.s64 = ctx.r11.s64 + 2948;
	// bl 0x82da4448
	ctx.lr = 0x82DAE1C8;
	sub_82DA4448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r4,-8080
	ctx.r10.s64 = ctx.r4.s64 + -8080;
	// addi r11,r11,22032
	ctx.r11.s64 = ctx.r11.s64 + 22032;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r5,-8056
	ctx.r10.s64 = ctx.r5.s64 + -8056;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r10,r6,-7944
	ctx.r10.s64 = ctx.r6.s64 + -7944;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r10,r7,-7864
	ctx.r10.s64 = ctx.r7.s64 + -7864;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,-7840
	ctx.r11.s64 = ctx.r8.s64 + -7840;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r9,-7816
	ctx.r11.s64 = ctx.r9.s64 + -7816;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,33112
	ctx.r11.u64 = ctx.r11.u64 | 33112;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DAE264"))) PPC_WEAK_FUNC(sub_82DAE264);
PPC_FUNC_IMPL(__imp__sub_82DAE264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAE268"))) PPC_WEAK_FUNC(sub_82DAE268);
PPC_FUNC_IMPL(__imp__sub_82DAE268) {
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
	// bl 0x82cb4678
	ctx.lr = 0x82DAE278;
	sub_82CB4678(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE28C"))) PPC_WEAK_FUNC(sub_82DAE28C);
PPC_FUNC_IMPL(__imp__sub_82DAE28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAE290"))) PPC_WEAK_FUNC(sub_82DAE290);
PPC_FUNC_IMPL(__imp__sub_82DAE290) {
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
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAE2B4;
	sub_82CB16F0(ctx, base);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16384
	ctx.r3.s64 = ctx.r31.s64 + 16384;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAE2C4;
	sub_82CB16F0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,8208
	ctx.r5.s64 = 8208;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAE2DC;
	sub_82CB16F0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r5,8208
	ctx.r5.s64 = 8208;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-24560
	ctx.r3.s64 = ctx.r3.s64 + -24560;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAE2F0;
	sub_82CB16F0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-16352
	ctx.r3.s64 = ctx.r3.s64 + -16352;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAE304;
	sub_82CB16F0(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,9944
	ctx.r3.s64 = ctx.r11.s64 + 9944;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAE318;
	sub_82CB16F0(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r3,r11,26328
	ctx.r3.s64 = ctx.r11.s64 + 26328;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAE32C;
	sub_82CB16F0(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r3,r11,-22824
	ctx.r3.s64 = ctx.r11.s64 + -22824;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAE340;
	sub_82CB16F0(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r3,r11,9944
	ctx.r3.s64 = ctx.r11.s64 + 9944;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAE354;
	sub_82CB16F0(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r3,r11,-6440
	ctx.r3.s64 = ctx.r11.s64 + -6440;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAE368;
	sub_82CB16F0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,16420
	ctx.r11.u64 = ctx.r11.u64 | 16420;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82DAE390"))) PPC_WEAK_FUNC(sub_82DAE390);
PPC_FUNC_IMPL(__imp__sub_82DAE390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DAE398;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,268
	ctx.r29.s64 = ctx.r31.s64 + 268;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,2940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2940);
	ctx.f31.f64 = double(temp.f32);
loc_82DAE3C0:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82cb4940
	ctx.lr = 0x82DAE3DC;
	sub_82CB4940(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,8192
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8192, ctx.xer);
	// blt cr6,0x82dae3c0
	if (ctx.cr6.lt) goto loc_82DAE3C0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,4
	ctx.r9.s64 = 4;
	// ori r10,r11,49428
	ctx.r10.u64 = ctx.r11.u64 | 49428;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r7,r11,49436
	ctx.r7.u64 = ctx.r11.u64 | 49436;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stwx r10,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// ori r11,r11,49420
	ctx.r11.u64 = ctx.r11.u64 | 49420;
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// ble cr6,0x82dae47c
	if (!ctx.cr6.gt) goto loc_82DAE47C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82DAE43C:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DAE460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dae480
	if (!ctx.cr6.eq) goto loc_82DAE480;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dae43c
	if (ctx.cr6.lt) goto loc_82DAE43C;
loc_82DAE47C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAE480:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAE48C"))) PPC_WEAK_FUNC(sub_82DAE48C);
PPC_FUNC_IMPL(__imp__sub_82DAE48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAE490"))) PPC_WEAK_FUNC(sub_82DAE490);
PPC_FUNC_IMPL(__imp__sub_82DAE490) {
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
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// addi r31,r31,-16100
	ctx.r31.s64 = ctx.r31.s64 + -16100;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dae4dc
	if (ctx.cr6.eq) goto loc_82DAE4DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,3600
	ctx.r5.s64 = ctx.r11.s64 + 3600;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,233
	ctx.r6.s64 = 233;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DAE4D4;
	sub_82D861B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82DAE4DC:
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

__attribute__((alias("__imp__sub_82DAE4F4"))) PPC_WEAK_FUNC(sub_82DAE4F4);
PPC_FUNC_IMPL(__imp__sub_82DAE4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAE4F8"))) PPC_WEAK_FUNC(sub_82DAE4F8);
PPC_FUNC_IMPL(__imp__sub_82DAE4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17812);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82dae520
	if (!ctx.cr6.lt) goto loc_82DAE520;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DAE520:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82dae5cc
	if (ctx.cr6.gt) goto loc_82DAE5CC;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-6840
	ctx.r12.s64 = ctx.r12.s64 + -6840;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DAE558;
	case 1:
		goto loc_82DAE570;
	case 2:
		goto loc_82DAE590;
	case 3:
		goto loc_82DAE5B0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-6824(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6824);
	// lwz r22,-6800(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6800);
	// lwz r22,-6768(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6768);
	// lwz r22,-6736(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6736);
loc_82DAE558:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,16436
	ctx.r10.u64 = ctx.r10.u64 | 16436;
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82DAE570:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// subfic r11,r11,16383
	ctx.xer.ca = ctx.r11.u32 <= 16383;
	ctx.r11.s64 = 16383 - ctx.r11.s64;
	// ori r10,r10,16436
	ctx.r10.u64 = ctx.r10.u64 | 16436;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_82DAE590:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// ori r10,r10,16436
	ctx.r10.u64 = ctx.r10.u64 | 16436;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_82DAE5B0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// subfic r11,r11,32767
	ctx.xer.ca = ctx.r11.u32 <= 32767;
	ctx.r11.s64 = 32767 - ctx.r11.s64;
	// ori r10,r10,16436
	ctx.r10.u64 = ctx.r10.u64 | 16436;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82DAE5CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f0,7616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f0,-17812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17812);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82dae60c
	if (!ctx.cr6.lt) goto loc_82DAE60C;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DAE60C:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82dae6b8
	if (ctx.cr6.gt) goto loc_82DAE6B8;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-6604
	ctx.r12.s64 = ctx.r12.s64 + -6604;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DAE644;
	case 1:
		goto loc_82DAE65C;
	case 2:
		goto loc_82DAE67C;
	case 3:
		goto loc_82DAE69C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-6588(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6588);
	// lwz r22,-6564(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6564);
	// lwz r22,-6532(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6532);
	// lwz r22,-6500(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6500);
loc_82DAE644:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,16436
	ctx.r10.u64 = ctx.r10.u64 | 16436;
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82DAE65C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// subfic r11,r11,16383
	ctx.xer.ca = ctx.r11.u32 <= 16383;
	ctx.r11.s64 = 16383 - ctx.r11.s64;
	// ori r10,r10,16436
	ctx.r10.u64 = ctx.r10.u64 | 16436;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_82DAE67C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// ori r10,r10,16436
	ctx.r10.u64 = ctx.r10.u64 | 16436;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_82DAE69C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// subfic r11,r11,32767
	ctx.xer.ca = ctx.r11.u32 <= 32767;
	ctx.r11.s64 = 32767 - ctx.r11.s64;
	// ori r10,r10,16436
	ctx.r10.u64 = ctx.r10.u64 | 16436;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82DAE6B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE6C4"))) PPC_WEAK_FUNC(sub_82DAE6C4);
PPC_FUNC_IMPL(__imp__sub_82DAE6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAE6C8"))) PPC_WEAK_FUNC(sub_82DAE6C8);
PPC_FUNC_IMPL(__imp__sub_82DAE6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82DAE6D0;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// addis r24,r3,1
	ctx.r24.s64 = ctx.r3.s64 + 65536;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r24,r24,16428
	ctx.r24.s64 = ctx.r24.s64 + 16428;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82dae774
	if (!ctx.cr6.gt) goto loc_82DAE774;
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
loc_82DAE6F8:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x82dae728
	if (!ctx.cr6.gt) goto loc_82DAE728;
loc_82DAE708:
	// and r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 & ctx.r7.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82dae718
	if (ctx.cr6.eq) goto loc_82DAE718;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82DAE718:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82dae708
	if (ctx.cr6.lt) goto loc_82DAE708;
loc_82DAE728:
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82dae758
	if (!ctx.cr6.lt) goto loc_82DAE758;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_82DAE758:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dae6f8
	if (ctx.cr6.lt) goto loc_82DAE6F8;
loc_82DAE774:
	// addis r21,r3,1
	ctx.r21.s64 = ctx.r3.s64 + 65536;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r21,r21,16432
	ctx.r21.s64 = ctx.r21.s64 + 16432;
	// li r26,2
	ctx.r26.s64 = 2;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82daea5c
	if (!ctx.cr6.gt) goto loc_82DAEA5C;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r11.u64);
	// lfd f0,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,7616(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7616);
	ctx.f4.f64 = double(temp.f32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lfs f7,-17812(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17812);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f5.f64 = double(temp.f32);
	// ori r25,r6,16436
	ctx.r25.u64 = ctx.r6.u64 | 16436;
	// lfs f8,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f6.f64 = double(temp.f32);
	// frsp f3,f0
	ctx.f3.f64 = double(float(ctx.f0.f64));
loc_82DAE7DC:
	// rlwinm r26,r26,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// fmr f11,f6
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f6.f64;
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// fmr f12,f8
	ctx.f12.f64 = ctx.f8.f64;
	// srawi r23,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r26.s32 >> 1;
	// srawi r10,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r23.s32 >> 1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r10.u64);
	// lfd f0,-112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 / ctx.f0.f64));
	// fmuls f13,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,-128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82dae828
	if (!ctx.cr6.lt) goto loc_82DAE828;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DAE828:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// stw r11,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r11.u32);
	// bgt cr6,0x82dae8b8
	if (ctx.cr6.gt) goto loc_82DAE8B8;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-6060
	ctx.r12.s64 = ctx.r12.s64 + -6060;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DAE864;
	case 1:
		goto loc_82DAE874;
	case 2:
		goto loc_82DAE88C;
	case 3:
		goto loc_82DAE8A4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-6044(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6044);
	// lwz r22,-6028(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6028);
	// lwz r22,-6004(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6004);
	// lwz r22,-5980(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5980);
loc_82DAE864:
	// lwzx r10,r3,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// b 0x82dae8bc
	goto loc_82DAE8BC;
loc_82DAE874:
	// subfic r11,r11,16383
	ctx.xer.ca = ctx.r11.u32 <= 16383;
	ctx.r11.s64 = 16383 - ctx.r11.s64;
	// lwzx r10,r3,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f9,f13
	ctx.f9.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x82dae8bc
	goto loc_82DAE8BC;
loc_82DAE88C:
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// lwzx r10,r3,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f9,f13
	ctx.f9.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x82dae8bc
	goto loc_82DAE8BC;
loc_82DAE8A4:
	// subfic r11,r11,32767
	ctx.xer.ca = ctx.r11.u32 <= 32767;
	ctx.r11.s64 = 32767 - ctx.r11.s64;
	// lwzx r10,r3,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// b 0x82dae8bc
	goto loc_82DAE8BC;
loc_82DAE8B8:
	// fmr f9,f8
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f8.f64;
loc_82DAE8BC:
	// fsubs f0,f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// addi r11,r1,-120
	ctx.r11.s64 = ctx.r1.s64 + -120;
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82dae8e0
	if (!ctx.cr6.lt) goto loc_82DAE8E0;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DAE8E0:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// stw r11,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r11.u32);
	// bgt cr6,0x82dae970
	if (ctx.cr6.gt) goto loc_82DAE970;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-5876
	ctx.r12.s64 = ctx.r12.s64 + -5876;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DAE91C;
	case 1:
		goto loc_82DAE92C;
	case 2:
		goto loc_82DAE944;
	case 3:
		goto loc_82DAE95C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-5860(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5860);
	// lwz r22,-5844(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5844);
	// lwz r22,-5820(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5820);
	// lwz r22,-5796(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5796);
loc_82DAE91C:
	// lwzx r10,r3,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82dae974
	goto loc_82DAE974;
loc_82DAE92C:
	// subfic r11,r11,16383
	ctx.xer.ca = ctx.r11.u32 <= 16383;
	ctx.r11.s64 = 16383 - ctx.r11.s64;
	// lwzx r10,r3,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82dae974
	goto loc_82DAE974;
loc_82DAE944:
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// lwzx r10,r3,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82dae974
	goto loc_82DAE974;
loc_82DAE95C:
	// subfic r11,r11,32767
	ctx.xer.ca = ctx.r11.u32 <= 32767;
	ctx.r11.s64 = 32767 - ctx.r11.s64;
	// lwzx r10,r3,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82dae974
	goto loc_82DAE974;
loc_82DAE970:
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
loc_82DAE974:
	// fmuls f10,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82daea4c
	if (!ctx.cr6.gt) goto loc_82DAEA4C;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subfic r27,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r27.s64 = 4 - ctx.r11.s64;
	// addi r28,r5,4
	ctx.r28.s64 = ctx.r5.s64 + 4;
loc_82DAE998:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// add r10,r27,r5
	ctx.r10.u64 = ctx.r27.u64 + ctx.r5.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82daea24
	if (!ctx.cr6.lt) goto loc_82DAEA24;
	// rlwinm r7,r26,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DAE9B8:
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 + ctx.r6.u64;
	// fmuls f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f0,f0,f11,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f1.f64));
	// fmadds f13,f13,f11,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f31.f64));
	// fsubs f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// stfs f2,0(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// fsubs f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// stfs f2,0(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// fadds f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82dae9b8
	if (ctx.cr6.lt) goto loc_82DAE9B8;
loc_82DAEA24:
	// fmuls f0,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// fmuls f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// fmsubs f11,f9,f11,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f0.f64));
	// fmadds f12,f9,f12,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f13.f64));
	// blt cr6,0x82dae998
	if (ctx.cr6.lt) goto loc_82DAE998;
loc_82DAEA4C:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dae7dc
	if (ctx.cr6.lt) goto loc_82DAE7DC;
loc_82DAEA5C:
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAEA64"))) PPC_WEAK_FUNC(sub_82DAEA64);
PPC_FUNC_IMPL(__imp__sub_82DAEA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAEA68"))) PPC_WEAK_FUNC(sub_82DAEA68);
PPC_FUNC_IMPL(__imp__sub_82DAEA68) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82daea90
	if (!ctx.cr6.gt) goto loc_82DAEA90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82daea98
	goto loc_82DAEA98;
loc_82DAEA90:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f13.f64 = double(temp.f32);
loc_82DAEA98:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82daeab4
	if (!ctx.cr6.eq) goto loc_82DAEAB4;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82DAEAB4:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bne cr6,0x82daead8
	if (!ctx.cr6.eq) goto loc_82DAEAD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82DAEAD8:
	// bl 0x82cb4678
	ctx.lr = 0x82DAEADC;
	sub_82CB4678(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAEAF0"))) PPC_WEAK_FUNC(sub_82DAEAF0);
PPC_FUNC_IMPL(__imp__sub_82DAEAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,16440
	ctx.r11.u64 = ctx.r11.u64 | 16440;
	// stbx r10,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAEB04"))) PPC_WEAK_FUNC(sub_82DAEB04);
PPC_FUNC_IMPL(__imp__sub_82DAEB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAEB08"))) PPC_WEAK_FUNC(sub_82DAEB08);
PPC_FUNC_IMPL(__imp__sub_82DAEB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82DAEB10;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 65536;
	// addi r27,r27,-16100
	ctx.r27.s64 = ctx.r27.s64 + -16100;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82daeb84
	if (ctx.cr6.eq) goto loc_82DAEB84;
	// addis r25,r3,1
	ctx.r25.s64 = ctx.r3.s64 + 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r25,-16092
	ctx.r25.s64 = ctx.r25.s64 + -16092;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82daeb84
	if (!ctx.cr6.gt) goto loc_82DAEB84;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r26,r3,268
	ctx.r26.s64 = ctx.r3.s64 + 268;
	// ori r28,r11,16436
	ctx.r28.u64 = ctx.r11.u64 | 16436;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r29,r11,16444
	ctx.r29.u64 = ctx.r11.u64 | 16444;
loc_82DAEB58:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82dae290
	ctx.lr = 0x82DAEB64;
	sub_82DAE290(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// stwx r26,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r26.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82daeb58
	if (ctx.cr6.lt) goto loc_82DAEB58;
loc_82DAEB84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAEB90"))) PPC_WEAK_FUNC(sub_82DAEB90);
PPC_FUNC_IMPL(__imp__sub_82DAEB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x82DAEB98;
	__savegprlr_17(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r22,r23,1
	ctx.r22.s64 = ctx.r23.s64 + 65536;
	// addis r20,r23,1
	ctx.r20.s64 = ctx.r23.s64 + 65536;
	// addis r19,r23,1
	ctx.r19.s64 = ctx.r23.s64 + 65536;
	// addis r28,r23,1
	ctx.r28.s64 = ctx.r23.s64 + 65536;
	// addi r22,r22,-16092
	ctx.r22.s64 = ctx.r22.s64 + -16092;
	// lfs f31,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// addi r20,r20,-16112
	ctx.r20.s64 = ctx.r20.s64 + -16112;
	// addi r19,r19,-16116
	ctx.r19.s64 = ctx.r19.s64 + -16116;
	// addi r28,r28,-16108
	ctx.r28.s64 = ctx.r28.s64 + -16108;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r21,0(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r17,0
	ctx.r17.s64 = 0;
	// lwz r31,0(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// lfs f30,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// li r18,1
	ctx.r18.s64 = 1;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r30,r10,49432
	ctx.r30.u64 = ctx.r10.u64 | 49432;
	// bgt cr6,0x82daeccc
	if (ctx.cr6.gt) goto loc_82DAECCC;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-5104
	ctx.r12.s64 = ctx.r12.s64 + -5104;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82DAEC20;
	case 1:
		goto loc_82DAEC3C;
	case 2:
		goto loc_82DAECA0;
	case 3:
		goto loc_82DAECC0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-5088(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5088);
	// lwz r22,-5060(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5060);
	// lwz r22,-4960(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4960);
	// lwz r22,-4928(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4928);
loc_82DAEC20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,0(r19)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r19.u32 + 0, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82daeccc
	if (!ctx.cr6.eq) goto loc_82DAECCC;
	// stfs f31,0(r19)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r19.u32 + 0, temp.u32);
	// b 0x82daeccc
	goto loc_82DAECCC;
loc_82DAEC3C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17800);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82daec70
	if (!ctx.cr6.gt) goto loc_82DAEC70;
	// li r11,4096
	ctx.r11.s64 = 4096;
loc_82DAEC50:
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_82DAEC54:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82daeccc
	if (ctx.cr6.eq) goto loc_82DAECCC;
	// lwz r3,16(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// bl 0x82d8ac50
	ctx.lr = 0x82DAEC68;
	sub_82D8AC50(ctx, base);
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// b 0x82daeccc
	goto loc_82DAECCC;
loc_82DAEC70:
	// li r11,256
	ctx.r11.s64 = 256;
loc_82DAEC74:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82daec50
	if (!ctx.cr6.gt) goto loc_82DAEC50;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// ble cr6,0x82daec74
	if (!ctx.cr6.gt) goto loc_82DAEC74;
	// b 0x82daec54
	goto loc_82DAEC54;
loc_82DAECA0:
	// li r11,4
	ctx.r11.s64 = 4;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82daeccc
	if (ctx.cr6.eq) goto loc_82DAECCC;
	// lwz r3,16(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// bl 0x82d8ac50
	ctx.lr = 0x82DAECB8;
	sub_82D8AC50(ctx, base);
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// b 0x82daeccc
	goto loc_82DAECCC;
loc_82DAECC0:
	// add r11,r23,r30
	ctx.r11.u64 = ctx.r23.u64 + ctx.r30.u64;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
loc_82DAECCC:
	// addis r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 65536;
	// lwz r10,16(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// addi r11,r11,-16096
	ctx.r11.s64 = ctx.r11.s64 + -16096;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82daece8
	if (ctx.cr6.eq) goto loc_82DAECE8;
	// lwz r9,1244(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1244);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82DAECE8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82daecf8
	if (ctx.cr6.eq) goto loc_82DAECF8;
	// lwz r11,1256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1256);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_82DAECF8:
	// lwzx r11,r23,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82daed1c
	if (ctx.cr6.eq) goto loc_82DAED1C;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82daed1c
	if (ctx.cr6.eq) goto loc_82DAED1C;
	// lwz r3,16(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// bl 0x82d8ac50
	ctx.lr = 0x82DAED18;
	sub_82D8AC50(ctx, base);
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
loc_82DAED1C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r8,0(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// ori r27,r11,49436
	ctx.r27.u64 = ctx.r11.u64 | 49436;
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// ori r26,r11,33036
	ctx.r26.u64 = ctx.r11.u64 | 33036;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r24,r11,16416
	ctx.r24.u64 = ctx.r11.u64 | 16416;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r25,r11,16444
	ctx.r25.u64 = ctx.r11.u64 | 16444;
	// bne cr6,0x82daed54
	if (!ctx.cr6.eq) goto loc_82DAED54;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82daef90
	if (ctx.cr6.eq) goto loc_82DAEF90;
loc_82DAED54:
	// add r31,r23,r27
	ctx.r31.u64 = ctx.r23.u64 + ctx.r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82daed84
	if (!ctx.cr6.eq) goto loc_82DAED84;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_82DAED84:
	// cmpwi cr6,r8,1024
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1024, ctx.xer);
	// bgt cr6,0x82daedb0
	if (ctx.cr6.gt) goto loc_82DAEDB0;
	// beq cr6,0x82daeda0
	if (ctx.cr6.eq) goto loc_82DAEDA0;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// beq cr6,0x82daedc0
	if (ctx.cr6.eq) goto loc_82DAEDC0;
	// cmpwi cr6,r8,512
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 512, ctx.xer);
	// b 0x82daedbc
	goto loc_82DAEDBC;
loc_82DAEDA0:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r9,r11,22744
	ctx.r9.s64 = ctx.r11.s64 + 22744;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x82daedcc
	goto loc_82DAEDCC;
loc_82DAEDB0:
	// cmpwi cr6,r8,2048
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2048, ctx.xer);
	// beq cr6,0x82daedc0
	if (ctx.cr6.eq) goto loc_82DAEDC0;
	// cmpwi cr6,r8,4096
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4096, ctx.xer);
loc_82DAEDBC:
	// bne cr6,0x82daedd0
	if (!ctx.cr6.eq) goto loc_82DAEDD0;
loc_82DAEDC0:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r9,r11,22744
	ctx.r9.s64 = ctx.r11.s64 + 22744;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DAEDCC:
	// li r4,513
	ctx.r4.s64 = 513;
loc_82DAEDD0:
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,7616(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7616);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// ble cr6,0x82daef44
	if (!ctx.cr6.gt) goto loc_82DAEF44;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fdivs f9,f31,f13
	ctx.f9.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// add r11,r23,r26
	ctx.r11.u64 = ctx.r23.u64 + ctx.r26.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82DAEE54:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daee7c
	if (ctx.cr6.eq) goto loc_82DAEE7C;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82daee70
	if (ctx.cr6.lt) goto loc_82DAEE70;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82daef1c
	goto loc_82DAEF1C;
loc_82DAEE70:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82daef1c
	goto loc_82DAEF1C;
loc_82DAEE7C:
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// addi r8,r4,-1
	ctx.r8.s64 = ctx.r4.s64 + -1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82daeec0
	if (!ctx.cr6.gt) goto loc_82DAEEC0;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// li r8,-1
	ctx.r8.s64 = -1;
	// b 0x82daeec4
	goto loc_82DAEEC4;
loc_82DAEEC0:
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
loc_82DAEEC4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// lfsx f13,r29,r9
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82daef18
	if (ctx.cr6.eq) goto loc_82DAEF18;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82daef1c
	goto loc_82DAEF1C;
loc_82DAEF18:
	// stfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82DAEF1C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82daee54
	if (ctx.cr6.lt) goto loc_82DAEE54;
loc_82DAEF44:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82daef7c
	if (!ctx.cr6.gt) goto loc_82DAEF7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r23,r26
	ctx.r8.u64 = ctx.r23.u64 + ctx.r26.u64;
loc_82DAEF5C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stwx r8,r9,r24
	PPC_STORE_U32(ctx.r9.u32 + ctx.r24.u32, ctx.r8.u32);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82daef5c
	if (ctx.cr6.lt) goto loc_82DAEF5C;
loc_82DAEF7C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DAEF90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DAEF90:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x82daefac
	if (!ctx.cr6.eq) goto loc_82DAEFAC;
	// add r30,r23,r27
	ctx.r30.u64 = ctx.r23.u64 + ctx.r27.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82daf094
	if (!ctx.cr6.eq) goto loc_82DAF094;
loc_82DAEFAC:
	// add r30,r23,r27
	ctx.r30.u64 = ctx.r23.u64 + ctx.r27.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r29,-31909
	ctx.r29.s64 = -2091188224;
	// addi r31,r11,3600
	ctx.r31.s64 = ctx.r11.s64 + 3600;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82daefe0
	if (ctx.cr6.eq) goto loc_82DAEFE0;
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1648
	ctx.r6.s64 = 1648;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DAEFE0;
	sub_82D861B0(ctx, base);
loc_82DAEFE0:
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1651
	ctx.r6.s64 = 1651;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mullw r4,r10,r25
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82DAF004;
	sub_82D85F40(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82daf038
	if (!ctx.cr6.eq) goto loc_82DAF038;
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82daf024
	if (ctx.cr6.eq) goto loc_82DAF024;
	// lwz r3,16(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// bl 0x82d8ac78
	ctx.lr = 0x82DAF024;
	sub_82D8AC78(ctx, base);
loc_82DAF024:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_82DAF038:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82daf094
	if (!ctx.cr6.gt) goto loc_82DAF094;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r27,r23,268
	ctx.r27.s64 = ctx.r23.s64 + 268;
	// add r26,r23,r26
	ctx.r26.u64 = ctx.r23.u64 + ctx.r26.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r28,r11,16436
	ctx.r28.u64 = ctx.r11.u64 | 16436;
loc_82DAF05C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82dae290
	ctx.lr = 0x82DAF068;
	sub_82DAE290(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwx r26,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r26.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 + ctx.r25.u64;
	// stwx r27,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r27.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82daf05c
	if (ctx.cr6.lt) goto loc_82DAF05C;
loc_82DAF094:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82daf0fc
	if (!ctx.cr6.gt) goto loc_82DAF0FC;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// fdivs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r7,r10,16424
	ctx.r7.u64 = ctx.r10.u64 | 16424;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r8,r10,16440
	ctx.r8.u64 = ctx.r10.u64 | 16440;
loc_82DAF0BC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,0(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfsx f13,r10,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// lfs f13,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// beq cr6,0x82daf0e8
	if (ctx.cr6.eq) goto loc_82DAF0E8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r18,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r18.u8);
loc_82DAF0E8:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82daf0bc
	if (ctx.cr6.lt) goto loc_82DAF0BC;
loc_82DAF0FC:
	// addis r9,r23,1
	ctx.r9.s64 = ctx.r23.s64 + 65536;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-16088
	ctx.r9.s64 = ctx.r9.s64 + -16088;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// ble cr6,0x82daf12c
	if (!ctx.cr6.gt) goto loc_82DAF12C;
loc_82DAF118:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82daf118
	if (ctx.cr6.gt) goto loc_82DAF118;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82DAF12C:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82daf140
	if (ctx.cr6.eq) goto loc_82DAF140;
	// lwz r3,16(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// bl 0x82d8ac78
	ctx.lr = 0x82DAF140;
	sub_82D8AC78(ctx, base);
loc_82DAF140:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAF154"))) PPC_WEAK_FUNC(sub_82DAF154);
PPC_FUNC_IMPL(__imp__sub_82DAF154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAF158"))) PPC_WEAK_FUNC(sub_82DAF158);
PPC_FUNC_IMPL(__imp__sub_82DAF158) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgt cr6,0x82daf27c
	if (ctx.cr6.gt) goto loc_82DAF27C;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,-3700
	ctx.r12.s64 = ctx.r12.s64 + -3700;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82DAF19C;
	case 1:
		goto loc_82DAF1EC;
	case 2:
		goto loc_82DAF210;
	case 3:
		goto loc_82DAF234;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-3684(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3684);
	// lwz r22,-3604(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3604);
	// lwz r22,-3568(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3568);
	// lwz r22,-3532(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3532);
loc_82DAF19C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r10,r10,49420
	ctx.r10.u64 = ctx.r10.u64 | 49420;
	// beq cr6,0x82daf1b4
	if (ctx.cr6.eq) goto loc_82DAF1B4;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAF1B4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daf27c
	if (ctx.cr6.eq) goto loc_82DAF27C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// lfsx f1,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DAF1D8;
	sub_82CB61F0(ctx, base);
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
loc_82DAF1EC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r10,r10,49424
	ctx.r10.u64 = ctx.r10.u64 | 49424;
	// beq cr6,0x82daf260
	if (ctx.cr6.eq) goto loc_82DAF260;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82daf254
	goto loc_82DAF254;
loc_82DAF210:
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r10,r10,49428
	ctx.r10.u64 = ctx.r10.u64 | 49428;
	// beq cr6,0x82daf260
	if (ctx.cr6.eq) goto loc_82DAF260;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82daf254
	goto loc_82DAF254;
loc_82DAF234:
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r10,r10,49432
	ctx.r10.u64 = ctx.r10.u64 | 49432;
	// beq cr6,0x82daf260
	if (ctx.cr6.eq) goto loc_82DAF260;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82DAF254:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82DAF260:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82daf27c
	if (ctx.cr6.eq) goto loc_82DAF27C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,24704
	ctx.r4.s64 = ctx.r10.s64 + 24704;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DAF27C;
	sub_82CB61F0(ctx, base);
loc_82DAF27C:
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
}

__attribute__((alias("__imp__sub_82DAF290"))) PPC_WEAK_FUNC(sub_82DAF290);
PPC_FUNC_IMPL(__imp__sub_82DAF290) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82daf2a0
	if (!ctx.cr6.eq) goto loc_82DAF2A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAF2A0:
	// b 0x82dae390
	sub_82DAE390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAF2A4"))) PPC_WEAK_FUNC(sub_82DAF2A4);
PPC_FUNC_IMPL(__imp__sub_82DAF2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAF2A8"))) PPC_WEAK_FUNC(sub_82DAF2A8);
PPC_FUNC_IMPL(__imp__sub_82DAF2A8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82daf2c8
	if (!ctx.cr6.eq) goto loc_82DAF2C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DAF2C8:
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// addi r31,r31,-16100
	ctx.r31.s64 = ctx.r31.s64 + -16100;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82daf304
	if (ctx.cr6.eq) goto loc_82DAF304;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,3600
	ctx.r5.s64 = ctx.r11.s64 + 3600;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,233
	ctx.r6.s64 = 233;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82DAF2FC;
	sub_82D861B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82DAF304:
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

__attribute__((alias("__imp__sub_82DAF31C"))) PPC_WEAK_FUNC(sub_82DAF31C);
PPC_FUNC_IMPL(__imp__sub_82DAF31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAF320"))) PPC_WEAK_FUNC(sub_82DAF320);
PPC_FUNC_IMPL(__imp__sub_82DAF320) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82daf330
	if (!ctx.cr6.eq) goto loc_82DAF330;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAF330:
	// b 0x82daeb08
	sub_82DAEB08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAF334"))) PPC_WEAK_FUNC(sub_82DAF334);
PPC_FUNC_IMPL(__imp__sub_82DAF334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAF338"))) PPC_WEAK_FUNC(sub_82DAF338);
PPC_FUNC_IMPL(__imp__sub_82DAF338) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82daf348
	if (!ctx.cr6.eq) goto loc_82DAF348;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAF348:
	// b 0x82daeb90
	sub_82DAEB90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAF34C"))) PPC_WEAK_FUNC(sub_82DAF34C);
PPC_FUNC_IMPL(__imp__sub_82DAF34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAF350"))) PPC_WEAK_FUNC(sub_82DAF350);
PPC_FUNC_IMPL(__imp__sub_82DAF350) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82daf360
	if (!ctx.cr6.eq) goto loc_82DAF360;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DAF360:
	// b 0x82daf158
	sub_82DAF158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAF364"))) PPC_WEAK_FUNC(sub_82DAF364);
PPC_FUNC_IMPL(__imp__sub_82DAF364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAF368"))) PPC_WEAK_FUNC(sub_82DAF368);
PPC_FUNC_IMPL(__imp__sub_82DAF368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82DAF370;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ab0
	ctx.lr = 0x82DAF378;
	__savefpr_14(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r10,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r10.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stfs f27,764(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 764, temp.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r6,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r6.u32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r30.u32);
	// lfs f16,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f16.f64 = double(temp.f32);
	// add r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r5,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r5.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r5,820(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// fmr f0,f16
	ctx.f0.f64 = ctx.f16.f64;
	// stw r4,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r4.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82daf430
	if (ctx.cr6.lt) goto loc_82DAF430;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DAF3E4:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bne cr6,0x82daf3e4
	if (!ctx.cr6.eq) goto loc_82DAF3E4;
loc_82DAF430:
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82daf45c
	if (!ctx.cr6.lt) goto loc_82DAF45C;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r8,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r8.s64;
loc_82DAF440:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bne cr6,0x82daf440
	if (!ctx.cr6.eq) goto loc_82DAF440;
loc_82DAF45C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6480);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82daf4a4
	if (!ctx.cr6.lt) goto loc_82DAF4A4;
	// add r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 + ctx.r7.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82db081c
	if (!ctx.cr6.gt) goto loc_82DB081C;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82DAF480:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stfs f16,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82daf480
	if (!ctx.cr6.eq) goto loc_82DAF480;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6afc
	ctx.lr = 0x82DAF4A0;
	__restfpr_14(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82DAF4A4:
	// addis r17,r27,1
	ctx.r17.s64 = ctx.r27.s64 + 65536;
	// addis r19,r27,1
	ctx.r19.s64 = ctx.r27.s64 + 65536;
	// addi r17,r17,16420
	ctx.r17.s64 = ctx.r17.s64 + 16420;
	// addi r19,r19,16428
	ctx.r19.s64 = ctx.r19.s64 + 16428;
	// twllei r6,0
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r16,r11,r6
	ctx.r16.s32 = ctx.r11.s32 / ctx.r6.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// andc r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ~ctx.r10.u64;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// twlgei r10,-1
	// extsw r10,r16
	ctx.r10.s64 = ctx.r16.s32;
	// std r9,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r9.u64);
	// subf r18,r16,r11
	ctx.r18.s64 = ctx.r11.s64 - ctx.r16.s64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addze r21,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r21.s64 = temp.s64;
	// std r10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// lfs f30,-18292(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18292);
	ctx.f30.f64 = double(temp.f32);
	// lfd f0,216(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f30,216(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lfd f13,200(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f24,f2,f0
	ctx.f24.f64 = double(float(ctx.f2.f64 / ctx.f0.f64));
	// stfs f24,156(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fdivs f19,f13,f0
	ctx.f19.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bne cr6,0x82daf530
	if (!ctx.cr6.eq) goto loc_82DAF530;
	// stw r18,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r18.u32);
loc_82DAF530:
	// addis r31,r27,1
	ctx.r31.s64 = ctx.r27.s64 + 65536;
	// addi r31,r31,16440
	ctx.r31.s64 = ctx.r31.s64 + 16440;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82daf570
	if (ctx.cr6.eq) goto loc_82DAF570;
	// addis r3,r27,1
	ctx.r3.s64 = ctx.r27.s64 + 65536;
	// li r5,8208
	ctx.r5.s64 = 8208;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-32768
	ctx.r3.s64 = ctx.r3.s64 + -32768;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAF558;
	sub_82CB16F0(ctx, base);
	// addis r3,r27,1
	ctx.r3.s64 = ctx.r27.s64 + 65536;
	// li r5,8208
	ctx.r5.s64 = 8208;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-24560
	ctx.r3.s64 = ctx.r3.s64 + -24560;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAF56C;
	sub_82CB16F0(ctx, base);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
loc_82DAF570:
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82db081c
	if (!ctx.cr6.gt) goto loc_82DB081C;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r23,r11,9944
	ctx.r23.s64 = ctx.r11.s64 + 9944;
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r25,r11,-6440
	ctx.r25.s64 = ctx.r11.s64 + -6440;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// lfs f0,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r24,r11,26328
	ctx.r24.s64 = ctx.r11.s64 + 26328;
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// lfs f0,-18324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// lis r30,-32222
	ctx.r30.s64 = -2111700992;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r22,r11,-22824
	ctx.r22.s64 = ctx.r11.s64 + -22824;
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// lfs f29,7616(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 7616);
	ctx.f29.f64 = double(temp.f32);
	// lis r31,-32222
	ctx.r31.s64 = -2111700992;
	// stfs f29,208(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r20,r11,9944
	ctx.r20.s64 = ctx.r11.s64 + 9944;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f31,-17812(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -17812);
	ctx.f31.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// ori r14,r11,16416
	ctx.r14.u64 = ctx.r11.u64 | 16416;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f25,-17324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -17324);
	ctx.f25.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stfs f25,192(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// ori r26,r11,16436
	ctx.r26.u64 = ctx.r11.u64 | 16436;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f26,6380(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6380);
	ctx.f26.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f26,200(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f28,16608(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16608);
	ctx.f28.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ori r15,r11,49184
	ctx.r15.u64 = ctx.r11.u64 | 49184;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f0,11008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f14,-18288(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -18288);
	ctx.f14.f64 = double(temp.f32);
	// lfs f17,7676(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7676);
	ctx.f17.f64 = double(temp.f32);
	// ori r28,r11,32800
	ctx.r28.u64 = ctx.r11.u64 | 32800;
	// lfs f15,21744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21744);
	ctx.f15.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82DAF63C:
	// lwz r10,820(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,812(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,796(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 796);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r27
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, temp.u32);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// subf r10,r18,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r18.s64;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r27
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,804(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// blt cr6,0x82db0804
	if (ctx.cr6.lt) goto loc_82DB0804;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r18,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r18.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82daf6e8
	if (!ctx.cr6.gt) goto loc_82DAF6E8;
	// add r8,r27,r14
	ctx.r8.u64 = ctx.r27.u64 + ctx.r14.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r20,4
	ctx.r10.s64 = ctx.r20.s64 + 4;
loc_82DAF6B8:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lfsx f0,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfsx f13,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f16,0(r10)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lwz r7,0(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82daf6b8
	if (ctx.cr6.lt) goto loc_82DAF6B8;
loc_82DAF6E8:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82dae6c8
	ctx.lr = 0x82DAF6F8;
	sub_82DAE6C8(ctx, base);
	// lwz r11,780(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// lfd f0,368(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f18,f0
	ctx.f18.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f18,f24
	ctx.f0.f64 = double(float(ctx.f18.f64 * ctx.f24.f64));
	// fmuls f20,f0,f15
	ctx.f20.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// blt cr6,0x82dafb14
	if (ctx.cr6.lt) goto loc_82DAFB14;
	// addis r31,r27,1
	ctx.r31.s64 = ctx.r27.s64 + 65536;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r28,r20,12
	ctx.r28.s64 = ctx.r20.s64 + 12;
	// addi r31,r31,-32760
	ctx.r31.s64 = ctx.r31.s64 + -32760;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82DAF734:
	// lfs f29,-8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f24,-12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -12);
	ctx.f24.f64 = double(temp.f32);
	// fcmpu cr6,f29,f16
	ctx.cr6.compare(ctx.f29.f64, ctx.f16.f64);
	// lfs f23,-4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	ctx.f23.f64 = double(temp.f32);
	// lfs f27,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// lfs f22,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f22.f64 = double(temp.f32);
	// lfs f26,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// lfs f21,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f21.f64 = double(temp.f32);
	// lfs f25,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f25.f64 = double(temp.f32);
	// lfs f31,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x82daf768
	if (!ctx.cr6.gt) goto loc_82DAF768;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82daf76c
	goto loc_82DAF76C;
loc_82DAF768:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_82DAF76C:
	// fcmpu cr6,f29,f16
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f16.f64);
	// bne cr6,0x82daf77c
	if (!ctx.cr6.eq) goto loc_82DAF77C;
	// fmr f28,f16
	ctx.f28.f64 = ctx.f16.f64;
	// b 0x82daf7a0
	goto loc_82DAF7A0;
loc_82DAF77C:
	// fcmpu cr6,f24,f16
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f16.f64);
	// bne cr6,0x82daf790
	if (!ctx.cr6.eq) goto loc_82DAF790;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f28,f0,f13
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82daf7a0
	goto loc_82DAF7A0;
loc_82DAF790:
	// fmr f2,f24
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82cb4678
	ctx.lr = 0x82DAF79C;
	sub_82CB4678(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
loc_82DAF7A0:
	// fcmpu cr6,f27,f16
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f16.f64);
	// ble cr6,0x82daf7b0
	if (!ctx.cr6.gt) goto loc_82DAF7B0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82daf7b4
	goto loc_82DAF7B4;
loc_82DAF7B0:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_82DAF7B4:
	// fcmpu cr6,f27,f16
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f16.f64);
	// bne cr6,0x82daf7c4
	if (!ctx.cr6.eq) goto loc_82DAF7C4;
	// fmr f30,f16
	ctx.f30.f64 = ctx.f16.f64;
	// b 0x82daf7e8
	goto loc_82DAF7E8;
loc_82DAF7C4:
	// fcmpu cr6,f23,f16
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f23.f64, ctx.f16.f64);
	// bne cr6,0x82daf7d8
	if (!ctx.cr6.eq) goto loc_82DAF7D8;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82daf7e8
	goto loc_82DAF7E8;
loc_82DAF7D8:
	// fmr f2,f23
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f23.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82cb4678
	ctx.lr = 0x82DAF7E4;
	sub_82CB4678(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
loc_82DAF7E8:
	// fcmpu cr6,f26,f16
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f16.f64);
	// ble cr6,0x82daf7f8
	if (!ctx.cr6.gt) goto loc_82DAF7F8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82daf7fc
	goto loc_82DAF7FC;
loc_82DAF7F8:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_82DAF7FC:
	// fcmpu cr6,f26,f16
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f16.f64);
	// bne cr6,0x82daf80c
	if (!ctx.cr6.eq) goto loc_82DAF80C;
	// fmr f31,f16
	ctx.f31.f64 = ctx.f16.f64;
	// b 0x82daf830
	goto loc_82DAF830;
loc_82DAF80C:
	// fcmpu cr6,f22,f16
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f22.f64, ctx.f16.f64);
	// bne cr6,0x82daf820
	if (!ctx.cr6.eq) goto loc_82DAF820;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82daf830
	goto loc_82DAF830;
loc_82DAF820:
	// fmr f2,f22
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f22.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82cb4678
	ctx.lr = 0x82DAF82C;
	sub_82CB4678(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
loc_82DAF830:
	// fcmpu cr6,f25,f16
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f16.f64);
	// ble cr6,0x82daf840
	if (!ctx.cr6.gt) goto loc_82DAF840;
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82daf844
	goto loc_82DAF844;
loc_82DAF840:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_82DAF844:
	// fcmpu cr6,f25,f16
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f16.f64);
	// bne cr6,0x82daf854
	if (!ctx.cr6.eq) goto loc_82DAF854;
	// fmr f0,f16
	ctx.f0.f64 = ctx.f16.f64;
	// b 0x82daf878
	goto loc_82DAF878;
loc_82DAF854:
	// fcmpu cr6,f21,f16
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f21.f64, ctx.f16.f64);
	// bne cr6,0x82daf868
	if (!ctx.cr6.eq) goto loc_82DAF868;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82daf878
	goto loc_82DAF878;
loc_82DAF868:
	// fmr f2,f21
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f21.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x82cb4678
	ctx.lr = 0x82DAF874;
	sub_82CB4678(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_82DAF878:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// fmuls f13,f24,f24
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f24.f64));
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
	// fmuls f12,f23,f23
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f23.f64));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmuls f11,f22,f22
	ctx.f11.f64 = double(float(ctx.f22.f64 * ctx.f22.f64));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f10,f21,f21
	ctx.f10.f64 = double(float(ctx.f21.f64 * ctx.f21.f64));
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// extsw r8,r29
	ctx.r8.s64 = ctx.r29.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r11.u64);
	// addi r11,r22,8
	ctx.r11.s64 = ctx.r22.s64 + 8;
	// std r10,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r10.u64);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// std r8,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r8.u64);
	// fmadds f13,f29,f29,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f13.f64));
	// std r9,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r9.u64);
	// fmadds f12,f27,f27,f12
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f27.f64 + ctx.f12.f64));
	// fmadds f11,f26,f26,f11
	ctx.f11.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f11.f64));
	// fmadds f8,f25,f25,f10
	ctx.f8.f64 = double(float(ctx.f25.f64 * ctx.f25.f64 + ctx.f10.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fsqrts f5,f8
	ctx.f5.f64 = double(float(sqrt(ctx.f8.f64)));
	// fmuls f13,f13,f17
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f17.f64));
	// fmuls f12,f12,f17
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f17.f64));
	// fmuls f11,f11,f17
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f17.f64));
	// lfd f10,240(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfd f9,336(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f7,256(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// lfd f6,384(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// stfsx f13,r30,r22
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r22.u32, temp.u32);
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f8,f7
	ctx.f8.f64 = double(float(ctx.f7.f64));
	// frsp f7,f6
	ctx.f7.f64 = double(float(ctx.f6.f64));
	// fmuls f6,f5,f17
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f17.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// lfs f11,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f28,-8(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// fnmadds f12,f10,f19,f13
	ctx.f12.f64 = double(float(-(ctx.f10.f64 * ctx.f19.f64 + ctx.f13.f64)));
	// stfs f30,-4(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// fnmadds f13,f9,f19,f11
	ctx.f13.f64 = double(float(-(ctx.f9.f64 * ctx.f19.f64 + ctx.f11.f64)));
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fnmadds f11,f7,f19,f4
	ctx.f11.f64 = double(float(-(ctx.f7.f64 * ctx.f19.f64 + ctx.f4.f64)));
	// fadds f6,f12,f30
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fnmadds f12,f8,f19,f5
	ctx.f12.f64 = double(float(-(ctx.f8.f64 * ctx.f19.f64 + ctx.f5.f64)));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f5,f13,f14
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f14.f64));
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fctiwz f11,f5
	ctx.f11.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfiwx f11,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// blt cr6,0x82daf994
	if (ctx.cr6.lt) goto loc_82DAF994;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82daf998
	goto loc_82DAF998;
loc_82DAF994:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82DAF998:
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmuls f11,f6,f14
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f14.f64));
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// lfs f4,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f4.f64 = double(temp.f32);
	// std r11,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r11.u64);
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfiwx f11,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f11.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lfd f11,272(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fnmsubs f5,f11,f4,f13
	ctx.f5.f64 = double(float(-(ctx.f11.f64 * ctx.f4.f64 - ctx.f13.f64)));
	// blt cr6,0x82daf9e0
	if (ctx.cr6.lt) goto loc_82DAF9E0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82daf9e4
	goto loc_82DAF9E4;
loc_82DAF9E0:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82DAF9E4:
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmuls f13,f12,f14
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f14.f64));
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// std r11,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r11.u64);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lfd f13,352(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f11,f13,f4,f6
	ctx.f11.f64 = double(float(-(ctx.f13.f64 * ctx.f4.f64 - ctx.f6.f64)));
	// blt cr6,0x82dafa28
	if (ctx.cr6.lt) goto loc_82DAFA28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82dafa2c
	goto loc_82DAFA2C;
loc_82DAFA28:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82DAFA2C:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmuls f13,f0,f14
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f14.f64));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// std r11,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r11.u64);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lfd f13,288(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f13,f13,f4,f12
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f4.f64 - ctx.f12.f64)));
	// blt cr6,0x82dafa70
	if (ctx.cr6.lt) goto loc_82DAFA70;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82dafa74
	goto loc_82DAFA74;
loc_82DAFA70:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82DAFA74:
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f12,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f20
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f20.f64));
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// addi r10,r24,8
	ctx.r10.s64 = ctx.r24.s64 + 8;
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// addi r9,r24,12
	ctx.r9.s64 = ctx.r24.s64 + 12;
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// std r11,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r11.u64);
	// addi r11,r24,4
	ctx.r11.s64 = ctx.r24.s64 + 4;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// fmadds f13,f8,f12,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f5,f20,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f20.f64 + ctx.f9.f64));
	// stfsx f9,r30,r24
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r24.u32, temp.u32);
	// fmadds f11,f11,f20,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f20.f64 + ctx.f10.f64));
	// stfsx f11,r30,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// stfsx f13,r30,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// lfd f13,416(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f0,f13,f4,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f4.f64 - ctx.f0.f64)));
	// fmadds f0,f0,f20,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f20.f64 + ctx.f7.f64));
	// stfsx f0,r30,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, temp.u32);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// ble cr6,0x82daf734
	if (!ctx.cr6.gt) goto loc_82DAF734;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f29,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f31.f64 = double(temp.f32);
	// fmr f24,f12
	ctx.f24.f64 = ctx.f12.f64;
	// lfs f25,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f25.f64 = double(temp.f32);
	// ori r28,r11,32800
	ctx.r28.u64 = ctx.r11.u64 | 32800;
	// lfs f26,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f26.f64 = double(temp.f32);
	// lfs f28,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f30.f64 = double(temp.f32);
	// lfs f27,764(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 764);
	ctx.f27.f64 = double(temp.f32);
loc_82DAFB14:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAFB28;
	sub_82CB16F0(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DAFB3C;
	sub_82CB16F0(ctx, base);
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82dafccc
	if (ctx.cr6.lt) goto loc_82DAFCCC;
	// addi r7,r21,-3
	ctx.r7.s64 = ctx.r21.s64 + -3;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DAFB58:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r10,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r10.u64);
	// lfd f0,304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f27,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f26.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f0.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x82dafba8
	if (ctx.cr6.gt) goto loc_82DAFBA8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r24
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfsx f13,r11,r22
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f0,r10,r23
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r23.u32, temp.u32);
	// lfsx f0,r10,r25
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsx f0,r10,r25
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, temp.u32);
loc_82DAFBA8:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// lfd f0,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f27,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f26.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f0.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x82dafc04
	if (ctx.cr6.gt) goto loc_82DAFC04;
	// addi r6,r24,4
	ctx.r6.s64 = ctx.r24.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r22,4
	ctx.r5.s64 = ctx.r22.s64 + 4;
	// lfsx f0,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// stfsx f0,r10,r23
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r23.u32, temp.u32);
	// lfsx f0,r10,r25
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r5
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsx f0,r10,r25
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, temp.u32);
loc_82DAFC04:
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r10,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r10.u64);
	// lfd f0,320(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f27,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f26.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f0.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x82dafc5c
	if (ctx.cr6.gt) goto loc_82DAFC5C;
	// addi r6,r24,8
	ctx.r6.s64 = ctx.r24.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r22,8
	ctx.r5.s64 = ctx.r22.s64 + 8;
	// lfsx f0,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// stfsx f0,r10,r23
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r23.u32, temp.u32);
	// lfsx f0,r10,r25
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r5
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsx f0,r10,r25
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, temp.u32);
loc_82DAFC5C:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r10.u64);
	// lfd f0,400(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f27,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f26.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f0.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x82dafcb8
	if (ctx.cr6.gt) goto loc_82DAFCB8;
	// addi r6,r24,12
	ctx.r6.s64 = ctx.r24.s64 + 12;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r22,12
	ctx.r5.s64 = ctx.r22.s64 + 12;
	// lfsx f0,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// stfsx f0,r10,r23
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r23.u32, temp.u32);
	// lfsx f0,r10,r25
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r5
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsx f0,r10,r25
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, temp.u32);
loc_82DAFCB8:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82dafb58
	if (!ctx.cr6.gt) goto loc_82DAFB58;
loc_82DAFCCC:
	// cmpw cr6,r8,r21
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x82dafd38
	if (ctx.cr6.gt) goto loc_82DAFD38;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DAFCD8:
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// std r11,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r11.u64);
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f27,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f26.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x82dafd28
	if (ctx.cr6.gt) goto loc_82DAFD28;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r24
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfsx f13,r10,r22
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f0,r11,r23
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, temp.u32);
	// lfsx f0,r11,r25
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsx f0,r11,r25
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, temp.u32);
loc_82DAFD28:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r21
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r21.s32, ctx.xer);
	// ble cr6,0x82dafcd8
	if (!ctx.cr6.gt) goto loc_82DAFCD8;
loc_82DAFD38:
	// fdivs f8,f30,f18
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f30.f64 / ctx.f18.f64));
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt cr6,0x82db061c
	if (ctx.cr6.lt) goto loc_82DB061C;
	// addis r9,r27,1
	ctx.r9.s64 = ctx.r27.s64 + 65536;
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f0,f24
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f24.f64));
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r7,r20,12
	ctx.r7.s64 = ctx.r20.s64 + 12;
	// addi r9,r9,-24552
	ctx.r9.s64 = ctx.r9.s64 + -24552;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82DAFD60:
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// lfsx f7,r8,r23
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// lfs f10,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// addi r4,r6,1
	ctx.r4.s64 = ctx.r6.s64 + 1;
	// std r11,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r11.u64);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// std r10,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r10.u64);
	// addi r11,r23,8
	ctx.r11.s64 = ctx.r23.s64 + 8;
	// std r5,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r5.u64);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// std r4,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r4.u64);
	// lfd f0,248(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,264(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,280(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,296(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmsubs f7,f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 - ctx.f0.f64));
	// fmuls f0,f0,f19
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f19.f64));
	// fmuls f6,f13,f19
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f19.f64));
	// fmuls f5,f12,f19
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f19.f64));
	// fmuls f4,f11,f19
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f19.f64));
	// fmadds f0,f7,f8,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,-8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f13.f64));
	// lfs f13,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f8,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,-4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f9,f0,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f8,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f11.f64));
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f8,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f0,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82dafe64
	if (!ctx.cr6.gt) goto loc_82DAFE64;
	// fmuls f13,f0,f15
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r11.u64);
	// lfd f13,312(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// b 0x82dafe8c
	goto loc_82DAFE8C;
loc_82DAFE64:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82dafe9c
	if (!ctx.cr6.lt) goto loc_82DAFE9C;
	// fmuls f13,f0,f15
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r11.u64);
	// lfd f13,328(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
loc_82DAFE8C:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f0,f13,f30,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f0.f64)));
	// stfs f0,-8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
loc_82DAFE9C:
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82dafecc
	if (!ctx.cr6.gt) goto loc_82DAFECC;
	// fmuls f13,f0,f15
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r11.u64);
	// lfd f13,344(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// b 0x82dafef4
	goto loc_82DAFEF4;
loc_82DAFECC:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82daff04
	if (!ctx.cr6.lt) goto loc_82DAFF04;
	// fmuls f13,f0,f15
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r11.u64);
	// lfd f13,360(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
loc_82DAFEF4:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f0,f13,f30,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f0.f64)));
	// stfs f0,-4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
loc_82DAFF04:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82daff34
	if (!ctx.cr6.gt) goto loc_82DAFF34;
	// fmuls f13,f0,f15
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r11.u64);
	// lfd f13,376(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// b 0x82daff5c
	goto loc_82DAFF5C;
loc_82DAFF34:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82daff6c
	if (!ctx.cr6.lt) goto loc_82DAFF6C;
	// fmuls f13,f0,f15
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r11.u64);
	// lfd f13,392(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
loc_82DAFF5C:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f0,f13,f30,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f0.f64)));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82DAFF6C:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82daff9c
	if (!ctx.cr6.gt) goto loc_82DAFF9C;
	// fmuls f13,f0,f15
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.r11.u64);
	// lfd f13,408(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// b 0x82daffc4
	goto loc_82DAFFC4;
loc_82DAFF9C:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82daffd4
	if (!ctx.cr6.lt) goto loc_82DAFFD4;
	// fmuls f13,f0,f15
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,424(r1)
	PPC_STORE_U64(ctx.r1.u32 + 424, ctx.r11.u64);
	// lfd f13,424(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
loc_82DAFFC4:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f0,f13,f30,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f0.f64)));
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
loc_82DAFFD4:
	// lfs f0,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// fmuls f13,f0,f15
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// lfs f0,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f15
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f15
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f15
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f15.f64));
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82db0014
	if (!ctx.cr6.lt) goto loc_82DB0014;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DB0014:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bgt cr6,0x82db00a4
	if (ctx.cr6.gt) goto loc_82DB00A4;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,64
	ctx.r12.s64 = ctx.r12.s64 + 64;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DB0050;
	case 1:
		goto loc_82DB0060;
	case 2:
		goto loc_82DB0078;
	case 3:
		goto loc_82DB0090;
	default:
		__builtin_unreachable();
	}
	// lwz r22,80(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// lwz r22,96(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// lwz r22,120(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// lwz r22,144(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
loc_82DB0050:
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db00a8
	goto loc_82DB00A8;
loc_82DB0060:
	// subfic r11,r11,16383
	ctx.xer.ca = ctx.r11.u32 <= 16383;
	ctx.r11.s64 = 16383 - ctx.r11.s64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db00a8
	goto loc_82DB00A8;
loc_82DB0078:
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db00a8
	goto loc_82DB00A8;
loc_82DB0090:
	// subfic r11,r11,32767
	ctx.xer.ca = ctx.r11.u32 <= 32767;
	ctx.r11.s64 = 32767 - ctx.r11.s64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db00a8
	goto loc_82DB00A8;
loc_82DB00A4:
	// fmr f0,f16
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f16.f64;
loc_82DB00A8:
	// fsubs f7,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// lfsx f13,r8,r25
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + -12, temp.u32);
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fctiwz f7,f7
	ctx.f7.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfiwx f7,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f7.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82db00d8
	if (!ctx.cr6.lt) goto loc_82DB00D8;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DB00D8:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bgt cr6,0x82db0168
	if (ctx.cr6.gt) goto loc_82DB0168;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,260
	ctx.r12.s64 = ctx.r12.s64 + 260;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DB0114;
	case 1:
		goto loc_82DB0124;
	case 2:
		goto loc_82DB013C;
	case 3:
		goto loc_82DB0154;
	default:
		__builtin_unreachable();
	}
	// lwz r22,276(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 276);
	// lwz r22,292(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 292);
	// lwz r22,316(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 316);
	// lwz r22,340(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 340);
loc_82DB0114:
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db016c
	goto loc_82DB016C;
loc_82DB0124:
	// subfic r11,r11,16383
	ctx.xer.ca = ctx.r11.u32 <= 16383;
	ctx.r11.s64 = 16383 - ctx.r11.s64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db016c
	goto loc_82DB016C;
loc_82DB013C:
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db016c
	goto loc_82DB016C;
loc_82DB0154:
	// subfic r11,r11,32767
	ctx.xer.ca = ctx.r11.u32 <= 32767;
	ctx.r11.s64 = 32767 - ctx.r11.s64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db016c
	goto loc_82DB016C;
loc_82DB0168:
	// fmr f0,f16
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f16.f64;
loc_82DB016C:
	// fmuls f7,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// addi r11,r1,180
	ctx.r11.s64 = ctx.r1.s64 + 180;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + -8, temp.u32);
	// fctiwz f0,f7
	ctx.f0.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82db0194
	if (!ctx.cr6.lt) goto loc_82DB0194;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DB0194:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// bgt cr6,0x82db0224
	if (ctx.cr6.gt) goto loc_82DB0224;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,448
	ctx.r12.s64 = ctx.r12.s64 + 448;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DB01D0;
	case 1:
		goto loc_82DB01E0;
	case 2:
		goto loc_82DB01F8;
	case 3:
		goto loc_82DB0210;
	default:
		__builtin_unreachable();
	}
	// lwz r22,464(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 464);
	// lwz r22,480(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 480);
	// lwz r22,504(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 504);
	// lwz r22,528(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 528);
loc_82DB01D0:
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db0228
	goto loc_82DB0228;
loc_82DB01E0:
	// subfic r11,r11,16383
	ctx.xer.ca = ctx.r11.u32 <= 16383;
	ctx.r11.s64 = 16383 - ctx.r11.s64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db0228
	goto loc_82DB0228;
loc_82DB01F8:
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db0228
	goto loc_82DB0228;
loc_82DB0210:
	// subfic r11,r11,32767
	ctx.xer.ca = ctx.r11.u32 <= 32767;
	ctx.r11.s64 = 32767 - ctx.r11.s64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db0228
	goto loc_82DB0228;
loc_82DB0224:
	// fmr f0,f16
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f16.f64;
loc_82DB0228:
	// fsubs f12,f12,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
	// lfsx f13,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f12.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82db025c
	if (!ctx.cr6.lt) goto loc_82DB025C;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DB025C:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bgt cr6,0x82db02ec
	if (ctx.cr6.gt) goto loc_82DB02EC;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,648
	ctx.r12.s64 = ctx.r12.s64 + 648;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DB0298;
	case 1:
		goto loc_82DB02A8;
	case 2:
		goto loc_82DB02C0;
	case 3:
		goto loc_82DB02D8;
	default:
		__builtin_unreachable();
	}
	// lwz r22,664(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 664);
	// lwz r22,680(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 680);
	// lwz r22,704(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 704);
	// lwz r22,728(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 728);
loc_82DB0298:
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db02f0
	goto loc_82DB02F0;
loc_82DB02A8:
	// subfic r11,r11,16383
	ctx.xer.ca = ctx.r11.u32 <= 16383;
	ctx.r11.s64 = 16383 - ctx.r11.s64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db02f0
	goto loc_82DB02F0;
loc_82DB02C0:
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db02f0
	goto loc_82DB02F0;
loc_82DB02D8:
	// subfic r11,r11,32767
	ctx.xer.ca = ctx.r11.u32 <= 32767;
	ctx.r11.s64 = 32767 - ctx.r11.s64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db02f0
	goto loc_82DB02F0;
loc_82DB02EC:
	// fmr f0,f16
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f16.f64;
loc_82DB02F0:
	// fmuls f12,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fctiwz f0,f12
	ctx.f0.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82db0318
	if (!ctx.cr6.lt) goto loc_82DB0318;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DB0318:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bgt cr6,0x82db03a8
	if (ctx.cr6.gt) goto loc_82DB03A8;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,836
	ctx.r12.s64 = ctx.r12.s64 + 836;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DB0354;
	case 1:
		goto loc_82DB0364;
	case 2:
		goto loc_82DB037C;
	case 3:
		goto loc_82DB0394;
	default:
		__builtin_unreachable();
	}
	// lwz r22,852(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 852);
	// lwz r22,868(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 868);
	// lwz r22,892(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 892);
	// lwz r22,916(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 916);
loc_82DB0354:
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db03ac
	goto loc_82DB03AC;
loc_82DB0364:
	// subfic r11,r11,16383
	ctx.xer.ca = ctx.r11.u32 <= 16383;
	ctx.r11.s64 = 16383 - ctx.r11.s64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db03ac
	goto loc_82DB03AC;
loc_82DB037C:
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db03ac
	goto loc_82DB03AC;
loc_82DB0394:
	// subfic r11,r11,32767
	ctx.xer.ca = ctx.r11.u32 <= 32767;
	ctx.r11.s64 = 32767 - ctx.r11.s64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db03ac
	goto loc_82DB03AC;
loc_82DB03A8:
	// fmr f0,f16
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f16.f64;
loc_82DB03AC:
	// fsubs f12,f11,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// addi r10,r25,8
	ctx.r10.s64 = ctx.r25.s64 + 8;
	// lfsx f13,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f12.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82db03e0
	if (!ctx.cr6.lt) goto loc_82DB03E0;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DB03E0:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// bgt cr6,0x82db0470
	if (ctx.cr6.gt) goto loc_82DB0470;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,1036
	ctx.r12.s64 = ctx.r12.s64 + 1036;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DB041C;
	case 1:
		goto loc_82DB042C;
	case 2:
		goto loc_82DB0444;
	case 3:
		goto loc_82DB045C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,1052(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1052);
	// lwz r22,1068(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1068);
	// lwz r22,1092(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1092);
	// lwz r22,1116(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1116);
loc_82DB041C:
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db0474
	goto loc_82DB0474;
loc_82DB042C:
	// subfic r11,r11,16383
	ctx.xer.ca = ctx.r11.u32 <= 16383;
	ctx.r11.s64 = 16383 - ctx.r11.s64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db0474
	goto loc_82DB0474;
loc_82DB0444:
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db0474
	goto loc_82DB0474;
loc_82DB045C:
	// subfic r11,r11,32767
	ctx.xer.ca = ctx.r11.u32 <= 32767;
	ctx.r11.s64 = 32767 - ctx.r11.s64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db0474
	goto loc_82DB0474;
loc_82DB0470:
	// fmr f0,f16
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f16.f64;
loc_82DB0474:
	// fmuls f12,f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// fctiwz f0,f12
	ctx.f0.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82db049c
	if (!ctx.cr6.lt) goto loc_82DB049C;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DB049C:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bgt cr6,0x82db052c
	if (ctx.cr6.gt) goto loc_82DB052C;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,1224
	ctx.r12.s64 = ctx.r12.s64 + 1224;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DB04D8;
	case 1:
		goto loc_82DB04E8;
	case 2:
		goto loc_82DB0500;
	case 3:
		goto loc_82DB0518;
	default:
		__builtin_unreachable();
	}
	// lwz r22,1240(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1240);
	// lwz r22,1256(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1256);
	// lwz r22,1280(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1280);
	// lwz r22,1304(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1304);
loc_82DB04D8:
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db0530
	goto loc_82DB0530;
loc_82DB04E8:
	// subfic r11,r11,16383
	ctx.xer.ca = ctx.r11.u32 <= 16383;
	ctx.r11.s64 = 16383 - ctx.r11.s64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db0530
	goto loc_82DB0530;
loc_82DB0500:
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db0530
	goto loc_82DB0530;
loc_82DB0518:
	// subfic r11,r11,32767
	ctx.xer.ca = ctx.r11.u32 <= 32767;
	ctx.r11.s64 = 32767 - ctx.r11.s64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db0530
	goto loc_82DB0530;
loc_82DB052C:
	// fmr f0,f16
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f16.f64;
loc_82DB0530:
	// fsubs f12,f10,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f29.f64));
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// addi r10,r25,12
	ctx.r10.s64 = ctx.r25.s64 + 12;
	// lfsx f13,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f12.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82db0564
	if (!ctx.cr6.lt) goto loc_82DB0564;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DB0564:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bgt cr6,0x82db05f4
	if (ctx.cr6.gt) goto loc_82DB05F4;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,1424
	ctx.r12.s64 = ctx.r12.s64 + 1424;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DB05A0;
	case 1:
		goto loc_82DB05B0;
	case 2:
		goto loc_82DB05C8;
	case 3:
		goto loc_82DB05E0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,1440(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1440);
	// lwz r22,1456(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1456);
	// lwz r22,1480(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1480);
	// lwz r22,1504(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1504);
loc_82DB05A0:
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db05f8
	goto loc_82DB05F8;
loc_82DB05B0:
	// subfic r11,r11,16383
	ctx.xer.ca = ctx.r11.u32 <= 16383;
	ctx.r11.s64 = 16383 - ctx.r11.s64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db05f8
	goto loc_82DB05F8;
loc_82DB05C8:
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82db05f8
	goto loc_82DB05F8;
loc_82DB05E0:
	// subfic r11,r11,32767
	ctx.xer.ca = ctx.r11.u32 <= 32767;
	ctx.r11.s64 = 32767 - ctx.r11.s64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82db05f8
	goto loc_82DB05F8;
loc_82DB05F4:
	// fmr f0,f16
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f16.f64;
loc_82DB05F8:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,16(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// ble cr6,0x82dafd60
	if (!ctx.cr6.gt) goto loc_82DAFD60;
loc_82DB061C:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r10,r20,8
	ctx.r10.s64 = ctx.r20.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB063C;
	sub_82CB16F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82dae6c8
	ctx.lr = 0x82DB064C;
	sub_82DAE6C8(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82db06a8
	if (!ctx.cr6.gt) goto loc_82DB06A8;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// add r8,r27,r14
	ctx.r8.u64 = ctx.r27.u64 + ctx.r14.u64;
	// ori r7,r11,16352
	ctx.r7.u64 = ctx.r11.u64 | 16352;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// add r11,r27,r15
	ctx.r11.u64 = ctx.r27.u64 + ctx.r15.u64;
	// subf r7,r27,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r27.s64;
loc_82DB0674:
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfsx f12,r5,r6
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r6,0(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82db0674
	if (ctx.cr6.lt) goto loc_82DB0674;
loc_82DB06A8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r16,4
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 4, ctx.xer);
	// blt cr6,0x82db0710
	if (ctx.cr6.lt) goto loc_82DB0710;
	// addi r10,r16,-4
	ctx.r10.s64 = ctx.r16.s64 + -4;
	// addi r11,r27,16384
	ctx.r11.s64 = ctx.r27.s64 + 16384;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB06C8:
	// lis r8,0
	ctx.r8.s64 = 0;
	// lfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r8,r8,32804
	ctx.r8.u64 = ctx.r8.u64 | 32804;
	// ori r7,r7,32808
	ctx.r7.u64 = ctx.r7.u64 | 32808;
	// ori r6,r6,32812
	ctx.r6.u64 = ctx.r6.u64 | 32812;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfsx f13,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfsx f12,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x82db06c8
	if (!ctx.cr6.eq) goto loc_82DB06C8;
loc_82DB0710:
	// cmpw cr6,r9,r16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x82db073c
	if (!ctx.cr6.lt) goto loc_82DB073C;
	// addi r11,r9,4096
	ctx.r11.s64 = ctx.r9.s64 + 4096;
	// addi r8,r9,12296
	ctx.r8.s64 = ctx.r9.s64 + 12296;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r11,r9,r16
	ctx.r11.s64 = ctx.r16.s64 - ctx.r9.s64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb15e8
	ctx.lr = 0x82DB073C;
	sub_82CB15E8(ctx, base);
loc_82DB073C:
	// addi r11,r16,12296
	ctx.r11.s64 = ctx.r16.s64 + 12296;
	// rlwinm r5,r18,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r27,r15
	ctx.r3.u64 = ctx.r27.u64 + ctx.r15.u64;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82cb1fe0
	ctx.lr = 0x82DB0754;
	sub_82CB1FE0(ctx, base);
	// addi r11,r18,12296
	ctx.r11.s64 = ctx.r18.s64 + 12296;
	// rlwinm r31,r16,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB0770;
	sub_82CB16F0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r18,4
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 4, ctx.xer);
	// blt cr6,0x82db07c8
	if (ctx.cr6.lt) goto loc_82DB07C8;
	// addi r11,r18,-4
	ctx.r11.s64 = ctx.r18.s64 + -4;
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB0794:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stfs f0,-8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x82db0794
	if (!ctx.cr6.eq) goto loc_82DB0794;
loc_82DB07C8:
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x82db0804
	if (!ctx.cr6.lt) goto loc_82DB0804;
	// add r11,r9,r16
	ctx.r11.u64 = ctx.r9.u64 + ctx.r16.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r27
	ctx.r8.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r11,r9,r18
	ctx.r11.s64 = ctx.r18.s64 - ctx.r9.s64;
loc_82DB07E8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82db07e8
	if (!ctx.cr6.eq) goto loc_82DB07E8;
loc_82DB0804:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,772(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// blt cr6,0x82daf63c
	if (ctx.cr6.lt) goto loc_82DAF63C;
loc_82DB081C:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6afc
	ctx.lr = 0x82DB0828;
	__restfpr_14(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB082C"))) PPC_WEAK_FUNC(sub_82DB082C);
PPC_FUNC_IMPL(__imp__sub_82DB082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB0830"))) PPC_WEAK_FUNC(sub_82DB0830);
PPC_FUNC_IMPL(__imp__sub_82DB0830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x82DB0838;
	__savegprlr_17(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82db095c
	if (ctx.cr6.eq) goto loc_82DB095C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,49444
	ctx.r11.u64 = ctx.r11.u64 | 49444;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82db0948
	if (ctx.cr6.gt) goto loc_82DB0948;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// addi r29,r29,-16100
	ctx.r29.s64 = ctx.r29.s64 + -16100;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82db0948
	if (ctx.cr6.eq) goto loc_82DB0948;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82db095c
	if (!ctx.cr6.gt) goto loc_82DB095C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addis r24,r3,1
	ctx.r24.s64 = ctx.r3.s64 + 65536;
	// ori r26,r11,16428
	ctx.r26.u64 = ctx.r11.u64 | 16428;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addis r23,r3,1
	ctx.r23.s64 = ctx.r3.s64 + 65536;
	// ori r27,r11,16432
	ctx.r27.u64 = ctx.r11.u64 | 16432;
	// addis r22,r3,1
	ctx.r22.s64 = ctx.r3.s64 + 65536;
	// addis r21,r3,1
	ctx.r21.s64 = ctx.r3.s64 + 65536;
	// addis r20,r3,1
	ctx.r20.s64 = ctx.r3.s64 + 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r24,r24,-16112
	ctx.r24.s64 = ctx.r24.s64 + -16112;
	// addi r23,r23,-16088
	ctx.r23.s64 = ctx.r23.s64 + -16088;
	// addi r22,r22,-16096
	ctx.r22.s64 = ctx.r22.s64 + -16096;
	// addi r21,r21,-16108
	ctx.r21.s64 = ctx.r21.s64 + -16108;
	// addi r20,r20,-16116
	ctx.r20.s64 = ctx.r20.s64 + -16116;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r28,r11,16444
	ctx.r28.u64 = ctx.r11.u64 | 16444;
loc_82DB08CC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// stwx r7,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r7.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r7,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r7.u32);
	// lfs f1,0(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// lwz r6,0(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// bl 0x82daf368
	ctx.lr = 0x82DB092C;
	sub_82DAF368(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82db08cc
	if (ctx.cr6.lt) goto loc_82DB08CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_82DB0948:
	// mullw r11,r17,r8
	ctx.r11.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r8.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82DB095C;
	sub_82CB1160(ctx, base);
loc_82DB095C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB0968"))) PPC_WEAK_FUNC(sub_82DB0968);
PPC_FUNC_IMPL(__imp__sub_82DB0968) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db0978
	if (!ctx.cr6.eq) goto loc_82DB0978;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB0978:
	// b 0x82db0830
	sub_82DB0830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB097C"))) PPC_WEAK_FUNC(sub_82DB097C);
PPC_FUNC_IMPL(__imp__sub_82DB097C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB0980"))) PPC_WEAK_FUNC(sub_82DB0980);
PPC_FUNC_IMPL(__imp__sub_82DB0980) {
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r31,r11,24800
	ctx.r31.s64 = ctx.r11.s64 + 24800;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB09A8;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3672
	ctx.r4.s64 = ctx.r11.s64 + 3672;
	// bl 0x82da4448
	ctx.lr = 0x82DB09B8;
	sub_82DA4448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r4,-3440
	ctx.r10.s64 = ctx.r4.s64 + -3440;
	// addi r11,r11,22552
	ctx.r11.s64 = ctx.r11.s64 + 22552;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r5,-3416
	ctx.r10.s64 = ctx.r5.s64 + -3416;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r10,r6,-3296
	ctx.r10.s64 = ctx.r6.s64 + -3296;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r10,r7,2408
	ctx.r10.s64 = ctx.r7.s64 + 2408;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,-3272
	ctx.r11.s64 = ctx.r8.s64 + -3272;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r9,-3248
	ctx.r11.s64 = ctx.r9.s64 + -3248;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,49452
	ctx.r11.u64 = ctx.r11.u64 | 49452;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DB0A54"))) PPC_WEAK_FUNC(sub_82DB0A54);
PPC_FUNC_IMPL(__imp__sub_82DB0A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB0A58"))) PPC_WEAK_FUNC(sub_82DB0A58);
PPC_FUNC_IMPL(__imp__sub_82DB0A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,292
	ctx.r11.s64 = ctx.r3.s64 + 292;
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82DB0A68:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,132(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f0,128(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82db0a68
	if (!ctx.cr6.eq) goto loc_82DB0A68;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0A90"))) PPC_WEAK_FUNC(sub_82DB0A90);
PPC_FUNC_IMPL(__imp__sub_82DB0A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	ctx.lr = 0x82DB0AA4;
	__savefpr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f2
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f2.f64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,-18292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18292);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lwz r11,1244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1244);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82cb4860
	ctx.lr = 0x82DB0AE8;
	sub_82CB4860(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f31,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f13,f31,f28
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f28.f64));
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f28,f12,f0
	ctx.f28.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f27,f28,f29
	ctx.f27.f64 = double(float(ctx.f28.f64 * ctx.f29.f64));
	// fadds f0,f27,f31
	ctx.f0.f64 = double(float(ctx.f27.f64 + ctx.f31.f64));
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// bl 0x82cb4940
	ctx.lr = 0x82DB0B20;
	sub_82CB4940(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fdivs f29,f28,f29
	ctx.f29.f64 = double(float(ctx.f28.f64 / ctx.f29.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fsubs f13,f31,f27
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f27.f64));
	// stfs f13,568(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// lfs f30,-18204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18204);
	ctx.f30.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
	// fadds f0,f29,f31
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// bl 0x82cb4940
	ctx.lr = 0x82DB0B54;
	sub_82CB4940(ctx, base);
	// fsubs f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// stfs f0,556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6b30
	ctx.lr = 0x82DB0B78;
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

__attribute__((alias("__imp__sub_82DB0B88"))) PPC_WEAK_FUNC(sub_82DB0B88);
PPC_FUNC_IMPL(__imp__sub_82DB0B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82DB0B90;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6ab0
	ctx.lr = 0x82DB0B98;
	__savefpr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82db1224
	if (ctx.cr6.eq) goto loc_82DB1224;
	// lfs f1,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82db0be8
	if (!ctx.cr6.eq) goto loc_82DB0BE8;
	// lfs f0,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82db0be8
	if (!ctx.cr6.eq) goto loc_82DB0BE8;
	// lfs f0,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82db0c04
	if (ctx.cr6.eq) goto loc_82DB0C04;
loc_82DB0BE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f3.f64 = double(temp.f32);
	// stfs f1,268(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f2,272(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stfs f3,276(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// bl 0x82db0a90
	ctx.lr = 0x82DB0C04;
	sub_82DB0A90(ctx, base);
loc_82DB0C04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,548(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// lfs f11,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,564(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,568(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfs f12,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f12.f64 = double(temp.f32);
	// bne cr6,0x82db0dc8
	if (!ctx.cr6.eq) goto loc_82DB0DC8;
	// lis r6,-31909
	ctx.r6.s64 = -2091188224;
	// lfs f7,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f5.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f6,420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f6.f64 = double(temp.f32);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// lfs f4,424(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,25216(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 25216);
	ctx.f8.f64 = double(temp.f32);
	// blt cr6,0x82db0d3c
	if (ctx.cr6.lt) goto loc_82DB0D3C;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r7,r29,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r29.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB0C70:
	// lfs f3,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f9
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fadds f5,f3,f8
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fneg f3,f8
	ctx.f3.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fmuls f31,f7,f9
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmadds f8,f5,f11,f2
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// fmadds f8,f1,f10,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmuls f1,f5,f9
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fnmsubs f8,f6,f0,f8
	ctx.f8.f64 = double(float(-(ctx.f6.f64 * ctx.f0.f64 - ctx.f8.f64)));
	// fneg f6,f3
	ctx.f6.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fnmsubs f8,f4,f12,f8
	ctx.f8.f64 = double(float(-(ctx.f4.f64 * ctx.f12.f64 - ctx.f8.f64)));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f8,-4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f7,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// fmadds f3,f7,f11,f31
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f31.f64));
	// fmadds f5,f5,f10,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fnmsubs f8,f8,f0,f5
	ctx.f8.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f5.f64)));
	// fnmsubs f8,f2,f12,f8
	ctx.f8.f64 = double(float(-(ctx.f2.f64 * ctx.f12.f64 - ctx.f8.f64)));
	// fmuls f2,f7,f9
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f5,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f5,f5,f6
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fneg f6,f6
	ctx.f6.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// fmadds f1,f5,f11,f1
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmadds f7,f7,f10,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f1.f64));
	// fnmsubs f8,f8,f0,f7
	ctx.f8.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f7.f64)));
	// fnmsubs f8,f4,f12,f8
	ctx.f8.f64 = double(float(-(ctx.f4.f64 * ctx.f12.f64 - ctx.f8.f64)));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fadds f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fmadds f4,f7,f11,f2
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f4,f5,f10,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fnmsubs f2,f8,f0,f4
	ctx.f2.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f4.f64)));
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// fneg f8,f6
	ctx.f8.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fnmsubs f6,f3,f12,f2
	ctx.f6.f64 = double(float(-(ctx.f3.f64 * ctx.f12.f64 - ctx.f2.f64)));
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x82db0c70
	if (!ctx.cr6.eq) goto loc_82DB0C70;
	// stfs f8,25216(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 25216, temp.u32);
loc_82DB0D3C:
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82db0da4
	if (!ctx.cr6.lt) goto loc_82DB0DA4;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r29,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r29.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r10,r8,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r8.s64;
loc_82DB0D54:
	// lfsx f3,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f9
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fadds f3,f3,f8
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmr f31,f4
	ctx.f31.f64 = ctx.f4.f64;
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fmr f7,f3
	ctx.f7.f64 = ctx.f3.f64;
	// fmadds f3,f3,f11,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f3,f1,f10,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fnmsubs f6,f6,f0,f3
	ctx.f6.f64 = double(float(-(ctx.f6.f64 * ctx.f0.f64 - ctx.f3.f64)));
	// fnmsubs f6,f31,f12,f6
	ctx.f6.f64 = double(float(-(ctx.f31.f64 * ctx.f12.f64 - ctx.f6.f64)));
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82db0d54
	if (!ctx.cr6.eq) goto loc_82DB0D54;
	// stfs f8,25216(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 25216, temp.u32);
loc_82DB0DA4:
	// stfs f7,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f5,296(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stfs f6,420(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f4,424(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6afc
	ctx.lr = 0x82DB0DC4;
	__restfpr_14(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB0DC8:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x82db0ec0
	if (!ctx.cr6.eq) goto loc_82DB0EC0;
	// lfs f7,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f6,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f31.f64 = double(temp.f32);
	// lfs f5,420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,428(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	ctx.f4.f64 = double(temp.f32);
	// lfs f30,424(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,432(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x82db0e8c
	if (ctx.cr6.eq) goto loc_82DB0E8C;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lfs f8,25216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25216);
	ctx.f8.f64 = double(temp.f32);
loc_82DB0E00:
	// lfs f3,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f28,f1,f9
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f3,f3,f8
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fadds f2,f2,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// fmuls f27,f31,f9
	ctx.f27.f64 = double(float(ctx.f31.f64 * ctx.f9.f64));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// fmr f26,f7
	ctx.f26.f64 = ctx.f7.f64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// fmr f25,f6
	ctx.f25.f64 = ctx.f6.f64;
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// fmr f31,f6
	ctx.f31.f64 = ctx.f6.f64;
	// fmr f24,f30
	ctx.f24.f64 = ctx.f30.f64;
	// fmr f23,f29
	ctx.f23.f64 = ctx.f29.f64;
	// fmr f30,f5
	ctx.f30.f64 = ctx.f5.f64;
	// fmr f7,f3
	ctx.f7.f64 = ctx.f3.f64;
	// fmr f6,f2
	ctx.f6.f64 = ctx.f2.f64;
	// fmadds f3,f3,f11,f28
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f28.f64));
	// fmadds f2,f2,f11,f27
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f27.f64));
	// fmr f29,f4
	ctx.f29.f64 = ctx.f4.f64;
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fmadds f3,f26,f10,f3
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fmadds f2,f25,f10,f2
	ctx.f2.f64 = double(float(ctx.f25.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fnmsubs f5,f5,f0,f3
	ctx.f5.f64 = double(float(-(ctx.f5.f64 * ctx.f0.f64 - ctx.f3.f64)));
	// fnmsubs f4,f4,f0,f2
	ctx.f4.f64 = double(float(-(ctx.f4.f64 * ctx.f0.f64 - ctx.f2.f64)));
	// fnmsubs f5,f24,f12,f5
	ctx.f5.f64 = double(float(-(ctx.f24.f64 * ctx.f12.f64 - ctx.f5.f64)));
	// fnmsubs f4,f23,f12,f4
	ctx.f4.f64 = double(float(-(ctx.f23.f64 * ctx.f12.f64 - ctx.f4.f64)));
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f5,0(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f4,4(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne cr6,0x82db0e00
	if (!ctx.cr6.eq) goto loc_82DB0E00;
	// stfs f8,25216(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 25216, temp.u32);
loc_82DB0E8C:
	// stfs f7,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f6,300(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// stfs f1,296(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stfs f31,304(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f5,420(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f4,428(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// stfs f30,424(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// stfs f29,432(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6afc
	ctx.lr = 0x82DB0EBC;
	__restfpr_14(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB0EC0:
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// bne cr6,0x82db116c
	if (!ctx.cr6.eq) goto loc_82DB116C;
	// lfs f8,432(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f8,440(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f8,448(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f8,456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f8,464(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f2.f64 = double(temp.f32);
	// lfs f15,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f15.f64 = double(temp.f32);
	// lfs f14,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f14.f64 = double(temp.f32);
	// lfs f21,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f19.f64 = double(temp.f32);
	// lfs f16,336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f16.f64 = double(temp.f32);
	// lfs f1,420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,428(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,436(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,444(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,452(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	ctx.f27.f64 = double(temp.f32);
	// lfs f18,424(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	ctx.f18.f64 = double(temp.f32);
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq cr6,0x82db10e4
	if (ctx.cr6.eq) goto loc_82DB10E4;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lfs f8,25216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25216);
	ctx.f8.f64 = double(temp.f32);
loc_82DB0F4C:
	// fmuls f21,f21,f9
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f9.f64));
	// stfs f21,116(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f26,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f15,f15,f9
	ctx.f15.f64 = double(float(ctx.f15.f64 * ctx.f9.f64));
	// fadds f26,f26,f8
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f8.f64));
	// lfs f25,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f14,f14,f9
	ctx.f14.f64 = double(float(ctx.f14.f64 * ctx.f9.f64));
	// lfs f24,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f24.f64 = double(temp.f32);
	// fadds f25,f25,f8
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f8.f64));
	// lfs f17,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f17.f64 = double(temp.f32);
	// fadds f24,f24,f8
	ctx.f24.f64 = double(float(ctx.f24.f64 + ctx.f8.f64));
	// lfs f23,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f23.f64 = double(temp.f32);
	// fadds f21,f17,f8
	ctx.f21.f64 = double(float(ctx.f17.f64 + ctx.f8.f64));
	// lfs f22,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f20,f20,f9
	ctx.f20.f64 = double(float(ctx.f20.f64 * ctx.f9.f64));
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f23,f23,f8
	ctx.f23.f64 = double(float(ctx.f23.f64 + ctx.f8.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f19,f19,f9
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f9.f64));
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f22,f22,f8
	ctx.f22.f64 = double(float(ctx.f22.f64 + ctx.f8.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// fmadds f17,f26,f11,f15
	ctx.f17.f64 = double(float(ctx.f26.f64 * ctx.f11.f64 + ctx.f15.f64));
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// fmadds f15,f25,f11,f14
	ctx.f15.f64 = double(float(ctx.f25.f64 * ctx.f11.f64 + ctx.f14.f64));
	// fmadds f20,f23,f11,f20
	ctx.f20.f64 = double(float(ctx.f23.f64 * ctx.f11.f64 + ctx.f20.f64));
	// fmadds f19,f22,f11,f19
	ctx.f19.f64 = double(float(ctx.f22.f64 * ctx.f11.f64 + ctx.f19.f64));
	// fmadds f17,f7,f10,f17
	ctx.f17.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f17.f64));
	// fmadds f15,f6,f10,f15
	ctx.f15.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f15.f64));
	// fmadds f20,f4,f10,f20
	ctx.f20.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f20.f64));
	// fmr f4,f23
	ctx.f4.f64 = ctx.f23.f64;
	// fmadds f19,f3,f10,f19
	ctx.f19.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f19.f64));
	// fnmsubs f17,f1,f0,f17
	ctx.f17.f64 = double(float(-(ctx.f1.f64 * ctx.f0.f64 - ctx.f17.f64)));
	// fnmsubs f15,f31,f0,f15
	ctx.f15.f64 = double(float(-(ctx.f31.f64 * ctx.f0.f64 - ctx.f15.f64)));
	// fnmsubs f20,f29,f0,f20
	ctx.f20.f64 = double(float(-(ctx.f29.f64 * ctx.f0.f64 - ctx.f20.f64)));
	// fnmsubs f19,f28,f0,f19
	ctx.f19.f64 = double(float(-(ctx.f28.f64 * ctx.f0.f64 - ctx.f19.f64)));
	// fnmsubs f18,f18,f12,f17
	ctx.f18.f64 = double(float(-(ctx.f18.f64 * ctx.f12.f64 - ctx.f17.f64)));
	// lfs f17,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f17.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fnmsubs f17,f17,f12,f15
	ctx.f17.f64 = double(float(-(ctx.f17.f64 * ctx.f12.f64 - ctx.f15.f64)));
	// lfs f15,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f15.f64 = double(temp.f32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f14,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f14.f64 = double(temp.f32);
	// fmadds f14,f24,f11,f14
	ctx.f14.f64 = double(float(ctx.f24.f64 * ctx.f11.f64 + ctx.f14.f64));
	// fmadds f14,f5,f10,f14
	ctx.f14.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f14.f64));
	// fnmsubs f14,f30,f0,f14
	ctx.f14.f64 = double(float(-(ctx.f30.f64 * ctx.f0.f64 - ctx.f14.f64)));
	// fnmsubs f15,f15,f12,f14
	ctx.f15.f64 = double(float(-(ctx.f15.f64 * ctx.f12.f64 - ctx.f14.f64)));
	// lfs f14,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f14.f64 = double(temp.f32);
	// fnmsubs f14,f14,f12,f20
	ctx.f14.f64 = double(float(-(ctx.f14.f64 * ctx.f12.f64 - ctx.f20.f64)));
	// lfs f20,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f20.f64 = double(temp.f32);
	// fnmsubs f20,f20,f12,f19
	ctx.f20.f64 = double(float(-(ctx.f20.f64 * ctx.f12.f64 - ctx.f19.f64)));
	// stfs f20,116(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f20,f18,f13
	ctx.f20.f64 = double(float(ctx.f18.f64 * ctx.f13.f64));
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f19,f17,f13
	ctx.f19.f64 = double(float(ctx.f17.f64 * ctx.f13.f64));
	// stfs f20,0(r29)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f19,4(r29)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f18,f15,f13
	ctx.f18.f64 = double(float(ctx.f15.f64 * ctx.f13.f64));
	// stfs f18,8(r29)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// fmuls f15,f16,f9
	ctx.f15.f64 = double(float(ctx.f16.f64 * ctx.f9.f64));
	// lfs f16,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f17,f14,f13
	ctx.f17.f64 = double(float(ctx.f14.f64 * ctx.f13.f64));
	// stfs f16,120(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f17,12(r29)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// fmadds f15,f21,f11,f15
	ctx.f15.f64 = double(float(ctx.f21.f64 * ctx.f11.f64 + ctx.f15.f64));
	// stfs f15,96(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f15,f7
	ctx.f15.f64 = ctx.f7.f64;
	// lfs f14,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f16,f14,f13
	ctx.f16.f64 = double(float(ctx.f14.f64 * ctx.f13.f64));
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f14,f6
	ctx.f14.f64 = ctx.f6.f64;
	// fmr f6,f25
	ctx.f6.f64 = ctx.f25.f64;
	// fmr f5,f24
	ctx.f5.f64 = ctx.f24.f64;
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f3,f2,f10,f7
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + ctx.f7.f64));
	// stfs f27,96(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f7,f26
	ctx.f7.f64 = ctx.f26.f64;
	// fnmsubs f28,f27,f0,f3
	ctx.f28.f64 = double(float(-(ctx.f27.f64 * ctx.f0.f64 - ctx.f3.f64)));
	// fmr f3,f22
	ctx.f3.f64 = ctx.f22.f64;
	// lfs f27,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f27.f64 = double(temp.f32);
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// fnmsubs f28,f27,f12,f28
	ctx.f28.f64 = double(float(-(ctx.f27.f64 * ctx.f12.f64 - ctx.f28.f64)));
	// stfs f16,16(r29)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// fmr f1,f20
	ctx.f1.f64 = ctx.f20.f64;
	// lfs f21,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f21.f64 = double(temp.f32);
	// fmr f31,f19
	ctx.f31.f64 = ctx.f19.f64;
	// lfs f20,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f20.f64 = double(temp.f32);
	// fmr f30,f18
	ctx.f30.f64 = ctx.f18.f64;
	// lfs f19,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f18.f64 = double(temp.f32);
	// fmr f29,f17
	ctx.f29.f64 = ctx.f17.f64;
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// fmuls f27,f28,f13
	ctx.f27.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// stfs f27,20(r29)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// fmr f28,f16
	ctx.f28.f64 = ctx.f16.f64;
	// lfs f16,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f16.f64 = double(temp.f32);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne cr6,0x82db0f4c
	if (!ctx.cr6.eq) goto loc_82DB0F4C;
	// stfs f8,25216(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 25216, temp.u32);
loc_82DB10E4:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f7,292(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stfs f6,300(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// stfs f5,308(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f4,316(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stfs f3,324(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stfs f2,332(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// stfs f15,296(r31)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stfs f14,304(r31)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f21,312(r31)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stfs f20,320(r31)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f19,328(r31)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// stfs f16,336(r31)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// stfs f1,420(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f31,428(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// stfs f30,436(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// stfs f29,444(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 444, temp.u32);
	// stfs f28,452(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f27,460(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// stfs f18,424(r31)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// stfs f0,464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6afc
	ctx.lr = 0x82DB1168;
	__restfpr_14(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82DB116C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82db1224
	if (!ctx.cr6.gt) goto loc_82DB1224;
	// lis r4,-31909
	ctx.r4.s64 = -2091188224;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r10,r31,296
	ctx.r10.s64 = ctx.r31.s64 + 296;
	// subf r6,r30,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lfs f5,25216(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 25216);
	ctx.f5.f64 = double(temp.f32);
loc_82DB118C:
	// lfs f8,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lfs f7,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfs f3,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// beq cr6,0x82db11fc
	if (ctx.cr6.eq) goto loc_82DB11FC;
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB11B0:
	// lfs f6,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f2,f4,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fadds f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// fneg f5,f5
	ctx.f5.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fmr f8,f6
	ctx.f8.f64 = ctx.f6.f64;
	// fmadds f6,f6,f11,f2
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f6,f1,f10,f6
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fnmsubs f7,f7,f0,f6
	ctx.f7.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 - ctx.f6.f64)));
	// fnmsubs f7,f31,f12,f7
	ctx.f7.f64 = double(float(-(ctx.f31.f64 * ctx.f12.f64 - ctx.f7.f64)));
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfsx f7,r6,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bne cr6,0x82db11b0
	if (!ctx.cr6.eq) goto loc_82DB11B0;
loc_82DB11FC:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stfs f4,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f8,-4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stfs f7,124(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 124, temp.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stfs f3,128(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 128, temp.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne cr6,0x82db118c
	if (!ctx.cr6.eq) goto loc_82DB118C;
	// stfs f5,25216(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 25216, temp.u32);
loc_82DB1224:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6afc
	ctx.lr = 0x82DB1234;
	__restfpr_14(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB1238"))) PPC_WEAK_FUNC(sub_82DB1238);
PPC_FUNC_IMPL(__imp__sub_82DB1238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,1244(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1244);
	// blt cr6,0x82db1270
	if (ctx.cr6.lt) goto loc_82DB1270;
	// beq cr6,0x82db1264
	if (ctx.cr6.eq) goto loc_82DB1264;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfs f1,288(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 288, temp.u32);
	// blr 
	return;
loc_82DB1264:
	// stfs f1,284(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 284, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82DB1270:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stfs f1,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,6148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6148);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// blt cr6,0x82db12b0
	if (ctx.cr6.lt) goto loc_82DB12B0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,280(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
loc_82DB12B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB12B8"))) PPC_WEAK_FUNC(sub_82DB12B8);
PPC_FUNC_IMPL(__imp__sub_82DB12B8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82db1348
	if (ctx.cr6.lt) goto loc_82DB1348;
	// beq cr6,0x82db1314
	if (ctx.cr6.eq) goto loc_82DB1314;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bge cr6,0x82db1368
	if (!ctx.cr6.lt) goto loc_82DB1368;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB1300;
	sub_82CB61F0(ctx, base);
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
loc_82DB1314:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB1334;
	sub_82CB61F0(ctx, base);
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
loc_82DB1348:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB1368;
	sub_82CB61F0(ctx, base);
loc_82DB1368:
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
}

__attribute__((alias("__imp__sub_82DB137C"))) PPC_WEAK_FUNC(sub_82DB137C);
PPC_FUNC_IMPL(__imp__sub_82DB137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1380"))) PPC_WEAK_FUNC(sub_82DB1380);
PPC_FUNC_IMPL(__imp__sub_82DB1380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db1390
	if (!ctx.cr6.eq) goto loc_82DB1390;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB1390:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,292
	ctx.r11.s64 = ctx.r11.s64 + 292;
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82DB13A0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,132(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f0,128(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82db13a0
	if (!ctx.cr6.eq) goto loc_82DB13A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB13C8"))) PPC_WEAK_FUNC(sub_82DB13C8);
PPC_FUNC_IMPL(__imp__sub_82DB13C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db13d8
	if (!ctx.cr6.eq) goto loc_82DB13D8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB13D8:
	// b 0x82db0b88
	sub_82DB0B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB13DC"))) PPC_WEAK_FUNC(sub_82DB13DC);
PPC_FUNC_IMPL(__imp__sub_82DB13DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB13E0"))) PPC_WEAK_FUNC(sub_82DB13E0);
PPC_FUNC_IMPL(__imp__sub_82DB13E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db13f0
	if (!ctx.cr6.eq) goto loc_82DB13F0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB13F0:
	// b 0x82db1238
	sub_82DB1238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB13F4"))) PPC_WEAK_FUNC(sub_82DB13F4);
PPC_FUNC_IMPL(__imp__sub_82DB13F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB13F8"))) PPC_WEAK_FUNC(sub_82DB13F8);
PPC_FUNC_IMPL(__imp__sub_82DB13F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db1408
	if (!ctx.cr6.eq) goto loc_82DB1408;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB1408:
	// b 0x82db12b8
	sub_82DB12B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB140C"))) PPC_WEAK_FUNC(sub_82DB140C);
PPC_FUNC_IMPL(__imp__sub_82DB140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1410"))) PPC_WEAK_FUNC(sub_82DB1410);
PPC_FUNC_IMPL(__imp__sub_82DB1410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DB1418;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,14144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14144);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,276(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// ble cr6,0x82db1498
	if (!ctx.cr6.gt) goto loc_82DB1498;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82DB1458:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB147C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db14ec
	if (!ctx.cr6.eq) goto loc_82DB14EC;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82db1458
	if (ctx.cr6.lt) goto loc_82DB1458;
loc_82DB1498:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r31,292
	ctx.r11.s64 = ctx.r31.s64 + 292;
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82DB14A8:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,132(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f0,128(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82db14a8
	if (!ctx.cr6.eq) goto loc_82DB14A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f3.f64 = double(temp.f32);
	// stfs f1,268(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f2,272(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stfs f3,276(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// bl 0x82db0a90
	ctx.lr = 0x82DB14E8;
	sub_82DB0A90(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB14EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB14F4"))) PPC_WEAK_FUNC(sub_82DB14F4);
PPC_FUNC_IMPL(__imp__sub_82DB14F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB14F8"))) PPC_WEAK_FUNC(sub_82DB14F8);
PPC_FUNC_IMPL(__imp__sub_82DB14F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db1508
	if (!ctx.cr6.eq) goto loc_82DB1508;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB1508:
	// b 0x82db1410
	sub_82DB1410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB150C"))) PPC_WEAK_FUNC(sub_82DB150C);
PPC_FUNC_IMPL(__imp__sub_82DB150C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1510"))) PPC_WEAK_FUNC(sub_82DB1510);
PPC_FUNC_IMPL(__imp__sub_82DB1510) {
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r31,r11,25080
	ctx.r31.s64 = ctx.r11.s64 + 25080;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB1538;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3884
	ctx.r4.s64 = ctx.r11.s64 + 3884;
	// bl 0x82da4448
	ctx.lr = 0x82DB1548;
	sub_82DA4448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r5,5368
	ctx.r10.s64 = ctx.r5.s64 + 5368;
	// addi r11,r11,24936
	ctx.r11.s64 = ctx.r11.s64 + 24936;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r6,4992
	ctx.r10.s64 = ctx.r6.s64 + 4992;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r10,r7,5064
	ctx.r10.s64 = ctx.r7.s64 + 5064;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,5088
	ctx.r11.s64 = ctx.r8.s64 + 5088;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r9,5112
	ctx.r11.s64 = ctx.r9.s64 + 5112;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,572
	ctx.r11.s64 = 572;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DB15D4"))) PPC_WEAK_FUNC(sub_82DB15D4);
PPC_FUNC_IMPL(__imp__sub_82DB15D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB15D8"))) PPC_WEAK_FUNC(sub_82DB15D8);
PPC_FUNC_IMPL(__imp__sub_82DB15D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DB15E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-31909
	ctx.r9.s64 = -2091188224;
	// addi r11,r31,292
	ctx.r11.s64 = ctx.r31.s64 + 292;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,19872(r9)
	PPC_STORE_U32(ctx.r9.u32 + 19872, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// beq cr6,0x82db161c
	if (ctx.cr6.eq) goto loc_82DB161C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,1244(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1244);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82DB161C:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82db1670
	if (!ctx.cr6.gt) goto loc_82DB1670;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82DB1630:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB1654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db1674
	if (!ctx.cr6.eq) goto loc_82DB1674;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82db1630
	if (ctx.cr6.lt) goto loc_82DB1630;
loc_82DB1670:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB1674:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB167C"))) PPC_WEAK_FUNC(sub_82DB167C);
PPC_FUNC_IMPL(__imp__sub_82DB167C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1680"))) PPC_WEAK_FUNC(sub_82DB1680);
PPC_FUNC_IMPL(__imp__sub_82DB1680) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB1688"))) PPC_WEAK_FUNC(sub_82DB1688);
PPC_FUNC_IMPL(__imp__sub_82DB1688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 288, temp.u32);
	// stfs f0,284(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 284, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB16A4"))) PPC_WEAK_FUNC(sub_82DB16A4);
PPC_FUNC_IMPL(__imp__sub_82DB16A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB16A8"))) PPC_WEAK_FUNC(sub_82DB16A8);
PPC_FUNC_IMPL(__imp__sub_82DB16A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82DB16B0;
	__savegprlr_27(ctx, base);
	// lfs f11,280(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f12,268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82db18b4
	if (ctx.cr6.eq) goto loc_82DB18B4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82db18b4
	if (ctx.cr6.eq) goto loc_82DB18B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r27,r7,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r5,4
	ctx.r29.s64 = ctx.r5.s64 + 4;
	// lfs f10,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
loc_82DB16E8:
	// lfs f0,284(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,284(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82db1700
	if (!ctx.cr6.lt) goto loc_82DB1700;
	// stfs f12,284(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
loc_82DB1700:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82db17a0
	if (ctx.cr6.lt) goto loc_82DB17A0;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB1720:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f8,f0
	ctx.f8.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f9,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// ble cr6,0x82db173c
	if (!ctx.cr6.gt) goto loc_82DB173C;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f0,284(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
loc_82DB173C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fabs f8,f0
	ctx.f8.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f9,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// ble cr6,0x82db1758
	if (!ctx.cr6.gt) goto loc_82DB1758;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f0,284(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
loc_82DB1758:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f8,f0
	ctx.f8.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f9,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// ble cr6,0x82db1774
	if (!ctx.cr6.gt) goto loc_82DB1774;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f0,284(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
loc_82DB1774:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fabs f8,f0
	ctx.f8.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f9,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// ble cr6,0x82db1790
	if (!ctx.cr6.gt) goto loc_82DB1790;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f0,284(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
loc_82DB1790:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db1720
	if (!ctx.cr6.eq) goto loc_82DB1720;
loc_82DB17A0:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82db17e4
	if (!ctx.cr6.lt) goto loc_82DB17E4;
	// add r11,r30,r9
	ctx.r11.u64 = ctx.r30.u64 + ctx.r9.u64;
	// subf r10,r9,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r9.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82DB17B8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f8,f0
	ctx.f8.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f9,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// ble cr6,0x82db17d4
	if (!ctx.cr6.gt) goto loc_82DB17D4;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f0,284(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
loc_82DB17D4:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db17b8
	if (!ctx.cr6.eq) goto loc_82DB17B8;
loc_82DB17E4:
	// lfs f0,284(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82db17f8
	if (!ctx.cr6.gt) goto loc_82DB17F8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DB17F8:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82db1864
	if (ctx.cr6.lt) goto loc_82DB1864;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r6,r5,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r5.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DB1820:
	// lfs f9,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,-4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f9,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x82db1820
	if (!ctx.cr6.eq) goto loc_82DB1820;
loc_82DB1864:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82db189c
	if (!ctx.cr6.lt) goto loc_82DB189C;
	// add r11,r30,r8
	ctx.r11.u64 = ctx.r30.u64 + ctx.r8.u64;
	// subf r9,r5,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r5.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82DB1880:
	// lfsx f9,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82db1880
	if (!ctx.cr6.eq) goto loc_82DB1880;
loc_82DB189C:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// add r30,r30,r7
	ctx.r30.u64 = ctx.r30.u64 + ctx.r7.u64;
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r29,r27,r29
	ctx.r29.u64 = ctx.r27.u64 + ctx.r29.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82db16e8
	if (!ctx.cr6.eq) goto loc_82DB16E8;
loc_82DB18B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB18BC"))) PPC_WEAK_FUNC(sub_82DB18BC);
PPC_FUNC_IMPL(__imp__sub_82DB18BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB18C0"))) PPC_WEAK_FUNC(sub_82DB18C0);
PPC_FUNC_IMPL(__imp__sub_82DB18C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82db18e8
	if (ctx.cr6.lt) goto loc_82DB18E8;
	// beq cr6,0x82db18e0
	if (ctx.cr6.eq) goto loc_82DB18E0;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bge cr6,0x82db18ec
	if (!ctx.cr6.lt) goto loc_82DB18EC;
	// stfs f1,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// b 0x82db18ec
	goto loc_82DB18EC;
loc_82DB18E0:
	// stfs f1,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// b 0x82db18ec
	goto loc_82DB18EC;
loc_82DB18E8:
	// stfs f1,276(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 276, temp.u32);
loc_82DB18EC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82db1940
	if (ctx.cr6.eq) goto loc_82DB1940;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,6480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6480);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,280(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
	// blr 
	return;
loc_82DB1940:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,280(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB1950"))) PPC_WEAK_FUNC(sub_82DB1950);
PPC_FUNC_IMPL(__imp__sub_82DB1950) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82db19e0
	if (ctx.cr6.lt) goto loc_82DB19E0;
	// beq cr6,0x82db19ac
	if (ctx.cr6.eq) goto loc_82DB19AC;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bge cr6,0x82db1a00
	if (!ctx.cr6.lt) goto loc_82DB1A00;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB1998;
	sub_82CB61F0(ctx, base);
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
loc_82DB19AC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB19CC;
	sub_82CB61F0(ctx, base);
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
loc_82DB19E0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB1A00;
	sub_82CB61F0(ctx, base);
loc_82DB1A00:
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
}

__attribute__((alias("__imp__sub_82DB1A14"))) PPC_WEAK_FUNC(sub_82DB1A14);
PPC_FUNC_IMPL(__imp__sub_82DB1A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1A18"))) PPC_WEAK_FUNC(sub_82DB1A18);
PPC_FUNC_IMPL(__imp__sub_82DB1A18) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db1a28
	if (!ctx.cr6.eq) goto loc_82DB1A28;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB1A28:
	// b 0x82db15d8
	sub_82DB15D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB1A2C"))) PPC_WEAK_FUNC(sub_82DB1A2C);
PPC_FUNC_IMPL(__imp__sub_82DB1A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1A30"))) PPC_WEAK_FUNC(sub_82DB1A30);
PPC_FUNC_IMPL(__imp__sub_82DB1A30) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB1A38"))) PPC_WEAK_FUNC(sub_82DB1A38);
PPC_FUNC_IMPL(__imp__sub_82DB1A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db1a48
	if (!ctx.cr6.eq) goto loc_82DB1A48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB1A48:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 288, temp.u32);
	// stfs f0,284(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 284, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB1A60"))) PPC_WEAK_FUNC(sub_82DB1A60);
PPC_FUNC_IMPL(__imp__sub_82DB1A60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db1a70
	if (!ctx.cr6.eq) goto loc_82DB1A70;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB1A70:
	// b 0x82db16a8
	sub_82DB16A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB1A74"))) PPC_WEAK_FUNC(sub_82DB1A74);
PPC_FUNC_IMPL(__imp__sub_82DB1A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1A78"))) PPC_WEAK_FUNC(sub_82DB1A78);
PPC_FUNC_IMPL(__imp__sub_82DB1A78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db1a88
	if (!ctx.cr6.eq) goto loc_82DB1A88;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB1A88:
	// b 0x82db18c0
	sub_82DB18C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB1A8C"))) PPC_WEAK_FUNC(sub_82DB1A8C);
PPC_FUNC_IMPL(__imp__sub_82DB1A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1A90"))) PPC_WEAK_FUNC(sub_82DB1A90);
PPC_FUNC_IMPL(__imp__sub_82DB1A90) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db1aa0
	if (!ctx.cr6.eq) goto loc_82DB1AA0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB1AA0:
	// b 0x82db1950
	sub_82DB1950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB1AA4"))) PPC_WEAK_FUNC(sub_82DB1AA4);
PPC_FUNC_IMPL(__imp__sub_82DB1AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1AA8"))) PPC_WEAK_FUNC(sub_82DB1AA8);
PPC_FUNC_IMPL(__imp__sub_82DB1AA8) {
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r31,r11,25368
	ctx.r31.s64 = ctx.r11.s64 + 25368;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB1AD0;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4236
	ctx.r4.s64 = ctx.r11.s64 + 4236;
	// bl 0x82da4448
	ctx.lr = 0x82DB1AE0;
	sub_82DA4448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r4,6680
	ctx.r10.s64 = ctx.r4.s64 + 6680;
	// addi r11,r11,25224
	ctx.r11.s64 = ctx.r11.s64 + 25224;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r5,6704
	ctx.r10.s64 = ctx.r5.s64 + 6704;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r10,r6,6712
	ctx.r10.s64 = ctx.r6.s64 + 6712;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r10,r7,6752
	ctx.r10.s64 = ctx.r7.s64 + 6752;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,6776
	ctx.r11.s64 = ctx.r8.s64 + 6776;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r9,6800
	ctx.r11.s64 = ctx.r9.s64 + 6800;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,296
	ctx.r11.s64 = 296;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DB1B78"))) PPC_WEAK_FUNC(sub_82DB1B78);
PPC_FUNC_IMPL(__imp__sub_82DB1B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82DB1B80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,19872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19872, ctx.r11.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82db1be8
	if (!ctx.cr6.gt) goto loc_82DB1BE8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82DB1BA8:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB1BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82db1bec
	if (!ctx.cr6.eq) goto loc_82DB1BEC;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82db1ba8
	if (ctx.cr6.lt) goto loc_82DB1BA8;
loc_82DB1BE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB1BEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB1BF4"))) PPC_WEAK_FUNC(sub_82DB1BF4);
PPC_FUNC_IMPL(__imp__sub_82DB1BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1BF8"))) PPC_WEAK_FUNC(sub_82DB1BF8);
PPC_FUNC_IMPL(__imp__sub_82DB1BF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB1C00"))) PPC_WEAK_FUNC(sub_82DB1C00);
PPC_FUNC_IMPL(__imp__sub_82DB1C00) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB1C08"))) PPC_WEAK_FUNC(sub_82DB1C08);
PPC_FUNC_IMPL(__imp__sub_82DB1C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f13,-60(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f13,-56(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f13,-52(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// beq cr6,0x82db1d5c
	if (ctx.cr6.eq) goto loc_82DB1D5C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82db1c54
	if (!ctx.cr6.lt) goto loc_82DB1C54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// b 0x82db1c5c
	goto loc_82DB1C5C;
loc_82DB1C54:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,4300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4300);
	ctx.f0.f64 = double(temp.f32);
loc_82DB1C5C:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// fadds f11,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// stfs f11,-20(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// stfs f0,-36(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f11,-24(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f11,-28(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f11,-32(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// rlwinm r11,r6,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82db1d20
	if (ctx.cr6.eq) goto loc_82DB1D20;
	// addi r5,r1,-64
	ctx.r5.s64 = ctx.r1.s64 + -64;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v12,r0,r5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,-48
	ctx.r5.s64 = ctx.r1.s64 + -48;
	// lvx128 v11,r0,r5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// lvx128 v10,r0,r5
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// lvx128 v9,r0,r5
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82DB1CD0:
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lvx128 v13,r10,r8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v7,v0,v9
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// vand v6,v13,v9
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// vmulfp128 v8,v0,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v0,v13,v10
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// vmaddfp v13,v11,v7,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v12.f32)));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// vmaddfp v7,v11,v6,v12
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v12.f32)));
	// vrefp v6,v13
	_mm_store_ps(ctx.v6.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v13.f32)));
	// vrefp v13,v7
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v8,v6,v8
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v8,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stvx128 v0,r5,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x82db1cd0
	if (!ctx.cr6.eq) goto loc_82DB1CD0;
loc_82DB1D20:
	// clrlwi r8,r6,29
	ctx.r8.u64 = ctx.r6.u32 & 0x7;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82db1d5c
	if (ctx.cr6.eq) goto loc_82DB1D5C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82DB1D34:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fdivs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// stfsx f12,r10,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82db1d34
	if (!ctx.cr6.eq) goto loc_82DB1D34;
loc_82DB1D5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB1D64"))) PPC_WEAK_FUNC(sub_82DB1D64);
PPC_FUNC_IMPL(__imp__sub_82DB1D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1D68"))) PPC_WEAK_FUNC(sub_82DB1D68);
PPC_FUNC_IMPL(__imp__sub_82DB1D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f1,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB1D78"))) PPC_WEAK_FUNC(sub_82DB1D78);
PPC_FUNC_IMPL(__imp__sub_82DB1D78) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// lfs f0,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB1DAC;
	sub_82CB61F0(ctx, base);
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
}

__attribute__((alias("__imp__sub_82DB1DC0"))) PPC_WEAK_FUNC(sub_82DB1DC0);
PPC_FUNC_IMPL(__imp__sub_82DB1DC0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db1dd0
	if (!ctx.cr6.eq) goto loc_82DB1DD0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB1DD0:
	// b 0x82db1b78
	sub_82DB1B78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB1DD4"))) PPC_WEAK_FUNC(sub_82DB1DD4);
PPC_FUNC_IMPL(__imp__sub_82DB1DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1DD8"))) PPC_WEAK_FUNC(sub_82DB1DD8);
PPC_FUNC_IMPL(__imp__sub_82DB1DD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB1DE0"))) PPC_WEAK_FUNC(sub_82DB1DE0);
PPC_FUNC_IMPL(__imp__sub_82DB1DE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB1DE8"))) PPC_WEAK_FUNC(sub_82DB1DE8);
PPC_FUNC_IMPL(__imp__sub_82DB1DE8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db1df8
	if (!ctx.cr6.eq) goto loc_82DB1DF8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB1DF8:
	// b 0x82db1c08
	sub_82DB1C08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB1DFC"))) PPC_WEAK_FUNC(sub_82DB1DFC);
PPC_FUNC_IMPL(__imp__sub_82DB1DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1E00"))) PPC_WEAK_FUNC(sub_82DB1E00);
PPC_FUNC_IMPL(__imp__sub_82DB1E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82db1e10
	if (!ctx.cr6.eq) goto loc_82DB1E10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB1E10:
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f1,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB1E1C"))) PPC_WEAK_FUNC(sub_82DB1E1C);
PPC_FUNC_IMPL(__imp__sub_82DB1E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1E20"))) PPC_WEAK_FUNC(sub_82DB1E20);
PPC_FUNC_IMPL(__imp__sub_82DB1E20) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// bne cr6,0x82db1e40
	if (!ctx.cr6.eq) goto loc_82DB1E40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB1E40:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f1,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,1116
	ctx.r4.s64 = ctx.r10.s64 + 1116;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x82DB1E64;
	sub_82CB61F0(ctx, base);
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
}

__attribute__((alias("__imp__sub_82DB1E78"))) PPC_WEAK_FUNC(sub_82DB1E78);
PPC_FUNC_IMPL(__imp__sub_82DB1E78) {
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r31,r11,25552
	ctx.r31.s64 = ctx.r11.s64 + 25552;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82DB1EA0;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4304
	ctx.r4.s64 = ctx.r11.s64 + 4304;
	// bl 0x82da4448
	ctx.lr = 0x82DB1EB0;
	sub_82DA4448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r4,-32037
	ctx.r4.s64 = -2099576832;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r5,-32037
	ctx.r5.s64 = -2099576832;
	// lis r6,-32037
	ctx.r6.s64 = -2099576832;
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r4,7616
	ctx.r10.s64 = ctx.r4.s64 + 7616;
	// addi r11,r11,25504
	ctx.r11.s64 = ctx.r11.s64 + 25504;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r5,7640
	ctx.r10.s64 = ctx.r5.s64 + 7640;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r10,r6,7648
	ctx.r10.s64 = ctx.r6.s64 + 7648;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r10,r7,7656
	ctx.r10.s64 = ctx.r7.s64 + 7656;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,7680
	ctx.r11.s64 = ctx.r8.s64 + 7680;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r9,7712
	ctx.r11.s64 = ctx.r9.s64 + 7712;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,276
	ctx.r11.s64 = 276;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17812);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82db1f70
	if (!ctx.cr6.lt) goto loc_82DB1F70;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82DB1F70:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82db1ff8
	if (ctx.cr6.gt) goto loc_82DB1FF8;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// addi r12,r12,8088
	ctx.r12.s64 = ctx.r12.s64 + 8088;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DB1FA8;
	case 1:
		goto loc_82DB1FB8;
	case 2:
		goto loc_82DB1FCC;
	case 3:
		goto loc_82DB1FE0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,8104(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8104);
	// lwz r22,8120(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8120);
	// lwz r22,8140(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8140);
	// lwz r22,8160(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8160);
loc_82DB1FA8:
	// addi r11,r11,79
	ctx.r11.s64 = ctx.r11.s64 + 79;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82DB1FB8:
	// subfic r11,r11,16462
	ctx.xer.ca = ctx.r11.u32 <= 16462;
	ctx.r11.s64 = 16462 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_82DB1FCC:
	// addi r11,r11,-16305
	ctx.r11.s64 = ctx.r11.s64 + -16305;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_82DB1FE0:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32846
	ctx.r10.u64 = ctx.r10.u64 | 32846;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82DB1FF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

